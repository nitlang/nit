#include "nitc__nith.classes.0.h"
const struct class *class_info[4] = {
NULL,
&class_core__Int,
&class_core__Char,
&class_core__Bool,
};
const struct type *type_info[4] = {
NULL,
&type_core__Int,
&type_core__Char,
&type_core__Bool,
};
/* runtime class nitc__modelize_property__ModelizePropertyPhase: nitc::modelize_property::ModelizePropertyPhase (dead=false; need_corpse=false)*/
const struct class class_nitc__modelize_property__ModelizePropertyPhase = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Phase___core__kernel__Object__init, /* pointer to modelize_property:ModelizePropertyPhase:phase$Phase$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to modelize_property:ModelizePropertyPhase:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to modelize_property:ModelizePropertyPhase:kernel$Object$sys */
(nitmethod_t)nitc___nitc__Phase___core__abstract_text__Object__to_s, /* pointer to modelize_property:ModelizePropertyPhase:phase$Phase$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to modelize_property:ModelizePropertyPhase:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to modelize_property:ModelizePropertyPhase:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to modelize_property:ModelizePropertyPhase:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to modelize_property:ModelizePropertyPhase:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to modelize_property:ModelizePropertyPhase:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to modelize_property:ModelizePropertyPhase:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to modelize_property:ModelizePropertyPhase:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to modelize_property:ModelizePropertyPhase:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__Phase___toolcontext_61d, /* pointer to modelize_property:ModelizePropertyPhase:phase$Phase$toolcontext= */
(nitmethod_t)nitc___nitc__Phase___depends_61d, /* pointer to modelize_property:ModelizePropertyPhase:phase$Phase$depends= */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy_61d, /* pointer to modelize_property:ModelizePropertyPhase:phase$Phase$in_hierarchy= */
(nitmethod_t)nitc___nitc__Phase___toolcontext, /* pointer to modelize_property:ModelizePropertyPhase:phase$Phase$toolcontext */
(nitmethod_t)nitc___nitc__Phase___depends, /* pointer to modelize_property:ModelizePropertyPhase:phase$Phase$depends */
(nitmethod_t)nitc___nitc__Phase___disabled, /* pointer to modelize_property:ModelizePropertyPhase:phase$Phase$disabled */
(nitmethod_t)nitc__modelbuilder___Phase___process_mainmodule, /* pointer to modelize_property:ModelizePropertyPhase:modelbuilder$Phase$process_mainmodule */
(nitmethod_t)nitc__modelize_property___nitc__modelize_property__ModelizePropertyPhase___nitc__phase__Phase__process_nmodule, /* pointer to modelize_property:ModelizePropertyPhase:modelize_property$ModelizePropertyPhase$process_nmodule */
(nitmethod_t)nitc___nitc__Phase___process_nclassdef, /* pointer to modelize_property:ModelizePropertyPhase:phase$Phase$process_nclassdef */
(nitmethod_t)nitc___nitc__Phase___process_annotated_node, /* pointer to modelize_property:ModelizePropertyPhase:phase$Phase$process_annotated_node */
(nitmethod_t)nitc___nitc__Phase___process_nmodule_after, /* pointer to modelize_property:ModelizePropertyPhase:phase$Phase$process_nmodule_after */
(nitmethod_t)nitc___nitc__Phase___process_npropdef, /* pointer to modelize_property:ModelizePropertyPhase:phase$Phase$process_npropdef */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy, /* pointer to modelize_property:ModelizePropertyPhase:phase$Phase$in_hierarchy */
(nitmethod_t)nitc___nitc__Phase___disabled_61d, /* pointer to modelize_property:ModelizePropertyPhase:phase$Phase$disabled= */
(nitmethod_t)core___core__Object___init, /* pointer to modelize_property:ModelizePropertyPhase:kernel$Object$init */
}
};
/* allocate ModelizePropertyPhase */
val* NEW_nitc__modelize_property__ModelizePropertyPhase(const struct type* type) {
val* self /* : ModelizePropertyPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__modelize_property__ModelizePropertyPhase;
self->attrs[COLOR_nitc__phase__Phase___disabled].s = 0; /* _disabled on <self:ModelizePropertyPhase exact> */
return self;
}
/* runtime class nitc__modelize_class__ModelizeClassPhase: nitc::modelize_class::ModelizeClassPhase (dead=false; need_corpse=false)*/
const struct class class_nitc__modelize_class__ModelizeClassPhase = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Phase___core__kernel__Object__init, /* pointer to modelize_class:ModelizeClassPhase:phase$Phase$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to modelize_class:ModelizeClassPhase:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to modelize_class:ModelizeClassPhase:kernel$Object$sys */
(nitmethod_t)nitc___nitc__Phase___core__abstract_text__Object__to_s, /* pointer to modelize_class:ModelizeClassPhase:phase$Phase$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to modelize_class:ModelizeClassPhase:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to modelize_class:ModelizeClassPhase:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to modelize_class:ModelizeClassPhase:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to modelize_class:ModelizeClassPhase:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to modelize_class:ModelizeClassPhase:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to modelize_class:ModelizeClassPhase:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to modelize_class:ModelizeClassPhase:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to modelize_class:ModelizeClassPhase:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__Phase___toolcontext_61d, /* pointer to modelize_class:ModelizeClassPhase:phase$Phase$toolcontext= */
(nitmethod_t)nitc___nitc__Phase___depends_61d, /* pointer to modelize_class:ModelizeClassPhase:phase$Phase$depends= */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy_61d, /* pointer to modelize_class:ModelizeClassPhase:phase$Phase$in_hierarchy= */
(nitmethod_t)nitc___nitc__Phase___toolcontext, /* pointer to modelize_class:ModelizeClassPhase:phase$Phase$toolcontext */
(nitmethod_t)nitc___nitc__Phase___depends, /* pointer to modelize_class:ModelizeClassPhase:phase$Phase$depends */
(nitmethod_t)nitc___nitc__Phase___disabled, /* pointer to modelize_class:ModelizeClassPhase:phase$Phase$disabled */
(nitmethod_t)nitc__modelbuilder___Phase___process_mainmodule, /* pointer to modelize_class:ModelizeClassPhase:modelbuilder$Phase$process_mainmodule */
(nitmethod_t)nitc__modelize_class___nitc__modelize_class__ModelizeClassPhase___nitc__phase__Phase__process_nmodule, /* pointer to modelize_class:ModelizeClassPhase:modelize_class$ModelizeClassPhase$process_nmodule */
(nitmethod_t)nitc___nitc__Phase___process_nclassdef, /* pointer to modelize_class:ModelizeClassPhase:phase$Phase$process_nclassdef */
(nitmethod_t)nitc___nitc__Phase___process_annotated_node, /* pointer to modelize_class:ModelizeClassPhase:phase$Phase$process_annotated_node */
(nitmethod_t)nitc___nitc__Phase___process_nmodule_after, /* pointer to modelize_class:ModelizeClassPhase:phase$Phase$process_nmodule_after */
(nitmethod_t)nitc___nitc__Phase___process_npropdef, /* pointer to modelize_class:ModelizeClassPhase:phase$Phase$process_npropdef */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy, /* pointer to modelize_class:ModelizeClassPhase:phase$Phase$in_hierarchy */
(nitmethod_t)nitc___nitc__Phase___disabled_61d, /* pointer to modelize_class:ModelizeClassPhase:phase$Phase$disabled= */
(nitmethod_t)core___core__Object___init, /* pointer to modelize_class:ModelizeClassPhase:kernel$Object$init */
}
};
/* allocate ModelizeClassPhase */
val* NEW_nitc__modelize_class__ModelizeClassPhase(const struct type* type) {
val* self /* : ModelizeClassPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__modelize_class__ModelizeClassPhase;
self->attrs[COLOR_nitc__phase__Phase___disabled].s = 0; /* _disabled on <self:ModelizeClassPhase exact> */
return self;
}
/* runtime class nitc__ModelBuilder: nitc::ModelBuilder (dead=false; need_corpse=false)*/
const struct class class_nitc__ModelBuilder = {
0, /* box_kind */
{
(nitmethod_t)nitc__loader___ModelBuilder___core__kernel__Object__init, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to modelbuilder_base:ModelBuilder:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to modelbuilder_base:ModelBuilder:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to modelbuilder_base:ModelBuilder:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to modelbuilder_base:ModelBuilder:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to modelbuilder_base:ModelBuilder:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to modelbuilder_base:ModelBuilder:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to modelbuilder_base:ModelBuilder:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to modelbuilder_base:ModelBuilder:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to modelbuilder_base:ModelBuilder:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to modelbuilder_base:ModelBuilder:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to modelbuilder_base:ModelBuilder:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__ModelBuilder___model_61d, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base$ModelBuilder$model= */
(nitmethod_t)nitc___nitc__ModelBuilder___toolcontext_61d, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base$ModelBuilder$toolcontext= */
(nitmethod_t)nitc__loader___ModelBuilder___parse, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$parse */
(nitmethod_t)nitc__modelbuilder___ModelBuilder___run_phases, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder$ModelBuilder$run_phases */
(nitmethod_t)nitc__loader___ModelBuilder___paths, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$paths */
(nitmethod_t)nitc___nitc__ModelBuilder___toolcontext, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base$ModelBuilder$toolcontext */
(nitmethod_t)nitc__loader___ModelBuilder___load_module, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$load_module */
(nitmethod_t)nitc__loader___ModelBuilder___parsed_modules, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$parsed_modules */
(nitmethod_t)nitc___nitc__ModelBuilder___model, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base$ModelBuilder$model */
(nitmethod_t)nitc__loader___ModelBuilder___mmodule2node, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$mmodule2node */
(nitmethod_t)nitc__loader___ModelBuilder___identify_module, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$identify_module */
(nitmethod_t)nitc__loader___ModelBuilder___last_loader_error, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$last_loader_error */
(nitmethod_t)nitc__loader___ModelBuilder___mmodule2nmodule, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$mmodule2nmodule */
(nitmethod_t)nitc__rapid_type_analysis___ModelBuilder___do_rapid_type_analysis, /* pointer to modelbuilder_base:ModelBuilder:rapid_type_analysis$ModelBuilder$do_rapid_type_analysis */
(nitmethod_t)nitc__separate_compiler___ModelBuilder___run_separate_compiler, /* pointer to modelbuilder_base:ModelBuilder:separate_compiler$ModelBuilder$run_separate_compiler */
(nitmethod_t)nitc__separate_erasure_compiler___ModelBuilder___run_separate_erasure_compiler, /* pointer to modelbuilder_base:ModelBuilder:separate_erasure_compiler$ModelBuilder$run_separate_erasure_compiler */
(nitmethod_t)nitc__loader___ModelBuilder___last_loader_error_61d, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$last_loader_error= */
(nitmethod_t)nitc__loader___ModelBuilder___search_module_in_paths, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$search_module_in_paths */
(nitmethod_t)nitc__loader___ModelBuilder___identify_group, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$identify_group */
(nitmethod_t)nitc__loader___ModelBuilder___scan_group, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$scan_group */
(nitmethod_t)nitc__loader___ModelBuilder___identified_modules_by_path, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$identified_modules_by_path */
(nitmethod_t)nitc__loader___ModelBuilder___module_absolute_path, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$module_absolute_path */
(nitmethod_t)nitc__loader___ModelBuilder___identified_modules, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$identified_modules */
(nitmethod_t)nitc__loader___ModelBuilder___build_module_importation, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$build_module_importation */
(nitmethod_t)nitc__modelize_class___ModelBuilder___build_classes, /* pointer to modelbuilder_base:ModelBuilder:modelize_class$ModelBuilder$build_classes */
(nitmethod_t)nitc__modelize_property___ModelBuilder___build_properties, /* pointer to modelbuilder_base:ModelBuilder:modelize_property$ModelBuilder$build_properties */
(nitmethod_t)nitc___nitc__ModelBuilder___error, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base$ModelBuilder$error */
(nitmethod_t)nitc__loader___ModelBuilder___apply_conditional_importations, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$apply_conditional_importations */
(nitmethod_t)nitc__abstract_compiler___ModelBuilder___write_and_make, /* pointer to modelbuilder_base:ModelBuilder:abstract_compiler$ModelBuilder$write_and_make */
(nitmethod_t)nitc__loader___ModelBuilder___mgroups, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$mgroups */
(nitmethod_t)nitc__loader___ModelBuilder___load_markdown, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$load_markdown */
(nitmethod_t)nitc__loader___ModelBuilder___load_module_ast, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$load_module_ast */
(nitmethod_t)nitc__loader___ModelBuilder___build_a_mmodule, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$build_a_mmodule */
(nitmethod_t)nitc__loader___ModelBuilder___seach_module_by_amodule_name, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$seach_module_by_amodule_name */
(nitmethod_t)nitc__loader___ModelBuilder___get_mmodule_by_name, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$get_mmodule_by_name */
(nitmethod_t)nitc__loader___ModelBuilder___search_mmodule_by_name, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$search_mmodule_by_name */
(nitmethod_t)nitc__loader___ModelBuilder___conditional_importations, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$conditional_importations */
(nitmethod_t)nitc__modelize_class___ModelBuilder___build_a_mclass, /* pointer to modelbuilder_base:ModelBuilder:modelize_class$ModelBuilder$build_a_mclass */
(nitmethod_t)nitc__modelize_class___ModelBuilder___build_a_mclassdef, /* pointer to modelbuilder_base:ModelBuilder:modelize_class$ModelBuilder$build_a_mclassdef */
(nitmethod_t)nitc__modelize_class___ModelBuilder___collect_a_mclassdef_inheritance, /* pointer to modelbuilder_base:ModelBuilder:modelize_class$ModelBuilder$collect_a_mclassdef_inheritance */
(nitmethod_t)nitc__modelize_class___ModelBuilder___check_supertypes, /* pointer to modelbuilder_base:ModelBuilder:modelize_class$ModelBuilder$check_supertypes */
(nitmethod_t)nitc___nitc__ModelBuilder___resolve_mtype, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base$ModelBuilder$resolve_mtype */
(nitmethod_t)nitc___nitc__ModelBuilder___try_get_mclass_by_name, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base$ModelBuilder$try_get_mclass_by_name */
(nitmethod_t)nitc___nitc__ModelBuilder___warning, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base$ModelBuilder$warning */
(nitmethod_t)nitc__modelize_class___ModelBuilder___mclassdef2nclassdef, /* pointer to modelbuilder_base:ModelBuilder:modelize_class$ModelBuilder$mclassdef2nclassdef */
(nitmethod_t)nitc__modelize_property___ModelBuilder___check_virtual_types_circularity, /* pointer to modelbuilder_base:ModelBuilder:modelize_property$ModelBuilder$check_virtual_types_circularity */
(nitmethod_t)nitc__modelize_property___ModelBuilder___process_default_constructors, /* pointer to modelbuilder_base:ModelBuilder:modelize_property$ModelBuilder$process_default_constructors */
(nitmethod_t)nitc__modelize_property___ModelBuilder___mpropdef2node, /* pointer to modelbuilder_base:ModelBuilder:modelize_property$ModelBuilder$mpropdef2node */
(nitmethod_t)nitc___nitc__ModelBuilder___force_get_primitive_method, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base$ModelBuilder$force_get_primitive_method */
(nitmethod_t)nitc__separate_compiler___ModelBuilder___nb_invok_by_tables, /* pointer to modelbuilder_base:ModelBuilder:separate_compiler$ModelBuilder$nb_invok_by_tables */
(nitmethod_t)nitc__separate_compiler___ModelBuilder___nb_invok_by_direct, /* pointer to modelbuilder_base:ModelBuilder:separate_compiler$ModelBuilder$nb_invok_by_direct */
(nitmethod_t)nitc__separate_compiler___ModelBuilder___nb_invok_by_inline, /* pointer to modelbuilder_base:ModelBuilder:separate_compiler$ModelBuilder$nb_invok_by_inline */
(nitmethod_t)nitc__loader___ModelBuilder___nmodules, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$nmodules */
(nitmethod_t)nitc__loader___ModelBuilder___match_amodulename, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$match_amodulename */
(nitmethod_t)nitc__loader___ModelBuilder___search_group_in_paths, /* pointer to modelbuilder_base:ModelBuilder:loader$ModelBuilder$search_group_in_paths */
(nitmethod_t)nitc___nitc__ModelBuilder___try_get_mclass_by_qid, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base$ModelBuilder$try_get_mclass_by_qid */
(nitmethod_t)nitc___nitc__ModelBuilder___class_not_found, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base$ModelBuilder$class_not_found */
(nitmethod_t)nitc___nitc__ModelBuilder___resolve_mtype_unchecked, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base$ModelBuilder$resolve_mtype_unchecked */
(nitmethod_t)nitc___nitc__ModelBuilder___advice, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base$ModelBuilder$advice */
(nitmethod_t)nitc___nitc__ModelBuilder___check_subtype, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base$ModelBuilder$check_subtype */
(nitmethod_t)nitc___nitc__ModelBuilder___try_get_mproperty_by_name, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base$ModelBuilder$try_get_mproperty_by_name */
(nitmethod_t)nitc__modelize_property___ModelBuilder___mpropdef2npropdef, /* pointer to modelbuilder_base:ModelBuilder:modelize_property$ModelBuilder$mpropdef2npropdef */
(nitmethod_t)nitc__modelize_property___ModelBuilder___the_root_init_mmethod, /* pointer to modelbuilder_base:ModelBuilder:modelize_property$ModelBuilder$the_root_init_mmethod */
(nitmethod_t)nitc__modelize_property___ModelBuilder___the_root_init_mmethod_61d, /* pointer to modelbuilder_base:ModelBuilder:modelize_property$ModelBuilder$the_root_init_mmethod= */
(nitmethod_t)nitc__modelize_property___ModelBuilder___collect_attr_propdef, /* pointer to modelbuilder_base:ModelBuilder:modelize_property$ModelBuilder$collect_attr_propdef */
(nitmethod_t)nitc___nitc__ModelBuilder___bad_class_names, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base$ModelBuilder$bad_class_names */
(nitmethod_t)nitc___nitc__ModelBuilder___try_get_mproperty_by_name2, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base$ModelBuilder$try_get_mproperty_by_name2 */
(nitmethod_t)nitc___nitc__ModelBuilder___try_get_mproperty_by_name2_cache, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base$ModelBuilder$try_get_mproperty_by_name2_cache */
(nitmethod_t)nitc__separate_compiler___ModelBuilder___nb_invok_by_tables_61d, /* pointer to modelbuilder_base:ModelBuilder:separate_compiler$ModelBuilder$nb_invok_by_tables= */
(nitmethod_t)nitc__separate_compiler___ModelBuilder___nb_invok_by_inline_61d, /* pointer to modelbuilder_base:ModelBuilder:separate_compiler$ModelBuilder$nb_invok_by_inline= */
(nitmethod_t)nitc__separate_compiler___ModelBuilder___nb_invok_by_direct_61d, /* pointer to modelbuilder_base:ModelBuilder:separate_compiler$ModelBuilder$nb_invok_by_direct= */
(nitmethod_t)nitc___nitc__ModelBuilder___check_sametype, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base$ModelBuilder$check_sametype */
(nitmethod_t)nitc__modelize_property___ModelBuilder___check_visibility, /* pointer to modelbuilder_base:ModelBuilder:modelize_property$ModelBuilder$check_visibility */
(nitmethod_t)nitc___nitc__ModelBuilder___get_mclass_by_name, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base$ModelBuilder$get_mclass_by_name */
(nitmethod_t)nitc___nitc__ModelBuilder___core__kernel__Object__init, /* pointer to modelbuilder_base:ModelBuilder:modelbuilder_base$ModelBuilder$init */
(nitmethod_t)core___core__Object___init, /* pointer to modelbuilder_base:ModelBuilder:kernel$Object$init */
}
};
/* allocate ModelBuilder */
val* NEW_nitc__ModelBuilder(const struct type* type) {
val* self /* : ModelBuilder */;
val* var /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var1 /* : MultiHashMap[MModule, String] */;
val* var2 /* : Array[String] */;
val* var3 /* : HashMap[String, nullable MModule] */;
val* var4 /* : Array[MModule] */;
val* var5 /* : Array[MModule] */;
val* var6 /* : HashMap[String, nullable MGroup] */;
val* var7 /* : Array[SequenceRead[MModule]] */;
val* var8 /* : Array[AModule] */;
val* var9 /* : HashMap[MModule, AModule] */;
val* var10 /* : HashMap[MClassDef, AClassdef] */;
val* var11 /* : HashMap[String, MModuleData[AAnnotation]] */;
val* var12 /* : HashMap[MPropDef, APropdef] */;
self = nit_alloc(sizeof(struct instance) + 20*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ModelBuilder;
var = NEW_more_collections__HashMap3(&type_more_collections__HashMap3__nitc__MModule__nitc__MType__core__String__nullable__nitc__MProperty);
{
{ /* Inline kernel$Object$init (var) on <var:HashMap3[MModule, MType, String, nullable MProperty]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___try_get_mproperty_by_name2_cache].val = var; /* _try_get_mproperty_by_name2_cache on <self:ModelBuilder exact> */
var1 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMap__nitc__MModule__core__String);
{
core___core__HashMap___core__kernel__Object__init(var1); /* Direct call hash_collection$HashMap$init on <var1:MultiHashMap[MModule, String]>*/
}
self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___bad_class_names].val = var1; /* _bad_class_names on <self:ModelBuilder exact> */
var2 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array$Array$init on <var2:Array[String]>*/
}
self->attrs[COLOR_nitc__loader__ModelBuilder___paths].val = var2; /* _paths on <self:ModelBuilder exact> */
var3 = NEW_core__HashMap(&type_core__HashMap__core__String__nullable__nitc__MModule);
{
core___core__HashMap___core__kernel__Object__init(var3); /* Direct call hash_collection$HashMap$init on <var3:HashMap[String, nullable MModule]>*/
}
self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules_by_path].val = var3; /* _identified_modules_by_path on <self:ModelBuilder exact> */
var4 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array$Array$init on <var4:Array[MModule]>*/
}
self->attrs[COLOR_nitc__loader__ModelBuilder___identified_modules].val = var4; /* _identified_modules on <self:ModelBuilder exact> */
var5 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array$Array$init on <var5:Array[MModule]>*/
}
self->attrs[COLOR_nitc__loader__ModelBuilder___parsed_modules].val = var5; /* _parsed_modules on <self:ModelBuilder exact> */
var6 = NEW_core__HashMap(&type_core__HashMap__core__String__nullable__nitc__MGroup);
{
core___core__HashMap___core__kernel__Object__init(var6); /* Direct call hash_collection$HashMap$init on <var6:HashMap[String, nullable MGroup]>*/
}
self->attrs[COLOR_nitc__loader__ModelBuilder___mgroups].val = var6; /* _mgroups on <self:ModelBuilder exact> */
var7 = NEW_core__Array(&type_core__Array__core__SequenceRead__nitc__MModule);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array$Array$init on <var7:Array[SequenceRead[MModule]]>*/
}
self->attrs[COLOR_nitc__loader__ModelBuilder___conditional_importations].val = var7; /* _conditional_importations on <self:ModelBuilder exact> */
var8 = NEW_core__Array(&type_core__Array__nitc__AModule);
{
core___core__Array___core__kernel__Object__init(var8); /* Direct call array$Array$init on <var8:Array[AModule]>*/
}
self->attrs[COLOR_nitc__loader__ModelBuilder___nmodules].val = var8; /* _nmodules on <self:ModelBuilder exact> */
var9 = NEW_core__HashMap(&type_core__HashMap__nitc__MModule__nitc__AModule);
{
core___core__HashMap___core__kernel__Object__init(var9); /* Direct call hash_collection$HashMap$init on <var9:HashMap[MModule, AModule]>*/
}
self->attrs[COLOR_nitc__loader__ModelBuilder___mmodule2nmodule].val = var9; /* _mmodule2nmodule on <self:ModelBuilder exact> */
var10 = NEW_core__HashMap(&type_core__HashMap__nitc__MClassDef__nitc__AClassdef);
{
core___core__HashMap___core__kernel__Object__init(var10); /* Direct call hash_collection$HashMap$init on <var10:HashMap[MClassDef, AClassdef]>*/
}
self->attrs[COLOR_nitc__modelize_class__ModelBuilder___mclassdef2nclassdef].val = var10; /* _mclassdef2nclassdef on <self:ModelBuilder exact> */
var11 = NEW_core__HashMap(&type_core__HashMap__core__String__nitc__MModuleData__nitc__AAnnotation);
{
core___core__HashMap___core__kernel__Object__init(var11); /* Direct call hash_collection$HashMap$init on <var11:HashMap[String, MModuleData[AAnnotation]]>*/
}
self->attrs[COLOR_nitc__annotation__ModelBuilder___collect_annotations_data_cache].val = var11; /* _collect_annotations_data_cache on <self:ModelBuilder exact> */
var12 = NEW_core__HashMap(&type_core__HashMap__nitc__MPropDef__nitc__APropdef);
{
core___core__HashMap___core__kernel__Object__init(var12); /* Direct call hash_collection$HashMap$init on <var12:HashMap[MPropDef, APropdef]>*/
}
self->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val = var12; /* _mpropdef2npropdef on <self:ModelBuilder exact> */
self->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_tables].l = 0l; /* _nb_invok_by_tables on <self:ModelBuilder exact> */
self->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_direct].l = 0l; /* _nb_invok_by_direct on <self:ModelBuilder exact> */
self->attrs[COLOR_nitc__separate_compiler__ModelBuilder___nb_invok_by_inline].l = 0l; /* _nb_invok_by_inline on <self:ModelBuilder exact> */
return self;
}
/* runtime class nitc__MEntityTree: nitc::MEntityTree (dead=true; need_corpse=false)*/
/* allocate MEntityTree */
val* NEW_nitc__MEntityTree(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "MEntityTree is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__ConcernsTree: nitc::ConcernsTree (dead=true; need_corpse=false)*/
/* allocate ConcernsTree */
val* NEW_nitc__ConcernsTree(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "ConcernsTree is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__model__MClassDefSorter: nitc::model::MClassDefSorter (dead=false; need_corpse=false)*/
const struct class class_nitc__model__MClassDefSorter = {
0, /* box_kind */
{
(nitmethod_t)nitc__model___nitc__model__MClassDefSorter___core__kernel__Object__init, /* pointer to model:MClassDefSorter:model$MClassDefSorter$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MClassDefSorter:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MClassDefSorter:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to model:MClassDefSorter:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MClassDefSorter:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MClassDefSorter:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MClassDefSorter:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MClassDefSorter:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MClassDefSorter:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MClassDefSorter:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MClassDefSorter:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MClassDefSorter:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Comparator___sort, /* pointer to model:MClassDefSorter:sorter$Comparator$sort */
(nitmethod_t)core___core__Comparator___sub_sort, /* pointer to model:MClassDefSorter:sorter$Comparator$sub_sort */
(nitmethod_t)core___core__Comparator___quick_sort, /* pointer to model:MClassDefSorter:sorter$Comparator$quick_sort */
(nitmethod_t)core___core__Comparator___bubble_sort, /* pointer to model:MClassDefSorter:sorter$Comparator$bubble_sort */
(nitmethod_t)nitc__model___nitc__model__MClassDefSorter___core__sorter__Comparator__compare, /* pointer to model:MClassDefSorter:model$MClassDefSorter$compare */
(nitmethod_t)nitc__model___nitc__model__MClassDefSorter___mmodule_61d, /* pointer to model:MClassDefSorter:model$MClassDefSorter$mmodule= */
(nitmethod_t)nitc__model___nitc__model__MClassDefSorter___mmodule, /* pointer to model:MClassDefSorter:model$MClassDefSorter$mmodule */
(nitmethod_t)core___core__Object___init, /* pointer to model:MClassDefSorter:kernel$Object$init */
}
};
/* allocate MClassDefSorter */
val* NEW_nitc__model__MClassDefSorter(const struct type* type) {
val* self /* : MClassDefSorter */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__model__MClassDefSorter;
return self;
}
/* runtime class nitc__model__MPropDefSorter: nitc::model::MPropDefSorter (dead=false; need_corpse=false)*/
const struct class class_nitc__model__MPropDefSorter = {
0, /* box_kind */
{
(nitmethod_t)nitc__model___nitc__model__MPropDefSorter___core__kernel__Object__init, /* pointer to model:MPropDefSorter:model$MPropDefSorter$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MPropDefSorter:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MPropDefSorter:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to model:MPropDefSorter:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MPropDefSorter:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MPropDefSorter:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MPropDefSorter:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MPropDefSorter:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MPropDefSorter:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MPropDefSorter:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MPropDefSorter:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MPropDefSorter:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Comparator___sort, /* pointer to model:MPropDefSorter:sorter$Comparator$sort */
(nitmethod_t)core___core__Comparator___sub_sort, /* pointer to model:MPropDefSorter:sorter$Comparator$sub_sort */
(nitmethod_t)core___core__Comparator___quick_sort, /* pointer to model:MPropDefSorter:sorter$Comparator$quick_sort */
(nitmethod_t)core___core__Comparator___bubble_sort, /* pointer to model:MPropDefSorter:sorter$Comparator$bubble_sort */
(nitmethod_t)nitc__model___nitc__model__MPropDefSorter___core__sorter__Comparator__compare, /* pointer to model:MPropDefSorter:model$MPropDefSorter$compare */
(nitmethod_t)nitc__model___nitc__model__MPropDefSorter___mmodule_61d, /* pointer to model:MPropDefSorter:model$MPropDefSorter$mmodule= */
(nitmethod_t)nitc__model___nitc__model__MPropDefSorter___mmodule, /* pointer to model:MPropDefSorter:model$MPropDefSorter$mmodule */
(nitmethod_t)core___core__Object___init, /* pointer to model:MPropDefSorter:kernel$Object$init */
}
};
/* allocate MPropDefSorter */
val* NEW_nitc__model__MPropDefSorter(const struct type* type) {
val* self /* : MPropDefSorter */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__model__MPropDefSorter;
return self;
}
/* runtime class nitc__MClass: nitc::MClass (dead=false; need_corpse=false)*/
const struct class class_nitc__MClass = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MClass___core__kernel__Object__init, /* pointer to model:MClass:model$MClass$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MClass:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MClass:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MClass___core__abstract_text__Object__to_s, /* pointer to model:MClass:model$MClass$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MClass:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MClass:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MClass:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MClass:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MClass:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MClass:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MClass:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MClass:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MClass___nitc__model_base__MEntity__c_name, /* pointer to model:MClass:model$MClass$c_name */
(nitmethod_t)nitc___nitc__MClass___nitc__model_base__MEntity__model, /* pointer to model:MClass:model$MClass$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to model:MClass:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MClass___nitc__model_base__MEntity__location, /* pointer to model:MClass:model$MClass$location */
(nitmethod_t)nitc___nitc__MClass___nitc__model_base__MEntity__name, /* pointer to model:MClass:model$MClass$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to model:MClass:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc___nitc__MClass___MEntity__visibility, /* pointer to model:MClass:model$MClass$visibility */
(nitmethod_t)nitc___nitc__MClass___nitc__model_base__MEntity__full_name, /* pointer to model:MClass:model$MClass$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to model:MClass:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to model:MClass:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to model:MClass:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to model:MClass:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to model:MClass:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to model:MClass:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to model:MClass:mdoc$MEntity$deprecation */
(nitmethod_t)nitc___nitc__MClass___mclass_type, /* pointer to model:MClass:model$MClass$mclass_type */
(nitmethod_t)nitc___nitc__MClass___intro_mmodule, /* pointer to model:MClass:model$MClass$intro_mmodule */
(nitmethod_t)nitc___nitc__MClass___kind, /* pointer to model:MClass:model$MClass$kind */
(nitmethod_t)nitc__extern_classes___MClass___compute_ftype, /* pointer to model:MClass:extern_classes$MClass$compute_ftype */
(nitmethod_t)nitc___nitc__MClass___intro_mmodule_61d, /* pointer to model:MClass:model$MClass$intro_mmodule= */
(nitmethod_t)nitc___nitc__MClass___name_61d, /* pointer to model:MClass:model$MClass$name= */
(nitmethod_t)nitc___nitc__MClass___location_61d, /* pointer to model:MClass:model$MClass$location= */
(nitmethod_t)nitc___nitc__MClass___setup_parameter_names, /* pointer to model:MClass:model$MClass$setup_parameter_names */
(nitmethod_t)nitc___nitc__MClass___kind_61d, /* pointer to model:MClass:model$MClass$kind= */
(nitmethod_t)nitc___nitc__MClass___visibility_61d, /* pointer to model:MClass:model$MClass$visibility= */
(nitmethod_t)nitc___nitc__MClass___mclassdefs, /* pointer to model:MClass:model$MClass$mclassdefs */
(nitmethod_t)nitc___nitc__MClass___intro_61d, /* pointer to model:MClass:model$MClass$intro= */
(nitmethod_t)nitc___nitc__MClass___intro, /* pointer to model:MClass:model$MClass$intro */
(nitmethod_t)nitc__extern_classes___MClass___ftype_computed, /* pointer to model:MClass:extern_classes$MClass$ftype_computed */
(nitmethod_t)nitc__extern_classes___MClass___ftype_cache, /* pointer to model:MClass:extern_classes$MClass$ftype_cache */
(nitmethod_t)nitc__extern_classes___MClass___ftype_cache_61d, /* pointer to model:MClass:extern_classes$MClass$ftype_cache= */
(nitmethod_t)nitc__extern_classes___MClass___ftype_computed_61d, /* pointer to model:MClass:extern_classes$MClass$ftype_computed= */
(nitmethod_t)nitc___nitc__MClass___in_hierarchy, /* pointer to model:MClass:model$MClass$in_hierarchy */
(nitmethod_t)nitc___nitc__MClass___arity_61d, /* pointer to model:MClass:model$MClass$arity= */
(nitmethod_t)nitc___nitc__MClass___arity, /* pointer to model:MClass:model$MClass$arity */
(nitmethod_t)nitc___nitc__MClass___mparameters_61d, /* pointer to model:MClass:model$MClass$mparameters= */
(nitmethod_t)nitc___nitc__MClass___mclass_type_61d, /* pointer to model:MClass:model$MClass$mclass_type= */
(nitmethod_t)nitc___nitc__MClass___get_mtype_cache, /* pointer to model:MClass:model$MClass$get_mtype_cache */
(nitmethod_t)nitc___nitc__MClass___try_intro, /* pointer to model:MClass:model$MClass$try_intro */
(nitmethod_t)nitc___nitc__MClass___signature_to_s, /* pointer to model:MClass:model$MClass$signature_to_s */
(nitmethod_t)nitc___nitc__MClass___mparameters, /* pointer to model:MClass:model$MClass$mparameters */
(nitmethod_t)nitc___nitc__MClass___get_mtype, /* pointer to model:MClass:model$MClass$get_mtype */
(nitmethod_t)nitc__modelize_property___MClass___root_init_61d, /* pointer to model:MClass:modelize_property$MClass$root_init= */
(nitmethod_t)nitc___nitc__MClass___has_new_factory, /* pointer to model:MClass:model$MClass$has_new_factory */
(nitmethod_t)nitc___nitc__MClass___has_new_factory_61d, /* pointer to model:MClass:model$MClass$has_new_factory= */
(nitmethod_t)nitc__modelize_property___MClass___root_init, /* pointer to model:MClass:modelize_property$MClass$root_init */
(nitmethod_t)nitc__extern_classes___MClass___ctype, /* pointer to model:MClass:extern_classes$MClass$ctype */
(nitmethod_t)core___core__Object___init, /* pointer to model:MClass:kernel$Object$init */
}
};
/* allocate MClass */
val* NEW_nitc__MClass(const struct type* type) {
val* self /* : MClass */;
val* var /* : Array[MParameterType] */;
val* var1 /* : Array[MClassDef] */;
val* var2 /* : HashMap[Array[MType], MGenericType] */;
self = nit_alloc(sizeof(struct instance) + 33*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MClass;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MClass exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MClass exact> */
var = NEW_core__Array(&type_core__Array__nitc__MParameterType);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[MParameterType]>*/
}
self->attrs[COLOR_nitc__model__MClass___mparameters].val = var; /* _mparameters on <self:MClass exact> */
var1 = NEW_core__Array(&type_core__Array__nitc__MClassDef);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[MClassDef]>*/
}
self->attrs[COLOR_nitc__model__MClass___mclassdefs].val = var1; /* _mclassdefs on <self:MClass exact> */
var2 = NEW_core__HashMap(&type_core__HashMap__core__Array__nitc__MType__nitc__MGenericType);
{
core___core__HashMap___core__kernel__Object__init(var2); /* Direct call hash_collection$HashMap$init on <var2:HashMap[Array[MType], MGenericType]>*/
}
self->attrs[COLOR_nitc__model__MClass___get_mtype_cache].val = var2; /* _get_mtype_cache on <self:MClass exact> */
self->attrs[COLOR_nitc__model__MClass___has_new_factory].s = 0; /* _has_new_factory on <self:MClass exact> */
self->attrs[COLOR_nitc__extern_classes__MClass___ftype_computed].s = 0; /* _ftype_computed on <self:MClass exact> */
return self;
}
/* runtime class nitc__MClassDef: nitc::MClassDef (dead=false; need_corpse=false)*/
const struct class class_nitc__MClassDef = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MClassDef___core__kernel__Object__init, /* pointer to model:MClassDef:model$MClassDef$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MClassDef:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MClassDef:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MClassDef___core__abstract_text__Object__to_s, /* pointer to model:MClassDef:model$MClassDef$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MClassDef:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MClassDef:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MClassDef:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MClassDef:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MClassDef:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MClassDef:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MClassDef:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MClassDef:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MClassDef___nitc__model_base__MEntity__c_name, /* pointer to model:MClassDef:model$MClassDef$c_name */
(nitmethod_t)nitc___nitc__MClassDef___nitc__model_base__MEntity__model, /* pointer to model:MClassDef:model$MClassDef$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to model:MClassDef:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MClassDef___nitc__model_base__MEntity__location, /* pointer to model:MClassDef:model$MClassDef$location */
(nitmethod_t)nitc___nitc__MClassDef___nitc__model_base__MEntity__name, /* pointer to model:MClassDef:model$MClassDef$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to model:MClassDef:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc___nitc__MClassDef___MEntity__visibility, /* pointer to model:MClassDef:model$MClassDef$visibility */
(nitmethod_t)nitc___nitc__MClassDef___nitc__model_base__MEntity__full_name, /* pointer to model:MClassDef:model$MClassDef$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to model:MClassDef:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to model:MClassDef:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to model:MClassDef:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to model:MClassDef:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to model:MClassDef:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to model:MClassDef:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to model:MClassDef:mdoc$MEntity$deprecation */
(nitmethod_t)nitc___nitc__MClassDef___is_intro, /* pointer to model:MClassDef:model$MClassDef$is_intro */
(nitmethod_t)nitc___nitc__MClassDef___mmodule, /* pointer to model:MClassDef:model$MClassDef$mmodule */
(nitmethod_t)nitc___nitc__MClassDef___mclass, /* pointer to model:MClassDef:model$MClassDef$mclass */
(nitmethod_t)nitc___nitc__MClassDef___mmodule_61d, /* pointer to model:MClassDef:model$MClassDef$mmodule= */
(nitmethod_t)nitc___nitc__MClassDef___bound_mtype_61d, /* pointer to model:MClassDef:model$MClassDef$bound_mtype= */
(nitmethod_t)nitc___nitc__MClassDef___location_61d, /* pointer to model:MClassDef:model$MClassDef$location= */
(nitmethod_t)nitc___nitc__MClassDef___add_in_hierarchy, /* pointer to model:MClassDef:model$MClassDef$add_in_hierarchy */
(nitmethod_t)nitc__extern_classes___MClassDef___ftype_cache_61d, /* pointer to model:MClassDef:extern_classes$MClassDef$ftype_cache= */
(nitmethod_t)nitc__extern_classes___MClassDef___ftype_computed_61d, /* pointer to model:MClassDef:extern_classes$MClassDef$ftype_computed= */
(nitmethod_t)nitc___nitc__MClassDef___set_supertypes, /* pointer to model:MClassDef:model$MClassDef$set_supertypes */
(nitmethod_t)nitc___nitc__MClassDef___mclass_61d, /* pointer to model:MClassDef:model$MClassDef$mclass= */
(nitmethod_t)nitc___nitc__MClassDef___bound_mtype, /* pointer to model:MClassDef:model$MClassDef$bound_mtype */
(nitmethod_t)nitc___nitc__MClassDef___to_s_61d, /* pointer to model:MClassDef:model$MClassDef$to_s= */
(nitmethod_t)nitc___nitc__MClassDef___in_hierarchy, /* pointer to model:MClassDef:model$MClassDef$in_hierarchy */
(nitmethod_t)nitc___nitc__MClassDef___in_hierarchy_61d, /* pointer to model:MClassDef:model$MClassDef$in_hierarchy= */
(nitmethod_t)nitc___nitc__MClassDef___mpropdefs, /* pointer to model:MClassDef:model$MClassDef$mpropdefs */
(nitmethod_t)nitc___nitc__MClassDef___mpropdefs_by_property, /* pointer to model:MClassDef:model$MClassDef$mpropdefs_by_property */
(nitmethod_t)nitc___nitc__MClassDef___supertypes, /* pointer to model:MClassDef:model$MClassDef$supertypes */
(nitmethod_t)nitc__modelize_property___MClassDef___build_self_type, /* pointer to model:MClassDef:modelize_property$MClassDef$build_self_type */
(nitmethod_t)nitc__extern_classes___MClassDef___ftype, /* pointer to model:MClassDef:extern_classes$MClassDef$ftype */
(nitmethod_t)nitc__extern_classes___MClassDef___ftype_cache, /* pointer to model:MClassDef:extern_classes$MClassDef$ftype_cache */
(nitmethod_t)nitc___nitc__MClassDef___intro_mproperties, /* pointer to model:MClassDef:model$MClassDef$intro_mproperties */
(nitmethod_t)nitc__modelize_property___MClassDef___mprop2npropdef, /* pointer to model:MClassDef:modelize_property$MClassDef$mprop2npropdef */
(nitmethod_t)core___core__Object___init, /* pointer to model:MClassDef:kernel$Object$init */
}
};
/* allocate MClassDef */
val* NEW_nitc__MClassDef(const struct type* type) {
val* self /* : MClassDef */;
val* var /* : Array[MClassType] */;
val* var1 /* : Array[MProperty] */;
val* var2 /* : Array[MPropDef] */;
val* var3 /* : HashMap[MProperty, MPropDef] */;
val* var4 /* : HashMap[MProperty, APropdef] */;
self = nit_alloc(sizeof(struct instance) + 23*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MClassDef;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MClassDef exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MClassDef exact> */
var = NEW_core__Array(&type_core__Array__nitc__MClassType);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[MClassType]>*/
}
self->attrs[COLOR_nitc__model__MClassDef___supertypes].val = var; /* _supertypes on <self:MClassDef exact> */
var1 = NEW_core__Array(&type_core__Array__nitc__MProperty);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[MProperty]>*/
}
self->attrs[COLOR_nitc__model__MClassDef___intro_mproperties].val = var1; /* _intro_mproperties on <self:MClassDef exact> */
var2 = NEW_core__Array(&type_core__Array__nitc__MPropDef);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array$Array$init on <var2:Array[MPropDef]>*/
}
self->attrs[COLOR_nitc__model__MClassDef___mpropdefs].val = var2; /* _mpropdefs on <self:MClassDef exact> */
var3 = NEW_core__HashMap(&type_core__HashMap__nitc__MProperty__nitc__MPropDef);
{
core___core__HashMap___core__kernel__Object__init(var3); /* Direct call hash_collection$HashMap$init on <var3:HashMap[MProperty, MPropDef]>*/
}
self->attrs[COLOR_nitc__model__MClassDef___mpropdefs_by_property].val = var3; /* _mpropdefs_by_property on <self:MClassDef exact> */
var4 = NEW_core__HashMap(&type_core__HashMap__nitc__MProperty__nitc__APropdef);
{
core___core__HashMap___core__kernel__Object__init(var4); /* Direct call hash_collection$HashMap$init on <var4:HashMap[MProperty, APropdef]>*/
}
self->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val = var4; /* _mprop2npropdef on <self:MClassDef exact> */
self->attrs[COLOR_nitc__extern_classes__MClassDef___ftype_computed].s = 0; /* _ftype_computed on <self:MClassDef exact> */
return self;
}
/* runtime class nitc__MType: nitc::MType (dead=true; need_corpse=false)*/
/* allocate MType */
val* NEW_nitc__MType(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "MType is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__MClassType: nitc::MClassType (dead=false; need_corpse=false)*/
const struct class class_nitc__MClassType = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MClassType___core__kernel__Object__init, /* pointer to model:MClassType:model$MClassType$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MClassType:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MClassType:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MClassType___core__abstract_text__Object__to_s, /* pointer to model:MClassType:model$MClassType$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MClassType:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MClassType:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MClassType:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MClassType:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MClassType:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MClassType:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MClassType:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MClassType:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MClassType___nitc__model_base__MEntity__c_name, /* pointer to model:MClassType:model$MClassType$c_name */
(nitmethod_t)nitc___nitc__MClassType___nitc__model_base__MEntity__model, /* pointer to model:MClassType:model$MClassType$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to model:MClassType:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MClassType___nitc__model_base__MEntity__location, /* pointer to model:MClassType:model$MClassType$location */
(nitmethod_t)nitc___nitc__MType___nitc__model_base__MEntity__name, /* pointer to model:MClassType:model$MType$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to model:MClassType:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc__model___MEntity___visibility, /* pointer to model:MClassType:model$MEntity$visibility */
(nitmethod_t)nitc___nitc__MClassType___nitc__model_base__MEntity__full_name, /* pointer to model:MClassType:model$MClassType$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to model:MClassType:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to model:MClassType:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to model:MClassType:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to model:MClassType:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to model:MClassType:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to model:MClassType:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to model:MClassType:mdoc$MEntity$deprecation */
(nitmethod_t)nitc___nitc__MClassType___MType__collect_mclassdefs, /* pointer to model:MClassType:model$MClassType$collect_mclassdefs */
(nitmethod_t)nitc___nitc__MType___has_mproperty, /* pointer to model:MClassType:model$MType$has_mproperty */
(nitmethod_t)nitc___nitc__MClassType___MType__resolve_for, /* pointer to model:MClassType:model$MClassType$resolve_for */
(nitmethod_t)nitc__abstract_compiler___MClassType___MType__ctype, /* pointer to model:MClassType:abstract_compiler$MClassType$ctype */
(nitmethod_t)nitc___nitc__MClassType___MType__need_anchor, /* pointer to model:MClassType:model$MClassType$need_anchor */
(nitmethod_t)nitc___nitc__MClassType___MType__can_resolve_for, /* pointer to model:MClassType:model$MClassType$can_resolve_for */
(nitmethod_t)nitc___nitc__MClassType___MType__anchor_to, /* pointer to model:MClassType:model$MClassType$anchor_to */
(nitmethod_t)nitc___nitc__MType___is_legal_in, /* pointer to model:MClassType:model$MType$is_legal_in */
(nitmethod_t)nitc___nitc__MType___as_nullable, /* pointer to model:MClassType:model$MType$as_nullable */
(nitmethod_t)nitc___nitc__MType___is_subtype, /* pointer to model:MClassType:model$MType$is_subtype */
(nitmethod_t)nitc___nitc__MType___lookup_bound, /* pointer to model:MClassType:model$MType$lookup_bound */
(nitmethod_t)nitc___nitc__MType___as_notnull, /* pointer to model:MClassType:model$MType$as_notnull */
(nitmethod_t)nitc___nitc__MType___is_ok, /* pointer to model:MClassType:model$MType$is_ok */
(nitmethod_t)nitc___nitc__MType___length, /* pointer to model:MClassType:model$MType$length */
(nitmethod_t)nitc__separate_compiler___MType___tag_value_61d, /* pointer to model:MClassType:separate_compiler$MType$tag_value= */
(nitmethod_t)nitc__separate_compiler___MType___is_tagged_61d, /* pointer to model:MClassType:separate_compiler$MType$is_tagged= */
(nitmethod_t)nitc__abstract_compiler___MClassType___MType__is_c_primitive, /* pointer to model:MClassType:abstract_compiler$MClassType$is_c_primitive */
(nitmethod_t)nitc__separate_compiler___MType___is_tagged, /* pointer to model:MClassType:separate_compiler$MType$is_tagged */
(nitmethod_t)nitc__abstract_compiler___MClassType___MType__ctype_extern, /* pointer to model:MClassType:abstract_compiler$MClassType$ctype_extern */
(nitmethod_t)nitc___nitc__MType___as_nullable_cache, /* pointer to model:MClassType:model$MType$as_nullable_cache */
(nitmethod_t)nitc___nitc__MType___as_nullable_cache_61d, /* pointer to model:MClassType:model$MType$as_nullable_cache= */
(nitmethod_t)nitc___nitc__MType___lookup_fixed, /* pointer to model:MClassType:model$MType$lookup_fixed */
(nitmethod_t)nitc___nitc__MClassType___MType__collect_mclasses, /* pointer to model:MClassType:model$MClassType$collect_mclasses */
(nitmethod_t)nitc___nitc__MType___supertype_to, /* pointer to model:MClassType:model$MType$supertype_to */
(nitmethod_t)nitc___nitc__MType___undecorate, /* pointer to model:MClassType:model$MType$undecorate */
(nitmethod_t)nitc___nitc__MClassType___MType__collect_mtypes, /* pointer to model:MClassType:model$MClassType$collect_mtypes */
(nitmethod_t)nitc__abstract_compiler___MClassType___MType__ctypename, /* pointer to model:MClassType:abstract_compiler$MClassType$ctypename */
(nitmethod_t)nitc__nitni_base___MClassType___MType__is_cprimitive, /* pointer to model:MClassType:nitni_base$MClassType$is_cprimitive */
(nitmethod_t)nitc__separate_compiler___MType___tag_value, /* pointer to model:MClassType:separate_compiler$MType$tag_value */
(nitmethod_t)nitc__nitni_base___MClassType___MType__mangled_cname, /* pointer to model:MClassType:nitni_base$MClassType$mangled_cname */
(nitmethod_t)nitc__nitni_base___MClassType___MType__cname_blind, /* pointer to model:MClassType:nitni_base$MClassType$cname_blind */
(nitmethod_t)nitc__nitni_base___MClassType___MType__cname, /* pointer to model:MClassType:nitni_base$MClassType$cname */
(nitmethod_t)nitc__light_only___MClassType___nitc__nitni_base__MType__cname_normal_class, /* pointer to model:MClassType:light_only$MClassType$cname_normal_class */
(nitmethod_t)nitc___nitc__MClassType___mclass, /* pointer to model:MClassType:model$MClassType$mclass */
(nitmethod_t)nitc___nitc__MClassType___arguments, /* pointer to model:MClassType:model$MClassType$arguments */
(nitmethod_t)nitc___nitc__MClassType___mclass_61d, /* pointer to model:MClassType:model$MClassType$mclass= */
(nitmethod_t)nitc___nitc__MClassType___arguments_61d, /* pointer to model:MClassType:model$MClassType$arguments= */
(nitmethod_t)nitc___nitc__MClassType___collect_mclassdefs_cache, /* pointer to model:MClassType:model$MClassType$collect_mclassdefs_cache */
(nitmethod_t)nitc___nitc__MClassType___collect_things, /* pointer to model:MClassType:model$MClassType$collect_things */
(nitmethod_t)nitc___nitc__MClassType___collect_mclasses_cache, /* pointer to model:MClassType:model$MClassType$collect_mclasses_cache */
(nitmethod_t)nitc___nitc__MClassType___collect_mtypes_cache, /* pointer to model:MClassType:model$MClassType$collect_mtypes_cache */
(nitmethod_t)nitc___nitc__MClassType___collect_mclasses_last_module, /* pointer to model:MClassType:model$MClassType$collect_mclasses_last_module */
(nitmethod_t)nitc___nitc__MClassType___collect_mclasses_last_module_cache, /* pointer to model:MClassType:model$MClassType$collect_mclasses_last_module_cache */
(nitmethod_t)nitc___nitc__MClassType___collect_mclasses_last_module_61d, /* pointer to model:MClassType:model$MClassType$collect_mclasses_last_module= */
(nitmethod_t)nitc___nitc__MClassType___collect_mclasses_last_module_cache_61d, /* pointer to model:MClassType:model$MClassType$collect_mclasses_last_module_cache= */
(nitmethod_t)core___core__Object___init, /* pointer to model:MClassType:kernel$Object$init */
(nitmethod_t)nitc___nitc__MType___anchor_to, /* pointer to model:MClassType:model$MType$anchor_to */
(nitmethod_t)nitc__nitni_base___MType___cname_blind, /* pointer to model:MClassType:nitni_base$MType$cname_blind */
}
};
/* allocate MClassType */
val* NEW_nitc__MClassType(const struct type* type) {
val* self /* : MClassType */;
val* var /* : Array[MType] */;
val* var1 /* : HashMap[MModule, Set[MClassDef]] */;
val* var2 /* : HashMap[MModule, Set[MClass]] */;
val* var3 /* : HashMap[MModule, Set[MClassType]] */;
self = nit_alloc(sizeof(struct instance) + 20*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MClassType;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MClassType exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MClassType exact> */
self->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s = 0; /* _is_tagged on <self:MClassType exact> */
self->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l = 0l; /* _tag_value on <self:MClassType exact> */
var = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[MType]>*/
}
self->attrs[COLOR_nitc__model__MClassType___arguments].val = var; /* _arguments on <self:MClassType exact> */
var1 = NEW_core__HashMap(&type_core__HashMap__nitc__MModule__core__Set__nitc__MClassDef);
{
core___core__HashMap___core__kernel__Object__init(var1); /* Direct call hash_collection$HashMap$init on <var1:HashMap[MModule, Set[MClassDef]]>*/
}
self->attrs[COLOR_nitc__model__MClassType___collect_mclassdefs_cache].val = var1; /* _collect_mclassdefs_cache on <self:MClassType exact> */
var2 = NEW_core__HashMap(&type_core__HashMap__nitc__MModule__core__Set__nitc__MClass);
{
core___core__HashMap___core__kernel__Object__init(var2); /* Direct call hash_collection$HashMap$init on <var2:HashMap[MModule, Set[MClass]]>*/
}
self->attrs[COLOR_nitc__model__MClassType___collect_mclasses_cache].val = var2; /* _collect_mclasses_cache on <self:MClassType exact> */
var3 = NEW_core__HashMap(&type_core__HashMap__nitc__MModule__core__Set__nitc__MClassType);
{
core___core__HashMap___core__kernel__Object__init(var3); /* Direct call hash_collection$HashMap$init on <var3:HashMap[MModule, Set[MClassType]]>*/
}
self->attrs[COLOR_nitc__model__MClassType___collect_mtypes_cache].val = var3; /* _collect_mtypes_cache on <self:MClassType exact> */
return self;
}
/* runtime class nitc__MGenericType: nitc::MGenericType (dead=false; need_corpse=false)*/
const struct class class_nitc__MGenericType = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MGenericType___core__kernel__Object__init, /* pointer to model:MGenericType:model$MGenericType$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MGenericType:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MGenericType:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MGenericType___core__abstract_text__Object__to_s, /* pointer to model:MGenericType:model$MGenericType$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MGenericType:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MGenericType:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MGenericType:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MGenericType:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MGenericType:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MGenericType:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MGenericType:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MGenericType:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MGenericType___nitc__model_base__MEntity__c_name, /* pointer to model:MGenericType:model$MGenericType$c_name */
(nitmethod_t)nitc___nitc__MClassType___nitc__model_base__MEntity__model, /* pointer to model:MGenericType:model$MClassType$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to model:MGenericType:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MClassType___nitc__model_base__MEntity__location, /* pointer to model:MGenericType:model$MClassType$location */
(nitmethod_t)nitc___nitc__MType___nitc__model_base__MEntity__name, /* pointer to model:MGenericType:model$MType$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to model:MGenericType:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc__model___MEntity___visibility, /* pointer to model:MGenericType:model$MEntity$visibility */
(nitmethod_t)nitc___nitc__MGenericType___nitc__model_base__MEntity__full_name, /* pointer to model:MGenericType:model$MGenericType$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to model:MGenericType:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to model:MGenericType:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to model:MGenericType:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to model:MGenericType:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to model:MGenericType:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to model:MGenericType:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to model:MGenericType:mdoc$MEntity$deprecation */
(nitmethod_t)nitc___nitc__MClassType___MType__collect_mclassdefs, /* pointer to model:MGenericType:model$MClassType$collect_mclassdefs */
(nitmethod_t)nitc___nitc__MType___has_mproperty, /* pointer to model:MGenericType:model$MType$has_mproperty */
(nitmethod_t)nitc___nitc__MGenericType___MType__resolve_for, /* pointer to model:MGenericType:model$MGenericType$resolve_for */
(nitmethod_t)nitc__abstract_compiler___MClassType___MType__ctype, /* pointer to model:MGenericType:abstract_compiler$MClassType$ctype */
(nitmethod_t)nitc___nitc__MGenericType___MType__need_anchor, /* pointer to model:MGenericType:model$MGenericType$need_anchor */
(nitmethod_t)nitc___nitc__MGenericType___MType__can_resolve_for, /* pointer to model:MGenericType:model$MGenericType$can_resolve_for */
(nitmethod_t)nitc___nitc__MClassType___MType__anchor_to, /* pointer to model:MGenericType:model$MClassType$anchor_to */
(nitmethod_t)nitc___nitc__MGenericType___MType__is_legal_in, /* pointer to model:MGenericType:model$MGenericType$is_legal_in */
(nitmethod_t)nitc___nitc__MType___as_nullable, /* pointer to model:MGenericType:model$MType$as_nullable */
(nitmethod_t)nitc___nitc__MType___is_subtype, /* pointer to model:MGenericType:model$MType$is_subtype */
(nitmethod_t)nitc___nitc__MType___lookup_bound, /* pointer to model:MGenericType:model$MType$lookup_bound */
(nitmethod_t)nitc___nitc__MType___as_notnull, /* pointer to model:MGenericType:model$MType$as_notnull */
(nitmethod_t)nitc___nitc__MGenericType___MType__is_ok, /* pointer to model:MGenericType:model$MGenericType$is_ok */
(nitmethod_t)nitc___nitc__MGenericType___MType__length, /* pointer to model:MGenericType:model$MGenericType$length */
(nitmethod_t)nitc__separate_compiler___MType___tag_value_61d, /* pointer to model:MGenericType:separate_compiler$MType$tag_value= */
(nitmethod_t)nitc__separate_compiler___MType___is_tagged_61d, /* pointer to model:MGenericType:separate_compiler$MType$is_tagged= */
(nitmethod_t)nitc__abstract_compiler___MClassType___MType__is_c_primitive, /* pointer to model:MGenericType:abstract_compiler$MClassType$is_c_primitive */
(nitmethod_t)nitc__separate_compiler___MType___is_tagged, /* pointer to model:MGenericType:separate_compiler$MType$is_tagged */
(nitmethod_t)nitc__abstract_compiler___MClassType___MType__ctype_extern, /* pointer to model:MGenericType:abstract_compiler$MClassType$ctype_extern */
(nitmethod_t)nitc___nitc__MType___as_nullable_cache, /* pointer to model:MGenericType:model$MType$as_nullable_cache */
(nitmethod_t)nitc___nitc__MType___as_nullable_cache_61d, /* pointer to model:MGenericType:model$MType$as_nullable_cache= */
(nitmethod_t)nitc___nitc__MType___lookup_fixed, /* pointer to model:MGenericType:model$MType$lookup_fixed */
(nitmethod_t)nitc___nitc__MClassType___MType__collect_mclasses, /* pointer to model:MGenericType:model$MClassType$collect_mclasses */
(nitmethod_t)nitc___nitc__MType___supertype_to, /* pointer to model:MGenericType:model$MType$supertype_to */
(nitmethod_t)nitc___nitc__MType___undecorate, /* pointer to model:MGenericType:model$MType$undecorate */
(nitmethod_t)nitc___nitc__MClassType___MType__collect_mtypes, /* pointer to model:MGenericType:model$MClassType$collect_mtypes */
(nitmethod_t)nitc__abstract_compiler___MClassType___MType__ctypename, /* pointer to model:MGenericType:abstract_compiler$MClassType$ctypename */
(nitmethod_t)nitc__nitni_base___MClassType___MType__is_cprimitive, /* pointer to model:MGenericType:nitni_base$MClassType$is_cprimitive */
(nitmethod_t)nitc__separate_compiler___MType___tag_value, /* pointer to model:MGenericType:separate_compiler$MType$tag_value */
(nitmethod_t)nitc__nitni_base___MGenericType___MType__mangled_cname, /* pointer to model:MGenericType:nitni_base$MGenericType$mangled_cname */
(nitmethod_t)nitc__nitni_base___MClassType___MType__cname_blind, /* pointer to model:MGenericType:nitni_base$MClassType$cname_blind */
(nitmethod_t)nitc__nitni_base___MClassType___MType__cname, /* pointer to model:MGenericType:nitni_base$MClassType$cname */
(nitmethod_t)nitc__light_only___MClassType___nitc__nitni_base__MType__cname_normal_class, /* pointer to model:MGenericType:light_only$MClassType$cname_normal_class */
(nitmethod_t)nitc___nitc__MClassType___mclass, /* pointer to model:MGenericType:model$MClassType$mclass */
(nitmethod_t)nitc___nitc__MGenericType___MClassType__arguments, /* pointer to model:MGenericType:model$MGenericType$arguments */
(nitmethod_t)nitc___nitc__MClassType___mclass_61d, /* pointer to model:MGenericType:model$MClassType$mclass= */
(nitmethod_t)nitc___nitc__MGenericType___MClassType__arguments_61d, /* pointer to model:MGenericType:model$MGenericType$arguments= */
(nitmethod_t)nitc___nitc__MClassType___collect_mclassdefs_cache, /* pointer to model:MGenericType:model$MClassType$collect_mclassdefs_cache */
(nitmethod_t)nitc___nitc__MClassType___collect_things, /* pointer to model:MGenericType:model$MClassType$collect_things */
(nitmethod_t)nitc___nitc__MClassType___collect_mclasses_cache, /* pointer to model:MGenericType:model$MClassType$collect_mclasses_cache */
(nitmethod_t)nitc___nitc__MClassType___collect_mtypes_cache, /* pointer to model:MGenericType:model$MClassType$collect_mtypes_cache */
(nitmethod_t)nitc___nitc__MClassType___collect_mclasses_last_module, /* pointer to model:MGenericType:model$MClassType$collect_mclasses_last_module */
(nitmethod_t)nitc___nitc__MClassType___collect_mclasses_last_module_cache, /* pointer to model:MGenericType:model$MClassType$collect_mclasses_last_module_cache */
(nitmethod_t)nitc___nitc__MClassType___collect_mclasses_last_module_61d, /* pointer to model:MGenericType:model$MClassType$collect_mclasses_last_module= */
(nitmethod_t)nitc___nitc__MClassType___collect_mclasses_last_module_cache_61d, /* pointer to model:MGenericType:model$MClassType$collect_mclasses_last_module_cache= */
(nitmethod_t)core___core__Object___init, /* pointer to model:MGenericType:kernel$Object$init */
(nitmethod_t)nitc___nitc__MType___anchor_to, /* pointer to model:MGenericType:model$MType$anchor_to */
(nitmethod_t)nitc__nitni_base___MType___cname_blind, /* pointer to model:MGenericType:nitni_base$MType$cname_blind */
(nitmethod_t)nitc___nitc__MGenericType___need_anchor_61d, /* pointer to model:MGenericType:model$MGenericType$need_anchor= */
(nitmethod_t)nitc___nitc__MGenericType___to_s_61d, /* pointer to model:MGenericType:model$MGenericType$to_s= */
(nitmethod_t)nitc___nitc__MClassType___core__kernel__Object__init, /* pointer to model:MGenericType:model$MClassType$init */
(nitmethod_t)nitc___nitc__MType___is_ok, /* pointer to model:MGenericType:model$MType$is_ok */
(nitmethod_t)nitc__nitni_base___MClassType___MType__mangled_cname, /* pointer to model:MGenericType:nitni_base$MClassType$mangled_cname */
}
};
/* allocate MGenericType */
val* NEW_nitc__MGenericType(const struct type* type) {
val* self /* : MGenericType */;
val* var /* : Array[MType] */;
val* var1 /* : HashMap[MModule, Set[MClassDef]] */;
val* var2 /* : HashMap[MModule, Set[MClass]] */;
val* var3 /* : HashMap[MModule, Set[MClassType]] */;
self = nit_alloc(sizeof(struct instance) + 27*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MGenericType;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MGenericType exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MGenericType exact> */
self->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s = 0; /* _is_tagged on <self:MGenericType exact> */
self->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l = 0l; /* _tag_value on <self:MGenericType exact> */
var = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[MType]>*/
}
self->attrs[COLOR_nitc__model__MClassType___arguments].val = var; /* _arguments on <self:MGenericType exact> */
var1 = NEW_core__HashMap(&type_core__HashMap__nitc__MModule__core__Set__nitc__MClassDef);
{
core___core__HashMap___core__kernel__Object__init(var1); /* Direct call hash_collection$HashMap$init on <var1:HashMap[MModule, Set[MClassDef]]>*/
}
self->attrs[COLOR_nitc__model__MClassType___collect_mclassdefs_cache].val = var1; /* _collect_mclassdefs_cache on <self:MGenericType exact> */
var2 = NEW_core__HashMap(&type_core__HashMap__nitc__MModule__core__Set__nitc__MClass);
{
core___core__HashMap___core__kernel__Object__init(var2); /* Direct call hash_collection$HashMap$init on <var2:HashMap[MModule, Set[MClass]]>*/
}
self->attrs[COLOR_nitc__model__MClassType___collect_mclasses_cache].val = var2; /* _collect_mclasses_cache on <self:MGenericType exact> */
var3 = NEW_core__HashMap(&type_core__HashMap__nitc__MModule__core__Set__nitc__MClassType);
{
core___core__HashMap___core__kernel__Object__init(var3); /* Direct call hash_collection$HashMap$init on <var3:HashMap[MModule, Set[MClassType]]>*/
}
self->attrs[COLOR_nitc__model__MClassType___collect_mtypes_cache].val = var3; /* _collect_mtypes_cache on <self:MGenericType exact> */
return self;
}
/* runtime class nitc__MFormalType: nitc::MFormalType (dead=true; need_corpse=false)*/
/* allocate MFormalType */
val* NEW_nitc__MFormalType(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "MFormalType is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__MVirtualType: nitc::MVirtualType (dead=false; need_corpse=false)*/
const struct class class_nitc__MVirtualType = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MVirtualType___core__kernel__Object__init, /* pointer to model:MVirtualType:model$MVirtualType$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MVirtualType:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MVirtualType:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MVirtualType___core__abstract_text__Object__to_s, /* pointer to model:MVirtualType:model$MVirtualType$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MVirtualType:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MVirtualType:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MVirtualType:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MVirtualType:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MVirtualType:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MVirtualType:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MVirtualType:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MVirtualType:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MVirtualType___nitc__model_base__MEntity__c_name, /* pointer to model:MVirtualType:model$MVirtualType$c_name */
(nitmethod_t)nitc___nitc__MVirtualType___nitc__model_base__MEntity__model, /* pointer to model:MVirtualType:model$MVirtualType$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to model:MVirtualType:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MVirtualType___nitc__model_base__MEntity__location, /* pointer to model:MVirtualType:model$MVirtualType$location */
(nitmethod_t)nitc___nitc__MType___nitc__model_base__MEntity__name, /* pointer to model:MVirtualType:model$MType$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to model:MVirtualType:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc__model___MEntity___visibility, /* pointer to model:MVirtualType:model$MEntity$visibility */
(nitmethod_t)nitc___nitc__MVirtualType___nitc__model_base__MEntity__full_name, /* pointer to model:MVirtualType:model$MVirtualType$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to model:MVirtualType:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to model:MVirtualType:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to model:MVirtualType:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to model:MVirtualType:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to model:MVirtualType:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to model:MVirtualType:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to model:MVirtualType:mdoc$MEntity$deprecation */
(nitmethod_t)nitc___nitc__MType___collect_mclassdefs, /* pointer to model:MVirtualType:model$MType$collect_mclassdefs */
(nitmethod_t)nitc___nitc__MType___has_mproperty, /* pointer to model:MVirtualType:model$MType$has_mproperty */
(nitmethod_t)nitc___nitc__MVirtualType___MType__resolve_for, /* pointer to model:MVirtualType:model$MVirtualType$resolve_for */
(nitmethod_t)nitc__abstract_compiler___MType___ctype, /* pointer to model:MVirtualType:abstract_compiler$MType$ctype */
(nitmethod_t)nitc___nitc__MType___need_anchor, /* pointer to model:MVirtualType:model$MType$need_anchor */
(nitmethod_t)nitc___nitc__MVirtualType___MType__can_resolve_for, /* pointer to model:MVirtualType:model$MVirtualType$can_resolve_for */
(nitmethod_t)nitc___nitc__MType___anchor_to, /* pointer to model:MVirtualType:model$MType$anchor_to */
(nitmethod_t)nitc___nitc__MType___is_legal_in, /* pointer to model:MVirtualType:model$MType$is_legal_in */
(nitmethod_t)nitc___nitc__MType___as_nullable, /* pointer to model:MVirtualType:model$MType$as_nullable */
(nitmethod_t)nitc___nitc__MType___is_subtype, /* pointer to model:MVirtualType:model$MType$is_subtype */
(nitmethod_t)nitc___nitc__MVirtualType___MType__lookup_bound, /* pointer to model:MVirtualType:model$MVirtualType$lookup_bound */
(nitmethod_t)nitc___nitc__MFormalType___MType__as_notnull, /* pointer to model:MVirtualType:model$MFormalType$as_notnull */
(nitmethod_t)nitc___nitc__MType___is_ok, /* pointer to model:MVirtualType:model$MType$is_ok */
(nitmethod_t)nitc___nitc__MType___length, /* pointer to model:MVirtualType:model$MType$length */
(nitmethod_t)nitc__separate_compiler___MType___tag_value_61d, /* pointer to model:MVirtualType:separate_compiler$MType$tag_value= */
(nitmethod_t)nitc__separate_compiler___MType___is_tagged_61d, /* pointer to model:MVirtualType:separate_compiler$MType$is_tagged= */
(nitmethod_t)nitc__abstract_compiler___MType___is_c_primitive, /* pointer to model:MVirtualType:abstract_compiler$MType$is_c_primitive */
(nitmethod_t)nitc__separate_compiler___MType___is_tagged, /* pointer to model:MVirtualType:separate_compiler$MType$is_tagged */
(nitmethod_t)nitc__abstract_compiler___MType___ctype_extern, /* pointer to model:MVirtualType:abstract_compiler$MType$ctype_extern */
(nitmethod_t)nitc___nitc__MType___as_nullable_cache, /* pointer to model:MVirtualType:model$MType$as_nullable_cache */
(nitmethod_t)nitc___nitc__MType___as_nullable_cache_61d, /* pointer to model:MVirtualType:model$MType$as_nullable_cache= */
(nitmethod_t)nitc___nitc__MVirtualType___MType__lookup_fixed, /* pointer to model:MVirtualType:model$MVirtualType$lookup_fixed */
(nitmethod_t)nitc___nitc__MType___collect_mclasses, /* pointer to model:MVirtualType:model$MType$collect_mclasses */
(nitmethod_t)nitc___nitc__MType___supertype_to, /* pointer to model:MVirtualType:model$MType$supertype_to */
(nitmethod_t)nitc___nitc__MType___undecorate, /* pointer to model:MVirtualType:model$MType$undecorate */
(nitmethod_t)nitc___nitc__MType___collect_mtypes, /* pointer to model:MVirtualType:model$MType$collect_mtypes */
(nitmethod_t)nitc__abstract_compiler___MType___ctypename, /* pointer to model:MVirtualType:abstract_compiler$MType$ctypename */
(nitmethod_t)nitc__nitni_base___MType___is_cprimitive, /* pointer to model:MVirtualType:nitni_base$MType$is_cprimitive */
(nitmethod_t)nitc__separate_compiler___MType___tag_value, /* pointer to model:MVirtualType:separate_compiler$MType$tag_value */
(nitmethod_t)nitc__nitni_base___MFormalType___MType__mangled_cname, /* pointer to model:MVirtualType:nitni_base$MFormalType$mangled_cname */
(nitmethod_t)nitc__nitni_base___MType___cname_blind, /* pointer to model:MVirtualType:nitni_base$MType$cname_blind */
(nitmethod_t)nitc__nitni_base___MType___cname, /* pointer to model:MVirtualType:nitni_base$MType$cname */
(nitmethod_t)nitc__nitni_base___MType___cname_normal_class, /* pointer to model:MVirtualType:nitni_base$MType$cname_normal_class */
(nitmethod_t)nitc___nitc__MVirtualType___mproperty, /* pointer to model:MVirtualType:model$MVirtualType$mproperty */
(nitmethod_t)nitc___nitc__MVirtualType___mproperty_61d, /* pointer to model:MVirtualType:model$MVirtualType$mproperty= */
(nitmethod_t)nitc___nitc__MVirtualType___lookup_single_definition, /* pointer to model:MVirtualType:model$MVirtualType$lookup_single_definition */
(nitmethod_t)core___core__Object___init, /* pointer to model:MVirtualType:kernel$Object$init */
}
};
/* allocate MVirtualType */
val* NEW_nitc__MVirtualType(const struct type* type) {
val* self /* : MVirtualType */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MVirtualType;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MVirtualType exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MVirtualType exact> */
self->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s = 0; /* _is_tagged on <self:MVirtualType exact> */
self->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l = 0l; /* _tag_value on <self:MVirtualType exact> */
return self;
}
/* runtime class nitc__MParameterType: nitc::MParameterType (dead=false; need_corpse=false)*/
const struct class class_nitc__MParameterType = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MParameterType___core__kernel__Object__init, /* pointer to model:MParameterType:model$MParameterType$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MParameterType:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MParameterType:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MParameterType___core__abstract_text__Object__to_s, /* pointer to model:MParameterType:model$MParameterType$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MParameterType:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MParameterType:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MParameterType:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MParameterType:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MParameterType:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MParameterType:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MParameterType:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MParameterType:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MParameterType___nitc__model_base__MEntity__c_name, /* pointer to model:MParameterType:model$MParameterType$c_name */
(nitmethod_t)nitc___nitc__MParameterType___nitc__model_base__MEntity__model, /* pointer to model:MParameterType:model$MParameterType$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to model:MParameterType:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MParameterType___nitc__model_base__MEntity__location, /* pointer to model:MParameterType:model$MParameterType$location */
(nitmethod_t)nitc___nitc__MParameterType___nitc__model_base__MEntity__name, /* pointer to model:MParameterType:model$MParameterType$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to model:MParameterType:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc__model___MEntity___visibility, /* pointer to model:MParameterType:model$MEntity$visibility */
(nitmethod_t)nitc___nitc__MParameterType___nitc__model_base__MEntity__full_name, /* pointer to model:MParameterType:model$MParameterType$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to model:MParameterType:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to model:MParameterType:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to model:MParameterType:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to model:MParameterType:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to model:MParameterType:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to model:MParameterType:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to model:MParameterType:mdoc$MEntity$deprecation */
(nitmethod_t)nitc___nitc__MType___collect_mclassdefs, /* pointer to model:MParameterType:model$MType$collect_mclassdefs */
(nitmethod_t)nitc___nitc__MType___has_mproperty, /* pointer to model:MParameterType:model$MType$has_mproperty */
(nitmethod_t)nitc___nitc__MParameterType___MType__resolve_for, /* pointer to model:MParameterType:model$MParameterType$resolve_for */
(nitmethod_t)nitc__abstract_compiler___MType___ctype, /* pointer to model:MParameterType:abstract_compiler$MType$ctype */
(nitmethod_t)nitc___nitc__MType___need_anchor, /* pointer to model:MParameterType:model$MType$need_anchor */
(nitmethod_t)nitc___nitc__MParameterType___MType__can_resolve_for, /* pointer to model:MParameterType:model$MParameterType$can_resolve_for */
(nitmethod_t)nitc___nitc__MType___anchor_to, /* pointer to model:MParameterType:model$MType$anchor_to */
(nitmethod_t)nitc___nitc__MType___is_legal_in, /* pointer to model:MParameterType:model$MType$is_legal_in */
(nitmethod_t)nitc___nitc__MType___as_nullable, /* pointer to model:MParameterType:model$MType$as_nullable */
(nitmethod_t)nitc___nitc__MType___is_subtype, /* pointer to model:MParameterType:model$MType$is_subtype */
(nitmethod_t)nitc___nitc__MParameterType___MType__lookup_bound, /* pointer to model:MParameterType:model$MParameterType$lookup_bound */
(nitmethod_t)nitc___nitc__MFormalType___MType__as_notnull, /* pointer to model:MParameterType:model$MFormalType$as_notnull */
(nitmethod_t)nitc___nitc__MType___is_ok, /* pointer to model:MParameterType:model$MType$is_ok */
(nitmethod_t)nitc___nitc__MType___length, /* pointer to model:MParameterType:model$MType$length */
(nitmethod_t)nitc__separate_compiler___MType___tag_value_61d, /* pointer to model:MParameterType:separate_compiler$MType$tag_value= */
(nitmethod_t)nitc__separate_compiler___MType___is_tagged_61d, /* pointer to model:MParameterType:separate_compiler$MType$is_tagged= */
(nitmethod_t)nitc__abstract_compiler___MType___is_c_primitive, /* pointer to model:MParameterType:abstract_compiler$MType$is_c_primitive */
(nitmethod_t)nitc__separate_compiler___MType___is_tagged, /* pointer to model:MParameterType:separate_compiler$MType$is_tagged */
(nitmethod_t)nitc__abstract_compiler___MType___ctype_extern, /* pointer to model:MParameterType:abstract_compiler$MType$ctype_extern */
(nitmethod_t)nitc___nitc__MType___as_nullable_cache, /* pointer to model:MParameterType:model$MType$as_nullable_cache */
(nitmethod_t)nitc___nitc__MType___as_nullable_cache_61d, /* pointer to model:MParameterType:model$MType$as_nullable_cache= */
(nitmethod_t)nitc___nitc__MParameterType___MType__lookup_fixed, /* pointer to model:MParameterType:model$MParameterType$lookup_fixed */
(nitmethod_t)nitc___nitc__MType___collect_mclasses, /* pointer to model:MParameterType:model$MType$collect_mclasses */
(nitmethod_t)nitc___nitc__MType___supertype_to, /* pointer to model:MParameterType:model$MType$supertype_to */
(nitmethod_t)nitc___nitc__MType___undecorate, /* pointer to model:MParameterType:model$MType$undecorate */
(nitmethod_t)nitc___nitc__MType___collect_mtypes, /* pointer to model:MParameterType:model$MType$collect_mtypes */
(nitmethod_t)nitc__abstract_compiler___MType___ctypename, /* pointer to model:MParameterType:abstract_compiler$MType$ctypename */
(nitmethod_t)nitc__nitni_base___MType___is_cprimitive, /* pointer to model:MParameterType:nitni_base$MType$is_cprimitive */
(nitmethod_t)nitc__separate_compiler___MType___tag_value, /* pointer to model:MParameterType:separate_compiler$MType$tag_value */
(nitmethod_t)nitc__nitni_base___MFormalType___MType__mangled_cname, /* pointer to model:MParameterType:nitni_base$MFormalType$mangled_cname */
(nitmethod_t)nitc__nitni_base___MType___cname_blind, /* pointer to model:MParameterType:nitni_base$MType$cname_blind */
(nitmethod_t)nitc__nitni_base___MType___cname, /* pointer to model:MParameterType:nitni_base$MType$cname */
(nitmethod_t)nitc__nitni_base___MType___cname_normal_class, /* pointer to model:MParameterType:nitni_base$MType$cname_normal_class */
(nitmethod_t)nitc___nitc__MParameterType___mclass, /* pointer to model:MParameterType:model$MParameterType$mclass */
(nitmethod_t)nitc___nitc__MParameterType___mclass_61d, /* pointer to model:MParameterType:model$MParameterType$mclass= */
(nitmethod_t)nitc___nitc__MParameterType___rank_61d, /* pointer to model:MParameterType:model$MParameterType$rank= */
(nitmethod_t)nitc___nitc__MParameterType___name_61d, /* pointer to model:MParameterType:model$MParameterType$name= */
(nitmethod_t)nitc___nitc__MParameterType___rank, /* pointer to model:MParameterType:model$MParameterType$rank */
(nitmethod_t)core___core__Object___init, /* pointer to model:MParameterType:kernel$Object$init */
}
};
/* allocate MParameterType */
val* NEW_nitc__MParameterType(const struct type* type) {
val* self /* : MParameterType */;
self = nit_alloc(sizeof(struct instance) + 18*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MParameterType;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MParameterType exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MParameterType exact> */
self->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s = 0; /* _is_tagged on <self:MParameterType exact> */
self->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l = 0l; /* _tag_value on <self:MParameterType exact> */
return self;
}
/* runtime class nitc__MProxyType: nitc::MProxyType (dead=true; need_corpse=false)*/
/* allocate MProxyType */
val* NEW_nitc__MProxyType(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "MProxyType is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__MNullableType: nitc::MNullableType (dead=false; need_corpse=false)*/
const struct class class_nitc__MNullableType = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MNullableType___core__kernel__Object__init, /* pointer to model:MNullableType:model$MNullableType$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MNullableType:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MNullableType:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MNullableType___core__abstract_text__Object__to_s, /* pointer to model:MNullableType:model$MNullableType$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MNullableType:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MNullableType:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MNullableType:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MNullableType:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MNullableType:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MNullableType:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MNullableType:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MNullableType:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MNullableType___nitc__model_base__MEntity__c_name, /* pointer to model:MNullableType:model$MNullableType$c_name */
(nitmethod_t)nitc___nitc__MProxyType___nitc__model_base__MEntity__model, /* pointer to model:MNullableType:model$MProxyType$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to model:MNullableType:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MProxyType___nitc__model_base__MEntity__location, /* pointer to model:MNullableType:model$MProxyType$location */
(nitmethod_t)nitc___nitc__MType___nitc__model_base__MEntity__name, /* pointer to model:MNullableType:model$MType$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to model:MNullableType:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc__model___MEntity___visibility, /* pointer to model:MNullableType:model$MEntity$visibility */
(nitmethod_t)nitc___nitc__MNullableType___nitc__model_base__MEntity__full_name, /* pointer to model:MNullableType:model$MNullableType$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to model:MNullableType:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to model:MNullableType:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to model:MNullableType:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to model:MNullableType:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to model:MNullableType:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to model:MNullableType:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to model:MNullableType:mdoc$MEntity$deprecation */
(nitmethod_t)nitc___nitc__MProxyType___MType__collect_mclassdefs, /* pointer to model:MNullableType:model$MProxyType$collect_mclassdefs */
(nitmethod_t)nitc___nitc__MType___has_mproperty, /* pointer to model:MNullableType:model$MType$has_mproperty */
(nitmethod_t)nitc___nitc__MNullableType___MType__resolve_for, /* pointer to model:MNullableType:model$MNullableType$resolve_for */
(nitmethod_t)nitc__abstract_compiler___MType___ctype, /* pointer to model:MNullableType:abstract_compiler$MType$ctype */
(nitmethod_t)nitc___nitc__MProxyType___MType__need_anchor, /* pointer to model:MNullableType:model$MProxyType$need_anchor */
(nitmethod_t)nitc___nitc__MProxyType___MType__can_resolve_for, /* pointer to model:MNullableType:model$MProxyType$can_resolve_for */
(nitmethod_t)nitc___nitc__MType___anchor_to, /* pointer to model:MNullableType:model$MType$anchor_to */
(nitmethod_t)nitc___nitc__MProxyType___MType__is_legal_in, /* pointer to model:MNullableType:model$MProxyType$is_legal_in */
(nitmethod_t)nitc___nitc__MNullableType___MType__as_nullable, /* pointer to model:MNullableType:model$MNullableType$as_nullable */
(nitmethod_t)nitc___nitc__MType___is_subtype, /* pointer to model:MNullableType:model$MType$is_subtype */
(nitmethod_t)nitc___nitc__MType___lookup_bound, /* pointer to model:MNullableType:model$MType$lookup_bound */
(nitmethod_t)nitc___nitc__MProxyType___MType__as_notnull, /* pointer to model:MNullableType:model$MProxyType$as_notnull */
(nitmethod_t)nitc___nitc__MProxyType___MType__is_ok, /* pointer to model:MNullableType:model$MProxyType$is_ok */
(nitmethod_t)nitc___nitc__MProxyType___MType__length, /* pointer to model:MNullableType:model$MProxyType$length */
(nitmethod_t)nitc__separate_compiler___MType___tag_value_61d, /* pointer to model:MNullableType:separate_compiler$MType$tag_value= */
(nitmethod_t)nitc__separate_compiler___MType___is_tagged_61d, /* pointer to model:MNullableType:separate_compiler$MType$is_tagged= */
(nitmethod_t)nitc__abstract_compiler___MType___is_c_primitive, /* pointer to model:MNullableType:abstract_compiler$MType$is_c_primitive */
(nitmethod_t)nitc__separate_compiler___MType___is_tagged, /* pointer to model:MNullableType:separate_compiler$MType$is_tagged */
(nitmethod_t)nitc__abstract_compiler___MType___ctype_extern, /* pointer to model:MNullableType:abstract_compiler$MType$ctype_extern */
(nitmethod_t)nitc___nitc__MType___as_nullable_cache, /* pointer to model:MNullableType:model$MType$as_nullable_cache */
(nitmethod_t)nitc___nitc__MType___as_nullable_cache_61d, /* pointer to model:MNullableType:model$MType$as_nullable_cache= */
(nitmethod_t)nitc___nitc__MNullableType___MType__lookup_fixed, /* pointer to model:MNullableType:model$MNullableType$lookup_fixed */
(nitmethod_t)nitc___nitc__MProxyType___MType__collect_mclasses, /* pointer to model:MNullableType:model$MProxyType$collect_mclasses */
(nitmethod_t)nitc___nitc__MType___supertype_to, /* pointer to model:MNullableType:model$MType$supertype_to */
(nitmethod_t)nitc___nitc__MProxyType___MType__undecorate, /* pointer to model:MNullableType:model$MProxyType$undecorate */
(nitmethod_t)nitc___nitc__MProxyType___MType__collect_mtypes, /* pointer to model:MNullableType:model$MProxyType$collect_mtypes */
(nitmethod_t)nitc__abstract_compiler___MType___ctypename, /* pointer to model:MNullableType:abstract_compiler$MType$ctypename */
(nitmethod_t)nitc__nitni_base___MType___is_cprimitive, /* pointer to model:MNullableType:nitni_base$MType$is_cprimitive */
(nitmethod_t)nitc__separate_compiler___MType___tag_value, /* pointer to model:MNullableType:separate_compiler$MType$tag_value */
(nitmethod_t)nitc__nitni_base___MNullableType___MType__mangled_cname, /* pointer to model:MNullableType:nitni_base$MNullableType$mangled_cname */
(nitmethod_t)nitc__nitni_base___MType___cname_blind, /* pointer to model:MNullableType:nitni_base$MType$cname_blind */
(nitmethod_t)nitc__nitni_base___MType___cname, /* pointer to model:MNullableType:nitni_base$MType$cname */
(nitmethod_t)nitc__nitni_base___MType___cname_normal_class, /* pointer to model:MNullableType:nitni_base$MType$cname_normal_class */
(nitmethod_t)nitc___nitc__MProxyType___mtype, /* pointer to model:MNullableType:model$MProxyType$mtype */
(nitmethod_t)nitc___nitc__MProxyType___mtype_61d, /* pointer to model:MNullableType:model$MProxyType$mtype= */
(nitmethod_t)core___core__Object___init, /* pointer to model:MNullableType:kernel$Object$init */
(nitmethod_t)nitc___nitc__MNullableType___to_s_61d, /* pointer to model:MNullableType:model$MNullableType$to_s= */
(nitmethod_t)nitc___nitc__MProxyType___core__kernel__Object__init, /* pointer to model:MNullableType:model$MProxyType$init */
(nitmethod_t)nitc___nitc__MProxyType___MType__resolve_for, /* pointer to model:MNullableType:model$MProxyType$resolve_for */
(nitmethod_t)nitc___nitc__MProxyType___MType__lookup_fixed, /* pointer to model:MNullableType:model$MProxyType$lookup_fixed */
}
};
/* allocate MNullableType */
val* NEW_nitc__MNullableType(const struct type* type) {
val* self /* : MNullableType */;
self = nit_alloc(sizeof(struct instance) + 15*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MNullableType;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MNullableType exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MNullableType exact> */
self->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s = 0; /* _is_tagged on <self:MNullableType exact> */
self->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l = 0l; /* _tag_value on <self:MNullableType exact> */
return self;
}
/* runtime class nitc__MNotNullType: nitc::MNotNullType (dead=false; need_corpse=false)*/
const struct class class_nitc__MNotNullType = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MProxyType___core__kernel__Object__init, /* pointer to model:MNotNullType:model$MProxyType$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MNotNullType:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MNotNullType:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MNotNullType___core__abstract_text__Object__to_s, /* pointer to model:MNotNullType:model$MNotNullType$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MNotNullType:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MNotNullType:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MNotNullType:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MNotNullType:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MNotNullType:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MNotNullType:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MNotNullType:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MNotNullType:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MNotNullType___nitc__model_base__MEntity__c_name, /* pointer to model:MNotNullType:model$MNotNullType$c_name */
(nitmethod_t)nitc___nitc__MProxyType___nitc__model_base__MEntity__model, /* pointer to model:MNotNullType:model$MProxyType$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to model:MNotNullType:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MProxyType___nitc__model_base__MEntity__location, /* pointer to model:MNotNullType:model$MProxyType$location */
(nitmethod_t)nitc___nitc__MType___nitc__model_base__MEntity__name, /* pointer to model:MNotNullType:model$MType$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to model:MNotNullType:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc__model___MEntity___visibility, /* pointer to model:MNotNullType:model$MEntity$visibility */
(nitmethod_t)nitc___nitc__MNotNullType___nitc__model_base__MEntity__full_name, /* pointer to model:MNotNullType:model$MNotNullType$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to model:MNotNullType:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to model:MNotNullType:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to model:MNotNullType:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to model:MNotNullType:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to model:MNotNullType:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to model:MNotNullType:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to model:MNotNullType:mdoc$MEntity$deprecation */
(nitmethod_t)nitc___nitc__MProxyType___MType__collect_mclassdefs, /* pointer to model:MNotNullType:model$MProxyType$collect_mclassdefs */
(nitmethod_t)nitc___nitc__MType___has_mproperty, /* pointer to model:MNotNullType:model$MType$has_mproperty */
(nitmethod_t)nitc___nitc__MNotNullType___MType__resolve_for, /* pointer to model:MNotNullType:model$MNotNullType$resolve_for */
(nitmethod_t)nitc__abstract_compiler___MType___ctype, /* pointer to model:MNotNullType:abstract_compiler$MType$ctype */
(nitmethod_t)nitc___nitc__MProxyType___MType__need_anchor, /* pointer to model:MNotNullType:model$MProxyType$need_anchor */
(nitmethod_t)nitc___nitc__MProxyType___MType__can_resolve_for, /* pointer to model:MNotNullType:model$MProxyType$can_resolve_for */
(nitmethod_t)nitc___nitc__MType___anchor_to, /* pointer to model:MNotNullType:model$MType$anchor_to */
(nitmethod_t)nitc___nitc__MProxyType___MType__is_legal_in, /* pointer to model:MNotNullType:model$MProxyType$is_legal_in */
(nitmethod_t)nitc___nitc__MProxyType___MType__as_nullable, /* pointer to model:MNotNullType:model$MProxyType$as_nullable */
(nitmethod_t)nitc___nitc__MType___is_subtype, /* pointer to model:MNotNullType:model$MType$is_subtype */
(nitmethod_t)nitc___nitc__MType___lookup_bound, /* pointer to model:MNotNullType:model$MType$lookup_bound */
(nitmethod_t)nitc___nitc__MNotNullType___MType__as_notnull, /* pointer to model:MNotNullType:model$MNotNullType$as_notnull */
(nitmethod_t)nitc___nitc__MProxyType___MType__is_ok, /* pointer to model:MNotNullType:model$MProxyType$is_ok */
(nitmethod_t)nitc___nitc__MProxyType___MType__length, /* pointer to model:MNotNullType:model$MProxyType$length */
(nitmethod_t)nitc__separate_compiler___MType___tag_value_61d, /* pointer to model:MNotNullType:separate_compiler$MType$tag_value= */
(nitmethod_t)nitc__separate_compiler___MType___is_tagged_61d, /* pointer to model:MNotNullType:separate_compiler$MType$is_tagged= */
(nitmethod_t)nitc__abstract_compiler___MType___is_c_primitive, /* pointer to model:MNotNullType:abstract_compiler$MType$is_c_primitive */
(nitmethod_t)nitc__separate_compiler___MType___is_tagged, /* pointer to model:MNotNullType:separate_compiler$MType$is_tagged */
(nitmethod_t)nitc__abstract_compiler___MType___ctype_extern, /* pointer to model:MNotNullType:abstract_compiler$MType$ctype_extern */
(nitmethod_t)nitc___nitc__MType___as_nullable_cache, /* pointer to model:MNotNullType:model$MType$as_nullable_cache */
(nitmethod_t)nitc___nitc__MType___as_nullable_cache_61d, /* pointer to model:MNotNullType:model$MType$as_nullable_cache= */
(nitmethod_t)nitc___nitc__MNotNullType___MType__lookup_fixed, /* pointer to model:MNotNullType:model$MNotNullType$lookup_fixed */
(nitmethod_t)nitc___nitc__MProxyType___MType__collect_mclasses, /* pointer to model:MNotNullType:model$MProxyType$collect_mclasses */
(nitmethod_t)nitc___nitc__MType___supertype_to, /* pointer to model:MNotNullType:model$MType$supertype_to */
(nitmethod_t)nitc___nitc__MProxyType___MType__undecorate, /* pointer to model:MNotNullType:model$MProxyType$undecorate */
(nitmethod_t)nitc___nitc__MProxyType___MType__collect_mtypes, /* pointer to model:MNotNullType:model$MProxyType$collect_mtypes */
(nitmethod_t)nitc__abstract_compiler___MType___ctypename, /* pointer to model:MNotNullType:abstract_compiler$MType$ctypename */
(nitmethod_t)nitc__nitni_base___MType___is_cprimitive, /* pointer to model:MNotNullType:nitni_base$MType$is_cprimitive */
(nitmethod_t)nitc__separate_compiler___MType___tag_value, /* pointer to model:MNotNullType:separate_compiler$MType$tag_value */
(nitmethod_t)nitc__nitni_base___MType___mangled_cname, /* pointer to model:MNotNullType:nitni_base$MType$mangled_cname */
(nitmethod_t)nitc__nitni_base___MType___cname_blind, /* pointer to model:MNotNullType:nitni_base$MType$cname_blind */
(nitmethod_t)nitc__nitni_base___MType___cname, /* pointer to model:MNotNullType:nitni_base$MType$cname */
(nitmethod_t)nitc__nitni_base___MType___cname_normal_class, /* pointer to model:MNotNullType:nitni_base$MType$cname_normal_class */
(nitmethod_t)nitc___nitc__MProxyType___mtype, /* pointer to model:MNotNullType:model$MProxyType$mtype */
(nitmethod_t)nitc___nitc__MProxyType___mtype_61d, /* pointer to model:MNotNullType:model$MProxyType$mtype= */
(nitmethod_t)core___core__Object___init, /* pointer to model:MNotNullType:kernel$Object$init */
(nitmethod_t)nitc___nitc__MProxyType___MType__resolve_for, /* pointer to model:MNotNullType:model$MProxyType$resolve_for */
(nitmethod_t)nitc___nitc__MProxyType___MType__lookup_fixed, /* pointer to model:MNotNullType:model$MProxyType$lookup_fixed */
}
};
/* allocate MNotNullType */
val* NEW_nitc__MNotNullType(const struct type* type) {
val* self /* : MNotNullType */;
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MNotNullType;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MNotNullType exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MNotNullType exact> */
self->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s = 0; /* _is_tagged on <self:MNotNullType exact> */
self->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l = 0l; /* _tag_value on <self:MNotNullType exact> */
return self;
}
/* runtime class nitc__MNullType: nitc::MNullType (dead=false; need_corpse=false)*/
const struct class class_nitc__MNullType = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MNullType___core__kernel__Object__init, /* pointer to model:MNullType:model$MNullType$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MNullType:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MNullType:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MNullType___core__abstract_text__Object__to_s, /* pointer to model:MNullType:model$MNullType$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MNullType:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MNullType:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MNullType:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MNullType:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MNullType:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MNullType:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MNullType:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MNullType:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MNullType___nitc__model_base__MEntity__c_name, /* pointer to model:MNullType:model$MNullType$c_name */
(nitmethod_t)nitc___nitc__MNullType___nitc__model_base__MEntity__model, /* pointer to model:MNullType:model$MNullType$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to model:MNullType:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MEntity___location, /* pointer to model:MNullType:model_base$MEntity$location */
(nitmethod_t)nitc___nitc__MType___nitc__model_base__MEntity__name, /* pointer to model:MNullType:model$MType$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to model:MNullType:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc__model___MEntity___visibility, /* pointer to model:MNullType:model$MEntity$visibility */
(nitmethod_t)nitc___nitc__MNullType___nitc__model_base__MEntity__full_name, /* pointer to model:MNullType:model$MNullType$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to model:MNullType:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to model:MNullType:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to model:MNullType:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to model:MNullType:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to model:MNullType:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to model:MNullType:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to model:MNullType:mdoc$MEntity$deprecation */
(nitmethod_t)nitc___nitc__MNullType___MType__collect_mclassdefs, /* pointer to model:MNullType:model$MNullType$collect_mclassdefs */
(nitmethod_t)nitc___nitc__MType___has_mproperty, /* pointer to model:MNullType:model$MType$has_mproperty */
(nitmethod_t)nitc___nitc__MNullType___MType__resolve_for, /* pointer to model:MNullType:model$MNullType$resolve_for */
(nitmethod_t)nitc__abstract_compiler___MType___ctype, /* pointer to model:MNullType:abstract_compiler$MType$ctype */
(nitmethod_t)nitc___nitc__MNullType___MType__need_anchor, /* pointer to model:MNullType:model$MNullType$need_anchor */
(nitmethod_t)nitc___nitc__MNullType___MType__can_resolve_for, /* pointer to model:MNullType:model$MNullType$can_resolve_for */
(nitmethod_t)nitc___nitc__MType___anchor_to, /* pointer to model:MNullType:model$MType$anchor_to */
(nitmethod_t)nitc___nitc__MType___is_legal_in, /* pointer to model:MNullType:model$MType$is_legal_in */
(nitmethod_t)nitc___nitc__MNullType___MType__as_nullable, /* pointer to model:MNullType:model$MNullType$as_nullable */
(nitmethod_t)nitc___nitc__MType___is_subtype, /* pointer to model:MNullType:model$MType$is_subtype */
(nitmethod_t)nitc___nitc__MType___lookup_bound, /* pointer to model:MNullType:model$MType$lookup_bound */
(nitmethod_t)nitc___nitc__MNullType___MType__as_notnull, /* pointer to model:MNullType:model$MNullType$as_notnull */
(nitmethod_t)nitc___nitc__MType___is_ok, /* pointer to model:MNullType:model$MType$is_ok */
(nitmethod_t)nitc___nitc__MType___length, /* pointer to model:MNullType:model$MType$length */
(nitmethod_t)nitc__separate_compiler___MType___tag_value_61d, /* pointer to model:MNullType:separate_compiler$MType$tag_value= */
(nitmethod_t)nitc__separate_compiler___MType___is_tagged_61d, /* pointer to model:MNullType:separate_compiler$MType$is_tagged= */
(nitmethod_t)nitc__abstract_compiler___MType___is_c_primitive, /* pointer to model:MNullType:abstract_compiler$MType$is_c_primitive */
(nitmethod_t)nitc__separate_compiler___MType___is_tagged, /* pointer to model:MNullType:separate_compiler$MType$is_tagged */
(nitmethod_t)nitc__abstract_compiler___MType___ctype_extern, /* pointer to model:MNullType:abstract_compiler$MType$ctype_extern */
(nitmethod_t)nitc___nitc__MType___as_nullable_cache, /* pointer to model:MNullType:model$MType$as_nullable_cache */
(nitmethod_t)nitc___nitc__MType___as_nullable_cache_61d, /* pointer to model:MNullType:model$MType$as_nullable_cache= */
(nitmethod_t)nitc___nitc__MType___lookup_fixed, /* pointer to model:MNullType:model$MType$lookup_fixed */
(nitmethod_t)nitc___nitc__MNullType___MType__collect_mclasses, /* pointer to model:MNullType:model$MNullType$collect_mclasses */
(nitmethod_t)nitc___nitc__MType___supertype_to, /* pointer to model:MNullType:model$MType$supertype_to */
(nitmethod_t)nitc___nitc__MType___undecorate, /* pointer to model:MNullType:model$MType$undecorate */
(nitmethod_t)nitc___nitc__MNullType___MType__collect_mtypes, /* pointer to model:MNullType:model$MNullType$collect_mtypes */
(nitmethod_t)nitc__abstract_compiler___MType___ctypename, /* pointer to model:MNullType:abstract_compiler$MType$ctypename */
(nitmethod_t)nitc__nitni_base___MType___is_cprimitive, /* pointer to model:MNullType:nitni_base$MType$is_cprimitive */
(nitmethod_t)nitc__separate_compiler___MType___tag_value, /* pointer to model:MNullType:separate_compiler$MType$tag_value */
(nitmethod_t)nitc__nitni_base___MType___mangled_cname, /* pointer to model:MNullType:nitni_base$MType$mangled_cname */
(nitmethod_t)nitc__nitni_base___MType___cname_blind, /* pointer to model:MNullType:nitni_base$MType$cname_blind */
(nitmethod_t)nitc__nitni_base___MType___cname, /* pointer to model:MNullType:nitni_base$MType$cname */
(nitmethod_t)nitc__nitni_base___MType___cname_normal_class, /* pointer to model:MNullType:nitni_base$MType$cname_normal_class */
(nitmethod_t)nitc___nitc__MNullType___model_61d, /* pointer to model:MNullType:model$MNullType$model= */
(nitmethod_t)core___core__Object___init, /* pointer to model:MNullType:kernel$Object$init */
}
};
/* allocate MNullType */
val* NEW_nitc__MNullType(const struct type* type) {
val* self /* : MNullType */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MNullType;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MNullType exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MNullType exact> */
self->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s = 0; /* _is_tagged on <self:MNullType exact> */
self->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l = 0l; /* _tag_value on <self:MNullType exact> */
return self;
}
/* runtime class nitc__MBottomType: nitc::MBottomType (dead=false; need_corpse=false)*/
const struct class class_nitc__MBottomType = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MBottomType___core__kernel__Object__init, /* pointer to model:MBottomType:model$MBottomType$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MBottomType:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MBottomType:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MBottomType___core__abstract_text__Object__to_s, /* pointer to model:MBottomType:model$MBottomType$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MBottomType:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MBottomType:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MBottomType:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MBottomType:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MBottomType:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MBottomType:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MBottomType:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MBottomType:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MBottomType___nitc__model_base__MEntity__c_name, /* pointer to model:MBottomType:model$MBottomType$c_name */
(nitmethod_t)nitc___nitc__MBottomType___nitc__model_base__MEntity__model, /* pointer to model:MBottomType:model$MBottomType$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to model:MBottomType:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MEntity___location, /* pointer to model:MBottomType:model_base$MEntity$location */
(nitmethod_t)nitc___nitc__MType___nitc__model_base__MEntity__name, /* pointer to model:MBottomType:model$MType$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to model:MBottomType:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc__model___MEntity___visibility, /* pointer to model:MBottomType:model$MEntity$visibility */
(nitmethod_t)nitc___nitc__MBottomType___nitc__model_base__MEntity__full_name, /* pointer to model:MBottomType:model$MBottomType$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to model:MBottomType:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to model:MBottomType:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to model:MBottomType:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to model:MBottomType:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to model:MBottomType:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to model:MBottomType:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to model:MBottomType:mdoc$MEntity$deprecation */
(nitmethod_t)nitc___nitc__MBottomType___MType__collect_mclassdefs, /* pointer to model:MBottomType:model$MBottomType$collect_mclassdefs */
(nitmethod_t)nitc___nitc__MType___has_mproperty, /* pointer to model:MBottomType:model$MType$has_mproperty */
(nitmethod_t)nitc___nitc__MBottomType___MType__resolve_for, /* pointer to model:MBottomType:model$MBottomType$resolve_for */
(nitmethod_t)nitc__abstract_compiler___MType___ctype, /* pointer to model:MBottomType:abstract_compiler$MType$ctype */
(nitmethod_t)nitc___nitc__MBottomType___MType__need_anchor, /* pointer to model:MBottomType:model$MBottomType$need_anchor */
(nitmethod_t)nitc___nitc__MBottomType___MType__can_resolve_for, /* pointer to model:MBottomType:model$MBottomType$can_resolve_for */
(nitmethod_t)nitc___nitc__MType___anchor_to, /* pointer to model:MBottomType:model$MType$anchor_to */
(nitmethod_t)nitc___nitc__MType___is_legal_in, /* pointer to model:MBottomType:model$MType$is_legal_in */
(nitmethod_t)nitc___nitc__MBottomType___MType__as_nullable, /* pointer to model:MBottomType:model$MBottomType$as_nullable */
(nitmethod_t)nitc___nitc__MType___is_subtype, /* pointer to model:MBottomType:model$MType$is_subtype */
(nitmethod_t)nitc___nitc__MType___lookup_bound, /* pointer to model:MBottomType:model$MType$lookup_bound */
(nitmethod_t)nitc___nitc__MBottomType___MType__as_notnull, /* pointer to model:MBottomType:model$MBottomType$as_notnull */
(nitmethod_t)nitc___nitc__MType___is_ok, /* pointer to model:MBottomType:model$MType$is_ok */
(nitmethod_t)nitc___nitc__MType___length, /* pointer to model:MBottomType:model$MType$length */
(nitmethod_t)nitc__separate_compiler___MType___tag_value_61d, /* pointer to model:MBottomType:separate_compiler$MType$tag_value= */
(nitmethod_t)nitc__separate_compiler___MType___is_tagged_61d, /* pointer to model:MBottomType:separate_compiler$MType$is_tagged= */
(nitmethod_t)nitc__abstract_compiler___MType___is_c_primitive, /* pointer to model:MBottomType:abstract_compiler$MType$is_c_primitive */
(nitmethod_t)nitc__separate_compiler___MType___is_tagged, /* pointer to model:MBottomType:separate_compiler$MType$is_tagged */
(nitmethod_t)nitc__abstract_compiler___MType___ctype_extern, /* pointer to model:MBottomType:abstract_compiler$MType$ctype_extern */
(nitmethod_t)nitc___nitc__MType___as_nullable_cache, /* pointer to model:MBottomType:model$MType$as_nullable_cache */
(nitmethod_t)nitc___nitc__MType___as_nullable_cache_61d, /* pointer to model:MBottomType:model$MType$as_nullable_cache= */
(nitmethod_t)nitc___nitc__MType___lookup_fixed, /* pointer to model:MBottomType:model$MType$lookup_fixed */
(nitmethod_t)nitc___nitc__MBottomType___MType__collect_mclasses, /* pointer to model:MBottomType:model$MBottomType$collect_mclasses */
(nitmethod_t)nitc___nitc__MType___supertype_to, /* pointer to model:MBottomType:model$MType$supertype_to */
(nitmethod_t)nitc___nitc__MType___undecorate, /* pointer to model:MBottomType:model$MType$undecorate */
(nitmethod_t)nitc___nitc__MBottomType___MType__collect_mtypes, /* pointer to model:MBottomType:model$MBottomType$collect_mtypes */
(nitmethod_t)nitc__abstract_compiler___MType___ctypename, /* pointer to model:MBottomType:abstract_compiler$MType$ctypename */
(nitmethod_t)nitc__nitni_base___MType___is_cprimitive, /* pointer to model:MBottomType:nitni_base$MType$is_cprimitive */
(nitmethod_t)nitc__separate_compiler___MType___tag_value, /* pointer to model:MBottomType:separate_compiler$MType$tag_value */
(nitmethod_t)nitc__nitni_base___MType___mangled_cname, /* pointer to model:MBottomType:nitni_base$MType$mangled_cname */
(nitmethod_t)nitc__nitni_base___MType___cname_blind, /* pointer to model:MBottomType:nitni_base$MType$cname_blind */
(nitmethod_t)nitc__nitni_base___MType___cname, /* pointer to model:MBottomType:nitni_base$MType$cname */
(nitmethod_t)nitc__nitni_base___MType___cname_normal_class, /* pointer to model:MBottomType:nitni_base$MType$cname_normal_class */
(nitmethod_t)nitc___nitc__MBottomType___model_61d, /* pointer to model:MBottomType:model$MBottomType$model= */
(nitmethod_t)core___core__Object___init, /* pointer to model:MBottomType:kernel$Object$init */
}
};
/* allocate MBottomType */
val* NEW_nitc__MBottomType(const struct type* type) {
val* self /* : MBottomType */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MBottomType;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MBottomType exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MBottomType exact> */
self->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s = 0; /* _is_tagged on <self:MBottomType exact> */
self->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l = 0l; /* _tag_value on <self:MBottomType exact> */
return self;
}
/* runtime class nitc__MErrorType: nitc::MErrorType (dead=false; need_corpse=false)*/
const struct class class_nitc__MErrorType = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MErrorType___core__kernel__Object__init, /* pointer to model:MErrorType:model$MErrorType$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MErrorType:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MErrorType:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MErrorType___core__abstract_text__Object__to_s, /* pointer to model:MErrorType:model$MErrorType$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MErrorType:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MErrorType:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MErrorType:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MErrorType:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MErrorType:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MErrorType:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MErrorType:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MErrorType:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MErrorType___nitc__model_base__MEntity__c_name, /* pointer to model:MErrorType:model$MErrorType$c_name */
(nitmethod_t)nitc___nitc__MErrorType___nitc__model_base__MEntity__model, /* pointer to model:MErrorType:model$MErrorType$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to model:MErrorType:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MEntity___location, /* pointer to model:MErrorType:model_base$MEntity$location */
(nitmethod_t)nitc___nitc__MType___nitc__model_base__MEntity__name, /* pointer to model:MErrorType:model$MType$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to model:MErrorType:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc__model___MEntity___visibility, /* pointer to model:MErrorType:model$MEntity$visibility */
(nitmethod_t)nitc___nitc__MErrorType___nitc__model_base__MEntity__full_name, /* pointer to model:MErrorType:model$MErrorType$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to model:MErrorType:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to model:MErrorType:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to model:MErrorType:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to model:MErrorType:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to model:MErrorType:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to model:MErrorType:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to model:MErrorType:mdoc$MEntity$deprecation */
(nitmethod_t)nitc___nitc__MErrorType___MType__collect_mclassdefs, /* pointer to model:MErrorType:model$MErrorType$collect_mclassdefs */
(nitmethod_t)nitc___nitc__MType___has_mproperty, /* pointer to model:MErrorType:model$MType$has_mproperty */
(nitmethod_t)nitc___nitc__MErrorType___MType__resolve_for, /* pointer to model:MErrorType:model$MErrorType$resolve_for */
(nitmethod_t)nitc__abstract_compiler___MType___ctype, /* pointer to model:MErrorType:abstract_compiler$MType$ctype */
(nitmethod_t)nitc___nitc__MErrorType___MType__need_anchor, /* pointer to model:MErrorType:model$MErrorType$need_anchor */
(nitmethod_t)nitc___nitc__MErrorType___MType__can_resolve_for, /* pointer to model:MErrorType:model$MErrorType$can_resolve_for */
(nitmethod_t)nitc___nitc__MType___anchor_to, /* pointer to model:MErrorType:model$MType$anchor_to */
(nitmethod_t)nitc___nitc__MType___is_legal_in, /* pointer to model:MErrorType:model$MType$is_legal_in */
(nitmethod_t)nitc___nitc__MType___as_nullable, /* pointer to model:MErrorType:model$MType$as_nullable */
(nitmethod_t)nitc___nitc__MType___is_subtype, /* pointer to model:MErrorType:model$MType$is_subtype */
(nitmethod_t)nitc___nitc__MType___lookup_bound, /* pointer to model:MErrorType:model$MType$lookup_bound */
(nitmethod_t)nitc___nitc__MType___as_notnull, /* pointer to model:MErrorType:model$MType$as_notnull */
(nitmethod_t)nitc___nitc__MErrorType___MType__is_ok, /* pointer to model:MErrorType:model$MErrorType$is_ok */
(nitmethod_t)nitc___nitc__MType___length, /* pointer to model:MErrorType:model$MType$length */
(nitmethod_t)nitc__separate_compiler___MType___tag_value_61d, /* pointer to model:MErrorType:separate_compiler$MType$tag_value= */
(nitmethod_t)nitc__separate_compiler___MType___is_tagged_61d, /* pointer to model:MErrorType:separate_compiler$MType$is_tagged= */
(nitmethod_t)nitc__abstract_compiler___MType___is_c_primitive, /* pointer to model:MErrorType:abstract_compiler$MType$is_c_primitive */
(nitmethod_t)nitc__separate_compiler___MType___is_tagged, /* pointer to model:MErrorType:separate_compiler$MType$is_tagged */
(nitmethod_t)nitc__abstract_compiler___MType___ctype_extern, /* pointer to model:MErrorType:abstract_compiler$MType$ctype_extern */
(nitmethod_t)nitc___nitc__MType___as_nullable_cache, /* pointer to model:MErrorType:model$MType$as_nullable_cache */
(nitmethod_t)nitc___nitc__MType___as_nullable_cache_61d, /* pointer to model:MErrorType:model$MType$as_nullable_cache= */
(nitmethod_t)nitc___nitc__MType___lookup_fixed, /* pointer to model:MErrorType:model$MType$lookup_fixed */
(nitmethod_t)nitc___nitc__MErrorType___MType__collect_mclasses, /* pointer to model:MErrorType:model$MErrorType$collect_mclasses */
(nitmethod_t)nitc___nitc__MType___supertype_to, /* pointer to model:MErrorType:model$MType$supertype_to */
(nitmethod_t)nitc___nitc__MType___undecorate, /* pointer to model:MErrorType:model$MType$undecorate */
(nitmethod_t)nitc___nitc__MErrorType___MType__collect_mtypes, /* pointer to model:MErrorType:model$MErrorType$collect_mtypes */
(nitmethod_t)nitc__abstract_compiler___MType___ctypename, /* pointer to model:MErrorType:abstract_compiler$MType$ctypename */
(nitmethod_t)nitc__nitni_base___MType___is_cprimitive, /* pointer to model:MErrorType:nitni_base$MType$is_cprimitive */
(nitmethod_t)nitc__separate_compiler___MType___tag_value, /* pointer to model:MErrorType:separate_compiler$MType$tag_value */
(nitmethod_t)nitc__nitni_base___MType___mangled_cname, /* pointer to model:MErrorType:nitni_base$MType$mangled_cname */
(nitmethod_t)nitc__nitni_base___MType___cname_blind, /* pointer to model:MErrorType:nitni_base$MType$cname_blind */
(nitmethod_t)nitc__nitni_base___MType___cname, /* pointer to model:MErrorType:nitni_base$MType$cname */
(nitmethod_t)nitc__nitni_base___MType___cname_normal_class, /* pointer to model:MErrorType:nitni_base$MType$cname_normal_class */
(nitmethod_t)nitc___nitc__MErrorType___model_61d, /* pointer to model:MErrorType:model$MErrorType$model= */
(nitmethod_t)core___core__Object___init, /* pointer to model:MErrorType:kernel$Object$init */
}
};
/* allocate MErrorType */
val* NEW_nitc__MErrorType(const struct type* type) {
val* self /* : MErrorType */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MErrorType;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MErrorType exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MErrorType exact> */
self->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s = 0; /* _is_tagged on <self:MErrorType exact> */
self->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l = 0l; /* _tag_value on <self:MErrorType exact> */
return self;
}
/* runtime class nitc__MSignature: nitc::MSignature (dead=false; need_corpse=false)*/
const struct class class_nitc__MSignature = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MSignature___core__kernel__Object__init, /* pointer to model:MSignature:model$MSignature$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MSignature:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MSignature:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MSignature___core__abstract_text__Object__to_s, /* pointer to model:MSignature:model$MSignature$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MSignature:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MSignature:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MSignature:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MSignature:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MSignature:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MSignature:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MSignature:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MSignature:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MEntity___c_name, /* pointer to model:MSignature:model_base$MEntity$c_name */
(nitmethod_t)nitc___nitc__MEntity___model, /* pointer to model:MSignature:model_base$MEntity$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to model:MSignature:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MEntity___location, /* pointer to model:MSignature:model_base$MEntity$location */
(nitmethod_t)nitc___nitc__MType___nitc__model_base__MEntity__name, /* pointer to model:MSignature:model$MType$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to model:MSignature:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc__model___MEntity___visibility, /* pointer to model:MSignature:model$MEntity$visibility */
(nitmethod_t)nitc___nitc__MEntity___full_name, /* pointer to model:MSignature:model_base$MEntity$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to model:MSignature:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to model:MSignature:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to model:MSignature:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to model:MSignature:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to model:MSignature:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to model:MSignature:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to model:MSignature:mdoc$MEntity$deprecation */
(nitmethod_t)nitc___nitc__MType___collect_mclassdefs, /* pointer to model:MSignature:model$MType$collect_mclassdefs */
(nitmethod_t)nitc___nitc__MType___has_mproperty, /* pointer to model:MSignature:model$MType$has_mproperty */
(nitmethod_t)nitc___nitc__MSignature___MType__resolve_for, /* pointer to model:MSignature:model$MSignature$resolve_for */
(nitmethod_t)nitc__abstract_compiler___MType___ctype, /* pointer to model:MSignature:abstract_compiler$MType$ctype */
(nitmethod_t)nitc___nitc__MType___need_anchor, /* pointer to model:MSignature:model$MType$need_anchor */
(nitmethod_t)nitc___nitc__MType___can_resolve_for, /* pointer to model:MSignature:model$MType$can_resolve_for */
(nitmethod_t)nitc___nitc__MType___anchor_to, /* pointer to model:MSignature:model$MType$anchor_to */
(nitmethod_t)nitc___nitc__MType___is_legal_in, /* pointer to model:MSignature:model$MType$is_legal_in */
(nitmethod_t)nitc___nitc__MType___as_nullable, /* pointer to model:MSignature:model$MType$as_nullable */
(nitmethod_t)nitc___nitc__MType___is_subtype, /* pointer to model:MSignature:model$MType$is_subtype */
(nitmethod_t)nitc___nitc__MType___lookup_bound, /* pointer to model:MSignature:model$MType$lookup_bound */
(nitmethod_t)nitc___nitc__MType___as_notnull, /* pointer to model:MSignature:model$MType$as_notnull */
(nitmethod_t)nitc___nitc__MType___is_ok, /* pointer to model:MSignature:model$MType$is_ok */
(nitmethod_t)nitc___nitc__MSignature___MType__length, /* pointer to model:MSignature:model$MSignature$length */
(nitmethod_t)nitc__separate_compiler___MType___tag_value_61d, /* pointer to model:MSignature:separate_compiler$MType$tag_value= */
(nitmethod_t)nitc__separate_compiler___MType___is_tagged_61d, /* pointer to model:MSignature:separate_compiler$MType$is_tagged= */
(nitmethod_t)nitc__abstract_compiler___MType___is_c_primitive, /* pointer to model:MSignature:abstract_compiler$MType$is_c_primitive */
(nitmethod_t)nitc__separate_compiler___MType___is_tagged, /* pointer to model:MSignature:separate_compiler$MType$is_tagged */
(nitmethod_t)nitc__abstract_compiler___MType___ctype_extern, /* pointer to model:MSignature:abstract_compiler$MType$ctype_extern */
(nitmethod_t)nitc___nitc__MType___as_nullable_cache, /* pointer to model:MSignature:model$MType$as_nullable_cache */
(nitmethod_t)nitc___nitc__MType___as_nullable_cache_61d, /* pointer to model:MSignature:model$MType$as_nullable_cache= */
(nitmethod_t)nitc___nitc__MType___lookup_fixed, /* pointer to model:MSignature:model$MType$lookup_fixed */
(nitmethod_t)nitc___nitc__MType___collect_mclasses, /* pointer to model:MSignature:model$MType$collect_mclasses */
(nitmethod_t)nitc___nitc__MType___supertype_to, /* pointer to model:MSignature:model$MType$supertype_to */
(nitmethod_t)nitc___nitc__MType___undecorate, /* pointer to model:MSignature:model$MType$undecorate */
(nitmethod_t)nitc___nitc__MType___collect_mtypes, /* pointer to model:MSignature:model$MType$collect_mtypes */
(nitmethod_t)nitc__abstract_compiler___MType___ctypename, /* pointer to model:MSignature:abstract_compiler$MType$ctypename */
(nitmethod_t)nitc__nitni_base___MType___is_cprimitive, /* pointer to model:MSignature:nitni_base$MType$is_cprimitive */
(nitmethod_t)nitc__separate_compiler___MType___tag_value, /* pointer to model:MSignature:separate_compiler$MType$tag_value */
(nitmethod_t)nitc__nitni_base___MType___mangled_cname, /* pointer to model:MSignature:nitni_base$MType$mangled_cname */
(nitmethod_t)nitc__nitni_base___MType___cname_blind, /* pointer to model:MSignature:nitni_base$MType$cname_blind */
(nitmethod_t)nitc__nitni_base___MType___cname, /* pointer to model:MSignature:nitni_base$MType$cname */
(nitmethod_t)nitc__nitni_base___MType___cname_normal_class, /* pointer to model:MSignature:nitni_base$MType$cname_normal_class */
(nitmethod_t)nitc___nitc__MSignature___return_mtype, /* pointer to model:MSignature:model$MSignature$return_mtype */
(nitmethod_t)nitc___nitc__MSignature___vararg_rank, /* pointer to model:MSignature:model$MSignature$vararg_rank */
(nitmethod_t)nitc___nitc__MSignature___mparameters, /* pointer to model:MSignature:model$MSignature$mparameters */
(nitmethod_t)nitc___nitc__MSignature___arity, /* pointer to model:MSignature:model$MSignature$arity */
(nitmethod_t)nitc___nitc__MSignature___mparameters_61d, /* pointer to model:MSignature:model$MSignature$mparameters= */
(nitmethod_t)nitc___nitc__MSignature___return_mtype_61d, /* pointer to model:MSignature:model$MSignature$return_mtype= */
(nitmethod_t)nitc___nitc__MSignature___vararg_rank_61d, /* pointer to model:MSignature:model$MSignature$vararg_rank= */
(nitmethod_t)nitc__separate_compiler___MSignature___c_equiv, /* pointer to model:MSignature:separate_compiler$MSignature$c_equiv */
(nitmethod_t)nitc___nitc__MSignature___mparameter_by_name, /* pointer to model:MSignature:model$MSignature$mparameter_by_name */
(nitmethod_t)core___core__Object___init, /* pointer to model:MSignature:kernel$Object$init */
}
};
/* allocate MSignature */
val* NEW_nitc__MSignature(const struct type* type) {
val* self /* : MSignature */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MSignature;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MSignature exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MSignature exact> */
self->attrs[COLOR_nitc__separate_compiler__MType___is_tagged].s = 0; /* _is_tagged on <self:MSignature exact> */
self->attrs[COLOR_nitc__separate_compiler__MType___tag_value].l = 0l; /* _tag_value on <self:MSignature exact> */
return self;
}
/* runtime class nitc__MParameter: nitc::MParameter (dead=false; need_corpse=false)*/
const struct class class_nitc__MParameter = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MParameter___core__kernel__Object__init, /* pointer to model:MParameter:model$MParameter$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MParameter:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MParameter:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MParameter___core__abstract_text__Object__to_s, /* pointer to model:MParameter:model$MParameter$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MParameter:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MParameter:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MParameter:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MParameter:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MParameter:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MParameter:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MParameter:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MParameter:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MEntity___c_name, /* pointer to model:MParameter:model_base$MEntity$c_name */
(nitmethod_t)nitc___nitc__MParameter___nitc__model_base__MEntity__model, /* pointer to model:MParameter:model$MParameter$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to model:MParameter:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MEntity___location, /* pointer to model:MParameter:model_base$MEntity$location */
(nitmethod_t)nitc___nitc__MParameter___nitc__model_base__MEntity__name, /* pointer to model:MParameter:model$MParameter$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to model:MParameter:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc__model___MEntity___visibility, /* pointer to model:MParameter:model$MEntity$visibility */
(nitmethod_t)nitc___nitc__MEntity___full_name, /* pointer to model:MParameter:model_base$MEntity$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to model:MParameter:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to model:MParameter:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to model:MParameter:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to model:MParameter:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to model:MParameter:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to model:MParameter:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to model:MParameter:mdoc$MEntity$deprecation */
(nitmethod_t)nitc___nitc__MParameter___mtype, /* pointer to model:MParameter:model$MParameter$mtype */
(nitmethod_t)nitc___nitc__MParameter___name_61d, /* pointer to model:MParameter:model$MParameter$name= */
(nitmethod_t)nitc___nitc__MParameter___mtype_61d, /* pointer to model:MParameter:model$MParameter$mtype= */
(nitmethod_t)nitc___nitc__MParameter___is_vararg_61d, /* pointer to model:MParameter:model$MParameter$is_vararg= */
(nitmethod_t)nitc___nitc__MParameter___is_vararg, /* pointer to model:MParameter:model$MParameter$is_vararg */
(nitmethod_t)nitc___nitc__MParameter___resolve_for, /* pointer to model:MParameter:model$MParameter$resolve_for */
(nitmethod_t)core___core__Object___init, /* pointer to model:MParameter:kernel$Object$init */
}
};
/* allocate MParameter */
val* NEW_nitc__MParameter(const struct type* type) {
val* self /* : MParameter */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MParameter;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MParameter exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MParameter exact> */
return self;
}
/* runtime class nitc__MProperty: nitc::MProperty (dead=true; need_corpse=false)*/
/* allocate MProperty */
val* NEW_nitc__MProperty(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "MProperty is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__MMethod: nitc::MMethod (dead=false; need_corpse=false)*/
const struct class class_nitc__MMethod = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MProperty___core__kernel__Object__init, /* pointer to model:MMethod:model$MProperty$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MMethod:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MMethod:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MProperty___core__abstract_text__Object__to_s, /* pointer to model:MMethod:model$MProperty$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MMethod:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MMethod:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MMethod:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MMethod:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MMethod:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MMethod:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MMethod:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MMethod:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MProperty___nitc__model_base__MEntity__c_name, /* pointer to model:MMethod:model$MProperty$c_name */
(nitmethod_t)nitc___nitc__MProperty___nitc__model_base__MEntity__model, /* pointer to model:MMethod:model$MProperty$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to model:MMethod:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MProperty___nitc__model_base__MEntity__location, /* pointer to model:MMethod:model$MProperty$location */
(nitmethod_t)nitc___nitc__MProperty___nitc__model_base__MEntity__name, /* pointer to model:MMethod:model$MProperty$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to model:MMethod:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc___nitc__MProperty___MEntity__visibility, /* pointer to model:MMethod:model$MProperty$visibility */
(nitmethod_t)nitc___nitc__MProperty___nitc__model_base__MEntity__full_name, /* pointer to model:MMethod:model$MProperty$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to model:MMethod:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to model:MMethod:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to model:MMethod:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to model:MMethod:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to model:MMethod:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to model:MMethod:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to model:MMethod:mdoc$MEntity$deprecation */
(nitmethod_t)nitc___nitc__MProperty___intro, /* pointer to model:MMethod:model$MProperty$intro */
(nitmethod_t)nitc___nitc__MProperty___intro_mclassdef, /* pointer to model:MMethod:model$MProperty$intro_mclassdef */
(nitmethod_t)nitc___nitc__MProperty___mpropdefs, /* pointer to model:MMethod:model$MProperty$mpropdefs */
(nitmethod_t)nitc___nitc__MProperty___intro_61d, /* pointer to model:MMethod:model$MProperty$intro= */
(nitmethod_t)nitc___nitc__MProperty___lookup_definitions, /* pointer to model:MMethod:model$MProperty$lookup_definitions */
(nitmethod_t)nitc___nitc__MProperty___intro_mclassdef_61d, /* pointer to model:MMethod:model$MProperty$intro_mclassdef= */
(nitmethod_t)nitc___nitc__MProperty___name_61d, /* pointer to model:MMethod:model$MProperty$name= */
(nitmethod_t)nitc___nitc__MProperty___location_61d, /* pointer to model:MMethod:model$MProperty$location= */
(nitmethod_t)nitc___nitc__MProperty___visibility_61d, /* pointer to model:MMethod:model$MProperty$visibility= */
(nitmethod_t)nitc___nitc__MProperty___is_autoinit_61d, /* pointer to model:MMethod:model$MProperty$is_autoinit= */
(nitmethod_t)nitc___nitc__MProperty___lookup_super_definitions, /* pointer to model:MMethod:model$MProperty$lookup_super_definitions */
(nitmethod_t)nitc___nitc__MProperty___is_autoinit, /* pointer to model:MMethod:model$MProperty$is_autoinit */
(nitmethod_t)nitc___nitc__MProperty___lookup_first_definition, /* pointer to model:MMethod:model$MProperty$lookup_first_definition */
(nitmethod_t)nitc___nitc__MProperty___lookup_definitions_cache, /* pointer to model:MMethod:model$MProperty$lookup_definitions_cache */
(nitmethod_t)nitc___nitc__MProperty___select_most_specific, /* pointer to model:MMethod:model$MProperty$select_most_specific */
(nitmethod_t)nitc___nitc__MProperty___lookup_all_definitions, /* pointer to model:MMethod:model$MProperty$lookup_all_definitions */
(nitmethod_t)nitc___nitc__MProperty___lookup_all_definitions_cache, /* pointer to model:MMethod:model$MProperty$lookup_all_definitions_cache */
(nitmethod_t)core___core__Object___init, /* pointer to model:MMethod:kernel$Object$init */
(nitmethod_t)nitc___nitc__MMethod___is_root_init, /* pointer to model:MMethod:model$MMethod$is_root_init */
(nitmethod_t)nitc___nitc__MMethod___is_root_init_61d, /* pointer to model:MMethod:model$MMethod$is_root_init= */
(nitmethod_t)nitc___nitc__MMethod___is_init_61d, /* pointer to model:MMethod:model$MMethod$is_init= */
(nitmethod_t)nitc___nitc__MMethod___is_init, /* pointer to model:MMethod:model$MMethod$is_init */
(nitmethod_t)nitc___nitc__MMethod___is_new, /* pointer to model:MMethod:model$MMethod$is_new */
(nitmethod_t)nitc___nitc__MMethod___is_new_61d, /* pointer to model:MMethod:model$MMethod$is_new= */
(nitmethod_t)nitc___nitc__MMethod___is_toplevel_61d, /* pointer to model:MMethod:model$MMethod$is_toplevel= */
(nitmethod_t)nitc__nitni_utilities___MMethod___build_cname, /* pointer to model:MMethod:nitni_utilities$MMethod$build_cname */
(nitmethod_t)nitc___nitc__MMethod___is_init_for, /* pointer to model:MMethod:model$MMethod$is_init_for */
(nitmethod_t)nitc__nitni_base___MMethod___short_cname, /* pointer to model:MMethod:nitni_base$MMethod$short_cname */
(nitmethod_t)nitc__nitni_utilities___MMethod___build_csignature, /* pointer to model:MMethod:nitni_utilities$MMethod$build_csignature */
(nitmethod_t)nitc___nitc__MMethod___is_null_safe, /* pointer to model:MMethod:model$MMethod$is_null_safe */
(nitmethod_t)nitc___nitc__MMethod___is_toplevel, /* pointer to model:MMethod:model$MMethod$is_toplevel */
}
};
/* allocate MMethod */
val* NEW_nitc__MMethod(const struct type* type) {
val* self /* : MMethod */;
val* var /* : Array[MMethodDef] */;
val* var1 /* : HashMap2[MModule, MType, Array[MMethodDef]] */;
val* var2 /* : HashMap2[MModule, MType, Array[MMethodDef]] */;
self = nit_alloc(sizeof(struct instance) + 23*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MMethod;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MMethod exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MMethod exact> */
self->attrs[COLOR_nitc__model__MProperty___is_autoinit].s = 0; /* _is_autoinit on <self:MMethod exact> */
var = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__nitc__model__MProperty__MPROPDEF]);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[MMethodDef]>*/
}
self->attrs[COLOR_nitc__model__MProperty___mpropdefs].val = var; /* _mpropdefs on <self:MMethod exact> */
var1 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2__nitc__MModule__nitc__MType__core__Array__nitc__model__MProperty__MPROPDEF]);
{
{ /* Inline kernel$Object$init (var1) on <var1:HashMap2[MModule, MType, Array[MMethodDef]]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nitc__model__MProperty___lookup_definitions_cache].val = var1; /* _lookup_definitions_cache on <self:MMethod exact> */
var2 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2__nitc__MModule__nitc__MType__core__Array__nitc__model__MProperty__MPROPDEF]);
{
{ /* Inline kernel$Object$init (var2) on <var2:HashMap2[MModule, MType, Array[MMethodDef]]> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_nitc__model__MProperty___lookup_all_definitions_cache].val = var2; /* _lookup_all_definitions_cache on <self:MMethod exact> */
self->attrs[COLOR_nitc__model__MMethod___is_toplevel].s = 0; /* _is_toplevel on <self:MMethod exact> */
self->attrs[COLOR_nitc__model__MMethod___is_init].s = 0; /* _is_init on <self:MMethod exact> */
self->attrs[COLOR_nitc__model__MMethod___is_root_init].s = 0; /* _is_root_init on <self:MMethod exact> */
self->attrs[COLOR_nitc__model__MMethod___is_new].s = 0; /* _is_new on <self:MMethod exact> */
return self;
}
/* runtime class nitc__MAttribute: nitc::MAttribute (dead=false; need_corpse=false)*/
const struct class class_nitc__MAttribute = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MProperty___core__kernel__Object__init, /* pointer to model:MAttribute:model$MProperty$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MAttribute:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MAttribute:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MProperty___core__abstract_text__Object__to_s, /* pointer to model:MAttribute:model$MProperty$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MAttribute:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MAttribute:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MAttribute:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MAttribute:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MAttribute:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MAttribute:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MAttribute:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MAttribute:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MProperty___nitc__model_base__MEntity__c_name, /* pointer to model:MAttribute:model$MProperty$c_name */
(nitmethod_t)nitc___nitc__MProperty___nitc__model_base__MEntity__model, /* pointer to model:MAttribute:model$MProperty$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to model:MAttribute:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MProperty___nitc__model_base__MEntity__location, /* pointer to model:MAttribute:model$MProperty$location */
(nitmethod_t)nitc___nitc__MProperty___nitc__model_base__MEntity__name, /* pointer to model:MAttribute:model$MProperty$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to model:MAttribute:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc___nitc__MProperty___MEntity__visibility, /* pointer to model:MAttribute:model$MProperty$visibility */
(nitmethod_t)nitc___nitc__MProperty___nitc__model_base__MEntity__full_name, /* pointer to model:MAttribute:model$MProperty$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to model:MAttribute:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to model:MAttribute:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to model:MAttribute:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to model:MAttribute:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to model:MAttribute:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to model:MAttribute:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to model:MAttribute:mdoc$MEntity$deprecation */
(nitmethod_t)nitc___nitc__MProperty___intro, /* pointer to model:MAttribute:model$MProperty$intro */
(nitmethod_t)nitc___nitc__MProperty___intro_mclassdef, /* pointer to model:MAttribute:model$MProperty$intro_mclassdef */
(nitmethod_t)nitc___nitc__MProperty___mpropdefs, /* pointer to model:MAttribute:model$MProperty$mpropdefs */
(nitmethod_t)nitc___nitc__MProperty___intro_61d, /* pointer to model:MAttribute:model$MProperty$intro= */
(nitmethod_t)nitc___nitc__MProperty___lookup_definitions, /* pointer to model:MAttribute:model$MProperty$lookup_definitions */
(nitmethod_t)nitc___nitc__MProperty___intro_mclassdef_61d, /* pointer to model:MAttribute:model$MProperty$intro_mclassdef= */
(nitmethod_t)nitc___nitc__MProperty___name_61d, /* pointer to model:MAttribute:model$MProperty$name= */
(nitmethod_t)nitc___nitc__MProperty___location_61d, /* pointer to model:MAttribute:model$MProperty$location= */
(nitmethod_t)nitc___nitc__MProperty___visibility_61d, /* pointer to model:MAttribute:model$MProperty$visibility= */
(nitmethod_t)nitc___nitc__MProperty___is_autoinit_61d, /* pointer to model:MAttribute:model$MProperty$is_autoinit= */
(nitmethod_t)nitc___nitc__MProperty___lookup_super_definitions, /* pointer to model:MAttribute:model$MProperty$lookup_super_definitions */
(nitmethod_t)nitc___nitc__MProperty___is_autoinit, /* pointer to model:MAttribute:model$MProperty$is_autoinit */
(nitmethod_t)nitc___nitc__MProperty___lookup_first_definition, /* pointer to model:MAttribute:model$MProperty$lookup_first_definition */
(nitmethod_t)nitc___nitc__MProperty___lookup_definitions_cache, /* pointer to model:MAttribute:model$MProperty$lookup_definitions_cache */
(nitmethod_t)nitc___nitc__MProperty___select_most_specific, /* pointer to model:MAttribute:model$MProperty$select_most_specific */
(nitmethod_t)nitc___nitc__MProperty___lookup_all_definitions, /* pointer to model:MAttribute:model$MProperty$lookup_all_definitions */
(nitmethod_t)nitc___nitc__MProperty___lookup_all_definitions_cache, /* pointer to model:MAttribute:model$MProperty$lookup_all_definitions_cache */
(nitmethod_t)core___core__Object___init, /* pointer to model:MAttribute:kernel$Object$init */
}
};
/* allocate MAttribute */
val* NEW_nitc__MAttribute(const struct type* type) {
val* self /* : MAttribute */;
val* var /* : Array[MAttributeDef] */;
val* var1 /* : HashMap2[MModule, MType, Array[MAttributeDef]] */;
val* var2 /* : HashMap2[MModule, MType, Array[MAttributeDef]] */;
self = nit_alloc(sizeof(struct instance) + 19*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MAttribute;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MAttribute exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MAttribute exact> */
self->attrs[COLOR_nitc__model__MProperty___is_autoinit].s = 0; /* _is_autoinit on <self:MAttribute exact> */
var = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__nitc__model__MProperty__MPROPDEF]);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[MAttributeDef]>*/
}
self->attrs[COLOR_nitc__model__MProperty___mpropdefs].val = var; /* _mpropdefs on <self:MAttribute exact> */
var1 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2__nitc__MModule__nitc__MType__core__Array__nitc__model__MProperty__MPROPDEF]);
{
{ /* Inline kernel$Object$init (var1) on <var1:HashMap2[MModule, MType, Array[MAttributeDef]]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nitc__model__MProperty___lookup_definitions_cache].val = var1; /* _lookup_definitions_cache on <self:MAttribute exact> */
var2 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2__nitc__MModule__nitc__MType__core__Array__nitc__model__MProperty__MPROPDEF]);
{
{ /* Inline kernel$Object$init (var2) on <var2:HashMap2[MModule, MType, Array[MAttributeDef]]> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_nitc__model__MProperty___lookup_all_definitions_cache].val = var2; /* _lookup_all_definitions_cache on <self:MAttribute exact> */
return self;
}
/* runtime class nitc__MVirtualTypeProp: nitc::MVirtualTypeProp (dead=false; need_corpse=false)*/
const struct class class_nitc__MVirtualTypeProp = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MProperty___core__kernel__Object__init, /* pointer to model:MVirtualTypeProp:model$MProperty$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MVirtualTypeProp:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MVirtualTypeProp:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MProperty___core__abstract_text__Object__to_s, /* pointer to model:MVirtualTypeProp:model$MProperty$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MVirtualTypeProp:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MVirtualTypeProp:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MVirtualTypeProp:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MVirtualTypeProp:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MVirtualTypeProp:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MVirtualTypeProp:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MVirtualTypeProp:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MVirtualTypeProp:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MProperty___nitc__model_base__MEntity__c_name, /* pointer to model:MVirtualTypeProp:model$MProperty$c_name */
(nitmethod_t)nitc___nitc__MProperty___nitc__model_base__MEntity__model, /* pointer to model:MVirtualTypeProp:model$MProperty$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to model:MVirtualTypeProp:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MProperty___nitc__model_base__MEntity__location, /* pointer to model:MVirtualTypeProp:model$MProperty$location */
(nitmethod_t)nitc___nitc__MProperty___nitc__model_base__MEntity__name, /* pointer to model:MVirtualTypeProp:model$MProperty$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to model:MVirtualTypeProp:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc___nitc__MProperty___MEntity__visibility, /* pointer to model:MVirtualTypeProp:model$MProperty$visibility */
(nitmethod_t)nitc___nitc__MProperty___nitc__model_base__MEntity__full_name, /* pointer to model:MVirtualTypeProp:model$MProperty$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to model:MVirtualTypeProp:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to model:MVirtualTypeProp:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to model:MVirtualTypeProp:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to model:MVirtualTypeProp:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to model:MVirtualTypeProp:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to model:MVirtualTypeProp:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to model:MVirtualTypeProp:mdoc$MEntity$deprecation */
(nitmethod_t)nitc___nitc__MProperty___intro, /* pointer to model:MVirtualTypeProp:model$MProperty$intro */
(nitmethod_t)nitc___nitc__MProperty___intro_mclassdef, /* pointer to model:MVirtualTypeProp:model$MProperty$intro_mclassdef */
(nitmethod_t)nitc___nitc__MProperty___mpropdefs, /* pointer to model:MVirtualTypeProp:model$MProperty$mpropdefs */
(nitmethod_t)nitc___nitc__MProperty___intro_61d, /* pointer to model:MVirtualTypeProp:model$MProperty$intro= */
(nitmethod_t)nitc___nitc__MProperty___lookup_definitions, /* pointer to model:MVirtualTypeProp:model$MProperty$lookup_definitions */
(nitmethod_t)nitc___nitc__MProperty___intro_mclassdef_61d, /* pointer to model:MVirtualTypeProp:model$MProperty$intro_mclassdef= */
(nitmethod_t)nitc___nitc__MProperty___name_61d, /* pointer to model:MVirtualTypeProp:model$MProperty$name= */
(nitmethod_t)nitc___nitc__MProperty___location_61d, /* pointer to model:MVirtualTypeProp:model$MProperty$location= */
(nitmethod_t)nitc___nitc__MProperty___visibility_61d, /* pointer to model:MVirtualTypeProp:model$MProperty$visibility= */
(nitmethod_t)nitc___nitc__MProperty___is_autoinit_61d, /* pointer to model:MVirtualTypeProp:model$MProperty$is_autoinit= */
(nitmethod_t)nitc___nitc__MProperty___lookup_super_definitions, /* pointer to model:MVirtualTypeProp:model$MProperty$lookup_super_definitions */
(nitmethod_t)nitc___nitc__MProperty___is_autoinit, /* pointer to model:MVirtualTypeProp:model$MProperty$is_autoinit */
(nitmethod_t)nitc___nitc__MProperty___lookup_first_definition, /* pointer to model:MVirtualTypeProp:model$MProperty$lookup_first_definition */
(nitmethod_t)nitc___nitc__MProperty___lookup_definitions_cache, /* pointer to model:MVirtualTypeProp:model$MProperty$lookup_definitions_cache */
(nitmethod_t)nitc___nitc__MProperty___select_most_specific, /* pointer to model:MVirtualTypeProp:model$MProperty$select_most_specific */
(nitmethod_t)nitc___nitc__MProperty___lookup_all_definitions, /* pointer to model:MVirtualTypeProp:model$MProperty$lookup_all_definitions */
(nitmethod_t)nitc___nitc__MProperty___lookup_all_definitions_cache, /* pointer to model:MVirtualTypeProp:model$MProperty$lookup_all_definitions_cache */
(nitmethod_t)core___core__Object___init, /* pointer to model:MVirtualTypeProp:kernel$Object$init */
(nitmethod_t)nitc___nitc__MVirtualTypeProp___mvirtualtype, /* pointer to model:MVirtualTypeProp:model$MVirtualTypeProp$mvirtualtype */
(nitmethod_t)nitc___nitc__MVirtualTypeProp___is_selftype, /* pointer to model:MVirtualTypeProp:model$MVirtualTypeProp$is_selftype */
}
};
/* allocate MVirtualTypeProp */
val* NEW_nitc__MVirtualTypeProp(const struct type* type) {
val* self /* : MVirtualTypeProp */;
val* var /* : Array[MVirtualTypeDef] */;
val* var1 /* : HashMap2[MModule, MType, Array[MVirtualTypeDef]] */;
val* var2 /* : HashMap2[MModule, MType, Array[MVirtualTypeDef]] */;
val* var4 /* : MVirtualType */;
self = nit_alloc(sizeof(struct instance) + 22*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MVirtualTypeProp;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MVirtualTypeProp exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MVirtualTypeProp exact> */
self->attrs[COLOR_nitc__model__MProperty___is_autoinit].s = 0; /* _is_autoinit on <self:MVirtualTypeProp exact> */
var = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__nitc__model__MProperty__MPROPDEF]);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[MVirtualTypeDef]>*/
}
self->attrs[COLOR_nitc__model__MProperty___mpropdefs].val = var; /* _mpropdefs on <self:MVirtualTypeProp exact> */
var1 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2__nitc__MModule__nitc__MType__core__Array__nitc__model__MProperty__MPROPDEF]);
{
{ /* Inline kernel$Object$init (var1) on <var1:HashMap2[MModule, MType, Array[MVirtualTypeDef]]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nitc__model__MProperty___lookup_definitions_cache].val = var1; /* _lookup_definitions_cache on <self:MVirtualTypeProp exact> */
var2 = NEW_more_collections__HashMap2(self->type->resolution_table->types[COLOR_more_collections__HashMap2__nitc__MModule__nitc__MType__core__Array__nitc__model__MProperty__MPROPDEF]);
{
{ /* Inline kernel$Object$init (var2) on <var2:HashMap2[MModule, MType, Array[MVirtualTypeDef]]> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_nitc__model__MProperty___lookup_all_definitions_cache].val = var2; /* _lookup_all_definitions_cache on <self:MVirtualTypeProp exact> */
var4 = NEW_nitc__MVirtualType(&type_nitc__MVirtualType);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nitc__model__MVirtualType__mproperty_61d]))(var4, self); /* mproperty= on <var4:MVirtualType>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:MVirtualType>*/
}
self->attrs[COLOR_nitc__model__MVirtualTypeProp___mvirtualtype].val = var4; /* _mvirtualtype on <self:MVirtualTypeProp exact> */
return self;
}
/* runtime class nitc__MPropDef: nitc::MPropDef (dead=true; need_corpse=false)*/
/* allocate MPropDef */
val* NEW_nitc__MPropDef(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "MPropDef is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__MMethodDef: nitc::MMethodDef (dead=false; need_corpse=false)*/
const struct class class_nitc__MMethodDef = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MPropDef___core__kernel__Object__init, /* pointer to model:MMethodDef:model$MPropDef$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MMethodDef:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MMethodDef:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MPropDef___core__abstract_text__Object__to_s, /* pointer to model:MMethodDef:model$MPropDef$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MMethodDef:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MMethodDef:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MMethodDef:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MMethodDef:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MMethodDef:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MMethodDef:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MMethodDef:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MMethodDef:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name, /* pointer to model:MMethodDef:model$MPropDef$c_name */
(nitmethod_t)nitc___nitc__MPropDef___nitc__model_base__MEntity__model, /* pointer to model:MMethodDef:model$MPropDef$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to model:MMethodDef:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MPropDef___nitc__model_base__MEntity__location, /* pointer to model:MMethodDef:model$MPropDef$location */
(nitmethod_t)nitc___nitc__MPropDef___nitc__model_base__MEntity__name, /* pointer to model:MMethodDef:model$MPropDef$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to model:MMethodDef:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc___nitc__MPropDef___MEntity__visibility, /* pointer to model:MMethodDef:model$MPropDef$visibility */
(nitmethod_t)nitc___nitc__MPropDef___nitc__model_base__MEntity__full_name, /* pointer to model:MMethodDef:model$MPropDef$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to model:MMethodDef:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to model:MMethodDef:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to model:MMethodDef:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to model:MMethodDef:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to model:MMethodDef:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to model:MMethodDef:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to model:MMethodDef:mdoc$MEntity$deprecation */
(nitmethod_t)nitc___nitc__MPropDef___mclassdef, /* pointer to model:MMethodDef:model$MPropDef$mclassdef */
(nitmethod_t)nitc___nitc__MPropDef___mproperty, /* pointer to model:MMethodDef:model$MPropDef$mproperty */
(nitmethod_t)nitc___nitc__MPropDef___mclassdef_61d, /* pointer to model:MMethodDef:model$MPropDef$mclassdef= */
(nitmethod_t)nitc___nitc__MPropDef___mproperty_61d, /* pointer to model:MMethodDef:model$MPropDef$mproperty= */
(nitmethod_t)nitc___nitc__MPropDef___location_61d, /* pointer to model:MMethodDef:model$MPropDef$location= */
(nitmethod_t)nitc___nitc__MPropDef___to_s_61d, /* pointer to model:MMethodDef:model$MPropDef$to_s= */
(nitmethod_t)nitc___nitc__MPropDef___is_intro, /* pointer to model:MMethodDef:model$MPropDef$is_intro */
(nitmethod_t)nitc__modelize_property___MPropDef___has_supercall_61d, /* pointer to model:MMethodDef:modelize_property$MPropDef$has_supercall= */
(nitmethod_t)nitc__modelize_property___MPropDef___has_supercall, /* pointer to model:MMethodDef:modelize_property$MPropDef$has_supercall */
(nitmethod_t)nitc___nitc__MPropDef___lookup_next_definition, /* pointer to model:MMethodDef:model$MPropDef$lookup_next_definition */
(nitmethod_t)core___core__Object___init, /* pointer to model:MMethodDef:kernel$Object$init */
(nitmethod_t)nitc___nitc__MMethodDef___msignature, /* pointer to model:MMethodDef:model$MMethodDef$msignature */
(nitmethod_t)nitc___nitc__MMethodDef___msignature_61d, /* pointer to model:MMethodDef:model$MMethodDef$msignature= */
(nitmethod_t)nitc___nitc__MMethodDef___constant_value_61d, /* pointer to model:MMethodDef:model$MMethodDef$constant_value= */
(nitmethod_t)nitc___nitc__MMethodDef___is_abstract, /* pointer to model:MMethodDef:model$MMethodDef$is_abstract */
(nitmethod_t)nitc___nitc__MMethodDef___constant_value, /* pointer to model:MMethodDef:model$MMethodDef$constant_value */
(nitmethod_t)nitc___nitc__MMethodDef___is_intern, /* pointer to model:MMethodDef:model$MMethodDef$is_intern */
(nitmethod_t)nitc___nitc__MMethodDef___is_extern, /* pointer to model:MMethodDef:model$MMethodDef$is_extern */
(nitmethod_t)nitc___nitc__MMethodDef___new_msignature_61d, /* pointer to model:MMethodDef:model$MMethodDef$new_msignature= */
(nitmethod_t)nitc___nitc__MMethodDef___initializers, /* pointer to model:MMethodDef:model$MMethodDef$initializers */
(nitmethod_t)nitc___nitc__MMethodDef___new_msignature, /* pointer to model:MMethodDef:model$MMethodDef$new_msignature */
(nitmethod_t)nitc__separate_compiler___MMethodDef___virtual_runtime_function, /* pointer to model:MMethodDef:separate_compiler$MMethodDef$virtual_runtime_function */
(nitmethod_t)nitc__separate_compiler___MMethodDef___separate_runtime_function, /* pointer to model:MMethodDef:separate_compiler$MMethodDef$separate_runtime_function */
(nitmethod_t)nitc__separate_compiler___MMethodDef___virtual_runtime_function_cache, /* pointer to model:MMethodDef:separate_compiler$MMethodDef$virtual_runtime_function_cache */
(nitmethod_t)nitc__separate_compiler___MMethodDef___virtual_runtime_function_cache_61d, /* pointer to model:MMethodDef:separate_compiler$MMethodDef$virtual_runtime_function_cache= */
(nitmethod_t)nitc__separate_compiler___MMethodDef___separate_runtime_function_cache, /* pointer to model:MMethodDef:separate_compiler$MMethodDef$separate_runtime_function_cache */
(nitmethod_t)nitc__separate_compiler___MMethodDef___separate_runtime_function_cache_61d, /* pointer to model:MMethodDef:separate_compiler$MMethodDef$separate_runtime_function_cache= */
(nitmethod_t)nitc__abstract_compiler___MMethodDef___compile_inside_to_c, /* pointer to model:MMethodDef:abstract_compiler$MMethodDef$compile_inside_to_c */
(nitmethod_t)nitc__abstract_compiler___MMethodDef___can_inline, /* pointer to model:MMethodDef:abstract_compiler$MMethodDef$can_inline */
(nitmethod_t)nitc__abstract_compiler___MMethodDef___compile_parameter_check, /* pointer to model:MMethodDef:abstract_compiler$MMethodDef$compile_parameter_check */
(nitmethod_t)nitc___nitc__MMethodDef___is_abstract_61d, /* pointer to model:MMethodDef:model$MMethodDef$is_abstract= */
(nitmethod_t)nitc___nitc__MMethodDef___is_intern_61d, /* pointer to model:MMethodDef:model$MMethodDef$is_intern= */
(nitmethod_t)nitc___nitc__MMethodDef___is_extern_61d, /* pointer to model:MMethodDef:model$MMethodDef$is_extern= */
}
};
/* allocate MMethodDef */
val* NEW_nitc__MMethodDef(const struct type* type) {
val* self /* : MMethodDef */;
val* var /* : Array[MProperty] */;
self = nit_alloc(sizeof(struct instance) + 24*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MMethodDef;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MMethodDef exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MMethodDef exact> */
self->attrs[COLOR_nitc__modelize_property__MPropDef___has_supercall].s = 0; /* _has_supercall on <self:MMethodDef exact> */
var = NEW_core__Array(&type_core__Array__nitc__MProperty);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[MProperty]>*/
}
self->attrs[COLOR_nitc__model__MMethodDef___initializers].val = var; /* _initializers on <self:MMethodDef exact> */
self->attrs[COLOR_nitc__model__MMethodDef___is_abstract].s = 0; /* _is_abstract on <self:MMethodDef exact> */
self->attrs[COLOR_nitc__model__MMethodDef___is_intern].s = 0; /* _is_intern on <self:MMethodDef exact> */
self->attrs[COLOR_nitc__model__MMethodDef___is_extern].s = 0; /* _is_extern on <self:MMethodDef exact> */
return self;
}
/* runtime class nitc__MAttributeDef: nitc::MAttributeDef (dead=false; need_corpse=false)*/
const struct class class_nitc__MAttributeDef = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MPropDef___core__kernel__Object__init, /* pointer to model:MAttributeDef:model$MPropDef$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MAttributeDef:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MAttributeDef:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MPropDef___core__abstract_text__Object__to_s, /* pointer to model:MAttributeDef:model$MPropDef$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MAttributeDef:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MAttributeDef:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MAttributeDef:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MAttributeDef:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MAttributeDef:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MAttributeDef:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MAttributeDef:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MAttributeDef:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name, /* pointer to model:MAttributeDef:model$MPropDef$c_name */
(nitmethod_t)nitc___nitc__MPropDef___nitc__model_base__MEntity__model, /* pointer to model:MAttributeDef:model$MPropDef$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to model:MAttributeDef:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MPropDef___nitc__model_base__MEntity__location, /* pointer to model:MAttributeDef:model$MPropDef$location */
(nitmethod_t)nitc___nitc__MPropDef___nitc__model_base__MEntity__name, /* pointer to model:MAttributeDef:model$MPropDef$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to model:MAttributeDef:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc___nitc__MPropDef___MEntity__visibility, /* pointer to model:MAttributeDef:model$MPropDef$visibility */
(nitmethod_t)nitc___nitc__MPropDef___nitc__model_base__MEntity__full_name, /* pointer to model:MAttributeDef:model$MPropDef$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to model:MAttributeDef:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to model:MAttributeDef:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to model:MAttributeDef:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to model:MAttributeDef:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to model:MAttributeDef:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to model:MAttributeDef:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to model:MAttributeDef:mdoc$MEntity$deprecation */
(nitmethod_t)nitc___nitc__MPropDef___mclassdef, /* pointer to model:MAttributeDef:model$MPropDef$mclassdef */
(nitmethod_t)nitc___nitc__MPropDef___mproperty, /* pointer to model:MAttributeDef:model$MPropDef$mproperty */
(nitmethod_t)nitc___nitc__MPropDef___mclassdef_61d, /* pointer to model:MAttributeDef:model$MPropDef$mclassdef= */
(nitmethod_t)nitc___nitc__MPropDef___mproperty_61d, /* pointer to model:MAttributeDef:model$MPropDef$mproperty= */
(nitmethod_t)nitc___nitc__MPropDef___location_61d, /* pointer to model:MAttributeDef:model$MPropDef$location= */
(nitmethod_t)nitc___nitc__MPropDef___to_s_61d, /* pointer to model:MAttributeDef:model$MPropDef$to_s= */
(nitmethod_t)nitc___nitc__MPropDef___is_intro, /* pointer to model:MAttributeDef:model$MPropDef$is_intro */
(nitmethod_t)nitc__modelize_property___MPropDef___has_supercall_61d, /* pointer to model:MAttributeDef:modelize_property$MPropDef$has_supercall= */
(nitmethod_t)nitc__modelize_property___MPropDef___has_supercall, /* pointer to model:MAttributeDef:modelize_property$MPropDef$has_supercall */
(nitmethod_t)nitc___nitc__MPropDef___lookup_next_definition, /* pointer to model:MAttributeDef:model$MPropDef$lookup_next_definition */
(nitmethod_t)core___core__Object___init, /* pointer to model:MAttributeDef:kernel$Object$init */
(nitmethod_t)nitc___nitc__MAttributeDef___static_mtype_61d, /* pointer to model:MAttributeDef:model$MAttributeDef$static_mtype= */
(nitmethod_t)nitc___nitc__MAttributeDef___static_mtype, /* pointer to model:MAttributeDef:model$MAttributeDef$static_mtype */
}
};
/* allocate MAttributeDef */
val* NEW_nitc__MAttributeDef(const struct type* type) {
val* self /* : MAttributeDef */;
self = nit_alloc(sizeof(struct instance) + 16*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MAttributeDef;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MAttributeDef exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MAttributeDef exact> */
self->attrs[COLOR_nitc__modelize_property__MPropDef___has_supercall].s = 0; /* _has_supercall on <self:MAttributeDef exact> */
return self;
}
/* runtime class nitc__MVirtualTypeDef: nitc::MVirtualTypeDef (dead=false; need_corpse=false)*/
const struct class class_nitc__MVirtualTypeDef = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MPropDef___core__kernel__Object__init, /* pointer to model:MVirtualTypeDef:model$MPropDef$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MVirtualTypeDef:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MVirtualTypeDef:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MPropDef___core__abstract_text__Object__to_s, /* pointer to model:MVirtualTypeDef:model$MPropDef$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MVirtualTypeDef:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MVirtualTypeDef:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MVirtualTypeDef:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MVirtualTypeDef:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MVirtualTypeDef:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MVirtualTypeDef:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MVirtualTypeDef:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MVirtualTypeDef:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MPropDef___nitc__model_base__MEntity__c_name, /* pointer to model:MVirtualTypeDef:model$MPropDef$c_name */
(nitmethod_t)nitc___nitc__MPropDef___nitc__model_base__MEntity__model, /* pointer to model:MVirtualTypeDef:model$MPropDef$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to model:MVirtualTypeDef:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MPropDef___nitc__model_base__MEntity__location, /* pointer to model:MVirtualTypeDef:model$MPropDef$location */
(nitmethod_t)nitc___nitc__MPropDef___nitc__model_base__MEntity__name, /* pointer to model:MVirtualTypeDef:model$MPropDef$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to model:MVirtualTypeDef:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc___nitc__MPropDef___MEntity__visibility, /* pointer to model:MVirtualTypeDef:model$MPropDef$visibility */
(nitmethod_t)nitc___nitc__MPropDef___nitc__model_base__MEntity__full_name, /* pointer to model:MVirtualTypeDef:model$MPropDef$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to model:MVirtualTypeDef:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to model:MVirtualTypeDef:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to model:MVirtualTypeDef:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to model:MVirtualTypeDef:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to model:MVirtualTypeDef:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to model:MVirtualTypeDef:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to model:MVirtualTypeDef:mdoc$MEntity$deprecation */
(nitmethod_t)nitc___nitc__MPropDef___mclassdef, /* pointer to model:MVirtualTypeDef:model$MPropDef$mclassdef */
(nitmethod_t)nitc___nitc__MPropDef___mproperty, /* pointer to model:MVirtualTypeDef:model$MPropDef$mproperty */
(nitmethod_t)nitc___nitc__MPropDef___mclassdef_61d, /* pointer to model:MVirtualTypeDef:model$MPropDef$mclassdef= */
(nitmethod_t)nitc___nitc__MPropDef___mproperty_61d, /* pointer to model:MVirtualTypeDef:model$MPropDef$mproperty= */
(nitmethod_t)nitc___nitc__MPropDef___location_61d, /* pointer to model:MVirtualTypeDef:model$MPropDef$location= */
(nitmethod_t)nitc___nitc__MPropDef___to_s_61d, /* pointer to model:MVirtualTypeDef:model$MPropDef$to_s= */
(nitmethod_t)nitc___nitc__MPropDef___is_intro, /* pointer to model:MVirtualTypeDef:model$MPropDef$is_intro */
(nitmethod_t)nitc__modelize_property___MPropDef___has_supercall_61d, /* pointer to model:MVirtualTypeDef:modelize_property$MPropDef$has_supercall= */
(nitmethod_t)nitc__modelize_property___MPropDef___has_supercall, /* pointer to model:MVirtualTypeDef:modelize_property$MPropDef$has_supercall */
(nitmethod_t)nitc___nitc__MPropDef___lookup_next_definition, /* pointer to model:MVirtualTypeDef:model$MPropDef$lookup_next_definition */
(nitmethod_t)core___core__Object___init, /* pointer to model:MVirtualTypeDef:kernel$Object$init */
(nitmethod_t)nitc___nitc__MVirtualTypeDef___bound, /* pointer to model:MVirtualTypeDef:model$MVirtualTypeDef$bound */
(nitmethod_t)nitc___nitc__MVirtualTypeDef___bound_61d, /* pointer to model:MVirtualTypeDef:model$MVirtualTypeDef$bound= */
(nitmethod_t)nitc___nitc__MVirtualTypeDef___is_fixed, /* pointer to model:MVirtualTypeDef:model$MVirtualTypeDef$is_fixed */
(nitmethod_t)nitc___nitc__MVirtualTypeDef___is_fixed_61d, /* pointer to model:MVirtualTypeDef:model$MVirtualTypeDef$is_fixed= */
}
};
/* allocate MVirtualTypeDef */
val* NEW_nitc__MVirtualTypeDef(const struct type* type) {
val* self /* : MVirtualTypeDef */;
self = nit_alloc(sizeof(struct instance) + 17*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MVirtualTypeDef;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MVirtualTypeDef exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MVirtualTypeDef exact> */
self->attrs[COLOR_nitc__modelize_property__MPropDef___has_supercall].s = 0; /* _has_supercall on <self:MVirtualTypeDef exact> */
self->attrs[COLOR_nitc__model__MVirtualTypeDef___is_fixed].s = 0; /* _is_fixed on <self:MVirtualTypeDef exact> */
return self;
}
/* runtime class nitc__MClassKind: nitc::MClassKind (dead=false; need_corpse=false)*/
const struct class class_nitc__MClassKind = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MClassKind___core__kernel__Object__init, /* pointer to model:MClassKind:model$MClassKind$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model:MClassKind:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model:MClassKind:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MClassKind___core__abstract_text__Object__to_s, /* pointer to model:MClassKind:model$MClassKind$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model:MClassKind:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model:MClassKind:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model:MClassKind:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model:MClassKind:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model:MClassKind:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model:MClassKind:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model:MClassKind:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model:MClassKind:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MClassKind___to_s_61d, /* pointer to model:MClassKind:model$MClassKind$to_s= */
(nitmethod_t)nitc___nitc__MClassKind___need_init_61d, /* pointer to model:MClassKind:model$MClassKind$need_init= */
(nitmethod_t)nitc___nitc__MClassKind___can_specialize, /* pointer to model:MClassKind:model$MClassKind$can_specialize */
(nitmethod_t)nitc___nitc__MClassKind___need_init, /* pointer to model:MClassKind:model$MClassKind$need_init */
(nitmethod_t)core___core__Object___init, /* pointer to model:MClassKind:kernel$Object$init */
}
};
/* allocate MClassKind */
val* NEW_nitc__MClassKind(const struct type* type) {
val* self /* : MClassKind */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MClassKind;
return self;
}
/* runtime class nitc__MModule: nitc::MModule (dead=false; need_corpse=false)*/
const struct class class_nitc__MModule = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MModule___core__kernel__Object__init, /* pointer to mmodule:MModule:mmodule$MModule$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to mmodule:MModule:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to mmodule:MModule:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MModule___core__abstract_text__Object__to_s, /* pointer to mmodule:MModule:mmodule$MModule$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to mmodule:MModule:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to mmodule:MModule:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to mmodule:MModule:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to mmodule:MModule:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to mmodule:MModule:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to mmodule:MModule:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to mmodule:MModule:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to mmodule:MModule:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MModule___nitc__model_base__MEntity__c_name, /* pointer to mmodule:MModule:mmodule$MModule$c_name */
(nitmethod_t)nitc___nitc__MModule___nitc__model_base__MEntity__model, /* pointer to mmodule:MModule:mmodule$MModule$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to mmodule:MModule:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MModule___nitc__model_base__MEntity__location, /* pointer to mmodule:MModule:mmodule$MModule$location */
(nitmethod_t)nitc___nitc__MModule___nitc__model_base__MEntity__name, /* pointer to mmodule:MModule:mmodule$MModule$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to mmodule:MModule:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc__model___MEntity___visibility, /* pointer to mmodule:MModule:model$MEntity$visibility */
(nitmethod_t)nitc___nitc__MModule___nitc__model_base__MEntity__full_name, /* pointer to mmodule:MModule:mmodule$MModule$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to mmodule:MModule:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to mmodule:MModule:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to mmodule:MModule:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to mmodule:MModule:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to mmodule:MModule:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to mmodule:MModule:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to mmodule:MModule:mdoc$MEntity$deprecation */
(nitmethod_t)nitc__loader___MModule___load, /* pointer to mmodule:MModule:loader$MModule$load */
(nitmethod_t)nitc___nitc__MModule___mgroup, /* pointer to mmodule:MModule:mmodule$MModule$mgroup */
(nitmethod_t)nitc__model___MModule___get_primitive_class, /* pointer to mmodule:MModule:model$MModule$get_primitive_class */
(nitmethod_t)nitc___nitc__MModule___model_61d, /* pointer to mmodule:MModule:mmodule$MModule$model= */
(nitmethod_t)nitc___nitc__MModule___mgroup_61d, /* pointer to mmodule:MModule:mmodule$MModule$mgroup= */
(nitmethod_t)nitc___nitc__MModule___name_61d, /* pointer to mmodule:MModule:mmodule$MModule$name= */
(nitmethod_t)nitc___nitc__MModule___location_61d, /* pointer to mmodule:MModule:mmodule$MModule$location= */
(nitmethod_t)nitc___nitc__MModule___set_imported_mmodules, /* pointer to mmodule:MModule:mmodule$MModule$set_imported_mmodules */
(nitmethod_t)nitc___nitc__MModule___first_real_mmodule_61d, /* pointer to mmodule:MModule:mmodule$MModule$first_real_mmodule= */
(nitmethod_t)nitc__model___MModule___sys_type, /* pointer to mmodule:MModule:model$MModule$sys_type */
(nitmethod_t)nitc___nitc__MModule___namespace_for, /* pointer to mmodule:MModule:mmodule$MModule$namespace_for */
(nitmethod_t)nitc___nitc__MModule___mpackage, /* pointer to mmodule:MModule:mmodule$MModule$mpackage */
(nitmethod_t)nitc___nitc__MModule___c_namespace_for, /* pointer to mmodule:MModule:mmodule$MModule$c_namespace_for */
(nitmethod_t)nitc__model___MModule___try_get_primitive_method, /* pointer to mmodule:MModule:model$MModule$try_get_primitive_method */
(nitmethod_t)nitc___nitc__MModule___filepath, /* pointer to mmodule:MModule:mmodule$MModule$filepath */
(nitmethod_t)nitc__loader___MModule___parse, /* pointer to mmodule:MModule:loader$MModule$parse */
(nitmethod_t)nitc__platform___MModule___target_platform, /* pointer to mmodule:MModule:platform$MModule$target_platform */
(nitmethod_t)nitc__platform___MModule___local_target_platform_61d, /* pointer to mmodule:MModule:platform$MModule$local_target_platform= */
(nitmethod_t)nitc___nitc__MModule___first_real_mmodule, /* pointer to mmodule:MModule:mmodule$MModule$first_real_mmodule */
(nitmethod_t)nitc___nitc__MModule___in_importation, /* pointer to mmodule:MModule:mmodule$MModule$in_importation */
(nitmethod_t)nitc___nitc__MModule___in_importation_61d, /* pointer to mmodule:MModule:mmodule$MModule$in_importation= */
(nitmethod_t)nitc__model___MModule___object_type, /* pointer to mmodule:MModule:model$MModule$object_type */
(nitmethod_t)nitc__model___MModule___mclassdefs, /* pointer to mmodule:MModule:model$MModule$mclassdefs */
(nitmethod_t)nitc___nitc__MModule___set_visibility_for, /* pointer to mmodule:MModule:mmodule$MModule$set_visibility_for */
(nitmethod_t)nitc__platform___MModule___local_target_platform, /* pointer to mmodule:MModule:platform$MModule$local_target_platform */
(nitmethod_t)nitc__model___MModule___intro_mclasses, /* pointer to mmodule:MModule:model$MModule$intro_mclasses */
(nitmethod_t)nitc__model___MModule___finalizable_type, /* pointer to mmodule:MModule:model$MModule$finalizable_type */
(nitmethod_t)nitc__model___MModule___array_type, /* pointer to mmodule:MModule:model$MModule$array_type */
(nitmethod_t)nitc__model___MModule___native_array_type, /* pointer to mmodule:MModule:model$MModule$native_array_type */
(nitmethod_t)nitc__model___MModule___flatten_mclass_hierarchy, /* pointer to mmodule:MModule:model$MModule$flatten_mclass_hierarchy */
(nitmethod_t)nitc__abstract_compiler___MModule___properties, /* pointer to mmodule:MModule:abstract_compiler$MModule$properties */
(nitmethod_t)nitc___nitc__MModule___is_test_suite_61d, /* pointer to mmodule:MModule:mmodule$MModule$is_test_suite= */
(nitmethod_t)nitc___nitc__MModule___is_generated_61d, /* pointer to mmodule:MModule:mmodule$MModule$is_generated= */
(nitmethod_t)nitc___nitc__MModule___intrude_mmodules, /* pointer to mmodule:MModule:mmodule$MModule$intrude_mmodules */
(nitmethod_t)nitc___nitc__MModule___public_mmodules, /* pointer to mmodule:MModule:mmodule$MModule$public_mmodules */
(nitmethod_t)nitc___nitc__MModule___private_mmodules, /* pointer to mmodule:MModule:mmodule$MModule$private_mmodules */
(nitmethod_t)nitc___nitc__MModule___is_visible, /* pointer to mmodule:MModule:mmodule$MModule$is_visible */
(nitmethod_t)nitc__model___MModule___array_class, /* pointer to mmodule:MModule:model$MModule$array_class */
(nitmethod_t)nitc__model___MModule___native_array_class, /* pointer to mmodule:MModule:model$MModule$native_array_class */
(nitmethod_t)nitc__model___MModule___pointer_type, /* pointer to mmodule:MModule:model$MModule$pointer_type */
(nitmethod_t)nitc__model___MModule___flatten_mclass_hierarchy_cache, /* pointer to mmodule:MModule:model$MModule$flatten_mclass_hierarchy_cache */
(nitmethod_t)nitc__model___MModule___flatten_mclass_hierarchy_cache_61d, /* pointer to mmodule:MModule:model$MModule$flatten_mclass_hierarchy_cache= */
(nitmethod_t)nitc__abstract_compiler___MModule___properties_cache, /* pointer to mmodule:MModule:abstract_compiler$MModule$properties_cache */
(nitmethod_t)nitc__model___MModule___linearize_mclasses, /* pointer to mmodule:MModule:model$MModule$linearize_mclasses */
(nitmethod_t)nitc___nitc__MModule___visibility_for, /* pointer to mmodule:MModule:mmodule$MModule$visibility_for */
(nitmethod_t)nitc__model___MModule___linearize_mclassdefs, /* pointer to mmodule:MModule:model$MModule$linearize_mclassdefs */
(nitmethod_t)nitc__model___MModule___linearize_mpropdefs, /* pointer to mmodule:MModule:model$MModule$linearize_mpropdefs */
(nitmethod_t)nitc__light___MModule___collect_linker_libs, /* pointer to mmodule:MModule:light$MModule$collect_linker_libs */
(nitmethod_t)nitc__light_c___MModule___ldflags, /* pointer to mmodule:MModule:light_c$MModule$ldflags */
(nitmethod_t)nitc__model___MModule___bool_type, /* pointer to mmodule:MModule:model$MModule$bool_type */
(nitmethod_t)nitc__model___MModule___c_string_type, /* pointer to mmodule:MModule:model$MModule$c_string_type */
(nitmethod_t)nitc__model___MModule___string_type, /* pointer to mmodule:MModule:model$MModule$string_type */
(nitmethod_t)nitc__light___MModule___finalize_ffi, /* pointer to mmodule:MModule:light$MModule$finalize_ffi */
(nitmethod_t)nitc__model___MModule___int_type, /* pointer to mmodule:MModule:model$MModule$int_type */
(nitmethod_t)nitc__light_ffi___MModule___uses_ffi_61d, /* pointer to mmodule:MModule:light_ffi$MModule$uses_ffi= */
(nitmethod_t)nitc__light_ffi___MModule___uses_ffi, /* pointer to mmodule:MModule:light_ffi$MModule$uses_ffi */
(nitmethod_t)nitc__light___MModule___nmodule, /* pointer to mmodule:MModule:light$MModule$nmodule */
(nitmethod_t)nitc__light_ffi___MModule___finalize_ffi_wrapper, /* pointer to mmodule:MModule:light_ffi$MModule$finalize_ffi_wrapper */
(nitmethod_t)nitc__light_ffi_base___MModule___ffi_files, /* pointer to mmodule:MModule:light_ffi_base$MModule$ffi_files */
(nitmethod_t)nitc__light___MModule___ensure_compile_nitni_base, /* pointer to mmodule:MModule:light$MModule$ensure_compile_nitni_base */
(nitmethod_t)nitc__light___MModule___nitni_ccu, /* pointer to mmodule:MModule:light$MModule$nitni_ccu */
(nitmethod_t)nitc__light_c___MModule___cflags, /* pointer to mmodule:MModule:light_c$MModule$cflags */
(nitmethod_t)nitc__light_c___MModule___pkgconfigs, /* pointer to mmodule:MModule:light_c$MModule$pkgconfigs */
(nitmethod_t)nitc__light___MModule___nitni_ccu_61d, /* pointer to mmodule:MModule:light$MModule$nitni_ccu= */
(nitmethod_t)nitc__light_ffi___MModule___compiled_ffi_methods, /* pointer to mmodule:MModule:light_ffi$MModule$compiled_ffi_methods */
(nitmethod_t)nitc__light_ffi___MModule___ffi_ccu_61d, /* pointer to mmodule:MModule:light_ffi$MModule$ffi_ccu= */
(nitmethod_t)nitc__light_ffi___MModule___ffi_ccu, /* pointer to mmodule:MModule:light_ffi$MModule$ffi_ccu */
(nitmethod_t)nitc__light_ffi___MModule___present_languages, /* pointer to mmodule:MModule:light_ffi$MModule$present_languages */
(nitmethod_t)nitc__model___MModule___byte_type, /* pointer to mmodule:MModule:model$MModule$byte_type */
(nitmethod_t)nitc__model___MModule___int8_type, /* pointer to mmodule:MModule:model$MModule$int8_type */
(nitmethod_t)nitc__model___MModule___int16_type, /* pointer to mmodule:MModule:model$MModule$int16_type */
(nitmethod_t)nitc__model___MModule___uint16_type, /* pointer to mmodule:MModule:model$MModule$uint16_type */
(nitmethod_t)nitc__model___MModule___int32_type, /* pointer to mmodule:MModule:model$MModule$int32_type */
(nitmethod_t)nitc__model___MModule___uint32_type, /* pointer to mmodule:MModule:model$MModule$uint32_type */
(nitmethod_t)nitc__model___MModule___float_type, /* pointer to mmodule:MModule:model$MModule$float_type */
(nitmethod_t)nitc__model___MModule___char_type, /* pointer to mmodule:MModule:model$MModule$char_type */
(nitmethod_t)core___core__Object___init, /* pointer to mmodule:MModule:kernel$Object$init */
}
};
/* allocate MModule */
val* NEW_nitc__MModule(const struct type* type) {
val* self /* : MModule */;
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
val* var2 /* : HashSet[MModule] */;
val* var3 /* : Array[MClass] */;
val* var4 /* : Array[MClassDef] */;
val* var5 /* : Array[ExternFile] */;
val* var6 /* : MultiHashMap[String, String] */;
val* var7 /* : MultiHashMap[String, String] */;
val* var8 /* : Array[String] */;
val* var9 /* : HashMap[MClass, Set[MProperty]] */;
val* var10 /* : HashSet[FFILanguage] */;
val* var11 /* : HashSet[AMethPropdef] */;
self = nit_alloc(sizeof(struct instance) + 67*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MModule;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MModule exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MModule exact> */
var = NEW_core__HashSet(&type_core__HashSet__nitc__MModule);
{
core___core__HashSet___core__kernel__Object__init(var); /* Direct call hash_collection$HashSet$init on <var:HashSet[MModule]>*/
}
self->attrs[COLOR_nitc__mmodule__MModule___intrude_mmodules].val = var; /* _intrude_mmodules on <self:MModule exact> */
var1 = NEW_core__HashSet(&type_core__HashSet__nitc__MModule);
{
core___core__HashSet___core__kernel__Object__init(var1); /* Direct call hash_collection$HashSet$init on <var1:HashSet[MModule]>*/
}
self->attrs[COLOR_nitc__mmodule__MModule___public_mmodules].val = var1; /* _public_mmodules on <self:MModule exact> */
var2 = NEW_core__HashSet(&type_core__HashSet__nitc__MModule);
{
core___core__HashSet___core__kernel__Object__init(var2); /* Direct call hash_collection$HashSet$init on <var2:HashSet[MModule]>*/
}
self->attrs[COLOR_nitc__mmodule__MModule___private_mmodules].val = var2; /* _private_mmodules on <self:MModule exact> */
self->attrs[COLOR_nitc__mmodule__MModule___is_test_suite].s = 0; /* _is_test_suite on <self:MModule exact> */
self->attrs[COLOR_nitc__mmodule__MModule___is_generated].s = 0; /* _is_generated on <self:MModule exact> */
self->attrs[COLOR_nitc__mmodule__MModule___first_real_mmodule].val = self; /* _first_real_mmodule on <self:MModule exact> */
var3 = NEW_core__Array(&type_core__Array__nitc__MClass);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array$Array$init on <var3:Array[MClass]>*/
}
self->attrs[COLOR_nitc__model__MModule___intro_mclasses].val = var3; /* _intro_mclasses on <self:MModule exact> */
var4 = NEW_core__Array(&type_core__Array__nitc__MClassDef);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array$Array$init on <var4:Array[MClassDef]>*/
}
self->attrs[COLOR_nitc__model__MModule___mclassdefs].val = var4; /* _mclassdefs on <self:MModule exact> */
var5 = NEW_core__Array(&type_core__Array__nitc__ExternFile);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array$Array$init on <var5:Array[ExternFile]>*/
}
self->attrs[COLOR_nitc__light_ffi_base__MModule___ffi_files].val = var5; /* _ffi_files on <self:MModule exact> */
var6 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMap__core__String__core__String);
{
core___core__HashMap___core__kernel__Object__init(var6); /* Direct call hash_collection$HashMap$init on <var6:MultiHashMap[String, String]>*/
}
self->attrs[COLOR_nitc__light_c__MModule___cflags].val = var6; /* _cflags on <self:MModule exact> */
var7 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMap__core__String__core__String);
{
core___core__HashMap___core__kernel__Object__init(var7); /* Direct call hash_collection$HashMap$init on <var7:MultiHashMap[String, String]>*/
}
self->attrs[COLOR_nitc__light_c__MModule___ldflags].val = var7; /* _ldflags on <self:MModule exact> */
var8 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var8); /* Direct call array$Array$init on <var8:Array[String]>*/
}
self->attrs[COLOR_nitc__light_c__MModule___pkgconfigs].val = var8; /* _pkgconfigs on <self:MModule exact> */
var9 = NEW_core__HashMap(&type_core__HashMap__nitc__MClass__core__Set__nitc__MProperty);
{
core___core__HashMap___core__kernel__Object__init(var9); /* Direct call hash_collection$HashMap$init on <var9:HashMap[MClass, Set[MProperty]]>*/
}
self->attrs[COLOR_nitc__abstract_compiler__MModule___properties_cache].val = var9; /* _properties_cache on <self:MModule exact> */
self->attrs[COLOR_nitc__light_ffi__MModule___uses_ffi].s = 0; /* _uses_ffi on <self:MModule exact> */
var10 = NEW_core__HashSet(&type_core__HashSet__nitc__FFILanguage);
{
core___core__HashSet___core__kernel__Object__init(var10); /* Direct call hash_collection$HashSet$init on <var10:HashSet[FFILanguage]>*/
}
self->attrs[COLOR_nitc__light_ffi__MModule___present_languages].val = var10; /* _present_languages on <self:MModule exact> */
var11 = NEW_core__HashSet(&type_core__HashSet__nitc__AMethPropdef);
{
core___core__HashSet___core__kernel__Object__init(var11); /* Direct call hash_collection$HashSet$init on <var11:HashSet[AMethPropdef]>*/
}
self->attrs[COLOR_nitc__light_ffi__MModule___compiled_ffi_methods].val = var11; /* _compiled_ffi_methods on <self:MModule exact> */
return self;
}
/* runtime class nitc__MPackage: nitc::MPackage (dead=false; need_corpse=false)*/
const struct class class_nitc__MPackage = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MPackage___core__kernel__Object__init, /* pointer to mpackage:MPackage:mpackage$MPackage$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to mpackage:MPackage:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to mpackage:MPackage:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MPackage___core__abstract_text__Object__to_s, /* pointer to mpackage:MPackage:mpackage$MPackage$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to mpackage:MPackage:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to mpackage:MPackage:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to mpackage:MPackage:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to mpackage:MPackage:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to mpackage:MPackage:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to mpackage:MPackage:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to mpackage:MPackage:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to mpackage:MPackage:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MPackage___nitc__model_base__MEntity__c_name, /* pointer to mpackage:MPackage:mpackage$MPackage$c_name */
(nitmethod_t)nitc___nitc__MPackage___nitc__model_base__MEntity__model, /* pointer to mpackage:MPackage:mpackage$MPackage$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to mpackage:MPackage:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MPackage___nitc__model_base__MEntity__location, /* pointer to mpackage:MPackage:mpackage$MPackage$location */
(nitmethod_t)nitc___nitc__MPackage___nitc__model_base__MEntity__name, /* pointer to mpackage:MPackage:mpackage$MPackage$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to mpackage:MPackage:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc__model___MEntity___visibility, /* pointer to mpackage:MPackage:model$MEntity$visibility */
(nitmethod_t)nitc___nitc__MPackage___nitc__model_base__MEntity__full_name, /* pointer to mpackage:MPackage:mpackage$MPackage$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to mpackage:MPackage:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to mpackage:MPackage:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to mpackage:MPackage:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to mpackage:MPackage:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to mpackage:MPackage:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to mpackage:MPackage:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to mpackage:MPackage:mdoc$MEntity$deprecation */
(nitmethod_t)nitc___nitc__MPackage___mgroups, /* pointer to mpackage:MPackage:mpackage$MPackage$mgroups */
(nitmethod_t)nitc__loader___MPackage___accept, /* pointer to mpackage:MPackage:loader$MPackage$accept */
(nitmethod_t)nitc__loader___MPackage___ini, /* pointer to mpackage:MPackage:loader$MPackage$ini */
(nitmethod_t)nitc___nitc__MPackage___name_61d, /* pointer to mpackage:MPackage:mpackage$MPackage$name= */
(nitmethod_t)nitc___nitc__MPackage___model_61d, /* pointer to mpackage:MPackage:mpackage$MPackage$model= */
(nitmethod_t)nitc___nitc__MPackage___location_61d, /* pointer to mpackage:MPackage:mpackage$MPackage$location= */
(nitmethod_t)nitc___nitc__MPackage___root_61d, /* pointer to mpackage:MPackage:mpackage$MPackage$root= */
(nitmethod_t)nitc__loader___MPackage___ini_61d, /* pointer to mpackage:MPackage:loader$MPackage$ini= */
(nitmethod_t)nitc__loader___MPackage___excludes, /* pointer to mpackage:MPackage:loader$MPackage$excludes */
(nitmethod_t)nitc___nitc__MPackage___root, /* pointer to mpackage:MPackage:mpackage$MPackage$root */
(nitmethod_t)core___core__Object___init, /* pointer to mpackage:MPackage:kernel$Object$init */
}
};
/* allocate MPackage */
val* NEW_nitc__MPackage(const struct type* type) {
val* self /* : MPackage */;
val* var /* : POSet[MGroup] */;
self = nit_alloc(sizeof(struct instance) + 16*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MPackage;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MPackage exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MPackage exact> */
var = NEW_poset__POSet(&type_poset__POSet__nitc__MGroup);
{
{ /* Inline kernel$Object$init (var) on <var:POSet[MGroup]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nitc__mpackage__MPackage___mgroups].val = var; /* _mgroups on <self:MPackage exact> */
return self;
}
/* runtime class nitc__MGroup: nitc::MGroup (dead=false; need_corpse=false)*/
const struct class class_nitc__MGroup = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MGroup___core__kernel__Object__init, /* pointer to mpackage:MGroup:mpackage$MGroup$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to mpackage:MGroup:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to mpackage:MGroup:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MGroup___core__abstract_text__Object__to_s, /* pointer to mpackage:MGroup:mpackage$MGroup$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to mpackage:MGroup:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to mpackage:MGroup:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to mpackage:MGroup:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to mpackage:MGroup:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to mpackage:MGroup:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to mpackage:MGroup:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to mpackage:MGroup:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to mpackage:MGroup:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MEntity___c_name, /* pointer to mpackage:MGroup:model_base$MEntity$c_name */
(nitmethod_t)nitc___nitc__MGroup___nitc__model_base__MEntity__model, /* pointer to mpackage:MGroup:mpackage$MGroup$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to mpackage:MGroup:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MGroup___nitc__model_base__MEntity__location, /* pointer to mpackage:MGroup:mpackage$MGroup$location */
(nitmethod_t)nitc___nitc__MGroup___nitc__model_base__MEntity__name, /* pointer to mpackage:MGroup:mpackage$MGroup$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to mpackage:MGroup:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc__model___MEntity___visibility, /* pointer to mpackage:MGroup:model$MEntity$visibility */
(nitmethod_t)nitc___nitc__MGroup___nitc__model_base__MEntity__full_name, /* pointer to mpackage:MGroup:mpackage$MGroup$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to mpackage:MGroup:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to mpackage:MGroup:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to mpackage:MGroup:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to mpackage:MGroup:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to mpackage:MGroup:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to mpackage:MGroup:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to mpackage:MGroup:mdoc$MEntity$deprecation */
(nitmethod_t)nitc___nitc__MGroup___mpackage, /* pointer to mpackage:MGroup:mpackage$MGroup$mpackage */
(nitmethod_t)nitc___nitc__MGroup___filepath, /* pointer to mpackage:MGroup:mpackage$MGroup$filepath */
(nitmethod_t)nitc__loader___MGroup___mmodules_by_name, /* pointer to mpackage:MGroup:loader$MGroup$mmodules_by_name */
(nitmethod_t)nitc__mmodule___MGroup___mmodules, /* pointer to mpackage:MGroup:mmodule$MGroup$mmodules */
(nitmethod_t)nitc___nitc__MGroup___name_61d, /* pointer to mpackage:MGroup:mpackage$MGroup$name= */
(nitmethod_t)nitc___nitc__MGroup___location_61d, /* pointer to mpackage:MGroup:mpackage$MGroup$location= */
(nitmethod_t)nitc___nitc__MGroup___mpackage_61d, /* pointer to mpackage:MGroup:mpackage$MGroup$mpackage= */
(nitmethod_t)nitc___nitc__MGroup___parent_61d, /* pointer to mpackage:MGroup:mpackage$MGroup$parent= */
(nitmethod_t)nitc__mmodule___MGroup___default_mmodule, /* pointer to mpackage:MGroup:mmodule$MGroup$default_mmodule */
(nitmethod_t)nitc__mmodule___MGroup___default_mmodule_61d, /* pointer to mpackage:MGroup:mmodule$MGroup$default_mmodule= */
(nitmethod_t)nitc__loader___MGroup___scanned, /* pointer to mpackage:MGroup:loader$MGroup$scanned */
(nitmethod_t)nitc__loader___MGroup___scanned_61d, /* pointer to mpackage:MGroup:loader$MGroup$scanned= */
(nitmethod_t)nitc___nitc__MGroup___in_nesting, /* pointer to mpackage:MGroup:mpackage$MGroup$in_nesting */
(nitmethod_t)nitc___nitc__MGroup___in_nesting_61d, /* pointer to mpackage:MGroup:mpackage$MGroup$in_nesting= */
(nitmethod_t)nitc___nitc__MGroup___parent, /* pointer to mpackage:MGroup:mpackage$MGroup$parent */
(nitmethod_t)core___core__Object___init, /* pointer to mpackage:MGroup:kernel$Object$init */
}
};
/* allocate MGroup */
val* NEW_nitc__MGroup(const struct type* type) {
val* self /* : MGroup */;
val* var /* : Array[MModule] */;
self = nit_alloc(sizeof(struct instance) + 14*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MGroup;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:MGroup exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:MGroup exact> */
var = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[MModule]>*/
}
self->attrs[COLOR_nitc__mmodule__MGroup___mmodules].val = var; /* _mmodules on <self:MGroup exact> */
self->attrs[COLOR_nitc__loader__MGroup___scanned].s = 0; /* _scanned on <self:MGroup exact> */
return self;
}
/* runtime class nitc__Model: nitc::Model (dead=false; need_corpse=false)*/
const struct class class_nitc__Model = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to model_base:Model:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model_base:Model:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model_base:Model:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to model_base:Model:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model_base:Model:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model_base:Model:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model_base:Model:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model_base:Model:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model_base:Model:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model_base:Model:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model_base:Model:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model_base:Model:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MEntity___c_name, /* pointer to model_base:Model:model_base$MEntity$c_name */
(nitmethod_t)nitc___nitc__Model___MEntity__model, /* pointer to model_base:Model:model_base$Model$model */
(nitmethod_t)nitc___nitc__MEntity___is_fictive, /* pointer to model_base:Model:model_base$MEntity$is_fictive */
(nitmethod_t)nitc___nitc__MEntity___location, /* pointer to model_base:Model:model_base$MEntity$location */
(nitmethod_t)nitc___nitc__MEntity___name, /* pointer to model_base:Model:model_base$MEntity$name */
(nitmethod_t)nitc___nitc__MEntity___is_fictive_61d, /* pointer to model_base:Model:model_base$MEntity$is_fictive= */
(nitmethod_t)nitc__model___MEntity___visibility, /* pointer to model_base:Model:model$MEntity$visibility */
(nitmethod_t)nitc___nitc__MEntity___full_name, /* pointer to model_base:Model:model_base$MEntity$full_name */
(nitmethod_t)nitc__mdoc___MEntity___mdoc_61d, /* pointer to model_base:Model:mdoc$MEntity$mdoc= */
(nitmethod_t)nitc___nitc__MEntity___is_broken_61d, /* pointer to model_base:Model:model_base$MEntity$is_broken= */
(nitmethod_t)nitc___nitc__MEntity___is_broken, /* pointer to model_base:Model:model_base$MEntity$is_broken */
(nitmethod_t)nitc__separate_compiler___MEntity___const_color, /* pointer to model_base:Model:separate_compiler$MEntity$const_color */
(nitmethod_t)nitc__mdoc___MEntity___mdoc, /* pointer to model_base:Model:mdoc$MEntity$mdoc */
(nitmethod_t)nitc__mdoc___MEntity___deprecation_61d, /* pointer to model_base:Model:mdoc$MEntity$deprecation= */
(nitmethod_t)nitc__mdoc___MEntity___deprecation, /* pointer to model_base:Model:mdoc$MEntity$deprecation */
(nitmethod_t)nitc__mmodule___Model___mmodule_importation_hierarchy, /* pointer to model_base:Model:mmodule$Model$mmodule_importation_hierarchy */
(nitmethod_t)nitc___nitc__Model___no_location, /* pointer to model_base:Model:model_base$Model$no_location */
(nitmethod_t)nitc__mmodule___Model___mmodules_by_name, /* pointer to model_base:Model:mmodule$Model$mmodules_by_name */
(nitmethod_t)nitc__mmodule___Model___mmodules, /* pointer to model_base:Model:mmodule$Model$mmodules */
(nitmethod_t)nitc__model___Model___get_mclasses_by_name, /* pointer to model_base:Model:model$Model$get_mclasses_by_name */
(nitmethod_t)nitc__model___Model___mclassdef_hierarchy, /* pointer to model_base:Model:model$Model$mclassdef_hierarchy */
(nitmethod_t)nitc__model___Model___get_mproperties_by_name, /* pointer to model_base:Model:model$Model$get_mproperties_by_name */
(nitmethod_t)nitc__mpackage___Model___mpackages, /* pointer to model_base:Model:mpackage$Model$mpackages */
(nitmethod_t)nitc__mpackage___Model___mpackage_by_name, /* pointer to model_base:Model:mpackage$Model$mpackage_by_name */
(nitmethod_t)nitc__model___Model___mclasses_by_name, /* pointer to model_base:Model:model$Model$mclasses_by_name */
(nitmethod_t)nitc__model___Model___mclasses, /* pointer to model_base:Model:model$Model$mclasses */
(nitmethod_t)nitc__model___Model___full_mtype_specialization_hierarchy, /* pointer to model_base:Model:model$Model$full_mtype_specialization_hierarchy */
(nitmethod_t)nitc__model___Model___intro_mtype_specialization_hierarchy, /* pointer to model_base:Model:model$Model$intro_mtype_specialization_hierarchy */
(nitmethod_t)nitc__model___Model___mproperties_by_name, /* pointer to model_base:Model:model$Model$mproperties_by_name */
(nitmethod_t)nitc__mmodule___Model___get_mmodules_by_name, /* pointer to model_base:Model:mmodule$Model$get_mmodules_by_name */
(nitmethod_t)nitc__model___Model___null_type, /* pointer to model_base:Model:model$Model$null_type */
(nitmethod_t)nitc__model___Model___mproperties, /* pointer to model_base:Model:model$Model$mproperties */
}
};
/* allocate Model */
val* NEW_nitc__Model(const struct type* type) {
val* self /* : Model */;
val* var /* : Location */;
val* var1 /* : Array[MPackage] */;
val* var2 /* : MultiHashMap[String, MPackage] */;
val* var3 /* : Array[MModule] */;
val* var4 /* : POSet[MModule] */;
val* var5 /* : MultiHashMap[String, MModule] */;
val* var6 /* : Array[MClass] */;
val* var7 /* : Array[MProperty] */;
val* var8 /* : POSet[MClassDef] */;
val* var10 /* : POSet[MClassType] */;
val* var12 /* : POSet[MClassType] */;
val* var14 /* : MultiHashMap[String, MClass] */;
val* var15 /* : MultiHashMap[String, MProperty] */;
val* var16 /* : MNullType */;
self = nit_alloc(sizeof(struct instance) + 20*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__Model;
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 0; /* _is_broken on <self:Model exact> */
self->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 0; /* _is_fictive on <self:Model exact> */
var = NEW_nitc__Location(&type_nitc__Location);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nitc__location__Location__file_61d]))(var, ((val*)NULL)); /* file= on <var:Location>*/
}
{
((void(*)(val* self, long p0))(var->class->vft[COLOR_nitc__location__Location__line_start_61d]))(var, 0l); /* line_start= on <var:Location>*/
}
{
((void(*)(val* self, long p0))(var->class->vft[COLOR_nitc__location__Location__line_end_61d]))(var, 0l); /* line_end= on <var:Location>*/
}
{
((void(*)(val* self, long p0))(var->class->vft[COLOR_nitc__location__Location__column_start_61d]))(var, 0l); /* column_start= on <var:Location>*/
}
{
((void(*)(val* self, long p0))(var->class->vft[COLOR_nitc__location__Location__column_end_61d]))(var, 0l); /* column_end= on <var:Location>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Location>*/
}
self->attrs[COLOR_nitc__model_base__Model___no_location].val = var; /* _no_location on <self:Model exact> */
var1 = NEW_core__Array(&type_core__Array__nitc__MPackage);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[MPackage]>*/
}
self->attrs[COLOR_nitc__mpackage__Model___mpackages].val = var1; /* _mpackages on <self:Model exact> */
var2 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMap__core__String__nitc__MPackage);
{
core___core__HashMap___core__kernel__Object__init(var2); /* Direct call hash_collection$HashMap$init on <var2:MultiHashMap[String, MPackage]>*/
}
self->attrs[COLOR_nitc__mpackage__Model___mpackage_by_name].val = var2; /* _mpackage_by_name on <self:Model exact> */
var3 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array$Array$init on <var3:Array[MModule]>*/
}
self->attrs[COLOR_nitc__mmodule__Model___mmodules].val = var3; /* _mmodules on <self:Model exact> */
var4 = NEW_poset__POSet(&type_poset__POSet__nitc__MModule);
{
{ /* Inline kernel$Object$init (var4) on <var4:POSet[MModule]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nitc__mmodule__Model___mmodule_importation_hierarchy].val = var4; /* _mmodule_importation_hierarchy on <self:Model exact> */
var5 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMap__core__String__nitc__MModule);
{
core___core__HashMap___core__kernel__Object__init(var5); /* Direct call hash_collection$HashMap$init on <var5:MultiHashMap[String, MModule]>*/
}
self->attrs[COLOR_nitc__mmodule__Model___mmodules_by_name].val = var5; /* _mmodules_by_name on <self:Model exact> */
var6 = NEW_core__Array(&type_core__Array__nitc__MClass);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array$Array$init on <var6:Array[MClass]>*/
}
self->attrs[COLOR_nitc__model__Model___mclasses].val = var6; /* _mclasses on <self:Model exact> */
var7 = NEW_core__Array(&type_core__Array__nitc__MProperty);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array$Array$init on <var7:Array[MProperty]>*/
}
self->attrs[COLOR_nitc__model__Model___mproperties].val = var7; /* _mproperties on <self:Model exact> */
var8 = NEW_poset__POSet(&type_poset__POSet__nitc__MClassDef);
{
{ /* Inline kernel$Object$init (var8) on <var8:POSet[MClassDef]> */
RET_LABEL9:(void)0;
}
}
self->attrs[COLOR_nitc__model__Model___mclassdef_hierarchy].val = var8; /* _mclassdef_hierarchy on <self:Model exact> */
var10 = NEW_poset__POSet(&type_poset__POSet__nitc__MClassType);
{
{ /* Inline kernel$Object$init (var10) on <var10:POSet[MClassType]> */
RET_LABEL11:(void)0;
}
}
self->attrs[COLOR_nitc__model__Model___intro_mtype_specialization_hierarchy].val = var10; /* _intro_mtype_specialization_hierarchy on <self:Model exact> */
var12 = NEW_poset__POSet(&type_poset__POSet__nitc__MClassType);
{
{ /* Inline kernel$Object$init (var12) on <var12:POSet[MClassType]> */
RET_LABEL13:(void)0;
}
}
self->attrs[COLOR_nitc__model__Model___full_mtype_specialization_hierarchy].val = var12; /* _full_mtype_specialization_hierarchy on <self:Model exact> */
var14 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMap__core__String__nitc__MClass);
{
core___core__HashMap___core__kernel__Object__init(var14); /* Direct call hash_collection$HashMap$init on <var14:MultiHashMap[String, MClass]>*/
}
self->attrs[COLOR_nitc__model__Model___mclasses_by_name].val = var14; /* _mclasses_by_name on <self:Model exact> */
var15 = NEW_more_collections__MultiHashMap(&type_more_collections__MultiHashMap__core__String__nitc__MProperty);
{
core___core__HashMap___core__kernel__Object__init(var15); /* Direct call hash_collection$HashMap$init on <var15:MultiHashMap[String, MProperty]>*/
}
self->attrs[COLOR_nitc__model__Model___mproperties_by_name].val = var15; /* _mproperties_by_name on <self:Model exact> */
var16 = NEW_nitc__MNullType(&type_nitc__MNullType);
{
((void(*)(val* self, val* p0))(var16->class->vft[COLOR_nitc__model__MNullType__model_61d]))(var16, self); /* model= on <var16:MNullType>*/
}
{
((void(*)(val* self))(var16->class->vft[COLOR_core__kernel__Object__init]))(var16); /* init on <var16:MNullType>*/
}
self->attrs[COLOR_nitc__model__Model___null_type].val = var16; /* _null_type on <self:Model exact> */
return self;
}
/* runtime class nitc__MEntity: nitc::MEntity (dead=true; need_corpse=false)*/
/* allocate MEntity */
val* NEW_nitc__MEntity(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "MEntity is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__MConcern: nitc::MConcern (dead=true; need_corpse=false)*/
/* allocate MConcern */
val* NEW_nitc__MConcern(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "MConcern is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__MVisibility: nitc::MVisibility (dead=false; need_corpse=false)*/
const struct class class_nitc__MVisibility = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MVisibility___core__kernel__Object__init, /* pointer to model_base:MVisibility:model_base$MVisibility$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to model_base:MVisibility:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to model_base:MVisibility:kernel$Object$sys */
(nitmethod_t)nitc___nitc__MVisibility___core__abstract_text__Object__to_s, /* pointer to model_base:MVisibility:model_base$MVisibility$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to model_base:MVisibility:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to model_base:MVisibility:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to model_base:MVisibility:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to model_base:MVisibility:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to model_base:MVisibility:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to model_base:MVisibility:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to model_base:MVisibility:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to model_base:MVisibility:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Comparable____60d_61d, /* pointer to model_base:MVisibility:kernel$Comparable$<= */
(nitmethod_t)core___core__Comparable____62d, /* pointer to model_base:MVisibility:kernel$Comparable$> */
(nitmethod_t)core___core__Comparable____62d_61d, /* pointer to model_base:MVisibility:kernel$Comparable$>= */
(nitmethod_t)nitc___nitc__MVisibility___core__kernel__Comparable___60d, /* pointer to model_base:MVisibility:model_base$MVisibility$< */
(nitmethod_t)core___core__Comparable____60d_61d_62d, /* pointer to model_base:MVisibility:kernel$Comparable$<=> */
(nitmethod_t)core___core__Comparable___min, /* pointer to model_base:MVisibility:kernel$Comparable$min */
(nitmethod_t)core___core__Comparable___max, /* pointer to model_base:MVisibility:kernel$Comparable$max */
(nitmethod_t)nitc___nitc__MVisibility___to_s_61d, /* pointer to model_base:MVisibility:model_base$MVisibility$to_s= */
(nitmethod_t)nitc___nitc__MVisibility___level_61d, /* pointer to model_base:MVisibility:model_base$MVisibility$level= */
(nitmethod_t)nitc___nitc__MVisibility___level, /* pointer to model_base:MVisibility:model_base$MVisibility$level */
(nitmethod_t)core___core__Object___init, /* pointer to model_base:MVisibility:kernel$Object$init */
}
};
/* allocate MVisibility */
val* NEW_nitc__MVisibility(const struct type* type) {
val* self /* : MVisibility */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MVisibility;
return self;
}
/* runtime class nitc__MEntityNameSorter: nitc::MEntityNameSorter (dead=true; need_corpse=false)*/
/* allocate MEntityNameSorter */
val* NEW_nitc__MEntityNameSorter(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "MEntityNameSorter is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__SourceFile: nitc::SourceFile (dead=false; need_corpse=false)*/
const struct class class_nitc__SourceFile = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__SourceFile___core__kernel__Object__init, /* pointer to location:SourceFile:location$SourceFile$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to location:SourceFile:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to location:SourceFile:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to location:SourceFile:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to location:SourceFile:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to location:SourceFile:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to location:SourceFile:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to location:SourceFile:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to location:SourceFile:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to location:SourceFile:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to location:SourceFile:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to location:SourceFile:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__SourceFile___filename, /* pointer to location:SourceFile:location$SourceFile$filename */
(nitmethod_t)nitc__toolcontext___SourceFile___messages, /* pointer to location:SourceFile:toolcontext$SourceFile$messages */
(nitmethod_t)nitc___nitc__SourceFile___line_starts, /* pointer to location:SourceFile:location$SourceFile$line_starts */
(nitmethod_t)nitc___nitc__SourceFile___string, /* pointer to location:SourceFile:location$SourceFile$string */
(nitmethod_t)nitc___nitc__SourceFile___from_string, /* pointer to location:SourceFile:location$SourceFile$from_string */
(nitmethod_t)nitc___nitc__SourceFile___string_61d, /* pointer to location:SourceFile:location$SourceFile$string= */
(nitmethod_t)nitc___nitc__SourceFile___stream, /* pointer to location:SourceFile:location$SourceFile$stream */
(nitmethod_t)nitc___nitc__SourceFile___filename_61d, /* pointer to location:SourceFile:location$SourceFile$filename= */
(nitmethod_t)nitc___nitc__SourceFile___stream_61d, /* pointer to location:SourceFile:location$SourceFile$stream= */
(nitmethod_t)nitc__loader___SourceFile___mmodule, /* pointer to location:SourceFile:loader$SourceFile$mmodule */
(nitmethod_t)nitc__loader___SourceFile___mmodule_61d, /* pointer to location:SourceFile:loader$SourceFile$mmodule= */
(nitmethod_t)nitc__parser_nodes___SourceFile___first_token, /* pointer to location:SourceFile:parser_nodes$SourceFile$first_token */
(nitmethod_t)nitc__parser_nodes___SourceFile___first_token_61d, /* pointer to location:SourceFile:parser_nodes$SourceFile$first_token= */
(nitmethod_t)nitc__parser_nodes___SourceFile___last_token_61d, /* pointer to location:SourceFile:parser_nodes$SourceFile$last_token= */
(nitmethod_t)core___core__Object___init, /* pointer to location:SourceFile:kernel$Object$init */
}
};
/* allocate SourceFile */
val* NEW_nitc__SourceFile(const struct type* type) {
val* self /* : SourceFile */;
val* var /* : Array[Int] */;
val* var1 /* : Array[Message] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__SourceFile;
var = NEW_core__Array(&type_core__Array__core__Int);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[Int]>*/
}
self->attrs[COLOR_nitc__location__SourceFile___line_starts].val = var; /* _line_starts on <self:SourceFile exact> */
var1 = NEW_core__Array(&type_core__Array__nitc__Message);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[Message]>*/
}
self->attrs[COLOR_nitc__toolcontext__SourceFile___messages].val = var1; /* _messages on <self:SourceFile exact> */
return self;
}
/* runtime class nitc__Location: nitc::Location (dead=false; need_corpse=false)*/
const struct class class_nitc__Location = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Location___core__kernel__Object__init, /* pointer to location:Location:location$Location$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to location:Location:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to location:Location:kernel$Object$sys */
(nitmethod_t)nitc___nitc__Location___core__abstract_text__Object__to_s, /* pointer to location:Location:location$Location$to_s */
(nitmethod_t)nitc___nitc__Location___core__kernel__Object___61d_61d, /* pointer to location:Location:location$Location$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to location:Location:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to location:Location:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to location:Location:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to location:Location:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to location:Location:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to location:Location:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to location:Location:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Comparable____60d_61d, /* pointer to location:Location:kernel$Comparable$<= */
(nitmethod_t)core___core__Comparable____62d, /* pointer to location:Location:kernel$Comparable$> */
(nitmethod_t)core___core__Comparable____62d_61d, /* pointer to location:Location:kernel$Comparable$>= */
(nitmethod_t)nitc___nitc__Location___core__kernel__Comparable___60d, /* pointer to location:Location:location$Location$< */
(nitmethod_t)core___core__Comparable____60d_61d_62d, /* pointer to location:Location:kernel$Comparable$<=> */
(nitmethod_t)core___core__Comparable___min, /* pointer to location:Location:kernel$Comparable$min */
(nitmethod_t)core___core__Comparable___max, /* pointer to location:Location:kernel$Comparable$max */
(nitmethod_t)nitc___nitc__Location___file_61d, /* pointer to location:Location:location$Location$file= */
(nitmethod_t)nitc___nitc__Location___line_start_61d, /* pointer to location:Location:location$Location$line_start= */
(nitmethod_t)nitc___nitc__Location___line_end_61d, /* pointer to location:Location:location$Location$line_end= */
(nitmethod_t)nitc___nitc__Location___column_start_61d, /* pointer to location:Location:location$Location$column_start= */
(nitmethod_t)nitc___nitc__Location___column_end_61d, /* pointer to location:Location:location$Location$column_end= */
(nitmethod_t)nitc___nitc__Location___file, /* pointer to location:Location:location$Location$file */
(nitmethod_t)nitc___nitc__Location___line_start, /* pointer to location:Location:location$Location$line_start */
(nitmethod_t)nitc___nitc__Location___line_end, /* pointer to location:Location:location$Location$line_end */
(nitmethod_t)nitc___nitc__Location___column_start, /* pointer to location:Location:location$Location$column_start */
(nitmethod_t)nitc___nitc__Location___column_end, /* pointer to location:Location:location$Location$column_end */
(nitmethod_t)nitc___nitc__Location___located_in, /* pointer to location:Location:location$Location$located_in */
(nitmethod_t)nitc__toolcontext___Location___add_message, /* pointer to location:Location:toolcontext$Location$add_message */
(nitmethod_t)nitc__toolcontext___Location___messages, /* pointer to location:Location:toolcontext$Location$messages */
(nitmethod_t)nitc__toolcontext___Location___messages_61d, /* pointer to location:Location:toolcontext$Location$messages= */
(nitmethod_t)nitc___nitc__Location___colored_line, /* pointer to location:Location:location$Location$colored_line */
(nitmethod_t)nitc___nitc__Location___opaque_file, /* pointer to location:Location:location$Location$opaque_file */
(nitmethod_t)nitc___nitc__Location___text, /* pointer to location:Location:location$Location$text */
(nitmethod_t)nitc___nitc__Location___text_cache, /* pointer to location:Location:location$Location$text_cache */
(nitmethod_t)nitc___nitc__Location___pstart, /* pointer to location:Location:location$Location$pstart */
(nitmethod_t)nitc___nitc__Location___pend, /* pointer to location:Location:location$Location$pend */
(nitmethod_t)nitc___nitc__Location___text_cache_61d, /* pointer to location:Location:location$Location$text_cache= */
(nitmethod_t)nitc__light_c___Location___as_line_pragma, /* pointer to location:Location:light_c$Location$as_line_pragma */
(nitmethod_t)core___core__Object___init, /* pointer to location:Location:kernel$Object$init */
}
};
/* allocate Location */
val* NEW_nitc__Location(const struct type* type) {
val* self /* : Location */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__Location;
return self;
}
/* runtime class core__Passwd: core::Passwd (dead=true; need_corpse=true)*/
const struct class class_core__Passwd = {
7, /* box_kind */
{
}
};
/* allocate extern Passwd */
val* NEW_core__Passwd(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Passwd is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Group: core::Group (dead=true; need_corpse=true)*/
const struct class class_core__Group = {
7, /* box_kind */
{
}
};
/* allocate extern Group */
val* NEW_core__Group(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Group is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__ropes__Rope: core::ropes::Rope (dead=true; need_corpse=false)*/
/* allocate Rope */
val* NEW_core__ropes__Rope(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Rope is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__ropes__Concat: core::ropes::Concat (dead=false; need_corpse=false)*/
const struct class class_core__ropes__Concat = {
0, /* box_kind */
{
(nitmethod_t)core__ropes___core__ropes__Concat___core__kernel__Object__init, /* pointer to ropes:Concat:ropes$Concat$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to ropes:Concat:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to ropes:Concat:kernel$Object$sys */
(nitmethod_t)core___core__String___Object__to_s, /* pointer to ropes:Concat:abstract_text$String$to_s */
(nitmethod_t)core___core__Text___core__kernel__Object___61d_61d, /* pointer to ropes:Concat:abstract_text$Text$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to ropes:Concat:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to ropes:Concat:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to ropes:Concat:kernel$Object$object_id */
(nitmethod_t)core___core__Text___core__kernel__Object__hash, /* pointer to ropes:Concat:abstract_text$Text$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to ropes:Concat:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to ropes:Concat:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to ropes:Concat:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Comparable____60d_61d, /* pointer to ropes:Concat:kernel$Comparable$<= */
(nitmethod_t)core___core__Comparable____62d, /* pointer to ropes:Concat:kernel$Comparable$> */
(nitmethod_t)core___core__Comparable____62d_61d, /* pointer to ropes:Concat:kernel$Comparable$>= */
(nitmethod_t)core___core__Text___core__kernel__Comparable___60d, /* pointer to ropes:Concat:abstract_text$Text$< */
(nitmethod_t)core___core__Comparable____60d_61d_62d, /* pointer to ropes:Concat:kernel$Comparable$<=> */
(nitmethod_t)core___core__Comparable___min, /* pointer to ropes:Concat:kernel$Comparable$min */
(nitmethod_t)core___core__Comparable___max, /* pointer to ropes:Concat:kernel$Comparable$max */
(nitmethod_t)core___core__String___core__kernel__Cloneable__clone, /* pointer to ropes:Concat:abstract_text$String$clone */
(nitmethod_t)core___core__Pattern___split_in, /* pointer to ropes:Concat:string_search$Pattern$split_in */
(nitmethod_t)core__string_search___Text___Pattern__search_in, /* pointer to ropes:Concat:string_search$Text$search_in */
(nitmethod_t)core__string_search___Text___Pattern__search_index_in, /* pointer to ropes:Concat:string_search$Text$search_index_in */
(nitmethod_t)core__fixed_ints_text___Text___to_i, /* pointer to ropes:Concat:fixed_ints_text$Text$to_i */
(nitmethod_t)core__ropes___core__ropes__Concat___core__abstract_text__Text__to_cstring, /* pointer to ropes:Concat:ropes$Concat$to_cstring */
(nitmethod_t)core__ropes___core__ropes__Concat___core__abstract_text__Text__length, /* pointer to ropes:Concat:ropes$Concat$length */
(nitmethod_t)core__file___Text___file_exists, /* pointer to ropes:Concat:file$Text$file_exists */
(nitmethod_t)core__ropes___core__ropes__Concat___core__abstract_text__Text__chars, /* pointer to ropes:Concat:ropes$Concat$chars */
(nitmethod_t)core__ropes___core__ropes__Concat___core__abstract_text__Text__substring, /* pointer to ropes:Concat:ropes$Concat$substring */
(nitmethod_t)core__fixed_ints_text___Text___is_int, /* pointer to ropes:Concat:fixed_ints_text$Text$is_int */
(nitmethod_t)core__string_search___Text___remove_all, /* pointer to ropes:Concat:string_search$Text$remove_all */
(nitmethod_t)core__ropes___core__ropes__Concat___core__abstract_text__Text___91d_93d, /* pointer to ropes:Concat:ropes$Concat$[] */
(nitmethod_t)core__file___Writable___write_to_file, /* pointer to ropes:Concat:file$Writable$write_to_file */
(nitmethod_t)core__stream___Text___Writable__write_to, /* pointer to ropes:Concat:stream$Text$write_to */
(nitmethod_t)core___core__Text___substring_from, /* pointer to ropes:Concat:abstract_text$Text$substring_from */
(nitmethod_t)core___core__Text___to_hex, /* pointer to ropes:Concat:abstract_text$Text$to_hex */
(nitmethod_t)core___core__Text___to_oct, /* pointer to ropes:Concat:abstract_text$Text$to_oct */
(nitmethod_t)core___core__Text___to_bin, /* pointer to ropes:Concat:abstract_text$Text$to_bin */
(nitmethod_t)core___core__Text___to_dec, /* pointer to ropes:Concat:abstract_text$Text$to_dec */
(nitmethod_t)core__ropes___core__ropes__Concat___core__abstract_text__Text___43d, /* pointer to ropes:Concat:ropes$Concat$+ */
(nitmethod_t)core__ropes___core__ropes__Concat___core__abstract_text__Text__byte_length, /* pointer to ropes:Concat:ropes$Concat$byte_length */
(nitmethod_t)core__ropes___core__ropes__Concat___core__abstract_text__Text__substrings, /* pointer to ropes:Concat:ropes$Concat$substrings */
(nitmethod_t)core___core__String___Text__to_snake_case, /* pointer to ropes:Concat:abstract_text$String$to_snake_case */
(nitmethod_t)core__ropes___core__ropes__Concat___core__abstract_text__Text__is_empty, /* pointer to ropes:Concat:ropes$Concat$is_empty */
(nitmethod_t)core__string_search___Text___split_with, /* pointer to ropes:Concat:string_search$Text$split_with */
(nitmethod_t)core__ropes___core__ropes__Concat___core__abstract_text__Text___42d, /* pointer to ropes:Concat:ropes$Concat$* */
(nitmethod_t)core__fixed_ints_text___Text___strip_numhead, /* pointer to ropes:Concat:fixed_ints_text$Text$strip_numhead */
(nitmethod_t)core__fixed_ints_text___Text___get_numhead, /* pointer to ropes:Concat:fixed_ints_text$Text$get_numhead */
(nitmethod_t)core___core__Text___is_hex, /* pointer to ropes:Concat:abstract_text$Text$is_hex */
(nitmethod_t)core___core__Text___is_bin, /* pointer to ropes:Concat:abstract_text$Text$is_bin */
(nitmethod_t)core___core__Text___is_oct, /* pointer to ropes:Concat:abstract_text$Text$is_oct */
(nitmethod_t)core___core__Text___is_dec, /* pointer to ropes:Concat:abstract_text$Text$is_dec */
(nitmethod_t)core__string_search___Text___split, /* pointer to ropes:Concat:string_search$Text$split */
(nitmethod_t)core__ropes___core__ropes__Concat___core__abstract_text__Text__empty, /* pointer to ropes:Concat:ropes$Concat$empty */
(nitmethod_t)core___core__Text___a_to, /* pointer to ropes:Concat:abstract_text$Text$a_to */
(nitmethod_t)core___core__Text___last, /* pointer to ropes:Concat:abstract_text$Text$last */
(nitmethod_t)core___core__Text___hash_cache, /* pointer to ropes:Concat:abstract_text$Text$hash_cache */
(nitmethod_t)core___core__Text___hash_cache_61d, /* pointer to ropes:Concat:abstract_text$Text$hash_cache= */
(nitmethod_t)core___core__Text___is_lower, /* pointer to ropes:Concat:abstract_text$Text$is_lower */
(nitmethod_t)core___core__Text___has_suffix, /* pointer to ropes:Concat:abstract_text$Text$has_suffix */
(nitmethod_t)core__file___Text___write_native_to, /* pointer to ropes:Concat:file$Text$write_native_to */
(nitmethod_t)core___core__Text___to_cmangle, /* pointer to ropes:Concat:abstract_text$Text$to_cmangle */
(nitmethod_t)core__string_search___Text___split_once_on, /* pointer to ropes:Concat:string_search$Text$split_once_on */
(nitmethod_t)core___core__Text___is_numeric, /* pointer to ropes:Concat:abstract_text$Text$is_numeric */
(nitmethod_t)core___core__Text___has_substring, /* pointer to ropes:Concat:abstract_text$Text$has_substring */
(nitmethod_t)core___core__Text___levenshtein_distance, /* pointer to ropes:Concat:abstract_text$Text$levenshtein_distance */
(nitmethod_t)core___core__Text___last_index_of_from, /* pointer to ropes:Concat:abstract_text$Text$last_index_of_from */
(nitmethod_t)core___core__Text___has_prefix, /* pointer to ropes:Concat:abstract_text$Text$has_prefix */
(nitmethod_t)core___core__Text___trim, /* pointer to ropes:Concat:abstract_text$Text$trim */
(nitmethod_t)core___core__Text___escape_to_c, /* pointer to ropes:Concat:abstract_text$Text$escape_to_c */
(nitmethod_t)core__file___Text___to_path, /* pointer to ropes:Concat:file$Text$to_path */
(nitmethod_t)core___core__Text___chomp, /* pointer to ropes:Concat:abstract_text$Text$chomp */
(nitmethod_t)core___core__Text___r_trim, /* pointer to ropes:Concat:abstract_text$Text$r_trim */
(nitmethod_t)core___core__Text___l_trim, /* pointer to ropes:Concat:abstract_text$Text$l_trim */
(nitmethod_t)csv___core__Text___escape_to_csv, /* pointer to ropes:Concat:csv$Text$escape_to_csv */
(nitmethod_t)core___core__Text___escape_to_sh, /* pointer to ropes:Concat:abstract_text$Text$escape_to_sh */
(nitmethod_t)core__ropes___core__ropes__Concat___core__abstract_text__Text__to_lower, /* pointer to ropes:Concat:ropes$Concat$to_lower */
(nitmethod_t)csv___core__Text___chars_to_escape_csv, /* pointer to ropes:Concat:csv$Text$chars_to_escape_csv */
(nitmethod_t)core___core__Text___escape_to_mk, /* pointer to ropes:Concat:abstract_text$Text$escape_to_mk */
(nitmethod_t)core__string_search___Text___replace, /* pointer to ropes:Concat:string_search$Text$replace */
(nitmethod_t)core___core__Text___index_of, /* pointer to ropes:Concat:abstract_text$Text$index_of */
(nitmethod_t)core___core__Text___last_index_of, /* pointer to ropes:Concat:abstract_text$Text$last_index_of */
(nitmethod_t)core___core__Text___first, /* pointer to ropes:Concat:abstract_text$Text$first */
(nitmethod_t)core__fixed_ints_text___Text___to_num, /* pointer to ropes:Concat:fixed_ints_text$Text$to_num */
(nitmethod_t)core___core__Text___to_f, /* pointer to ropes:Concat:abstract_text$Text$to_f */
(nitmethod_t)core___core__Text___unescape_nit, /* pointer to ropes:Concat:abstract_text$Text$unescape_nit */
(nitmethod_t)core___core__Text___index_of_from, /* pointer to ropes:Concat:abstract_text$Text$index_of_from */
(nitmethod_t)core__bytes___Text___unescape_to_bytes, /* pointer to ropes:Concat:bytes$Text$unescape_to_bytes */
(nitmethod_t)core__bytes___Text___to_bytes, /* pointer to ropes:Concat:bytes$Text$to_bytes */
(nitmethod_t)core__fixed_ints_text___Text___is_num, /* pointer to ropes:Concat:fixed_ints_text$Text$is_num */
(nitmethod_t)core__fixed_ints_text___Text___get_numext, /* pointer to ropes:Concat:fixed_ints_text$Text$get_numext */
(nitmethod_t)core__fixed_ints_text___Text___strip_numext, /* pointer to ropes:Concat:fixed_ints_text$Text$strip_numext */
(nitmethod_t)core__bytes___Text___append_to_bytes, /* pointer to ropes:Concat:bytes$Text$append_to_bytes */
(nitmethod_t)core__ropes___core__ropes__Concat___core__abstract_text__Text__to_upper, /* pointer to ropes:Concat:ropes$Concat$to_upper */
(nitmethod_t)core__environ___String___environ, /* pointer to ropes:Concat:environ$String$environ */
(nitmethod_t)core__file___String____47d, /* pointer to ropes:Concat:file$String$/ */
(nitmethod_t)core__file___String___join_path, /* pointer to ropes:Concat:file$String$join_path */
(nitmethod_t)core__file___String___strip_extension, /* pointer to ropes:Concat:file$String$strip_extension */
(nitmethod_t)core__file___String___file_extension, /* pointer to ropes:Concat:file$String$file_extension */
(nitmethod_t)core__file___String___basename, /* pointer to ropes:Concat:file$String$basename */
(nitmethod_t)core__file___String___simplify_path, /* pointer to ropes:Concat:file$String$simplify_path */
(nitmethod_t)core__file___String___dirname, /* pointer to ropes:Concat:file$String$dirname */
(nitmethod_t)core__file___String___file_stat, /* pointer to ropes:Concat:file$String$file_stat */
(nitmethod_t)core__file___String___files, /* pointer to ropes:Concat:file$String$files */
(nitmethod_t)core__file___String___realpath, /* pointer to ropes:Concat:file$String$realpath */
(nitmethod_t)core__file___String___relpath, /* pointer to ropes:Concat:file$String$relpath */
(nitmethod_t)core__file___String___mkdir, /* pointer to ropes:Concat:file$String$mkdir */
(nitmethod_t)core__file___String___file_copy_to, /* pointer to ropes:Concat:file$String$file_copy_to */
(nitmethod_t)core__ropes___core__ropes__Concat___left_61d, /* pointer to ropes:Concat:ropes$Concat$left= */
(nitmethod_t)core__ropes___core__ropes__Concat___right_61d, /* pointer to ropes:Concat:ropes$Concat$right= */
(nitmethod_t)core__ropes___core__ropes__Concat___get_leaf_at, /* pointer to ropes:Concat:ropes$Concat$get_leaf_at */
(nitmethod_t)core__ropes___core__ropes__Concat___balance, /* pointer to ropes:Concat:ropes$Concat$balance */
(nitmethod_t)core__ropes___core__ropes__Concat___recurse_balance, /* pointer to ropes:Concat:ropes$Concat$recurse_balance */
(nitmethod_t)core___core__Object___init, /* pointer to ropes:Concat:kernel$Object$init */
}
};
/* allocate Concat */
val* NEW_core__ropes__Concat(const struct type* type) {
val* self /* : Concat */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__ropes__Concat;
return self;
}
/* runtime class core__ropes__RopeCharIteratorPiece: core::ropes::RopeCharIteratorPiece (dead=false; need_corpse=false)*/
const struct class class_core__ropes__RopeCharIteratorPiece = {
0, /* box_kind */
{
(nitmethod_t)core__ropes___core__ropes__RopeCharIteratorPiece___core__kernel__Object__init, /* pointer to ropes:RopeCharIteratorPiece:ropes$RopeCharIteratorPiece$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to ropes:RopeCharIteratorPiece:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to ropes:RopeCharIteratorPiece:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to ropes:RopeCharIteratorPiece:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to ropes:RopeCharIteratorPiece:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to ropes:RopeCharIteratorPiece:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to ropes:RopeCharIteratorPiece:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to ropes:RopeCharIteratorPiece:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to ropes:RopeCharIteratorPiece:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to ropes:RopeCharIteratorPiece:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to ropes:RopeCharIteratorPiece:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to ropes:RopeCharIteratorPiece:abstract_text$Object$native_class_name */
(nitmethod_t)core__ropes___core__ropes__RopeCharIteratorPiece___prev, /* pointer to ropes:RopeCharIteratorPiece:ropes$RopeCharIteratorPiece$prev */
(nitmethod_t)core__ropes___core__ropes__RopeCharIteratorPiece___node, /* pointer to ropes:RopeCharIteratorPiece:ropes$RopeCharIteratorPiece$node */
(nitmethod_t)core__ropes___core__ropes__RopeCharIteratorPiece___ldone_61d, /* pointer to ropes:RopeCharIteratorPiece:ropes$RopeCharIteratorPiece$ldone= */
(nitmethod_t)core__ropes___core__ropes__RopeCharIteratorPiece___rdone_61d, /* pointer to ropes:RopeCharIteratorPiece:ropes$RopeCharIteratorPiece$rdone= */
(nitmethod_t)core__ropes___core__ropes__RopeCharIteratorPiece___ldone, /* pointer to ropes:RopeCharIteratorPiece:ropes$RopeCharIteratorPiece$ldone */
(nitmethod_t)core__ropes___core__ropes__RopeCharIteratorPiece___node_61d, /* pointer to ropes:RopeCharIteratorPiece:ropes$RopeCharIteratorPiece$node= */
(nitmethod_t)core__ropes___core__ropes__RopeCharIteratorPiece___prev_61d, /* pointer to ropes:RopeCharIteratorPiece:ropes$RopeCharIteratorPiece$prev= */
(nitmethod_t)core__ropes___core__ropes__RopeCharIteratorPiece___rdone, /* pointer to ropes:RopeCharIteratorPiece:ropes$RopeCharIteratorPiece$rdone */
(nitmethod_t)core___core__Object___init, /* pointer to ropes:RopeCharIteratorPiece:kernel$Object$init */
}
};
/* allocate RopeCharIteratorPiece */
val* NEW_core__ropes__RopeCharIteratorPiece(const struct type* type) {
val* self /* : RopeCharIteratorPiece */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__ropes__RopeCharIteratorPiece;
return self;
}
/* runtime class core__ropes__RopeByteReverseIterator: core::ropes::RopeByteReverseIterator (dead=true; need_corpse=false)*/
/* allocate RopeByteReverseIterator */
val* NEW_core__ropes__RopeByteReverseIterator(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "RopeByteReverseIterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__ropes__RopeByteIterator: core::ropes::RopeByteIterator (dead=true; need_corpse=false)*/
/* allocate RopeByteIterator */
val* NEW_core__ropes__RopeByteIterator(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "RopeByteIterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__ropes__RopeCharReverseIterator: core::ropes::RopeCharReverseIterator (dead=false; need_corpse=false)*/
const struct class class_core__ropes__RopeCharReverseIterator = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to ropes:RopeCharReverseIterator:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to ropes:RopeCharReverseIterator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to ropes:RopeCharReverseIterator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to ropes:RopeCharReverseIterator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to ropes:RopeCharReverseIterator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to ropes:RopeCharReverseIterator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to ropes:RopeCharReverseIterator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to ropes:RopeCharReverseIterator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to ropes:RopeCharReverseIterator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to ropes:RopeCharReverseIterator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to ropes:RopeCharReverseIterator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to ropes:RopeCharReverseIterator:abstract_text$Object$native_class_name */
(nitmethod_t)core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__is_ok, /* pointer to ropes:RopeCharReverseIterator:ropes$RopeCharReverseIterator$is_ok */
(nitmethod_t)VIRTUAL_core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__item, /* pointer to ropes:RopeCharReverseIterator:ropes$RopeCharReverseIterator$item */
(nitmethod_t)core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__Iterator__next, /* pointer to ropes:RopeCharReverseIterator:ropes$RopeCharReverseIterator$next */
(nitmethod_t)core___core__Iterator___finish, /* pointer to ropes:RopeCharReverseIterator:abstract_collection$Iterator$finish */
(nitmethod_t)core___core__Iterator___iterator, /* pointer to ropes:RopeCharReverseIterator:abstract_collection$Iterator$iterator */
(nitmethod_t)core__array___Iterator___to_a, /* pointer to ropes:RopeCharReverseIterator:array$Iterator$to_a */
(nitmethod_t)core__ropes___core__ropes__RopeCharReverseIterator___core__abstract_collection__IndexedIterator__index, /* pointer to ropes:RopeCharReverseIterator:ropes$RopeCharReverseIterator$index */
(nitmethod_t)core__ropes___core__ropes__RopeCharReverseIterator___from, /* pointer to ropes:RopeCharReverseIterator:ropes$RopeCharReverseIterator$from */
(nitmethod_t)core__ropes___core__ropes__RopeCharReverseIterator___pos, /* pointer to ropes:RopeCharReverseIterator:ropes$RopeCharReverseIterator$pos */
(nitmethod_t)core__ropes___core__ropes__RopeCharReverseIterator___ns, /* pointer to ropes:RopeCharReverseIterator:ropes$RopeCharReverseIterator$ns */
(nitmethod_t)core__ropes___core__ropes__RopeCharReverseIterator___pns, /* pointer to ropes:RopeCharReverseIterator:ropes$RopeCharReverseIterator$pns */
(nitmethod_t)core__ropes___core__ropes__RopeCharReverseIterator___pns_61d, /* pointer to ropes:RopeCharReverseIterator:ropes$RopeCharReverseIterator$pns= */
(nitmethod_t)core__ropes___core__ropes__RopeCharReverseIterator___pos_61d, /* pointer to ropes:RopeCharReverseIterator:ropes$RopeCharReverseIterator$pos= */
(nitmethod_t)core__ropes___core__ropes__RopeCharReverseIterator___subs, /* pointer to ropes:RopeCharReverseIterator:ropes$RopeCharReverseIterator$subs */
(nitmethod_t)core__ropes___core__ropes__RopeCharReverseIterator___ns_61d, /* pointer to ropes:RopeCharReverseIterator:ropes$RopeCharReverseIterator$ns= */
(nitmethod_t)core__ropes___core__ropes__RopeCharReverseIterator___subs_61d, /* pointer to ropes:RopeCharReverseIterator:ropes$RopeCharReverseIterator$subs= */
}
};
/* allocate RopeCharReverseIterator */
val* NEW_core__ropes__RopeCharReverseIterator(const struct type* type) {
val* self /* : RopeCharReverseIterator */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__ropes__RopeCharReverseIterator;
return self;
}
/* runtime class core__ropes__RopeCharIterator: core::ropes::RopeCharIterator (dead=false; need_corpse=false)*/
const struct class class_core__ropes__RopeCharIterator = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to ropes:RopeCharIterator:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to ropes:RopeCharIterator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to ropes:RopeCharIterator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to ropes:RopeCharIterator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to ropes:RopeCharIterator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to ropes:RopeCharIterator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to ropes:RopeCharIterator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to ropes:RopeCharIterator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to ropes:RopeCharIterator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to ropes:RopeCharIterator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to ropes:RopeCharIterator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to ropes:RopeCharIterator:abstract_text$Object$native_class_name */
(nitmethod_t)core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__is_ok, /* pointer to ropes:RopeCharIterator:ropes$RopeCharIterator$is_ok */
(nitmethod_t)VIRTUAL_core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__item, /* pointer to ropes:RopeCharIterator:ropes$RopeCharIterator$item */
(nitmethod_t)core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__Iterator__next, /* pointer to ropes:RopeCharIterator:ropes$RopeCharIterator$next */
(nitmethod_t)core___core__Iterator___finish, /* pointer to ropes:RopeCharIterator:abstract_collection$Iterator$finish */
(nitmethod_t)core___core__Iterator___iterator, /* pointer to ropes:RopeCharIterator:abstract_collection$Iterator$iterator */
(nitmethod_t)core__array___Iterator___to_a, /* pointer to ropes:RopeCharIterator:array$Iterator$to_a */
(nitmethod_t)core__ropes___core__ropes__RopeCharIterator___core__abstract_collection__IndexedIterator__index, /* pointer to ropes:RopeCharIterator:ropes$RopeCharIterator$index */
(nitmethod_t)core__ropes___core__ropes__RopeCharIterator___from, /* pointer to ropes:RopeCharIterator:ropes$RopeCharIterator$from */
(nitmethod_t)core__ropes___core__ropes__RopeCharIterator___pos, /* pointer to ropes:RopeCharIterator:ropes$RopeCharIterator$pos */
(nitmethod_t)core__ropes___core__ropes__RopeCharIterator___max, /* pointer to ropes:RopeCharIterator:ropes$RopeCharIterator$max */
(nitmethod_t)core__ropes___core__ropes__RopeCharIterator___str, /* pointer to ropes:RopeCharIterator:ropes$RopeCharIterator$str */
(nitmethod_t)core__ropes___core__ropes__RopeCharIterator___pns, /* pointer to ropes:RopeCharIterator:ropes$RopeCharIterator$pns */
(nitmethod_t)core__ropes___core__ropes__RopeCharIterator___pns_61d, /* pointer to ropes:RopeCharIterator:ropes$RopeCharIterator$pns= */
(nitmethod_t)core__ropes___core__ropes__RopeCharIterator___pos_61d, /* pointer to ropes:RopeCharIterator:ropes$RopeCharIterator$pos= */
(nitmethod_t)core__ropes___core__ropes__RopeCharIterator___subs, /* pointer to ropes:RopeCharIterator:ropes$RopeCharIterator$subs */
(nitmethod_t)core__ropes___core__ropes__RopeCharIterator___str_61d, /* pointer to ropes:RopeCharIterator:ropes$RopeCharIterator$str= */
(nitmethod_t)core__ropes___core__ropes__RopeCharIterator___subs_61d, /* pointer to ropes:RopeCharIterator:ropes$RopeCharIterator$subs= */
(nitmethod_t)core__ropes___core__ropes__RopeCharIterator___max_61d, /* pointer to ropes:RopeCharIterator:ropes$RopeCharIterator$max= */
}
};
/* allocate RopeCharIterator */
val* NEW_core__ropes__RopeCharIterator(const struct type* type) {
val* self /* : RopeCharIterator */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__ropes__RopeCharIterator;
return self;
}
/* runtime class core__ropes__ReverseRopeSubstrings: core::ropes::ReverseRopeSubstrings (dead=false; need_corpse=false)*/
const struct class class_core__ropes__ReverseRopeSubstrings = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to ropes:ReverseRopeSubstrings:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to ropes:ReverseRopeSubstrings:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to ropes:ReverseRopeSubstrings:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to ropes:ReverseRopeSubstrings:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to ropes:ReverseRopeSubstrings:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to ropes:ReverseRopeSubstrings:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to ropes:ReverseRopeSubstrings:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to ropes:ReverseRopeSubstrings:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to ropes:ReverseRopeSubstrings:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to ropes:ReverseRopeSubstrings:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to ropes:ReverseRopeSubstrings:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to ropes:ReverseRopeSubstrings:abstract_text$Object$native_class_name */
(nitmethod_t)core__ropes___core__ropes__ReverseRopeSubstrings___core__abstract_collection__Iterator__is_ok, /* pointer to ropes:ReverseRopeSubstrings:ropes$ReverseRopeSubstrings$is_ok */
(nitmethod_t)core__ropes___core__ropes__ReverseRopeSubstrings___core__abstract_collection__Iterator__item, /* pointer to ropes:ReverseRopeSubstrings:ropes$ReverseRopeSubstrings$item */
(nitmethod_t)core__ropes___core__ropes__ReverseRopeSubstrings___core__abstract_collection__Iterator__next, /* pointer to ropes:ReverseRopeSubstrings:ropes$ReverseRopeSubstrings$next */
(nitmethod_t)core___core__Iterator___finish, /* pointer to ropes:ReverseRopeSubstrings:abstract_collection$Iterator$finish */
(nitmethod_t)core___core__Iterator___iterator, /* pointer to ropes:ReverseRopeSubstrings:abstract_collection$Iterator$iterator */
(nitmethod_t)core__array___Iterator___to_a, /* pointer to ropes:ReverseRopeSubstrings:array$Iterator$to_a */
(nitmethod_t)core__ropes___core__ropes__ReverseRopeSubstrings___core__abstract_collection__IndexedIterator__index, /* pointer to ropes:ReverseRopeSubstrings:ropes$ReverseRopeSubstrings$index */
(nitmethod_t)core__ropes___core__ropes__ReverseRopeSubstrings___from, /* pointer to ropes:ReverseRopeSubstrings:ropes$ReverseRopeSubstrings$from */
(nitmethod_t)core__ropes___core__ropes__ReverseRopeSubstrings___pos, /* pointer to ropes:ReverseRopeSubstrings:ropes$ReverseRopeSubstrings$pos */
(nitmethod_t)core__ropes___core__ropes__ReverseRopeSubstrings___str, /* pointer to ropes:ReverseRopeSubstrings:ropes$ReverseRopeSubstrings$str */
(nitmethod_t)core__ropes___core__ropes__ReverseRopeSubstrings___iter, /* pointer to ropes:ReverseRopeSubstrings:ropes$ReverseRopeSubstrings$iter */
(nitmethod_t)core__ropes___core__ropes__ReverseRopeSubstrings___str_61d, /* pointer to ropes:ReverseRopeSubstrings:ropes$ReverseRopeSubstrings$str= */
(nitmethod_t)core__ropes___core__ropes__ReverseRopeSubstrings___pos_61d, /* pointer to ropes:ReverseRopeSubstrings:ropes$ReverseRopeSubstrings$pos= */
(nitmethod_t)core__ropes___core__ropes__ReverseRopeSubstrings___iter_61d, /* pointer to ropes:ReverseRopeSubstrings:ropes$ReverseRopeSubstrings$iter= */
}
};
/* allocate ReverseRopeSubstrings */
val* NEW_core__ropes__ReverseRopeSubstrings(const struct type* type) {
val* self /* : ReverseRopeSubstrings */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__ropes__ReverseRopeSubstrings;
return self;
}
/* runtime class core__ropes__RopeSubstrings: core::ropes::RopeSubstrings (dead=false; need_corpse=false)*/
const struct class class_core__ropes__RopeSubstrings = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to ropes:RopeSubstrings:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to ropes:RopeSubstrings:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to ropes:RopeSubstrings:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to ropes:RopeSubstrings:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to ropes:RopeSubstrings:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to ropes:RopeSubstrings:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to ropes:RopeSubstrings:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to ropes:RopeSubstrings:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to ropes:RopeSubstrings:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to ropes:RopeSubstrings:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to ropes:RopeSubstrings:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to ropes:RopeSubstrings:abstract_text$Object$native_class_name */
(nitmethod_t)core__ropes___core__ropes__RopeSubstrings___core__abstract_collection__Iterator__is_ok, /* pointer to ropes:RopeSubstrings:ropes$RopeSubstrings$is_ok */
(nitmethod_t)core__ropes___core__ropes__RopeSubstrings___core__abstract_collection__Iterator__item, /* pointer to ropes:RopeSubstrings:ropes$RopeSubstrings$item */
(nitmethod_t)core__ropes___core__ropes__RopeSubstrings___core__abstract_collection__Iterator__next, /* pointer to ropes:RopeSubstrings:ropes$RopeSubstrings$next */
(nitmethod_t)core___core__Iterator___finish, /* pointer to ropes:RopeSubstrings:abstract_collection$Iterator$finish */
(nitmethod_t)core___core__Iterator___iterator, /* pointer to ropes:RopeSubstrings:abstract_collection$Iterator$iterator */
(nitmethod_t)core__array___Iterator___to_a, /* pointer to ropes:RopeSubstrings:array$Iterator$to_a */
(nitmethod_t)core__ropes___core__ropes__RopeSubstrings___core__abstract_collection__IndexedIterator__index, /* pointer to ropes:RopeSubstrings:ropes$RopeSubstrings$index */
(nitmethod_t)core__ropes___core__ropes__RopeSubstrings___from, /* pointer to ropes:RopeSubstrings:ropes$RopeSubstrings$from */
(nitmethod_t)core__ropes___core__ropes__RopeSubstrings___pos, /* pointer to ropes:RopeSubstrings:ropes$RopeSubstrings$pos */
(nitmethod_t)core__ropes___core__ropes__RopeSubstrings___max, /* pointer to ropes:RopeSubstrings:ropes$RopeSubstrings$max */
(nitmethod_t)core__ropes___core__ropes__RopeSubstrings___str, /* pointer to ropes:RopeSubstrings:ropes$RopeSubstrings$str */
(nitmethod_t)core__ropes___core__ropes__RopeSubstrings___pos_61d, /* pointer to ropes:RopeSubstrings:ropes$RopeSubstrings$pos= */
(nitmethod_t)core__ropes___core__ropes__RopeSubstrings___iter, /* pointer to ropes:RopeSubstrings:ropes$RopeSubstrings$iter */
(nitmethod_t)core__ropes___core__ropes__RopeSubstrings___str_61d, /* pointer to ropes:RopeSubstrings:ropes$RopeSubstrings$str= */
(nitmethod_t)core__ropes___core__ropes__RopeSubstrings___iter_61d, /* pointer to ropes:RopeSubstrings:ropes$RopeSubstrings$iter= */
(nitmethod_t)core__ropes___core__ropes__RopeSubstrings___max_61d, /* pointer to ropes:RopeSubstrings:ropes$RopeSubstrings$max= */
}
};
/* allocate RopeSubstrings */
val* NEW_core__ropes__RopeSubstrings(const struct type* type) {
val* self /* : RopeSubstrings */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__ropes__RopeSubstrings;
return self;
}
/* runtime class core__ropes__RopeChars: core::ropes::RopeChars (dead=false; need_corpse=false)*/
const struct class class_core__ropes__RopeChars = {
0, /* box_kind */
{
(nitmethod_t)core__abstract_text___core__abstract_text__StringCharView___core__kernel__Object__init, /* pointer to ropes:RopeChars:abstract_text$StringCharView$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to ropes:RopeChars:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to ropes:RopeChars:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Collection___Object__to_s, /* pointer to ropes:RopeChars:abstract_text$Collection$to_s */
(nitmethod_t)core___core__SequenceRead___core__kernel__Object___61d_61d, /* pointer to ropes:RopeChars:abstract_collection$SequenceRead$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to ropes:RopeChars:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to ropes:RopeChars:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to ropes:RopeChars:kernel$Object$object_id */
(nitmethod_t)core___core__SequenceRead___core__kernel__Object__hash, /* pointer to ropes:RopeChars:abstract_collection$SequenceRead$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to ropes:RopeChars:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to ropes:RopeChars:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to ropes:RopeChars:abstract_text$Object$native_class_name */
(nitmethod_t)core__abstract_text___core__abstract_text__StringCharView___target_61d, /* pointer to ropes:RopeChars:abstract_text$StringCharView$target= */
(nitmethod_t)core__abstract_text___core__abstract_text__StringCharView___target, /* pointer to ropes:RopeChars:abstract_text$StringCharView$target */
(nitmethod_t)core___core__Object___init, /* pointer to ropes:RopeChars:kernel$Object$init */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core__abstract_text___Collection___join, /* pointer to ropes:RopeChars:abstract_text$Collection$join */
(nitmethod_t)core__array___Collection___to_a, /* pointer to ropes:RopeChars:array$Collection$to_a */
(nitmethod_t)core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__length, /* pointer to ropes:RopeChars:abstract_text$StringCharView$length */
(nitmethod_t)core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__is_empty, /* pointer to ropes:RopeChars:abstract_text$StringCharView$is_empty */
(nitmethod_t)core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__iterator, /* pointer to ropes:RopeChars:abstract_text$StringCharView$iterator */
(nitmethod_t)core___core__Collection___has_exactly, /* pointer to ropes:RopeChars:abstract_collection$Collection$has_exactly */
(nitmethod_t)core___core__Collection___has_all, /* pointer to ropes:RopeChars:abstract_collection$Collection$has_all */
(nitmethod_t)core___core__Collection___has, /* pointer to ropes:RopeChars:abstract_collection$Collection$has */
(nitmethod_t)core___core__Collection___count, /* pointer to ropes:RopeChars:abstract_collection$Collection$count */
(nitmethod_t)core___core__SequenceRead___Collection__first, /* pointer to ropes:RopeChars:abstract_collection$SequenceRead$first */
(nitmethod_t)core___core__Collection___not_empty, /* pointer to ropes:RopeChars:abstract_collection$Collection$not_empty */
(nitmethod_t)core__abstract_text___Collection___plain_to_s, /* pointer to ropes:RopeChars:abstract_text$Collection$plain_to_s */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead___91d_93d, /* pointer to ropes:RopeChars:ropes$RopeChars$[] */
(nitmethod_t)core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead__iterator_from, /* pointer to ropes:RopeChars:ropes$RopeChars$iterator_from */
(nitmethod_t)core___core__SequenceRead___index_of, /* pointer to ropes:RopeChars:abstract_collection$SequenceRead$index_of */
(nitmethod_t)core___core__SequenceRead___last_index_of, /* pointer to ropes:RopeChars:abstract_collection$SequenceRead$last_index_of */
(nitmethod_t)core___core__SequenceRead___last, /* pointer to ropes:RopeChars:abstract_collection$SequenceRead$last */
(nitmethod_t)core___core__SequenceRead___index_of_from, /* pointer to ropes:RopeChars:abstract_collection$SequenceRead$index_of_from */
(nitmethod_t)core___core__SequenceRead___last_index_of_from, /* pointer to ropes:RopeChars:abstract_collection$SequenceRead$last_index_of_from */
(nitmethod_t)core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__SequenceRead__reverse_iterator, /* pointer to ropes:RopeChars:abstract_text$StringCharView$reverse_iterator */
(nitmethod_t)core__ropes___core__ropes__RopeChars___core__abstract_collection__SequenceRead__reverse_iterator_from, /* pointer to ropes:RopeChars:ropes$RopeChars$reverse_iterator_from */
}
};
/* allocate RopeChars */
val* NEW_core__ropes__RopeChars(const struct type* type) {
val* self /* : RopeChars */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__ropes__RopeChars;
return self;
}
/* runtime class core__ropes__RopeBytes: core::ropes::RopeBytes (dead=true; need_corpse=false)*/
/* allocate RopeBytes */
val* NEW_core__ropes__RopeBytes(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "RopeBytes is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__flat__FlatSubstringsIter: core::flat::FlatSubstringsIter (dead=false; need_corpse=false)*/
const struct class class_core__flat__FlatSubstringsIter = {
0, /* box_kind */
{
(nitmethod_t)core__flat___core__flat__FlatSubstringsIter___core__kernel__Object__init, /* pointer to flat:FlatSubstringsIter:flat$FlatSubstringsIter$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to flat:FlatSubstringsIter:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to flat:FlatSubstringsIter:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to flat:FlatSubstringsIter:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to flat:FlatSubstringsIter:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to flat:FlatSubstringsIter:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to flat:FlatSubstringsIter:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to flat:FlatSubstringsIter:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to flat:FlatSubstringsIter:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to flat:FlatSubstringsIter:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to flat:FlatSubstringsIter:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to flat:FlatSubstringsIter:abstract_text$Object$native_class_name */
(nitmethod_t)core__flat___core__flat__FlatSubstringsIter___core__abstract_collection__Iterator__is_ok, /* pointer to flat:FlatSubstringsIter:flat$FlatSubstringsIter$is_ok */
(nitmethod_t)core__flat___core__flat__FlatSubstringsIter___core__abstract_collection__Iterator__item, /* pointer to flat:FlatSubstringsIter:flat$FlatSubstringsIter$item */
(nitmethod_t)core__flat___core__flat__FlatSubstringsIter___core__abstract_collection__Iterator__next, /* pointer to flat:FlatSubstringsIter:flat$FlatSubstringsIter$next */
(nitmethod_t)core___core__Iterator___finish, /* pointer to flat:FlatSubstringsIter:abstract_collection$Iterator$finish */
(nitmethod_t)core___core__Iterator___iterator, /* pointer to flat:FlatSubstringsIter:abstract_collection$Iterator$iterator */
(nitmethod_t)core__array___Iterator___to_a, /* pointer to flat:FlatSubstringsIter:array$Iterator$to_a */
(nitmethod_t)core__flat___core__flat__FlatSubstringsIter___tgt_61d, /* pointer to flat:FlatSubstringsIter:flat$FlatSubstringsIter$tgt= */
(nitmethod_t)core__flat___core__flat__FlatSubstringsIter___tgt, /* pointer to flat:FlatSubstringsIter:flat$FlatSubstringsIter$tgt */
(nitmethod_t)core___core__Object___init, /* pointer to flat:FlatSubstringsIter:kernel$Object$init */
}
};
/* allocate FlatSubstringsIter */
val* NEW_core__flat__FlatSubstringsIter(const struct type* type) {
val* self /* : FlatSubstringsIter */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__flat__FlatSubstringsIter;
return self;
}
/* runtime class core__FlatString: core::FlatString (dead=false; need_corpse=false)*/
const struct class class_core__FlatString = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to flat:FlatString:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to flat:FlatString:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to flat:FlatString:kernel$Object$sys */
(nitmethod_t)core___core__String___Object__to_s, /* pointer to flat:FlatString:abstract_text$String$to_s */
(nitmethod_t)core___core__FlatString___core__kernel__Object___61d_61d, /* pointer to flat:FlatString:flat$FlatString$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to flat:FlatString:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to flat:FlatString:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to flat:FlatString:kernel$Object$object_id */
(nitmethod_t)core___core__FlatString___core__kernel__Object__hash, /* pointer to flat:FlatString:flat$FlatString$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to flat:FlatString:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to flat:FlatString:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to flat:FlatString:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Comparable____60d_61d, /* pointer to flat:FlatString:kernel$Comparable$<= */
(nitmethod_t)core___core__Comparable____62d, /* pointer to flat:FlatString:kernel$Comparable$> */
(nitmethod_t)core___core__Comparable____62d_61d, /* pointer to flat:FlatString:kernel$Comparable$>= */
(nitmethod_t)core___core__FlatString___core__kernel__Comparable___60d, /* pointer to flat:FlatString:flat$FlatString$< */
(nitmethod_t)core___core__Comparable____60d_61d_62d, /* pointer to flat:FlatString:kernel$Comparable$<=> */
(nitmethod_t)core___core__Comparable___min, /* pointer to flat:FlatString:kernel$Comparable$min */
(nitmethod_t)core___core__Comparable___max, /* pointer to flat:FlatString:kernel$Comparable$max */
(nitmethod_t)core___core__String___core__kernel__Cloneable__clone, /* pointer to flat:FlatString:abstract_text$String$clone */
(nitmethod_t)core___core__Pattern___split_in, /* pointer to flat:FlatString:string_search$Pattern$split_in */
(nitmethod_t)core__string_search___Text___Pattern__search_in, /* pointer to flat:FlatString:string_search$Text$search_in */
(nitmethod_t)core__string_search___Text___Pattern__search_index_in, /* pointer to flat:FlatString:string_search$Text$search_index_in */
(nitmethod_t)core__fixed_ints_text___Text___to_i, /* pointer to flat:FlatString:fixed_ints_text$Text$to_i */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text__to_cstring, /* pointer to flat:FlatString:flat$FlatString$to_cstring */
(nitmethod_t)core___core__FlatText___Text__length, /* pointer to flat:FlatString:abstract_text$FlatText$length */
(nitmethod_t)core__file___Text___file_exists, /* pointer to flat:FlatString:file$Text$file_exists */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text__chars, /* pointer to flat:FlatString:flat$FlatString$chars */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text__substring, /* pointer to flat:FlatString:flat$FlatString$substring */
(nitmethod_t)core__fixed_ints_text___Text___is_int, /* pointer to flat:FlatString:fixed_ints_text$Text$is_int */
(nitmethod_t)core__string_search___Text___remove_all, /* pointer to flat:FlatString:string_search$Text$remove_all */
(nitmethod_t)core__flat___FlatText___core__abstract_text__Text___91d_93d, /* pointer to flat:FlatString:flat$FlatText$[] */
(nitmethod_t)core__file___Writable___write_to_file, /* pointer to flat:FlatString:file$Writable$write_to_file */
(nitmethod_t)core__stream___Text___Writable__write_to, /* pointer to flat:FlatString:stream$Text$write_to */
(nitmethod_t)core___core__Text___substring_from, /* pointer to flat:FlatString:abstract_text$Text$substring_from */
(nitmethod_t)core__flat___FlatText___core__abstract_text__Text__to_hex, /* pointer to flat:FlatString:flat$FlatText$to_hex */
(nitmethod_t)core___core__Text___to_oct, /* pointer to flat:FlatString:abstract_text$Text$to_oct */
(nitmethod_t)core___core__Text___to_bin, /* pointer to flat:FlatString:abstract_text$Text$to_bin */
(nitmethod_t)core___core__Text___to_dec, /* pointer to flat:FlatString:abstract_text$Text$to_dec */
(nitmethod_t)core__ropes___FlatString___core__abstract_text__Text___43d, /* pointer to flat:FlatString:ropes$FlatString$+ */
(nitmethod_t)core___core__FlatText___Text__byte_length, /* pointer to flat:FlatString:abstract_text$FlatText$byte_length */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text__substrings, /* pointer to flat:FlatString:flat$FlatString$substrings */
(nitmethod_t)core___core__String___Text__to_snake_case, /* pointer to flat:FlatString:abstract_text$String$to_snake_case */
(nitmethod_t)core___core__Text___is_empty, /* pointer to flat:FlatString:abstract_text$Text$is_empty */
(nitmethod_t)core__string_search___Text___split_with, /* pointer to flat:FlatString:string_search$Text$split_with */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text___42d, /* pointer to flat:FlatString:flat$FlatString$* */
(nitmethod_t)core__fixed_ints_text___Text___strip_numhead, /* pointer to flat:FlatString:fixed_ints_text$Text$strip_numhead */
(nitmethod_t)core__fixed_ints_text___Text___get_numhead, /* pointer to flat:FlatString:fixed_ints_text$Text$get_numhead */
(nitmethod_t)core___core__Text___is_hex, /* pointer to flat:FlatString:abstract_text$Text$is_hex */
(nitmethod_t)core___core__Text___is_bin, /* pointer to flat:FlatString:abstract_text$Text$is_bin */
(nitmethod_t)core___core__Text___is_oct, /* pointer to flat:FlatString:abstract_text$Text$is_oct */
(nitmethod_t)core___core__Text___is_dec, /* pointer to flat:FlatString:abstract_text$Text$is_dec */
(nitmethod_t)core__string_search___Text___split, /* pointer to flat:FlatString:string_search$Text$split */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text__empty, /* pointer to flat:FlatString:flat$FlatString$empty */
(nitmethod_t)core___core__Text___a_to, /* pointer to flat:FlatString:abstract_text$Text$a_to */
(nitmethod_t)core___core__Text___last, /* pointer to flat:FlatString:abstract_text$Text$last */
(nitmethod_t)core___core__Text___hash_cache, /* pointer to flat:FlatString:abstract_text$Text$hash_cache */
(nitmethod_t)core___core__Text___hash_cache_61d, /* pointer to flat:FlatString:abstract_text$Text$hash_cache= */
(nitmethod_t)core___core__Text___is_lower, /* pointer to flat:FlatString:abstract_text$Text$is_lower */
(nitmethod_t)core___core__Text___has_suffix, /* pointer to flat:FlatString:abstract_text$Text$has_suffix */
(nitmethod_t)core__file___FlatString___Text__write_native_to, /* pointer to flat:FlatString:file$FlatString$write_native_to */
(nitmethod_t)core___core__Text___to_cmangle, /* pointer to flat:FlatString:abstract_text$Text$to_cmangle */
(nitmethod_t)core__string_search___Text___split_once_on, /* pointer to flat:FlatString:string_search$Text$split_once_on */
(nitmethod_t)core___core__Text___is_numeric, /* pointer to flat:FlatString:abstract_text$Text$is_numeric */
(nitmethod_t)core___core__Text___has_substring, /* pointer to flat:FlatString:abstract_text$Text$has_substring */
(nitmethod_t)core___core__Text___levenshtein_distance, /* pointer to flat:FlatString:abstract_text$Text$levenshtein_distance */
(nitmethod_t)core___core__Text___last_index_of_from, /* pointer to flat:FlatString:abstract_text$Text$last_index_of_from */
(nitmethod_t)core___core__Text___has_prefix, /* pointer to flat:FlatString:abstract_text$Text$has_prefix */
(nitmethod_t)core___core__Text___trim, /* pointer to flat:FlatString:abstract_text$Text$trim */
(nitmethod_t)core__flat___FlatText___core__abstract_text__Text__escape_to_c, /* pointer to flat:FlatString:flat$FlatText$escape_to_c */
(nitmethod_t)core__file___Text___to_path, /* pointer to flat:FlatString:file$Text$to_path */
(nitmethod_t)core___core__Text___chomp, /* pointer to flat:FlatString:abstract_text$Text$chomp */
(nitmethod_t)core___core__Text___r_trim, /* pointer to flat:FlatString:abstract_text$Text$r_trim */
(nitmethod_t)core___core__Text___l_trim, /* pointer to flat:FlatString:abstract_text$Text$l_trim */
(nitmethod_t)csv___core__Text___escape_to_csv, /* pointer to flat:FlatString:csv$Text$escape_to_csv */
(nitmethod_t)core___core__Text___escape_to_sh, /* pointer to flat:FlatString:abstract_text$Text$escape_to_sh */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text__to_lower, /* pointer to flat:FlatString:flat$FlatString$to_lower */
(nitmethod_t)csv___core__Text___chars_to_escape_csv, /* pointer to flat:FlatString:csv$Text$chars_to_escape_csv */
(nitmethod_t)core___core__Text___escape_to_mk, /* pointer to flat:FlatString:abstract_text$Text$escape_to_mk */
(nitmethod_t)core__string_search___Text___replace, /* pointer to flat:FlatString:string_search$Text$replace */
(nitmethod_t)core___core__Text___index_of, /* pointer to flat:FlatString:abstract_text$Text$index_of */
(nitmethod_t)core___core__Text___last_index_of, /* pointer to flat:FlatString:abstract_text$Text$last_index_of */
(nitmethod_t)core___core__Text___first, /* pointer to flat:FlatString:abstract_text$Text$first */
(nitmethod_t)core__fixed_ints_text___Text___to_num, /* pointer to flat:FlatString:fixed_ints_text$Text$to_num */
(nitmethod_t)core___core__Text___to_f, /* pointer to flat:FlatString:abstract_text$Text$to_f */
(nitmethod_t)core___core__Text___unescape_nit, /* pointer to flat:FlatString:abstract_text$Text$unescape_nit */
(nitmethod_t)core___core__Text___index_of_from, /* pointer to flat:FlatString:abstract_text$Text$index_of_from */
(nitmethod_t)core__bytes___Text___unescape_to_bytes, /* pointer to flat:FlatString:bytes$Text$unescape_to_bytes */
(nitmethod_t)core__bytes___Text___to_bytes, /* pointer to flat:FlatString:bytes$Text$to_bytes */
(nitmethod_t)core__fixed_ints_text___Text___is_num, /* pointer to flat:FlatString:fixed_ints_text$Text$is_num */
(nitmethod_t)core__fixed_ints_text___Text___get_numext, /* pointer to flat:FlatString:fixed_ints_text$Text$get_numext */
(nitmethod_t)core__fixed_ints_text___Text___strip_numext, /* pointer to flat:FlatString:fixed_ints_text$Text$strip_numext */
(nitmethod_t)core__bytes___FlatText___Text__append_to_bytes, /* pointer to flat:FlatString:bytes$FlatText$append_to_bytes */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text__to_upper, /* pointer to flat:FlatString:flat$FlatString$to_upper */
(nitmethod_t)core__environ___String___environ, /* pointer to flat:FlatString:environ$String$environ */
(nitmethod_t)core__file___String____47d, /* pointer to flat:FlatString:file$String$/ */
(nitmethod_t)core__file___String___join_path, /* pointer to flat:FlatString:file$String$join_path */
(nitmethod_t)core__file___String___strip_extension, /* pointer to flat:FlatString:file$String$strip_extension */
(nitmethod_t)core__file___FlatString___String__file_extension, /* pointer to flat:FlatString:file$FlatString$file_extension */
(nitmethod_t)core__file___FlatString___String__basename, /* pointer to flat:FlatString:file$FlatString$basename */
(nitmethod_t)core__file___String___simplify_path, /* pointer to flat:FlatString:file$String$simplify_path */
(nitmethod_t)core__file___String___dirname, /* pointer to flat:FlatString:file$String$dirname */
(nitmethod_t)core__file___String___file_stat, /* pointer to flat:FlatString:file$String$file_stat */
(nitmethod_t)core__file___String___files, /* pointer to flat:FlatString:file$String$files */
(nitmethod_t)core__file___String___realpath, /* pointer to flat:FlatString:file$String$realpath */
(nitmethod_t)core__file___String___relpath, /* pointer to flat:FlatString:file$String$relpath */
(nitmethod_t)core__file___String___mkdir, /* pointer to flat:FlatString:file$String$mkdir */
(nitmethod_t)core__file___String___file_copy_to, /* pointer to flat:FlatString:file$String$file_copy_to */
(nitmethod_t)core___core__FlatText___items, /* pointer to flat:FlatString:abstract_text$FlatText$items */
(nitmethod_t)core___core__FlatString___FlatText__first_byte, /* pointer to flat:FlatString:flat$FlatString$first_byte */
(nitmethod_t)core__flat___FlatText___fetch_char_at, /* pointer to flat:FlatString:flat$FlatText$fetch_char_at */
(nitmethod_t)core__flat___FlatText___char_to_byte_index, /* pointer to flat:FlatString:flat$FlatText$char_to_byte_index */
(nitmethod_t)core__flat___FlatText___last_byte, /* pointer to flat:FlatString:flat$FlatText$last_byte */
(nitmethod_t)core___core__FlatText___length_61d, /* pointer to flat:FlatString:abstract_text$FlatText$length= */
(nitmethod_t)core___core__FlatText___byte_length_61d, /* pointer to flat:FlatString:abstract_text$FlatText$byte_length= */
(nitmethod_t)core__flat___FlatText___chars_to_escape_to_c, /* pointer to flat:FlatString:flat$FlatText$chars_to_escape_to_c */
(nitmethod_t)core___core__FlatString___full, /* pointer to flat:FlatString:flat$FlatString$full */
(nitmethod_t)core___core__FlatString___with_infos, /* pointer to flat:FlatString:flat$FlatString$with_infos */
(nitmethod_t)core___core__FlatString___substring_impl, /* pointer to flat:FlatString:flat$FlatString$substring_impl */
(nitmethod_t)core___core__Text___core__kernel__Object___61d_61d, /* pointer to flat:FlatString:abstract_text$Text$== */
(nitmethod_t)core___core__Text___core__kernel__Comparable___60d, /* pointer to flat:FlatString:abstract_text$Text$< */
}
};
/* allocate FlatString */
val* NEW_core__FlatString(const struct type* type) {
val* self /* : FlatString */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__FlatString;
self->attrs[COLOR_core__abstract_text__FlatText___length].l = 0l; /* _length on <self:FlatString exact> */
self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = 0l; /* _byte_length on <self:FlatString exact> */
self->attrs[COLOR_core__flat__FlatText___position].l = 0l; /* _position on <self:FlatString exact> */
self->attrs[COLOR_core__flat__FlatText___bytepos].l = 0l; /* _bytepos on <self:FlatString exact> */
return self;
}
/* runtime class core__flat__UnicodeFlatString: core::flat::UnicodeFlatString (dead=false; need_corpse=false)*/
const struct class class_core__flat__UnicodeFlatString = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to flat:UnicodeFlatString:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to flat:UnicodeFlatString:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to flat:UnicodeFlatString:kernel$Object$sys */
(nitmethod_t)core___core__String___Object__to_s, /* pointer to flat:UnicodeFlatString:abstract_text$String$to_s */
(nitmethod_t)core___core__FlatString___core__kernel__Object___61d_61d, /* pointer to flat:UnicodeFlatString:flat$FlatString$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to flat:UnicodeFlatString:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to flat:UnicodeFlatString:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to flat:UnicodeFlatString:kernel$Object$object_id */
(nitmethod_t)core___core__FlatString___core__kernel__Object__hash, /* pointer to flat:UnicodeFlatString:flat$FlatString$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to flat:UnicodeFlatString:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to flat:UnicodeFlatString:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to flat:UnicodeFlatString:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Comparable____60d_61d, /* pointer to flat:UnicodeFlatString:kernel$Comparable$<= */
(nitmethod_t)core___core__Comparable____62d, /* pointer to flat:UnicodeFlatString:kernel$Comparable$> */
(nitmethod_t)core___core__Comparable____62d_61d, /* pointer to flat:UnicodeFlatString:kernel$Comparable$>= */
(nitmethod_t)core___core__FlatString___core__kernel__Comparable___60d, /* pointer to flat:UnicodeFlatString:flat$FlatString$< */
(nitmethod_t)core___core__Comparable____60d_61d_62d, /* pointer to flat:UnicodeFlatString:kernel$Comparable$<=> */
(nitmethod_t)core___core__Comparable___min, /* pointer to flat:UnicodeFlatString:kernel$Comparable$min */
(nitmethod_t)core___core__Comparable___max, /* pointer to flat:UnicodeFlatString:kernel$Comparable$max */
(nitmethod_t)core___core__String___core__kernel__Cloneable__clone, /* pointer to flat:UnicodeFlatString:abstract_text$String$clone */
(nitmethod_t)core___core__Pattern___split_in, /* pointer to flat:UnicodeFlatString:string_search$Pattern$split_in */
(nitmethod_t)core__string_search___Text___Pattern__search_in, /* pointer to flat:UnicodeFlatString:string_search$Text$search_in */
(nitmethod_t)core__string_search___Text___Pattern__search_index_in, /* pointer to flat:UnicodeFlatString:string_search$Text$search_index_in */
(nitmethod_t)core__fixed_ints_text___Text___to_i, /* pointer to flat:UnicodeFlatString:fixed_ints_text$Text$to_i */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text__to_cstring, /* pointer to flat:UnicodeFlatString:flat$FlatString$to_cstring */
(nitmethod_t)core___core__FlatText___Text__length, /* pointer to flat:UnicodeFlatString:abstract_text$FlatText$length */
(nitmethod_t)core__file___Text___file_exists, /* pointer to flat:UnicodeFlatString:file$Text$file_exists */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text__chars, /* pointer to flat:UnicodeFlatString:flat$FlatString$chars */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text__substring, /* pointer to flat:UnicodeFlatString:flat$FlatString$substring */
(nitmethod_t)core__fixed_ints_text___Text___is_int, /* pointer to flat:UnicodeFlatString:fixed_ints_text$Text$is_int */
(nitmethod_t)core__string_search___Text___remove_all, /* pointer to flat:UnicodeFlatString:string_search$Text$remove_all */
(nitmethod_t)core__flat___FlatText___core__abstract_text__Text___91d_93d, /* pointer to flat:UnicodeFlatString:flat$FlatText$[] */
(nitmethod_t)core__file___Writable___write_to_file, /* pointer to flat:UnicodeFlatString:file$Writable$write_to_file */
(nitmethod_t)core__stream___Text___Writable__write_to, /* pointer to flat:UnicodeFlatString:stream$Text$write_to */
(nitmethod_t)core__flat___core__flat__UnicodeFlatString___core__abstract_text__Text__substring_from, /* pointer to flat:UnicodeFlatString:flat$UnicodeFlatString$substring_from */
(nitmethod_t)core__flat___FlatText___core__abstract_text__Text__to_hex, /* pointer to flat:UnicodeFlatString:flat$FlatText$to_hex */
(nitmethod_t)core___core__Text___to_oct, /* pointer to flat:UnicodeFlatString:abstract_text$Text$to_oct */
(nitmethod_t)core___core__Text___to_bin, /* pointer to flat:UnicodeFlatString:abstract_text$Text$to_bin */
(nitmethod_t)core___core__Text___to_dec, /* pointer to flat:UnicodeFlatString:abstract_text$Text$to_dec */
(nitmethod_t)core__ropes___FlatString___core__abstract_text__Text___43d, /* pointer to flat:UnicodeFlatString:ropes$FlatString$+ */
(nitmethod_t)core___core__FlatText___Text__byte_length, /* pointer to flat:UnicodeFlatString:abstract_text$FlatText$byte_length */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text__substrings, /* pointer to flat:UnicodeFlatString:flat$FlatString$substrings */
(nitmethod_t)core___core__String___Text__to_snake_case, /* pointer to flat:UnicodeFlatString:abstract_text$String$to_snake_case */
(nitmethod_t)core___core__Text___is_empty, /* pointer to flat:UnicodeFlatString:abstract_text$Text$is_empty */
(nitmethod_t)core__string_search___Text___split_with, /* pointer to flat:UnicodeFlatString:string_search$Text$split_with */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text___42d, /* pointer to flat:UnicodeFlatString:flat$FlatString$* */
(nitmethod_t)core__fixed_ints_text___Text___strip_numhead, /* pointer to flat:UnicodeFlatString:fixed_ints_text$Text$strip_numhead */
(nitmethod_t)core__fixed_ints_text___Text___get_numhead, /* pointer to flat:UnicodeFlatString:fixed_ints_text$Text$get_numhead */
(nitmethod_t)core___core__Text___is_hex, /* pointer to flat:UnicodeFlatString:abstract_text$Text$is_hex */
(nitmethod_t)core___core__Text___is_bin, /* pointer to flat:UnicodeFlatString:abstract_text$Text$is_bin */
(nitmethod_t)core___core__Text___is_oct, /* pointer to flat:UnicodeFlatString:abstract_text$Text$is_oct */
(nitmethod_t)core___core__Text___is_dec, /* pointer to flat:UnicodeFlatString:abstract_text$Text$is_dec */
(nitmethod_t)core__string_search___Text___split, /* pointer to flat:UnicodeFlatString:string_search$Text$split */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text__empty, /* pointer to flat:UnicodeFlatString:flat$FlatString$empty */
(nitmethod_t)core___core__Text___a_to, /* pointer to flat:UnicodeFlatString:abstract_text$Text$a_to */
(nitmethod_t)core___core__Text___last, /* pointer to flat:UnicodeFlatString:abstract_text$Text$last */
(nitmethod_t)core___core__Text___hash_cache, /* pointer to flat:UnicodeFlatString:abstract_text$Text$hash_cache */
(nitmethod_t)core___core__Text___hash_cache_61d, /* pointer to flat:UnicodeFlatString:abstract_text$Text$hash_cache= */
(nitmethod_t)core___core__Text___is_lower, /* pointer to flat:UnicodeFlatString:abstract_text$Text$is_lower */
(nitmethod_t)core___core__Text___has_suffix, /* pointer to flat:UnicodeFlatString:abstract_text$Text$has_suffix */
(nitmethod_t)core__file___FlatString___Text__write_native_to, /* pointer to flat:UnicodeFlatString:file$FlatString$write_native_to */
(nitmethod_t)core___core__Text___to_cmangle, /* pointer to flat:UnicodeFlatString:abstract_text$Text$to_cmangle */
(nitmethod_t)core__string_search___Text___split_once_on, /* pointer to flat:UnicodeFlatString:string_search$Text$split_once_on */
(nitmethod_t)core___core__Text___is_numeric, /* pointer to flat:UnicodeFlatString:abstract_text$Text$is_numeric */
(nitmethod_t)core___core__Text___has_substring, /* pointer to flat:UnicodeFlatString:abstract_text$Text$has_substring */
(nitmethod_t)core___core__Text___levenshtein_distance, /* pointer to flat:UnicodeFlatString:abstract_text$Text$levenshtein_distance */
(nitmethod_t)core___core__Text___last_index_of_from, /* pointer to flat:UnicodeFlatString:abstract_text$Text$last_index_of_from */
(nitmethod_t)core___core__Text___has_prefix, /* pointer to flat:UnicodeFlatString:abstract_text$Text$has_prefix */
(nitmethod_t)core___core__Text___trim, /* pointer to flat:UnicodeFlatString:abstract_text$Text$trim */
(nitmethod_t)core__flat___FlatText___core__abstract_text__Text__escape_to_c, /* pointer to flat:UnicodeFlatString:flat$FlatText$escape_to_c */
(nitmethod_t)core__file___Text___to_path, /* pointer to flat:UnicodeFlatString:file$Text$to_path */
(nitmethod_t)core___core__Text___chomp, /* pointer to flat:UnicodeFlatString:abstract_text$Text$chomp */
(nitmethod_t)core___core__Text___r_trim, /* pointer to flat:UnicodeFlatString:abstract_text$Text$r_trim */
(nitmethod_t)core___core__Text___l_trim, /* pointer to flat:UnicodeFlatString:abstract_text$Text$l_trim */
(nitmethod_t)csv___core__Text___escape_to_csv, /* pointer to flat:UnicodeFlatString:csv$Text$escape_to_csv */
(nitmethod_t)core___core__Text___escape_to_sh, /* pointer to flat:UnicodeFlatString:abstract_text$Text$escape_to_sh */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text__to_lower, /* pointer to flat:UnicodeFlatString:flat$FlatString$to_lower */
(nitmethod_t)csv___core__Text___chars_to_escape_csv, /* pointer to flat:UnicodeFlatString:csv$Text$chars_to_escape_csv */
(nitmethod_t)core___core__Text___escape_to_mk, /* pointer to flat:UnicodeFlatString:abstract_text$Text$escape_to_mk */
(nitmethod_t)core__string_search___Text___replace, /* pointer to flat:UnicodeFlatString:string_search$Text$replace */
(nitmethod_t)core___core__Text___index_of, /* pointer to flat:UnicodeFlatString:abstract_text$Text$index_of */
(nitmethod_t)core___core__Text___last_index_of, /* pointer to flat:UnicodeFlatString:abstract_text$Text$last_index_of */
(nitmethod_t)core___core__Text___first, /* pointer to flat:UnicodeFlatString:abstract_text$Text$first */
(nitmethod_t)core__fixed_ints_text___Text___to_num, /* pointer to flat:UnicodeFlatString:fixed_ints_text$Text$to_num */
(nitmethod_t)core___core__Text___to_f, /* pointer to flat:UnicodeFlatString:abstract_text$Text$to_f */
(nitmethod_t)core___core__Text___unescape_nit, /* pointer to flat:UnicodeFlatString:abstract_text$Text$unescape_nit */
(nitmethod_t)core___core__Text___index_of_from, /* pointer to flat:UnicodeFlatString:abstract_text$Text$index_of_from */
(nitmethod_t)core__bytes___Text___unescape_to_bytes, /* pointer to flat:UnicodeFlatString:bytes$Text$unescape_to_bytes */
(nitmethod_t)core__bytes___Text___to_bytes, /* pointer to flat:UnicodeFlatString:bytes$Text$to_bytes */
(nitmethod_t)core__fixed_ints_text___Text___is_num, /* pointer to flat:UnicodeFlatString:fixed_ints_text$Text$is_num */
(nitmethod_t)core__fixed_ints_text___Text___get_numext, /* pointer to flat:UnicodeFlatString:fixed_ints_text$Text$get_numext */
(nitmethod_t)core__fixed_ints_text___Text___strip_numext, /* pointer to flat:UnicodeFlatString:fixed_ints_text$Text$strip_numext */
(nitmethod_t)core__bytes___FlatText___Text__append_to_bytes, /* pointer to flat:UnicodeFlatString:bytes$FlatText$append_to_bytes */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text__to_upper, /* pointer to flat:UnicodeFlatString:flat$FlatString$to_upper */
(nitmethod_t)core__environ___String___environ, /* pointer to flat:UnicodeFlatString:environ$String$environ */
(nitmethod_t)core__file___String____47d, /* pointer to flat:UnicodeFlatString:file$String$/ */
(nitmethod_t)core__file___String___join_path, /* pointer to flat:UnicodeFlatString:file$String$join_path */
(nitmethod_t)core__file___String___strip_extension, /* pointer to flat:UnicodeFlatString:file$String$strip_extension */
(nitmethod_t)core__file___FlatString___String__file_extension, /* pointer to flat:UnicodeFlatString:file$FlatString$file_extension */
(nitmethod_t)core__file___FlatString___String__basename, /* pointer to flat:UnicodeFlatString:file$FlatString$basename */
(nitmethod_t)core__file___String___simplify_path, /* pointer to flat:UnicodeFlatString:file$String$simplify_path */
(nitmethod_t)core__file___String___dirname, /* pointer to flat:UnicodeFlatString:file$String$dirname */
(nitmethod_t)core__file___String___file_stat, /* pointer to flat:UnicodeFlatString:file$String$file_stat */
(nitmethod_t)core__file___String___files, /* pointer to flat:UnicodeFlatString:file$String$files */
(nitmethod_t)core__file___String___realpath, /* pointer to flat:UnicodeFlatString:file$String$realpath */
(nitmethod_t)core__file___String___relpath, /* pointer to flat:UnicodeFlatString:file$String$relpath */
(nitmethod_t)core__file___String___mkdir, /* pointer to flat:UnicodeFlatString:file$String$mkdir */
(nitmethod_t)core__file___String___file_copy_to, /* pointer to flat:UnicodeFlatString:file$String$file_copy_to */
(nitmethod_t)core___core__FlatText___items, /* pointer to flat:UnicodeFlatString:abstract_text$FlatText$items */
(nitmethod_t)core___core__FlatString___FlatText__first_byte, /* pointer to flat:UnicodeFlatString:flat$FlatString$first_byte */
(nitmethod_t)core__flat___FlatText___fetch_char_at, /* pointer to flat:UnicodeFlatString:flat$FlatText$fetch_char_at */
(nitmethod_t)core__flat___FlatText___char_to_byte_index, /* pointer to flat:UnicodeFlatString:flat$FlatText$char_to_byte_index */
(nitmethod_t)core__flat___FlatText___last_byte, /* pointer to flat:UnicodeFlatString:flat$FlatText$last_byte */
(nitmethod_t)core___core__FlatText___length_61d, /* pointer to flat:UnicodeFlatString:abstract_text$FlatText$length= */
(nitmethod_t)core___core__FlatText___byte_length_61d, /* pointer to flat:UnicodeFlatString:abstract_text$FlatText$byte_length= */
(nitmethod_t)core__flat___FlatText___chars_to_escape_to_c, /* pointer to flat:UnicodeFlatString:flat$FlatText$chars_to_escape_to_c */
(nitmethod_t)core___core__FlatString___full, /* pointer to flat:UnicodeFlatString:flat$FlatString$full */
(nitmethod_t)core___core__FlatString___with_infos, /* pointer to flat:UnicodeFlatString:flat$FlatString$with_infos */
(nitmethod_t)core___core__FlatString___substring_impl, /* pointer to flat:UnicodeFlatString:flat$FlatString$substring_impl */
(nitmethod_t)core___core__Text___core__kernel__Object___61d_61d, /* pointer to flat:UnicodeFlatString:abstract_text$Text$== */
(nitmethod_t)core___core__Text___core__kernel__Comparable___60d, /* pointer to flat:UnicodeFlatString:abstract_text$Text$< */
(nitmethod_t)core__flat___core__flat__UnicodeFlatString___full_data, /* pointer to flat:UnicodeFlatString:flat$UnicodeFlatString$full_data */
}
};
/* allocate UnicodeFlatString */
val* NEW_core__flat__UnicodeFlatString(const struct type* type) {
val* self /* : UnicodeFlatString */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__flat__UnicodeFlatString;
self->attrs[COLOR_core__abstract_text__FlatText___length].l = 0l; /* _length on <self:UnicodeFlatString exact> */
self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = 0l; /* _byte_length on <self:UnicodeFlatString exact> */
self->attrs[COLOR_core__flat__FlatText___position].l = 0l; /* _position on <self:UnicodeFlatString exact> */
self->attrs[COLOR_core__flat__FlatText___bytepos].l = 0l; /* _bytepos on <self:UnicodeFlatString exact> */
return self;
}
/* runtime class core__flat__ASCIIFlatString: core::flat::ASCIIFlatString (dead=false; need_corpse=false)*/
const struct class class_core__flat__ASCIIFlatString = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to flat:ASCIIFlatString:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to flat:ASCIIFlatString:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to flat:ASCIIFlatString:kernel$Object$sys */
(nitmethod_t)core___core__String___Object__to_s, /* pointer to flat:ASCIIFlatString:abstract_text$String$to_s */
(nitmethod_t)core___core__FlatString___core__kernel__Object___61d_61d, /* pointer to flat:ASCIIFlatString:flat$FlatString$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to flat:ASCIIFlatString:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to flat:ASCIIFlatString:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to flat:ASCIIFlatString:kernel$Object$object_id */
(nitmethod_t)core___core__FlatString___core__kernel__Object__hash, /* pointer to flat:ASCIIFlatString:flat$FlatString$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to flat:ASCIIFlatString:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to flat:ASCIIFlatString:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to flat:ASCIIFlatString:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Comparable____60d_61d, /* pointer to flat:ASCIIFlatString:kernel$Comparable$<= */
(nitmethod_t)core___core__Comparable____62d, /* pointer to flat:ASCIIFlatString:kernel$Comparable$> */
(nitmethod_t)core___core__Comparable____62d_61d, /* pointer to flat:ASCIIFlatString:kernel$Comparable$>= */
(nitmethod_t)core___core__FlatString___core__kernel__Comparable___60d, /* pointer to flat:ASCIIFlatString:flat$FlatString$< */
(nitmethod_t)core___core__Comparable____60d_61d_62d, /* pointer to flat:ASCIIFlatString:kernel$Comparable$<=> */
(nitmethod_t)core___core__Comparable___min, /* pointer to flat:ASCIIFlatString:kernel$Comparable$min */
(nitmethod_t)core___core__Comparable___max, /* pointer to flat:ASCIIFlatString:kernel$Comparable$max */
(nitmethod_t)core___core__String___core__kernel__Cloneable__clone, /* pointer to flat:ASCIIFlatString:abstract_text$String$clone */
(nitmethod_t)core___core__Pattern___split_in, /* pointer to flat:ASCIIFlatString:string_search$Pattern$split_in */
(nitmethod_t)core__string_search___Text___Pattern__search_in, /* pointer to flat:ASCIIFlatString:string_search$Text$search_in */
(nitmethod_t)core__string_search___Text___Pattern__search_index_in, /* pointer to flat:ASCIIFlatString:string_search$Text$search_index_in */
(nitmethod_t)core__fixed_ints_text___Text___to_i, /* pointer to flat:ASCIIFlatString:fixed_ints_text$Text$to_i */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text__to_cstring, /* pointer to flat:ASCIIFlatString:flat$FlatString$to_cstring */
(nitmethod_t)core___core__FlatText___Text__length, /* pointer to flat:ASCIIFlatString:abstract_text$FlatText$length */
(nitmethod_t)core__file___Text___file_exists, /* pointer to flat:ASCIIFlatString:file$Text$file_exists */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text__chars, /* pointer to flat:ASCIIFlatString:flat$FlatString$chars */
(nitmethod_t)core__flat___core__flat__ASCIIFlatString___core__abstract_text__Text__substring, /* pointer to flat:ASCIIFlatString:flat$ASCIIFlatString$substring */
(nitmethod_t)core__fixed_ints_text___Text___is_int, /* pointer to flat:ASCIIFlatString:fixed_ints_text$Text$is_int */
(nitmethod_t)core__string_search___Text___remove_all, /* pointer to flat:ASCIIFlatString:string_search$Text$remove_all */
(nitmethod_t)core__flat___core__flat__ASCIIFlatString___core__abstract_text__Text___91d_93d, /* pointer to flat:ASCIIFlatString:flat$ASCIIFlatString$[] */
(nitmethod_t)core__file___Writable___write_to_file, /* pointer to flat:ASCIIFlatString:file$Writable$write_to_file */
(nitmethod_t)core__stream___Text___Writable__write_to, /* pointer to flat:ASCIIFlatString:stream$Text$write_to */
(nitmethod_t)core___core__Text___substring_from, /* pointer to flat:ASCIIFlatString:abstract_text$Text$substring_from */
(nitmethod_t)core__flat___FlatText___core__abstract_text__Text__to_hex, /* pointer to flat:ASCIIFlatString:flat$FlatText$to_hex */
(nitmethod_t)core___core__Text___to_oct, /* pointer to flat:ASCIIFlatString:abstract_text$Text$to_oct */
(nitmethod_t)core___core__Text___to_bin, /* pointer to flat:ASCIIFlatString:abstract_text$Text$to_bin */
(nitmethod_t)core___core__Text___to_dec, /* pointer to flat:ASCIIFlatString:abstract_text$Text$to_dec */
(nitmethod_t)core__ropes___FlatString___core__abstract_text__Text___43d, /* pointer to flat:ASCIIFlatString:ropes$FlatString$+ */
(nitmethod_t)core___core__FlatText___Text__byte_length, /* pointer to flat:ASCIIFlatString:abstract_text$FlatText$byte_length */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text__substrings, /* pointer to flat:ASCIIFlatString:flat$FlatString$substrings */
(nitmethod_t)core___core__String___Text__to_snake_case, /* pointer to flat:ASCIIFlatString:abstract_text$String$to_snake_case */
(nitmethod_t)core___core__Text___is_empty, /* pointer to flat:ASCIIFlatString:abstract_text$Text$is_empty */
(nitmethod_t)core__string_search___Text___split_with, /* pointer to flat:ASCIIFlatString:string_search$Text$split_with */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text___42d, /* pointer to flat:ASCIIFlatString:flat$FlatString$* */
(nitmethod_t)core__fixed_ints_text___Text___strip_numhead, /* pointer to flat:ASCIIFlatString:fixed_ints_text$Text$strip_numhead */
(nitmethod_t)core__fixed_ints_text___Text___get_numhead, /* pointer to flat:ASCIIFlatString:fixed_ints_text$Text$get_numhead */
(nitmethod_t)core___core__Text___is_hex, /* pointer to flat:ASCIIFlatString:abstract_text$Text$is_hex */
(nitmethod_t)core___core__Text___is_bin, /* pointer to flat:ASCIIFlatString:abstract_text$Text$is_bin */
(nitmethod_t)core___core__Text___is_oct, /* pointer to flat:ASCIIFlatString:abstract_text$Text$is_oct */
(nitmethod_t)core___core__Text___is_dec, /* pointer to flat:ASCIIFlatString:abstract_text$Text$is_dec */
(nitmethod_t)core__string_search___Text___split, /* pointer to flat:ASCIIFlatString:string_search$Text$split */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text__empty, /* pointer to flat:ASCIIFlatString:flat$FlatString$empty */
(nitmethod_t)core___core__Text___a_to, /* pointer to flat:ASCIIFlatString:abstract_text$Text$a_to */
(nitmethod_t)core___core__Text___last, /* pointer to flat:ASCIIFlatString:abstract_text$Text$last */
(nitmethod_t)core___core__Text___hash_cache, /* pointer to flat:ASCIIFlatString:abstract_text$Text$hash_cache */
(nitmethod_t)core___core__Text___hash_cache_61d, /* pointer to flat:ASCIIFlatString:abstract_text$Text$hash_cache= */
(nitmethod_t)core___core__Text___is_lower, /* pointer to flat:ASCIIFlatString:abstract_text$Text$is_lower */
(nitmethod_t)core___core__Text___has_suffix, /* pointer to flat:ASCIIFlatString:abstract_text$Text$has_suffix */
(nitmethod_t)core__file___FlatString___Text__write_native_to, /* pointer to flat:ASCIIFlatString:file$FlatString$write_native_to */
(nitmethod_t)core___core__Text___to_cmangle, /* pointer to flat:ASCIIFlatString:abstract_text$Text$to_cmangle */
(nitmethod_t)core__string_search___Text___split_once_on, /* pointer to flat:ASCIIFlatString:string_search$Text$split_once_on */
(nitmethod_t)core___core__Text___is_numeric, /* pointer to flat:ASCIIFlatString:abstract_text$Text$is_numeric */
(nitmethod_t)core___core__Text___has_substring, /* pointer to flat:ASCIIFlatString:abstract_text$Text$has_substring */
(nitmethod_t)core___core__Text___levenshtein_distance, /* pointer to flat:ASCIIFlatString:abstract_text$Text$levenshtein_distance */
(nitmethod_t)core___core__Text___last_index_of_from, /* pointer to flat:ASCIIFlatString:abstract_text$Text$last_index_of_from */
(nitmethod_t)core___core__Text___has_prefix, /* pointer to flat:ASCIIFlatString:abstract_text$Text$has_prefix */
(nitmethod_t)core___core__Text___trim, /* pointer to flat:ASCIIFlatString:abstract_text$Text$trim */
(nitmethod_t)core__flat___FlatText___core__abstract_text__Text__escape_to_c, /* pointer to flat:ASCIIFlatString:flat$FlatText$escape_to_c */
(nitmethod_t)core__file___Text___to_path, /* pointer to flat:ASCIIFlatString:file$Text$to_path */
(nitmethod_t)core___core__Text___chomp, /* pointer to flat:ASCIIFlatString:abstract_text$Text$chomp */
(nitmethod_t)core___core__Text___r_trim, /* pointer to flat:ASCIIFlatString:abstract_text$Text$r_trim */
(nitmethod_t)core___core__Text___l_trim, /* pointer to flat:ASCIIFlatString:abstract_text$Text$l_trim */
(nitmethod_t)csv___core__Text___escape_to_csv, /* pointer to flat:ASCIIFlatString:csv$Text$escape_to_csv */
(nitmethod_t)core___core__Text___escape_to_sh, /* pointer to flat:ASCIIFlatString:abstract_text$Text$escape_to_sh */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text__to_lower, /* pointer to flat:ASCIIFlatString:flat$FlatString$to_lower */
(nitmethod_t)csv___core__Text___chars_to_escape_csv, /* pointer to flat:ASCIIFlatString:csv$Text$chars_to_escape_csv */
(nitmethod_t)core___core__Text___escape_to_mk, /* pointer to flat:ASCIIFlatString:abstract_text$Text$escape_to_mk */
(nitmethod_t)core__string_search___Text___replace, /* pointer to flat:ASCIIFlatString:string_search$Text$replace */
(nitmethod_t)core___core__Text___index_of, /* pointer to flat:ASCIIFlatString:abstract_text$Text$index_of */
(nitmethod_t)core___core__Text___last_index_of, /* pointer to flat:ASCIIFlatString:abstract_text$Text$last_index_of */
(nitmethod_t)core___core__Text___first, /* pointer to flat:ASCIIFlatString:abstract_text$Text$first */
(nitmethod_t)core__fixed_ints_text___Text___to_num, /* pointer to flat:ASCIIFlatString:fixed_ints_text$Text$to_num */
(nitmethod_t)core___core__Text___to_f, /* pointer to flat:ASCIIFlatString:abstract_text$Text$to_f */
(nitmethod_t)core___core__Text___unescape_nit, /* pointer to flat:ASCIIFlatString:abstract_text$Text$unescape_nit */
(nitmethod_t)core___core__Text___index_of_from, /* pointer to flat:ASCIIFlatString:abstract_text$Text$index_of_from */
(nitmethod_t)core__bytes___Text___unescape_to_bytes, /* pointer to flat:ASCIIFlatString:bytes$Text$unescape_to_bytes */
(nitmethod_t)core__bytes___Text___to_bytes, /* pointer to flat:ASCIIFlatString:bytes$Text$to_bytes */
(nitmethod_t)core__fixed_ints_text___Text___is_num, /* pointer to flat:ASCIIFlatString:fixed_ints_text$Text$is_num */
(nitmethod_t)core__fixed_ints_text___Text___get_numext, /* pointer to flat:ASCIIFlatString:fixed_ints_text$Text$get_numext */
(nitmethod_t)core__fixed_ints_text___Text___strip_numext, /* pointer to flat:ASCIIFlatString:fixed_ints_text$Text$strip_numext */
(nitmethod_t)core__bytes___FlatText___Text__append_to_bytes, /* pointer to flat:ASCIIFlatString:bytes$FlatText$append_to_bytes */
(nitmethod_t)core___core__FlatString___core__abstract_text__Text__to_upper, /* pointer to flat:ASCIIFlatString:flat$FlatString$to_upper */
(nitmethod_t)core__environ___String___environ, /* pointer to flat:ASCIIFlatString:environ$String$environ */
(nitmethod_t)core__file___String____47d, /* pointer to flat:ASCIIFlatString:file$String$/ */
(nitmethod_t)core__file___String___join_path, /* pointer to flat:ASCIIFlatString:file$String$join_path */
(nitmethod_t)core__file___String___strip_extension, /* pointer to flat:ASCIIFlatString:file$String$strip_extension */
(nitmethod_t)core__file___FlatString___String__file_extension, /* pointer to flat:ASCIIFlatString:file$FlatString$file_extension */
(nitmethod_t)core__file___FlatString___String__basename, /* pointer to flat:ASCIIFlatString:file$FlatString$basename */
(nitmethod_t)core__file___String___simplify_path, /* pointer to flat:ASCIIFlatString:file$String$simplify_path */
(nitmethod_t)core__file___String___dirname, /* pointer to flat:ASCIIFlatString:file$String$dirname */
(nitmethod_t)core__file___String___file_stat, /* pointer to flat:ASCIIFlatString:file$String$file_stat */
(nitmethod_t)core__file___String___files, /* pointer to flat:ASCIIFlatString:file$String$files */
(nitmethod_t)core__file___String___realpath, /* pointer to flat:ASCIIFlatString:file$String$realpath */
(nitmethod_t)core__file___String___relpath, /* pointer to flat:ASCIIFlatString:file$String$relpath */
(nitmethod_t)core__file___String___mkdir, /* pointer to flat:ASCIIFlatString:file$String$mkdir */
(nitmethod_t)core__file___String___file_copy_to, /* pointer to flat:ASCIIFlatString:file$String$file_copy_to */
(nitmethod_t)core___core__FlatText___items, /* pointer to flat:ASCIIFlatString:abstract_text$FlatText$items */
(nitmethod_t)core___core__FlatString___FlatText__first_byte, /* pointer to flat:ASCIIFlatString:flat$FlatString$first_byte */
(nitmethod_t)core__flat___core__flat__ASCIIFlatString___FlatText__fetch_char_at, /* pointer to flat:ASCIIFlatString:flat$ASCIIFlatString$fetch_char_at */
(nitmethod_t)core__flat___core__flat__ASCIIFlatString___FlatText__char_to_byte_index, /* pointer to flat:ASCIIFlatString:flat$ASCIIFlatString$char_to_byte_index */
(nitmethod_t)core__flat___FlatText___last_byte, /* pointer to flat:ASCIIFlatString:flat$FlatText$last_byte */
(nitmethod_t)core___core__FlatText___length_61d, /* pointer to flat:ASCIIFlatString:abstract_text$FlatText$length= */
(nitmethod_t)core___core__FlatText___byte_length_61d, /* pointer to flat:ASCIIFlatString:abstract_text$FlatText$byte_length= */
(nitmethod_t)core__flat___FlatText___chars_to_escape_to_c, /* pointer to flat:ASCIIFlatString:flat$FlatText$chars_to_escape_to_c */
(nitmethod_t)core___core__FlatString___full, /* pointer to flat:ASCIIFlatString:flat$FlatString$full */
(nitmethod_t)core___core__FlatString___with_infos, /* pointer to flat:ASCIIFlatString:flat$FlatString$with_infos */
(nitmethod_t)core__flat___core__flat__ASCIIFlatString___FlatString__substring_impl, /* pointer to flat:ASCIIFlatString:flat$ASCIIFlatString$substring_impl */
(nitmethod_t)core___core__Text___core__kernel__Object___61d_61d, /* pointer to flat:ASCIIFlatString:abstract_text$Text$== */
(nitmethod_t)core___core__Text___core__kernel__Comparable___60d, /* pointer to flat:ASCIIFlatString:abstract_text$Text$< */
(nitmethod_t)core__flat___core__flat__ASCIIFlatString___full_data, /* pointer to flat:ASCIIFlatString:flat$ASCIIFlatString$full_data */
}
};
/* allocate ASCIIFlatString */
val* NEW_core__flat__ASCIIFlatString(const struct type* type) {
val* self /* : ASCIIFlatString */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__flat__ASCIIFlatString;
self->attrs[COLOR_core__abstract_text__FlatText___length].l = 0l; /* _length on <self:ASCIIFlatString exact> */
self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = 0l; /* _byte_length on <self:ASCIIFlatString exact> */
self->attrs[COLOR_core__flat__FlatText___position].l = 0l; /* _position on <self:ASCIIFlatString exact> */
self->attrs[COLOR_core__flat__FlatText___bytepos].l = 0l; /* _bytepos on <self:ASCIIFlatString exact> */
return self;
}
/* runtime class core__flat__FlatStringCharReverseIterator: core::flat::FlatStringCharReverseIterator (dead=false; need_corpse=false)*/
const struct class class_core__flat__FlatStringCharReverseIterator = {
0, /* box_kind */
{
(nitmethod_t)core__flat___core__flat__FlatStringCharReverseIterator___core__kernel__Object__init, /* pointer to flat:FlatStringCharReverseIterator:flat$FlatStringCharReverseIterator$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to flat:FlatStringCharReverseIterator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to flat:FlatStringCharReverseIterator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to flat:FlatStringCharReverseIterator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to flat:FlatStringCharReverseIterator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to flat:FlatStringCharReverseIterator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to flat:FlatStringCharReverseIterator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to flat:FlatStringCharReverseIterator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to flat:FlatStringCharReverseIterator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to flat:FlatStringCharReverseIterator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to flat:FlatStringCharReverseIterator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to flat:FlatStringCharReverseIterator:abstract_text$Object$native_class_name */
(nitmethod_t)core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__Iterator__is_ok, /* pointer to flat:FlatStringCharReverseIterator:flat$FlatStringCharReverseIterator$is_ok */
(nitmethod_t)VIRTUAL_core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__Iterator__item, /* pointer to flat:FlatStringCharReverseIterator:flat$FlatStringCharReverseIterator$item */
(nitmethod_t)core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__Iterator__next, /* pointer to flat:FlatStringCharReverseIterator:flat$FlatStringCharReverseIterator$next */
(nitmethod_t)core___core__Iterator___finish, /* pointer to flat:FlatStringCharReverseIterator:abstract_collection$Iterator$finish */
(nitmethod_t)core___core__Iterator___iterator, /* pointer to flat:FlatStringCharReverseIterator:abstract_collection$Iterator$iterator */
(nitmethod_t)core__array___Iterator___to_a, /* pointer to flat:FlatStringCharReverseIterator:array$Iterator$to_a */
(nitmethod_t)core__flat___core__flat__FlatStringCharReverseIterator___core__abstract_collection__IndexedIterator__index, /* pointer to flat:FlatStringCharReverseIterator:flat$FlatStringCharReverseIterator$index */
(nitmethod_t)core__flat___core__flat__FlatStringCharReverseIterator___target_61d, /* pointer to flat:FlatStringCharReverseIterator:flat$FlatStringCharReverseIterator$target= */
(nitmethod_t)core__flat___core__flat__FlatStringCharReverseIterator___curr_pos_61d, /* pointer to flat:FlatStringCharReverseIterator:flat$FlatStringCharReverseIterator$curr_pos= */
(nitmethod_t)core__flat___core__flat__FlatStringCharReverseIterator___curr_pos, /* pointer to flat:FlatStringCharReverseIterator:flat$FlatStringCharReverseIterator$curr_pos */
(nitmethod_t)core__flat___core__flat__FlatStringCharReverseIterator___target, /* pointer to flat:FlatStringCharReverseIterator:flat$FlatStringCharReverseIterator$target */
(nitmethod_t)core___core__Object___init, /* pointer to flat:FlatStringCharReverseIterator:kernel$Object$init */
}
};
/* allocate FlatStringCharReverseIterator */
val* NEW_core__flat__FlatStringCharReverseIterator(const struct type* type) {
val* self /* : FlatStringCharReverseIterator */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__flat__FlatStringCharReverseIterator;
return self;
}
/* runtime class core__flat__FlatStringCharIterator: core::flat::FlatStringCharIterator (dead=false; need_corpse=false)*/
const struct class class_core__flat__FlatStringCharIterator = {
0, /* box_kind */
{
(nitmethod_t)core__flat___core__flat__FlatStringCharIterator___core__kernel__Object__init, /* pointer to flat:FlatStringCharIterator:flat$FlatStringCharIterator$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to flat:FlatStringCharIterator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to flat:FlatStringCharIterator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to flat:FlatStringCharIterator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to flat:FlatStringCharIterator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to flat:FlatStringCharIterator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to flat:FlatStringCharIterator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to flat:FlatStringCharIterator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to flat:FlatStringCharIterator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to flat:FlatStringCharIterator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to flat:FlatStringCharIterator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to flat:FlatStringCharIterator:abstract_text$Object$native_class_name */
(nitmethod_t)core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__Iterator__is_ok, /* pointer to flat:FlatStringCharIterator:flat$FlatStringCharIterator$is_ok */
(nitmethod_t)VIRTUAL_core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__Iterator__item, /* pointer to flat:FlatStringCharIterator:flat$FlatStringCharIterator$item */
(nitmethod_t)core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__Iterator__next, /* pointer to flat:FlatStringCharIterator:flat$FlatStringCharIterator$next */
(nitmethod_t)core___core__Iterator___finish, /* pointer to flat:FlatStringCharIterator:abstract_collection$Iterator$finish */
(nitmethod_t)core___core__Iterator___iterator, /* pointer to flat:FlatStringCharIterator:abstract_collection$Iterator$iterator */
(nitmethod_t)core__array___Iterator___to_a, /* pointer to flat:FlatStringCharIterator:array$Iterator$to_a */
(nitmethod_t)core__flat___core__flat__FlatStringCharIterator___core__abstract_collection__IndexedIterator__index, /* pointer to flat:FlatStringCharIterator:flat$FlatStringCharIterator$index */
(nitmethod_t)core__flat___core__flat__FlatStringCharIterator___target_61d, /* pointer to flat:FlatStringCharIterator:flat$FlatStringCharIterator$target= */
(nitmethod_t)core__flat___core__flat__FlatStringCharIterator___curr_pos_61d, /* pointer to flat:FlatStringCharIterator:flat$FlatStringCharIterator$curr_pos= */
(nitmethod_t)core__flat___core__flat__FlatStringCharIterator___max_61d, /* pointer to flat:FlatStringCharIterator:flat$FlatStringCharIterator$max= */
(nitmethod_t)core__flat___core__flat__FlatStringCharIterator___target, /* pointer to flat:FlatStringCharIterator:flat$FlatStringCharIterator$target */
(nitmethod_t)core__flat___core__flat__FlatStringCharIterator___curr_pos, /* pointer to flat:FlatStringCharIterator:flat$FlatStringCharIterator$curr_pos */
(nitmethod_t)core__flat___core__flat__FlatStringCharIterator___max, /* pointer to flat:FlatStringCharIterator:flat$FlatStringCharIterator$max */
(nitmethod_t)core___core__Object___init, /* pointer to flat:FlatStringCharIterator:kernel$Object$init */
}
};
/* allocate FlatStringCharIterator */
val* NEW_core__flat__FlatStringCharIterator(const struct type* type) {
val* self /* : FlatStringCharIterator */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__flat__FlatStringCharIterator;
return self;
}
/* runtime class core__flat__FlatStringCharView: core::flat::FlatStringCharView (dead=false; need_corpse=false)*/
const struct class class_core__flat__FlatStringCharView = {
0, /* box_kind */
{
(nitmethod_t)core__abstract_text___core__abstract_text__StringCharView___core__kernel__Object__init, /* pointer to flat:FlatStringCharView:abstract_text$StringCharView$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to flat:FlatStringCharView:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to flat:FlatStringCharView:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Collection___Object__to_s, /* pointer to flat:FlatStringCharView:abstract_text$Collection$to_s */
(nitmethod_t)core___core__SequenceRead___core__kernel__Object___61d_61d, /* pointer to flat:FlatStringCharView:abstract_collection$SequenceRead$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to flat:FlatStringCharView:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to flat:FlatStringCharView:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to flat:FlatStringCharView:kernel$Object$object_id */
(nitmethod_t)core___core__SequenceRead___core__kernel__Object__hash, /* pointer to flat:FlatStringCharView:abstract_collection$SequenceRead$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to flat:FlatStringCharView:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to flat:FlatStringCharView:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to flat:FlatStringCharView:abstract_text$Object$native_class_name */
(nitmethod_t)core__abstract_text___core__abstract_text__StringCharView___target_61d, /* pointer to flat:FlatStringCharView:abstract_text$StringCharView$target= */
(nitmethod_t)core__abstract_text___core__abstract_text__StringCharView___target, /* pointer to flat:FlatStringCharView:abstract_text$StringCharView$target */
(nitmethod_t)core___core__Object___init, /* pointer to flat:FlatStringCharView:kernel$Object$init */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core__abstract_text___Collection___join, /* pointer to flat:FlatStringCharView:abstract_text$Collection$join */
(nitmethod_t)core__array___Collection___to_a, /* pointer to flat:FlatStringCharView:array$Collection$to_a */
(nitmethod_t)core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__length, /* pointer to flat:FlatStringCharView:abstract_text$StringCharView$length */
(nitmethod_t)core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__is_empty, /* pointer to flat:FlatStringCharView:abstract_text$StringCharView$is_empty */
(nitmethod_t)core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__iterator, /* pointer to flat:FlatStringCharView:abstract_text$StringCharView$iterator */
(nitmethod_t)core___core__Collection___has_exactly, /* pointer to flat:FlatStringCharView:abstract_collection$Collection$has_exactly */
(nitmethod_t)core___core__Collection___has_all, /* pointer to flat:FlatStringCharView:abstract_collection$Collection$has_all */
(nitmethod_t)core___core__Collection___has, /* pointer to flat:FlatStringCharView:abstract_collection$Collection$has */
(nitmethod_t)core___core__Collection___count, /* pointer to flat:FlatStringCharView:abstract_collection$Collection$count */
(nitmethod_t)core___core__SequenceRead___Collection__first, /* pointer to flat:FlatStringCharView:abstract_collection$SequenceRead$first */
(nitmethod_t)core___core__Collection___not_empty, /* pointer to flat:FlatStringCharView:abstract_collection$Collection$not_empty */
(nitmethod_t)core__abstract_text___Collection___plain_to_s, /* pointer to flat:FlatStringCharView:abstract_text$Collection$plain_to_s */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_core__flat___core__flat__FlatStringCharView___core__abstract_collection__SequenceRead___91d_93d, /* pointer to flat:FlatStringCharView:flat$FlatStringCharView$[] */
(nitmethod_t)core__flat___core__flat__FlatStringCharView___core__abstract_collection__SequenceRead__iterator_from, /* pointer to flat:FlatStringCharView:flat$FlatStringCharView$iterator_from */
(nitmethod_t)core___core__SequenceRead___index_of, /* pointer to flat:FlatStringCharView:abstract_collection$SequenceRead$index_of */
(nitmethod_t)core___core__SequenceRead___last_index_of, /* pointer to flat:FlatStringCharView:abstract_collection$SequenceRead$last_index_of */
(nitmethod_t)core___core__SequenceRead___last, /* pointer to flat:FlatStringCharView:abstract_collection$SequenceRead$last */
(nitmethod_t)core___core__SequenceRead___index_of_from, /* pointer to flat:FlatStringCharView:abstract_collection$SequenceRead$index_of_from */
(nitmethod_t)core___core__SequenceRead___last_index_of_from, /* pointer to flat:FlatStringCharView:abstract_collection$SequenceRead$last_index_of_from */
(nitmethod_t)core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__SequenceRead__reverse_iterator, /* pointer to flat:FlatStringCharView:abstract_text$StringCharView$reverse_iterator */
(nitmethod_t)core__flat___core__flat__FlatStringCharView___core__abstract_collection__SequenceRead__reverse_iterator_from, /* pointer to flat:FlatStringCharView:flat$FlatStringCharView$reverse_iterator_from */
}
};
/* allocate FlatStringCharView */
val* NEW_core__flat__FlatStringCharView(const struct type* type) {
val* self /* : FlatStringCharView */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__flat__FlatStringCharView;
return self;
}
/* runtime class core__flat__FlatStringByteReverseIterator: core::flat::FlatStringByteReverseIterator (dead=true; need_corpse=false)*/
/* allocate FlatStringByteReverseIterator */
val* NEW_core__flat__FlatStringByteReverseIterator(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FlatStringByteReverseIterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__flat__FlatStringByteIterator: core::flat::FlatStringByteIterator (dead=true; need_corpse=false)*/
/* allocate FlatStringByteIterator */
val* NEW_core__flat__FlatStringByteIterator(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FlatStringByteIterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__flat__FlatStringByteView: core::flat::FlatStringByteView (dead=true; need_corpse=false)*/
/* allocate FlatStringByteView */
val* NEW_core__flat__FlatStringByteView(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FlatStringByteView is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__FlatBuffer: core::FlatBuffer (dead=false; need_corpse=false)*/
const struct class class_core__FlatBuffer = {
0, /* box_kind */
{
(nitmethod_t)core___core__FlatBuffer___core__kernel__Object__init, /* pointer to flat:FlatBuffer:flat$FlatBuffer$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to flat:FlatBuffer:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to flat:FlatBuffer:kernel$Object$sys */
(nitmethod_t)core___core__FlatBuffer___core__abstract_text__Object__to_s, /* pointer to flat:FlatBuffer:flat$FlatBuffer$to_s */
(nitmethod_t)core___core__Text___core__kernel__Object___61d_61d, /* pointer to flat:FlatBuffer:abstract_text$Text$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to flat:FlatBuffer:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to flat:FlatBuffer:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to flat:FlatBuffer:kernel$Object$object_id */
(nitmethod_t)core___core__Text___core__kernel__Object__hash, /* pointer to flat:FlatBuffer:abstract_text$Text$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to flat:FlatBuffer:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to flat:FlatBuffer:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to flat:FlatBuffer:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Comparable____60d_61d, /* pointer to flat:FlatBuffer:kernel$Comparable$<= */
(nitmethod_t)core___core__Comparable____62d, /* pointer to flat:FlatBuffer:kernel$Comparable$> */
(nitmethod_t)core___core__Comparable____62d_61d, /* pointer to flat:FlatBuffer:kernel$Comparable$>= */
(nitmethod_t)core___core__Text___core__kernel__Comparable___60d, /* pointer to flat:FlatBuffer:abstract_text$Text$< */
(nitmethod_t)core___core__Comparable____60d_61d_62d, /* pointer to flat:FlatBuffer:kernel$Comparable$<=> */
(nitmethod_t)core___core__Comparable___min, /* pointer to flat:FlatBuffer:kernel$Comparable$min */
(nitmethod_t)core___core__Comparable___max, /* pointer to flat:FlatBuffer:kernel$Comparable$max */
(nitmethod_t)core___core__Buffer___core__kernel__Cloneable__clone, /* pointer to flat:FlatBuffer:abstract_text$Buffer$clone */
(nitmethod_t)core___core__Pattern___split_in, /* pointer to flat:FlatBuffer:string_search$Pattern$split_in */
(nitmethod_t)core__string_search___Text___Pattern__search_in, /* pointer to flat:FlatBuffer:string_search$Text$search_in */
(nitmethod_t)core__string_search___Text___Pattern__search_index_in, /* pointer to flat:FlatBuffer:string_search$Text$search_index_in */
(nitmethod_t)core__fixed_ints_text___Text___to_i, /* pointer to flat:FlatBuffer:fixed_ints_text$Text$to_i */
(nitmethod_t)core___core__FlatBuffer___core__abstract_text__Text__to_cstring, /* pointer to flat:FlatBuffer:flat$FlatBuffer$to_cstring */
(nitmethod_t)core___core__FlatText___Text__length, /* pointer to flat:FlatBuffer:abstract_text$FlatText$length */
(nitmethod_t)core__file___Text___file_exists, /* pointer to flat:FlatBuffer:file$Text$file_exists */
(nitmethod_t)core___core__FlatBuffer___core__abstract_text__Text__chars, /* pointer to flat:FlatBuffer:flat$FlatBuffer$chars */
(nitmethod_t)core___core__FlatBuffer___core__abstract_text__Text__substring, /* pointer to flat:FlatBuffer:flat$FlatBuffer$substring */
(nitmethod_t)core__fixed_ints_text___Text___is_int, /* pointer to flat:FlatBuffer:fixed_ints_text$Text$is_int */
(nitmethod_t)core__string_search___Text___remove_all, /* pointer to flat:FlatBuffer:string_search$Text$remove_all */
(nitmethod_t)core__flat___FlatText___core__abstract_text__Text___91d_93d, /* pointer to flat:FlatBuffer:flat$FlatText$[] */
(nitmethod_t)core__file___Writable___write_to_file, /* pointer to flat:FlatBuffer:file$Writable$write_to_file */
(nitmethod_t)core__stream___Text___Writable__write_to, /* pointer to flat:FlatBuffer:stream$Text$write_to */
(nitmethod_t)core___core__Text___substring_from, /* pointer to flat:FlatBuffer:abstract_text$Text$substring_from */
(nitmethod_t)core__flat___FlatText___core__abstract_text__Text__to_hex, /* pointer to flat:FlatBuffer:flat$FlatText$to_hex */
(nitmethod_t)core___core__Text___to_oct, /* pointer to flat:FlatBuffer:abstract_text$Text$to_oct */
(nitmethod_t)core___core__Text___to_bin, /* pointer to flat:FlatBuffer:abstract_text$Text$to_bin */
(nitmethod_t)core___core__Text___to_dec, /* pointer to flat:FlatBuffer:abstract_text$Text$to_dec */
(nitmethod_t)core___core__Text____43d, /* pointer to flat:FlatBuffer:abstract_text$Text$+ */
(nitmethod_t)core___core__FlatText___Text__byte_length, /* pointer to flat:FlatBuffer:abstract_text$FlatText$byte_length */
(nitmethod_t)core___core__FlatBuffer___core__abstract_text__Text__substrings, /* pointer to flat:FlatBuffer:flat$FlatBuffer$substrings */
(nitmethod_t)core___core__Buffer___Text__to_snake_case, /* pointer to flat:FlatBuffer:abstract_text$Buffer$to_snake_case */
(nitmethod_t)core___core__Text___is_empty, /* pointer to flat:FlatBuffer:abstract_text$Text$is_empty */
(nitmethod_t)core__string_search___Text___split_with, /* pointer to flat:FlatBuffer:string_search$Text$split_with */
(nitmethod_t)core___core__Buffer___Text___42d, /* pointer to flat:FlatBuffer:abstract_text$Buffer$* */
(nitmethod_t)core__fixed_ints_text___Text___strip_numhead, /* pointer to flat:FlatBuffer:fixed_ints_text$Text$strip_numhead */
(nitmethod_t)core__fixed_ints_text___Text___get_numhead, /* pointer to flat:FlatBuffer:fixed_ints_text$Text$get_numhead */
(nitmethod_t)core___core__Text___is_hex, /* pointer to flat:FlatBuffer:abstract_text$Text$is_hex */
(nitmethod_t)core___core__Text___is_bin, /* pointer to flat:FlatBuffer:abstract_text$Text$is_bin */
(nitmethod_t)core___core__Text___is_oct, /* pointer to flat:FlatBuffer:abstract_text$Text$is_oct */
(nitmethod_t)core___core__Text___is_dec, /* pointer to flat:FlatBuffer:abstract_text$Text$is_dec */
(nitmethod_t)core__string_search___Text___split, /* pointer to flat:FlatBuffer:string_search$Text$split */
(nitmethod_t)core___core__FlatBuffer___core__abstract_text__Text__empty, /* pointer to flat:FlatBuffer:flat$FlatBuffer$empty */
(nitmethod_t)core___core__Text___a_to, /* pointer to flat:FlatBuffer:abstract_text$Text$a_to */
(nitmethod_t)core___core__Text___last, /* pointer to flat:FlatBuffer:abstract_text$Text$last */
(nitmethod_t)core___core__Text___hash_cache, /* pointer to flat:FlatBuffer:abstract_text$Text$hash_cache */
(nitmethod_t)core___core__Text___hash_cache_61d, /* pointer to flat:FlatBuffer:abstract_text$Text$hash_cache= */
(nitmethod_t)core___core__Text___is_lower, /* pointer to flat:FlatBuffer:abstract_text$Text$is_lower */
(nitmethod_t)core___core__Text___has_suffix, /* pointer to flat:FlatBuffer:abstract_text$Text$has_suffix */
(nitmethod_t)core__file___Text___write_native_to, /* pointer to flat:FlatBuffer:file$Text$write_native_to */
(nitmethod_t)core___core__Text___to_cmangle, /* pointer to flat:FlatBuffer:abstract_text$Text$to_cmangle */
(nitmethod_t)core__string_search___Text___split_once_on, /* pointer to flat:FlatBuffer:string_search$Text$split_once_on */
(nitmethod_t)core___core__Text___is_numeric, /* pointer to flat:FlatBuffer:abstract_text$Text$is_numeric */
(nitmethod_t)core___core__Text___has_substring, /* pointer to flat:FlatBuffer:abstract_text$Text$has_substring */
(nitmethod_t)core___core__Text___levenshtein_distance, /* pointer to flat:FlatBuffer:abstract_text$Text$levenshtein_distance */
(nitmethod_t)core___core__Text___last_index_of_from, /* pointer to flat:FlatBuffer:abstract_text$Text$last_index_of_from */
(nitmethod_t)core___core__Text___has_prefix, /* pointer to flat:FlatBuffer:abstract_text$Text$has_prefix */
(nitmethod_t)core___core__Text___trim, /* pointer to flat:FlatBuffer:abstract_text$Text$trim */
(nitmethod_t)core__flat___FlatText___core__abstract_text__Text__escape_to_c, /* pointer to flat:FlatBuffer:flat$FlatText$escape_to_c */
(nitmethod_t)core__file___Text___to_path, /* pointer to flat:FlatBuffer:file$Text$to_path */
(nitmethod_t)core___core__Text___chomp, /* pointer to flat:FlatBuffer:abstract_text$Text$chomp */
(nitmethod_t)core___core__Text___r_trim, /* pointer to flat:FlatBuffer:abstract_text$Text$r_trim */
(nitmethod_t)core___core__Text___l_trim, /* pointer to flat:FlatBuffer:abstract_text$Text$l_trim */
(nitmethod_t)csv___core__Text___escape_to_csv, /* pointer to flat:FlatBuffer:csv$Text$escape_to_csv */
(nitmethod_t)core___core__Text___escape_to_sh, /* pointer to flat:FlatBuffer:abstract_text$Text$escape_to_sh */
(nitmethod_t)core___core__Buffer___Text__to_lower, /* pointer to flat:FlatBuffer:abstract_text$Buffer$to_lower */
(nitmethod_t)csv___core__Text___chars_to_escape_csv, /* pointer to flat:FlatBuffer:csv$Text$chars_to_escape_csv */
(nitmethod_t)core___core__Text___escape_to_mk, /* pointer to flat:FlatBuffer:abstract_text$Text$escape_to_mk */
(nitmethod_t)core__string_search___Text___replace, /* pointer to flat:FlatBuffer:string_search$Text$replace */
(nitmethod_t)core___core__Text___index_of, /* pointer to flat:FlatBuffer:abstract_text$Text$index_of */
(nitmethod_t)core___core__Text___last_index_of, /* pointer to flat:FlatBuffer:abstract_text$Text$last_index_of */
(nitmethod_t)core___core__Text___first, /* pointer to flat:FlatBuffer:abstract_text$Text$first */
(nitmethod_t)core__fixed_ints_text___Text___to_num, /* pointer to flat:FlatBuffer:fixed_ints_text$Text$to_num */
(nitmethod_t)core___core__Text___to_f, /* pointer to flat:FlatBuffer:abstract_text$Text$to_f */
(nitmethod_t)core___core__Text___unescape_nit, /* pointer to flat:FlatBuffer:abstract_text$Text$unescape_nit */
(nitmethod_t)core___core__Text___index_of_from, /* pointer to flat:FlatBuffer:abstract_text$Text$index_of_from */
(nitmethod_t)core__bytes___Text___unescape_to_bytes, /* pointer to flat:FlatBuffer:bytes$Text$unescape_to_bytes */
(nitmethod_t)core__bytes___Text___to_bytes, /* pointer to flat:FlatBuffer:bytes$Text$to_bytes */
(nitmethod_t)core__fixed_ints_text___Text___is_num, /* pointer to flat:FlatBuffer:fixed_ints_text$Text$is_num */
(nitmethod_t)core__fixed_ints_text___Text___get_numext, /* pointer to flat:FlatBuffer:fixed_ints_text$Text$get_numext */
(nitmethod_t)core__fixed_ints_text___Text___strip_numext, /* pointer to flat:FlatBuffer:fixed_ints_text$Text$strip_numext */
(nitmethod_t)core__bytes___FlatText___Text__append_to_bytes, /* pointer to flat:FlatBuffer:bytes$FlatText$append_to_bytes */
(nitmethod_t)core___core__Buffer___Text__to_upper, /* pointer to flat:FlatBuffer:abstract_text$Buffer$to_upper */
(nitmethod_t)core__flat___Buffer___new, /* pointer to flat:FlatBuffer:flat$Buffer$new */
(nitmethod_t)core___core__FlatBuffer___core__abstract_text__Buffer__append, /* pointer to flat:FlatBuffer:flat$FlatBuffer$append */
(nitmethod_t)core__flat___Buffer___with_cap, /* pointer to flat:FlatBuffer:flat$Buffer$with_cap */
(nitmethod_t)core___core__Buffer___snake_case, /* pointer to flat:FlatBuffer:abstract_text$Buffer$snake_case */
(nitmethod_t)core___core__Buffer___written_61d, /* pointer to flat:FlatBuffer:abstract_text$Buffer$written= */
(nitmethod_t)core___core__FlatBuffer___core__abstract_text__Buffer__enlarge, /* pointer to flat:FlatBuffer:flat$FlatBuffer$enlarge */
(nitmethod_t)core___core__FlatBuffer___core__abstract_text__Buffer__insert_char, /* pointer to flat:FlatBuffer:flat$FlatBuffer$insert_char */
(nitmethod_t)core___core__FlatBuffer___core__abstract_text__Buffer___91d_93d_61d, /* pointer to flat:FlatBuffer:flat$FlatBuffer$[]= */
(nitmethod_t)core___core__FlatBuffer___core__abstract_text__Buffer__add, /* pointer to flat:FlatBuffer:flat$FlatBuffer$add */
(nitmethod_t)core___core__Buffer___written, /* pointer to flat:FlatBuffer:abstract_text$Buffer$written */
(nitmethod_t)core___core__FlatBuffer___core__abstract_text__Buffer__lower, /* pointer to flat:FlatBuffer:flat$FlatBuffer$lower */
(nitmethod_t)core___core__FlatBuffer___core__abstract_text__Buffer__upper, /* pointer to flat:FlatBuffer:flat$FlatBuffer$upper */
(nitmethod_t)core___core__FlatBuffer___from, /* pointer to flat:FlatBuffer:flat$FlatBuffer$from */
(nitmethod_t)core___core__FlatBuffer___with_infos, /* pointer to flat:FlatBuffer:flat$FlatBuffer$with_infos */
(nitmethod_t)core___core__FlatText___items, /* pointer to flat:FlatBuffer:abstract_text$FlatText$items */
(nitmethod_t)core__flat___FlatText___first_byte, /* pointer to flat:FlatBuffer:flat$FlatText$first_byte */
(nitmethod_t)core__flat___FlatText___fetch_char_at, /* pointer to flat:FlatBuffer:flat$FlatText$fetch_char_at */
(nitmethod_t)core__flat___FlatText___char_to_byte_index, /* pointer to flat:FlatBuffer:flat$FlatText$char_to_byte_index */
(nitmethod_t)core__flat___FlatText___last_byte, /* pointer to flat:FlatBuffer:flat$FlatText$last_byte */
(nitmethod_t)core___core__FlatText___length_61d, /* pointer to flat:FlatBuffer:abstract_text$FlatText$length= */
(nitmethod_t)core___core__FlatText___byte_length_61d, /* pointer to flat:FlatBuffer:abstract_text$FlatText$byte_length= */
(nitmethod_t)core__flat___FlatText___chars_to_escape_to_c, /* pointer to flat:FlatBuffer:flat$FlatText$chars_to_escape_to_c */
(nitmethod_t)core___core__FlatBuffer___with_capacity, /* pointer to flat:FlatBuffer:flat$FlatBuffer$with_capacity */
(nitmethod_t)core___core__FlatBuffer___capacity, /* pointer to flat:FlatBuffer:flat$FlatBuffer$capacity */
(nitmethod_t)core___core__FlatBuffer___capacity_61d, /* pointer to flat:FlatBuffer:flat$FlatBuffer$capacity= */
(nitmethod_t)core___core__FlatBuffer___rshift_bytes, /* pointer to flat:FlatBuffer:flat$FlatBuffer$rshift_bytes */
(nitmethod_t)core___core__FlatBuffer___reset, /* pointer to flat:FlatBuffer:flat$FlatBuffer$reset */
(nitmethod_t)core___core__FlatBuffer___lshift_bytes, /* pointer to flat:FlatBuffer:flat$FlatBuffer$lshift_bytes */
(nitmethod_t)core___core__Object___init, /* pointer to flat:FlatBuffer:kernel$Object$init */
}
};
/* allocate FlatBuffer */
val* NEW_core__FlatBuffer(const struct type* type) {
val* self /* : FlatBuffer */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__FlatBuffer;
self->attrs[COLOR_core__abstract_text__FlatText___length].l = 0l; /* _length on <self:FlatBuffer exact> */
self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l = 0l; /* _byte_length on <self:FlatBuffer exact> */
self->attrs[COLOR_core__flat__FlatText___position].l = 0l; /* _position on <self:FlatBuffer exact> */
self->attrs[COLOR_core__flat__FlatText___bytepos].l = 0l; /* _bytepos on <self:FlatBuffer exact> */
self->attrs[COLOR_core__abstract_text__Buffer___written].s = 0; /* _written on <self:FlatBuffer exact> */
self->attrs[COLOR_core__flat__FlatBuffer___capacity].l = 0l; /* _capacity on <self:FlatBuffer exact> */
return self;
}
/* runtime class core__flat__FlatBufferByteReverseIterator: core::flat::FlatBufferByteReverseIterator (dead=true; need_corpse=false)*/
/* allocate FlatBufferByteReverseIterator */
val* NEW_core__flat__FlatBufferByteReverseIterator(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FlatBufferByteReverseIterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__flat__FlatBufferByteView: core::flat::FlatBufferByteView (dead=true; need_corpse=false)*/
/* allocate FlatBufferByteView */
val* NEW_core__flat__FlatBufferByteView(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FlatBufferByteView is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__flat__FlatBufferByteIterator: core::flat::FlatBufferByteIterator (dead=true; need_corpse=false)*/
/* allocate FlatBufferByteIterator */
val* NEW_core__flat__FlatBufferByteIterator(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FlatBufferByteIterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__flat__FlatBufferCharReverseIterator: core::flat::FlatBufferCharReverseIterator (dead=false; need_corpse=false)*/
const struct class class_core__flat__FlatBufferCharReverseIterator = {
0, /* box_kind */
{
(nitmethod_t)core__flat___core__flat__FlatBufferCharReverseIterator___core__kernel__Object__init, /* pointer to flat:FlatBufferCharReverseIterator:flat$FlatBufferCharReverseIterator$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to flat:FlatBufferCharReverseIterator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to flat:FlatBufferCharReverseIterator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to flat:FlatBufferCharReverseIterator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to flat:FlatBufferCharReverseIterator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to flat:FlatBufferCharReverseIterator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to flat:FlatBufferCharReverseIterator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to flat:FlatBufferCharReverseIterator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to flat:FlatBufferCharReverseIterator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to flat:FlatBufferCharReverseIterator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to flat:FlatBufferCharReverseIterator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to flat:FlatBufferCharReverseIterator:abstract_text$Object$native_class_name */
(nitmethod_t)core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__Iterator__is_ok, /* pointer to flat:FlatBufferCharReverseIterator:flat$FlatBufferCharReverseIterator$is_ok */
(nitmethod_t)VIRTUAL_core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__Iterator__item, /* pointer to flat:FlatBufferCharReverseIterator:flat$FlatBufferCharReverseIterator$item */
(nitmethod_t)core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__Iterator__next, /* pointer to flat:FlatBufferCharReverseIterator:flat$FlatBufferCharReverseIterator$next */
(nitmethod_t)core___core__Iterator___finish, /* pointer to flat:FlatBufferCharReverseIterator:abstract_collection$Iterator$finish */
(nitmethod_t)core___core__Iterator___iterator, /* pointer to flat:FlatBufferCharReverseIterator:abstract_collection$Iterator$iterator */
(nitmethod_t)core__array___Iterator___to_a, /* pointer to flat:FlatBufferCharReverseIterator:array$Iterator$to_a */
(nitmethod_t)core__flat___core__flat__FlatBufferCharReverseIterator___core__abstract_collection__IndexedIterator__index, /* pointer to flat:FlatBufferCharReverseIterator:flat$FlatBufferCharReverseIterator$index */
(nitmethod_t)core__flat___core__flat__FlatBufferCharReverseIterator___target_61d, /* pointer to flat:FlatBufferCharReverseIterator:flat$FlatBufferCharReverseIterator$target= */
(nitmethod_t)core__flat___core__flat__FlatBufferCharReverseIterator___curr_pos_61d, /* pointer to flat:FlatBufferCharReverseIterator:flat$FlatBufferCharReverseIterator$curr_pos= */
(nitmethod_t)core__flat___core__flat__FlatBufferCharReverseIterator___curr_pos, /* pointer to flat:FlatBufferCharReverseIterator:flat$FlatBufferCharReverseIterator$curr_pos */
(nitmethod_t)core__flat___core__flat__FlatBufferCharReverseIterator___target, /* pointer to flat:FlatBufferCharReverseIterator:flat$FlatBufferCharReverseIterator$target */
(nitmethod_t)core___core__Object___init, /* pointer to flat:FlatBufferCharReverseIterator:kernel$Object$init */
}
};
/* allocate FlatBufferCharReverseIterator */
val* NEW_core__flat__FlatBufferCharReverseIterator(const struct type* type) {
val* self /* : FlatBufferCharReverseIterator */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__flat__FlatBufferCharReverseIterator;
return self;
}
/* runtime class core__flat__FlatBufferCharView: core::flat::FlatBufferCharView (dead=false; need_corpse=false)*/
const struct class class_core__flat__FlatBufferCharView = {
0, /* box_kind */
{
(nitmethod_t)core__abstract_text___core__abstract_text__StringCharView___core__kernel__Object__init, /* pointer to flat:FlatBufferCharView:abstract_text$StringCharView$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to flat:FlatBufferCharView:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to flat:FlatBufferCharView:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Collection___Object__to_s, /* pointer to flat:FlatBufferCharView:abstract_text$Collection$to_s */
(nitmethod_t)core___core__SequenceRead___core__kernel__Object___61d_61d, /* pointer to flat:FlatBufferCharView:abstract_collection$SequenceRead$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to flat:FlatBufferCharView:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to flat:FlatBufferCharView:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to flat:FlatBufferCharView:kernel$Object$object_id */
(nitmethod_t)core___core__SequenceRead___core__kernel__Object__hash, /* pointer to flat:FlatBufferCharView:abstract_collection$SequenceRead$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to flat:FlatBufferCharView:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to flat:FlatBufferCharView:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to flat:FlatBufferCharView:abstract_text$Object$native_class_name */
(nitmethod_t)core__abstract_text___core__abstract_text__StringCharView___target_61d, /* pointer to flat:FlatBufferCharView:abstract_text$StringCharView$target= */
(nitmethod_t)core__abstract_text___core__abstract_text__StringCharView___target, /* pointer to flat:FlatBufferCharView:abstract_text$StringCharView$target */
(nitmethod_t)core___core__Object___init, /* pointer to flat:FlatBufferCharView:kernel$Object$init */
(nitmethod_t)core__flat___core__flat__FlatBufferCharView___enlarge, /* pointer to flat:FlatBufferCharView:flat$FlatBufferCharView$enlarge */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core__abstract_text___Collection___join, /* pointer to flat:FlatBufferCharView:abstract_text$Collection$join */
(nitmethod_t)core__array___Collection___to_a, /* pointer to flat:FlatBufferCharView:array$Collection$to_a */
(nitmethod_t)core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__length, /* pointer to flat:FlatBufferCharView:abstract_text$StringCharView$length */
(nitmethod_t)core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__is_empty, /* pointer to flat:FlatBufferCharView:abstract_text$StringCharView$is_empty */
(nitmethod_t)core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__Collection__iterator, /* pointer to flat:FlatBufferCharView:abstract_text$StringCharView$iterator */
(nitmethod_t)core___core__Collection___has_exactly, /* pointer to flat:FlatBufferCharView:abstract_collection$Collection$has_exactly */
(nitmethod_t)core___core__Collection___has_all, /* pointer to flat:FlatBufferCharView:abstract_collection$Collection$has_all */
(nitmethod_t)core___core__Collection___has, /* pointer to flat:FlatBufferCharView:abstract_collection$Collection$has */
(nitmethod_t)core___core__Collection___count, /* pointer to flat:FlatBufferCharView:abstract_collection$Collection$count */
(nitmethod_t)core___core__SequenceRead___Collection__first, /* pointer to flat:FlatBufferCharView:abstract_collection$SequenceRead$first */
(nitmethod_t)core___core__Collection___not_empty, /* pointer to flat:FlatBufferCharView:abstract_collection$Collection$not_empty */
(nitmethod_t)core__abstract_text___Collection___plain_to_s, /* pointer to flat:FlatBufferCharView:abstract_text$Collection$plain_to_s */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SequenceRead___91d_93d, /* pointer to flat:FlatBufferCharView:flat$FlatBufferCharView$[] */
(nitmethod_t)core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SequenceRead__iterator_from, /* pointer to flat:FlatBufferCharView:flat$FlatBufferCharView$iterator_from */
(nitmethod_t)core___core__SequenceRead___index_of, /* pointer to flat:FlatBufferCharView:abstract_collection$SequenceRead$index_of */
(nitmethod_t)core___core__SequenceRead___last_index_of, /* pointer to flat:FlatBufferCharView:abstract_collection$SequenceRead$last_index_of */
(nitmethod_t)core___core__SequenceRead___last, /* pointer to flat:FlatBufferCharView:abstract_collection$SequenceRead$last */
(nitmethod_t)core___core__SequenceRead___index_of_from, /* pointer to flat:FlatBufferCharView:abstract_collection$SequenceRead$index_of_from */
(nitmethod_t)core___core__SequenceRead___last_index_of_from, /* pointer to flat:FlatBufferCharView:abstract_collection$SequenceRead$last_index_of_from */
(nitmethod_t)core__abstract_text___core__abstract_text__StringCharView___core__abstract_collection__SequenceRead__reverse_iterator, /* pointer to flat:FlatBufferCharView:abstract_text$StringCharView$reverse_iterator */
(nitmethod_t)core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SequenceRead__reverse_iterator_from, /* pointer to flat:FlatBufferCharView:flat$FlatBufferCharView$reverse_iterator_from */
(nitmethod_t)core___core__RemovableCollection___clear, /* pointer to flat:FlatBufferCharView:abstract_collection$RemovableCollection$clear */
(nitmethod_t)core___core__RemovableCollection___remove, /* pointer to flat:FlatBufferCharView:abstract_collection$RemovableCollection$remove */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)VIRTUAL_core__flat___core__flat__FlatBufferCharView___core__abstract_collection__SimpleCollection__add, /* pointer to flat:FlatBufferCharView:flat$FlatBufferCharView$add */
(nitmethod_t)core___core__SimpleCollection___add_all, /* pointer to flat:FlatBufferCharView:abstract_collection$SimpleCollection$add_all */
(nitmethod_t)VIRTUAL_core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence__push, /* pointer to flat:FlatBufferCharView:flat$FlatBufferCharView$push */
(nitmethod_t)core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence__append, /* pointer to flat:FlatBufferCharView:flat$FlatBufferCharView$append */
(nitmethod_t)core___core__Sequence___shift, /* pointer to flat:FlatBufferCharView:abstract_collection$Sequence$shift */
(nitmethod_t)VIRTUAL_core__flat___core__flat__FlatBufferCharView___core__abstract_collection__Sequence___91d_93d_61d, /* pointer to flat:FlatBufferCharView:flat$FlatBufferCharView$[]= */
(nitmethod_t)core___core__Sequence___remove_at, /* pointer to flat:FlatBufferCharView:abstract_collection$Sequence$remove_at */
(nitmethod_t)core___core__Sequence___pop, /* pointer to flat:FlatBufferCharView:abstract_collection$Sequence$pop */
(nitmethod_t)core___core__Sequence___unshift, /* pointer to flat:FlatBufferCharView:abstract_collection$Sequence$unshift */
(nitmethod_t)core___core__Sequence___prepend, /* pointer to flat:FlatBufferCharView:abstract_collection$Sequence$prepend */
(nitmethod_t)core___core__Sequence___insert_all, /* pointer to flat:FlatBufferCharView:abstract_collection$Sequence$insert_all */
(nitmethod_t)core___core__Sequence___insert, /* pointer to flat:FlatBufferCharView:abstract_collection$Sequence$insert */
(nitmethod_t)core___core__Sequence___first_61d, /* pointer to flat:FlatBufferCharView:abstract_collection$Sequence$first= */
}
};
/* allocate FlatBufferCharView */
val* NEW_core__flat__FlatBufferCharView(const struct type* type) {
val* self /* : FlatBufferCharView */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__flat__FlatBufferCharView;
return self;
}
/* runtime class core__flat__FlatBufferCharIterator: core::flat::FlatBufferCharIterator (dead=false; need_corpse=false)*/
const struct class class_core__flat__FlatBufferCharIterator = {
0, /* box_kind */
{
(nitmethod_t)core__flat___core__flat__FlatBufferCharIterator___core__kernel__Object__init, /* pointer to flat:FlatBufferCharIterator:flat$FlatBufferCharIterator$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to flat:FlatBufferCharIterator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to flat:FlatBufferCharIterator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to flat:FlatBufferCharIterator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to flat:FlatBufferCharIterator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to flat:FlatBufferCharIterator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to flat:FlatBufferCharIterator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to flat:FlatBufferCharIterator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to flat:FlatBufferCharIterator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to flat:FlatBufferCharIterator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to flat:FlatBufferCharIterator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to flat:FlatBufferCharIterator:abstract_text$Object$native_class_name */
(nitmethod_t)core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__is_ok, /* pointer to flat:FlatBufferCharIterator:flat$FlatBufferCharIterator$is_ok */
(nitmethod_t)VIRTUAL_core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__item, /* pointer to flat:FlatBufferCharIterator:flat$FlatBufferCharIterator$item */
(nitmethod_t)core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__Iterator__next, /* pointer to flat:FlatBufferCharIterator:flat$FlatBufferCharIterator$next */
(nitmethod_t)core___core__Iterator___finish, /* pointer to flat:FlatBufferCharIterator:abstract_collection$Iterator$finish */
(nitmethod_t)core___core__Iterator___iterator, /* pointer to flat:FlatBufferCharIterator:abstract_collection$Iterator$iterator */
(nitmethod_t)core__array___Iterator___to_a, /* pointer to flat:FlatBufferCharIterator:array$Iterator$to_a */
(nitmethod_t)core__flat___core__flat__FlatBufferCharIterator___core__abstract_collection__IndexedIterator__index, /* pointer to flat:FlatBufferCharIterator:flat$FlatBufferCharIterator$index */
(nitmethod_t)core__flat___core__flat__FlatBufferCharIterator___target_61d, /* pointer to flat:FlatBufferCharIterator:flat$FlatBufferCharIterator$target= */
(nitmethod_t)core__flat___core__flat__FlatBufferCharIterator___curr_pos_61d, /* pointer to flat:FlatBufferCharIterator:flat$FlatBufferCharIterator$curr_pos= */
(nitmethod_t)core__flat___core__flat__FlatBufferCharIterator___max_61d, /* pointer to flat:FlatBufferCharIterator:flat$FlatBufferCharIterator$max= */
(nitmethod_t)core__flat___core__flat__FlatBufferCharIterator___target, /* pointer to flat:FlatBufferCharIterator:flat$FlatBufferCharIterator$target */
(nitmethod_t)core__flat___core__flat__FlatBufferCharIterator___curr_pos, /* pointer to flat:FlatBufferCharIterator:flat$FlatBufferCharIterator$curr_pos */
(nitmethod_t)core__flat___core__flat__FlatBufferCharIterator___max, /* pointer to flat:FlatBufferCharIterator:flat$FlatBufferCharIterator$max */
(nitmethod_t)core___core__Object___init, /* pointer to flat:FlatBufferCharIterator:kernel$Object$init */
}
};
/* allocate FlatBufferCharIterator */
val* NEW_core__flat__FlatBufferCharIterator(const struct type* type) {
val* self /* : FlatBufferCharIterator */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__flat__FlatBufferCharIterator;
return self;
}
/* runtime class core__Text: core::Text (dead=true; need_corpse=false)*/
/* allocate Text */
val* NEW_core__Text(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Text is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__FlatText: core::FlatText (dead=true; need_corpse=false)*/
/* allocate FlatText */
val* NEW_core__FlatText(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FlatText is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__abstract_text__StringCharView: core::abstract_text::StringCharView (dead=true; need_corpse=false)*/
/* allocate StringCharView */
val* NEW_core__abstract_text__StringCharView(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "StringCharView is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__abstract_text__StringByteView: core::abstract_text::StringByteView (dead=true; need_corpse=false)*/
/* allocate StringByteView */
val* NEW_core__abstract_text__StringByteView(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "StringByteView is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__String: core::String (dead=true; need_corpse=false)*/
/* allocate String */
val* NEW_core__String(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "String is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Buffer: core::Buffer (dead=false; need_corpse=false)*/
const struct class class_core__Buffer = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to abstract_text:Buffer:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to abstract_text:Buffer:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to abstract_text:Buffer:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to abstract_text:Buffer:abstract_text$Object$to_s */
(nitmethod_t)core___core__Text___core__kernel__Object___61d_61d, /* pointer to abstract_text:Buffer:abstract_text$Text$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to abstract_text:Buffer:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to abstract_text:Buffer:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to abstract_text:Buffer:kernel$Object$object_id */
(nitmethod_t)core___core__Text___core__kernel__Object__hash, /* pointer to abstract_text:Buffer:abstract_text$Text$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to abstract_text:Buffer:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to abstract_text:Buffer:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to abstract_text:Buffer:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Comparable____60d_61d, /* pointer to abstract_text:Buffer:kernel$Comparable$<= */
(nitmethod_t)core___core__Comparable____62d, /* pointer to abstract_text:Buffer:kernel$Comparable$> */
(nitmethod_t)core___core__Comparable____62d_61d, /* pointer to abstract_text:Buffer:kernel$Comparable$>= */
(nitmethod_t)core___core__Text___core__kernel__Comparable___60d, /* pointer to abstract_text:Buffer:abstract_text$Text$< */
(nitmethod_t)core___core__Comparable____60d_61d_62d, /* pointer to abstract_text:Buffer:kernel$Comparable$<=> */
(nitmethod_t)core___core__Comparable___min, /* pointer to abstract_text:Buffer:kernel$Comparable$min */
(nitmethod_t)core___core__Comparable___max, /* pointer to abstract_text:Buffer:kernel$Comparable$max */
(nitmethod_t)core___core__Buffer___core__kernel__Cloneable__clone, /* pointer to abstract_text:Buffer:abstract_text$Buffer$clone */
(nitmethod_t)core___core__Pattern___split_in, /* pointer to abstract_text:Buffer:string_search$Pattern$split_in */
(nitmethod_t)core__string_search___Text___Pattern__search_in, /* pointer to abstract_text:Buffer:string_search$Text$search_in */
(nitmethod_t)core__string_search___Text___Pattern__search_index_in, /* pointer to abstract_text:Buffer:string_search$Text$search_index_in */
(nitmethod_t)core__fixed_ints_text___Text___to_i, /* pointer to abstract_text:Buffer:fixed_ints_text$Text$to_i */
(nitmethod_t)core___core__Text___to_cstring, /* pointer to abstract_text:Buffer:abstract_text$Text$to_cstring */
(nitmethod_t)core___core__Text___length, /* pointer to abstract_text:Buffer:abstract_text$Text$length */
(nitmethod_t)core__file___Text___file_exists, /* pointer to abstract_text:Buffer:file$Text$file_exists */
(nitmethod_t)core___core__Buffer___Text__chars, /* pointer to abstract_text:Buffer:abstract_text$Buffer$chars */
(nitmethod_t)core___core__Text___substring, /* pointer to abstract_text:Buffer:abstract_text$Text$substring */
(nitmethod_t)core__fixed_ints_text___Text___is_int, /* pointer to abstract_text:Buffer:fixed_ints_text$Text$is_int */
(nitmethod_t)core__string_search___Text___remove_all, /* pointer to abstract_text:Buffer:string_search$Text$remove_all */
(nitmethod_t)core___core__Text____91d_93d, /* pointer to abstract_text:Buffer:abstract_text$Text$[] */
(nitmethod_t)core__file___Writable___write_to_file, /* pointer to abstract_text:Buffer:file$Writable$write_to_file */
(nitmethod_t)core__stream___Text___Writable__write_to, /* pointer to abstract_text:Buffer:stream$Text$write_to */
(nitmethod_t)core___core__Text___substring_from, /* pointer to abstract_text:Buffer:abstract_text$Text$substring_from */
(nitmethod_t)core___core__Text___to_hex, /* pointer to abstract_text:Buffer:abstract_text$Text$to_hex */
(nitmethod_t)core___core__Text___to_oct, /* pointer to abstract_text:Buffer:abstract_text$Text$to_oct */
(nitmethod_t)core___core__Text___to_bin, /* pointer to abstract_text:Buffer:abstract_text$Text$to_bin */
(nitmethod_t)core___core__Text___to_dec, /* pointer to abstract_text:Buffer:abstract_text$Text$to_dec */
(nitmethod_t)core___core__Text____43d, /* pointer to abstract_text:Buffer:abstract_text$Text$+ */
(nitmethod_t)core___core__Text___byte_length, /* pointer to abstract_text:Buffer:abstract_text$Text$byte_length */
(nitmethod_t)core___core__Text___substrings, /* pointer to abstract_text:Buffer:abstract_text$Text$substrings */
(nitmethod_t)core___core__Buffer___Text__to_snake_case, /* pointer to abstract_text:Buffer:abstract_text$Buffer$to_snake_case */
(nitmethod_t)core___core__Text___is_empty, /* pointer to abstract_text:Buffer:abstract_text$Text$is_empty */
(nitmethod_t)core__string_search___Text___split_with, /* pointer to abstract_text:Buffer:string_search$Text$split_with */
(nitmethod_t)core___core__Buffer___Text___42d, /* pointer to abstract_text:Buffer:abstract_text$Buffer$* */
(nitmethod_t)core__fixed_ints_text___Text___strip_numhead, /* pointer to abstract_text:Buffer:fixed_ints_text$Text$strip_numhead */
(nitmethod_t)core__fixed_ints_text___Text___get_numhead, /* pointer to abstract_text:Buffer:fixed_ints_text$Text$get_numhead */
(nitmethod_t)core___core__Text___is_hex, /* pointer to abstract_text:Buffer:abstract_text$Text$is_hex */
(nitmethod_t)core___core__Text___is_bin, /* pointer to abstract_text:Buffer:abstract_text$Text$is_bin */
(nitmethod_t)core___core__Text___is_oct, /* pointer to abstract_text:Buffer:abstract_text$Text$is_oct */
(nitmethod_t)core___core__Text___is_dec, /* pointer to abstract_text:Buffer:abstract_text$Text$is_dec */
(nitmethod_t)core__string_search___Text___split, /* pointer to abstract_text:Buffer:string_search$Text$split */
(nitmethod_t)core___core__Text___empty, /* pointer to abstract_text:Buffer:abstract_text$Text$empty */
(nitmethod_t)core___core__Text___a_to, /* pointer to abstract_text:Buffer:abstract_text$Text$a_to */
(nitmethod_t)core___core__Text___last, /* pointer to abstract_text:Buffer:abstract_text$Text$last */
(nitmethod_t)core___core__Text___hash_cache, /* pointer to abstract_text:Buffer:abstract_text$Text$hash_cache */
(nitmethod_t)core___core__Text___hash_cache_61d, /* pointer to abstract_text:Buffer:abstract_text$Text$hash_cache= */
(nitmethod_t)core___core__Text___is_lower, /* pointer to abstract_text:Buffer:abstract_text$Text$is_lower */
(nitmethod_t)core___core__Text___has_suffix, /* pointer to abstract_text:Buffer:abstract_text$Text$has_suffix */
(nitmethod_t)core__file___Text___write_native_to, /* pointer to abstract_text:Buffer:file$Text$write_native_to */
(nitmethod_t)core___core__Text___to_cmangle, /* pointer to abstract_text:Buffer:abstract_text$Text$to_cmangle */
(nitmethod_t)core__string_search___Text___split_once_on, /* pointer to abstract_text:Buffer:string_search$Text$split_once_on */
(nitmethod_t)core___core__Text___is_numeric, /* pointer to abstract_text:Buffer:abstract_text$Text$is_numeric */
(nitmethod_t)core___core__Text___has_substring, /* pointer to abstract_text:Buffer:abstract_text$Text$has_substring */
(nitmethod_t)core___core__Text___levenshtein_distance, /* pointer to abstract_text:Buffer:abstract_text$Text$levenshtein_distance */
(nitmethod_t)core___core__Text___last_index_of_from, /* pointer to abstract_text:Buffer:abstract_text$Text$last_index_of_from */
(nitmethod_t)core___core__Text___has_prefix, /* pointer to abstract_text:Buffer:abstract_text$Text$has_prefix */
(nitmethod_t)core___core__Text___trim, /* pointer to abstract_text:Buffer:abstract_text$Text$trim */
(nitmethod_t)core___core__Text___escape_to_c, /* pointer to abstract_text:Buffer:abstract_text$Text$escape_to_c */
(nitmethod_t)core__file___Text___to_path, /* pointer to abstract_text:Buffer:file$Text$to_path */
(nitmethod_t)core___core__Text___chomp, /* pointer to abstract_text:Buffer:abstract_text$Text$chomp */
(nitmethod_t)core___core__Text___r_trim, /* pointer to abstract_text:Buffer:abstract_text$Text$r_trim */
(nitmethod_t)core___core__Text___l_trim, /* pointer to abstract_text:Buffer:abstract_text$Text$l_trim */
(nitmethod_t)csv___core__Text___escape_to_csv, /* pointer to abstract_text:Buffer:csv$Text$escape_to_csv */
(nitmethod_t)core___core__Text___escape_to_sh, /* pointer to abstract_text:Buffer:abstract_text$Text$escape_to_sh */
(nitmethod_t)core___core__Buffer___Text__to_lower, /* pointer to abstract_text:Buffer:abstract_text$Buffer$to_lower */
(nitmethod_t)csv___core__Text___chars_to_escape_csv, /* pointer to abstract_text:Buffer:csv$Text$chars_to_escape_csv */
(nitmethod_t)core___core__Text___escape_to_mk, /* pointer to abstract_text:Buffer:abstract_text$Text$escape_to_mk */
(nitmethod_t)core__string_search___Text___replace, /* pointer to abstract_text:Buffer:string_search$Text$replace */
(nitmethod_t)core___core__Text___index_of, /* pointer to abstract_text:Buffer:abstract_text$Text$index_of */
(nitmethod_t)core___core__Text___last_index_of, /* pointer to abstract_text:Buffer:abstract_text$Text$last_index_of */
(nitmethod_t)core___core__Text___first, /* pointer to abstract_text:Buffer:abstract_text$Text$first */
(nitmethod_t)core__fixed_ints_text___Text___to_num, /* pointer to abstract_text:Buffer:fixed_ints_text$Text$to_num */
(nitmethod_t)core___core__Text___to_f, /* pointer to abstract_text:Buffer:abstract_text$Text$to_f */
(nitmethod_t)core___core__Text___unescape_nit, /* pointer to abstract_text:Buffer:abstract_text$Text$unescape_nit */
(nitmethod_t)core___core__Text___index_of_from, /* pointer to abstract_text:Buffer:abstract_text$Text$index_of_from */
(nitmethod_t)core__bytes___Text___unescape_to_bytes, /* pointer to abstract_text:Buffer:bytes$Text$unescape_to_bytes */
(nitmethod_t)core__bytes___Text___to_bytes, /* pointer to abstract_text:Buffer:bytes$Text$to_bytes */
(nitmethod_t)core__fixed_ints_text___Text___is_num, /* pointer to abstract_text:Buffer:fixed_ints_text$Text$is_num */
(nitmethod_t)core__fixed_ints_text___Text___get_numext, /* pointer to abstract_text:Buffer:fixed_ints_text$Text$get_numext */
(nitmethod_t)core__fixed_ints_text___Text___strip_numext, /* pointer to abstract_text:Buffer:fixed_ints_text$Text$strip_numext */
(nitmethod_t)core__bytes___Text___append_to_bytes, /* pointer to abstract_text:Buffer:bytes$Text$append_to_bytes */
(nitmethod_t)core___core__Buffer___Text__to_upper, /* pointer to abstract_text:Buffer:abstract_text$Buffer$to_upper */
(nitmethod_t)core__flat___Buffer___new, /* pointer to abstract_text:Buffer:flat$Buffer$new */
(nitmethod_t)core___core__Buffer___append, /* pointer to abstract_text:Buffer:abstract_text$Buffer$append */
(nitmethod_t)core__flat___Buffer___with_cap, /* pointer to abstract_text:Buffer:flat$Buffer$with_cap */
(nitmethod_t)core___core__Buffer___snake_case, /* pointer to abstract_text:Buffer:abstract_text$Buffer$snake_case */
(nitmethod_t)core___core__Buffer___written_61d, /* pointer to abstract_text:Buffer:abstract_text$Buffer$written= */
(nitmethod_t)core___core__Buffer___enlarge, /* pointer to abstract_text:Buffer:abstract_text$Buffer$enlarge */
(nitmethod_t)core___core__Buffer___insert_char, /* pointer to abstract_text:Buffer:abstract_text$Buffer$insert_char */
(nitmethod_t)core___core__Buffer____91d_93d_61d, /* pointer to abstract_text:Buffer:abstract_text$Buffer$[]= */
(nitmethod_t)core___core__Buffer___add, /* pointer to abstract_text:Buffer:abstract_text$Buffer$add */
(nitmethod_t)core___core__Buffer___written, /* pointer to abstract_text:Buffer:abstract_text$Buffer$written */
(nitmethod_t)core___core__Buffer___lower, /* pointer to abstract_text:Buffer:abstract_text$Buffer$lower */
(nitmethod_t)core___core__Buffer___upper, /* pointer to abstract_text:Buffer:abstract_text$Buffer$upper */
}
};
/* allocate Buffer */
val* NEW_core__Buffer(const struct type* type) {
val* self /* : Buffer */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__Buffer;
self->attrs[COLOR_core__abstract_text__Buffer___written].s = 0; /* _written on <self:Buffer exact> */
return self;
}
/* runtime class core__abstract_text__BufferCharView: core::abstract_text::BufferCharView (dead=true; need_corpse=false)*/
/* allocate BufferCharView */
val* NEW_core__abstract_text__BufferCharView(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "BufferCharView is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__abstract_text__BufferByteView: core::abstract_text::BufferByteView (dead=true; need_corpse=false)*/
/* allocate BufferByteView */
val* NEW_core__abstract_text__BufferByteView(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "BufferByteView is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__CachedAlphaComparator: core::CachedAlphaComparator (dead=false; need_corpse=false)*/
const struct class class_core__CachedAlphaComparator = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to abstract_text:CachedAlphaComparator:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to abstract_text:CachedAlphaComparator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to abstract_text:CachedAlphaComparator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to abstract_text:CachedAlphaComparator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to abstract_text:CachedAlphaComparator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to abstract_text:CachedAlphaComparator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to abstract_text:CachedAlphaComparator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to abstract_text:CachedAlphaComparator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to abstract_text:CachedAlphaComparator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to abstract_text:CachedAlphaComparator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to abstract_text:CachedAlphaComparator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to abstract_text:CachedAlphaComparator:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Comparator___sort, /* pointer to abstract_text:CachedAlphaComparator:sorter$Comparator$sort */
(nitmethod_t)core___core__Comparator___sub_sort, /* pointer to abstract_text:CachedAlphaComparator:sorter$Comparator$sub_sort */
(nitmethod_t)core___core__Comparator___quick_sort, /* pointer to abstract_text:CachedAlphaComparator:sorter$Comparator$quick_sort */
(nitmethod_t)core___core__Comparator___bubble_sort, /* pointer to abstract_text:CachedAlphaComparator:sorter$Comparator$bubble_sort */
(nitmethod_t)core___core__CachedAlphaComparator___core__sorter__Comparator__compare, /* pointer to abstract_text:CachedAlphaComparator:abstract_text$CachedAlphaComparator$compare */
(nitmethod_t)core___core__CachedAlphaComparator___do_to_s, /* pointer to abstract_text:CachedAlphaComparator:abstract_text$CachedAlphaComparator$do_to_s */
(nitmethod_t)core___core__CachedAlphaComparator___cache, /* pointer to abstract_text:CachedAlphaComparator:abstract_text$CachedAlphaComparator$cache */
}
};
/* allocate CachedAlphaComparator */
val* NEW_core__CachedAlphaComparator(const struct type* type) {
val* self /* : CachedAlphaComparator */;
val* var /* : HashMap[Object, String] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__CachedAlphaComparator;
var = NEW_core__HashMap(&type_core__HashMap__core__Object__core__String);
{
core___core__HashMap___core__kernel__Object__init(var); /* Direct call hash_collection$HashMap$init on <var:HashMap[Object, String]>*/
}
self->attrs[COLOR_core__abstract_text__CachedAlphaComparator___cache].val = var; /* _cache on <self:CachedAlphaComparator exact> */
return self;
}
/* runtime class core__abstract_text__AlphaComparator: core::abstract_text::AlphaComparator (dead=false; need_corpse=false)*/
const struct class class_core__abstract_text__AlphaComparator = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to abstract_text:AlphaComparator:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to abstract_text:AlphaComparator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to abstract_text:AlphaComparator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to abstract_text:AlphaComparator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to abstract_text:AlphaComparator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to abstract_text:AlphaComparator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to abstract_text:AlphaComparator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to abstract_text:AlphaComparator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to abstract_text:AlphaComparator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to abstract_text:AlphaComparator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to abstract_text:AlphaComparator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to abstract_text:AlphaComparator:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Comparator___sort, /* pointer to abstract_text:AlphaComparator:sorter$Comparator$sort */
(nitmethod_t)core___core__Comparator___sub_sort, /* pointer to abstract_text:AlphaComparator:sorter$Comparator$sub_sort */
(nitmethod_t)core___core__Comparator___quick_sort, /* pointer to abstract_text:AlphaComparator:sorter$Comparator$quick_sort */
(nitmethod_t)core___core__Comparator___bubble_sort, /* pointer to abstract_text:AlphaComparator:sorter$Comparator$bubble_sort */
(nitmethod_t)core__abstract_text___core__abstract_text__AlphaComparator___core__sorter__Comparator__compare, /* pointer to abstract_text:AlphaComparator:abstract_text$AlphaComparator$compare */
}
};
/* allocate AlphaComparator */
val* NEW_core__abstract_text__AlphaComparator(const struct type* type) {
val* self /* : AlphaComparator */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__abstract_text__AlphaComparator;
return self;
}
/* runtime class core__CString: core::CString (dead=false; need_corpse=true)*/
const struct class class_core__CString = {
6, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to native:CString:kernel$Object$init */
(nitmethod_t)VIRTUAL_core___core__CString___core__kernel__Object___33d_61d, /* pointer to native:CString:native$CString$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to native:CString:kernel$Object$sys */
(nitmethod_t)VIRTUAL_core__flat___CString___core__abstract_text__Object__to_s, /* pointer to native:CString:flat$CString$to_s */
(nitmethod_t)VIRTUAL_core___core__CString___core__kernel__Object___61d_61d, /* pointer to native:CString:native$CString$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to native:CString:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to native:CString:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to native:CString:kernel$Object$object_id */
(nitmethod_t)core___core__Pointer___Object__hash, /* pointer to native:CString:kernel$Pointer$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to native:CString:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to native:CString:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to native:CString:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Pointer___native_equals, /* pointer to native:CString:kernel$Pointer$native_equals */
(nitmethod_t)core___core__Pointer___address_is_null, /* pointer to native:CString:kernel$Pointer$address_is_null */
(nitmethod_t)core___core__Pointer___free, /* pointer to native:CString:kernel$Pointer$free */
(nitmethod_t)core___core__CString___new, /* pointer to native:CString:native$CString$new */
(nitmethod_t)core__flat___CString___to_s_unsafe, /* pointer to native:CString:flat$CString$to_s_unsafe */
(nitmethod_t)core__environ___CString___get_environ, /* pointer to native:CString:environ$CString$get_environ */
(nitmethod_t)core___core__CString___cstring_length, /* pointer to native:CString:native$CString$cstring_length */
(nitmethod_t)core__flat___CString___clean_utf8, /* pointer to native:CString:flat$CString$clean_utf8 */
(nitmethod_t)core___core__CString___utf8_length, /* pointer to native:CString:native$CString$utf8_length */
(nitmethod_t)core___core__CString___copy_to, /* pointer to native:CString:native$CString$copy_to */
(nitmethod_t)core___core__CString____91d_93d_61d, /* pointer to native:CString:native$CString$[]= */
(nitmethod_t)core___core__CString____91d_93d, /* pointer to native:CString:native$CString$[] */
(nitmethod_t)core___core__CString___fetch_95d4_chars, /* pointer to native:CString:native$CString$fetch_4_chars */
(nitmethod_t)core___core__CString___length_of_char_at, /* pointer to native:CString:native$CString$length_of_char_at */
(nitmethod_t)core___core__CString___char_at, /* pointer to native:CString:native$CString$char_at */
(nitmethod_t)core__file___CString___file_exists, /* pointer to native:CString:file$CString$file_exists */
(nitmethod_t)core___core__CString___fetch_95d4_hchars, /* pointer to native:CString:native$CString$fetch_4_hchars */
(nitmethod_t)core___core__CString___find_beginning_of_char_at, /* pointer to native:CString:native$CString$find_beginning_of_char_at */
(nitmethod_t)core___core__CString___char_to_byte_index_cached, /* pointer to native:CString:native$CString$char_to_byte_index_cached */
(nitmethod_t)core___core__CString___char_to_byte_index, /* pointer to native:CString:native$CString$char_to_byte_index */
(nitmethod_t)core__flat___CString___set_char_at, /* pointer to native:CString:flat$CString$set_char_at */
(nitmethod_t)core__file___CString___file_stat, /* pointer to native:CString:file$CString$file_stat */
(nitmethod_t)core__file___CString___file_realpath, /* pointer to native:CString:file$CString$file_realpath */
(nitmethod_t)core__file___CString___file_mkdir, /* pointer to native:CString:file$CString$file_mkdir */
(nitmethod_t)core__exec___CString___system, /* pointer to native:CString:exec$CString$system */
(nitmethod_t)core___core__CString___atof, /* pointer to native:CString:native$CString$atof */
}
};
/* allocate CString */
val* BOX_core__CString(void* value) {
struct instance_core__CString*res = nit_alloc(sizeof(struct instance_core__CString));
res->type = &type_core__CString;
res->class = &class_core__CString;
res->value = value;
return (val*)res;
}
/* runtime class core__Object: core::Object (dead=true; need_corpse=false)*/
/* allocate Object */
val* NEW_core__Object(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Object is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Sys: core::Sys (dead=false; need_corpse=false)*/
const struct class class_core__Sys = {
0, /* box_kind */
{
(nitmethod_t)core__environ___Sys___core__kernel__Object__init, /* pointer to kernel:Sys:environ$Sys$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to kernel:Sys:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to kernel:Sys:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to kernel:Sys:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to kernel:Sys:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to kernel:Sys:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to kernel:Sys:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to kernel:Sys:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to kernel:Sys:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to kernel:Sys:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to kernel:Sys:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to kernel:Sys:abstract_text$Object$native_class_name */
(nitmethod_t)core__utf8___Sys___utf8_codec, /* pointer to kernel:Sys:utf8$Sys$utf8_codec */
(nitmethod_t)core___core__Sys___run, /* pointer to kernel:Sys:kernel$Sys$run */
(nitmethod_t)core__math___Sys___srand_from, /* pointer to kernel:Sys:math$Sys$srand_from */
(nitmethod_t)core__file___Sys___buffer_mode_line, /* pointer to kernel:Sys:file$Sys$buffer_mode_line */
(nitmethod_t)nitc__abstract_compiler___core__Sys___main, /* pointer to kernel:Sys:abstract_compiler$Sys$main */
(nitmethod_t)core__math___Sys___srand, /* pointer to kernel:Sys:math$Sys$srand */
(nitmethod_t)core___core__Sys___errno, /* pointer to kernel:Sys:kernel$Sys$errno */
(nitmethod_t)core__sorter___Sys___default_comparator, /* pointer to kernel:Sys:sorter$Sys$default_comparator */
(nitmethod_t)core__abstract_text___Sys___args, /* pointer to kernel:Sys:abstract_text$Sys$args */
(nitmethod_t)core__file___Sys___print, /* pointer to kernel:Sys:file$Sys$print */
(nitmethod_t)core___core__Sys___exit, /* pointer to kernel:Sys:kernel$Sys$exit */
(nitmethod_t)core__abstract_text___Sys___program_args, /* pointer to kernel:Sys:abstract_text$Sys$program_args */
(nitmethod_t)core__file___Sys___stdout, /* pointer to kernel:Sys:file$Sys$stdout */
(nitmethod_t)core__time___Sys___get_time, /* pointer to kernel:Sys:time$Sys$get_time */
(nitmethod_t)core__ropes___Sys___maxlen, /* pointer to kernel:Sys:ropes$Sys$maxlen */
(nitmethod_t)core__file___Sys___stderr, /* pointer to kernel:Sys:file$Sys$stderr */
(nitmethod_t)core__abstract_text___Sys___init_args, /* pointer to kernel:Sys:abstract_text$Sys$init_args */
(nitmethod_t)nitc__model_base___core__Sys___private_visibility, /* pointer to kernel:Sys:model_base$Sys$private_visibility */
(nitmethod_t)core__abstract_text___Sys___native_argc, /* pointer to kernel:Sys:abstract_text$Sys$native_argc */
(nitmethod_t)core__abstract_text___Sys___native_argv, /* pointer to kernel:Sys:abstract_text$Sys$native_argv */
(nitmethod_t)nitc__model___core__Sys___extern_kind, /* pointer to kernel:Sys:model$Sys$extern_kind */
(nitmethod_t)nitc__model___core__Sys___concrete_kind, /* pointer to kernel:Sys:model$Sys$concrete_kind */
(nitmethod_t)nitc__model___core__Sys___abstract_kind, /* pointer to kernel:Sys:model$Sys$abstract_kind */
(nitmethod_t)nitc__model___core__Sys___interface_kind, /* pointer to kernel:Sys:model$Sys$interface_kind */
(nitmethod_t)nitc__model___core__Sys___enum_kind, /* pointer to kernel:Sys:model$Sys$enum_kind */
(nitmethod_t)nitc__model_base___core__Sys___public_visibility, /* pointer to kernel:Sys:model_base$Sys$public_visibility */
(nitmethod_t)core__file___Sys___print_error, /* pointer to kernel:Sys:file$Sys$print_error */
(nitmethod_t)core__abstract_text___Sys___alpha_comparator, /* pointer to kernel:Sys:abstract_text$Sys$alpha_comparator */
(nitmethod_t)core___core__Sys___is_windows, /* pointer to kernel:Sys:kernel$Sys$is_windows */
(nitmethod_t)nitc__model_base___core__Sys___protected_visibility, /* pointer to kernel:Sys:model_base$Sys$protected_visibility */
(nitmethod_t)counter___core__Sys___div, /* pointer to kernel:Sys:counter$Sys$div */
(nitmethod_t)core__file___Sys___getcwd, /* pointer to kernel:Sys:file$Sys$getcwd */
(nitmethod_t)nitc__model_base___core__Sys___intrude_visibility, /* pointer to kernel:Sys:model_base$Sys$intrude_visibility */
(nitmethod_t)core__file___Sys___printn, /* pointer to kernel:Sys:file$Sys$printn */
(nitmethod_t)core__file___Sys___native_getcwd, /* pointer to kernel:Sys:file$Sys$native_getcwd */
(nitmethod_t)nitc__model_base___core__Sys___none_visibility, /* pointer to kernel:Sys:model_base$Sys$none_visibility */
(nitmethod_t)core__exec___Sys___system, /* pointer to kernel:Sys:exec$Sys$system */
(nitmethod_t)nitc__version___core__Sys___nit_version, /* pointer to kernel:Sys:version$Sys$nit_version */
(nitmethod_t)core__abstract_text___Sys___program_name, /* pointer to kernel:Sys:abstract_text$Sys$program_name */
(nitmethod_t)nitc__nitni_utilities___core__Sys___long_signature, /* pointer to kernel:Sys:nitni_utilities$Sys$long_signature */
(nitmethod_t)nitc__nitni_utilities___core__Sys___internal_call_context, /* pointer to kernel:Sys:nitni_utilities$Sys$internal_call_context */
(nitmethod_t)nitc__light_c___core__Sys___from_c_call_context, /* pointer to kernel:Sys:light_c$Sys$from_c_call_context */
(nitmethod_t)core__math___Sys___core__kernel__Object__init, /* pointer to kernel:Sys:math$Sys$init */
(nitmethod_t)core___core__Object___init, /* pointer to kernel:Sys:kernel$Object$init */
}
};
/* allocate Sys */
val* NEW_core__Sys(const struct type* type) {
val* self /* : Sys */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__Sys;
return self;
}
/* runtime class core__Comparable: core::Comparable (dead=true; need_corpse=false)*/
/* allocate Comparable */
val* NEW_core__Comparable(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Comparable is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Discrete: core::Discrete (dead=true; need_corpse=false)*/
/* allocate Discrete */
val* NEW_core__Discrete(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Discrete is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Cloneable: core::Cloneable (dead=true; need_corpse=false)*/
/* allocate Cloneable */
val* NEW_core__Cloneable(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cloneable is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Numeric: core::Numeric (dead=true; need_corpse=false)*/
/* allocate Numeric */
val* NEW_core__Numeric(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Numeric is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Bool: core::Bool (dead=false; need_corpse=true)*/
const struct class class_core__Bool = {
2, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to kernel:Bool:kernel$Object$init */
(nitmethod_t)VIRTUAL_core___core__Bool___Object___33d_61d, /* pointer to kernel:Bool:kernel$Bool$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to kernel:Bool:kernel$Object$sys */
(nitmethod_t)VIRTUAL_core__abstract_text___Bool___Object__to_s, /* pointer to kernel:Bool:abstract_text$Bool$to_s */
(nitmethod_t)VIRTUAL_core___core__Bool___Object___61d_61d, /* pointer to kernel:Bool:kernel$Bool$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to kernel:Bool:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to kernel:Bool:abstract_text$Object$inspect */
(nitmethod_t)VIRTUAL_core___core__Bool___Object__object_id, /* pointer to kernel:Bool:kernel$Bool$object_id */
(nitmethod_t)VIRTUAL_core___core__Bool___Object__hash, /* pointer to kernel:Bool:kernel$Bool$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to kernel:Bool:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to kernel:Bool:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to kernel:Bool:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Bool___to_i, /* pointer to kernel:Bool:kernel$Bool$to_i */
}
};
/* runtime class core__Float: core::Float (dead=false; need_corpse=true)*/
const struct class class_core__Float = {
5, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to kernel:Float:kernel$Object$init */
(nitmethod_t)VIRTUAL_core___core__Float___Object___33d_61d, /* pointer to kernel:Float:kernel$Float$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to kernel:Float:kernel$Object$sys */
(nitmethod_t)VIRTUAL_core__abstract_text___Float___Object__to_s, /* pointer to kernel:Float:abstract_text$Float$to_s */
(nitmethod_t)VIRTUAL_core___core__Float___Object___61d_61d, /* pointer to kernel:Float:kernel$Float$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to kernel:Float:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to kernel:Float:abstract_text$Object$inspect */
(nitmethod_t)VIRTUAL_core___core__Float___Object__object_id, /* pointer to kernel:Float:kernel$Float$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to kernel:Float:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to kernel:Float:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to kernel:Float:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to kernel:Float:abstract_text$Object$native_class_name */
(nitmethod_t)VIRTUAL_core___core__Float___Comparable___60d_61d, /* pointer to kernel:Float:kernel$Float$<= */
(nitmethod_t)VIRTUAL_core___core__Float___Comparable___62d, /* pointer to kernel:Float:kernel$Float$> */
(nitmethod_t)VIRTUAL_core___core__Float___Comparable___62d_61d, /* pointer to kernel:Float:kernel$Float$>= */
(nitmethod_t)VIRTUAL_core___core__Float___Comparable___60d, /* pointer to kernel:Float:kernel$Float$< */
(nitmethod_t)VIRTUAL_core___core__Float___Comparable___60d_61d_62d, /* pointer to kernel:Float:kernel$Float$<=> */
(nitmethod_t)VIRTUAL_core___core__Float___Comparable__min, /* pointer to kernel:Float:kernel$Float$min */
(nitmethod_t)VIRTUAL_core___core__Float___Comparable__max, /* pointer to kernel:Float:kernel$Float$max */
(nitmethod_t)core__abstract_text___Float___to_precision, /* pointer to kernel:Float:abstract_text$Float$to_precision */
(nitmethod_t)VIRTUAL_core___core__Float___Numeric___43d, /* pointer to kernel:Float:kernel$Float$+ */
(nitmethod_t)VIRTUAL_core___core__Float___Numeric___45d, /* pointer to kernel:Float:kernel$Float$- */
(nitmethod_t)VIRTUAL_core___core__Float___Numeric__unary_32d_45d, /* pointer to kernel:Float:kernel$Float$unary - */
(nitmethod_t)core__math___Float___is_inf, /* pointer to kernel:Float:math$Float$is_inf */
(nitmethod_t)VIRTUAL_core___core__Float___Numeric__to_i, /* pointer to kernel:Float:kernel$Float$to_i */
(nitmethod_t)VIRTUAL_core___core__Float___Numeric___42d, /* pointer to kernel:Float:kernel$Float$* */
(nitmethod_t)VIRTUAL_core___core__Float___Numeric__to_b, /* pointer to kernel:Float:kernel$Float$to_b */
(nitmethod_t)VIRTUAL_core__fixed_ints___Float___Numeric__to_i8, /* pointer to kernel:Float:fixed_ints$Float$to_i8 */
(nitmethod_t)VIRTUAL_core__fixed_ints___Float___Numeric__to_i16, /* pointer to kernel:Float:fixed_ints$Float$to_i16 */
(nitmethod_t)VIRTUAL_core__fixed_ints___Float___Numeric__to_u16, /* pointer to kernel:Float:fixed_ints$Float$to_u16 */
(nitmethod_t)VIRTUAL_core__fixed_ints___Float___Numeric__to_i32, /* pointer to kernel:Float:fixed_ints$Float$to_i32 */
(nitmethod_t)VIRTUAL_core__fixed_ints___Float___Numeric__to_u32, /* pointer to kernel:Float:fixed_ints$Float$to_u32 */
(nitmethod_t)VIRTUAL_core___core__Float___Numeric___47d, /* pointer to kernel:Float:kernel$Float$/ */
(nitmethod_t)VIRTUAL_core___core__Float___Numeric__to_f, /* pointer to kernel:Float:kernel$Float$to_f */
(nitmethod_t)core__math___Float___is_nan, /* pointer to kernel:Float:math$Float$is_nan */
(nitmethod_t)core__math___Float___native_is_inf, /* pointer to kernel:Float:math$Float$native_is_inf */
}
};
/* allocate Float */
val* BOX_core__Float(double value) {
struct instance_core__Float*res = nit_alloc(sizeof(struct instance_core__Float));
res->type = &type_core__Float;
res->class = &class_core__Float;
res->value = value;
return (val*)res;
}
/* runtime class core__Byte: core::Byte (dead=false; need_corpse=true)*/
const struct class class_core__Byte = {
3, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to kernel:Byte:kernel$Object$init */
(nitmethod_t)VIRTUAL_core___core__Byte___Object___33d_61d, /* pointer to kernel:Byte:kernel$Byte$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to kernel:Byte:kernel$Object$sys */
(nitmethod_t)VIRTUAL_core__abstract_text___Byte___Object__to_s, /* pointer to kernel:Byte:abstract_text$Byte$to_s */
(nitmethod_t)VIRTUAL_core___core__Byte___Object___61d_61d, /* pointer to kernel:Byte:kernel$Byte$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to kernel:Byte:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to kernel:Byte:abstract_text$Object$inspect */
(nitmethod_t)VIRTUAL_core___core__Byte___Object__object_id, /* pointer to kernel:Byte:kernel$Byte$object_id */
(nitmethod_t)VIRTUAL_core___core__Byte___Object__hash, /* pointer to kernel:Byte:kernel$Byte$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to kernel:Byte:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to kernel:Byte:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to kernel:Byte:abstract_text$Object$native_class_name */
(nitmethod_t)VIRTUAL_core___core__Byte___Comparable___60d_61d, /* pointer to kernel:Byte:kernel$Byte$<= */
(nitmethod_t)VIRTUAL_core___core__Byte___Comparable___62d, /* pointer to kernel:Byte:kernel$Byte$> */
(nitmethod_t)VIRTUAL_core___core__Byte___Comparable___62d_61d, /* pointer to kernel:Byte:kernel$Byte$>= */
(nitmethod_t)VIRTUAL_core___core__Byte___Comparable___60d, /* pointer to kernel:Byte:kernel$Byte$< */
(nitmethod_t)VIRTUAL_core___core__Byte___Comparable___60d_61d_62d, /* pointer to kernel:Byte:kernel$Byte$<=> */
(nitmethod_t)VIRTUAL_core___core__Byte___Comparable__min, /* pointer to kernel:Byte:kernel$Byte$min */
(nitmethod_t)VIRTUAL_core___core__Byte___Comparable__max, /* pointer to kernel:Byte:kernel$Byte$max */
(nitmethod_t)VIRTUAL_core___core__Byte___Discrete__successor, /* pointer to kernel:Byte:kernel$Byte$successor */
(nitmethod_t)VIRTUAL_core___core__Byte___Numeric___43d, /* pointer to kernel:Byte:kernel$Byte$+ */
(nitmethod_t)VIRTUAL_core___core__Byte___Numeric___45d, /* pointer to kernel:Byte:kernel$Byte$- */
(nitmethod_t)VIRTUAL_core___core__Byte___Numeric__unary_32d_45d, /* pointer to kernel:Byte:kernel$Byte$unary - */
(nitmethod_t)VIRTUAL_core___core__Byte___Discrete__distance, /* pointer to kernel:Byte:kernel$Byte$distance */
(nitmethod_t)VIRTUAL_core___core__Byte___Numeric__to_i, /* pointer to kernel:Byte:kernel$Byte$to_i */
(nitmethod_t)VIRTUAL_core___core__Byte___Numeric___42d, /* pointer to kernel:Byte:kernel$Byte$* */
(nitmethod_t)VIRTUAL_core___core__Byte___Numeric__to_b, /* pointer to kernel:Byte:kernel$Byte$to_b */
(nitmethod_t)VIRTUAL_core__fixed_ints___Byte___Numeric__to_i8, /* pointer to kernel:Byte:fixed_ints$Byte$to_i8 */
(nitmethod_t)VIRTUAL_core__fixed_ints___Byte___Numeric__to_i16, /* pointer to kernel:Byte:fixed_ints$Byte$to_i16 */
(nitmethod_t)VIRTUAL_core__fixed_ints___Byte___Numeric__to_u16, /* pointer to kernel:Byte:fixed_ints$Byte$to_u16 */
(nitmethod_t)VIRTUAL_core__fixed_ints___Byte___Numeric__to_i32, /* pointer to kernel:Byte:fixed_ints$Byte$to_i32 */
(nitmethod_t)VIRTUAL_core__fixed_ints___Byte___Numeric__to_u32, /* pointer to kernel:Byte:fixed_ints$Byte$to_u32 */
(nitmethod_t)VIRTUAL_core___core__Byte___Numeric___47d, /* pointer to kernel:Byte:kernel$Byte$/ */
(nitmethod_t)VIRTUAL_core___core__Byte___Numeric__to_f, /* pointer to kernel:Byte:kernel$Byte$to_f */
(nitmethod_t)core__abstract_text___Byte___byte_to_s_len, /* pointer to kernel:Byte:abstract_text$Byte$byte_to_s_len */
(nitmethod_t)core__abstract_text___Byte___native_byte_to_s, /* pointer to kernel:Byte:abstract_text$Byte$native_byte_to_s */
(nitmethod_t)core__math___Byte____38d, /* pointer to kernel:Byte:math$Byte$& */
(nitmethod_t)core___core__Byte___ascii, /* pointer to kernel:Byte:kernel$Byte$ascii */
(nitmethod_t)core___core__Byte____62d_62d, /* pointer to kernel:Byte:kernel$Byte$>> */
}
};
/* allocate Byte */
val* BOX_core__Byte(unsigned char value) {
struct instance_core__Byte*res = nit_alloc(sizeof(struct instance_core__Byte));
res->type = &type_core__Byte;
res->class = &class_core__Byte;
res->value = value;
return (val*)res;
}
/* runtime class core__Int: core::Int (dead=false; need_corpse=true)*/
const struct class class_core__Int = {
1, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to kernel:Int:kernel$Object$init */
(nitmethod_t)VIRTUAL_core___core__Int___Object___33d_61d, /* pointer to kernel:Int:kernel$Int$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to kernel:Int:kernel$Object$sys */
(nitmethod_t)VIRTUAL_core__flat___Int___core__abstract_text__Object__to_s, /* pointer to kernel:Int:flat$Int$to_s */
(nitmethod_t)VIRTUAL_core___core__Int___Object___61d_61d, /* pointer to kernel:Int:kernel$Int$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to kernel:Int:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to kernel:Int:abstract_text$Object$inspect */
(nitmethod_t)VIRTUAL_core___core__Int___Object__object_id, /* pointer to kernel:Int:kernel$Int$object_id */
(nitmethod_t)VIRTUAL_core___core__Int___Object__hash, /* pointer to kernel:Int:kernel$Int$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to kernel:Int:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to kernel:Int:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to kernel:Int:abstract_text$Object$native_class_name */
(nitmethod_t)VIRTUAL_core___core__Int___Comparable___60d_61d, /* pointer to kernel:Int:kernel$Int$<= */
(nitmethod_t)VIRTUAL_core___core__Int___Comparable___62d, /* pointer to kernel:Int:kernel$Int$> */
(nitmethod_t)VIRTUAL_core___core__Int___Comparable___62d_61d, /* pointer to kernel:Int:kernel$Int$>= */
(nitmethod_t)VIRTUAL_core___core__Int___Comparable___60d, /* pointer to kernel:Int:kernel$Int$< */
(nitmethod_t)VIRTUAL_core___core__Int___Comparable___60d_61d_62d, /* pointer to kernel:Int:kernel$Int$<=> */
(nitmethod_t)VIRTUAL_core___core__Int___Comparable__min, /* pointer to kernel:Int:kernel$Int$min */
(nitmethod_t)VIRTUAL_core___core__Int___Comparable__max, /* pointer to kernel:Int:kernel$Int$max */
(nitmethod_t)VIRTUAL_core___core__Int___Discrete__successor, /* pointer to kernel:Int:kernel$Int$successor */
(nitmethod_t)VIRTUAL_core___core__Int___Numeric___43d, /* pointer to kernel:Int:kernel$Int$+ */
(nitmethod_t)VIRTUAL_core___core__Int___Numeric___45d, /* pointer to kernel:Int:kernel$Int$- */
(nitmethod_t)VIRTUAL_core___core__Int___Numeric__unary_32d_45d, /* pointer to kernel:Int:kernel$Int$unary - */
(nitmethod_t)VIRTUAL_core___core__Int___Discrete__distance, /* pointer to kernel:Int:kernel$Int$distance */
(nitmethod_t)VIRTUAL_core___core__Int___Numeric__to_i, /* pointer to kernel:Int:kernel$Int$to_i */
(nitmethod_t)VIRTUAL_core___core__Int___Numeric___42d, /* pointer to kernel:Int:kernel$Int$* */
(nitmethod_t)VIRTUAL_core___core__Int___Numeric__to_b, /* pointer to kernel:Int:kernel$Int$to_b */
(nitmethod_t)VIRTUAL_core__fixed_ints___Int___Numeric__to_i8, /* pointer to kernel:Int:fixed_ints$Int$to_i8 */
(nitmethod_t)VIRTUAL_core__fixed_ints___Int___Numeric__to_i16, /* pointer to kernel:Int:fixed_ints$Int$to_i16 */
(nitmethod_t)VIRTUAL_core__fixed_ints___Int___Numeric__to_u16, /* pointer to kernel:Int:fixed_ints$Int$to_u16 */
(nitmethod_t)VIRTUAL_core__fixed_ints___Int___Numeric__to_i32, /* pointer to kernel:Int:fixed_ints$Int$to_i32 */
(nitmethod_t)VIRTUAL_core__fixed_ints___Int___Numeric__to_u32, /* pointer to kernel:Int:fixed_ints$Int$to_u32 */
(nitmethod_t)VIRTUAL_core___core__Int___Numeric___47d, /* pointer to kernel:Int:kernel$Int$/ */
(nitmethod_t)VIRTUAL_core___core__Int___Numeric__to_f, /* pointer to kernel:Int:kernel$Int$to_f */
(nitmethod_t)core__abstract_text___Int___strerror, /* pointer to kernel:Int:abstract_text$Int$strerror */
(nitmethod_t)core__abstract_text___Int___int_to_s_len, /* pointer to kernel:Int:abstract_text$Int$int_to_s_len */
(nitmethod_t)core__abstract_text___Int___native_int_to_s, /* pointer to kernel:Int:abstract_text$Int$native_int_to_s */
(nitmethod_t)core__abstract_text___Int___strerror_ext, /* pointer to kernel:Int:abstract_text$Int$strerror_ext */
(nitmethod_t)core___core__Int___abs, /* pointer to kernel:Int:kernel$Int$abs */
(nitmethod_t)core___core__Int___code_point, /* pointer to kernel:Int:kernel$Int$code_point */
(nitmethod_t)core___core__Int____60d_60d, /* pointer to kernel:Int:kernel$Int$<< */
(nitmethod_t)core__abstract_text___Int___to_hex, /* pointer to kernel:Int:abstract_text$Int$to_hex */
(nitmethod_t)core___core__Int____37d, /* pointer to kernel:Int:kernel$Int$% */
(nitmethod_t)core__abstract_text___Int___to_base, /* pointer to kernel:Int:abstract_text$Int$to_base */
(nitmethod_t)core___core__Int___digit_count, /* pointer to kernel:Int:kernel$Int$digit_count */
(nitmethod_t)core__abstract_text___Int___fill_buffer, /* pointer to kernel:Int:abstract_text$Int$fill_buffer */
(nitmethod_t)core__math___Int____124d, /* pointer to kernel:Int:math$Int$| */
(nitmethod_t)core___core__Int____62d_62d, /* pointer to kernel:Int:kernel$Int$>> */
(nitmethod_t)core__math___Int____38d, /* pointer to kernel:Int:math$Int$& */
(nitmethod_t)core___core__Int___digit_count_base_95d10, /* pointer to kernel:Int:kernel$Int$digit_count_base_10 */
(nitmethod_t)core___core__Int___to_c, /* pointer to kernel:Int:kernel$Int$to_c */
}
};
/* runtime class core__Char: core::Char (dead=false; need_corpse=true)*/
const struct class class_core__Char = {
4, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to kernel:Char:kernel$Object$init */
(nitmethod_t)VIRTUAL_core___core__Char___Object___33d_61d, /* pointer to kernel:Char:kernel$Char$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to kernel:Char:kernel$Object$sys */
(nitmethod_t)VIRTUAL_core__abstract_text___Char___Object__to_s, /* pointer to kernel:Char:abstract_text$Char$to_s */
(nitmethod_t)VIRTUAL_core___core__Char___Object___61d_61d, /* pointer to kernel:Char:kernel$Char$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to kernel:Char:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to kernel:Char:abstract_text$Object$inspect */
(nitmethod_t)VIRTUAL_core___core__Char___Object__object_id, /* pointer to kernel:Char:kernel$Char$object_id */
(nitmethod_t)VIRTUAL_core___core__Char___Object__hash, /* pointer to kernel:Char:kernel$Char$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to kernel:Char:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to kernel:Char:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to kernel:Char:abstract_text$Object$native_class_name */
(nitmethod_t)VIRTUAL_core___core__Char___Comparable___60d_61d, /* pointer to kernel:Char:kernel$Char$<= */
(nitmethod_t)VIRTUAL_core___core__Char___Comparable___62d, /* pointer to kernel:Char:kernel$Char$> */
(nitmethod_t)VIRTUAL_core___core__Char___Comparable___62d_61d, /* pointer to kernel:Char:kernel$Char$>= */
(nitmethod_t)VIRTUAL_core___core__Char___Comparable___60d, /* pointer to kernel:Char:kernel$Char$< */
(nitmethod_t)core___core__Comparable____60d_61d_62d, /* pointer to kernel:Char:kernel$Comparable$<=> */
(nitmethod_t)core___core__Comparable___min, /* pointer to kernel:Char:kernel$Comparable$min */
(nitmethod_t)core___core__Comparable___max, /* pointer to kernel:Char:kernel$Comparable$max */
(nitmethod_t)VIRTUAL_core___core__Char___Discrete__successor, /* pointer to kernel:Char:kernel$Char$successor */
(nitmethod_t)core___core__Pattern___split_in, /* pointer to kernel:Char:string_search$Pattern$split_in */
(nitmethod_t)VIRTUAL_core__string_search___Char___Pattern__search_in, /* pointer to kernel:Char:string_search$Char$search_in */
(nitmethod_t)VIRTUAL_core__string_search___Char___Pattern__search_index_in, /* pointer to kernel:Char:string_search$Char$search_index_in */
(nitmethod_t)VIRTUAL_core___core__Char___Discrete__distance, /* pointer to kernel:Char:kernel$Char$distance */
(nitmethod_t)core__abstract_text___Char___u8char_len, /* pointer to kernel:Char:abstract_text$Char$u8char_len */
(nitmethod_t)core__abstract_text___Char___u8char_tos, /* pointer to kernel:Char:abstract_text$Char$u8char_tos */
(nitmethod_t)core___core__Char___code_point, /* pointer to kernel:Char:kernel$Char$code_point */
(nitmethod_t)core__abstract_text___Char___is_numeric, /* pointer to kernel:Char:abstract_text$Char$is_numeric */
(nitmethod_t)core__abstract_text___Char___from_hex, /* pointer to kernel:Char:abstract_text$Char$from_hex */
(nitmethod_t)core__abstract_text___Char___is_hexdigit, /* pointer to kernel:Char:abstract_text$Char$is_hexdigit */
(nitmethod_t)core___core__Char___to_i, /* pointer to kernel:Char:kernel$Char$to_i */
(nitmethod_t)core___core__Char___is_upper, /* pointer to kernel:Char:kernel$Char$is_upper */
(nitmethod_t)core___core__Char___is_lower, /* pointer to kernel:Char:kernel$Char$is_lower */
(nitmethod_t)core___core__Char___to_lower, /* pointer to kernel:Char:kernel$Char$to_lower */
(nitmethod_t)core___core__Char___ascii, /* pointer to kernel:Char:kernel$Char$ascii */
(nitmethod_t)core___core__Char___is_digit, /* pointer to kernel:Char:kernel$Char$is_digit */
(nitmethod_t)core___core__Char___is_whitespace, /* pointer to kernel:Char:kernel$Char$is_whitespace */
(nitmethod_t)core___core__Char___to_upper, /* pointer to kernel:Char:kernel$Char$to_upper */
}
};
/* runtime class core__Pointer: core::Pointer (dead=false; need_corpse=true)*/
const struct class class_core__Pointer = {
7, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to kernel:Pointer:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to kernel:Pointer:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to kernel:Pointer:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to kernel:Pointer:abstract_text$Object$to_s */
(nitmethod_t)core___core__Pointer___Object___61d_61d, /* pointer to kernel:Pointer:kernel$Pointer$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to kernel:Pointer:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to kernel:Pointer:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to kernel:Pointer:kernel$Object$object_id */
(nitmethod_t)core___core__Pointer___Object__hash, /* pointer to kernel:Pointer:kernel$Pointer$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to kernel:Pointer:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to kernel:Pointer:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to kernel:Pointer:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Pointer___native_equals, /* pointer to kernel:Pointer:kernel$Pointer$native_equals */
(nitmethod_t)core___core__Pointer___address_is_null, /* pointer to kernel:Pointer:kernel$Pointer$address_is_null */
(nitmethod_t)core___core__Pointer___free, /* pointer to kernel:Pointer:kernel$Pointer$free */
}
};
/* allocate Pointer */
val* BOX_core__Pointer(void* value) {
struct instance_core__Pointer*res = nit_alloc(sizeof(struct instance_core__Pointer));
res->type = &type_core__Pointer;
res->class = &class_core__Pointer;
res->value = value;
return (val*)res;
}
/* allocate Pointer */
val* NEW_core__Pointer(const struct type* type) {
val* self /* : Pointer */;
self = nit_alloc(sizeof(struct instance_core__Pointer));
self->type = type;
self->class = &class_core__Pointer;
((struct instance_core__Pointer*)self)->value = NULL;
return self;
}
/* runtime class core__Task: core::Task (dead=true; need_corpse=false)*/
/* allocate Task */
val* NEW_core__Task(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Task is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Range: core::Range (dead=true; need_corpse=false)*/
/* allocate Range[Discrete] */
val* NEW_core__Range(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Range is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__range__IteratorRange: core::range::IteratorRange (dead=true; need_corpse=false)*/
/* allocate IteratorRange[Discrete] */
val* NEW_core__range__IteratorRange(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "IteratorRange is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__range__ReverseIteratorRange: core::range::ReverseIteratorRange (dead=true; need_corpse=false)*/
/* allocate ReverseIteratorRange[Discrete] */
val* NEW_core__range__ReverseIteratorRange(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "ReverseIteratorRange is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__range__DowntoIteratorRange: core::range::DowntoIteratorRange (dead=true; need_corpse=false)*/
/* allocate DowntoIteratorRange[Discrete] */
val* NEW_core__range__DowntoIteratorRange(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "DowntoIteratorRange is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Collection: core::Collection (dead=true; need_corpse=false)*/
/* allocate Collection[nullable Object] */
val* NEW_core__Collection(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Collection is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Iterator: core::Iterator (dead=true; need_corpse=false)*/
/* allocate Iterator[nullable Object] */
val* NEW_core__Iterator(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Iterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__IteratorDecorator: core::IteratorDecorator (dead=true; need_corpse=false)*/
/* allocate IteratorDecorator[nullable Object] */
val* NEW_core__IteratorDecorator(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "IteratorDecorator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__abstract_collection__StepIterator: core::abstract_collection::StepIterator (dead=true; need_corpse=false)*/
/* allocate StepIterator[nullable Object] */
val* NEW_core__abstract_collection__StepIterator(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "StepIterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Ref: core::Ref (dead=true; need_corpse=false)*/
/* allocate Ref[nullable Object] */
val* NEW_core__Ref(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Ref is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__abstract_collection__RefIterator: core::abstract_collection::RefIterator (dead=false; need_corpse=false)*/
const struct class class_core__abstract_collection__RefIterator = {
0, /* box_kind */
{
(nitmethod_t)core__abstract_collection___core__abstract_collection__RefIterator___core__kernel__Object__init, /* pointer to abstract_collection:RefIterator:abstract_collection$RefIterator$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to abstract_collection:RefIterator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to abstract_collection:RefIterator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to abstract_collection:RefIterator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to abstract_collection:RefIterator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to abstract_collection:RefIterator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to abstract_collection:RefIterator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to abstract_collection:RefIterator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to abstract_collection:RefIterator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to abstract_collection:RefIterator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to abstract_collection:RefIterator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to abstract_collection:RefIterator:abstract_text$Object$native_class_name */
(nitmethod_t)core__abstract_collection___core__abstract_collection__RefIterator___Iterator__is_ok, /* pointer to abstract_collection:RefIterator:abstract_collection$RefIterator$is_ok */
(nitmethod_t)core__abstract_collection___core__abstract_collection__RefIterator___Iterator__item, /* pointer to abstract_collection:RefIterator:abstract_collection$RefIterator$item */
(nitmethod_t)core__abstract_collection___core__abstract_collection__RefIterator___Iterator__next, /* pointer to abstract_collection:RefIterator:abstract_collection$RefIterator$next */
(nitmethod_t)core___core__Iterator___finish, /* pointer to abstract_collection:RefIterator:abstract_collection$Iterator$finish */
(nitmethod_t)core___core__Iterator___iterator, /* pointer to abstract_collection:RefIterator:abstract_collection$Iterator$iterator */
(nitmethod_t)core__array___Iterator___to_a, /* pointer to abstract_collection:RefIterator:array$Iterator$to_a */
(nitmethod_t)core__abstract_collection___core__abstract_collection__RefIterator___container_61d, /* pointer to abstract_collection:RefIterator:abstract_collection$RefIterator$container= */
(nitmethod_t)core__abstract_collection___core__abstract_collection__RefIterator___is_ok_61d, /* pointer to abstract_collection:RefIterator:abstract_collection$RefIterator$is_ok= */
(nitmethod_t)core___core__Object___init, /* pointer to abstract_collection:RefIterator:kernel$Object$init */
}
};
/* allocate RefIterator[nullable Object] */
val* NEW_core__abstract_collection__RefIterator(const struct type* type) {
val* self /* : RefIterator[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__abstract_collection__RefIterator;
self->attrs[COLOR_core__abstract_collection__RefIterator___is_ok].s = 1; /* _is_ok on <self:RefIterator[nullable Object] exact> */
return self;
}
/* runtime class core__RemovableCollection: core::RemovableCollection (dead=true; need_corpse=false)*/
/* allocate RemovableCollection[nullable Object] */
val* NEW_core__RemovableCollection(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "RemovableCollection is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__SimpleCollection: core::SimpleCollection (dead=true; need_corpse=false)*/
/* allocate SimpleCollection[nullable Object] */
val* NEW_core__SimpleCollection(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "SimpleCollection is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Set: core::Set (dead=false; need_corpse=false)*/
const struct class class_core__Set = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to abstract_collection:Set:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to abstract_collection:Set:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to abstract_collection:Set:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Collection___Object__to_s, /* pointer to abstract_collection:Set:abstract_text$Collection$to_s */
(nitmethod_t)core___core__Set___core__kernel__Object___61d_61d, /* pointer to abstract_collection:Set:abstract_collection$Set$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to abstract_collection:Set:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to abstract_collection:Set:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to abstract_collection:Set:kernel$Object$object_id */
(nitmethod_t)core___core__Set___core__kernel__Object__hash, /* pointer to abstract_collection:Set:abstract_collection$Set$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to abstract_collection:Set:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to abstract_collection:Set:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to abstract_collection:Set:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Set___union, /* pointer to abstract_collection:Set:abstract_collection$Set$union */
(nitmethod_t)core__hash_collection___Set___new, /* pointer to abstract_collection:Set:hash_collection$Set$new */
(nitmethod_t)core___core__Set___new_set, /* pointer to abstract_collection:Set:abstract_collection$Set$new_set */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core___core__Set___core__kernel__Cloneable__clone, /* pointer to abstract_collection:Set:abstract_collection$Set$clone */
(nitmethod_t)core__abstract_text___Collection___join, /* pointer to abstract_collection:Set:abstract_text$Collection$join */
(nitmethod_t)core__array___Collection___to_a, /* pointer to abstract_collection:Set:array$Collection$to_a */
(nitmethod_t)core___core__Collection___length, /* pointer to abstract_collection:Set:abstract_collection$Collection$length */
(nitmethod_t)core___core__Collection___is_empty, /* pointer to abstract_collection:Set:abstract_collection$Collection$is_empty */
(nitmethod_t)core___core__Collection___iterator, /* pointer to abstract_collection:Set:abstract_collection$Collection$iterator */
(nitmethod_t)core___core__Collection___has_exactly, /* pointer to abstract_collection:Set:abstract_collection$Collection$has_exactly */
(nitmethod_t)core___core__Collection___has_all, /* pointer to abstract_collection:Set:abstract_collection$Collection$has_all */
(nitmethod_t)core___core__Collection___has, /* pointer to abstract_collection:Set:abstract_collection$Collection$has */
(nitmethod_t)core___core__Set___Collection__count, /* pointer to abstract_collection:Set:abstract_collection$Set$count */
(nitmethod_t)core___core__Collection___first, /* pointer to abstract_collection:Set:abstract_collection$Collection$first */
(nitmethod_t)core___core__Collection___not_empty, /* pointer to abstract_collection:Set:abstract_collection$Collection$not_empty */
(nitmethod_t)core__abstract_text___Collection___plain_to_s, /* pointer to abstract_collection:Set:abstract_text$Collection$plain_to_s */
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
(nitmethod_t)core___core__RemovableCollection___clear, /* pointer to abstract_collection:Set:abstract_collection$RemovableCollection$clear */
(nitmethod_t)core___core__RemovableCollection___remove, /* pointer to abstract_collection:Set:abstract_collection$RemovableCollection$remove */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core___core__SimpleCollection___add, /* pointer to abstract_collection:Set:abstract_collection$SimpleCollection$add */
(nitmethod_t)core___core__SimpleCollection___add_all, /* pointer to abstract_collection:Set:abstract_collection$SimpleCollection$add_all */
}
};
/* allocate Set[nullable Object] */
val* NEW_core__Set(const struct type* type) {
val* self /* : Set[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__Set;
return self;
}
/* runtime class core__MapRead: core::MapRead (dead=true; need_corpse=false)*/
/* allocate MapRead[nullable Object, nullable Object] */
val* NEW_core__MapRead(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "MapRead is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Map: core::Map (dead=true; need_corpse=false)*/
/* allocate Map[nullable Object, nullable Object] */
val* NEW_core__Map(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Map is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__MapIterator: core::MapIterator (dead=true; need_corpse=false)*/
/* allocate MapIterator[nullable Object, nullable Object] */
val* NEW_core__MapIterator(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "MapIterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__MapKeysIterator: core::MapKeysIterator (dead=false; need_corpse=false)*/
const struct class class_core__MapKeysIterator = {
0, /* box_kind */
{
(nitmethod_t)core___core__MapKeysIterator___core__kernel__Object__init, /* pointer to abstract_collection:MapKeysIterator:abstract_collection$MapKeysIterator$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to abstract_collection:MapKeysIterator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to abstract_collection:MapKeysIterator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to abstract_collection:MapKeysIterator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to abstract_collection:MapKeysIterator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to abstract_collection:MapKeysIterator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to abstract_collection:MapKeysIterator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to abstract_collection:MapKeysIterator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to abstract_collection:MapKeysIterator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to abstract_collection:MapKeysIterator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to abstract_collection:MapKeysIterator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to abstract_collection:MapKeysIterator:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__MapKeysIterator___Iterator__is_ok, /* pointer to abstract_collection:MapKeysIterator:abstract_collection$MapKeysIterator$is_ok */
(nitmethod_t)core___core__MapKeysIterator___Iterator__item, /* pointer to abstract_collection:MapKeysIterator:abstract_collection$MapKeysIterator$item */
(nitmethod_t)core___core__MapKeysIterator___Iterator__next, /* pointer to abstract_collection:MapKeysIterator:abstract_collection$MapKeysIterator$next */
(nitmethod_t)core___core__Iterator___finish, /* pointer to abstract_collection:MapKeysIterator:abstract_collection$Iterator$finish */
(nitmethod_t)core___core__Iterator___iterator, /* pointer to abstract_collection:MapKeysIterator:abstract_collection$Iterator$iterator */
(nitmethod_t)core__array___Iterator___to_a, /* pointer to abstract_collection:MapKeysIterator:array$Iterator$to_a */
(nitmethod_t)core___core__MapKeysIterator___original_iterator_61d, /* pointer to abstract_collection:MapKeysIterator:abstract_collection$MapKeysIterator$original_iterator= */
(nitmethod_t)core___core__MapKeysIterator___original_iterator, /* pointer to abstract_collection:MapKeysIterator:abstract_collection$MapKeysIterator$original_iterator */
(nitmethod_t)core___core__Object___init, /* pointer to abstract_collection:MapKeysIterator:kernel$Object$init */
}
};
/* allocate MapKeysIterator[nullable Object, nullable Object] */
val* NEW_core__MapKeysIterator(const struct type* type) {
val* self /* : MapKeysIterator[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__MapKeysIterator;
return self;
}
/* runtime class core__MapValuesIterator: core::MapValuesIterator (dead=false; need_corpse=false)*/
const struct class class_core__MapValuesIterator = {
0, /* box_kind */
{
(nitmethod_t)core___core__MapValuesIterator___core__kernel__Object__init, /* pointer to abstract_collection:MapValuesIterator:abstract_collection$MapValuesIterator$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to abstract_collection:MapValuesIterator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to abstract_collection:MapValuesIterator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to abstract_collection:MapValuesIterator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to abstract_collection:MapValuesIterator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to abstract_collection:MapValuesIterator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to abstract_collection:MapValuesIterator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to abstract_collection:MapValuesIterator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to abstract_collection:MapValuesIterator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to abstract_collection:MapValuesIterator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to abstract_collection:MapValuesIterator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to abstract_collection:MapValuesIterator:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__MapValuesIterator___Iterator__is_ok, /* pointer to abstract_collection:MapValuesIterator:abstract_collection$MapValuesIterator$is_ok */
(nitmethod_t)core___core__MapValuesIterator___Iterator__item, /* pointer to abstract_collection:MapValuesIterator:abstract_collection$MapValuesIterator$item */
(nitmethod_t)core___core__MapValuesIterator___Iterator__next, /* pointer to abstract_collection:MapValuesIterator:abstract_collection$MapValuesIterator$next */
(nitmethod_t)core___core__Iterator___finish, /* pointer to abstract_collection:MapValuesIterator:abstract_collection$Iterator$finish */
(nitmethod_t)core___core__Iterator___iterator, /* pointer to abstract_collection:MapValuesIterator:abstract_collection$Iterator$iterator */
(nitmethod_t)core__array___Iterator___to_a, /* pointer to abstract_collection:MapValuesIterator:array$Iterator$to_a */
(nitmethod_t)core___core__MapValuesIterator___original_iterator_61d, /* pointer to abstract_collection:MapValuesIterator:abstract_collection$MapValuesIterator$original_iterator= */
(nitmethod_t)core___core__MapValuesIterator___original_iterator, /* pointer to abstract_collection:MapValuesIterator:abstract_collection$MapValuesIterator$original_iterator */
(nitmethod_t)core___core__Object___init, /* pointer to abstract_collection:MapValuesIterator:kernel$Object$init */
}
};
/* allocate MapValuesIterator[nullable Object, nullable Object] */
val* NEW_core__MapValuesIterator(const struct type* type) {
val* self /* : MapValuesIterator[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__MapValuesIterator;
return self;
}
/* runtime class core__SequenceRead: core::SequenceRead (dead=true; need_corpse=false)*/
/* allocate SequenceRead[nullable Object] */
val* NEW_core__SequenceRead(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "SequenceRead is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Sequence: core::Sequence (dead=true; need_corpse=false)*/
/* allocate Sequence[nullable Object] */
val* NEW_core__Sequence(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Sequence is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__IndexedIterator: core::IndexedIterator (dead=true; need_corpse=false)*/
/* allocate IndexedIterator[nullable Object] */
val* NEW_core__IndexedIterator(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "IndexedIterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__CoupleMap: core::CoupleMap (dead=true; need_corpse=false)*/
/* allocate CoupleMap[nullable Object, nullable Object] */
val* NEW_core__CoupleMap(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "CoupleMap is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__abstract_collection__CoupleMapIterator: core::abstract_collection::CoupleMapIterator (dead=false; need_corpse=false)*/
const struct class class_core__abstract_collection__CoupleMapIterator = {
0, /* box_kind */
{
(nitmethod_t)core__abstract_collection___core__abstract_collection__CoupleMapIterator___core__kernel__Object__init, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection$CoupleMapIterator$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to abstract_collection:CoupleMapIterator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to abstract_collection:CoupleMapIterator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to abstract_collection:CoupleMapIterator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to abstract_collection:CoupleMapIterator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to abstract_collection:CoupleMapIterator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to abstract_collection:CoupleMapIterator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to abstract_collection:CoupleMapIterator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to abstract_collection:CoupleMapIterator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to abstract_collection:CoupleMapIterator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to abstract_collection:CoupleMapIterator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to abstract_collection:CoupleMapIterator:abstract_text$Object$native_class_name */
(nitmethod_t)core__abstract_collection___core__abstract_collection__CoupleMapIterator___MapIterator__is_ok, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection$CoupleMapIterator$is_ok */
(nitmethod_t)core__abstract_collection___core__abstract_collection__CoupleMapIterator___MapIterator__key, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection$CoupleMapIterator$key */
(nitmethod_t)core__abstract_collection___core__abstract_collection__CoupleMapIterator___MapIterator__item, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection$CoupleMapIterator$item */
(nitmethod_t)core__abstract_collection___core__abstract_collection__CoupleMapIterator___MapIterator__next, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection$CoupleMapIterator$next */
(nitmethod_t)core___core__MapIterator___finish, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection$MapIterator$finish */
(nitmethod_t)core__abstract_collection___core__abstract_collection__CoupleMapIterator___iter_61d, /* pointer to abstract_collection:CoupleMapIterator:abstract_collection$CoupleMapIterator$iter= */
(nitmethod_t)core___core__Object___init, /* pointer to abstract_collection:CoupleMapIterator:kernel$Object$init */
}
};
/* allocate CoupleMapIterator[nullable Object, nullable Object] */
val* NEW_core__abstract_collection__CoupleMapIterator(const struct type* type) {
val* self /* : CoupleMapIterator[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__abstract_collection__CoupleMapIterator;
return self;
}
/* runtime class core__Couple: core::Couple (dead=false; need_corpse=false)*/
const struct class class_core__Couple = {
0, /* box_kind */
{
(nitmethod_t)core___core__Couple___core__kernel__Object__init, /* pointer to abstract_collection:Couple:abstract_collection$Couple$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to abstract_collection:Couple:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to abstract_collection:Couple:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to abstract_collection:Couple:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to abstract_collection:Couple:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to abstract_collection:Couple:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to abstract_collection:Couple:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to abstract_collection:Couple:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to abstract_collection:Couple:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to abstract_collection:Couple:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to abstract_collection:Couple:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to abstract_collection:Couple:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Couple___second, /* pointer to abstract_collection:Couple:abstract_collection$Couple$second */
(nitmethod_t)core___core__Couple___second_61d, /* pointer to abstract_collection:Couple:abstract_collection$Couple$second= */
(nitmethod_t)core___core__Couple___first_61d, /* pointer to abstract_collection:Couple:abstract_collection$Couple$first= */
(nitmethod_t)core___core__Couple___first, /* pointer to abstract_collection:Couple:abstract_collection$Couple$first */
(nitmethod_t)core___core__Object___init, /* pointer to abstract_collection:Couple:kernel$Object$init */
}
};
/* allocate Couple[nullable Object, nullable Object] */
val* NEW_core__Couple(const struct type* type) {
val* self /* : Couple[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__Couple;
return self;
}
/* runtime class core__List: core::List (dead=false; need_corpse=false)*/
const struct class class_core__List = {
0, /* box_kind */
{
(nitmethod_t)core___core__List___core__kernel__Object__init, /* pointer to list:List:list$List$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to list:List:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to list:List:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Collection___Object__to_s, /* pointer to list:List:abstract_text$Collection$to_s */
(nitmethod_t)core___core__SequenceRead___core__kernel__Object___61d_61d, /* pointer to list:List:abstract_collection$SequenceRead$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to list:List:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to list:List:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to list:List:kernel$Object$object_id */
(nitmethod_t)core___core__SequenceRead___core__kernel__Object__hash, /* pointer to list:List:abstract_collection$SequenceRead$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to list:List:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to list:List:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to list:List:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__List___length_61d, /* pointer to list:List:list$List$length= */
(nitmethod_t)core___core__List___get_node, /* pointer to list:List:list$List$get_node */
(nitmethod_t)core___core__List___search_node_after, /* pointer to list:List:list$List$search_node_after */
(nitmethod_t)core___core__List___remove_node, /* pointer to list:List:list$List$remove_node */
(nitmethod_t)core___core__List___insert_before, /* pointer to list:List:list$List$insert_before */
(nitmethod_t)core___core__Object___init, /* pointer to list:List:kernel$Object$init */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core__abstract_text___Collection___join, /* pointer to list:List:abstract_text$Collection$join */
(nitmethod_t)core__array___Collection___to_a, /* pointer to list:List:array$Collection$to_a */
(nitmethod_t)core___core__List___core__abstract_collection__Collection__length, /* pointer to list:List:list$List$length */
(nitmethod_t)core___core__List___core__abstract_collection__Collection__is_empty, /* pointer to list:List:list$List$is_empty */
(nitmethod_t)core___core__List___core__abstract_collection__Collection__iterator, /* pointer to list:List:list$List$iterator */
(nitmethod_t)core___core__Collection___has_exactly, /* pointer to list:List:abstract_collection$Collection$has_exactly */
(nitmethod_t)core___core__Collection___has_all, /* pointer to list:List:abstract_collection$Collection$has_all */
(nitmethod_t)core___core__List___core__abstract_collection__Collection__has, /* pointer to list:List:list$List$has */
(nitmethod_t)core___core__List___core__abstract_collection__Collection__count, /* pointer to list:List:list$List$count */
(nitmethod_t)core___core__List___core__abstract_collection__Collection__first, /* pointer to list:List:list$List$first */
(nitmethod_t)core___core__Collection___not_empty, /* pointer to list:List:abstract_collection$Collection$not_empty */
(nitmethod_t)core__abstract_text___Collection___plain_to_s, /* pointer to list:List:abstract_text$Collection$plain_to_s */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core___core__List___core__abstract_collection__SequenceRead___91d_93d, /* pointer to list:List:list$List$[] */
(nitmethod_t)core___core__SequenceRead___iterator_from, /* pointer to list:List:abstract_collection$SequenceRead$iterator_from */
(nitmethod_t)core___core__SequenceRead___index_of, /* pointer to list:List:abstract_collection$SequenceRead$index_of */
(nitmethod_t)core___core__SequenceRead___last_index_of, /* pointer to list:List:abstract_collection$SequenceRead$last_index_of */
(nitmethod_t)core___core__List___core__abstract_collection__SequenceRead__last, /* pointer to list:List:list$List$last */
(nitmethod_t)core___core__SequenceRead___index_of_from, /* pointer to list:List:abstract_collection$SequenceRead$index_of_from */
(nitmethod_t)core___core__SequenceRead___last_index_of_from, /* pointer to list:List:abstract_collection$SequenceRead$last_index_of_from */
(nitmethod_t)core___core__List___core__abstract_collection__SequenceRead__reverse_iterator, /* pointer to list:List:list$List$reverse_iterator */
(nitmethod_t)core___core__SequenceRead___reverse_iterator_from, /* pointer to list:List:abstract_collection$SequenceRead$reverse_iterator_from */
(nitmethod_t)core___core__List___core__abstract_collection__RemovableCollection__clear, /* pointer to list:List:list$List$clear */
(nitmethod_t)core___core__List___core__abstract_collection__RemovableCollection__remove, /* pointer to list:List:list$List$remove */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core___core__Sequence___SimpleCollection__add, /* pointer to list:List:abstract_collection$Sequence$add */
(nitmethod_t)core___core__SimpleCollection___add_all, /* pointer to list:List:abstract_collection$SimpleCollection$add_all */
(nitmethod_t)core___core__List___core__abstract_collection__Sequence__push, /* pointer to list:List:list$List$push */
(nitmethod_t)core___core__Sequence___append, /* pointer to list:List:abstract_collection$Sequence$append */
(nitmethod_t)core___core__List___core__abstract_collection__Sequence__shift, /* pointer to list:List:list$List$shift */
(nitmethod_t)core___core__List___core__abstract_collection__Sequence___91d_93d_61d, /* pointer to list:List:list$List$[]= */
(nitmethod_t)core___core__List___core__abstract_collection__Sequence__remove_at, /* pointer to list:List:list$List$remove_at */
(nitmethod_t)core___core__List___core__abstract_collection__Sequence__pop, /* pointer to list:List:list$List$pop */
(nitmethod_t)core___core__List___core__abstract_collection__Sequence__unshift, /* pointer to list:List:list$List$unshift */
(nitmethod_t)core___core__Sequence___prepend, /* pointer to list:List:abstract_collection$Sequence$prepend */
(nitmethod_t)core___core__Sequence___insert_all, /* pointer to list:List:abstract_collection$Sequence$insert_all */
(nitmethod_t)core___core__List___core__abstract_collection__Sequence__insert, /* pointer to list:List:list$List$insert */
(nitmethod_t)core___core__List___core__abstract_collection__Sequence__first_61d, /* pointer to list:List:list$List$first= */
}
};
/* allocate List[nullable Object] */
val* NEW_core__List(const struct type* type) {
val* self /* : List[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__List;
self->attrs[COLOR_core__list__List___length].l = 0l; /* _length on <self:List[nullable Object] exact> */
return self;
}
/* runtime class core__ListIterator: core::ListIterator (dead=false; need_corpse=false)*/
const struct class class_core__ListIterator = {
0, /* box_kind */
{
(nitmethod_t)core___core__ListIterator___core__kernel__Object__init, /* pointer to list:ListIterator:list$ListIterator$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to list:ListIterator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to list:ListIterator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to list:ListIterator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to list:ListIterator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to list:ListIterator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to list:ListIterator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to list:ListIterator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to list:ListIterator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to list:ListIterator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to list:ListIterator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to list:ListIterator:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__ListIterator___core__abstract_collection__Iterator__is_ok, /* pointer to list:ListIterator:list$ListIterator$is_ok */
(nitmethod_t)core___core__ListIterator___core__abstract_collection__Iterator__item, /* pointer to list:ListIterator:list$ListIterator$item */
(nitmethod_t)core___core__ListIterator___core__abstract_collection__Iterator__next, /* pointer to list:ListIterator:list$ListIterator$next */
(nitmethod_t)core___core__Iterator___finish, /* pointer to list:ListIterator:abstract_collection$Iterator$finish */
(nitmethod_t)core___core__Iterator___iterator, /* pointer to list:ListIterator:abstract_collection$Iterator$iterator */
(nitmethod_t)core__array___Iterator___to_a, /* pointer to list:ListIterator:array$Iterator$to_a */
(nitmethod_t)core___core__ListIterator___core__abstract_collection__IndexedIterator__index, /* pointer to list:ListIterator:list$ListIterator$index */
(nitmethod_t)core___core__ListIterator___list_61d, /* pointer to list:ListIterator:list$ListIterator$list= */
(nitmethod_t)core___core__Object___init, /* pointer to list:ListIterator:kernel$Object$init */
}
};
/* allocate ListIterator[nullable Object] */
val* NEW_core__ListIterator(const struct type* type) {
val* self /* : ListIterator[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__ListIterator;
self->attrs[COLOR_core__list__ListIterator___index].l = 0l; /* _index on <self:ListIterator[nullable Object] exact> */
return self;
}
/* runtime class core__list__ListReverseIterator: core::list::ListReverseIterator (dead=false; need_corpse=false)*/
const struct class class_core__list__ListReverseIterator = {
0, /* box_kind */
{
(nitmethod_t)core__list___core__list__ListReverseIterator___core__kernel__Object__init, /* pointer to list:ListReverseIterator:list$ListReverseIterator$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to list:ListReverseIterator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to list:ListReverseIterator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to list:ListReverseIterator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to list:ListReverseIterator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to list:ListReverseIterator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to list:ListReverseIterator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to list:ListReverseIterator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to list:ListReverseIterator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to list:ListReverseIterator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to list:ListReverseIterator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to list:ListReverseIterator:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__ListIterator___core__abstract_collection__Iterator__is_ok, /* pointer to list:ListReverseIterator:list$ListIterator$is_ok */
(nitmethod_t)core___core__ListIterator___core__abstract_collection__Iterator__item, /* pointer to list:ListReverseIterator:list$ListIterator$item */
(nitmethod_t)core__list___core__list__ListReverseIterator___core__abstract_collection__Iterator__next, /* pointer to list:ListReverseIterator:list$ListReverseIterator$next */
(nitmethod_t)core___core__Iterator___finish, /* pointer to list:ListReverseIterator:abstract_collection$Iterator$finish */
(nitmethod_t)core___core__Iterator___iterator, /* pointer to list:ListReverseIterator:abstract_collection$Iterator$iterator */
(nitmethod_t)core__array___Iterator___to_a, /* pointer to list:ListReverseIterator:array$Iterator$to_a */
(nitmethod_t)core___core__ListIterator___core__abstract_collection__IndexedIterator__index, /* pointer to list:ListReverseIterator:list$ListIterator$index */
(nitmethod_t)core___core__ListIterator___list_61d, /* pointer to list:ListReverseIterator:list$ListIterator$list= */
(nitmethod_t)core___core__Object___init, /* pointer to list:ListReverseIterator:kernel$Object$init */
(nitmethod_t)core___core__ListIterator___core__kernel__Object__init, /* pointer to list:ListReverseIterator:list$ListIterator$init */
}
};
/* allocate ListReverseIterator[nullable Object] */
val* NEW_core__list__ListReverseIterator(const struct type* type) {
val* self /* : ListReverseIterator[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__list__ListReverseIterator;
self->attrs[COLOR_core__list__ListIterator___index].l = 0l; /* _index on <self:ListReverseIterator[nullable Object] exact> */
return self;
}
/* runtime class core__list__ListNode: core::list::ListNode (dead=false; need_corpse=false)*/
const struct class class_core__list__ListNode = {
0, /* box_kind */
{
(nitmethod_t)core___core__Ref___core__kernel__Object__init, /* pointer to list:ListNode:abstract_collection$Ref$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to list:ListNode:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to list:ListNode:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Collection___Object__to_s, /* pointer to list:ListNode:abstract_text$Collection$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to list:ListNode:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to list:ListNode:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to list:ListNode:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to list:ListNode:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to list:ListNode:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to list:ListNode:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to list:ListNode:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to list:ListNode:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Ref___item_61d, /* pointer to list:ListNode:abstract_collection$Ref$item= */
(nitmethod_t)core___core__Ref___item, /* pointer to list:ListNode:abstract_collection$Ref$item */
(nitmethod_t)core___core__Object___init, /* pointer to list:ListNode:kernel$Object$init */
(nitmethod_t)core__list___core__list__ListNode___next_61d, /* pointer to list:ListNode:list$ListNode$next= */
(nitmethod_t)core__list___core__list__ListNode___prev_61d, /* pointer to list:ListNode:list$ListNode$prev= */
(nitmethod_t)core__list___core__list__ListNode___next, /* pointer to list:ListNode:list$ListNode$next */
(nitmethod_t)core__list___core__list__ListNode___prev, /* pointer to list:ListNode:list$ListNode$prev */
NULL, /* empty */
(nitmethod_t)core__abstract_text___Collection___join, /* pointer to list:ListNode:abstract_text$Collection$join */
(nitmethod_t)core__array___Collection___to_a, /* pointer to list:ListNode:array$Collection$to_a */
(nitmethod_t)core___core__Ref___Collection__length, /* pointer to list:ListNode:abstract_collection$Ref$length */
(nitmethod_t)core___core__Ref___Collection__is_empty, /* pointer to list:ListNode:abstract_collection$Ref$is_empty */
(nitmethod_t)core___core__Ref___Collection__iterator, /* pointer to list:ListNode:abstract_collection$Ref$iterator */
(nitmethod_t)core___core__Collection___has_exactly, /* pointer to list:ListNode:abstract_collection$Collection$has_exactly */
(nitmethod_t)core___core__Collection___has_all, /* pointer to list:ListNode:abstract_collection$Collection$has_all */
(nitmethod_t)core___core__Ref___Collection__has, /* pointer to list:ListNode:abstract_collection$Ref$has */
(nitmethod_t)core___core__Ref___Collection__count, /* pointer to list:ListNode:abstract_collection$Ref$count */
(nitmethod_t)core___core__Ref___Collection__first, /* pointer to list:ListNode:abstract_collection$Ref$first */
(nitmethod_t)core___core__Collection___not_empty, /* pointer to list:ListNode:abstract_collection$Collection$not_empty */
(nitmethod_t)core__abstract_text___Collection___plain_to_s, /* pointer to list:ListNode:abstract_text$Collection$plain_to_s */
}
};
/* allocate ListNode[nullable Object] */
val* NEW_core__list__ListNode(const struct type* type) {
val* self /* : ListNode[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__list__ListNode;
return self;
}
/* runtime class core__AbstractArrayRead: core::AbstractArrayRead (dead=true; need_corpse=false)*/
/* allocate AbstractArrayRead[nullable Object] */
val* NEW_core__AbstractArrayRead(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "AbstractArrayRead is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__AbstractArray: core::AbstractArray (dead=true; need_corpse=false)*/
/* allocate AbstractArray[nullable Object] */
val* NEW_core__AbstractArray(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "AbstractArray is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Array: core::Array (dead=false; need_corpse=false)*/
const struct class class_core__Array = {
0, /* box_kind */
{
(nitmethod_t)core___core__Array___core__kernel__Object__init, /* pointer to array:Array:array$Array$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to array:Array:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to array:Array:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Collection___Object__to_s, /* pointer to array:Array:abstract_text$Collection$to_s */
(nitmethod_t)core___core__Array___core__kernel__Object___61d_61d, /* pointer to array:Array:array$Array$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to array:Array:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to array:Array:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to array:Array:kernel$Object$object_id */
(nitmethod_t)core___core__SequenceRead___core__kernel__Object__hash, /* pointer to array:Array:abstract_collection$SequenceRead$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to array:Array:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to array:Array:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to array:Array:abstract_text$Object$native_class_name */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core___core__Array___core__kernel__Cloneable__clone, /* pointer to array:Array:array$Array$clone */
(nitmethod_t)core__abstract_text___Collection___join, /* pointer to array:Array:abstract_text$Collection$join */
(nitmethod_t)core__array___Collection___to_a, /* pointer to array:Array:array$Collection$to_a */
(nitmethod_t)core___core__AbstractArrayRead___core__abstract_collection__Collection__length, /* pointer to array:Array:array$AbstractArrayRead$length */
(nitmethod_t)core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty, /* pointer to array:Array:array$AbstractArrayRead$is_empty */
(nitmethod_t)core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator, /* pointer to array:Array:array$AbstractArrayRead$iterator */
(nitmethod_t)core___core__Collection___has_exactly, /* pointer to array:Array:abstract_collection$Collection$has_exactly */
(nitmethod_t)core___core__Collection___has_all, /* pointer to array:Array:abstract_collection$Collection$has_all */
(nitmethod_t)core___core__AbstractArrayRead___core__abstract_collection__Collection__has, /* pointer to array:Array:array$AbstractArrayRead$has */
(nitmethod_t)core___core__AbstractArrayRead___core__abstract_collection__Collection__count, /* pointer to array:Array:array$AbstractArrayRead$count */
(nitmethod_t)core___core__SequenceRead___Collection__first, /* pointer to array:Array:abstract_collection$SequenceRead$first */
(nitmethod_t)core___core__Collection___not_empty, /* pointer to array:Array:abstract_collection$Collection$not_empty */
(nitmethod_t)core__flat___Array___core__abstract_text__Collection__plain_to_s, /* pointer to array:Array:flat$Array$plain_to_s */
(nitmethod_t)core___core__Array___with_native, /* pointer to array:Array:array$Array$with_native */
(nitmethod_t)core___core__Array___with_capacity, /* pointer to array:Array:array$Array$with_capacity */
(nitmethod_t)core___core__Array___core__abstract_collection__SequenceRead___91d_93d, /* pointer to array:Array:array$Array$[] */
(nitmethod_t)core___core__SequenceRead___iterator_from, /* pointer to array:Array:abstract_collection$SequenceRead$iterator_from */
(nitmethod_t)core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__index_of, /* pointer to array:Array:array$AbstractArrayRead$index_of */
(nitmethod_t)core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__last_index_of, /* pointer to array:Array:array$AbstractArrayRead$last_index_of */
(nitmethod_t)core___core__SequenceRead___last, /* pointer to array:Array:abstract_collection$SequenceRead$last */
(nitmethod_t)core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__index_of_from, /* pointer to array:Array:array$AbstractArrayRead$index_of_from */
(nitmethod_t)core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__last_index_of_from, /* pointer to array:Array:array$AbstractArrayRead$last_index_of_from */
(nitmethod_t)core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__reverse_iterator, /* pointer to array:Array:array$AbstractArrayRead$reverse_iterator */
(nitmethod_t)core___core__SequenceRead___reverse_iterator_from, /* pointer to array:Array:abstract_collection$SequenceRead$reverse_iterator_from */
(nitmethod_t)core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear, /* pointer to array:Array:array$AbstractArray$clear */
(nitmethod_t)core___core__AbstractArray___core__abstract_collection__RemovableCollection__remove, /* pointer to array:Array:array$AbstractArray$remove */
(nitmethod_t)core___core__Array___AbstractArrayRead__copy_to, /* pointer to array:Array:array$Array$copy_to */
(nitmethod_t)core___core__AbstractArrayRead___length_61d, /* pointer to array:Array:array$AbstractArrayRead$length= */
(nitmethod_t)core___core__AbstractArrayRead___reversed, /* pointer to array:Array:array$AbstractArrayRead$reversed */
(nitmethod_t)core___core__AbstractArrayRead___sub, /* pointer to array:Array:array$AbstractArrayRead$sub */
(nitmethod_t)core___core__Array___core__abstract_collection__SimpleCollection__add, /* pointer to array:Array:array$Array$add */
(nitmethod_t)core___core__Array___core__abstract_collection__SimpleCollection__add_all, /* pointer to array:Array:array$Array$add_all */
(nitmethod_t)core___core__AbstractArray___core__abstract_collection__Sequence__push, /* pointer to array:Array:array$AbstractArray$push */
(nitmethod_t)core___core__Sequence___append, /* pointer to array:Array:abstract_collection$Sequence$append */
(nitmethod_t)core___core__AbstractArray___core__abstract_collection__Sequence__shift, /* pointer to array:Array:array$AbstractArray$shift */
(nitmethod_t)core___core__Array___core__abstract_collection__Sequence___91d_93d_61d, /* pointer to array:Array:array$Array$[]= */
(nitmethod_t)core___core__AbstractArray___core__abstract_collection__Sequence__remove_at, /* pointer to array:Array:array$AbstractArray$remove_at */
(nitmethod_t)core___core__AbstractArray___core__abstract_collection__Sequence__pop, /* pointer to array:Array:array$AbstractArray$pop */
(nitmethod_t)core___core__AbstractArray___core__abstract_collection__Sequence__unshift, /* pointer to array:Array:array$AbstractArray$unshift */
(nitmethod_t)core___core__Sequence___prepend, /* pointer to array:Array:abstract_collection$Sequence$prepend */
(nitmethod_t)core___core__AbstractArray___core__abstract_collection__Sequence__insert_all, /* pointer to array:Array:array$AbstractArray$insert_all */
(nitmethod_t)core___core__AbstractArray___core__abstract_collection__Sequence__insert, /* pointer to array:Array:array$AbstractArray$insert */
(nitmethod_t)core___core__Sequence___first_61d, /* pointer to array:Array:abstract_collection$Sequence$first= */
(nitmethod_t)core___core__Array___AbstractArray__enlarge, /* pointer to array:Array:array$Array$enlarge */
(nitmethod_t)core___core__Array___items, /* pointer to array:Array:array$Array$items */
(nitmethod_t)core___core__Array___filled_with, /* pointer to array:Array:array$Array$filled_with */
(nitmethod_t)core___core__Object___init, /* pointer to array:Array:kernel$Object$init */
(nitmethod_t)core___core__SequenceRead___core__kernel__Object___61d_61d, /* pointer to array:Array:abstract_collection$SequenceRead$== */
(nitmethod_t)core___core__AbstractArrayRead___copy_to, /* pointer to array:Array:array$AbstractArrayRead$copy_to */
}
};
/* allocate Array[nullable Object] */
val* NEW_core__Array(const struct type* type) {
val* self /* : Array[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__Array;
self->attrs[COLOR_core__array__AbstractArrayRead___length].l = 0l; /* _length on <self:Array[nullable Object] exact> */
self->attrs[COLOR_core__array__Array___capacity].l = 0l; /* _capacity on <self:Array[nullable Object] exact> */
return self;
}
/* runtime class core__array__ArrayIterator: core::array::ArrayIterator (dead=false; need_corpse=false)*/
const struct class class_core__array__ArrayIterator = {
0, /* box_kind */
{
(nitmethod_t)core__array___core__array__ArrayIterator___core__kernel__Object__init, /* pointer to array:ArrayIterator:array$ArrayIterator$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to array:ArrayIterator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to array:ArrayIterator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to array:ArrayIterator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to array:ArrayIterator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to array:ArrayIterator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to array:ArrayIterator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to array:ArrayIterator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to array:ArrayIterator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to array:ArrayIterator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to array:ArrayIterator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to array:ArrayIterator:abstract_text$Object$native_class_name */
(nitmethod_t)core__array___core__array__ArrayIterator___core__abstract_collection__Iterator__is_ok, /* pointer to array:ArrayIterator:array$ArrayIterator$is_ok */
(nitmethod_t)core__array___core__array__ArrayIterator___core__abstract_collection__Iterator__item, /* pointer to array:ArrayIterator:array$ArrayIterator$item */
(nitmethod_t)core__array___core__array__ArrayIterator___core__abstract_collection__Iterator__next, /* pointer to array:ArrayIterator:array$ArrayIterator$next */
(nitmethod_t)core__array___core__array__ArrayIterator___core__abstract_collection__Iterator__finish, /* pointer to array:ArrayIterator:array$ArrayIterator$finish */
(nitmethod_t)core___core__Iterator___iterator, /* pointer to array:ArrayIterator:abstract_collection$Iterator$iterator */
(nitmethod_t)core__array___Iterator___to_a, /* pointer to array:ArrayIterator:array$Iterator$to_a */
(nitmethod_t)core__array___core__array__ArrayIterator___core__abstract_collection__IndexedIterator__index, /* pointer to array:ArrayIterator:array$ArrayIterator$index */
(nitmethod_t)core__array___core__array__ArrayIterator___array_61d, /* pointer to array:ArrayIterator:array$ArrayIterator$array= */
(nitmethod_t)core___core__Object___init, /* pointer to array:ArrayIterator:kernel$Object$init */
}
};
/* allocate ArrayIterator[nullable Object] */
val* NEW_core__array__ArrayIterator(const struct type* type) {
val* self /* : ArrayIterator[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__array__ArrayIterator;
self->attrs[COLOR_core__array__ArrayIterator___index].l = 0l; /* _index on <self:ArrayIterator[nullable Object] exact> */
return self;
}
/* runtime class core__array__ArrayReverseIterator: core::array::ArrayReverseIterator (dead=false; need_corpse=false)*/
const struct class class_core__array__ArrayReverseIterator = {
0, /* box_kind */
{
(nitmethod_t)core__array___core__array__ArrayReverseIterator___core__kernel__Object__init, /* pointer to array:ArrayReverseIterator:array$ArrayReverseIterator$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to array:ArrayReverseIterator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to array:ArrayReverseIterator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to array:ArrayReverseIterator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to array:ArrayReverseIterator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to array:ArrayReverseIterator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to array:ArrayReverseIterator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to array:ArrayReverseIterator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to array:ArrayReverseIterator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to array:ArrayReverseIterator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to array:ArrayReverseIterator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to array:ArrayReverseIterator:abstract_text$Object$native_class_name */
(nitmethod_t)core__array___core__array__ArrayReverseIterator___core__abstract_collection__Iterator__is_ok, /* pointer to array:ArrayReverseIterator:array$ArrayReverseIterator$is_ok */
(nitmethod_t)core__array___core__array__ArrayIterator___core__abstract_collection__Iterator__item, /* pointer to array:ArrayReverseIterator:array$ArrayIterator$item */
(nitmethod_t)core__array___core__array__ArrayReverseIterator___core__abstract_collection__Iterator__next, /* pointer to array:ArrayReverseIterator:array$ArrayReverseIterator$next */
(nitmethod_t)core__array___core__array__ArrayReverseIterator___core__abstract_collection__Iterator__finish, /* pointer to array:ArrayReverseIterator:array$ArrayReverseIterator$finish */
(nitmethod_t)core___core__Iterator___iterator, /* pointer to array:ArrayReverseIterator:abstract_collection$Iterator$iterator */
(nitmethod_t)core__array___Iterator___to_a, /* pointer to array:ArrayReverseIterator:array$Iterator$to_a */
(nitmethod_t)core__array___core__array__ArrayIterator___core__abstract_collection__IndexedIterator__index, /* pointer to array:ArrayReverseIterator:array$ArrayIterator$index */
(nitmethod_t)core__array___core__array__ArrayIterator___array_61d, /* pointer to array:ArrayReverseIterator:array$ArrayIterator$array= */
(nitmethod_t)core___core__Object___init, /* pointer to array:ArrayReverseIterator:kernel$Object$init */
(nitmethod_t)core__array___core__array__ArrayIterator___core__kernel__Object__init, /* pointer to array:ArrayReverseIterator:array$ArrayIterator$init */
}
};
/* allocate ArrayReverseIterator[nullable Object] */
val* NEW_core__array__ArrayReverseIterator(const struct type* type) {
val* self /* : ArrayReverseIterator[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__array__ArrayReverseIterator;
self->attrs[COLOR_core__array__ArrayIterator___index].l = 0l; /* _index on <self:ArrayReverseIterator[nullable Object] exact> */
return self;
}
/* runtime class core__ArraySet: core::ArraySet (dead=false; need_corpse=false)*/
const struct class class_core__ArraySet = {
0, /* box_kind */
{
(nitmethod_t)core___core__ArraySet___core__kernel__Object__init, /* pointer to array:ArraySet:array$ArraySet$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to array:ArraySet:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to array:ArraySet:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Collection___Object__to_s, /* pointer to array:ArraySet:abstract_text$Collection$to_s */
(nitmethod_t)core___core__Set___core__kernel__Object___61d_61d, /* pointer to array:ArraySet:abstract_collection$Set$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to array:ArraySet:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to array:ArraySet:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to array:ArraySet:kernel$Object$object_id */
(nitmethod_t)core___core__Set___core__kernel__Object__hash, /* pointer to array:ArraySet:abstract_collection$Set$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to array:ArraySet:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to array:ArraySet:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to array:ArraySet:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Set___union, /* pointer to array:ArraySet:abstract_collection$Set$union */
(nitmethod_t)core__hash_collection___Set___new, /* pointer to array:ArraySet:hash_collection$Set$new */
(nitmethod_t)core___core__ArraySet___core__abstract_collection__Set__new_set, /* pointer to array:ArraySet:array$ArraySet$new_set */
(nitmethod_t)core___core__ArraySet___remove_at, /* pointer to array:ArraySet:array$ArraySet$remove_at */
(nitmethod_t)core___core__Object___init, /* pointer to array:ArraySet:kernel$Object$init */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core___core__ArraySet___core__kernel__Cloneable__clone, /* pointer to array:ArraySet:array$ArraySet$clone */
(nitmethod_t)core__abstract_text___Collection___join, /* pointer to array:ArraySet:abstract_text$Collection$join */
(nitmethod_t)core__array___Collection___to_a, /* pointer to array:ArraySet:array$Collection$to_a */
(nitmethod_t)core___core__ArraySet___core__abstract_collection__Collection__length, /* pointer to array:ArraySet:array$ArraySet$length */
(nitmethod_t)core___core__ArraySet___core__abstract_collection__Collection__is_empty, /* pointer to array:ArraySet:array$ArraySet$is_empty */
(nitmethod_t)core___core__ArraySet___core__abstract_collection__Collection__iterator, /* pointer to array:ArraySet:array$ArraySet$iterator */
(nitmethod_t)core___core__Collection___has_exactly, /* pointer to array:ArraySet:abstract_collection$Collection$has_exactly */
(nitmethod_t)core___core__Collection___has_all, /* pointer to array:ArraySet:abstract_collection$Collection$has_all */
(nitmethod_t)core___core__ArraySet___core__abstract_collection__Collection__has, /* pointer to array:ArraySet:array$ArraySet$has */
(nitmethod_t)core___core__Set___Collection__count, /* pointer to array:ArraySet:abstract_collection$Set$count */
(nitmethod_t)core___core__ArraySet___core__abstract_collection__Collection__first, /* pointer to array:ArraySet:array$ArraySet$first */
(nitmethod_t)core___core__Collection___not_empty, /* pointer to array:ArraySet:abstract_collection$Collection$not_empty */
(nitmethod_t)core__abstract_text___Collection___plain_to_s, /* pointer to array:ArraySet:abstract_text$Collection$plain_to_s */
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
(nitmethod_t)core___core__ArraySet___core__abstract_collection__RemovableCollection__clear, /* pointer to array:ArraySet:array$ArraySet$clear */
(nitmethod_t)core___core__ArraySet___core__abstract_collection__RemovableCollection__remove, /* pointer to array:ArraySet:array$ArraySet$remove */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core___core__ArraySet___core__abstract_collection__SimpleCollection__add, /* pointer to array:ArraySet:array$ArraySet$add */
(nitmethod_t)core___core__SimpleCollection___add_all, /* pointer to array:ArraySet:abstract_collection$SimpleCollection$add_all */
}
};
/* allocate ArraySet[nullable Object] */
val* NEW_core__ArraySet(const struct type* type) {
val* self /* : ArraySet[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__ArraySet;
return self;
}
/* runtime class core__array__ArraySetIterator: core::array::ArraySetIterator (dead=false; need_corpse=false)*/
const struct class class_core__array__ArraySetIterator = {
0, /* box_kind */
{
(nitmethod_t)core__array___core__array__ArraySetIterator___core__kernel__Object__init, /* pointer to array:ArraySetIterator:array$ArraySetIterator$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to array:ArraySetIterator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to array:ArraySetIterator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to array:ArraySetIterator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to array:ArraySetIterator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to array:ArraySetIterator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to array:ArraySetIterator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to array:ArraySetIterator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to array:ArraySetIterator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to array:ArraySetIterator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to array:ArraySetIterator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to array:ArraySetIterator:abstract_text$Object$native_class_name */
(nitmethod_t)core__array___core__array__ArraySetIterator___core__abstract_collection__Iterator__is_ok, /* pointer to array:ArraySetIterator:array$ArraySetIterator$is_ok */
(nitmethod_t)core__array___core__array__ArraySetIterator___core__abstract_collection__Iterator__item, /* pointer to array:ArraySetIterator:array$ArraySetIterator$item */
(nitmethod_t)core__array___core__array__ArraySetIterator___core__abstract_collection__Iterator__next, /* pointer to array:ArraySetIterator:array$ArraySetIterator$next */
(nitmethod_t)core___core__Iterator___finish, /* pointer to array:ArraySetIterator:abstract_collection$Iterator$finish */
(nitmethod_t)core___core__Iterator___iterator, /* pointer to array:ArraySetIterator:abstract_collection$Iterator$iterator */
(nitmethod_t)core__array___Iterator___to_a, /* pointer to array:ArraySetIterator:array$Iterator$to_a */
(nitmethod_t)core__array___core__array__ArraySetIterator___iter_61d, /* pointer to array:ArraySetIterator:array$ArraySetIterator$iter= */
(nitmethod_t)core___core__Object___init, /* pointer to array:ArraySetIterator:kernel$Object$init */
}
};
/* allocate ArraySetIterator[nullable Object] */
val* NEW_core__array__ArraySetIterator(const struct type* type) {
val* self /* : ArraySetIterator[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__array__ArraySetIterator;
return self;
}
/* runtime class core__ArrayMap: core::ArrayMap (dead=false; need_corpse=false)*/
const struct class class_core__ArrayMap = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to array:ArrayMap:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to array:ArrayMap:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to array:ArrayMap:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to array:ArrayMap:abstract_text$Object$to_s */
(nitmethod_t)core___core__MapRead___core__kernel__Object___61d_61d, /* pointer to array:ArrayMap:abstract_collection$MapRead$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to array:ArrayMap:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to array:ArrayMap:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to array:ArrayMap:kernel$Object$object_id */
(nitmethod_t)core___core__MapRead___core__kernel__Object__hash, /* pointer to array:ArrayMap:abstract_collection$MapRead$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to array:ArrayMap:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to array:ArrayMap:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to array:ArrayMap:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__ArrayMap___core__abstract_collection__MapRead__length, /* pointer to array:ArrayMap:array$ArrayMap$length */
(nitmethod_t)core___core__CoupleMap___MapRead__iterator, /* pointer to array:ArrayMap:abstract_collection$CoupleMap$iterator */
(nitmethod_t)core___core__CoupleMap___MapRead__has_key, /* pointer to array:ArrayMap:abstract_collection$CoupleMap$has_key */
(nitmethod_t)core___core__ArrayMap___core__abstract_collection__MapRead___91d_93d, /* pointer to array:ArrayMap:array$ArrayMap$[] */
(nitmethod_t)core___core__ArrayMap___core__abstract_collection__MapRead__keys, /* pointer to array:ArrayMap:array$ArrayMap$keys */
(nitmethod_t)core___core__ArrayMap___core__abstract_collection__MapRead__is_empty, /* pointer to array:ArrayMap:array$ArrayMap$is_empty */
(nitmethod_t)core___core__MapRead___provide_default_value, /* pointer to array:ArrayMap:abstract_collection$MapRead$provide_default_value */
(nitmethod_t)core___core__ArrayMap___core__kernel__Cloneable__clone, /* pointer to array:ArrayMap:array$ArrayMap$clone */
(nitmethod_t)core___core__MapRead___get_or_null, /* pointer to array:ArrayMap:abstract_collection$MapRead$get_or_null */
(nitmethod_t)core___core__ArrayMap___core__abstract_collection__MapRead__values, /* pointer to array:ArrayMap:array$ArrayMap$values */
(nitmethod_t)core___core__ArrayMap___core__abstract_collection__Map___91d_93d_61d, /* pointer to array:ArrayMap:array$ArrayMap$[]= */
(nitmethod_t)core___core__ArrayMap___core__abstract_collection__Map__clear, /* pointer to array:ArrayMap:array$ArrayMap$clear */
(nitmethod_t)core__flat___Map___join, /* pointer to array:ArrayMap:flat$Map$join */
(nitmethod_t)core___core__Map___add_all, /* pointer to array:ArrayMap:abstract_collection$Map$add_all */
(nitmethod_t)core___core__ArrayMap___core__abstract_collection__CoupleMap__couple_iterator, /* pointer to array:ArrayMap:array$ArrayMap$couple_iterator */
(nitmethod_t)core___core__ArrayMap___core__abstract_collection__CoupleMap__couple_at, /* pointer to array:ArrayMap:array$ArrayMap$couple_at */
(nitmethod_t)core___core__ArrayMap___index, /* pointer to array:ArrayMap:array$ArrayMap$index */
(nitmethod_t)core___core__ArrayMap___remove_at_index, /* pointer to array:ArrayMap:array$ArrayMap$remove_at_index */
}
};
/* allocate ArrayMap[nullable Object, nullable Object] */
val* NEW_core__ArrayMap(const struct type* type) {
val* self /* : ArrayMap[nullable Object, nullable Object] */;
val* var /* : Array[Couple[nullable Object, nullable Object]] */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__ArrayMap;
var = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__core__Couple__core__ArrayMap___35dK__core__ArrayMap___35dE]);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[Couple[nullable Object, nullable Object]]>*/
}
self->attrs[COLOR_core__array__ArrayMap___items].val = var; /* _items on <self:ArrayMap[nullable Object, nullable Object] exact> */
self->attrs[COLOR_core__array__ArrayMap___last_index].l = 0l; /* _last_index on <self:ArrayMap[nullable Object, nullable Object] exact> */
return self;
}
/* runtime class core__array__ArrayMapKeys: core::array::ArrayMapKeys (dead=false; need_corpse=false)*/
const struct class class_core__array__ArrayMapKeys = {
0, /* box_kind */
{
(nitmethod_t)core__array___core__array__ArrayMapKeys___core__kernel__Object__init, /* pointer to array:ArrayMapKeys:array$ArrayMapKeys$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to array:ArrayMapKeys:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to array:ArrayMapKeys:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Collection___Object__to_s, /* pointer to array:ArrayMapKeys:abstract_text$Collection$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to array:ArrayMapKeys:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to array:ArrayMapKeys:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to array:ArrayMapKeys:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to array:ArrayMapKeys:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to array:ArrayMapKeys:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to array:ArrayMapKeys:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to array:ArrayMapKeys:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to array:ArrayMapKeys:abstract_text$Object$native_class_name */
(nitmethod_t)core__array___core__array__ArrayMapKeys___map_61d, /* pointer to array:ArrayMapKeys:array$ArrayMapKeys$map= */
(nitmethod_t)core__array___core__array__ArrayMapKeys___map, /* pointer to array:ArrayMapKeys:array$ArrayMapKeys$map */
(nitmethod_t)core___core__Object___init, /* pointer to array:ArrayMapKeys:kernel$Object$init */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core__abstract_text___Collection___join, /* pointer to array:ArrayMapKeys:abstract_text$Collection$join */
(nitmethod_t)core__array___Collection___to_a, /* pointer to array:ArrayMapKeys:array$Collection$to_a */
(nitmethod_t)core__array___core__array__ArrayMapKeys___core__abstract_collection__Collection__length, /* pointer to array:ArrayMapKeys:array$ArrayMapKeys$length */
(nitmethod_t)core__array___core__array__ArrayMapKeys___core__abstract_collection__Collection__is_empty, /* pointer to array:ArrayMapKeys:array$ArrayMapKeys$is_empty */
(nitmethod_t)core__array___core__array__ArrayMapKeys___core__abstract_collection__Collection__iterator, /* pointer to array:ArrayMapKeys:array$ArrayMapKeys$iterator */
(nitmethod_t)core___core__Collection___has_exactly, /* pointer to array:ArrayMapKeys:abstract_collection$Collection$has_exactly */
(nitmethod_t)core___core__Collection___has_all, /* pointer to array:ArrayMapKeys:abstract_collection$Collection$has_all */
(nitmethod_t)core__array___core__array__ArrayMapKeys___core__abstract_collection__Collection__has, /* pointer to array:ArrayMapKeys:array$ArrayMapKeys$has */
(nitmethod_t)core__array___core__array__ArrayMapKeys___core__abstract_collection__Collection__count, /* pointer to array:ArrayMapKeys:array$ArrayMapKeys$count */
(nitmethod_t)core__array___core__array__ArrayMapKeys___core__abstract_collection__Collection__first, /* pointer to array:ArrayMapKeys:array$ArrayMapKeys$first */
(nitmethod_t)core___core__Collection___not_empty, /* pointer to array:ArrayMapKeys:abstract_collection$Collection$not_empty */
(nitmethod_t)core__abstract_text___Collection___plain_to_s, /* pointer to array:ArrayMapKeys:abstract_text$Collection$plain_to_s */
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
(nitmethod_t)core__array___core__array__ArrayMapKeys___core__abstract_collection__RemovableCollection__clear, /* pointer to array:ArrayMapKeys:array$ArrayMapKeys$clear */
(nitmethod_t)core__array___core__array__ArrayMapKeys___core__abstract_collection__RemovableCollection__remove, /* pointer to array:ArrayMapKeys:array$ArrayMapKeys$remove */
}
};
/* allocate ArrayMapKeys[nullable Object, nullable Object] */
val* NEW_core__array__ArrayMapKeys(const struct type* type) {
val* self /* : ArrayMapKeys[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__array__ArrayMapKeys;
return self;
}
/* runtime class core__array__ArrayMapValues: core::array::ArrayMapValues (dead=false; need_corpse=false)*/
const struct class class_core__array__ArrayMapValues = {
0, /* box_kind */
{
(nitmethod_t)core__array___core__array__ArrayMapValues___core__kernel__Object__init, /* pointer to array:ArrayMapValues:array$ArrayMapValues$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to array:ArrayMapValues:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to array:ArrayMapValues:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Collection___Object__to_s, /* pointer to array:ArrayMapValues:abstract_text$Collection$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to array:ArrayMapValues:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to array:ArrayMapValues:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to array:ArrayMapValues:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to array:ArrayMapValues:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to array:ArrayMapValues:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to array:ArrayMapValues:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to array:ArrayMapValues:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to array:ArrayMapValues:abstract_text$Object$native_class_name */
(nitmethod_t)core__array___core__array__ArrayMapValues___map_61d, /* pointer to array:ArrayMapValues:array$ArrayMapValues$map= */
(nitmethod_t)core__array___core__array__ArrayMapValues___map, /* pointer to array:ArrayMapValues:array$ArrayMapValues$map */
(nitmethod_t)core___core__Object___init, /* pointer to array:ArrayMapValues:kernel$Object$init */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core__abstract_text___Collection___join, /* pointer to array:ArrayMapValues:abstract_text$Collection$join */
(nitmethod_t)core__array___Collection___to_a, /* pointer to array:ArrayMapValues:array$Collection$to_a */
(nitmethod_t)core__array___core__array__ArrayMapValues___core__abstract_collection__Collection__length, /* pointer to array:ArrayMapValues:array$ArrayMapValues$length */
(nitmethod_t)core__array___core__array__ArrayMapValues___core__abstract_collection__Collection__is_empty, /* pointer to array:ArrayMapValues:array$ArrayMapValues$is_empty */
(nitmethod_t)core__array___core__array__ArrayMapValues___core__abstract_collection__Collection__iterator, /* pointer to array:ArrayMapValues:array$ArrayMapValues$iterator */
(nitmethod_t)core___core__Collection___has_exactly, /* pointer to array:ArrayMapValues:abstract_collection$Collection$has_exactly */
(nitmethod_t)core___core__Collection___has_all, /* pointer to array:ArrayMapValues:abstract_collection$Collection$has_all */
(nitmethod_t)core__array___core__array__ArrayMapValues___core__abstract_collection__Collection__has, /* pointer to array:ArrayMapValues:array$ArrayMapValues$has */
(nitmethod_t)core__array___core__array__ArrayMapValues___core__abstract_collection__Collection__count, /* pointer to array:ArrayMapValues:array$ArrayMapValues$count */
(nitmethod_t)core__array___core__array__ArrayMapValues___core__abstract_collection__Collection__first, /* pointer to array:ArrayMapValues:array$ArrayMapValues$first */
(nitmethod_t)core___core__Collection___not_empty, /* pointer to array:ArrayMapValues:abstract_collection$Collection$not_empty */
(nitmethod_t)core__abstract_text___Collection___plain_to_s, /* pointer to array:ArrayMapValues:abstract_text$Collection$plain_to_s */
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
(nitmethod_t)core__array___core__array__ArrayMapValues___core__abstract_collection__RemovableCollection__clear, /* pointer to array:ArrayMapValues:array$ArrayMapValues$clear */
(nitmethod_t)core__array___core__array__ArrayMapValues___core__abstract_collection__RemovableCollection__remove, /* pointer to array:ArrayMapValues:array$ArrayMapValues$remove */
}
};
/* allocate ArrayMapValues[nullable Object, nullable Object] */
val* NEW_core__array__ArrayMapValues(const struct type* type) {
val* self /* : ArrayMapValues[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__array__ArrayMapValues;
return self;
}
/* runtime class core__ArrayCmp: core::ArrayCmp (dead=true; need_corpse=false)*/
/* allocate ArrayCmp[nullable Comparable] */
val* NEW_core__ArrayCmp(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "ArrayCmp is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__NativeArray: core::NativeArray (dead=false; need_corpse=true)*/
const struct class class_core__NativeArray = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to array:NativeArray:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to array:NativeArray:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to array:NativeArray:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to array:NativeArray:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to array:NativeArray:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to array:NativeArray:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to array:NativeArray:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to array:NativeArray:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to array:NativeArray:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to array:NativeArray:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to array:NativeArray:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to array:NativeArray:abstract_text$Object$native_class_name */
(nitmethod_t)core__flat___NativeArray___native_to_s, /* pointer to array:NativeArray:flat$NativeArray$native_to_s */
(nitmethod_t)core___core__NativeArray____91d_93d, /* pointer to array:NativeArray:array$NativeArray$[] */
(nitmethod_t)core___core__NativeArray___length, /* pointer to array:NativeArray:array$NativeArray$length */
(nitmethod_t)core___core__NativeArray___new, /* pointer to array:NativeArray:array$NativeArray$new */
(nitmethod_t)core___core__NativeArray____91d_93d_61d, /* pointer to array:NativeArray:array$NativeArray$[]= */
(nitmethod_t)core___core__NativeArray___copy_to, /* pointer to array:NativeArray:array$NativeArray$copy_to */
(nitmethod_t)core___core__NativeArray___memmove, /* pointer to array:NativeArray:array$NativeArray$memmove */
}
};
/* allocate NativeArray[nullable Object] */
val* NEW_core__NativeArray(int length, const struct type* type) {
struct instance_core__NativeArray *self;
self = nit_alloc(sizeof(struct instance_core__NativeArray) + length*sizeof(val*));
self->type = type;
self->class = &class_core__NativeArray;
self->length = length;
return (val*)self;
}
/* runtime class core__CircularArray: core::CircularArray (dead=false; need_corpse=false)*/
const struct class class_core__CircularArray = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to circular_array:CircularArray:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to circular_array:CircularArray:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to circular_array:CircularArray:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Collection___Object__to_s, /* pointer to circular_array:CircularArray:abstract_text$Collection$to_s */
(nitmethod_t)core___core__SequenceRead___core__kernel__Object___61d_61d, /* pointer to circular_array:CircularArray:abstract_collection$SequenceRead$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to circular_array:CircularArray:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to circular_array:CircularArray:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to circular_array:CircularArray:kernel$Object$object_id */
(nitmethod_t)core___core__SequenceRead___core__kernel__Object__hash, /* pointer to circular_array:CircularArray:abstract_collection$SequenceRead$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to circular_array:CircularArray:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to circular_array:CircularArray:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to circular_array:CircularArray:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__CircularArray___enlarge, /* pointer to circular_array:CircularArray:circular_array$CircularArray$enlarge */
(nitmethod_t)core___core__CircularArray___length_61d, /* pointer to circular_array:CircularArray:circular_array$CircularArray$length= */
(nitmethod_t)core___core__CircularArray___tail, /* pointer to circular_array:CircularArray:circular_array$CircularArray$tail */
(nitmethod_t)core___core__CircularArray___tail_61d, /* pointer to circular_array:CircularArray:circular_array$CircularArray$tail= */
(nitmethod_t)core___core__CircularArray___native, /* pointer to circular_array:CircularArray:circular_array$CircularArray$native */
(nitmethod_t)core___core__CircularArray___offset, /* pointer to circular_array:CircularArray:circular_array$CircularArray$offset */
(nitmethod_t)core___core__CircularArray___head_61d, /* pointer to circular_array:CircularArray:circular_array$CircularArray$head= */
(nitmethod_t)core___core__CircularArray___head, /* pointer to circular_array:CircularArray:circular_array$CircularArray$head */
(nitmethod_t)core__abstract_text___Collection___join, /* pointer to circular_array:CircularArray:abstract_text$Collection$join */
(nitmethod_t)core__array___Collection___to_a, /* pointer to circular_array:CircularArray:array$Collection$to_a */
(nitmethod_t)core___core__CircularArray___core__abstract_collection__Collection__length, /* pointer to circular_array:CircularArray:circular_array$CircularArray$length */
(nitmethod_t)core___core__Collection___is_empty, /* pointer to circular_array:CircularArray:abstract_collection$Collection$is_empty */
(nitmethod_t)core___core__CircularArray___core__abstract_collection__Collection__iterator, /* pointer to circular_array:CircularArray:circular_array$CircularArray$iterator */
(nitmethod_t)core___core__Collection___has_exactly, /* pointer to circular_array:CircularArray:abstract_collection$Collection$has_exactly */
(nitmethod_t)core___core__Collection___has_all, /* pointer to circular_array:CircularArray:abstract_collection$Collection$has_all */
(nitmethod_t)core___core__Collection___has, /* pointer to circular_array:CircularArray:abstract_collection$Collection$has */
(nitmethod_t)core___core__Collection___count, /* pointer to circular_array:CircularArray:abstract_collection$Collection$count */
(nitmethod_t)core___core__SequenceRead___Collection__first, /* pointer to circular_array:CircularArray:abstract_collection$SequenceRead$first */
(nitmethod_t)core___core__Collection___not_empty, /* pointer to circular_array:CircularArray:abstract_collection$Collection$not_empty */
(nitmethod_t)core__abstract_text___Collection___plain_to_s, /* pointer to circular_array:CircularArray:abstract_text$Collection$plain_to_s */
(nitmethod_t)core___core__CircularArray___native_61d, /* pointer to circular_array:CircularArray:circular_array$CircularArray$native= */
(nitmethod_t)core___core__SimpleCollection___add_all, /* pointer to circular_array:CircularArray:abstract_collection$SimpleCollection$add_all */
(nitmethod_t)core___core__CircularArray___core__abstract_collection__SequenceRead___91d_93d, /* pointer to circular_array:CircularArray:circular_array$CircularArray$[] */
(nitmethod_t)core___core__SequenceRead___iterator_from, /* pointer to circular_array:CircularArray:abstract_collection$SequenceRead$iterator_from */
(nitmethod_t)core___core__SequenceRead___index_of, /* pointer to circular_array:CircularArray:abstract_collection$SequenceRead$index_of */
(nitmethod_t)core___core__SequenceRead___last_index_of, /* pointer to circular_array:CircularArray:abstract_collection$SequenceRead$last_index_of */
(nitmethod_t)core___core__SequenceRead___last, /* pointer to circular_array:CircularArray:abstract_collection$SequenceRead$last */
(nitmethod_t)core___core__SequenceRead___index_of_from, /* pointer to circular_array:CircularArray:abstract_collection$SequenceRead$index_of_from */
(nitmethod_t)core___core__SequenceRead___last_index_of_from, /* pointer to circular_array:CircularArray:abstract_collection$SequenceRead$last_index_of_from */
(nitmethod_t)core___core__SequenceRead___reverse_iterator, /* pointer to circular_array:CircularArray:abstract_collection$SequenceRead$reverse_iterator */
(nitmethod_t)core___core__SequenceRead___reverse_iterator_from, /* pointer to circular_array:CircularArray:abstract_collection$SequenceRead$reverse_iterator_from */
(nitmethod_t)core___core__CircularArray___core__abstract_collection__RemovableCollection__clear, /* pointer to circular_array:CircularArray:circular_array$CircularArray$clear */
(nitmethod_t)core___core__RemovableCollection___remove, /* pointer to circular_array:CircularArray:abstract_collection$RemovableCollection$remove */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core___core__Sequence___SimpleCollection__add, /* pointer to circular_array:CircularArray:abstract_collection$Sequence$add */
(nitmethod_t)core___core__CircularArray___core__abstract_collection__SimpleCollection__add_all, /* pointer to circular_array:CircularArray:circular_array$CircularArray$add_all */
(nitmethod_t)core___core__CircularArray___core__abstract_collection__Sequence__push, /* pointer to circular_array:CircularArray:circular_array$CircularArray$push */
(nitmethod_t)core___core__Sequence___append, /* pointer to circular_array:CircularArray:abstract_collection$Sequence$append */
(nitmethod_t)core___core__CircularArray___core__abstract_collection__Sequence__shift, /* pointer to circular_array:CircularArray:circular_array$CircularArray$shift */
(nitmethod_t)core___core__CircularArray___core__abstract_collection__Sequence___91d_93d_61d, /* pointer to circular_array:CircularArray:circular_array$CircularArray$[]= */
(nitmethod_t)core___core__Sequence___remove_at, /* pointer to circular_array:CircularArray:abstract_collection$Sequence$remove_at */
(nitmethod_t)core___core__CircularArray___core__abstract_collection__Sequence__pop, /* pointer to circular_array:CircularArray:circular_array$CircularArray$pop */
(nitmethod_t)core___core__CircularArray___core__abstract_collection__Sequence__unshift, /* pointer to circular_array:CircularArray:circular_array$CircularArray$unshift */
(nitmethod_t)core___core__Sequence___prepend, /* pointer to circular_array:CircularArray:abstract_collection$Sequence$prepend */
(nitmethod_t)core___core__Sequence___insert_all, /* pointer to circular_array:CircularArray:abstract_collection$Sequence$insert_all */
(nitmethod_t)core___core__CircularArray___core__abstract_collection__Sequence__insert, /* pointer to circular_array:CircularArray:circular_array$CircularArray$insert */
(nitmethod_t)core___core__Sequence___first_61d, /* pointer to circular_array:CircularArray:abstract_collection$Sequence$first= */
}
};
/* allocate CircularArray[nullable Object] */
val* NEW_core__CircularArray(const struct type* type) {
val* self /* : CircularArray[nullable Object] */;
long var /* : Int */;
long var1 /* : Int */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__CircularArray;
self->attrs[COLOR_core__circular_array__CircularArray___head].l = 0l; /* _head on <self:CircularArray[nullable Object] exact> */
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var1 = -1l;
var = var1;
goto RET_LABEL;
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_core__circular_array__CircularArray___tail].l = var; /* _tail on <self:CircularArray[nullable Object] exact> */
self->attrs[COLOR_core__circular_array__CircularArray___length].l = 0l; /* _length on <self:CircularArray[nullable Object] exact> */
return self;
}
/* runtime class core__circular_array__CircularArrayIterator: core::circular_array::CircularArrayIterator (dead=false; need_corpse=false)*/
const struct class class_core__circular_array__CircularArrayIterator = {
0, /* box_kind */
{
(nitmethod_t)core__circular_array___core__circular_array__CircularArrayIterator___core__kernel__Object__init, /* pointer to circular_array:CircularArrayIterator:circular_array$CircularArrayIterator$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to circular_array:CircularArrayIterator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to circular_array:CircularArrayIterator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to circular_array:CircularArrayIterator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to circular_array:CircularArrayIterator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to circular_array:CircularArrayIterator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to circular_array:CircularArrayIterator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to circular_array:CircularArrayIterator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to circular_array:CircularArrayIterator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to circular_array:CircularArrayIterator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to circular_array:CircularArrayIterator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to circular_array:CircularArrayIterator:abstract_text$Object$native_class_name */
(nitmethod_t)core__circular_array___core__circular_array__CircularArrayIterator___core__abstract_collection__Iterator__is_ok, /* pointer to circular_array:CircularArrayIterator:circular_array$CircularArrayIterator$is_ok */
(nitmethod_t)core__circular_array___core__circular_array__CircularArrayIterator___core__abstract_collection__Iterator__item, /* pointer to circular_array:CircularArrayIterator:circular_array$CircularArrayIterator$item */
(nitmethod_t)core__circular_array___core__circular_array__CircularArrayIterator___core__abstract_collection__Iterator__next, /* pointer to circular_array:CircularArrayIterator:circular_array$CircularArrayIterator$next */
(nitmethod_t)core___core__Iterator___finish, /* pointer to circular_array:CircularArrayIterator:abstract_collection$Iterator$finish */
(nitmethod_t)core___core__Iterator___iterator, /* pointer to circular_array:CircularArrayIterator:abstract_collection$Iterator$iterator */
(nitmethod_t)core__array___Iterator___to_a, /* pointer to circular_array:CircularArrayIterator:array$Iterator$to_a */
(nitmethod_t)core__circular_array___core__circular_array__CircularArrayIterator___core__abstract_collection__IndexedIterator__index, /* pointer to circular_array:CircularArrayIterator:circular_array$CircularArrayIterator$index */
(nitmethod_t)core__circular_array___core__circular_array__CircularArrayIterator___array_61d, /* pointer to circular_array:CircularArrayIterator:circular_array$CircularArrayIterator$array= */
(nitmethod_t)core__circular_array___core__circular_array__CircularArrayIterator___array, /* pointer to circular_array:CircularArrayIterator:circular_array$CircularArrayIterator$array */
(nitmethod_t)core__circular_array___core__circular_array__CircularArrayIterator___index_61d, /* pointer to circular_array:CircularArrayIterator:circular_array$CircularArrayIterator$index= */
(nitmethod_t)core___core__Object___init, /* pointer to circular_array:CircularArrayIterator:kernel$Object$init */
}
};
/* allocate CircularArrayIterator[nullable Object] */
val* NEW_core__circular_array__CircularArrayIterator(const struct type* type) {
val* self /* : CircularArrayIterator[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__circular_array__CircularArrayIterator;
self->attrs[COLOR_core__circular_array__CircularArrayIterator___index].l = 0l; /* _index on <self:CircularArrayIterator[nullable Object] exact> */
return self;
}
/* runtime class core__Comparator: core::Comparator (dead=true; need_corpse=false)*/
/* allocate Comparator */
val* NEW_core__Comparator(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Comparator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__MapComparator: core::MapComparator (dead=true; need_corpse=false)*/
/* allocate MapComparator[nullable Object, nullable Object] */
val* NEW_core__MapComparator(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "MapComparator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__DefaultComparator: core::DefaultComparator (dead=false; need_corpse=false)*/
const struct class class_core__DefaultComparator = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to sorter:DefaultComparator:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to sorter:DefaultComparator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to sorter:DefaultComparator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to sorter:DefaultComparator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to sorter:DefaultComparator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to sorter:DefaultComparator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to sorter:DefaultComparator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to sorter:DefaultComparator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to sorter:DefaultComparator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to sorter:DefaultComparator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to sorter:DefaultComparator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to sorter:DefaultComparator:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Comparator___sort, /* pointer to sorter:DefaultComparator:sorter$Comparator$sort */
(nitmethod_t)core___core__Comparator___sub_sort, /* pointer to sorter:DefaultComparator:sorter$Comparator$sub_sort */
(nitmethod_t)core___core__Comparator___quick_sort, /* pointer to sorter:DefaultComparator:sorter$Comparator$quick_sort */
(nitmethod_t)core___core__Comparator___bubble_sort, /* pointer to sorter:DefaultComparator:sorter$Comparator$bubble_sort */
(nitmethod_t)core___core__DefaultComparator___Comparator__compare, /* pointer to sorter:DefaultComparator:sorter$DefaultComparator$compare */
}
};
/* allocate DefaultComparator */
val* NEW_core__DefaultComparator(const struct type* type) {
val* self /* : DefaultComparator */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__DefaultComparator;
return self;
}
/* runtime class core__DefaultReverseComparator: core::DefaultReverseComparator (dead=true; need_corpse=false)*/
/* allocate DefaultReverseComparator */
val* NEW_core__DefaultReverseComparator(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "DefaultReverseComparator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__hash_collection__HashCollection: core::hash_collection::HashCollection (dead=true; need_corpse=false)*/
/* allocate HashCollection[nullable Object] */
val* NEW_core__hash_collection__HashCollection(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "HashCollection is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__hash_collection__HashNode: core::hash_collection::HashNode (dead=true; need_corpse=false)*/
/* allocate HashNode[nullable Object] */
val* NEW_core__hash_collection__HashNode(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "HashNode is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__HashMap: core::HashMap (dead=false; need_corpse=false)*/
const struct class class_core__HashMap = {
0, /* box_kind */
{
(nitmethod_t)core___core__HashMap___core__kernel__Object__init, /* pointer to hash_collection:HashMap:hash_collection$HashMap$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to hash_collection:HashMap:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to hash_collection:HashMap:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to hash_collection:HashMap:abstract_text$Object$to_s */
(nitmethod_t)core___core__MapRead___core__kernel__Object___61d_61d, /* pointer to hash_collection:HashMap:abstract_collection$MapRead$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to hash_collection:HashMap:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to hash_collection:HashMap:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to hash_collection:HashMap:kernel$Object$object_id */
(nitmethod_t)core___core__MapRead___core__kernel__Object__hash, /* pointer to hash_collection:HashMap:abstract_collection$MapRead$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to hash_collection:HashMap:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to hash_collection:HashMap:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to hash_collection:HashMap:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__length, /* pointer to hash_collection:HashMap:hash_collection$HashMap$length */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__iterator, /* pointer to hash_collection:HashMap:hash_collection$HashMap$iterator */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__has_key, /* pointer to hash_collection:HashMap:hash_collection$HashMap$has_key */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead___91d_93d, /* pointer to hash_collection:HashMap:hash_collection$HashMap$[] */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__keys, /* pointer to hash_collection:HashMap:hash_collection$HashMap$keys */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__is_empty, /* pointer to hash_collection:HashMap:hash_collection$HashMap$is_empty */
(nitmethod_t)core___core__MapRead___provide_default_value, /* pointer to hash_collection:HashMap:abstract_collection$MapRead$provide_default_value */
(nitmethod_t)core___core__Object___init, /* pointer to hash_collection:HashMap:kernel$Object$init */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__get_or_null, /* pointer to hash_collection:HashMap:hash_collection$HashMap$get_or_null */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__values, /* pointer to hash_collection:HashMap:hash_collection$HashMap$values */
(nitmethod_t)core___core__HashMap___core__abstract_collection__Map___91d_93d_61d, /* pointer to hash_collection:HashMap:hash_collection$HashMap$[]= */
(nitmethod_t)core___core__HashMap___core__abstract_collection__Map__clear, /* pointer to hash_collection:HashMap:hash_collection$HashMap$clear */
(nitmethod_t)core__flat___Map___join, /* pointer to hash_collection:HashMap:flat$Map$join */
(nitmethod_t)core___core__Map___add_all, /* pointer to hash_collection:HashMap:abstract_collection$Map$add_all */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___enlarge, /* pointer to hash_collection:HashMap:hash_collection$HashCollection$enlarge */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___index_at, /* pointer to hash_collection:HashMap:hash_collection$HashCollection$index_at */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___node_at_idx, /* pointer to hash_collection:HashMap:hash_collection$HashCollection$node_at_idx */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___store, /* pointer to hash_collection:HashMap:hash_collection$HashCollection$store */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___node_at, /* pointer to hash_collection:HashMap:hash_collection$HashCollection$node_at */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___raz, /* pointer to hash_collection:HashMap:hash_collection$HashCollection$raz */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___remove_node, /* pointer to hash_collection:HashMap:hash_collection$HashCollection$remove_node */
}
};
/* allocate HashMap[nullable Object, nullable Object] */
val* NEW_core__HashMap(const struct type* type) {
val* self /* : HashMap[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__HashMap;
self->attrs[COLOR_core__hash_collection__HashCollection___capacity].l = 0l; /* _capacity on <self:HashMap[nullable Object, nullable Object] exact> */
self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l = 0l; /* _the_length on <self:HashMap[nullable Object, nullable Object] exact> */
return self;
}
/* runtime class core__hash_collection__HashMapKeys: core::hash_collection::HashMapKeys (dead=false; need_corpse=false)*/
const struct class class_core__hash_collection__HashMapKeys = {
0, /* box_kind */
{
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapKeys___core__kernel__Object__init, /* pointer to hash_collection:HashMapKeys:hash_collection$HashMapKeys$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to hash_collection:HashMapKeys:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to hash_collection:HashMapKeys:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Collection___Object__to_s, /* pointer to hash_collection:HashMapKeys:abstract_text$Collection$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to hash_collection:HashMapKeys:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to hash_collection:HashMapKeys:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to hash_collection:HashMapKeys:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to hash_collection:HashMapKeys:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to hash_collection:HashMapKeys:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to hash_collection:HashMapKeys:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to hash_collection:HashMapKeys:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to hash_collection:HashMapKeys:abstract_text$Object$native_class_name */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapKeys___map_61d, /* pointer to hash_collection:HashMapKeys:hash_collection$HashMapKeys$map= */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapKeys___map, /* pointer to hash_collection:HashMapKeys:hash_collection$HashMapKeys$map */
(nitmethod_t)core___core__Object___init, /* pointer to hash_collection:HashMapKeys:kernel$Object$init */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core__abstract_text___Collection___join, /* pointer to hash_collection:HashMapKeys:abstract_text$Collection$join */
(nitmethod_t)core__array___Collection___to_a, /* pointer to hash_collection:HashMapKeys:array$Collection$to_a */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapKeys___core__abstract_collection__Collection__length, /* pointer to hash_collection:HashMapKeys:hash_collection$HashMapKeys$length */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapKeys___core__abstract_collection__Collection__is_empty, /* pointer to hash_collection:HashMapKeys:hash_collection$HashMapKeys$is_empty */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapKeys___core__abstract_collection__Collection__iterator, /* pointer to hash_collection:HashMapKeys:hash_collection$HashMapKeys$iterator */
(nitmethod_t)core___core__Collection___has_exactly, /* pointer to hash_collection:HashMapKeys:abstract_collection$Collection$has_exactly */
(nitmethod_t)core___core__Collection___has_all, /* pointer to hash_collection:HashMapKeys:abstract_collection$Collection$has_all */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapKeys___core__abstract_collection__Collection__has, /* pointer to hash_collection:HashMapKeys:hash_collection$HashMapKeys$has */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapKeys___core__abstract_collection__Collection__count, /* pointer to hash_collection:HashMapKeys:hash_collection$HashMapKeys$count */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapKeys___core__abstract_collection__Collection__first, /* pointer to hash_collection:HashMapKeys:hash_collection$HashMapKeys$first */
(nitmethod_t)core___core__Collection___not_empty, /* pointer to hash_collection:HashMapKeys:abstract_collection$Collection$not_empty */
(nitmethod_t)core__abstract_text___Collection___plain_to_s, /* pointer to hash_collection:HashMapKeys:abstract_text$Collection$plain_to_s */
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
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapKeys___core__abstract_collection__RemovableCollection__clear, /* pointer to hash_collection:HashMapKeys:hash_collection$HashMapKeys$clear */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapKeys___core__abstract_collection__RemovableCollection__remove, /* pointer to hash_collection:HashMapKeys:hash_collection$HashMapKeys$remove */
}
};
/* allocate HashMapKeys[nullable Object, nullable Object] */
val* NEW_core__hash_collection__HashMapKeys(const struct type* type) {
val* self /* : HashMapKeys[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__hash_collection__HashMapKeys;
return self;
}
/* runtime class core__hash_collection__HashMapValues: core::hash_collection::HashMapValues (dead=false; need_corpse=false)*/
const struct class class_core__hash_collection__HashMapValues = {
0, /* box_kind */
{
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapValues___core__kernel__Object__init, /* pointer to hash_collection:HashMapValues:hash_collection$HashMapValues$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to hash_collection:HashMapValues:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to hash_collection:HashMapValues:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Collection___Object__to_s, /* pointer to hash_collection:HashMapValues:abstract_text$Collection$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to hash_collection:HashMapValues:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to hash_collection:HashMapValues:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to hash_collection:HashMapValues:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to hash_collection:HashMapValues:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to hash_collection:HashMapValues:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to hash_collection:HashMapValues:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to hash_collection:HashMapValues:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to hash_collection:HashMapValues:abstract_text$Object$native_class_name */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapValues___map_61d, /* pointer to hash_collection:HashMapValues:hash_collection$HashMapValues$map= */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapValues___map, /* pointer to hash_collection:HashMapValues:hash_collection$HashMapValues$map */
(nitmethod_t)core___core__Object___init, /* pointer to hash_collection:HashMapValues:kernel$Object$init */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core__abstract_text___Collection___join, /* pointer to hash_collection:HashMapValues:abstract_text$Collection$join */
(nitmethod_t)core__array___Collection___to_a, /* pointer to hash_collection:HashMapValues:array$Collection$to_a */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapValues___core__abstract_collection__Collection__length, /* pointer to hash_collection:HashMapValues:hash_collection$HashMapValues$length */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapValues___core__abstract_collection__Collection__is_empty, /* pointer to hash_collection:HashMapValues:hash_collection$HashMapValues$is_empty */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapValues___core__abstract_collection__Collection__iterator, /* pointer to hash_collection:HashMapValues:hash_collection$HashMapValues$iterator */
(nitmethod_t)core___core__Collection___has_exactly, /* pointer to hash_collection:HashMapValues:abstract_collection$Collection$has_exactly */
(nitmethod_t)core___core__Collection___has_all, /* pointer to hash_collection:HashMapValues:abstract_collection$Collection$has_all */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapValues___core__abstract_collection__Collection__has, /* pointer to hash_collection:HashMapValues:hash_collection$HashMapValues$has */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapValues___core__abstract_collection__Collection__count, /* pointer to hash_collection:HashMapValues:hash_collection$HashMapValues$count */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapValues___core__abstract_collection__Collection__first, /* pointer to hash_collection:HashMapValues:hash_collection$HashMapValues$first */
(nitmethod_t)core___core__Collection___not_empty, /* pointer to hash_collection:HashMapValues:abstract_collection$Collection$not_empty */
(nitmethod_t)core__abstract_text___Collection___plain_to_s, /* pointer to hash_collection:HashMapValues:abstract_text$Collection$plain_to_s */
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
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapValues___core__abstract_collection__RemovableCollection__clear, /* pointer to hash_collection:HashMapValues:hash_collection$HashMapValues$clear */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapValues___core__abstract_collection__RemovableCollection__remove, /* pointer to hash_collection:HashMapValues:hash_collection$HashMapValues$remove */
}
};
/* allocate HashMapValues[nullable Object, nullable Object] */
val* NEW_core__hash_collection__HashMapValues(const struct type* type) {
val* self /* : HashMapValues[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__hash_collection__HashMapValues;
return self;
}
/* runtime class core__hash_collection__HashMapNode: core::hash_collection::HashMapNode (dead=false; need_corpse=false)*/
const struct class class_core__hash_collection__HashMapNode = {
0, /* box_kind */
{
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapNode___core__kernel__Object__init, /* pointer to hash_collection:HashMapNode:hash_collection$HashMapNode$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to hash_collection:HashMapNode:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to hash_collection:HashMapNode:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to hash_collection:HashMapNode:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to hash_collection:HashMapNode:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to hash_collection:HashMapNode:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to hash_collection:HashMapNode:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to hash_collection:HashMapNode:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to hash_collection:HashMapNode:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to hash_collection:HashMapNode:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to hash_collection:HashMapNode:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to hash_collection:HashMapNode:abstract_text$Object$native_class_name */
(nitmethod_t)core__hash_collection___core__hash_collection__HashNode___key_61d, /* pointer to hash_collection:HashMapNode:hash_collection$HashNode$key= */
(nitmethod_t)core___core__Object___init, /* pointer to hash_collection:HashMapNode:kernel$Object$init */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapNode___value_61d, /* pointer to hash_collection:HashMapNode:hash_collection$HashMapNode$value= */
(nitmethod_t)core__hash_collection___core__hash_collection__HashNode___core__kernel__Object__init, /* pointer to hash_collection:HashMapNode:hash_collection$HashNode$init */
}
};
/* allocate HashMapNode[nullable Object, nullable Object] */
val* NEW_core__hash_collection__HashMapNode(const struct type* type) {
val* self /* : HashMapNode[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__hash_collection__HashMapNode;
return self;
}
/* runtime class core__hash_collection__HashMapIterator: core::hash_collection::HashMapIterator (dead=false; need_corpse=false)*/
const struct class class_core__hash_collection__HashMapIterator = {
0, /* box_kind */
{
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapIterator___core__kernel__Object__init, /* pointer to hash_collection:HashMapIterator:hash_collection$HashMapIterator$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to hash_collection:HashMapIterator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to hash_collection:HashMapIterator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to hash_collection:HashMapIterator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to hash_collection:HashMapIterator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to hash_collection:HashMapIterator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to hash_collection:HashMapIterator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to hash_collection:HashMapIterator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to hash_collection:HashMapIterator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to hash_collection:HashMapIterator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to hash_collection:HashMapIterator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to hash_collection:HashMapIterator:abstract_text$Object$native_class_name */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapIterator___core__abstract_collection__MapIterator__is_ok, /* pointer to hash_collection:HashMapIterator:hash_collection$HashMapIterator$is_ok */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapIterator___core__abstract_collection__MapIterator__key, /* pointer to hash_collection:HashMapIterator:hash_collection$HashMapIterator$key */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapIterator___core__abstract_collection__MapIterator__item, /* pointer to hash_collection:HashMapIterator:hash_collection$HashMapIterator$item */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapIterator___core__abstract_collection__MapIterator__next, /* pointer to hash_collection:HashMapIterator:hash_collection$HashMapIterator$next */
(nitmethod_t)core___core__MapIterator___finish, /* pointer to hash_collection:HashMapIterator:abstract_collection$MapIterator$finish */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapIterator___map_61d, /* pointer to hash_collection:HashMapIterator:hash_collection$HashMapIterator$map= */
(nitmethod_t)core__hash_collection___core__hash_collection__HashMapIterator___map, /* pointer to hash_collection:HashMapIterator:hash_collection$HashMapIterator$map */
(nitmethod_t)core___core__Object___init, /* pointer to hash_collection:HashMapIterator:kernel$Object$init */
}
};
/* allocate HashMapIterator[nullable Object, nullable Object] */
val* NEW_core__hash_collection__HashMapIterator(const struct type* type) {
val* self /* : HashMapIterator[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__hash_collection__HashMapIterator;
return self;
}
/* runtime class core__HashSet: core::HashSet (dead=false; need_corpse=false)*/
const struct class class_core__HashSet = {
0, /* box_kind */
{
(nitmethod_t)core___core__HashSet___core__kernel__Object__init, /* pointer to hash_collection:HashSet:hash_collection$HashSet$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to hash_collection:HashSet:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to hash_collection:HashSet:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Collection___Object__to_s, /* pointer to hash_collection:HashSet:abstract_text$Collection$to_s */
(nitmethod_t)core___core__Set___core__kernel__Object___61d_61d, /* pointer to hash_collection:HashSet:abstract_collection$Set$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to hash_collection:HashSet:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to hash_collection:HashSet:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to hash_collection:HashSet:kernel$Object$object_id */
(nitmethod_t)core___core__Set___core__kernel__Object__hash, /* pointer to hash_collection:HashSet:abstract_collection$Set$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to hash_collection:HashSet:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to hash_collection:HashSet:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to hash_collection:HashSet:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Set___union, /* pointer to hash_collection:HashSet:abstract_collection$Set$union */
(nitmethod_t)core__hash_collection___Set___new, /* pointer to hash_collection:HashSet:hash_collection$Set$new */
(nitmethod_t)core___core__HashSet___core__abstract_collection__Set__new_set, /* pointer to hash_collection:HashSet:hash_collection$HashSet$new_set */
(nitmethod_t)core___core__HashSet___from, /* pointer to hash_collection:HashSet:hash_collection$HashSet$from */
(nitmethod_t)core___core__Object___init, /* pointer to hash_collection:HashSet:kernel$Object$init */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core___core__Set___core__kernel__Cloneable__clone, /* pointer to hash_collection:HashSet:abstract_collection$Set$clone */
(nitmethod_t)core__abstract_text___Collection___join, /* pointer to hash_collection:HashSet:abstract_text$Collection$join */
(nitmethod_t)core__array___Collection___to_a, /* pointer to hash_collection:HashSet:array$Collection$to_a */
(nitmethod_t)core___core__HashSet___core__abstract_collection__Collection__length, /* pointer to hash_collection:HashSet:hash_collection$HashSet$length */
(nitmethod_t)core___core__HashSet___core__abstract_collection__Collection__is_empty, /* pointer to hash_collection:HashSet:hash_collection$HashSet$is_empty */
(nitmethod_t)core___core__HashSet___core__abstract_collection__Collection__iterator, /* pointer to hash_collection:HashSet:hash_collection$HashSet$iterator */
(nitmethod_t)core___core__Collection___has_exactly, /* pointer to hash_collection:HashSet:abstract_collection$Collection$has_exactly */
(nitmethod_t)core___core__Collection___has_all, /* pointer to hash_collection:HashSet:abstract_collection$Collection$has_all */
(nitmethod_t)core___core__HashSet___core__abstract_collection__Collection__has, /* pointer to hash_collection:HashSet:hash_collection$HashSet$has */
(nitmethod_t)core___core__Set___Collection__count, /* pointer to hash_collection:HashSet:abstract_collection$Set$count */
(nitmethod_t)core___core__HashSet___core__abstract_collection__Collection__first, /* pointer to hash_collection:HashSet:hash_collection$HashSet$first */
(nitmethod_t)core___core__Collection___not_empty, /* pointer to hash_collection:HashSet:abstract_collection$Collection$not_empty */
(nitmethod_t)core__abstract_text___Collection___plain_to_s, /* pointer to hash_collection:HashSet:abstract_text$Collection$plain_to_s */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___enlarge, /* pointer to hash_collection:HashSet:hash_collection$HashCollection$enlarge */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___index_at, /* pointer to hash_collection:HashSet:hash_collection$HashCollection$index_at */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___node_at_idx, /* pointer to hash_collection:HashSet:hash_collection$HashCollection$node_at_idx */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___store, /* pointer to hash_collection:HashSet:hash_collection$HashCollection$store */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___node_at, /* pointer to hash_collection:HashSet:hash_collection$HashCollection$node_at */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___raz, /* pointer to hash_collection:HashSet:hash_collection$HashCollection$raz */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___remove_node, /* pointer to hash_collection:HashSet:hash_collection$HashCollection$remove_node */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core___core__HashSet___core__abstract_collection__RemovableCollection__clear, /* pointer to hash_collection:HashSet:hash_collection$HashSet$clear */
(nitmethod_t)core___core__HashSet___core__abstract_collection__RemovableCollection__remove, /* pointer to hash_collection:HashSet:hash_collection$HashSet$remove */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core___core__HashSet___core__abstract_collection__SimpleCollection__add, /* pointer to hash_collection:HashSet:hash_collection$HashSet$add */
(nitmethod_t)core___core__SimpleCollection___add_all, /* pointer to hash_collection:HashSet:abstract_collection$SimpleCollection$add_all */
}
};
/* allocate HashSet[nullable Object] */
val* NEW_core__HashSet(const struct type* type) {
val* self /* : HashSet[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__HashSet;
self->attrs[COLOR_core__hash_collection__HashCollection___capacity].l = 0l; /* _capacity on <self:HashSet[nullable Object] exact> */
self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l = 0l; /* _the_length on <self:HashSet[nullable Object] exact> */
return self;
}
/* runtime class core__hash_collection__HashSetNode: core::hash_collection::HashSetNode (dead=false; need_corpse=false)*/
const struct class class_core__hash_collection__HashSetNode = {
0, /* box_kind */
{
(nitmethod_t)core__hash_collection___core__hash_collection__HashNode___core__kernel__Object__init, /* pointer to hash_collection:HashSetNode:hash_collection$HashNode$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to hash_collection:HashSetNode:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to hash_collection:HashSetNode:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to hash_collection:HashSetNode:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to hash_collection:HashSetNode:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to hash_collection:HashSetNode:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to hash_collection:HashSetNode:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to hash_collection:HashSetNode:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to hash_collection:HashSetNode:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to hash_collection:HashSetNode:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to hash_collection:HashSetNode:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to hash_collection:HashSetNode:abstract_text$Object$native_class_name */
(nitmethod_t)core__hash_collection___core__hash_collection__HashNode___key_61d, /* pointer to hash_collection:HashSetNode:hash_collection$HashNode$key= */
(nitmethod_t)core___core__Object___init, /* pointer to hash_collection:HashSetNode:kernel$Object$init */
}
};
/* allocate HashSetNode[nullable Object] */
val* NEW_core__hash_collection__HashSetNode(const struct type* type) {
val* self /* : HashSetNode[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__hash_collection__HashSetNode;
return self;
}
/* runtime class core__hash_collection__HashSetIterator: core::hash_collection::HashSetIterator (dead=false; need_corpse=false)*/
const struct class class_core__hash_collection__HashSetIterator = {
0, /* box_kind */
{
(nitmethod_t)core__hash_collection___core__hash_collection__HashSetIterator___core__kernel__Object__init, /* pointer to hash_collection:HashSetIterator:hash_collection$HashSetIterator$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to hash_collection:HashSetIterator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to hash_collection:HashSetIterator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to hash_collection:HashSetIterator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to hash_collection:HashSetIterator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to hash_collection:HashSetIterator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to hash_collection:HashSetIterator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to hash_collection:HashSetIterator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to hash_collection:HashSetIterator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to hash_collection:HashSetIterator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to hash_collection:HashSetIterator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to hash_collection:HashSetIterator:abstract_text$Object$native_class_name */
(nitmethod_t)core__hash_collection___core__hash_collection__HashSetIterator___core__abstract_collection__Iterator__is_ok, /* pointer to hash_collection:HashSetIterator:hash_collection$HashSetIterator$is_ok */
(nitmethod_t)core__hash_collection___core__hash_collection__HashSetIterator___core__abstract_collection__Iterator__item, /* pointer to hash_collection:HashSetIterator:hash_collection$HashSetIterator$item */
(nitmethod_t)core__hash_collection___core__hash_collection__HashSetIterator___core__abstract_collection__Iterator__next, /* pointer to hash_collection:HashSetIterator:hash_collection$HashSetIterator$next */
(nitmethod_t)core___core__Iterator___finish, /* pointer to hash_collection:HashSetIterator:abstract_collection$Iterator$finish */
(nitmethod_t)core___core__Iterator___iterator, /* pointer to hash_collection:HashSetIterator:abstract_collection$Iterator$iterator */
(nitmethod_t)core__array___Iterator___to_a, /* pointer to hash_collection:HashSetIterator:array$Iterator$to_a */
(nitmethod_t)core__hash_collection___core__hash_collection__HashSetIterator___set_61d, /* pointer to hash_collection:HashSetIterator:hash_collection$HashSetIterator$set= */
(nitmethod_t)core___core__Object___init, /* pointer to hash_collection:HashSetIterator:kernel$Object$init */
}
};
/* allocate HashSetIterator[nullable Object] */
val* NEW_core__hash_collection__HashSetIterator(const struct type* type) {
val* self /* : HashSetIterator[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__hash_collection__HashSetIterator;
return self;
}
/* runtime class core__DisjointSet: core::DisjointSet (dead=true; need_corpse=false)*/
/* allocate DisjointSet[nullable Object] */
val* NEW_core__DisjointSet(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "DisjointSet is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__union_find__DisjointSetNode: core::union_find::DisjointSetNode (dead=true; need_corpse=false)*/
/* allocate DisjointSetNode */
val* NEW_core__union_find__DisjointSetNode(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "DisjointSetNode is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Int8: core::Int8 (dead=false; need_corpse=true)*/
const struct class class_core__Int8 = {
8, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to fixed_ints:Int8:kernel$Object$init */
(nitmethod_t)VIRTUAL_core___core__Int8___core__kernel__Object___33d_61d, /* pointer to fixed_ints:Int8:fixed_ints$Int8$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to fixed_ints:Int8:kernel$Object$sys */
(nitmethod_t)VIRTUAL_core__fixed_ints_text___Int8___core__abstract_text__Object__to_s, /* pointer to fixed_ints:Int8:fixed_ints_text$Int8$to_s */
(nitmethod_t)VIRTUAL_core___core__Int8___core__kernel__Object___61d_61d, /* pointer to fixed_ints:Int8:fixed_ints$Int8$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to fixed_ints:Int8:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to fixed_ints:Int8:abstract_text$Object$inspect */
(nitmethod_t)VIRTUAL_core___core__Int8___core__kernel__Object__object_id, /* pointer to fixed_ints:Int8:fixed_ints$Int8$object_id */
(nitmethod_t)VIRTUAL_core___core__Int8___core__kernel__Object__hash, /* pointer to fixed_ints:Int8:fixed_ints$Int8$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to fixed_ints:Int8:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to fixed_ints:Int8:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to fixed_ints:Int8:abstract_text$Object$native_class_name */
(nitmethod_t)VIRTUAL_core___core__Int8___core__kernel__Comparable___60d_61d, /* pointer to fixed_ints:Int8:fixed_ints$Int8$<= */
(nitmethod_t)VIRTUAL_core___core__Int8___core__kernel__Comparable___62d, /* pointer to fixed_ints:Int8:fixed_ints$Int8$> */
(nitmethod_t)VIRTUAL_core___core__Int8___core__kernel__Comparable___62d_61d, /* pointer to fixed_ints:Int8:fixed_ints$Int8$>= */
(nitmethod_t)VIRTUAL_core___core__Int8___core__kernel__Comparable___60d, /* pointer to fixed_ints:Int8:fixed_ints$Int8$< */
(nitmethod_t)VIRTUAL_core___core__Int8___core__kernel__Comparable___60d_61d_62d, /* pointer to fixed_ints:Int8:fixed_ints$Int8$<=> */
(nitmethod_t)VIRTUAL_core___core__Int8___core__kernel__Comparable__min, /* pointer to fixed_ints:Int8:fixed_ints$Int8$min */
(nitmethod_t)VIRTUAL_core___core__Int8___core__kernel__Comparable__max, /* pointer to fixed_ints:Int8:fixed_ints$Int8$max */
(nitmethod_t)VIRTUAL_core___core__Int8___core__kernel__Discrete__successor, /* pointer to fixed_ints:Int8:fixed_ints$Int8$successor */
(nitmethod_t)VIRTUAL_core___core__Int8___core__kernel__Numeric___43d, /* pointer to fixed_ints:Int8:fixed_ints$Int8$+ */
(nitmethod_t)VIRTUAL_core___core__Int8___core__kernel__Numeric___45d, /* pointer to fixed_ints:Int8:fixed_ints$Int8$- */
(nitmethod_t)VIRTUAL_core___core__Int8___core__kernel__Numeric__unary_32d_45d, /* pointer to fixed_ints:Int8:fixed_ints$Int8$unary - */
(nitmethod_t)VIRTUAL_core___core__Int8___core__kernel__Discrete__distance, /* pointer to fixed_ints:Int8:fixed_ints$Int8$distance */
(nitmethod_t)VIRTUAL_core___core__Int8___core__kernel__Numeric__to_i, /* pointer to fixed_ints:Int8:fixed_ints$Int8$to_i */
(nitmethod_t)VIRTUAL_core___core__Int8___core__kernel__Numeric___42d, /* pointer to fixed_ints:Int8:fixed_ints$Int8$* */
(nitmethod_t)VIRTUAL_core___core__Int8___core__kernel__Numeric__to_b, /* pointer to fixed_ints:Int8:fixed_ints$Int8$to_b */
(nitmethod_t)VIRTUAL_core___core__Int8___Numeric__to_i8, /* pointer to fixed_ints:Int8:fixed_ints$Int8$to_i8 */
(nitmethod_t)VIRTUAL_core___core__Int8___Numeric__to_i16, /* pointer to fixed_ints:Int8:fixed_ints$Int8$to_i16 */
(nitmethod_t)VIRTUAL_core___core__Int8___Numeric__to_u16, /* pointer to fixed_ints:Int8:fixed_ints$Int8$to_u16 */
(nitmethod_t)VIRTUAL_core___core__Int8___Numeric__to_i32, /* pointer to fixed_ints:Int8:fixed_ints$Int8$to_i32 */
(nitmethod_t)VIRTUAL_core___core__Int8___Numeric__to_u32, /* pointer to fixed_ints:Int8:fixed_ints$Int8$to_u32 */
(nitmethod_t)VIRTUAL_core___core__Int8___core__kernel__Numeric___47d, /* pointer to fixed_ints:Int8:fixed_ints$Int8$/ */
(nitmethod_t)VIRTUAL_core___core__Int8___core__kernel__Numeric__to_f, /* pointer to fixed_ints:Int8:fixed_ints$Int8$to_f */
(nitmethod_t)core__fixed_ints_text___Int8___to_s_len, /* pointer to fixed_ints:Int8:fixed_ints_text$Int8$to_s_len */
(nitmethod_t)core__fixed_ints_text___Int8___native_to_s, /* pointer to fixed_ints:Int8:fixed_ints_text$Int8$native_to_s */
}
};
/* allocate Int8 */
val* BOX_core__Int8(int8_t value) {
struct instance_core__Int8*res = nit_alloc(sizeof(struct instance_core__Int8));
res->type = &type_core__Int8;
res->class = &class_core__Int8;
res->value = value;
return (val*)res;
}
/* runtime class core__Int16: core::Int16 (dead=false; need_corpse=true)*/
const struct class class_core__Int16 = {
9, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to fixed_ints:Int16:kernel$Object$init */
(nitmethod_t)VIRTUAL_core___core__Int16___core__kernel__Object___33d_61d, /* pointer to fixed_ints:Int16:fixed_ints$Int16$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to fixed_ints:Int16:kernel$Object$sys */
(nitmethod_t)VIRTUAL_core__fixed_ints_text___Int16___core__abstract_text__Object__to_s, /* pointer to fixed_ints:Int16:fixed_ints_text$Int16$to_s */
(nitmethod_t)VIRTUAL_core___core__Int16___core__kernel__Object___61d_61d, /* pointer to fixed_ints:Int16:fixed_ints$Int16$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to fixed_ints:Int16:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to fixed_ints:Int16:abstract_text$Object$inspect */
(nitmethod_t)VIRTUAL_core___core__Int16___core__kernel__Object__object_id, /* pointer to fixed_ints:Int16:fixed_ints$Int16$object_id */
(nitmethod_t)VIRTUAL_core___core__Int16___core__kernel__Object__hash, /* pointer to fixed_ints:Int16:fixed_ints$Int16$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to fixed_ints:Int16:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to fixed_ints:Int16:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to fixed_ints:Int16:abstract_text$Object$native_class_name */
(nitmethod_t)VIRTUAL_core___core__Int16___core__kernel__Comparable___60d_61d, /* pointer to fixed_ints:Int16:fixed_ints$Int16$<= */
(nitmethod_t)VIRTUAL_core___core__Int16___core__kernel__Comparable___62d, /* pointer to fixed_ints:Int16:fixed_ints$Int16$> */
(nitmethod_t)VIRTUAL_core___core__Int16___core__kernel__Comparable___62d_61d, /* pointer to fixed_ints:Int16:fixed_ints$Int16$>= */
(nitmethod_t)VIRTUAL_core___core__Int16___core__kernel__Comparable___60d, /* pointer to fixed_ints:Int16:fixed_ints$Int16$< */
(nitmethod_t)VIRTUAL_core___core__Int16___core__kernel__Comparable___60d_61d_62d, /* pointer to fixed_ints:Int16:fixed_ints$Int16$<=> */
(nitmethod_t)VIRTUAL_core___core__Int16___core__kernel__Comparable__min, /* pointer to fixed_ints:Int16:fixed_ints$Int16$min */
(nitmethod_t)VIRTUAL_core___core__Int16___core__kernel__Comparable__max, /* pointer to fixed_ints:Int16:fixed_ints$Int16$max */
(nitmethod_t)VIRTUAL_core___core__Int16___core__kernel__Discrete__successor, /* pointer to fixed_ints:Int16:fixed_ints$Int16$successor */
(nitmethod_t)VIRTUAL_core___core__Int16___core__kernel__Numeric___43d, /* pointer to fixed_ints:Int16:fixed_ints$Int16$+ */
(nitmethod_t)VIRTUAL_core___core__Int16___core__kernel__Numeric___45d, /* pointer to fixed_ints:Int16:fixed_ints$Int16$- */
(nitmethod_t)VIRTUAL_core___core__Int16___core__kernel__Numeric__unary_32d_45d, /* pointer to fixed_ints:Int16:fixed_ints$Int16$unary - */
(nitmethod_t)VIRTUAL_core___core__Int16___core__kernel__Discrete__distance, /* pointer to fixed_ints:Int16:fixed_ints$Int16$distance */
(nitmethod_t)VIRTUAL_core___core__Int16___core__kernel__Numeric__to_i, /* pointer to fixed_ints:Int16:fixed_ints$Int16$to_i */
(nitmethod_t)VIRTUAL_core___core__Int16___core__kernel__Numeric___42d, /* pointer to fixed_ints:Int16:fixed_ints$Int16$* */
(nitmethod_t)VIRTUAL_core___core__Int16___core__kernel__Numeric__to_b, /* pointer to fixed_ints:Int16:fixed_ints$Int16$to_b */
(nitmethod_t)VIRTUAL_core___core__Int16___Numeric__to_i8, /* pointer to fixed_ints:Int16:fixed_ints$Int16$to_i8 */
(nitmethod_t)VIRTUAL_core___core__Int16___Numeric__to_i16, /* pointer to fixed_ints:Int16:fixed_ints$Int16$to_i16 */
(nitmethod_t)VIRTUAL_core___core__Int16___Numeric__to_u16, /* pointer to fixed_ints:Int16:fixed_ints$Int16$to_u16 */
(nitmethod_t)VIRTUAL_core___core__Int16___Numeric__to_i32, /* pointer to fixed_ints:Int16:fixed_ints$Int16$to_i32 */
(nitmethod_t)VIRTUAL_core___core__Int16___Numeric__to_u32, /* pointer to fixed_ints:Int16:fixed_ints$Int16$to_u32 */
(nitmethod_t)VIRTUAL_core___core__Int16___core__kernel__Numeric___47d, /* pointer to fixed_ints:Int16:fixed_ints$Int16$/ */
(nitmethod_t)VIRTUAL_core___core__Int16___core__kernel__Numeric__to_f, /* pointer to fixed_ints:Int16:fixed_ints$Int16$to_f */
(nitmethod_t)core__fixed_ints_text___Int16___to_s_len, /* pointer to fixed_ints:Int16:fixed_ints_text$Int16$to_s_len */
(nitmethod_t)core__fixed_ints_text___Int16___native_to_s, /* pointer to fixed_ints:Int16:fixed_ints_text$Int16$native_to_s */
}
};
/* allocate Int16 */
val* BOX_core__Int16(int16_t value) {
struct instance_core__Int16*res = nit_alloc(sizeof(struct instance_core__Int16));
res->type = &type_core__Int16;
res->class = &class_core__Int16;
res->value = value;
return (val*)res;
}
/* runtime class core__UInt16: core::UInt16 (dead=false; need_corpse=true)*/
const struct class class_core__UInt16 = {
10, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to fixed_ints:UInt16:kernel$Object$init */
(nitmethod_t)VIRTUAL_core___core__UInt16___core__kernel__Object___33d_61d, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to fixed_ints:UInt16:kernel$Object$sys */
(nitmethod_t)VIRTUAL_core__fixed_ints_text___UInt16___core__abstract_text__Object__to_s, /* pointer to fixed_ints:UInt16:fixed_ints_text$UInt16$to_s */
(nitmethod_t)VIRTUAL_core___core__UInt16___core__kernel__Object___61d_61d, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to fixed_ints:UInt16:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to fixed_ints:UInt16:abstract_text$Object$inspect */
(nitmethod_t)VIRTUAL_core___core__UInt16___core__kernel__Object__object_id, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$object_id */
(nitmethod_t)VIRTUAL_core___core__UInt16___core__kernel__Object__hash, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to fixed_ints:UInt16:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to fixed_ints:UInt16:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to fixed_ints:UInt16:abstract_text$Object$native_class_name */
(nitmethod_t)VIRTUAL_core___core__UInt16___core__kernel__Comparable___60d_61d, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$<= */
(nitmethod_t)VIRTUAL_core___core__UInt16___core__kernel__Comparable___62d, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$> */
(nitmethod_t)VIRTUAL_core___core__UInt16___core__kernel__Comparable___62d_61d, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$>= */
(nitmethod_t)VIRTUAL_core___core__UInt16___core__kernel__Comparable___60d, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$< */
(nitmethod_t)VIRTUAL_core___core__UInt16___core__kernel__Comparable___60d_61d_62d, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$<=> */
(nitmethod_t)VIRTUAL_core___core__UInt16___core__kernel__Comparable__min, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$min */
(nitmethod_t)VIRTUAL_core___core__UInt16___core__kernel__Comparable__max, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$max */
(nitmethod_t)VIRTUAL_core___core__UInt16___core__kernel__Discrete__successor, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$successor */
(nitmethod_t)VIRTUAL_core___core__UInt16___core__kernel__Numeric___43d, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$+ */
(nitmethod_t)VIRTUAL_core___core__UInt16___core__kernel__Numeric___45d, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$- */
(nitmethod_t)VIRTUAL_core___core__UInt16___core__kernel__Numeric__unary_32d_45d, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$unary - */
(nitmethod_t)VIRTUAL_core___core__UInt16___core__kernel__Discrete__distance, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$distance */
(nitmethod_t)VIRTUAL_core___core__UInt16___core__kernel__Numeric__to_i, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$to_i */
(nitmethod_t)VIRTUAL_core___core__UInt16___core__kernel__Numeric___42d, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$* */
(nitmethod_t)VIRTUAL_core___core__UInt16___core__kernel__Numeric__to_b, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$to_b */
(nitmethod_t)VIRTUAL_core___core__UInt16___Numeric__to_i8, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$to_i8 */
(nitmethod_t)VIRTUAL_core___core__UInt16___Numeric__to_i16, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$to_i16 */
(nitmethod_t)VIRTUAL_core___core__UInt16___Numeric__to_u16, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$to_u16 */
(nitmethod_t)VIRTUAL_core___core__UInt16___Numeric__to_i32, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$to_i32 */
(nitmethod_t)VIRTUAL_core___core__UInt16___Numeric__to_u32, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$to_u32 */
(nitmethod_t)VIRTUAL_core___core__UInt16___core__kernel__Numeric___47d, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$/ */
(nitmethod_t)VIRTUAL_core___core__UInt16___core__kernel__Numeric__to_f, /* pointer to fixed_ints:UInt16:fixed_ints$UInt16$to_f */
(nitmethod_t)core__fixed_ints_text___UInt16___to_s_len, /* pointer to fixed_ints:UInt16:fixed_ints_text$UInt16$to_s_len */
(nitmethod_t)core__fixed_ints_text___UInt16___native_to_s, /* pointer to fixed_ints:UInt16:fixed_ints_text$UInt16$native_to_s */
}
};
/* allocate UInt16 */
val* BOX_core__UInt16(uint16_t value) {
struct instance_core__UInt16*res = nit_alloc(sizeof(struct instance_core__UInt16));
res->type = &type_core__UInt16;
res->class = &class_core__UInt16;
res->value = value;
return (val*)res;
}
/* runtime class core__Int32: core::Int32 (dead=false; need_corpse=true)*/
const struct class class_core__Int32 = {
11, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to fixed_ints:Int32:kernel$Object$init */
(nitmethod_t)VIRTUAL_core___core__Int32___core__kernel__Object___33d_61d, /* pointer to fixed_ints:Int32:fixed_ints$Int32$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to fixed_ints:Int32:kernel$Object$sys */
(nitmethod_t)VIRTUAL_core__fixed_ints_text___Int32___core__abstract_text__Object__to_s, /* pointer to fixed_ints:Int32:fixed_ints_text$Int32$to_s */
(nitmethod_t)VIRTUAL_core___core__Int32___core__kernel__Object___61d_61d, /* pointer to fixed_ints:Int32:fixed_ints$Int32$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to fixed_ints:Int32:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to fixed_ints:Int32:abstract_text$Object$inspect */
(nitmethod_t)VIRTUAL_core___core__Int32___core__kernel__Object__object_id, /* pointer to fixed_ints:Int32:fixed_ints$Int32$object_id */
(nitmethod_t)VIRTUAL_core___core__Int32___core__kernel__Object__hash, /* pointer to fixed_ints:Int32:fixed_ints$Int32$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to fixed_ints:Int32:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to fixed_ints:Int32:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to fixed_ints:Int32:abstract_text$Object$native_class_name */
(nitmethod_t)VIRTUAL_core___core__Int32___core__kernel__Comparable___60d_61d, /* pointer to fixed_ints:Int32:fixed_ints$Int32$<= */
(nitmethod_t)VIRTUAL_core___core__Int32___core__kernel__Comparable___62d, /* pointer to fixed_ints:Int32:fixed_ints$Int32$> */
(nitmethod_t)VIRTUAL_core___core__Int32___core__kernel__Comparable___62d_61d, /* pointer to fixed_ints:Int32:fixed_ints$Int32$>= */
(nitmethod_t)VIRTUAL_core___core__Int32___core__kernel__Comparable___60d, /* pointer to fixed_ints:Int32:fixed_ints$Int32$< */
(nitmethod_t)VIRTUAL_core___core__Int32___core__kernel__Comparable___60d_61d_62d, /* pointer to fixed_ints:Int32:fixed_ints$Int32$<=> */
(nitmethod_t)VIRTUAL_core___core__Int32___core__kernel__Comparable__min, /* pointer to fixed_ints:Int32:fixed_ints$Int32$min */
(nitmethod_t)VIRTUAL_core___core__Int32___core__kernel__Comparable__max, /* pointer to fixed_ints:Int32:fixed_ints$Int32$max */
(nitmethod_t)VIRTUAL_core___core__Int32___core__kernel__Discrete__successor, /* pointer to fixed_ints:Int32:fixed_ints$Int32$successor */
(nitmethod_t)VIRTUAL_core___core__Int32___core__kernel__Numeric___43d, /* pointer to fixed_ints:Int32:fixed_ints$Int32$+ */
(nitmethod_t)VIRTUAL_core___core__Int32___core__kernel__Numeric___45d, /* pointer to fixed_ints:Int32:fixed_ints$Int32$- */
(nitmethod_t)VIRTUAL_core___core__Int32___core__kernel__Numeric__unary_32d_45d, /* pointer to fixed_ints:Int32:fixed_ints$Int32$unary - */
(nitmethod_t)VIRTUAL_core___core__Int32___core__kernel__Discrete__distance, /* pointer to fixed_ints:Int32:fixed_ints$Int32$distance */
(nitmethod_t)VIRTUAL_core___core__Int32___core__kernel__Numeric__to_i, /* pointer to fixed_ints:Int32:fixed_ints$Int32$to_i */
(nitmethod_t)VIRTUAL_core___core__Int32___core__kernel__Numeric___42d, /* pointer to fixed_ints:Int32:fixed_ints$Int32$* */
(nitmethod_t)VIRTUAL_core___core__Int32___core__kernel__Numeric__to_b, /* pointer to fixed_ints:Int32:fixed_ints$Int32$to_b */
(nitmethod_t)VIRTUAL_core___core__Int32___Numeric__to_i8, /* pointer to fixed_ints:Int32:fixed_ints$Int32$to_i8 */
(nitmethod_t)VIRTUAL_core___core__Int32___Numeric__to_i16, /* pointer to fixed_ints:Int32:fixed_ints$Int32$to_i16 */
(nitmethod_t)VIRTUAL_core___core__Int32___Numeric__to_u16, /* pointer to fixed_ints:Int32:fixed_ints$Int32$to_u16 */
(nitmethod_t)VIRTUAL_core___core__Int32___Numeric__to_i32, /* pointer to fixed_ints:Int32:fixed_ints$Int32$to_i32 */
(nitmethod_t)VIRTUAL_core___core__Int32___Numeric__to_u32, /* pointer to fixed_ints:Int32:fixed_ints$Int32$to_u32 */
(nitmethod_t)VIRTUAL_core___core__Int32___core__kernel__Numeric___47d, /* pointer to fixed_ints:Int32:fixed_ints$Int32$/ */
(nitmethod_t)VIRTUAL_core___core__Int32___core__kernel__Numeric__to_f, /* pointer to fixed_ints:Int32:fixed_ints$Int32$to_f */
(nitmethod_t)core__fixed_ints_text___Int32___to_s_len, /* pointer to fixed_ints:Int32:fixed_ints_text$Int32$to_s_len */
(nitmethod_t)core__fixed_ints_text___Int32___native_to_s, /* pointer to fixed_ints:Int32:fixed_ints_text$Int32$native_to_s */
}
};
/* allocate Int32 */
val* BOX_core__Int32(int32_t value) {
struct instance_core__Int32*res = nit_alloc(sizeof(struct instance_core__Int32));
res->type = &type_core__Int32;
res->class = &class_core__Int32;
res->value = value;
return (val*)res;
}
/* runtime class core__UInt32: core::UInt32 (dead=false; need_corpse=true)*/
const struct class class_core__UInt32 = {
12, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to fixed_ints:UInt32:kernel$Object$init */
(nitmethod_t)VIRTUAL_core___core__UInt32___core__kernel__Object___33d_61d, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to fixed_ints:UInt32:kernel$Object$sys */
(nitmethod_t)VIRTUAL_core__fixed_ints_text___UInt32___core__abstract_text__Object__to_s, /* pointer to fixed_ints:UInt32:fixed_ints_text$UInt32$to_s */
(nitmethod_t)VIRTUAL_core___core__UInt32___core__kernel__Object___61d_61d, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to fixed_ints:UInt32:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to fixed_ints:UInt32:abstract_text$Object$inspect */
(nitmethod_t)VIRTUAL_core___core__UInt32___core__kernel__Object__object_id, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$object_id */
(nitmethod_t)VIRTUAL_core___core__UInt32___core__kernel__Object__hash, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to fixed_ints:UInt32:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to fixed_ints:UInt32:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to fixed_ints:UInt32:abstract_text$Object$native_class_name */
(nitmethod_t)VIRTUAL_core___core__UInt32___core__kernel__Comparable___60d_61d, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$<= */
(nitmethod_t)VIRTUAL_core___core__UInt32___core__kernel__Comparable___62d, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$> */
(nitmethod_t)VIRTUAL_core___core__UInt32___core__kernel__Comparable___62d_61d, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$>= */
(nitmethod_t)VIRTUAL_core___core__UInt32___core__kernel__Comparable___60d, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$< */
(nitmethod_t)VIRTUAL_core___core__UInt32___core__kernel__Comparable___60d_61d_62d, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$<=> */
(nitmethod_t)VIRTUAL_core___core__UInt32___core__kernel__Comparable__min, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$min */
(nitmethod_t)VIRTUAL_core___core__UInt32___core__kernel__Comparable__max, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$max */
(nitmethod_t)VIRTUAL_core___core__UInt32___core__kernel__Discrete__successor, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$successor */
(nitmethod_t)VIRTUAL_core___core__UInt32___core__kernel__Numeric___43d, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$+ */
(nitmethod_t)VIRTUAL_core___core__UInt32___core__kernel__Numeric___45d, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$- */
(nitmethod_t)VIRTUAL_core___core__UInt32___core__kernel__Numeric__unary_32d_45d, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$unary - */
(nitmethod_t)VIRTUAL_core___core__UInt32___core__kernel__Discrete__distance, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$distance */
(nitmethod_t)VIRTUAL_core___core__UInt32___core__kernel__Numeric__to_i, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$to_i */
(nitmethod_t)VIRTUAL_core___core__UInt32___core__kernel__Numeric___42d, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$* */
(nitmethod_t)VIRTUAL_core___core__UInt32___core__kernel__Numeric__to_b, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$to_b */
(nitmethod_t)VIRTUAL_core___core__UInt32___Numeric__to_i8, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$to_i8 */
(nitmethod_t)VIRTUAL_core___core__UInt32___Numeric__to_i16, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$to_i16 */
(nitmethod_t)VIRTUAL_core___core__UInt32___Numeric__to_u16, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$to_u16 */
(nitmethod_t)VIRTUAL_core___core__UInt32___Numeric__to_i32, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$to_i32 */
(nitmethod_t)VIRTUAL_core___core__UInt32___Numeric__to_u32, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$to_u32 */
(nitmethod_t)VIRTUAL_core___core__UInt32___core__kernel__Numeric___47d, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$/ */
(nitmethod_t)VIRTUAL_core___core__UInt32___core__kernel__Numeric__to_f, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$to_f */
(nitmethod_t)core__fixed_ints_text___UInt32___to_s_len, /* pointer to fixed_ints:UInt32:fixed_ints_text$UInt32$to_s_len */
(nitmethod_t)core__fixed_ints_text___UInt32___native_to_s, /* pointer to fixed_ints:UInt32:fixed_ints_text$UInt32$native_to_s */
(nitmethod_t)core___core__UInt32____38d, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$& */
(nitmethod_t)core___core__UInt32____124d, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$| */
(nitmethod_t)core___core__UInt32____62d_62d, /* pointer to fixed_ints:UInt32:fixed_ints$UInt32$>> */
(nitmethod_t)core__native___UInt32___code_point, /* pointer to fixed_ints:UInt32:native$UInt32$code_point */
}
};
/* allocate UInt32 */
val* BOX_core__UInt32(uint32_t value) {
struct instance_core__UInt32*res = nit_alloc(sizeof(struct instance_core__UInt32));
res->type = &type_core__UInt32;
res->class = &class_core__UInt32;
res->value = value;
return (val*)res;
}
/* runtime class core__Pattern: core::Pattern (dead=true; need_corpse=false)*/
/* allocate Pattern */
val* NEW_core__Pattern(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Pattern is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__BM_Pattern: core::BM_Pattern (dead=true; need_corpse=false)*/
/* allocate BM_Pattern */
val* NEW_core__BM_Pattern(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "BM_Pattern is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Match: core::Match (dead=false; need_corpse=false)*/
const struct class class_core__Match = {
0, /* box_kind */
{
(nitmethod_t)core___core__Match___core__kernel__Object__init, /* pointer to string_search:Match:string_search$Match$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to string_search:Match:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to string_search:Match:kernel$Object$sys */
(nitmethod_t)core___core__Match___core__abstract_text__Object__to_s, /* pointer to string_search:Match:string_search$Match$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to string_search:Match:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to string_search:Match:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to string_search:Match:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to string_search:Match:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to string_search:Match:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to string_search:Match:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to string_search:Match:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to string_search:Match:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Match___from, /* pointer to string_search:Match:string_search$Match$from */
(nitmethod_t)core___core__Match___after, /* pointer to string_search:Match:string_search$Match$after */
(nitmethod_t)core___core__Match___string_61d, /* pointer to string_search:Match:string_search$Match$string= */
(nitmethod_t)core___core__Match___from_61d, /* pointer to string_search:Match:string_search$Match$from= */
(nitmethod_t)core___core__Match___length_61d, /* pointer to string_search:Match:string_search$Match$length= */
(nitmethod_t)core___core__Match___length, /* pointer to string_search:Match:string_search$Match$length */
(nitmethod_t)core___core__Match___string, /* pointer to string_search:Match:string_search$Match$string */
(nitmethod_t)core___core__Object___init, /* pointer to string_search:Match:kernel$Object$init */
}
};
/* allocate Match */
val* NEW_core__Match(const struct type* type) {
val* self /* : Match */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__Match;
return self;
}
/* runtime class core__FileStream: core::FileStream (dead=true; need_corpse=false)*/
/* allocate FileStream */
val* NEW_core__FileStream(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FileStream is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__FileReader: core::FileReader (dead=false; need_corpse=false)*/
const struct class class_core__FileReader = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to file:FileReader:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to file:FileReader:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to file:FileReader:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to file:FileReader:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to file:FileReader:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to file:FileReader:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to file:FileReader:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to file:FileReader:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to file:FileReader:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to file:FileReader:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to file:FileReader:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to file:FileReader:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Stream___last_error_61d, /* pointer to file:FileReader:stream$Stream$last_error= */
(nitmethod_t)core___core__Stream___last_error, /* pointer to file:FileReader:stream$Stream$last_error */
(nitmethod_t)core___core__FileReader___core__stream__Stream__close, /* pointer to file:FileReader:file$FileReader$close */
(nitmethod_t)core___core__FileStream___path_61d, /* pointer to file:FileReader:file$FileStream$path= */
(nitmethod_t)core___core__FileStream___set_buffering_mode, /* pointer to file:FileReader:file$FileStream$set_buffering_mode */
(nitmethod_t)core___core__FileStream___path, /* pointer to file:FileReader:file$FileStream$path */
(nitmethod_t)core___core__BufferedReader___prepare_buffer, /* pointer to file:FileReader:stream$BufferedReader$prepare_buffer */
(nitmethod_t)core___core__BufferedReader___buffer_reset, /* pointer to file:FileReader:stream$BufferedReader$buffer_reset */
(nitmethod_t)core___core__FileReader___core__stream__BufferedReader__end_reached, /* pointer to file:FileReader:file$FileReader$end_reached */
(nitmethod_t)core___core__BufferedReader___Reader__eof, /* pointer to file:FileReader:stream$BufferedReader$eof */
(nitmethod_t)core___core__Reader___read_line, /* pointer to file:FileReader:stream$Reader$read_line */
(nitmethod_t)core___core__Reader___read_all, /* pointer to file:FileReader:stream$Reader$read_all */
(nitmethod_t)core___core__BufferedReader___Reader__append_line_to, /* pointer to file:FileReader:stream$BufferedReader$append_line_to */
(nitmethod_t)core___core__BufferedReader___Reader__read_all_bytes, /* pointer to file:FileReader:stream$BufferedReader$read_all_bytes */
(nitmethod_t)core___core__BufferedReader___Reader__read_bytes, /* pointer to file:FileReader:stream$BufferedReader$read_bytes */
(nitmethod_t)core___core__FileReader___core__stream__BufferedReader__fill_buffer, /* pointer to file:FileReader:file$FileReader$fill_buffer */
(nitmethod_t)core___core__BufferedReader___read_intern, /* pointer to file:FileReader:stream$BufferedReader$read_intern */
(nitmethod_t)core___core__FileReader___open, /* pointer to file:FileReader:file$FileReader$open */
(nitmethod_t)core___core__FileReader___end_reached_61d, /* pointer to file:FileReader:file$FileReader$end_reached= */
(nitmethod_t)core___core__FileStream___core__stream__Stream__close, /* pointer to file:FileReader:file$FileStream$close */
}
};
/* allocate FileReader */
val* NEW_core__FileReader(const struct type* type) {
val* self /* : FileReader */;
val* var /* : Sys */;
val* var1 /* : Codec */;
static char* varoncenew;
static int varoncenew_guard;
char* var2 /* : CString */;
char* var3 /* : CString */;
char* var4 /* : CString */;
char* var5 /* : CString */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__FileReader;
var = glob_sys;
{
var1 = core__utf8___Sys___utf8_codec(var);
}
self->attrs[COLOR_core__stream__Reader___decoder].val = var1; /* _decoder on <self:FileReader exact> */
if (likely(varoncenew_guard)) {
var2 = varoncenew;
} else {
var3 = NULL/*special!*/;
var2 = var3;
varoncenew = var2;
varoncenew_guard = 1;
}
{
{ /* Inline native$CString$new (var2,0l) on <var2:CString> */
var5 = (char*)nit_alloc(0l);
var4 = var5;
goto RET_LABEL;
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_core__stream__BufferedReader___buffer].str = var4; /* _buffer on <self:FileReader exact> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:FileReader exact> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l = 0l; /* _buffer_length on <self:FileReader exact> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l = 0l; /* _buffer_capacity on <self:FileReader exact> */
self->attrs[COLOR_core__file__FileReader___end_reached].s = 0; /* _end_reached on <self:FileReader exact> */
return self;
}
/* runtime class core__FileWriter: core::FileWriter (dead=false; need_corpse=false)*/
const struct class class_core__FileWriter = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to file:FileWriter:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to file:FileWriter:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to file:FileWriter:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to file:FileWriter:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to file:FileWriter:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to file:FileWriter:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to file:FileWriter:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to file:FileWriter:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to file:FileWriter:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to file:FileWriter:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to file:FileWriter:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to file:FileWriter:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Stream___last_error_61d, /* pointer to file:FileWriter:stream$Stream$last_error= */
(nitmethod_t)core___core__Stream___last_error, /* pointer to file:FileWriter:stream$Stream$last_error */
(nitmethod_t)core___core__FileWriter___core__stream__Stream__close, /* pointer to file:FileWriter:file$FileWriter$close */
(nitmethod_t)core___core__FileStream___path_61d, /* pointer to file:FileWriter:file$FileStream$path= */
(nitmethod_t)core___core__FileStream___set_buffering_mode, /* pointer to file:FileWriter:file$FileStream$set_buffering_mode */
(nitmethod_t)core___core__FileStream___path, /* pointer to file:FileWriter:file$FileStream$path */
(nitmethod_t)core___core__FileWriter___core__stream__Writer__write, /* pointer to file:FileWriter:file$FileWriter$write */
(nitmethod_t)core___core__Writer___write_char, /* pointer to file:FileWriter:stream$Writer$write_char */
(nitmethod_t)core___core__FileWriter___core__stream__Writer__write_bytes, /* pointer to file:FileWriter:file$FileWriter$write_bytes */
(nitmethod_t)core___core__FileWriter___write_native, /* pointer to file:FileWriter:file$FileWriter$write_native */
(nitmethod_t)core___core__FileWriter___open, /* pointer to file:FileWriter:file$FileWriter$open */
(nitmethod_t)core___core__FileWriter___is_writable_61d, /* pointer to file:FileWriter:file$FileWriter$is_writable= */
(nitmethod_t)core___core__FileStream___core__stream__Stream__close, /* pointer to file:FileWriter:file$FileStream$close */
}
};
/* allocate FileWriter */
val* NEW_core__FileWriter(const struct type* type) {
val* self /* : FileWriter */;
val* var /* : Sys */;
val* var1 /* : Codec */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__FileWriter;
var = glob_sys;
{
var1 = core__utf8___Sys___utf8_codec(var);
}
self->attrs[COLOR_core__stream__Writer___coder].val = var1; /* _coder on <self:FileWriter exact> */
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter exact> */
return self;
}
/* runtime class core__Stdin: core::Stdin (dead=false; need_corpse=false)*/
const struct class class_core__Stdin = {
0, /* box_kind */
{
(nitmethod_t)core___core__Stdin___core__kernel__Object__init, /* pointer to file:Stdin:file$Stdin$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to file:Stdin:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to file:Stdin:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to file:Stdin:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to file:Stdin:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to file:Stdin:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to file:Stdin:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to file:Stdin:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to file:Stdin:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to file:Stdin:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to file:Stdin:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to file:Stdin:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Stream___last_error_61d, /* pointer to file:Stdin:stream$Stream$last_error= */
(nitmethod_t)core___core__Stream___last_error, /* pointer to file:Stdin:stream$Stream$last_error */
(nitmethod_t)core___core__FileReader___core__stream__Stream__close, /* pointer to file:Stdin:file$FileReader$close */
(nitmethod_t)core___core__FileStream___path_61d, /* pointer to file:Stdin:file$FileStream$path= */
(nitmethod_t)core___core__FileStream___set_buffering_mode, /* pointer to file:Stdin:file$FileStream$set_buffering_mode */
(nitmethod_t)core___core__FileStream___path, /* pointer to file:Stdin:file$FileStream$path */
(nitmethod_t)core___core__BufferedReader___prepare_buffer, /* pointer to file:Stdin:stream$BufferedReader$prepare_buffer */
(nitmethod_t)core___core__BufferedReader___buffer_reset, /* pointer to file:Stdin:stream$BufferedReader$buffer_reset */
(nitmethod_t)core___core__FileReader___core__stream__BufferedReader__end_reached, /* pointer to file:Stdin:file$FileReader$end_reached */
(nitmethod_t)core___core__BufferedReader___Reader__eof, /* pointer to file:Stdin:stream$BufferedReader$eof */
(nitmethod_t)core___core__Reader___read_line, /* pointer to file:Stdin:stream$Reader$read_line */
(nitmethod_t)core___core__Reader___read_all, /* pointer to file:Stdin:stream$Reader$read_all */
(nitmethod_t)core___core__BufferedReader___Reader__append_line_to, /* pointer to file:Stdin:stream$BufferedReader$append_line_to */
(nitmethod_t)core___core__BufferedReader___Reader__read_all_bytes, /* pointer to file:Stdin:stream$BufferedReader$read_all_bytes */
(nitmethod_t)core___core__BufferedReader___Reader__read_bytes, /* pointer to file:Stdin:stream$BufferedReader$read_bytes */
(nitmethod_t)core___core__FileReader___core__stream__BufferedReader__fill_buffer, /* pointer to file:Stdin:file$FileReader$fill_buffer */
(nitmethod_t)core___core__BufferedReader___read_intern, /* pointer to file:Stdin:stream$BufferedReader$read_intern */
(nitmethod_t)core___core__FileReader___open, /* pointer to file:Stdin:file$FileReader$open */
(nitmethod_t)core___core__FileReader___end_reached_61d, /* pointer to file:Stdin:file$FileReader$end_reached= */
(nitmethod_t)core___core__FileStream___core__stream__Stream__close, /* pointer to file:Stdin:file$FileStream$close */
(nitmethod_t)core___core__Object___init, /* pointer to file:Stdin:kernel$Object$init */
}
};
/* allocate Stdin */
val* NEW_core__Stdin(const struct type* type) {
val* self /* : Stdin */;
val* var /* : Sys */;
val* var1 /* : Codec */;
static char* varoncenew;
static int varoncenew_guard;
char* var2 /* : CString */;
char* var3 /* : CString */;
char* var4 /* : CString */;
char* var5 /* : CString */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__Stdin;
var = glob_sys;
{
var1 = core__utf8___Sys___utf8_codec(var);
}
self->attrs[COLOR_core__stream__Reader___decoder].val = var1; /* _decoder on <self:Stdin exact> */
if (likely(varoncenew_guard)) {
var2 = varoncenew;
} else {
var3 = NULL/*special!*/;
var2 = var3;
varoncenew = var2;
varoncenew_guard = 1;
}
{
{ /* Inline native$CString$new (var2,0l) on <var2:CString> */
var5 = (char*)nit_alloc(0l);
var4 = var5;
goto RET_LABEL;
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_core__stream__BufferedReader___buffer].str = var4; /* _buffer on <self:Stdin exact> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:Stdin exact> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l = 0l; /* _buffer_length on <self:Stdin exact> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l = 0l; /* _buffer_capacity on <self:Stdin exact> */
self->attrs[COLOR_core__file__FileReader___end_reached].s = 0; /* _end_reached on <self:Stdin exact> */
return self;
}
/* runtime class core__Stdout: core::Stdout (dead=false; need_corpse=false)*/
const struct class class_core__Stdout = {
0, /* box_kind */
{
(nitmethod_t)core___core__Stdout___core__kernel__Object__init, /* pointer to file:Stdout:file$Stdout$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to file:Stdout:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to file:Stdout:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to file:Stdout:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to file:Stdout:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to file:Stdout:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to file:Stdout:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to file:Stdout:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to file:Stdout:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to file:Stdout:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to file:Stdout:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to file:Stdout:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Stream___last_error_61d, /* pointer to file:Stdout:stream$Stream$last_error= */
(nitmethod_t)core___core__Stream___last_error, /* pointer to file:Stdout:stream$Stream$last_error */
(nitmethod_t)core___core__FileWriter___core__stream__Stream__close, /* pointer to file:Stdout:file$FileWriter$close */
(nitmethod_t)core___core__FileStream___path_61d, /* pointer to file:Stdout:file$FileStream$path= */
(nitmethod_t)core___core__FileStream___set_buffering_mode, /* pointer to file:Stdout:file$FileStream$set_buffering_mode */
(nitmethod_t)core___core__FileStream___path, /* pointer to file:Stdout:file$FileStream$path */
(nitmethod_t)core___core__FileWriter___core__stream__Writer__write, /* pointer to file:Stdout:file$FileWriter$write */
(nitmethod_t)core___core__Writer___write_char, /* pointer to file:Stdout:stream$Writer$write_char */
(nitmethod_t)core___core__FileWriter___core__stream__Writer__write_bytes, /* pointer to file:Stdout:file$FileWriter$write_bytes */
(nitmethod_t)core___core__FileWriter___write_native, /* pointer to file:Stdout:file$FileWriter$write_native */
(nitmethod_t)core___core__FileWriter___open, /* pointer to file:Stdout:file$FileWriter$open */
(nitmethod_t)core___core__FileWriter___is_writable_61d, /* pointer to file:Stdout:file$FileWriter$is_writable= */
(nitmethod_t)core___core__FileStream___core__stream__Stream__close, /* pointer to file:Stdout:file$FileStream$close */
(nitmethod_t)core___core__Object___init, /* pointer to file:Stdout:kernel$Object$init */
}
};
/* allocate Stdout */
val* NEW_core__Stdout(const struct type* type) {
val* self /* : Stdout */;
val* var /* : Sys */;
val* var1 /* : Codec */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__Stdout;
var = glob_sys;
{
var1 = core__utf8___Sys___utf8_codec(var);
}
self->attrs[COLOR_core__stream__Writer___coder].val = var1; /* _coder on <self:Stdout exact> */
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:Stdout exact> */
return self;
}
/* runtime class core__Stderr: core::Stderr (dead=false; need_corpse=false)*/
const struct class class_core__Stderr = {
0, /* box_kind */
{
(nitmethod_t)core___core__Stderr___core__kernel__Object__init, /* pointer to file:Stderr:file$Stderr$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to file:Stderr:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to file:Stderr:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to file:Stderr:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to file:Stderr:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to file:Stderr:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to file:Stderr:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to file:Stderr:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to file:Stderr:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to file:Stderr:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to file:Stderr:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to file:Stderr:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Stream___last_error_61d, /* pointer to file:Stderr:stream$Stream$last_error= */
(nitmethod_t)core___core__Stream___last_error, /* pointer to file:Stderr:stream$Stream$last_error */
(nitmethod_t)core___core__FileWriter___core__stream__Stream__close, /* pointer to file:Stderr:file$FileWriter$close */
(nitmethod_t)core___core__FileStream___path_61d, /* pointer to file:Stderr:file$FileStream$path= */
(nitmethod_t)core___core__FileStream___set_buffering_mode, /* pointer to file:Stderr:file$FileStream$set_buffering_mode */
(nitmethod_t)core___core__FileStream___path, /* pointer to file:Stderr:file$FileStream$path */
(nitmethod_t)core___core__FileWriter___core__stream__Writer__write, /* pointer to file:Stderr:file$FileWriter$write */
(nitmethod_t)core___core__Writer___write_char, /* pointer to file:Stderr:stream$Writer$write_char */
(nitmethod_t)core___core__FileWriter___core__stream__Writer__write_bytes, /* pointer to file:Stderr:file$FileWriter$write_bytes */
(nitmethod_t)core___core__FileWriter___write_native, /* pointer to file:Stderr:file$FileWriter$write_native */
(nitmethod_t)core___core__FileWriter___open, /* pointer to file:Stderr:file$FileWriter$open */
(nitmethod_t)core___core__FileWriter___is_writable_61d, /* pointer to file:Stderr:file$FileWriter$is_writable= */
(nitmethod_t)core___core__FileStream___core__stream__Stream__close, /* pointer to file:Stderr:file$FileStream$close */
(nitmethod_t)core___core__Object___init, /* pointer to file:Stderr:kernel$Object$init */
}
};
/* allocate Stderr */
val* NEW_core__Stderr(const struct type* type) {
val* self /* : Stderr */;
val* var /* : Sys */;
val* var1 /* : Codec */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__Stderr;
var = glob_sys;
{
var1 = core__utf8___Sys___utf8_codec(var);
}
self->attrs[COLOR_core__stream__Writer___coder].val = var1; /* _coder on <self:Stderr exact> */
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:Stderr exact> */
return self;
}
/* runtime class core__Path: core::Path (dead=false; need_corpse=false)*/
const struct class class_core__Path = {
0, /* box_kind */
{
(nitmethod_t)core___core__Path___core__kernel__Object__init, /* pointer to file:Path:file$Path$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to file:Path:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to file:Path:kernel$Object$sys */
(nitmethod_t)core___core__Path___core__abstract_text__Object__to_s, /* pointer to file:Path:file$Path$to_s */
(nitmethod_t)core___core__Path___core__kernel__Object___61d_61d, /* pointer to file:Path:file$Path$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to file:Path:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to file:Path:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to file:Path:kernel$Object$object_id */
(nitmethod_t)core___core__Path___core__kernel__Object__hash, /* pointer to file:Path:file$Path$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to file:Path:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to file:Path:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to file:Path:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Path___open_wo, /* pointer to file:Path:file$Path$open_wo */
(nitmethod_t)core___core__Path___path, /* pointer to file:Path:file$Path$path */
(nitmethod_t)core___core__Path___last_error_61d, /* pointer to file:Path:file$Path$last_error= */
(nitmethod_t)core___core__Path___simplified_61d, /* pointer to file:Path:file$Path$simplified= */
(nitmethod_t)core___core__Path___path_61d, /* pointer to file:Path:file$Path$path= */
(nitmethod_t)core___core__Path___simplified, /* pointer to file:Path:file$Path$simplified */
(nitmethod_t)core___core__Path___copy, /* pointer to file:Path:file$Path$copy */
(nitmethod_t)core___core__Path___open_ro, /* pointer to file:Path:file$Path$open_ro */
(nitmethod_t)core___core__Object___init, /* pointer to file:Path:kernel$Object$init */
}
};
/* allocate Path */
val* NEW_core__Path(const struct type* type) {
val* self /* : Path */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__Path;
return self;
}
/* runtime class core__FileStat: core::FileStat (dead=false; need_corpse=false)*/
const struct class class_core__FileStat = {
0, /* box_kind */
{
(nitmethod_t)core___core__FileStat___core__kernel__Object__init, /* pointer to file:FileStat:file$FileStat$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to file:FileStat:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to file:FileStat:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to file:FileStat:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to file:FileStat:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to file:FileStat:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to file:FileStat:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to file:FileStat:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to file:FileStat:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to file:FileStat:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to file:FileStat:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to file:FileStat:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__FileStat___core__gc__Finalizable__finalize, /* pointer to file:FileStat:file$FileStat$finalize */
(nitmethod_t)core___core__FileStat___is_dir, /* pointer to file:FileStat:file$FileStat$is_dir */
(nitmethod_t)core___core__FileStat___stat_61d, /* pointer to file:FileStat:file$FileStat$stat= */
(nitmethod_t)core___core__FileStat___finalized, /* pointer to file:FileStat:file$FileStat$finalized */
(nitmethod_t)core___core__FileStat___stat, /* pointer to file:FileStat:file$FileStat$stat */
(nitmethod_t)core___core__FileStat___finalized_61d, /* pointer to file:FileStat:file$FileStat$finalized= */
(nitmethod_t)core___core__Object___init, /* pointer to file:FileStat:kernel$Object$init */
}
};
/* allocate FileStat */
val* NEW_core__FileStat(const struct type* type) {
val* self /* : FileStat */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__FileStat;
self->attrs[COLOR_core__file__FileStat___finalized].s = 0; /* _finalized on <self:FileStat exact> */
gc_register_finalizer(self);
return self;
}
/* runtime class core__file__NativeFileStat: core::file::NativeFileStat (dead=false; need_corpse=true)*/
const struct class class_core__file__NativeFileStat = {
7, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to file:NativeFileStat:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to file:NativeFileStat:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to file:NativeFileStat:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to file:NativeFileStat:abstract_text$Object$to_s */
(nitmethod_t)core___core__Pointer___Object___61d_61d, /* pointer to file:NativeFileStat:kernel$Pointer$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to file:NativeFileStat:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to file:NativeFileStat:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to file:NativeFileStat:kernel$Object$object_id */
(nitmethod_t)core___core__Pointer___Object__hash, /* pointer to file:NativeFileStat:kernel$Pointer$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to file:NativeFileStat:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to file:NativeFileStat:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to file:NativeFileStat:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Pointer___native_equals, /* pointer to file:NativeFileStat:kernel$Pointer$native_equals */
(nitmethod_t)core___core__Pointer___address_is_null, /* pointer to file:NativeFileStat:kernel$Pointer$address_is_null */
(nitmethod_t)core___core__Pointer___free, /* pointer to file:NativeFileStat:kernel$Pointer$free */
(nitmethod_t)core__file___core__file__NativeFileStat___is_dir, /* pointer to file:NativeFileStat:file$NativeFileStat$is_dir */
}
};
/* allocate extern NativeFileStat */
val* NEW_core__file__NativeFileStat(const struct type* type) {
val* self /* : NativeFileStat */;
self = nit_alloc(sizeof(struct instance_core__Pointer));
self->type = type;
self->class = &class_core__file__NativeFileStat;
((struct instance_core__Pointer*)self)->value = NULL;
return self;
}
/* runtime class core__file__NativeFile: core::file::NativeFile (dead=false; need_corpse=true)*/
const struct class class_core__file__NativeFile = {
7, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to file:NativeFile:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to file:NativeFile:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to file:NativeFile:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to file:NativeFile:abstract_text$Object$to_s */
(nitmethod_t)core___core__Pointer___Object___61d_61d, /* pointer to file:NativeFile:kernel$Pointer$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to file:NativeFile:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to file:NativeFile:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to file:NativeFile:kernel$Object$object_id */
(nitmethod_t)core___core__Pointer___Object__hash, /* pointer to file:NativeFile:kernel$Pointer$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to file:NativeFile:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to file:NativeFile:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to file:NativeFile:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Pointer___native_equals, /* pointer to file:NativeFile:kernel$Pointer$native_equals */
(nitmethod_t)core___core__Pointer___address_is_null, /* pointer to file:NativeFile:kernel$Pointer$address_is_null */
(nitmethod_t)core___core__Pointer___free, /* pointer to file:NativeFile:kernel$Pointer$free */
(nitmethod_t)core__file___core__file__NativeFile___native_stdin, /* pointer to file:NativeFile:file$NativeFile$native_stdin */
(nitmethod_t)core__file___core__file__NativeFile___native_stdout, /* pointer to file:NativeFile:file$NativeFile$native_stdout */
(nitmethod_t)core__file___core__file__NativeFile___native_stderr, /* pointer to file:NativeFile:file$NativeFile$native_stderr */
(nitmethod_t)core__file___core__file__NativeFile___set_buffering_type, /* pointer to file:NativeFile:file$NativeFile$set_buffering_type */
(nitmethod_t)core__file___core__file__NativeFile___io_write, /* pointer to file:NativeFile:file$NativeFile$io_write */
(nitmethod_t)core__file___core__file__NativeFile___io_open_write, /* pointer to file:NativeFile:file$NativeFile$io_open_write */
(nitmethod_t)core__file___core__file__NativeFile___io_open_read, /* pointer to file:NativeFile:file$NativeFile$io_open_read */
(nitmethod_t)core__file___core__file__NativeFile___io_close, /* pointer to file:NativeFile:file$NativeFile$io_close */
(nitmethod_t)core__file___core__file__NativeFile___io_read, /* pointer to file:NativeFile:file$NativeFile$io_read */
(nitmethod_t)core__file___core__file__NativeFile___ferror, /* pointer to file:NativeFile:file$NativeFile$ferror */
}
};
/* allocate extern NativeFile */
val* NEW_core__file__NativeFile(const struct type* type) {
val* self /* : NativeFile */;
self = nit_alloc(sizeof(struct instance_core__Pointer));
self->type = type;
self->class = &class_core__file__NativeFile;
((struct instance_core__Pointer*)self)->value = NULL;
return self;
}
/* runtime class core__file__NativeDir: core::file::NativeDir (dead=false; need_corpse=true)*/
const struct class class_core__file__NativeDir = {
7, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to file:NativeDir:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to file:NativeDir:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to file:NativeDir:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to file:NativeDir:abstract_text$Object$to_s */
(nitmethod_t)core___core__Pointer___Object___61d_61d, /* pointer to file:NativeDir:kernel$Pointer$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to file:NativeDir:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to file:NativeDir:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to file:NativeDir:kernel$Object$object_id */
(nitmethod_t)core___core__Pointer___Object__hash, /* pointer to file:NativeDir:kernel$Pointer$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to file:NativeDir:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to file:NativeDir:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to file:NativeDir:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Pointer___native_equals, /* pointer to file:NativeDir:kernel$Pointer$native_equals */
(nitmethod_t)core___core__Pointer___address_is_null, /* pointer to file:NativeDir:kernel$Pointer$address_is_null */
(nitmethod_t)core___core__Pointer___free, /* pointer to file:NativeDir:kernel$Pointer$free */
(nitmethod_t)core__file___core__file__NativeDir___opendir, /* pointer to file:NativeDir:file$NativeDir$opendir */
(nitmethod_t)core__file___core__file__NativeDir___readdir, /* pointer to file:NativeDir:file$NativeDir$readdir */
(nitmethod_t)core__file___core__file__NativeDir___closedir, /* pointer to file:NativeDir:file$NativeDir$closedir */
}
};
/* allocate extern NativeDir */
val* NEW_core__file__NativeDir(const struct type* type) {
val* self /* : NativeDir */;
self = nit_alloc(sizeof(struct instance_core__Pointer));
self->type = type;
self->class = &class_core__file__NativeDir;
((struct instance_core__Pointer*)self)->value = NULL;
return self;
}
/* runtime class core__IOError: core::IOError (dead=false; need_corpse=false)*/
const struct class class_core__IOError = {
0, /* box_kind */
{
(nitmethod_t)core___core__Error___core__kernel__Object__init, /* pointer to stream:IOError:error$Error$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to stream:IOError:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to stream:IOError:kernel$Object$sys */
(nitmethod_t)core___core__Error___core__abstract_text__Object__to_s, /* pointer to stream:IOError:error$Error$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to stream:IOError:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to stream:IOError:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to stream:IOError:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to stream:IOError:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to stream:IOError:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to stream:IOError:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to stream:IOError:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to stream:IOError:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Error___message_61d, /* pointer to stream:IOError:error$Error$message= */
(nitmethod_t)core___core__Error___message, /* pointer to stream:IOError:error$Error$message */
(nitmethod_t)core___core__Object___init, /* pointer to stream:IOError:kernel$Object$init */
}
};
/* allocate IOError */
val* NEW_core__IOError(const struct type* type) {
val* self /* : IOError */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__IOError;
return self;
}
/* runtime class core__Stream: core::Stream (dead=true; need_corpse=false)*/
/* allocate Stream */
val* NEW_core__Stream(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Stream is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Reader: core::Reader (dead=true; need_corpse=false)*/
/* allocate Reader */
val* NEW_core__Reader(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Reader is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__LineIterator: core::LineIterator (dead=true; need_corpse=false)*/
/* allocate LineIterator */
val* NEW_core__LineIterator(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "LineIterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__PollableReader: core::PollableReader (dead=true; need_corpse=false)*/
/* allocate PollableReader */
val* NEW_core__PollableReader(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "PollableReader is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Writer: core::Writer (dead=true; need_corpse=false)*/
/* allocate Writer */
val* NEW_core__Writer(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Writer is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Writable: core::Writable (dead=true; need_corpse=false)*/
/* allocate Writable */
val* NEW_core__Writable(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Writable is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__BufferedReader: core::BufferedReader (dead=true; need_corpse=false)*/
/* allocate BufferedReader */
val* NEW_core__BufferedReader(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "BufferedReader is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Duplex: core::Duplex (dead=true; need_corpse=false)*/
/* allocate Duplex */
val* NEW_core__Duplex(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Duplex is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__StringWriter: core::StringWriter (dead=true; need_corpse=false)*/
/* allocate StringWriter */
val* NEW_core__StringWriter(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "StringWriter is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__StringReader: core::StringReader (dead=true; need_corpse=false)*/
/* allocate StringReader */
val* NEW_core__StringReader(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "StringReader is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Error: core::Error (dead=true; need_corpse=false)*/
/* allocate Error */
val* NEW_core__Error(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Error is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__MaybeError: core::MaybeError (dead=true; need_corpse=false)*/
/* allocate MaybeError[nullable Object, Error] */
val* NEW_core__MaybeError(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "MaybeError is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__BytePattern: core::BytePattern (dead=true; need_corpse=false)*/
/* allocate BytePattern */
val* NEW_core__BytePattern(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "BytePattern is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Bytes: core::Bytes (dead=false; need_corpse=false)*/
const struct class class_core__Bytes = {
0, /* box_kind */
{
(nitmethod_t)core___core__Bytes___core__kernel__Object__init, /* pointer to bytes:Bytes:bytes$Bytes$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to bytes:Bytes:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to bytes:Bytes:kernel$Object$sys */
(nitmethod_t)core___core__Bytes___core__abstract_text__Object__to_s, /* pointer to bytes:Bytes:bytes$Bytes$to_s */
(nitmethod_t)core___core__SequenceRead___core__kernel__Object___61d_61d, /* pointer to bytes:Bytes:abstract_collection$SequenceRead$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to bytes:Bytes:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to bytes:Bytes:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to bytes:Bytes:kernel$Object$object_id */
(nitmethod_t)core___core__SequenceRead___core__kernel__Object__hash, /* pointer to bytes:Bytes:abstract_collection$SequenceRead$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to bytes:Bytes:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to bytes:Bytes:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to bytes:Bytes:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Bytes___items, /* pointer to bytes:Bytes:bytes$Bytes$items */
(nitmethod_t)core___core__Bytes___with_capacity, /* pointer to bytes:Bytes:bytes$Bytes$with_capacity */
(nitmethod_t)core___core__Bytes___empty, /* pointer to bytes:Bytes:bytes$Bytes$empty */
(nitmethod_t)core___core__Bytes___append_ns_from, /* pointer to bytes:Bytes:bytes$Bytes$append_ns_from */
(nitmethod_t)core___core__Bytes___persisted_61d, /* pointer to bytes:Bytes:bytes$Bytes$persisted= */
(nitmethod_t)core___core__Bytes___persisted, /* pointer to bytes:Bytes:bytes$Bytes$persisted */
(nitmethod_t)core___core__Bytes___regen, /* pointer to bytes:Bytes:bytes$Bytes$regen */
(nitmethod_t)core___core__Bytes___capacity, /* pointer to bytes:Bytes:bytes$Bytes$capacity */
(nitmethod_t)core__abstract_text___Collection___join, /* pointer to bytes:Bytes:abstract_text$Collection$join */
(nitmethod_t)core__array___Collection___to_a, /* pointer to bytes:Bytes:array$Collection$to_a */
(nitmethod_t)core___core__Bytes___core__abstract_collection__Collection__length, /* pointer to bytes:Bytes:bytes$Bytes$length */
(nitmethod_t)core___core__Bytes___core__abstract_collection__Collection__is_empty, /* pointer to bytes:Bytes:bytes$Bytes$is_empty */
(nitmethod_t)core___core__Bytes___core__abstract_collection__Collection__iterator, /* pointer to bytes:Bytes:bytes$Bytes$iterator */
(nitmethod_t)core___core__Collection___has_exactly, /* pointer to bytes:Bytes:abstract_collection$Collection$has_exactly */
(nitmethod_t)core___core__Collection___has_all, /* pointer to bytes:Bytes:abstract_collection$Collection$has_all */
(nitmethod_t)core___core__AbstractArrayRead___core__abstract_collection__Collection__has, /* pointer to bytes:Bytes:array$AbstractArrayRead$has */
(nitmethod_t)core___core__AbstractArrayRead___core__abstract_collection__Collection__count, /* pointer to bytes:Bytes:array$AbstractArrayRead$count */
(nitmethod_t)core___core__SequenceRead___Collection__first, /* pointer to bytes:Bytes:abstract_collection$SequenceRead$first */
(nitmethod_t)core___core__Collection___not_empty, /* pointer to bytes:Bytes:abstract_collection$Collection$not_empty */
(nitmethod_t)core__abstract_text___Collection___plain_to_s, /* pointer to bytes:Bytes:abstract_text$Collection$plain_to_s */
(nitmethod_t)core__file___Writable___write_to_file, /* pointer to bytes:Bytes:file$Writable$write_to_file */
(nitmethod_t)core__stream___Bytes___Writable__write_to, /* pointer to bytes:Bytes:stream$Bytes$write_to */
(nitmethod_t)VIRTUAL_core___core__Bytes___core__abstract_collection__SequenceRead___91d_93d, /* pointer to bytes:Bytes:bytes$Bytes$[] */
(nitmethod_t)core___core__SequenceRead___iterator_from, /* pointer to bytes:Bytes:abstract_collection$SequenceRead$iterator_from */
(nitmethod_t)core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__index_of, /* pointer to bytes:Bytes:array$AbstractArrayRead$index_of */
(nitmethod_t)core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__last_index_of, /* pointer to bytes:Bytes:array$AbstractArrayRead$last_index_of */
(nitmethod_t)core___core__SequenceRead___last, /* pointer to bytes:Bytes:abstract_collection$SequenceRead$last */
(nitmethod_t)core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__index_of_from, /* pointer to bytes:Bytes:array$AbstractArrayRead$index_of_from */
(nitmethod_t)core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__last_index_of_from, /* pointer to bytes:Bytes:array$AbstractArrayRead$last_index_of_from */
(nitmethod_t)core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__reverse_iterator, /* pointer to bytes:Bytes:array$AbstractArrayRead$reverse_iterator */
(nitmethod_t)core___core__SequenceRead___reverse_iterator_from, /* pointer to bytes:Bytes:abstract_collection$SequenceRead$reverse_iterator_from */
(nitmethod_t)core___core__Bytes___core__abstract_collection__RemovableCollection__clear, /* pointer to bytes:Bytes:bytes$Bytes$clear */
(nitmethod_t)core___core__AbstractArray___core__abstract_collection__RemovableCollection__remove, /* pointer to bytes:Bytes:array$AbstractArray$remove */
(nitmethod_t)core___core__AbstractArrayRead___copy_to, /* pointer to bytes:Bytes:array$AbstractArrayRead$copy_to */
(nitmethod_t)core___core__Bytes___core__array__AbstractArrayRead__length_61d, /* pointer to bytes:Bytes:bytes$Bytes$length= */
(nitmethod_t)core___core__AbstractArrayRead___reversed, /* pointer to bytes:Bytes:array$AbstractArrayRead$reversed */
(nitmethod_t)core___core__AbstractArrayRead___sub, /* pointer to bytes:Bytes:array$AbstractArrayRead$sub */
(nitmethod_t)VIRTUAL_core___core__Bytes___core__abstract_collection__SimpleCollection__add, /* pointer to bytes:Bytes:bytes$Bytes$add */
(nitmethod_t)core___core__SimpleCollection___add_all, /* pointer to bytes:Bytes:abstract_collection$SimpleCollection$add_all */
(nitmethod_t)core___core__AbstractArray___core__abstract_collection__Sequence__push, /* pointer to bytes:Bytes:array$AbstractArray$push */
(nitmethod_t)core___core__Bytes___core__abstract_collection__Sequence__append, /* pointer to bytes:Bytes:bytes$Bytes$append */
(nitmethod_t)core___core__AbstractArray___core__abstract_collection__Sequence__shift, /* pointer to bytes:Bytes:array$AbstractArray$shift */
(nitmethod_t)VIRTUAL_core___core__Bytes___core__abstract_collection__Sequence___91d_93d_61d, /* pointer to bytes:Bytes:bytes$Bytes$[]= */
(nitmethod_t)core___core__AbstractArray___core__abstract_collection__Sequence__remove_at, /* pointer to bytes:Bytes:array$AbstractArray$remove_at */
(nitmethod_t)VIRTUAL_core___core__Bytes___core__abstract_collection__Sequence__pop, /* pointer to bytes:Bytes:bytes$Bytes$pop */
(nitmethod_t)core___core__AbstractArray___core__abstract_collection__Sequence__unshift, /* pointer to bytes:Bytes:array$AbstractArray$unshift */
(nitmethod_t)core___core__Sequence___prepend, /* pointer to bytes:Bytes:abstract_collection$Sequence$prepend */
(nitmethod_t)core___core__AbstractArray___core__abstract_collection__Sequence__insert_all, /* pointer to bytes:Bytes:array$AbstractArray$insert_all */
(nitmethod_t)core___core__AbstractArray___core__abstract_collection__Sequence__insert, /* pointer to bytes:Bytes:array$AbstractArray$insert */
(nitmethod_t)core___core__Sequence___first_61d, /* pointer to bytes:Bytes:abstract_collection$Sequence$first= */
(nitmethod_t)core___core__Bytes___core__array__AbstractArray__enlarge, /* pointer to bytes:Bytes:bytes$Bytes$enlarge */
(nitmethod_t)core___core__Bytes___append_ns, /* pointer to bytes:Bytes:bytes$Bytes$append_ns */
(nitmethod_t)core___core__Bytes___capacity_61d, /* pointer to bytes:Bytes:bytes$Bytes$capacity= */
(nitmethod_t)core___core__Bytes___items_61d, /* pointer to bytes:Bytes:bytes$Bytes$items= */
(nitmethod_t)core___core__Bytes___add_char, /* pointer to bytes:Bytes:bytes$Bytes$add_char */
(nitmethod_t)core___core__Object___init, /* pointer to bytes:Bytes:kernel$Object$init */
}
};
/* allocate Bytes */
val* NEW_core__Bytes(const struct type* type) {
val* self /* : Bytes */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__Bytes;
self->attrs[COLOR_core__array__AbstractArrayRead___length].l = 0l; /* _length on <self:Bytes exact> */
self->attrs[COLOR_core__bytes__Bytes___persisted].s = 0; /* _persisted on <self:Bytes exact> */
return self;
}
/* runtime class core__bytes__BytesIterator: core::bytes::BytesIterator (dead=false; need_corpse=false)*/
const struct class class_core__bytes__BytesIterator = {
0, /* box_kind */
{
(nitmethod_t)core__bytes___core__bytes__BytesIterator___core__kernel__Object__init, /* pointer to bytes:BytesIterator:bytes$BytesIterator$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to bytes:BytesIterator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to bytes:BytesIterator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to bytes:BytesIterator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to bytes:BytesIterator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to bytes:BytesIterator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to bytes:BytesIterator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to bytes:BytesIterator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to bytes:BytesIterator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to bytes:BytesIterator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to bytes:BytesIterator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to bytes:BytesIterator:abstract_text$Object$native_class_name */
(nitmethod_t)core__bytes___core__bytes__BytesIterator___core__abstract_collection__Iterator__is_ok, /* pointer to bytes:BytesIterator:bytes$BytesIterator$is_ok */
(nitmethod_t)VIRTUAL_core__bytes___core__bytes__BytesIterator___core__abstract_collection__Iterator__item, /* pointer to bytes:BytesIterator:bytes$BytesIterator$item */
(nitmethod_t)core__bytes___core__bytes__BytesIterator___core__abstract_collection__Iterator__next, /* pointer to bytes:BytesIterator:bytes$BytesIterator$next */
(nitmethod_t)core___core__Iterator___finish, /* pointer to bytes:BytesIterator:abstract_collection$Iterator$finish */
(nitmethod_t)core___core__Iterator___iterator, /* pointer to bytes:BytesIterator:abstract_collection$Iterator$iterator */
(nitmethod_t)core__array___Iterator___to_a, /* pointer to bytes:BytesIterator:array$Iterator$to_a */
(nitmethod_t)core__bytes___core__bytes__BytesIterator___core__abstract_collection__IndexedIterator__index, /* pointer to bytes:BytesIterator:bytes$BytesIterator$index */
(nitmethod_t)core__bytes___core__bytes__BytesIterator___with_buffer, /* pointer to bytes:BytesIterator:bytes$BytesIterator$with_buffer */
(nitmethod_t)core__bytes___core__bytes__BytesIterator___max, /* pointer to bytes:BytesIterator:bytes$BytesIterator$max */
(nitmethod_t)core__bytes___core__bytes__BytesIterator___tgt, /* pointer to bytes:BytesIterator:bytes$BytesIterator$tgt */
(nitmethod_t)core__bytes___core__bytes__BytesIterator___index_61d, /* pointer to bytes:BytesIterator:bytes$BytesIterator$index= */
(nitmethod_t)core__bytes___core__bytes__BytesIterator___tgt_61d, /* pointer to bytes:BytesIterator:bytes$BytesIterator$tgt= */
(nitmethod_t)core__bytes___core__bytes__BytesIterator___max_61d, /* pointer to bytes:BytesIterator:bytes$BytesIterator$max= */
(nitmethod_t)core___core__Object___init, /* pointer to bytes:BytesIterator:kernel$Object$init */
}
};
/* allocate BytesIterator */
val* NEW_core__bytes__BytesIterator(const struct type* type) {
val* self /* : BytesIterator */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__bytes__BytesIterator;
return self;
}
/* runtime class core__Codec: core::Codec (dead=true; need_corpse=false)*/
/* allocate Codec */
val* NEW_core__Codec(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Codec is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__utf8__UTF8Codec: core::utf8::UTF8Codec (dead=false; need_corpse=false)*/
const struct class class_core__utf8__UTF8Codec = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to utf8:UTF8Codec:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to utf8:UTF8Codec:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to utf8:UTF8Codec:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to utf8:UTF8Codec:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to utf8:UTF8Codec:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to utf8:UTF8Codec:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to utf8:UTF8Codec:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to utf8:UTF8Codec:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to utf8:UTF8Codec:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to utf8:UTF8Codec:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to utf8:UTF8Codec:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to utf8:UTF8Codec:abstract_text$Object$native_class_name */
}
};
/* allocate UTF8Codec */
val* NEW_core__utf8__UTF8Codec(const struct type* type) {
val* self /* : UTF8Codec */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_core__utf8__UTF8Codec;
return self;
}
/* runtime class core__iso8859_95d1__ISO88591Codec: core::iso8859_1::ISO88591Codec (dead=true; need_corpse=false)*/
/* allocate ISO88591Codec */
val* NEW_core__iso8859_95d1__ISO88591Codec(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "ISO88591Codec is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__TimeT: core::TimeT (dead=true; need_corpse=true)*/
const struct class class_core__TimeT = {
7, /* box_kind */
{
}
};
/* allocate extern TimeT */
val* NEW_core__TimeT(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "TimeT is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Tm: core::Tm (dead=true; need_corpse=true)*/
const struct class class_core__Tm = {
7, /* box_kind */
{
}
};
/* allocate extern Tm */
val* NEW_core__Tm(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Tm is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__ISODate: core::ISODate (dead=true; need_corpse=false)*/
/* allocate ISODate */
val* NEW_core__ISODate(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "ISODate is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Finalizable: core::Finalizable (dead=true; need_corpse=false)*/
/* allocate Finalizable */
val* NEW_core__Finalizable(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Finalizable is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__FinalizableOnce: core::FinalizableOnce (dead=true; need_corpse=false)*/
/* allocate FinalizableOnce */
val* NEW_core__FinalizableOnce(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FinalizableOnce is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Process: core::Process (dead=true; need_corpse=false)*/
/* allocate Process */
val* NEW_core__Process(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Process is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__ProcessReader: core::ProcessReader (dead=true; need_corpse=false)*/
/* allocate ProcessReader */
val* NEW_core__ProcessReader(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "ProcessReader is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__ProcessWriter: core::ProcessWriter (dead=true; need_corpse=false)*/
/* allocate ProcessWriter */
val* NEW_core__ProcessWriter(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "ProcessWriter is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__ProcessDuplex: core::ProcessDuplex (dead=true; need_corpse=false)*/
/* allocate ProcessDuplex */
val* NEW_core__ProcessDuplex(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "ProcessDuplex is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__exec__NativeProcess: core::exec::NativeProcess (dead=true; need_corpse=true)*/
const struct class class_core__exec__NativeProcess = {
7, /* box_kind */
{
}
};
/* allocate extern NativeProcess */
val* NEW_core__exec__NativeProcess(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "NativeProcess is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Queue: core::Queue (dead=true; need_corpse=false)*/
/* allocate Queue[nullable Object] */
val* NEW_core__Queue(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Queue is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__queue__ProxyQueue: core::queue::ProxyQueue (dead=true; need_corpse=false)*/
/* allocate ProxyQueue[nullable Object] */
val* NEW_core__queue__ProxyQueue(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "ProxyQueue is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__queue__LifoQueue: core::queue::LifoQueue (dead=true; need_corpse=false)*/
/* allocate LifoQueue[nullable Object] */
val* NEW_core__queue__LifoQueue(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "LifoQueue is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__queue__FifoQueue: core::queue::FifoQueue (dead=true; need_corpse=false)*/
/* allocate FifoQueue[nullable Object] */
val* NEW_core__queue__FifoQueue(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FifoQueue is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__queue__RandQueue: core::queue::RandQueue (dead=true; need_corpse=false)*/
/* allocate RandQueue[nullable Object] */
val* NEW_core__queue__RandQueue(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "RandQueue is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__MinHeap: core::MinHeap (dead=true; need_corpse=false)*/
/* allocate MinHeap[Object] */
val* NEW_core__MinHeap(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "MinHeap is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__re__NativeRegex: core::re::NativeRegex (dead=true; need_corpse=true)*/
const struct class class_core__re__NativeRegex = {
7, /* box_kind */
{
}
};
/* allocate extern NativeRegex */
val* NEW_core__re__NativeRegex(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "NativeRegex is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__re__NativeMatchArray: core::re::NativeMatchArray (dead=true; need_corpse=true)*/
const struct class class_core__re__NativeMatchArray = {
7, /* box_kind */
{
}
};
/* allocate extern NativeMatchArray */
val* NEW_core__re__NativeMatchArray(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "NativeMatchArray is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class core__Regex: core::Regex (dead=true; need_corpse=false)*/
/* allocate Regex */
val* NEW_core__Regex(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Regex is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class more_collections__MultiHashMap: more_collections::MultiHashMap (dead=false; need_corpse=false)*/
const struct class class_more_collections__MultiHashMap = {
0, /* box_kind */
{
(nitmethod_t)core___core__HashMap___core__kernel__Object__init, /* pointer to more_collections:MultiHashMap:hash_collection$HashMap$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to more_collections:MultiHashMap:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to more_collections:MultiHashMap:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to more_collections:MultiHashMap:abstract_text$Object$to_s */
(nitmethod_t)core___core__MapRead___core__kernel__Object___61d_61d, /* pointer to more_collections:MultiHashMap:abstract_collection$MapRead$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to more_collections:MultiHashMap:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to more_collections:MultiHashMap:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to more_collections:MultiHashMap:kernel$Object$object_id */
(nitmethod_t)core___core__MapRead___core__kernel__Object__hash, /* pointer to more_collections:MultiHashMap:abstract_collection$MapRead$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to more_collections:MultiHashMap:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to more_collections:MultiHashMap:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to more_collections:MultiHashMap:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__length, /* pointer to more_collections:MultiHashMap:hash_collection$HashMap$length */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__iterator, /* pointer to more_collections:MultiHashMap:hash_collection$HashMap$iterator */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__has_key, /* pointer to more_collections:MultiHashMap:hash_collection$HashMap$has_key */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead___91d_93d, /* pointer to more_collections:MultiHashMap:hash_collection$HashMap$[] */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__keys, /* pointer to more_collections:MultiHashMap:hash_collection$HashMap$keys */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__is_empty, /* pointer to more_collections:MultiHashMap:hash_collection$HashMap$is_empty */
(nitmethod_t)more_collections___more_collections__MultiHashMap___core__abstract_collection__MapRead__provide_default_value, /* pointer to more_collections:MultiHashMap:more_collections$MultiHashMap$provide_default_value */
(nitmethod_t)core___core__Object___init, /* pointer to more_collections:MultiHashMap:kernel$Object$init */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__get_or_null, /* pointer to more_collections:MultiHashMap:hash_collection$HashMap$get_or_null */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__values, /* pointer to more_collections:MultiHashMap:hash_collection$HashMap$values */
(nitmethod_t)core___core__HashMap___core__abstract_collection__Map___91d_93d_61d, /* pointer to more_collections:MultiHashMap:hash_collection$HashMap$[]= */
(nitmethod_t)core___core__HashMap___core__abstract_collection__Map__clear, /* pointer to more_collections:MultiHashMap:hash_collection$HashMap$clear */
(nitmethod_t)core__flat___Map___join, /* pointer to more_collections:MultiHashMap:flat$Map$join */
(nitmethod_t)core___core__Map___add_all, /* pointer to more_collections:MultiHashMap:abstract_collection$Map$add_all */
(nitmethod_t)more_collections___more_collections__MultiHashMap___add_one, /* pointer to more_collections:MultiHashMap:more_collections$MultiHashMap$add_one */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___enlarge, /* pointer to more_collections:MultiHashMap:hash_collection$HashCollection$enlarge */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___index_at, /* pointer to more_collections:MultiHashMap:hash_collection$HashCollection$index_at */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___node_at_idx, /* pointer to more_collections:MultiHashMap:hash_collection$HashCollection$node_at_idx */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___store, /* pointer to more_collections:MultiHashMap:hash_collection$HashCollection$store */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___node_at, /* pointer to more_collections:MultiHashMap:hash_collection$HashCollection$node_at */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___raz, /* pointer to more_collections:MultiHashMap:hash_collection$HashCollection$raz */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___remove_node, /* pointer to more_collections:MultiHashMap:hash_collection$HashCollection$remove_node */
}
};
/* allocate MultiHashMap[nullable Object, nullable Object] */
val* NEW_more_collections__MultiHashMap(const struct type* type) {
val* self /* : MultiHashMap[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_more_collections__MultiHashMap;
self->attrs[COLOR_core__hash_collection__HashCollection___capacity].l = 0l; /* _capacity on <self:MultiHashMap[nullable Object, nullable Object] exact> */
self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l = 0l; /* _the_length on <self:MultiHashMap[nullable Object, nullable Object] exact> */
return self;
}
/* runtime class more_collections__HashMap2: more_collections::HashMap2 (dead=false; need_corpse=false)*/
const struct class class_more_collections__HashMap2 = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to more_collections:HashMap2:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to more_collections:HashMap2:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to more_collections:HashMap2:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to more_collections:HashMap2:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to more_collections:HashMap2:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to more_collections:HashMap2:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to more_collections:HashMap2:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to more_collections:HashMap2:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to more_collections:HashMap2:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to more_collections:HashMap2:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to more_collections:HashMap2:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to more_collections:HashMap2:abstract_text$Object$native_class_name */
(nitmethod_t)more_collections___more_collections__HashMap2____91d_93d, /* pointer to more_collections:HashMap2:more_collections$HashMap2$[] */
(nitmethod_t)more_collections___more_collections__HashMap2____91d_93d_61d, /* pointer to more_collections:HashMap2:more_collections$HashMap2$[]= */
(nitmethod_t)more_collections___more_collections__HashMap2___level1, /* pointer to more_collections:HashMap2:more_collections$HashMap2$level1 */
}
};
/* allocate HashMap2[nullable Object, nullable Object, nullable Object] */
val* NEW_more_collections__HashMap2(const struct type* type) {
val* self /* : HashMap2[nullable Object, nullable Object, nullable Object] */;
val* var /* : HashMap[nullable Object, HashMap[nullable Object, nullable Object]] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_more_collections__HashMap2;
var = NEW_core__HashMap(self->type->resolution_table->types[COLOR_core__HashMap__more_collections__HashMap2___35dK1__core__HashMap__more_collections__HashMap2___35dK2__more_collections__HashMap2___35dV]);
{
core___core__HashMap___core__kernel__Object__init(var); /* Direct call hash_collection$HashMap$init on <var:HashMap[nullable Object, HashMap[nullable Object, nullable Object]]>*/
}
self->attrs[COLOR_more_collections__HashMap2___level1].val = var; /* _level1 on <self:HashMap2[nullable Object, nullable Object, nullable Object] exact> */
return self;
}
/* runtime class more_collections__HashMap3: more_collections::HashMap3 (dead=false; need_corpse=false)*/
const struct class class_more_collections__HashMap3 = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to more_collections:HashMap3:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to more_collections:HashMap3:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to more_collections:HashMap3:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to more_collections:HashMap3:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to more_collections:HashMap3:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to more_collections:HashMap3:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to more_collections:HashMap3:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to more_collections:HashMap3:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to more_collections:HashMap3:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to more_collections:HashMap3:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to more_collections:HashMap3:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to more_collections:HashMap3:abstract_text$Object$native_class_name */
(nitmethod_t)more_collections___more_collections__HashMap3____91d_93d, /* pointer to more_collections:HashMap3:more_collections$HashMap3$[] */
(nitmethod_t)more_collections___more_collections__HashMap3____91d_93d_61d, /* pointer to more_collections:HashMap3:more_collections$HashMap3$[]= */
(nitmethod_t)more_collections___more_collections__HashMap3___level1, /* pointer to more_collections:HashMap3:more_collections$HashMap3$level1 */
}
};
/* allocate HashMap3[nullable Object, nullable Object, nullable Object, nullable Object] */
val* NEW_more_collections__HashMap3(const struct type* type) {
val* self /* : HashMap3[nullable Object, nullable Object, nullable Object, nullable Object] */;
val* var /* : HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_more_collections__HashMap3;
var = NEW_core__HashMap(self->type->resolution_table->types[COLOR_core__HashMap__more_collections__HashMap3___35dK1__more_collections__HashMap2__more_collections__HashMap3___35dK2__more_collections__HashMap3___35dK3__more_collections__HashMap3___35dV]);
{
core___core__HashMap___core__kernel__Object__init(var); /* Direct call hash_collection$HashMap$init on <var:HashMap[nullable Object, HashMap2[nullable Object, nullable Object, nullable Object]]>*/
}
self->attrs[COLOR_more_collections__HashMap3___level1].val = var; /* _level1 on <self:HashMap3[nullable Object, nullable Object, nullable Object, nullable Object] exact> */
return self;
}
/* runtime class more_collections__DefaultMap: more_collections::DefaultMap (dead=true; need_corpse=false)*/
/* allocate DefaultMap[nullable Object, nullable Object] */
val* NEW_more_collections__DefaultMap(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "DefaultMap is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class more_collections__UnrolledList: more_collections::UnrolledList (dead=true; need_corpse=false)*/
/* allocate UnrolledList[nullable Object] */
val* NEW_more_collections__UnrolledList(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "UnrolledList is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class more_collections__UnrolledNode: more_collections::more_collections::UnrolledNode (dead=true; need_corpse=false)*/
/* allocate UnrolledNode[nullable Object] */
val* NEW_more_collections__UnrolledNode(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "UnrolledNode is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class more_collections__UnrolledIterator: more_collections::more_collections::UnrolledIterator (dead=true; need_corpse=false)*/
/* allocate UnrolledIterator[nullable Object] */
val* NEW_more_collections__UnrolledIterator(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "UnrolledIterator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class more_collections__BestDistance: more_collections::BestDistance (dead=false; need_corpse=false)*/
const struct class class_more_collections__BestDistance = {
0, /* box_kind */
{
(nitmethod_t)more_collections___more_collections__BestDistance___core__kernel__Object__init, /* pointer to more_collections:BestDistance:more_collections$BestDistance$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to more_collections:BestDistance:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to more_collections:BestDistance:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to more_collections:BestDistance:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to more_collections:BestDistance:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to more_collections:BestDistance:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to more_collections:BestDistance:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to more_collections:BestDistance:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to more_collections:BestDistance:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to more_collections:BestDistance:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to more_collections:BestDistance:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to more_collections:BestDistance:abstract_text$Object$native_class_name */
(nitmethod_t)more_collections___more_collections__BestDistance___best_distance_61d, /* pointer to more_collections:BestDistance:more_collections$BestDistance$best_distance= */
(nitmethod_t)more_collections___more_collections__BestDistance___update, /* pointer to more_collections:BestDistance:more_collections$BestDistance$update */
(nitmethod_t)more_collections___more_collections__BestDistance___best_items, /* pointer to more_collections:BestDistance:more_collections$BestDistance$best_items */
(nitmethod_t)more_collections___more_collections__BestDistance___best_distance, /* pointer to more_collections:BestDistance:more_collections$BestDistance$best_distance */
(nitmethod_t)core___core__Object___init, /* pointer to more_collections:BestDistance:kernel$Object$init */
}
};
/* allocate BestDistance[nullable Object] */
val* NEW_more_collections__BestDistance(const struct type* type) {
val* self /* : BestDistance[nullable Object] */;
val* var /* : Set[nullable Object] */;
val* var1 /* : Set[nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_more_collections__BestDistance;
var = NEW_core__Set(self->type->resolution_table->types[COLOR_core__Set__more_collections__BestDistance___35dE]);
{
var1 = core__hash_collection___Set___new(var);
}
self->attrs[COLOR_more_collections__BestDistance___best_items].val = var1; /* _best_items on <self:BestDistance[nullable Object] exact> */
return self;
}
/* runtime class serialization__Serializer: serialization::Serializer (dead=true; need_corpse=false)*/
/* allocate Serializer */
val* NEW_serialization__Serializer(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Serializer is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class serialization__Deserializer: serialization::Deserializer (dead=true; need_corpse=false)*/
/* allocate Deserializer */
val* NEW_serialization__Deserializer(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Deserializer is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class serialization__AttributeTypeError: serialization::AttributeTypeError (dead=true; need_corpse=false)*/
/* allocate AttributeTypeError */
val* NEW_serialization__AttributeTypeError(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "AttributeTypeError is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class serialization__Serializable: serialization::Serializable (dead=true; need_corpse=false)*/
/* allocate Serializable */
val* NEW_serialization__Serializable(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Serializable is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class serialization__DirectSerializable: serialization::DirectSerializable (dead=true; need_corpse=false)*/
/* allocate DirectSerializable */
val* NEW_serialization__DirectSerializable(const struct type* type) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "DirectSerializable is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class poset__POSet: poset::POSet (dead=false; need_corpse=false)*/
const struct class class_poset__POSet = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to poset:POSet:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to poset:POSet:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to poset:POSet:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Collection___Object__to_s, /* pointer to poset:POSet:abstract_text$Collection$to_s */
(nitmethod_t)poset___poset__POSet___core__kernel__Object___61d_61d, /* pointer to poset:POSet:poset$POSet$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to poset:POSet:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to poset:POSet:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to poset:POSet:kernel$Object$object_id */
(nitmethod_t)poset___poset__POSet___core__kernel__Object__hash, /* pointer to poset:POSet:poset$POSet$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to poset:POSet:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to poset:POSet:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to poset:POSet:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Comparator___sort, /* pointer to poset:POSet:sorter$Comparator$sort */
(nitmethod_t)core___core__Comparator___sub_sort, /* pointer to poset:POSet:sorter$Comparator$sub_sort */
(nitmethod_t)core___core__Comparator___quick_sort, /* pointer to poset:POSet:sorter$Comparator$quick_sort */
(nitmethod_t)core___core__Comparator___bubble_sort, /* pointer to poset:POSet:sorter$Comparator$bubble_sort */
(nitmethod_t)poset___poset__POSet___core__sorter__Comparator__compare, /* pointer to poset:POSet:poset$POSet$compare */
(nitmethod_t)poset___poset__POSet___elements, /* pointer to poset:POSet:poset$POSet$elements */
(nitmethod_t)poset___poset__POSet____91d_93d, /* pointer to poset:POSet:poset$POSet$[] */
(nitmethod_t)poset___poset__POSet___core__kernel__Cloneable__clone, /* pointer to poset:POSet:poset$POSet$clone */
(nitmethod_t)core__abstract_text___Collection___join, /* pointer to poset:POSet:abstract_text$Collection$join */
(nitmethod_t)core__array___Collection___to_a, /* pointer to poset:POSet:array$Collection$to_a */
(nitmethod_t)core___core__Collection___length, /* pointer to poset:POSet:abstract_collection$Collection$length */
(nitmethod_t)core___core__Collection___is_empty, /* pointer to poset:POSet:abstract_collection$Collection$is_empty */
(nitmethod_t)poset___poset__POSet___core__abstract_collection__Collection__iterator, /* pointer to poset:POSet:poset$POSet$iterator */
(nitmethod_t)core___core__Collection___has_exactly, /* pointer to poset:POSet:abstract_collection$Collection$has_exactly */
(nitmethod_t)core___core__Collection___has_all, /* pointer to poset:POSet:abstract_collection$Collection$has_all */
(nitmethod_t)poset___poset__POSet___core__abstract_collection__Collection__has, /* pointer to poset:POSet:poset$POSet$has */
(nitmethod_t)core___core__Collection___count, /* pointer to poset:POSet:abstract_collection$Collection$count */
(nitmethod_t)core___core__Collection___first, /* pointer to poset:POSet:abstract_collection$Collection$first */
(nitmethod_t)core___core__Collection___not_empty, /* pointer to poset:POSet:abstract_collection$Collection$not_empty */
(nitmethod_t)core__abstract_text___Collection___plain_to_s, /* pointer to poset:POSet:abstract_text$Collection$plain_to_s */
(nitmethod_t)poset___poset__POSet___add_node, /* pointer to poset:POSet:poset$POSet$add_node */
(nitmethod_t)poset___poset__POSet___add_edge, /* pointer to poset:POSet:poset$POSet$add_edge */
(nitmethod_t)poset___poset__POSet___sub, /* pointer to poset:POSet:poset$POSet$sub */
(nitmethod_t)poset___poset__POSet___has_edge, /* pointer to poset:POSet:poset$POSet$has_edge */
(nitmethod_t)nitc__coloring___poset__POSet___to_conflict_graph, /* pointer to poset:POSet:coloring$POSet$to_conflict_graph */
(nitmethod_t)poset___poset__POSet___linearize, /* pointer to poset:POSet:poset$POSet$linearize */
}
};
/* allocate POSet[nullable Object] */
val* NEW_poset__POSet(const struct type* type) {
val* self /* : POSet[nullable Object] */;
val* var /* : HashMap[nullable Object, POSetElement[nullable Object]] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_poset__POSet;
var = NEW_core__HashMap(self->type->resolution_table->types[COLOR_core__HashMap__poset__POSet___35dE__poset__POSetElement__poset__POSet___35dE]);
{
core___core__HashMap___core__kernel__Object__init(var); /* Direct call hash_collection$HashMap$init on <var:HashMap[nullable Object, POSetElement[nullable Object]]>*/
}
self->attrs[COLOR_poset__POSet___elements].val = var; /* _elements on <self:POSet[nullable Object] exact> */
return self;
}
/* runtime class poset__POSetElement: poset::POSetElement (dead=false; need_corpse=false)*/
const struct class class_poset__POSetElement = {
0, /* box_kind */
{
(nitmethod_t)poset___poset__POSetElement___core__kernel__Object__init, /* pointer to poset:POSetElement:poset$POSetElement$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to poset:POSetElement:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to poset:POSetElement:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to poset:POSetElement:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to poset:POSetElement:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to poset:POSetElement:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to poset:POSetElement:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to poset:POSetElement:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to poset:POSetElement:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to poset:POSetElement:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to poset:POSetElement:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to poset:POSetElement:abstract_text$Object$native_class_name */
(nitmethod_t)poset___poset__POSetElement___direct_greaters, /* pointer to poset:POSetElement:poset$POSetElement$direct_greaters */
(nitmethod_t)poset___poset__POSetElement___dtos, /* pointer to poset:POSetElement:poset$POSetElement$dtos */
(nitmethod_t)poset___poset__POSetElement___poset_61d, /* pointer to poset:POSetElement:poset$POSetElement$poset= */
(nitmethod_t)poset___poset__POSetElement___element_61d, /* pointer to poset:POSetElement:poset$POSetElement$element= */
(nitmethod_t)poset___poset__POSetElement___count_61d, /* pointer to poset:POSetElement:poset$POSetElement$count= */
(nitmethod_t)poset___poset__POSetElement___tos, /* pointer to poset:POSetElement:poset$POSetElement$tos */
(nitmethod_t)poset___poset__POSetElement___froms, /* pointer to poset:POSetElement:poset$POSetElement$froms */
(nitmethod_t)poset___poset__POSetElement___dfroms, /* pointer to poset:POSetElement:poset$POSetElement$dfroms */
(nitmethod_t)poset___poset__POSetElement____60d_61d, /* pointer to poset:POSetElement:poset$POSetElement$<= */
(nitmethod_t)poset___poset__POSetElement___poset, /* pointer to poset:POSetElement:poset$POSetElement$poset */
(nitmethod_t)poset___poset__POSetElement___count, /* pointer to poset:POSetElement:poset$POSetElement$count */
(nitmethod_t)poset___poset__POSetElement___greaters, /* pointer to poset:POSetElement:poset$POSetElement$greaters */
(nitmethod_t)poset___poset__POSetElement___smallers, /* pointer to poset:POSetElement:poset$POSetElement$smallers */
(nitmethod_t)poset___poset__POSetElement____60d, /* pointer to poset:POSetElement:poset$POSetElement$< */
(nitmethod_t)poset___poset__POSetElement___element, /* pointer to poset:POSetElement:poset$POSetElement$element */
(nitmethod_t)poset___poset__POSetElement___direct_smallers, /* pointer to poset:POSetElement:poset$POSetElement$direct_smallers */
(nitmethod_t)core___core__Object___init, /* pointer to poset:POSetElement:kernel$Object$init */
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
var = NEW_core__HashSet(self->type->resolution_table->types[COLOR_core__HashSet__poset__POSetElement___35dE]);
{
core___core__HashSet___core__kernel__Object__init(var); /* Direct call hash_collection$HashSet$init on <var:HashSet[nullable Object]>*/
}
self->attrs[COLOR_poset__POSetElement___tos].val = var; /* _tos on <self:POSetElement[nullable Object] exact> */
var1 = NEW_core__HashSet(self->type->resolution_table->types[COLOR_core__HashSet__poset__POSetElement___35dE]);
{
core___core__HashSet___core__kernel__Object__init(var1); /* Direct call hash_collection$HashSet$init on <var1:HashSet[nullable Object]>*/
}
self->attrs[COLOR_poset__POSetElement___froms].val = var1; /* _froms on <self:POSetElement[nullable Object] exact> */
var2 = NEW_core__HashSet(self->type->resolution_table->types[COLOR_core__HashSet__poset__POSetElement___35dE]);
{
core___core__HashSet___core__kernel__Object__init(var2); /* Direct call hash_collection$HashSet$init on <var2:HashSet[nullable Object]>*/
}
self->attrs[COLOR_poset__POSetElement___dtos].val = var2; /* _dtos on <self:POSetElement[nullable Object] exact> */
var3 = NEW_core__HashSet(self->type->resolution_table->types[COLOR_core__HashSet__poset__POSetElement___35dE]);
{
core___core__HashSet___core__kernel__Object__init(var3); /* Direct call hash_collection$HashSet$init on <var3:HashSet[nullable Object]>*/
}
self->attrs[COLOR_poset__POSetElement___dfroms].val = var3; /* _dfroms on <self:POSetElement[nullable Object] exact> */
return self;
}
/* runtime class nitc__MDoc: nitc::MDoc (dead=false; need_corpse=false)*/
const struct class class_nitc__MDoc = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MDoc___core__kernel__Object__init, /* pointer to mdoc:MDoc:mdoc$MDoc$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to mdoc:MDoc:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to mdoc:MDoc:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to mdoc:MDoc:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to mdoc:MDoc:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to mdoc:MDoc:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to mdoc:MDoc:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to mdoc:MDoc:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to mdoc:MDoc:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to mdoc:MDoc:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to mdoc:MDoc:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to mdoc:MDoc:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MDoc___original_mentity_61d, /* pointer to mdoc:MDoc:mdoc$MDoc$original_mentity= */
(nitmethod_t)nitc___nitc__MDoc___location_61d, /* pointer to mdoc:MDoc:mdoc$MDoc$location= */
(nitmethod_t)nitc___nitc__MDoc___content, /* pointer to mdoc:MDoc:mdoc$MDoc$content */
(nitmethod_t)core___core__Object___init, /* pointer to mdoc:MDoc:kernel$Object$init */
}
};
/* allocate MDoc */
val* NEW_nitc__MDoc(const struct type* type) {
val* self /* : MDoc */;
val* var /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MDoc;
var = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[String]>*/
}
self->attrs[COLOR_nitc__mdoc__MDoc___content].val = var; /* _content on <self:MDoc exact> */
return self;
}
/* runtime class nitc__MDeprecationInfo: nitc::MDeprecationInfo (dead=false; need_corpse=false)*/
const struct class class_nitc__MDeprecationInfo = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to mdoc:MDeprecationInfo:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to mdoc:MDeprecationInfo:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to mdoc:MDeprecationInfo:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to mdoc:MDeprecationInfo:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to mdoc:MDeprecationInfo:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to mdoc:MDeprecationInfo:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to mdoc:MDeprecationInfo:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to mdoc:MDeprecationInfo:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to mdoc:MDeprecationInfo:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to mdoc:MDeprecationInfo:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to mdoc:MDeprecationInfo:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to mdoc:MDeprecationInfo:abstract_text$Object$native_class_name */
(nitmethod_t)nitc___nitc__MDeprecationInfo___mdoc_61d, /* pointer to mdoc:MDeprecationInfo:mdoc$MDeprecationInfo$mdoc= */
(nitmethod_t)nitc___nitc__MDeprecationInfo___mdoc, /* pointer to mdoc:MDeprecationInfo:mdoc$MDeprecationInfo$mdoc */
}
};
/* allocate MDeprecationInfo */
val* NEW_nitc__MDeprecationInfo(const struct type* type) {
val* self /* : MDeprecationInfo */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MDeprecationInfo;
return self;
}
/* runtime class ordered_tree__OrderedTree: ordered_tree::OrderedTree (dead=false; need_corpse=false)*/
const struct class class_ordered_tree__OrderedTree = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to ordered_tree:OrderedTree:kernel$Object$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to ordered_tree:OrderedTree:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to ordered_tree:OrderedTree:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Collection___Object__to_s, /* pointer to ordered_tree:OrderedTree:abstract_text$Collection$to_s */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___core__kernel__Object___61d_61d, /* pointer to ordered_tree:OrderedTree:ordered_tree$OrderedTree$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to ordered_tree:OrderedTree:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to ordered_tree:OrderedTree:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to ordered_tree:OrderedTree:kernel$Object$object_id */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___core__kernel__Object__hash, /* pointer to ordered_tree:OrderedTree:ordered_tree$OrderedTree$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to ordered_tree:OrderedTree:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to ordered_tree:OrderedTree:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to ordered_tree:OrderedTree:abstract_text$Object$native_class_name */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___add, /* pointer to ordered_tree:OrderedTree:ordered_tree$OrderedTree$add */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___sort_with, /* pointer to ordered_tree:OrderedTree:ordered_tree$OrderedTree$sort_with */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___roots, /* pointer to ordered_tree:OrderedTree:ordered_tree$OrderedTree$roots */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___sub, /* pointer to ordered_tree:OrderedTree:ordered_tree$OrderedTree$sub */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___core__kernel__Cloneable__clone, /* pointer to ordered_tree:OrderedTree:ordered_tree$OrderedTree$clone */
(nitmethod_t)core__abstract_text___Collection___join, /* pointer to ordered_tree:OrderedTree:abstract_text$Collection$join */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___core__array__Collection__to_a, /* pointer to ordered_tree:OrderedTree:ordered_tree$OrderedTree$to_a */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___core__abstract_collection__Collection__length, /* pointer to ordered_tree:OrderedTree:ordered_tree$OrderedTree$length */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___core__abstract_collection__Collection__is_empty, /* pointer to ordered_tree:OrderedTree:ordered_tree$OrderedTree$is_empty */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___core__abstract_collection__Collection__iterator, /* pointer to ordered_tree:OrderedTree:ordered_tree$OrderedTree$iterator */
(nitmethod_t)core___core__Collection___has_exactly, /* pointer to ordered_tree:OrderedTree:abstract_collection$Collection$has_exactly */
(nitmethod_t)core___core__Collection___has_all, /* pointer to ordered_tree:OrderedTree:abstract_collection$Collection$has_all */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___core__abstract_collection__Collection__has, /* pointer to ordered_tree:OrderedTree:ordered_tree$OrderedTree$has */
(nitmethod_t)core___core__Collection___count, /* pointer to ordered_tree:OrderedTree:abstract_collection$Collection$count */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___core__abstract_collection__Collection__first, /* pointer to ordered_tree:OrderedTree:ordered_tree$OrderedTree$first */
(nitmethod_t)core___core__Collection___not_empty, /* pointer to ordered_tree:OrderedTree:abstract_collection$Collection$not_empty */
(nitmethod_t)core__abstract_text___Collection___plain_to_s, /* pointer to ordered_tree:OrderedTree:abstract_text$Collection$plain_to_s */
(nitmethod_t)core__file___Writable___write_to_file, /* pointer to ordered_tree:OrderedTree:file$Writable$write_to_file */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___core__stream__Writable__write_to, /* pointer to ordered_tree:OrderedTree:ordered_tree$OrderedTree$write_to */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___sub_to_a, /* pointer to ordered_tree:OrderedTree:ordered_tree$OrderedTree$sub_to_a */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___parents, /* pointer to ordered_tree:OrderedTree:ordered_tree$OrderedTree$parents */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___add_all, /* pointer to ordered_tree:OrderedTree:ordered_tree$OrderedTree$add_all */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___write_line, /* pointer to ordered_tree:OrderedTree:ordered_tree$OrderedTree$write_line */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___sub_write_to, /* pointer to ordered_tree:OrderedTree:ordered_tree$OrderedTree$sub_write_to */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___detach, /* pointer to ordered_tree:OrderedTree:ordered_tree$OrderedTree$detach */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTree___display, /* pointer to ordered_tree:OrderedTree:ordered_tree$OrderedTree$display */
}
};
/* allocate OrderedTree[Object] */
val* NEW_ordered_tree__OrderedTree(const struct type* type) {
val* self /* : OrderedTree[Object] */;
val* var /* : Array[Object] */;
val* var1 /* : HashMap[Object, Array[Object]] */;
val* var2 /* : HashMap[Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_ordered_tree__OrderedTree;
var = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__ordered_tree__OrderedTree___35dE]);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[Object]>*/
}
self->attrs[COLOR_ordered_tree__OrderedTree___roots].val = var; /* _roots on <self:OrderedTree[Object] exact> */
var1 = NEW_core__HashMap(self->type->resolution_table->types[COLOR_core__HashMap__ordered_tree__OrderedTree___35dE__core__Array__ordered_tree__OrderedTree___35dE]);
{
core___core__HashMap___core__kernel__Object__init(var1); /* Direct call hash_collection$HashMap$init on <var1:HashMap[Object, Array[Object]]>*/
}
self->attrs[COLOR_ordered_tree__OrderedTree___sub].val = var1; /* _sub on <self:OrderedTree[Object] exact> */
var2 = NEW_core__HashMap(self->type->resolution_table->types[COLOR_core__HashMap__ordered_tree__OrderedTree___35dE__nullable__ordered_tree__OrderedTree___35dE]);
{
core___core__HashMap___core__kernel__Object__init(var2); /* Direct call hash_collection$HashMap$init on <var2:HashMap[Object, nullable Object]>*/
}
self->attrs[COLOR_ordered_tree__OrderedTree___parents].val = var2; /* _parents on <self:OrderedTree[Object] exact> */
return self;
}
/* runtime class ordered_tree__OrderedTreeIterator: ordered_tree::ordered_tree::OrderedTreeIterator (dead=false; need_corpse=false)*/
const struct class class_ordered_tree__OrderedTreeIterator = {
0, /* box_kind */
{
(nitmethod_t)ordered_tree___ordered_tree__OrderedTreeIterator___core__kernel__Object__init, /* pointer to ordered_tree:OrderedTreeIterator:ordered_tree$OrderedTreeIterator$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to ordered_tree:OrderedTreeIterator:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to ordered_tree:OrderedTreeIterator:kernel$Object$sys */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to ordered_tree:OrderedTreeIterator:abstract_text$Object$to_s */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to ordered_tree:OrderedTreeIterator:kernel$Object$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to ordered_tree:OrderedTreeIterator:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to ordered_tree:OrderedTreeIterator:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to ordered_tree:OrderedTreeIterator:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to ordered_tree:OrderedTreeIterator:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to ordered_tree:OrderedTreeIterator:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to ordered_tree:OrderedTreeIterator:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to ordered_tree:OrderedTreeIterator:abstract_text$Object$native_class_name */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTreeIterator___core__abstract_collection__Iterator__is_ok, /* pointer to ordered_tree:OrderedTreeIterator:ordered_tree$OrderedTreeIterator$is_ok */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTreeIterator___core__abstract_collection__Iterator__item, /* pointer to ordered_tree:OrderedTreeIterator:ordered_tree$OrderedTreeIterator$item */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTreeIterator___core__abstract_collection__Iterator__next, /* pointer to ordered_tree:OrderedTreeIterator:ordered_tree$OrderedTreeIterator$next */
(nitmethod_t)core___core__Iterator___finish, /* pointer to ordered_tree:OrderedTreeIterator:abstract_collection$Iterator$finish */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTreeIterator___core__abstract_collection__Iterator__iterator, /* pointer to ordered_tree:OrderedTreeIterator:ordered_tree$OrderedTreeIterator$iterator */
(nitmethod_t)core__array___Iterator___to_a, /* pointer to ordered_tree:OrderedTreeIterator:array$Iterator$to_a */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTreeIterator___tree_61d, /* pointer to ordered_tree:OrderedTreeIterator:ordered_tree$OrderedTreeIterator$tree= */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTreeIterator___tree, /* pointer to ordered_tree:OrderedTreeIterator:ordered_tree$OrderedTreeIterator$tree */
(nitmethod_t)ordered_tree___ordered_tree__OrderedTreeIterator___iterators, /* pointer to ordered_tree:OrderedTreeIterator:ordered_tree$OrderedTreeIterator$iterators */
(nitmethod_t)core___core__Object___init, /* pointer to ordered_tree:OrderedTreeIterator:kernel$Object$init */
}
};
/* allocate OrderedTreeIterator[Object] */
val* NEW_ordered_tree__OrderedTreeIterator(const struct type* type) {
val* self /* : OrderedTreeIterator[Object] */;
val* var /* : Array[Iterator[Object]] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_ordered_tree__OrderedTreeIterator;
var = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__core__Iterator__ordered_tree__OrderedTreeIterator___35dE]);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array$Array$init on <var:Array[Iterator[Object]]>*/
}
self->attrs[COLOR_ordered_tree__OrderedTreeIterator___iterators].val = var; /* _iterators on <self:OrderedTreeIterator[Object] exact> */
return self;
}
/* runtime class nitc__Message: nitc::Message (dead=false; need_corpse=false)*/
const struct class class_nitc__Message = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Message___core__kernel__Object__init, /* pointer to toolcontext:Message:toolcontext$Message$init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to toolcontext:Message:kernel$Object$!= */
(nitmethod_t)core___core__Object___sys, /* pointer to toolcontext:Message:kernel$Object$sys */
(nitmethod_t)nitc___nitc__Message___core__abstract_text__Object__to_s, /* pointer to toolcontext:Message:toolcontext$Message$to_s */
(nitmethod_t)nitc___nitc__Message___core__kernel__Object___61d_61d, /* pointer to toolcontext:Message:toolcontext$Message$== */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to toolcontext:Message:kernel$Object$is_same_instance */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to toolcontext:Message:abstract_text$Object$inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to toolcontext:Message:kernel$Object$object_id */
(nitmethod_t)core___core__Object___hash, /* pointer to toolcontext:Message:kernel$Object$hash */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to toolcontext:Message:abstract_text$Object$class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to toolcontext:Message:abstract_text$Object$inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to toolcontext:Message:abstract_text$Object$native_class_name */
(nitmethod_t)core___core__Comparable____60d_61d, /* pointer to toolcontext:Message:kernel$Comparable$<= */
(nitmethod_t)core___core__Comparable____62d, /* pointer to toolcontext:Message:kernel$Comparable$> */
(nitmethod_t)core___core__Comparable____62d_61d, /* pointer to toolcontext:Message:kernel$Comparable$>= */
(nitmethod_t)nitc___nitc__Message___core__kernel__Comparable___60d, /* pointer to toolcontext:Message:toolcontext$Message$< */
(nitmethod_t)core___core__Comparable____60d_61d_62d, /* pointer to toolcontext:Message:kernel$Comparable$<=> */
(nitmethod_t)core___core__Comparable___min, /* pointer to toolcontext:Message:kernel$Comparable$min */
(nitmethod_t)core___core__Comparable___max, /* pointer to toolcontext:Message:kernel$Comparable$max */
(nitmethod_t)nitc___nitc__Message___location_61d, /* pointer to toolcontext:Message:toolcontext$Message$location= */
(nitmethod_t)nitc___nitc__Message___tag_61d, /* pointer to toolcontext:Message:toolcontext$Message$tag= */
(nitmethod_t)nitc___nitc__Message___text_61d, /* pointer to toolcontext:Message:toolcontext$Message$text= */
(nitmethod_t)nitc___nitc__Message___level_61d, /* pointer to toolcontext:Message:toolcontext$Message$level= */
(nitmethod_t)nitc___nitc__Message___to_color_string, /* pointer to toolcontext:Message:toolcontext$Message$to_color_string */
(nitmethod_t)nitc___nitc__Message___location, /* pointer to toolcontext:Message:toolcontext$Message$location */
(nitmethod_t)nitc___nitc__Message___text, /* pointer to toolcontext:Message:toolcontext$Message$text */
(nitmethod_t)nitc___nitc__Message___tag, /* pointer to toolcontext:Message:toolcontext$Message$tag */
(nitmethod_t)core___core__Object___init, /* pointer to toolcontext:Message:kernel$Object$init */
}
};
/* allocate Message */
val* NEW_nitc__Message(const struct type* type) {
val* self /* : Message */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__Message;
return self;
}
