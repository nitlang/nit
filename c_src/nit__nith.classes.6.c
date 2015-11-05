#include "nit__nith.classes.0.h"
/* runtime class nit__transform__TransformVisitor */
const struct class class_nit__transform__TransformVisitor = {
0, /* box_kind */
{
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___standard__kernel__Object__init, /* pointer to transform:TransformVisitor:transform#TransformVisitor#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to transform:TransformVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to transform:TransformVisitor:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to transform:TransformVisitor:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to transform:TransformVisitor:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to transform:TransformVisitor:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to transform:TransformVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to transform:TransformVisitor:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to transform:TransformVisitor:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to transform:TransformVisitor:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to transform:TransformVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to transform:TransformVisitor:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to transform:TransformVisitor:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to transform:TransformVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to transform:TransformVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to transform:TransformVisitor:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__Visitor___enter_visit, /* pointer to transform:TransformVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___nit__parser_nodes__Visitor__visit, /* pointer to transform:TransformVisitor:transform#TransformVisitor#visit */
(nitmethod_t)nit___nit__Visitor___current_node, /* pointer to transform:TransformVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___phase_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#phase= */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___mpropdef_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mpropdef= */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___mclassdef_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mclassdef= */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___mpropdef, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mpropdef */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___mmodule_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mmodule= */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___mclassdef, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mclassdef */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___builder_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#builder= */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___mmodule, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mmodule */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___builder, /* pointer to transform:TransformVisitor:transform#TransformVisitor#builder */
(nitmethod_t)nit__transform___nit__transform__TransformVisitor___phase, /* pointer to transform:TransformVisitor:transform#TransformVisitor#phase */
(nitmethod_t)standard___standard__Object___init, /* pointer to transform:TransformVisitor:kernel#Object#init */
}
};
/* allocate TransformVisitor */
val* NEW_nit__transform__TransformVisitor(const struct type* type) {
val* self /* : TransformVisitor */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__transform__TransformVisitor;
return self;
}
/* runtime class nit__ASTBuilder */
const struct class class_nit__ASTBuilder = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__ASTBuilder___standard__kernel__Object__init, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to astbuilder:ASTBuilder:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to astbuilder:ASTBuilder:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to astbuilder:ASTBuilder:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to astbuilder:ASTBuilder:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to astbuilder:ASTBuilder:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to astbuilder:ASTBuilder:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to astbuilder:ASTBuilder:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to astbuilder:ASTBuilder:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to astbuilder:ASTBuilder:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to astbuilder:ASTBuilder:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to astbuilder:ASTBuilder:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to astbuilder:ASTBuilder:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to astbuilder:ASTBuilder:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to astbuilder:ASTBuilder:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to astbuilder:ASTBuilder:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__ASTBuilder___mmodule_61d, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#mmodule= */
(nitmethod_t)nit___nit__ASTBuilder___anchor_61d, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#anchor= */
(nitmethod_t)nit___nit__ASTBuilder___make_call, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_call */
(nitmethod_t)nit___nit__ASTBuilder___make_block, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_block */
(nitmethod_t)nit___nit__ASTBuilder___make_new, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_new */
(nitmethod_t)nit___nit__ASTBuilder___make_int, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_int */
(nitmethod_t)nit___nit__ASTBuilder___make_var_assign, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_var_assign */
(nitmethod_t)nit___nit__ASTBuilder___make_attr_read, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_attr_read */
(nitmethod_t)nit___nit__ASTBuilder___make_attr_assign, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_attr_assign */
(nitmethod_t)nit___nit__ASTBuilder___make_loop, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_loop */
(nitmethod_t)nit___nit__ASTBuilder___make_if, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_if */
(nitmethod_t)nit___nit__ASTBuilder___make_break, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_break */
(nitmethod_t)nit___nit__ASTBuilder___make_var_read, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_var_read */
(nitmethod_t)nit___nit__ASTBuilder___make_do, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#make_do */
(nitmethod_t)nit___nit__ASTBuilder___mmodule, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#mmodule */
(nitmethod_t)nit___nit__ASTBuilder___anchor, /* pointer to astbuilder:ASTBuilder:astbuilder#ASTBuilder#anchor */
(nitmethod_t)standard___standard__Object___init, /* pointer to astbuilder:ASTBuilder:kernel#Object#init */
}
};
/* allocate ASTBuilder */
val* NEW_nit__ASTBuilder(const struct type* type) {
val* self /* : ASTBuilder */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ASTBuilder;
return self;
}
/* runtime class nit__APlaceholderExpr */
const struct class class_nit__APlaceholderExpr = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to astbuilder:APlaceholderExpr:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to astbuilder:APlaceholderExpr:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to astbuilder:APlaceholderExpr:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to astbuilder:APlaceholderExpr:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to astbuilder:APlaceholderExpr:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to astbuilder:APlaceholderExpr:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to astbuilder:APlaceholderExpr:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to astbuilder:APlaceholderExpr:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to astbuilder:APlaceholderExpr:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to astbuilder:APlaceholderExpr:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__ANode___location, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#location */
(nitmethod_t)nit___nit__ANode___parent, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#parent */
(nitmethod_t)nit___nit__ANode___hot_location, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#hot_location */
(nitmethod_t)nit___nit__ANode___parent_61d, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#parent= */
(nitmethod_t)nit___nit__ANode___visit_all, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#visit_all */
(nitmethod_t)nit___nit__ANode___location_61d, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#location= */
(nitmethod_t)nit__literal___ANode___accept_literal, /* pointer to astbuilder:APlaceholderExpr:literal#ANode#accept_literal */
(nitmethod_t)nit__transform___AExpr___ANode__full_transform_visitor, /* pointer to astbuilder:APlaceholderExpr:transform#AExpr#full_transform_visitor */
(nitmethod_t)nit__astvalidation___APlaceholderExpr___ANode__accept_ast_validation, /* pointer to astbuilder:APlaceholderExpr:astvalidation#APlaceholderExpr#accept_ast_validation */
(nitmethod_t)nit__rapid_type_analysis___ANode___accept_rapid_type_visitor, /* pointer to astbuilder:APlaceholderExpr:rapid_type_analysis#ANode#accept_rapid_type_visitor */
(nitmethod_t)nit__scope___ANode___accept_scope_visitor, /* pointer to astbuilder:APlaceholderExpr:scope#ANode#accept_scope_visitor */
(nitmethod_t)nit__flow___ANode___accept_flow_visitor, /* pointer to astbuilder:APlaceholderExpr:flow#ANode#accept_flow_visitor */
(nitmethod_t)nit__local_var_init___ANode___accept_local_var_visitor, /* pointer to astbuilder:APlaceholderExpr:local_var_init#ANode#accept_local_var_visitor */
(nitmethod_t)nit__auto_super_init___ANode___accept_auto_super_init, /* pointer to astbuilder:APlaceholderExpr:auto_super_init#ANode#accept_auto_super_init */
(nitmethod_t)nit__transform___ANode___accept_transform_visitor, /* pointer to astbuilder:APlaceholderExpr:transform#ANode#accept_transform_visitor */
(nitmethod_t)nit___nit__ANode___debug, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#debug */
(nitmethod_t)nit__transform___AExpr___nit__parser_nodes__ANode__replace_with, /* pointer to astbuilder:APlaceholderExpr:transform#AExpr#replace_with */
(nitmethod_t)nit___nit__ANode___replace_child, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#replace_child */
(nitmethod_t)nit___nit__Prod___get_annotations, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#Prod#get_annotations */
(nitmethod_t)nit__parser_work___Prod___collect_text, /* pointer to astbuilder:APlaceholderExpr:parser_work#Prod#collect_text */
(nitmethod_t)nit___nit__Prod___n_annotations, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#Prod#n_annotations */
(nitmethod_t)nit__annotation___Prod___get_single_annotation, /* pointer to astbuilder:APlaceholderExpr:annotation#Prod#get_single_annotation */
(nitmethod_t)nit___nit__Prod___n_annotations_61d, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#Prod#n_annotations= */
(nitmethod_t)nit___nit__ANode___replace_with, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#ANode#replace_with */
(nitmethod_t)nit__literal___AExpr___as_string, /* pointer to astbuilder:APlaceholderExpr:literal#AExpr#as_string */
(nitmethod_t)nit__literal___AExpr___as_id, /* pointer to astbuilder:APlaceholderExpr:literal#AExpr#as_id */
(nitmethod_t)nit__typing___AExpr___mtype, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#mtype */
(nitmethod_t)nit__typing___AExpr___is_typed, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#is_typed */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#implicit_cast_to */
(nitmethod_t)nit__flow___AExpr___after_flow_context_61d, /* pointer to astbuilder:APlaceholderExpr:flow#AExpr#after_flow_context= */
(nitmethod_t)nit__flow___AExpr___after_flow_context, /* pointer to astbuilder:APlaceholderExpr:flow#AExpr#after_flow_context */
(nitmethod_t)nit__typing___AExpr___comprehension, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#comprehension */
(nitmethod_t)nit__astbuilder___AExpr___detach_with_placeholder, /* pointer to astbuilder:APlaceholderExpr:astbuilder#AExpr#detach_with_placeholder */
(nitmethod_t)nit__astbuilder___AExpr___make_var_read, /* pointer to astbuilder:APlaceholderExpr:astbuilder#AExpr#make_var_read */
(nitmethod_t)nit__astbuilder___AExpr___add, /* pointer to astbuilder:APlaceholderExpr:astbuilder#AExpr#add */
(nitmethod_t)nit__typing___AExpr___accept_typing, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#accept_typing */
(nitmethod_t)nit__typing___AExpr___implicit_cast_to_61d, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#implicit_cast_to= */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache, /* pointer to astbuilder:APlaceholderExpr:astbuilder#AExpr#variable_cache */
(nitmethod_t)nit__astbuilder___AExpr___variable_cache_61d, /* pointer to astbuilder:APlaceholderExpr:astbuilder#AExpr#variable_cache= */
(nitmethod_t)nit__typing___AExpr___is_typed_61d, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#is_typed= */
(nitmethod_t)nit__typing___AExpr___mtype_61d, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#mtype= */
(nitmethod_t)nit__typing___AExpr___its_variable, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#its_variable */
(nitmethod_t)nit__typing___AExpr___comprehension_61d, /* pointer to astbuilder:APlaceholderExpr:typing#AExpr#comprehension= */
(nitmethod_t)nit__abstract_compiler___AExpr___stmt, /* pointer to astbuilder:APlaceholderExpr:abstract_compiler#AExpr#stmt */
(nitmethod_t)nit__abstract_compiler___AExpr___expr, /* pointer to astbuilder:APlaceholderExpr:abstract_compiler#AExpr#expr */
(nitmethod_t)nit__astvalidation___ANode___accept_ast_validation, /* pointer to astbuilder:APlaceholderExpr:astvalidation#ANode#accept_ast_validation */
(nitmethod_t)nit___nit__Prod___ANode__replace_with, /* pointer to astbuilder:APlaceholderExpr:parser_nodes#Prod#replace_with */
(nitmethod_t)nit___nit__APlaceholderExpr___make, /* pointer to astbuilder:APlaceholderExpr:astbuilder#APlaceholderExpr#make */
(nitmethod_t)nit__astvalidation___AExpr___ANode__accept_ast_validation, /* pointer to astbuilder:APlaceholderExpr:astvalidation#AExpr#accept_ast_validation */
}
};
/* allocate APlaceholderExpr */
val* NEW_nit__APlaceholderExpr(const struct type* type) {
val* self /* : APlaceholderExpr */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__APlaceholderExpr;
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = 0; /* _is_typed on <self:APlaceholderExpr exact> */
return self;
}
/* runtime class nit__typing__TypingPhase */
const struct class class_nit__typing__TypingPhase = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to typing:TypingPhase:phase#Phase#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to typing:TypingPhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to typing:TypingPhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to typing:TypingPhase:phase#Phase#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to typing:TypingPhase:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to typing:TypingPhase:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to typing:TypingPhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to typing:TypingPhase:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to typing:TypingPhase:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to typing:TypingPhase:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to typing:TypingPhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to typing:TypingPhase:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to typing:TypingPhase:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to typing:TypingPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to typing:TypingPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to typing:TypingPhase:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to typing:TypingPhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to typing:TypingPhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to typing:TypingPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to typing:TypingPhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to typing:TypingPhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to typing:TypingPhase:phase#Phase#disabled */
(nitmethod_t)nit__modelbuilder___Phase___process_mainmodule, /* pointer to typing:TypingPhase:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)nit___nit__Phase___process_nmodule, /* pointer to typing:TypingPhase:phase#Phase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to typing:TypingPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to typing:TypingPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nit__typing___nit__typing__TypingPhase___nit__phase__Phase__process_npropdef, /* pointer to typing:TypingPhase:typing#TypingPhase#process_npropdef */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to typing:TypingPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to typing:TypingPhase:phase#Phase#disabled= */
}
};
/* allocate TypingPhase */
val* NEW_nit__typing__TypingPhase(const struct type* type) {
val* self /* : TypingPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__typing__TypingPhase;
self->attrs[COLOR_nit__phase__Phase___disabled].s = 0; /* _disabled on <self:TypingPhase exact> */
return self;
}
/* runtime class nit__typing__TypeVisitor */
const struct class class_nit__typing__TypeVisitor = {
0, /* box_kind */
{
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___standard__kernel__Object__init, /* pointer to typing:TypeVisitor:typing#TypeVisitor#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to typing:TypeVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to typing:TypeVisitor:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to typing:TypeVisitor:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to typing:TypeVisitor:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to typing:TypeVisitor:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to typing:TypeVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to typing:TypeVisitor:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to typing:TypeVisitor:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to typing:TypeVisitor:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to typing:TypeVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to typing:TypeVisitor:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to typing:TypeVisitor:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to typing:TypeVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to typing:TypeVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to typing:TypeVisitor:light_c#Object#from_c_call_context */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___modelbuilder_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#modelbuilder= */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___mmodule_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mmodule= */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___mpropdef_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mpropdef= */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___selfvariable, /* pointer to typing:TypeVisitor:typing#TypeVisitor#selfvariable */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___get_mclass, /* pointer to typing:TypeVisitor:typing#TypeVisitor#get_mclass */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___dirty_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#dirty= */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___visit_stmt, /* pointer to typing:TypeVisitor:typing#TypeVisitor#visit_stmt */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___has_loop, /* pointer to typing:TypeVisitor:typing#TypeVisitor#has_loop */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___dirty, /* pointer to typing:TypeVisitor:typing#TypeVisitor#dirty */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___error, /* pointer to typing:TypeVisitor:typing#TypeVisitor#error */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___visit_expr_subtype, /* pointer to typing:TypeVisitor:typing#TypeVisitor#visit_expr_subtype */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___mpropdef, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mpropdef */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___mclassdef_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mclassdef= */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___anchor_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#anchor= */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___selfvariable_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#selfvariable= */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___is_toplevel_context_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#is_toplevel_context= */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___modelbuilder, /* pointer to typing:TypeVisitor:typing#TypeVisitor#modelbuilder */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___mmodule, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mmodule */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___visit_expr, /* pointer to typing:TypeVisitor:typing#TypeVisitor#visit_expr */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___check_subtype, /* pointer to typing:TypeVisitor:typing#TypeVisitor#check_subtype */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___anchor_to, /* pointer to typing:TypeVisitor:typing#TypeVisitor#anchor_to */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___try_get_mproperty_by_name2, /* pointer to typing:TypeVisitor:typing#TypeVisitor#try_get_mproperty_by_name2 */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___try_get_mclass, /* pointer to typing:TypeVisitor:typing#TypeVisitor#try_get_mclass */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___get_method, /* pointer to typing:TypeVisitor:typing#TypeVisitor#get_method */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___is_toplevel_context, /* pointer to typing:TypeVisitor:typing#TypeVisitor#is_toplevel_context */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___get_variable, /* pointer to typing:TypeVisitor:typing#TypeVisitor#get_variable */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___anchor, /* pointer to typing:TypeVisitor:typing#TypeVisitor#anchor */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___resolve_for, /* pointer to typing:TypeVisitor:typing#TypeVisitor#resolve_for */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___check_signature, /* pointer to typing:TypeVisitor:typing#TypeVisitor#check_signature */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___resolve_mtype, /* pointer to typing:TypeVisitor:typing#TypeVisitor#resolve_mtype */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___set_variable, /* pointer to typing:TypeVisitor:typing#TypeVisitor#set_variable */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___visit_expr_bool, /* pointer to typing:TypeVisitor:typing#TypeVisitor#visit_expr_bool */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___has_loop_61d, /* pointer to typing:TypeVisitor:typing#TypeVisitor#has_loop= */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___merge_types, /* pointer to typing:TypeVisitor:typing#TypeVisitor#merge_types */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___type_bool, /* pointer to typing:TypeVisitor:typing#TypeVisitor#type_bool */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___check_can_be_null, /* pointer to typing:TypeVisitor:typing#TypeVisitor#check_can_be_null */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___can_be_null, /* pointer to typing:TypeVisitor:typing#TypeVisitor#can_be_null */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___null_test, /* pointer to typing:TypeVisitor:typing#TypeVisitor#null_test */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___visit_expr_cast, /* pointer to typing:TypeVisitor:typing#TypeVisitor#visit_expr_cast */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___is_subtype, /* pointer to typing:TypeVisitor:typing#TypeVisitor#is_subtype */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___mclassdef, /* pointer to typing:TypeVisitor:typing#TypeVisitor#mclassdef */
(nitmethod_t)nit__typing___nit__typing__TypeVisitor___try_get_method, /* pointer to typing:TypeVisitor:typing#TypeVisitor#try_get_method */
}
};
/* allocate TypeVisitor */
val* NEW_nit__typing__TypeVisitor(const struct type* type) {
val* self /* : TypeVisitor */;
val* var /* : Variable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__typing__TypeVisitor;
var = NEW_nit__Variable(&type_nit__Variable);
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "self";
var3 = standard___standard__NativeString___to_s_with_length(var2, 4l);
var1 = var3;
varonce = var1;
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__scope__Variable__name_61d]))(var, var1); /* name= on <var:Variable>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:Variable>*/
}
self->attrs[COLOR_nit__typing__TypeVisitor___selfvariable].val = var; /* _selfvariable on <self:TypeVisitor exact> */
self->attrs[COLOR_nit__typing__TypeVisitor___is_toplevel_context].s = 0; /* _is_toplevel_context on <self:TypeVisitor exact> */
self->attrs[COLOR_nit__typing__TypeVisitor___dirty].s = 0; /* _dirty on <self:TypeVisitor exact> */
self->attrs[COLOR_nit__typing__TypeVisitor___has_loop].s = 0; /* _has_loop on <self:TypeVisitor exact> */
return self;
}
/* runtime class nit__SignatureMap */
const struct class class_nit__SignatureMap = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to typing:SignatureMap:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to typing:SignatureMap:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to typing:SignatureMap:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to typing:SignatureMap:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to typing:SignatureMap:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to typing:SignatureMap:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to typing:SignatureMap:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to typing:SignatureMap:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to typing:SignatureMap:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to typing:SignatureMap:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to typing:SignatureMap:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to typing:SignatureMap:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to typing:SignatureMap:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to typing:SignatureMap:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to typing:SignatureMap:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to typing:SignatureMap:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__SignatureMap___map, /* pointer to typing:SignatureMap:typing#SignatureMap#map */
(nitmethod_t)nit___nit__SignatureMap___vararg_decl_61d, /* pointer to typing:SignatureMap:typing#SignatureMap#vararg_decl= */
(nitmethod_t)nit___nit__SignatureMap___vararg_decl, /* pointer to typing:SignatureMap:typing#SignatureMap#vararg_decl */
}
};
/* allocate SignatureMap */
val* NEW_nit__SignatureMap(const struct type* type) {
val* self /* : SignatureMap */;
val* var /* : ArrayMap[Int, Int] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__SignatureMap;
var = NEW_standard__ArrayMap(&type_standard__ArrayMap__standard__Int__standard__Int);
{
{ /* Inline kernel#Object#init (var) on <var:ArrayMap[Int, Int]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__typing__SignatureMap___map].val = var; /* _map on <self:SignatureMap exact> */
self->attrs[COLOR_nit__typing__SignatureMap___vararg_decl].l = 0l; /* _vararg_decl on <self:SignatureMap exact> */
return self;
}
/* runtime class nit__CallSite */
const struct class class_nit__CallSite = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__CallSite___standard__kernel__Object__init, /* pointer to typing:CallSite:typing#CallSite#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to typing:CallSite:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to typing:CallSite:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to typing:CallSite:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to typing:CallSite:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to typing:CallSite:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to typing:CallSite:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to typing:CallSite:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to typing:CallSite:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to typing:CallSite:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to typing:CallSite:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to typing:CallSite:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to typing:CallSite:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to typing:CallSite:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to typing:CallSite:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to typing:CallSite:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__CallSite___node_61d, /* pointer to typing:CallSite:typing#CallSite#node= */
(nitmethod_t)nit___nit__CallSite___recv_61d, /* pointer to typing:CallSite:typing#CallSite#recv= */
(nitmethod_t)nit___nit__CallSite___mmodule_61d, /* pointer to typing:CallSite:typing#CallSite#mmodule= */
(nitmethod_t)nit___nit__CallSite___anchor_61d, /* pointer to typing:CallSite:typing#CallSite#anchor= */
(nitmethod_t)nit___nit__CallSite___recv_is_self_61d, /* pointer to typing:CallSite:typing#CallSite#recv_is_self= */
(nitmethod_t)nit___nit__CallSite___mproperty_61d, /* pointer to typing:CallSite:typing#CallSite#mproperty= */
(nitmethod_t)nit___nit__CallSite___mpropdef_61d, /* pointer to typing:CallSite:typing#CallSite#mpropdef= */
(nitmethod_t)nit___nit__CallSite___msignature_61d, /* pointer to typing:CallSite:typing#CallSite#msignature= */
(nitmethod_t)nit___nit__CallSite___erasure_cast_61d, /* pointer to typing:CallSite:typing#CallSite#erasure_cast= */
(nitmethod_t)nit___nit__CallSite___mpropdef, /* pointer to typing:CallSite:typing#CallSite#mpropdef */
(nitmethod_t)nit___nit__CallSite___msignature, /* pointer to typing:CallSite:typing#CallSite#msignature */
(nitmethod_t)nit___nit__CallSite___recv, /* pointer to typing:CallSite:typing#CallSite#recv */
(nitmethod_t)nit___nit__CallSite___mproperty, /* pointer to typing:CallSite:typing#CallSite#mproperty */
(nitmethod_t)nit___nit__CallSite___check_signature, /* pointer to typing:CallSite:typing#CallSite#check_signature */
(nitmethod_t)nit___nit__CallSite___node, /* pointer to typing:CallSite:typing#CallSite#node */
(nitmethod_t)nit___nit__CallSite___signaturemap_61d, /* pointer to typing:CallSite:typing#CallSite#signaturemap= */
(nitmethod_t)nit___nit__CallSite___erasure_cast, /* pointer to typing:CallSite:typing#CallSite#erasure_cast */
(nitmethod_t)nit___nit__CallSite___anchor, /* pointer to typing:CallSite:typing#CallSite#anchor */
(nitmethod_t)nit___nit__CallSite___mmodule, /* pointer to typing:CallSite:typing#CallSite#mmodule */
(nitmethod_t)nit___nit__CallSite___signaturemap, /* pointer to typing:CallSite:typing#CallSite#signaturemap */
(nitmethod_t)standard___standard__Object___init, /* pointer to typing:CallSite:kernel#Object#init */
}
};
/* allocate CallSite */
val* NEW_nit__CallSite(const struct type* type) {
val* self /* : CallSite */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__CallSite;
return self;
}
/* runtime class nit__local_var_init__LocalVarInitPhase */
const struct class class_nit__local_var_init__LocalVarInitPhase = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to local_var_init:LocalVarInitPhase:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to local_var_init:LocalVarInitPhase:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to local_var_init:LocalVarInitPhase:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to local_var_init:LocalVarInitPhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to local_var_init:LocalVarInitPhase:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to local_var_init:LocalVarInitPhase:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to local_var_init:LocalVarInitPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to local_var_init:LocalVarInitPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to local_var_init:LocalVarInitPhase:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#disabled */
(nitmethod_t)nit__modelbuilder___Phase___process_mainmodule, /* pointer to local_var_init:LocalVarInitPhase:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)nit___nit__Phase___process_nmodule, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nit__local_var_init___nit__local_var_init__LocalVarInitPhase___nit__phase__Phase__process_npropdef, /* pointer to local_var_init:LocalVarInitPhase:local_var_init#LocalVarInitPhase#process_npropdef */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to local_var_init:LocalVarInitPhase:phase#Phase#disabled= */
}
};
/* allocate LocalVarInitPhase */
val* NEW_nit__local_var_init__LocalVarInitPhase(const struct type* type) {
val* self /* : LocalVarInitPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__local_var_init__LocalVarInitPhase;
self->attrs[COLOR_nit__phase__Phase___disabled].s = 0; /* _disabled on <self:LocalVarInitPhase exact> */
return self;
}
/* runtime class nit__local_var_init__LocalVarInitVisitor */
const struct class class_nit__local_var_init__LocalVarInitVisitor = {
0, /* box_kind */
{
(nitmethod_t)nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___standard__kernel__Object__init, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to local_var_init:LocalVarInitVisitor:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to local_var_init:LocalVarInitVisitor:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to local_var_init:LocalVarInitVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to local_var_init:LocalVarInitVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to local_var_init:LocalVarInitVisitor:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__Visitor___enter_visit, /* pointer to local_var_init:LocalVarInitVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___nit__parser_nodes__Visitor__visit, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#visit */
(nitmethod_t)nit___nit__Visitor___current_node, /* pointer to local_var_init:LocalVarInitVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___toolcontext_61d, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#toolcontext= */
(nitmethod_t)nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___mark_is_unset, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#mark_is_unset */
(nitmethod_t)nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___maybe_unset_vars, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#maybe_unset_vars */
(nitmethod_t)nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___mark_is_set, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#mark_is_set */
(nitmethod_t)nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___check_is_set, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#check_is_set */
(nitmethod_t)nit__local_var_init___nit__local_var_init__LocalVarInitVisitor___toolcontext, /* pointer to local_var_init:LocalVarInitVisitor:local_var_init#LocalVarInitVisitor#toolcontext */
(nitmethod_t)standard___standard__Object___init, /* pointer to local_var_init:LocalVarInitVisitor:kernel#Object#init */
}
};
/* allocate LocalVarInitVisitor */
val* NEW_nit__local_var_init__LocalVarInitVisitor(const struct type* type) {
val* self /* : LocalVarInitVisitor */;
val* var /* : HashSet[Variable] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__local_var_init__LocalVarInitVisitor;
var = NEW_standard__HashSet(&type_standard__HashSet__nit__Variable);
{
standard___standard__HashSet___standard__kernel__Object__init(var); /* Direct call hash_collection#HashSet#init on <var:HashSet[Variable]>*/
}
self->attrs[COLOR_nit__local_var_init__LocalVarInitVisitor___maybe_unset_vars].val = var; /* _maybe_unset_vars on <self:LocalVarInitVisitor exact> */
return self;
}
/* runtime class nit__flow__FlowPhase */
const struct class class_nit__flow__FlowPhase = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to flow:FlowPhase:phase#Phase#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to flow:FlowPhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to flow:FlowPhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to flow:FlowPhase:phase#Phase#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to flow:FlowPhase:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to flow:FlowPhase:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to flow:FlowPhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to flow:FlowPhase:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to flow:FlowPhase:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to flow:FlowPhase:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to flow:FlowPhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to flow:FlowPhase:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to flow:FlowPhase:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to flow:FlowPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to flow:FlowPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to flow:FlowPhase:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to flow:FlowPhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to flow:FlowPhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to flow:FlowPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to flow:FlowPhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to flow:FlowPhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to flow:FlowPhase:phase#Phase#disabled */
(nitmethod_t)nit__modelbuilder___Phase___process_mainmodule, /* pointer to flow:FlowPhase:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)nit___nit__Phase___process_nmodule, /* pointer to flow:FlowPhase:phase#Phase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to flow:FlowPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to flow:FlowPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nit__flow___nit__flow__FlowPhase___nit__phase__Phase__process_npropdef, /* pointer to flow:FlowPhase:flow#FlowPhase#process_npropdef */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to flow:FlowPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to flow:FlowPhase:phase#Phase#disabled= */
}
};
/* allocate FlowPhase */
val* NEW_nit__flow__FlowPhase(const struct type* type) {
val* self /* : FlowPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__flow__FlowPhase;
self->attrs[COLOR_nit__phase__Phase___disabled].s = 0; /* _disabled on <self:FlowPhase exact> */
return self;
}
/* runtime class nit__flow__FlowVisitor */
const struct class class_nit__flow__FlowVisitor = {
0, /* box_kind */
{
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___standard__kernel__Object__init, /* pointer to flow:FlowVisitor:flow#FlowVisitor#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to flow:FlowVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to flow:FlowVisitor:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to flow:FlowVisitor:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to flow:FlowVisitor:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to flow:FlowVisitor:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to flow:FlowVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to flow:FlowVisitor:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to flow:FlowVisitor:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to flow:FlowVisitor:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to flow:FlowVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to flow:FlowVisitor:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to flow:FlowVisitor:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to flow:FlowVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to flow:FlowVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to flow:FlowVisitor:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__Visitor___enter_visit, /* pointer to flow:FlowVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___nit__parser_nodes__Visitor__visit, /* pointer to flow:FlowVisitor:flow#FlowVisitor#visit */
(nitmethod_t)nit___nit__Visitor___current_node, /* pointer to flow:FlowVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___toolcontext_61d, /* pointer to flow:FlowVisitor:flow#FlowVisitor#toolcontext= */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___flows, /* pointer to flow:FlowVisitor:flow#FlowVisitor#flows */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___current_flow_context, /* pointer to flow:FlowVisitor:flow#FlowVisitor#current_flow_context */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___first, /* pointer to flow:FlowVisitor:flow#FlowVisitor#first */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___first_61d, /* pointer to flow:FlowVisitor:flow#FlowVisitor#first= */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___make_sub_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_sub_flow */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___toolcontext, /* pointer to flow:FlowVisitor:flow#FlowVisitor#toolcontext */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___make_unreachable_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_unreachable_flow */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___merge_breaks, /* pointer to flow:FlowVisitor:flow#FlowVisitor#merge_breaks */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___visit_expr, /* pointer to flow:FlowVisitor:flow#FlowVisitor#visit_expr */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___current_flow_context_61d, /* pointer to flow:FlowVisitor:flow#FlowVisitor#current_flow_context= */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___make_merge_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_merge_flow */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___merge_continues_to, /* pointer to flow:FlowVisitor:flow#FlowVisitor#merge_continues_to */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___make_true_false_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_true_false_flow */
(nitmethod_t)nit__flow___nit__flow__FlowVisitor___make_sub_true_false_flow, /* pointer to flow:FlowVisitor:flow#FlowVisitor#make_sub_true_false_flow */
(nitmethod_t)standard___standard__Object___init, /* pointer to flow:FlowVisitor:kernel#Object#init */
}
};
/* allocate FlowVisitor */
val* NEW_nit__flow__FlowVisitor(const struct type* type) {
val* self /* : FlowVisitor */;
val* var /* : FlowContext */;
val* var1 /* : Array[FlowContext] */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__flow__FlowVisitor;
var = NEW_nit__FlowContext(&type_nit__FlowContext);
{
{ /* Inline kernel#Object#init (var) on <var:FlowContext> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__flow__FlowVisitor___current_flow_context].val = var; /* _current_flow_context on <self:FlowVisitor exact> */
var1 = NEW_standard__Array(&type_standard__Array__nit__FlowContext);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[FlowContext]>*/
}
self->attrs[COLOR_nit__flow__FlowVisitor___flows].val = var1; /* _flows on <self:FlowVisitor exact> */
return self;
}
/* runtime class nit__FlowContext */
const struct class class_nit__FlowContext = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to flow:FlowContext:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to flow:FlowContext:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to flow:FlowContext:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to flow:FlowContext:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to flow:FlowContext:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to flow:FlowContext:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to flow:FlowContext:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to flow:FlowContext:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to flow:FlowContext:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to flow:FlowContext:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to flow:FlowContext:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to flow:FlowContext:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to flow:FlowContext:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to flow:FlowContext:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to flow:FlowContext:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to flow:FlowContext:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__FlowContext___is_start_61d, /* pointer to flow:FlowContext:flow#FlowContext#is_start= */
(nitmethod_t)nit___nit__FlowContext___node, /* pointer to flow:FlowContext:flow#FlowContext#node */
(nitmethod_t)nit___nit__FlowContext___node_61d, /* pointer to flow:FlowContext:flow#FlowContext#node= */
(nitmethod_t)nit___nit__FlowContext___when_true, /* pointer to flow:FlowContext:flow#FlowContext#when_true */
(nitmethod_t)nit___nit__FlowContext___when_false, /* pointer to flow:FlowContext:flow#FlowContext#when_false */
(nitmethod_t)nit___nit__FlowContext___name_61d, /* pointer to flow:FlowContext:flow#FlowContext#name= */
(nitmethod_t)nit___nit__FlowContext___is_unreachable, /* pointer to flow:FlowContext:flow#FlowContext#is_unreachable */
(nitmethod_t)nit___nit__FlowContext___is_already_unreachable, /* pointer to flow:FlowContext:flow#FlowContext#is_already_unreachable */
(nitmethod_t)nit___nit__FlowContext___is_already_unreachable_61d, /* pointer to flow:FlowContext:flow#FlowContext#is_already_unreachable= */
(nitmethod_t)nit___nit__FlowContext___add_loop, /* pointer to flow:FlowContext:flow#FlowContext#add_loop */
(nitmethod_t)nit___nit__FlowContext___add_previous, /* pointer to flow:FlowContext:flow#FlowContext#add_previous */
(nitmethod_t)nit___nit__FlowContext___is_marked_unreachable, /* pointer to flow:FlowContext:flow#FlowContext#is_marked_unreachable */
(nitmethod_t)nit___nit__FlowContext___is_start, /* pointer to flow:FlowContext:flow#FlowContext#is_start */
(nitmethod_t)nit___nit__FlowContext___previous, /* pointer to flow:FlowContext:flow#FlowContext#previous */
(nitmethod_t)nit___nit__FlowContext___is_marked_unreachable_61d, /* pointer to flow:FlowContext:flow#FlowContext#is_marked_unreachable= */
(nitmethod_t)nit___nit__FlowContext___loops, /* pointer to flow:FlowContext:flow#FlowContext#loops */
(nitmethod_t)nit___nit__FlowContext___when_true_61d, /* pointer to flow:FlowContext:flow#FlowContext#when_true= */
(nitmethod_t)nit___nit__FlowContext___when_false_61d, /* pointer to flow:FlowContext:flow#FlowContext#when_false= */
(nitmethod_t)nit__typing___FlowContext___set_var, /* pointer to flow:FlowContext:typing#FlowContext#set_var */
(nitmethod_t)nit__typing___FlowContext___vars, /* pointer to flow:FlowContext:typing#FlowContext#vars */
(nitmethod_t)nit__typing___FlowContext___collect_types, /* pointer to flow:FlowContext:typing#FlowContext#collect_types */
(nitmethod_t)nit__local_var_init___FlowContext___set_vars, /* pointer to flow:FlowContext:local_var_init#FlowContext#set_vars */
(nitmethod_t)nit__local_var_init___FlowContext___is_variable_set, /* pointer to flow:FlowContext:local_var_init#FlowContext#is_variable_set */
}
};
/* allocate FlowContext */
val* NEW_nit__FlowContext(const struct type* type) {
val* self /* : FlowContext */;
val* var /* : Array[FlowContext] */;
val* var1 /* : Array[FlowContext] */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : HashSet[Variable] */;
val* var6 /* : HashMap[Variable, nullable MType] */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__FlowContext;
var = NEW_standard__Array(&type_standard__Array__nit__FlowContext);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[FlowContext]>*/
}
self->attrs[COLOR_nit__flow__FlowContext___previous].val = var; /* _previous on <self:FlowContext exact> */
var1 = NEW_standard__Array(&type_standard__Array__nit__FlowContext);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[FlowContext]>*/
}
self->attrs[COLOR_nit__flow__FlowContext___loops].val = var1; /* _loops on <self:FlowContext exact> */
self->attrs[COLOR_nit__flow__FlowContext___is_marked_unreachable].s = 0; /* _is_marked_unreachable on <self:FlowContext exact> */
self->attrs[COLOR_nit__flow__FlowContext___is_already_unreachable].s = 0; /* _is_already_unreachable on <self:FlowContext exact> */
self->attrs[COLOR_nit__flow__FlowContext___is_start].s = 0; /* _is_start on <self:FlowContext exact> */
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "";
var4 = standard___standard__NativeString___to_s_with_length(var3, 0l);
var2 = var4;
varonce = var2;
}
self->attrs[COLOR_nit__flow__FlowContext___name].val = var2; /* _name on <self:FlowContext exact> */
self->attrs[COLOR_nit__flow__FlowContext___when_true].val = self; /* _when_true on <self:FlowContext exact> */
self->attrs[COLOR_nit__flow__FlowContext___when_false].val = self; /* _when_false on <self:FlowContext exact> */
var5 = NEW_standard__HashSet(&type_standard__HashSet__nit__Variable);
{
standard___standard__HashSet___standard__kernel__Object__init(var5); /* Direct call hash_collection#HashSet#init on <var5:HashSet[Variable]>*/
}
self->attrs[COLOR_nit__local_var_init__FlowContext___set_vars].val = var5; /* _set_vars on <self:FlowContext exact> */
var6 = NEW_standard__HashMap(&type_standard__HashMap__nit__Variable__nullable__nit__MType);
{
standard___standard__HashMap___standard__kernel__Object__init(var6); /* Direct call hash_collection#HashMap#init on <var6:HashMap[Variable, nullable MType]>*/
}
self->attrs[COLOR_nit__typing__FlowContext___vars].val = var6; /* _vars on <self:FlowContext exact> */
return self;
}
/* runtime class nit__scope__ScopePhase */
const struct class class_nit__scope__ScopePhase = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to scope:ScopePhase:phase#Phase#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to scope:ScopePhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to scope:ScopePhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to scope:ScopePhase:phase#Phase#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to scope:ScopePhase:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to scope:ScopePhase:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to scope:ScopePhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to scope:ScopePhase:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to scope:ScopePhase:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to scope:ScopePhase:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to scope:ScopePhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to scope:ScopePhase:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to scope:ScopePhase:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to scope:ScopePhase:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to scope:ScopePhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to scope:ScopePhase:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to scope:ScopePhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to scope:ScopePhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to scope:ScopePhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to scope:ScopePhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to scope:ScopePhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to scope:ScopePhase:phase#Phase#disabled */
(nitmethod_t)nit__modelbuilder___Phase___process_mainmodule, /* pointer to scope:ScopePhase:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)nit___nit__Phase___process_nmodule, /* pointer to scope:ScopePhase:phase#Phase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to scope:ScopePhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to scope:ScopePhase:phase#Phase#process_annotated_node */
(nitmethod_t)nit__scope___nit__scope__ScopePhase___nit__phase__Phase__process_npropdef, /* pointer to scope:ScopePhase:scope#ScopePhase#process_npropdef */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to scope:ScopePhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to scope:ScopePhase:phase#Phase#disabled= */
}
};
/* allocate ScopePhase */
val* NEW_nit__scope__ScopePhase(const struct type* type) {
val* self /* : ScopePhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__scope__ScopePhase;
self->attrs[COLOR_nit__phase__Phase___disabled].s = 0; /* _disabled on <self:ScopePhase exact> */
return self;
}
/* runtime class nit__Variable */
const struct class class_nit__Variable = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__Variable___standard__kernel__Object__init, /* pointer to scope:Variable:scope#Variable#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to scope:Variable:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to scope:Variable:kernel#Object#sys */
(nitmethod_t)nit___nit__Variable___standard__string__Object__to_s, /* pointer to scope:Variable:scope#Variable#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to scope:Variable:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to scope:Variable:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to scope:Variable:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to scope:Variable:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to scope:Variable:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to scope:Variable:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to scope:Variable:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to scope:Variable:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to scope:Variable:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to scope:Variable:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to scope:Variable:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to scope:Variable:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__Variable___name_61d, /* pointer to scope:Variable:scope#Variable#name= */
(nitmethod_t)nit___nit__Variable___name, /* pointer to scope:Variable:scope#Variable#name */
(nitmethod_t)nit___nit__Variable___warn_unread, /* pointer to scope:Variable:scope#Variable#warn_unread */
(nitmethod_t)nit___nit__Variable___location, /* pointer to scope:Variable:scope#Variable#location */
(nitmethod_t)nit__typing___Variable___declared_type_61d, /* pointer to scope:Variable:typing#Variable#declared_type= */
(nitmethod_t)nit___nit__Variable___warn_unread_61d, /* pointer to scope:Variable:scope#Variable#warn_unread= */
(nitmethod_t)nit__typing___Variable___declared_type, /* pointer to scope:Variable:typing#Variable#declared_type */
(nitmethod_t)nit___nit__Variable___location_61d, /* pointer to scope:Variable:scope#Variable#location= */
(nitmethod_t)nit__typing___Variable___is_adapted, /* pointer to scope:Variable:typing#Variable#is_adapted */
(nitmethod_t)nit__typing___Variable___is_adapted_61d, /* pointer to scope:Variable:typing#Variable#is_adapted= */
(nitmethod_t)standard___standard__Object___init, /* pointer to scope:Variable:kernel#Object#init */
}
};
/* allocate Variable */
val* NEW_nit__Variable(const struct type* type) {
val* self /* : Variable */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__Variable;
self->attrs[COLOR_nit__scope__Variable___warn_unread].s = 0; /* _warn_unread on <self:Variable exact> */
self->attrs[COLOR_nit__typing__Variable___is_adapted].s = 0; /* _is_adapted on <self:Variable exact> */
return self;
}
/* runtime class nit__EscapeMark */
const struct class class_nit__EscapeMark = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__EscapeMark___standard__kernel__Object__init, /* pointer to scope:EscapeMark:scope#EscapeMark#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to scope:EscapeMark:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to scope:EscapeMark:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to scope:EscapeMark:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to scope:EscapeMark:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to scope:EscapeMark:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to scope:EscapeMark:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to scope:EscapeMark:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to scope:EscapeMark:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to scope:EscapeMark:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to scope:EscapeMark:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to scope:EscapeMark:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to scope:EscapeMark:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to scope:EscapeMark:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to scope:EscapeMark:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to scope:EscapeMark:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__EscapeMark___escapes, /* pointer to scope:EscapeMark:scope#EscapeMark#escapes */
(nitmethod_t)nit___nit__EscapeMark___continue_mark, /* pointer to scope:EscapeMark:scope#EscapeMark#continue_mark */
(nitmethod_t)nit___nit__EscapeMark___name_61d, /* pointer to scope:EscapeMark:scope#EscapeMark#name= */
(nitmethod_t)nit___nit__EscapeMark___continue_mark_61d, /* pointer to scope:EscapeMark:scope#EscapeMark#continue_mark= */
(nitmethod_t)nit___nit__EscapeMark___name, /* pointer to scope:EscapeMark:scope#EscapeMark#name */
(nitmethod_t)standard___standard__Object___init, /* pointer to scope:EscapeMark:kernel#Object#init */
}
};
/* allocate EscapeMark */
val* NEW_nit__EscapeMark(const struct type* type) {
val* self /* : EscapeMark */;
val* var /* : Array[AEscapeExpr] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__EscapeMark;
var = NEW_standard__Array(&type_standard__Array__nit__AEscapeExpr);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[AEscapeExpr]>*/
}
self->attrs[COLOR_nit__scope__EscapeMark___escapes].val = var; /* _escapes on <self:EscapeMark exact> */
return self;
}
/* runtime class nit__scope__ScopeVisitor */
const struct class class_nit__scope__ScopeVisitor = {
0, /* box_kind */
{
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___standard__kernel__Object__init, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to scope:ScopeVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to scope:ScopeVisitor:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to scope:ScopeVisitor:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to scope:ScopeVisitor:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to scope:ScopeVisitor:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to scope:ScopeVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to scope:ScopeVisitor:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to scope:ScopeVisitor:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to scope:ScopeVisitor:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to scope:ScopeVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to scope:ScopeVisitor:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to scope:ScopeVisitor:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to scope:ScopeVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to scope:ScopeVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to scope:ScopeVisitor:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__Visitor___enter_visit, /* pointer to scope:ScopeVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___nit__parser_nodes__Visitor__visit, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#visit */
(nitmethod_t)nit___nit__Visitor___current_node, /* pointer to scope:ScopeVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___toolcontext_61d, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#toolcontext= */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___shift_scope, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#shift_scope */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___scopes, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#scopes */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___toolcontext, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#toolcontext */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___register_variable, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#register_variable */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___get_escapemark, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#get_escapemark */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___error, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#error */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___search_variable, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#search_variable */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___selfvariable, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#selfvariable */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___make_escape_mark, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#make_escape_mark */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___enter_visit_block, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#enter_visit_block */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___search_label, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#search_label */
(nitmethod_t)standard___standard__Object___init, /* pointer to scope:ScopeVisitor:kernel#Object#init */
}
};
/* allocate ScopeVisitor */
val* NEW_nit__scope__ScopeVisitor(const struct type* type) {
val* self /* : ScopeVisitor */;
val* var /* : Variable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var4 /* : List[Scope] */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__scope__ScopeVisitor;
var = NEW_nit__Variable(&type_nit__Variable);
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "self";
var3 = standard___standard__NativeString___to_s_with_length(var2, 4l);
var1 = var3;
varonce = var1;
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nit__scope__Variable__name_61d]))(var, var1); /* name= on <var:Variable>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:Variable>*/
}
self->attrs[COLOR_nit__scope__ScopeVisitor___selfvariable].val = var; /* _selfvariable on <self:ScopeVisitor exact> */
var4 = NEW_standard__List(&type_standard__List__nit__scope__Scope);
{
{ /* Inline list#List#init (var4) on <var4:List[Scope]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val = var4; /* _scopes on <self:ScopeVisitor exact> */
return self;
}
/* runtime class nit__scope__Scope */
const struct class class_nit__scope__Scope = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to scope:Scope:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to scope:Scope:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to scope:Scope:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to scope:Scope:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to scope:Scope:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to scope:Scope:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to scope:Scope:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to scope:Scope:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to scope:Scope:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to scope:Scope:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to scope:Scope:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to scope:Scope:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to scope:Scope:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to scope:Scope:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to scope:Scope:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to scope:Scope:light_c#Object#from_c_call_context */
(nitmethod_t)nit__scope___nit__scope__Scope___variables, /* pointer to scope:Scope:scope#Scope#variables */
(nitmethod_t)nit__scope___nit__scope__Scope___escapemark, /* pointer to scope:Scope:scope#Scope#escapemark */
(nitmethod_t)nit__scope___nit__scope__Scope___get_variable, /* pointer to scope:Scope:scope#Scope#get_variable */
(nitmethod_t)nit__scope___nit__scope__Scope___escapemark_61d, /* pointer to scope:Scope:scope#Scope#escapemark= */
}
};
/* allocate Scope */
val* NEW_nit__scope__Scope(const struct type* type) {
val* self /* : Scope */;
val* var /* : HashMap[String, Variable] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__scope__Scope;
var = NEW_standard__HashMap(&type_standard__HashMap__standard__String__nit__Variable);
{
standard___standard__HashMap___standard__kernel__Object__init(var); /* Direct call hash_collection#HashMap#init on <var:HashMap[String, Variable]>*/
}
self->attrs[COLOR_nit__scope__Scope___variables].val = var; /* _variables on <self:Scope exact> */
return self;
}
/* runtime class nit__ASTValidationVisitor */
const struct class class_nit__ASTValidationVisitor = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to astvalidation:ASTValidationVisitor:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to astvalidation:ASTValidationVisitor:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to astvalidation:ASTValidationVisitor:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to astvalidation:ASTValidationVisitor:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to astvalidation:ASTValidationVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to astvalidation:ASTValidationVisitor:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to astvalidation:ASTValidationVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to astvalidation:ASTValidationVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to astvalidation:ASTValidationVisitor:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__Visitor___enter_visit, /* pointer to astvalidation:ASTValidationVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)nit___nit__ASTValidationVisitor___nit__parser_nodes__Visitor__visit, /* pointer to astvalidation:ASTValidationVisitor:astvalidation#ASTValidationVisitor#visit */
(nitmethod_t)nit___nit__Visitor___current_node, /* pointer to astvalidation:ASTValidationVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)nit___nit__ASTValidationVisitor___path, /* pointer to astvalidation:ASTValidationVisitor:astvalidation#ASTValidationVisitor#path */
(nitmethod_t)nit___nit__ASTValidationVisitor___seen, /* pointer to astvalidation:ASTValidationVisitor:astvalidation#ASTValidationVisitor#seen */
}
};
/* allocate ASTValidationVisitor */
val* NEW_nit__ASTValidationVisitor(const struct type* type) {
val* self /* : ASTValidationVisitor */;
val* var /* : List[ANode] */;
val* var1 /* : HashSet[ANode] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ASTValidationVisitor;
var = NEW_standard__List(&type_standard__List__nit__ANode);
{
{ /* Inline list#List#init (var) on <var:List[ANode]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__astvalidation__ASTValidationVisitor___path].val = var; /* _path on <self:ASTValidationVisitor exact> */
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__ANode);
{
standard___standard__HashSet___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashSet#init on <var1:HashSet[ANode]>*/
}
self->attrs[COLOR_nit__astvalidation__ASTValidationVisitor___seen].val = var1; /* _seen on <self:ASTValidationVisitor exact> */
return self;
}
/* runtime class nit__auto_super_init__AutoSuperInitPhase */
const struct class class_nit__auto_super_init__AutoSuperInitPhase = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to auto_super_init:AutoSuperInitPhase:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to auto_super_init:AutoSuperInitPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to auto_super_init:AutoSuperInitPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to auto_super_init:AutoSuperInitPhase:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#disabled */
(nitmethod_t)nit__modelbuilder___Phase___process_mainmodule, /* pointer to auto_super_init:AutoSuperInitPhase:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)nit___nit__Phase___process_nmodule, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nit__auto_super_init___nit__auto_super_init__AutoSuperInitPhase___nit__phase__Phase__process_npropdef, /* pointer to auto_super_init:AutoSuperInitPhase:auto_super_init#AutoSuperInitPhase#process_npropdef */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#disabled= */
}
};
/* allocate AutoSuperInitPhase */
val* NEW_nit__auto_super_init__AutoSuperInitPhase(const struct type* type) {
val* self /* : AutoSuperInitPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__auto_super_init__AutoSuperInitPhase;
self->attrs[COLOR_nit__phase__Phase___disabled].s = 0; /* _disabled on <self:AutoSuperInitPhase exact> */
return self;
}
/* runtime class nit__auto_super_init__AutoSuperInitVisitor */
const struct class class_nit__auto_super_init__AutoSuperInitVisitor = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to auto_super_init:AutoSuperInitVisitor:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to auto_super_init:AutoSuperInitVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to auto_super_init:AutoSuperInitVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to auto_super_init:AutoSuperInitVisitor:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__Visitor___enter_visit, /* pointer to auto_super_init:AutoSuperInitVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)nit__auto_super_init___nit__auto_super_init__AutoSuperInitVisitor___nit__parser_nodes__Visitor__visit, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#visit */
(nitmethod_t)nit___nit__Visitor___current_node, /* pointer to auto_super_init:AutoSuperInitVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)nit__auto_super_init___nit__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#has_explicit_super_init */
(nitmethod_t)nit__auto_super_init___nit__auto_super_init__AutoSuperInitVisitor___is_broken, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#is_broken */
(nitmethod_t)nit__auto_super_init___nit__auto_super_init__AutoSuperInitVisitor___is_broken_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#is_broken= */
(nitmethod_t)nit__auto_super_init___nit__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= */
}
};
/* allocate AutoSuperInitVisitor */
val* NEW_nit__auto_super_init__AutoSuperInitVisitor(const struct type* type) {
val* self /* : AutoSuperInitVisitor */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__auto_super_init__AutoSuperInitVisitor;
self->attrs[COLOR_nit__auto_super_init__AutoSuperInitVisitor___is_broken].s = 0; /* _is_broken on <self:AutoSuperInitVisitor exact> */
return self;
}
/* runtime class nit__RapidTypeAnalysis */
const struct class class_nit__RapidTypeAnalysis = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__RapidTypeAnalysis___standard__kernel__Object__init, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to rapid_type_analysis:RapidTypeAnalysis:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to rapid_type_analysis:RapidTypeAnalysis:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to rapid_type_analysis:RapidTypeAnalysis:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to rapid_type_analysis:RapidTypeAnalysis:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__RapidTypeAnalysis___modelbuilder_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#modelbuilder= */
(nitmethod_t)nit___nit__RapidTypeAnalysis___mainmodule_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#mainmodule= */
(nitmethod_t)nit___nit__RapidTypeAnalysis___run_analysis, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#run_analysis */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_methods_to_tree, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_methods_to_tree */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_types_to_csv, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_types_to_csv */
(nitmethod_t)nit___nit__RapidTypeAnalysis___mainmodule, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#mainmodule */
(nitmethod_t)nit___nit__RapidTypeAnalysis___add_new, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_new */
(nitmethod_t)nit___nit__RapidTypeAnalysis___add_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_send */
(nitmethod_t)nit___nit__RapidTypeAnalysis___force_alive, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#force_alive */
(nitmethod_t)nit___nit__RapidTypeAnalysis___todo, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#todo */
(nitmethod_t)nit___nit__RapidTypeAnalysis___modelbuilder, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#modelbuilder */
(nitmethod_t)nit___nit__RapidTypeAnalysis___add_cast, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_cast */
(nitmethod_t)nit___nit__RapidTypeAnalysis___add_super_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_super_send */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_types */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_open_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_open_types */
(nitmethod_t)nit___nit__RapidTypeAnalysis___check_depth, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#check_depth */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_open_cast_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_cast_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_cast_types */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_methods, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_methods */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_methoddefs, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_methoddefs */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_super_sends, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_super_sends */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_classes, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_classes */
(nitmethod_t)nit___nit__RapidTypeAnalysis___totry_methods, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#totry_methods */
(nitmethod_t)nit___nit__RapidTypeAnalysis___try_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#try_send */
(nitmethod_t)nit___nit__RapidTypeAnalysis___try_super_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#try_super_send */
(nitmethod_t)nit___nit__RapidTypeAnalysis___totry_methods_to_remove, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#totry_methods_to_remove */
(nitmethod_t)nit___nit__RapidTypeAnalysis___try_methods, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#try_methods */
(nitmethod_t)nit___nit__RapidTypeAnalysis___add_call, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_call */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_callsites, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_callsites */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_targets, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_targets */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_targets_cache, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_targets_cache */
(nitmethod_t)standard___standard__Object___init, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#init */
}
};
/* allocate RapidTypeAnalysis */
val* NEW_nit__RapidTypeAnalysis(const struct type* type) {
val* self /* : RapidTypeAnalysis */;
val* var /* : HashSet[MClassType] */;
val* var1 /* : HashSet[MClassType] */;
val* var2 /* : HashSet[MClass] */;
val* var3 /* : HashSet[MType] */;
val* var4 /* : HashSet[MType] */;
val* var5 /* : HashSet[MMethodDef] */;
val* var6 /* : HashSet[MMethod] */;
val* var7 /* : HashSet[CallSite] */;
val* var8 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var9 /* : HashSet[MMethodDef] */;
val* var10 /* : HashSet[MMethod] */;
val* var11 /* : Array[MMethod] */;
val* var12 /* : HashSet[MMethod] */;
val* var13 /* : List[MMethodDef] */;
self = nit_alloc(sizeof(struct instance) + 16*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__RapidTypeAnalysis;
var = NEW_standard__HashSet(&type_standard__HashSet__nit__MClassType);
{
standard___standard__HashSet___standard__kernel__Object__init(var); /* Direct call hash_collection#HashSet#init on <var:HashSet[MClassType]>*/
}
self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_types].val = var; /* _live_types on <self:RapidTypeAnalysis exact> */
var1 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClassType);
{
standard___standard__HashSet___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashSet#init on <var1:HashSet[MClassType]>*/
}
self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val = var1; /* _live_open_types on <self:RapidTypeAnalysis exact> */
var2 = NEW_standard__HashSet(&type_standard__HashSet__nit__MClass);
{
standard___standard__HashSet___standard__kernel__Object__init(var2); /* Direct call hash_collection#HashSet#init on <var2:HashSet[MClass]>*/
}
self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_classes].val = var2; /* _live_classes on <self:RapidTypeAnalysis exact> */
var3 = NEW_standard__HashSet(&type_standard__HashSet__nit__MType);
{
standard___standard__HashSet___standard__kernel__Object__init(var3); /* Direct call hash_collection#HashSet#init on <var3:HashSet[MType]>*/
}
self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val = var3; /* _live_cast_types on <self:RapidTypeAnalysis exact> */
var4 = NEW_standard__HashSet(&type_standard__HashSet__nit__MType);
{
standard___standard__HashSet___standard__kernel__Object__init(var4); /* Direct call hash_collection#HashSet#init on <var4:HashSet[MType]>*/
}
self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val = var4; /* _live_open_cast_types on <self:RapidTypeAnalysis exact> */
var5 = NEW_standard__HashSet(&type_standard__HashSet__nit__MMethodDef);
{
standard___standard__HashSet___standard__kernel__Object__init(var5); /* Direct call hash_collection#HashSet#init on <var5:HashSet[MMethodDef]>*/
}
self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val = var5; /* _live_methoddefs on <self:RapidTypeAnalysis exact> */
var6 = NEW_standard__HashSet(&type_standard__HashSet__nit__MMethod);
{
standard___standard__HashSet___standard__kernel__Object__init(var6); /* Direct call hash_collection#HashSet#init on <var6:HashSet[MMethod]>*/
}
self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_methods].val = var6; /* _live_methods on <self:RapidTypeAnalysis exact> */
var7 = NEW_standard__HashSet(&type_standard__HashSet__nit__CallSite);
{
standard___standard__HashSet___standard__kernel__Object__init(var7); /* Direct call hash_collection#HashSet#init on <var7:HashSet[CallSite]>*/
}
self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_callsites].val = var7; /* _live_callsites on <self:RapidTypeAnalysis exact> */
var8 = NEW_more_collections__HashMap2(&type_more_collections__HashMap2__nit__MType__nit__MProperty__standard__Set__nit__MMethodDef);
{
{ /* Inline kernel#Object#init (var8) on <var8:HashMap2[MType, MProperty, Set[MMethodDef]]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_targets_cache].val = var8; /* _live_targets_cache on <self:RapidTypeAnalysis exact> */
var9 = NEW_standard__HashSet(&type_standard__HashSet__nit__MMethodDef);
{
standard___standard__HashSet___standard__kernel__Object__init(var9); /* Direct call hash_collection#HashSet#init on <var9:HashSet[MMethodDef]>*/
}
self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val = var9; /* _live_super_sends on <self:RapidTypeAnalysis exact> */
var10 = NEW_standard__HashSet(&type_standard__HashSet__nit__MMethod);
{
standard___standard__HashSet___standard__kernel__Object__init(var10); /* Direct call hash_collection#HashSet#init on <var10:HashSet[MMethod]>*/
}
self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___totry_methods].val = var10; /* _totry_methods on <self:RapidTypeAnalysis exact> */
var11 = NEW_standard__Array(&type_standard__Array__nit__MMethod);
{
standard___standard__Array___standard__kernel__Object__init(var11); /* Direct call array#Array#init on <var11:Array[MMethod]>*/
}
self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val = var11; /* _totry_methods_to_remove on <self:RapidTypeAnalysis exact> */
var12 = NEW_standard__HashSet(&type_standard__HashSet__nit__MMethod);
{
standard___standard__HashSet___standard__kernel__Object__init(var12); /* Direct call hash_collection#HashSet#init on <var12:HashSet[MMethod]>*/
}
self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___try_methods].val = var12; /* _try_methods on <self:RapidTypeAnalysis exact> */
var13 = NEW_standard__List(&type_standard__List__nit__MMethodDef);
{
{ /* Inline list#List#init (var13) on <var13:List[MMethodDef]> */
RET_LABEL14:(void)0;
}
}
self->attrs[COLOR_nit__rapid_type_analysis__RapidTypeAnalysis___todo].val = var13; /* _todo on <self:RapidTypeAnalysis exact> */
return self;
}
/* runtime class nit__RapidTypeVisitor */
const struct class class_nit__RapidTypeVisitor = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__RapidTypeVisitor___standard__kernel__Object__init, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to rapid_type_analysis:RapidTypeVisitor:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to rapid_type_analysis:RapidTypeVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to rapid_type_analysis:RapidTypeVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to rapid_type_analysis:RapidTypeVisitor:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__Visitor___enter_visit, /* pointer to rapid_type_analysis:RapidTypeVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)nit___nit__RapidTypeVisitor___nit__parser_nodes__Visitor__visit, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#visit */
(nitmethod_t)nit___nit__Visitor___current_node, /* pointer to rapid_type_analysis:RapidTypeVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)nit___nit__RapidTypeVisitor___analysis_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#analysis= */
(nitmethod_t)nit___nit__RapidTypeVisitor___receiver_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#receiver= */
(nitmethod_t)nit___nit__RapidTypeVisitor___mpropdef_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#mpropdef= */
(nitmethod_t)nit___nit__RapidTypeVisitor___add_type, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#add_type */
(nitmethod_t)nit___nit__RapidTypeVisitor___add_monomorphic_send, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send */
(nitmethod_t)nit___nit__RapidTypeVisitor___receiver, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#receiver */
(nitmethod_t)nit___nit__RapidTypeVisitor___add_callsite, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#add_callsite */
(nitmethod_t)nit___nit__RapidTypeVisitor___add_cast_type, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#add_cast_type */
(nitmethod_t)nit___nit__RapidTypeVisitor___analysis, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#analysis */
(nitmethod_t)nit___nit__RapidTypeVisitor___get_method, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#get_method */
(nitmethod_t)nit___nit__RapidTypeVisitor___cleanup_type, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#cleanup_type */
(nitmethod_t)standard___standard__Object___init, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#init */
}
};
/* allocate RapidTypeVisitor */
val* NEW_nit__RapidTypeVisitor(const struct type* type) {
val* self /* : RapidTypeVisitor */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__RapidTypeVisitor;
return self;
}
/* runtime class csv__CsvFormat */
const struct class class_csv__CsvFormat = {
0, /* box_kind */
{
(nitmethod_t)csv___csv__CsvFormat___standard__kernel__Object__init, /* pointer to csv:CsvFormat:csv#CsvFormat#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to csv:CsvFormat:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to csv:CsvFormat:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to csv:CsvFormat:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to csv:CsvFormat:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to csv:CsvFormat:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to csv:CsvFormat:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to csv:CsvFormat:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to csv:CsvFormat:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to csv:CsvFormat:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to csv:CsvFormat:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to csv:CsvFormat:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to csv:CsvFormat:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to csv:CsvFormat:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to csv:CsvFormat:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to csv:CsvFormat:light_c#Object#from_c_call_context */
(nitmethod_t)csv___csv__CsvFormat___delimiter, /* pointer to csv:CsvFormat:csv#CsvFormat#delimiter */
(nitmethod_t)csv___csv__CsvFormat___delimiter_61d, /* pointer to csv:CsvFormat:csv#CsvFormat#delimiter= */
(nitmethod_t)csv___csv__CsvFormat___separator_61d, /* pointer to csv:CsvFormat:csv#CsvFormat#separator= */
(nitmethod_t)csv___csv__CsvFormat___eol_61d, /* pointer to csv:CsvFormat:csv#CsvFormat#eol= */
(nitmethod_t)csv___csv__CsvFormat___separator, /* pointer to csv:CsvFormat:csv#CsvFormat#separator */
(nitmethod_t)csv___csv__CsvFormat___eol, /* pointer to csv:CsvFormat:csv#CsvFormat#eol */
(nitmethod_t)csv___csv__CsvFormat___is_value_clean, /* pointer to csv:CsvFormat:csv#CsvFormat#is_value_clean */
(nitmethod_t)csv___csv__CsvFormat___escape_cell, /* pointer to csv:CsvFormat:csv#CsvFormat#escape_cell */
(nitmethod_t)csv___csv__CsvFormat___escaping, /* pointer to csv:CsvFormat:csv#CsvFormat#escaping */
(nitmethod_t)standard___standard__Object___init, /* pointer to csv:CsvFormat:kernel#Object#init */
}
};
/* allocate CsvFormat */
val* NEW_csv__CsvFormat(const struct type* type) {
val* self /* : CsvFormat */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_csv__CsvFormat;
return self;
}
/* runtime class csv__CsvDocument */
const struct class class_csv__CsvDocument = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to csv:CsvDocument:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to csv:CsvDocument:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to csv:CsvDocument:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to csv:CsvDocument:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to csv:CsvDocument:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to csv:CsvDocument:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to csv:CsvDocument:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to csv:CsvDocument:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to csv:CsvDocument:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to csv:CsvDocument:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to csv:CsvDocument:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to csv:CsvDocument:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to csv:CsvDocument:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to csv:CsvDocument:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to csv:CsvDocument:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to csv:CsvDocument:light_c#Object#from_c_call_context */
(nitmethod_t)csv___csv__CsvDocument___format_61d, /* pointer to csv:CsvDocument:csv#CsvDocument#format= */
(nitmethod_t)csv___csv__CsvDocument___header_61d, /* pointer to csv:CsvDocument:csv#CsvDocument#header= */
(nitmethod_t)csv___csv__CsvDocument___add_record, /* pointer to csv:CsvDocument:csv#CsvDocument#add_record */
(nitmethod_t)csv___csv__CsvDocument___format, /* pointer to csv:CsvDocument:csv#CsvDocument#format */
(nitmethod_t)csv___csv__CsvDocument___header, /* pointer to csv:CsvDocument:csv#CsvDocument#header */
(nitmethod_t)csv___csv__CsvDocument___records, /* pointer to csv:CsvDocument:csv#CsvDocument#records */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)standard__file___Writable___write_to_file, /* pointer to csv:CsvDocument:file#Writable#write_to_file */
(nitmethod_t)csv___csv__CsvDocument___standard__stream__Writable__write_to, /* pointer to csv:CsvDocument:csv#CsvDocument#write_to */
}
};
/* allocate CsvDocument */
val* NEW_csv__CsvDocument(const struct type* type) {
val* self /* : CsvDocument */;
val* var /* : Sys */;
val* var1 /* : CsvFormat */;
val* var2 /* : Array[String] */;
val* var3 /* : Array[Array[String]] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_csv__CsvDocument;
var = glob_sys;
{
var1 = csv___standard__Sys___rfc4180(var);
}
self->attrs[COLOR_csv__CsvDocument___format].val = var1; /* _format on <self:CsvDocument exact> */
var2 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[String]>*/
}
self->attrs[COLOR_csv__CsvDocument___header].val = var2; /* _header on <self:CsvDocument exact> */
var3 = NEW_standard__Array(&type_standard__Array__standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[Array[String]]>*/
}
self->attrs[COLOR_csv__CsvDocument___records].val = var3; /* _records on <self:CsvDocument exact> */
return self;
}
/* runtime class csv__CsvWriter */
const struct class class_csv__CsvWriter = {
0, /* box_kind */
{
(nitmethod_t)csv___csv__CsvWriter___standard__kernel__Object__init, /* pointer to csv:CsvWriter:csv#CsvWriter#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to csv:CsvWriter:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to csv:CsvWriter:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to csv:CsvWriter:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to csv:CsvWriter:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to csv:CsvWriter:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to csv:CsvWriter:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to csv:CsvWriter:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to csv:CsvWriter:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to csv:CsvWriter:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to csv:CsvWriter:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to csv:CsvWriter:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to csv:CsvWriter:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to csv:CsvWriter:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to csv:CsvWriter:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to csv:CsvWriter:light_c#Object#from_c_call_context */
(nitmethod_t)csv___csv__CsvWriter___with_format, /* pointer to csv:CsvWriter:csv#CsvWriter#with_format */
(nitmethod_t)csv___csv__CsvWriter___write_sequence, /* pointer to csv:CsvWriter:csv#CsvWriter#write_sequence */
(nitmethod_t)csv___csv__CsvWriter___ostream_61d, /* pointer to csv:CsvWriter:csv#CsvWriter#ostream= */
(nitmethod_t)csv___csv__CsvWriter___format_61d, /* pointer to csv:CsvWriter:csv#CsvWriter#format= */
(nitmethod_t)csv___csv__CsvWriter___format, /* pointer to csv:CsvWriter:csv#CsvWriter#format */
(nitmethod_t)csv___csv__CsvWriter___write_cell, /* pointer to csv:CsvWriter:csv#CsvWriter#write_cell */
(nitmethod_t)csv___csv__CsvWriter___ostream, /* pointer to csv:CsvWriter:csv#CsvWriter#ostream */
(nitmethod_t)csv___csv__CsvWriter___always_escape, /* pointer to csv:CsvWriter:csv#CsvWriter#always_escape */
(nitmethod_t)standard___standard__Object___init, /* pointer to csv:CsvWriter:kernel#Object#init */
}
};
/* allocate CsvWriter */
val* NEW_csv__CsvWriter(const struct type* type) {
val* self /* : CsvWriter */;
val* var /* : Sys */;
val* var1 /* : CsvFormat */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_csv__CsvWriter;
var = glob_sys;
{
var1 = csv___standard__Sys___rfc4180(var);
}
self->attrs[COLOR_csv__CsvWriter___format].val = var1; /* _format on <self:CsvWriter exact> */
self->attrs[COLOR_csv__CsvWriter___always_escape].s = 0; /* _always_escape on <self:CsvWriter exact> */
return self;
}
/* runtime class csv__CsvReader */
/* allocate CsvReader */
val* NEW_csv__CsvReader(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CsvReader is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__ErasureCompilerPhase */
const struct class class_nit__ErasureCompilerPhase = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#disabled */
(nitmethod_t)nit___nit__ErasureCompilerPhase___nit__modelbuilder__Phase__process_mainmodule, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:separate_erasure_compiler#ErasureCompilerPhase#process_mainmodule */
(nitmethod_t)nit___nit__Phase___process_nmodule, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nit___nit__Phase___process_npropdef, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#process_npropdef */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#disabled= */
}
};
/* allocate ErasureCompilerPhase */
val* NEW_nit__ErasureCompilerPhase(const struct type* type) {
val* self /* : ErasureCompilerPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ErasureCompilerPhase;
self->attrs[COLOR_nit__phase__Phase___disabled].s = 0; /* _disabled on <self:ErasureCompilerPhase exact> */
return self;
}
/* runtime class nit__SeparateErasureCompiler */
const struct class class_nit__SeparateErasureCompiler = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__SeparateErasureCompiler___standard__kernel__Object__init, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__AbstractCompiler___init_count_type_test_tags, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#init_count_type_test_tags */
(nitmethod_t)nit___nit__AbstractCompiler___mainmodule_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#mainmodule= */
(nitmethod_t)nit___nit__AbstractCompiler___modelbuilder_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#modelbuilder= */
(nitmethod_t)nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__do_compilation, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#do_compilation */
(nitmethod_t)nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__display_stats, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#display_stats */
(nitmethod_t)nit___nit__AbstractCompiler___new_file, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#new_file */
(nitmethod_t)nit___nit__AbstractCompiler___header_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#header= */
(nitmethod_t)nit___nit__AbstractCompiler___count_type_test_tags, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_tags */
(nitmethod_t)nit___nit__AbstractCompiler___compile_header, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#compile_header */
(nitmethod_t)nit___nit__AbstractCompiler___mainmodule, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#mainmodule */
(nitmethod_t)nit___nit__AbstractCompiler___modelbuilder, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#modelbuilder */
(nitmethod_t)nit___nit__AbstractCompiler___compile_nitni_global_ref_functions, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#compile_nitni_global_ref_functions */
(nitmethod_t)nit___nit__AbstractCompiler___compile_main_function, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#compile_main_function */
(nitmethod_t)nit___nit__AbstractCompiler___compile_finalizer_function, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#compile_finalizer_function */
(nitmethod_t)nit___nit__AbstractCompiler___target_platform, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#target_platform */
(nitmethod_t)nit___nit__AbstractCompiler___toolchain_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#toolchain= */
(nitmethod_t)nit___nit__AbstractCompiler___realmainmodule_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#realmainmodule= */
(nitmethod_t)nit___nit__AbstractCompiler___target_platform_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#target_platform= */
(nitmethod_t)nit___nit__AbstractCompiler___files, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#files */
(nitmethod_t)nit___nit__AbstractCompiler___header, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#header */
(nitmethod_t)nit___nit__SeparateErasureCompiler___nit__abstract_compiler__AbstractCompiler__compile_header_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#compile_header_structs */
(nitmethod_t)nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__compile_nitni_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_nitni_structs */
(nitmethod_t)nit___nit__SeparateErasureCompiler___nit__abstract_compiler__AbstractCompiler__new_visitor, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#new_visitor */
(nitmethod_t)nit___nit__AbstractCompiler___provide_declaration, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#provide_declaration */
(nitmethod_t)nit___nit__AbstractCompiler___generate_init_attr, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#generate_init_attr */
(nitmethod_t)nit___nit__AbstractCompiler___count_type_test_resolved, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_resolved */
(nitmethod_t)nit___nit__AbstractCompiler___count_type_test_unresolved, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_unresolved */
(nitmethod_t)nit___nit__AbstractCompiler___count_type_test_skipped, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_skipped */
(nitmethod_t)nit___nit__AbstractCompiler___linker_script, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#linker_script */
(nitmethod_t)nit___nit__AbstractCompiler___requirers_of_declarations, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#requirers_of_declarations */
(nitmethod_t)nit___nit__AbstractCompiler___provided_declarations, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#provided_declarations */
(nitmethod_t)nit___nit__AbstractCompiler___realmainmodule, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#realmainmodule */
(nitmethod_t)nit___nit__AbstractCompiler___names, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#names */
(nitmethod_t)nit___nit__AbstractCompiler___build_c_to_nit_bindings, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#build_c_to_nit_bindings */
(nitmethod_t)nit___nit__AbstractCompiler___extern_bodies, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#extern_bodies */
(nitmethod_t)nit___nit__AbstractCompiler___files_to_copy, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#files_to_copy */
(nitmethod_t)nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__finalize_ffi_for_module, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#finalize_ffi_for_module */
(nitmethod_t)nit___nit__AbstractCompiler___toolchain, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#toolchain */
(nitmethod_t)nit___nit__AbstractCompiler___seen_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#seen_extern */
(nitmethod_t)nit___nit__SeparateCompiler___runtime_type_analysis_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis= */
(nitmethod_t)nit___nit__SeparateCompiler___compile_box_kinds, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_box_kinds */
(nitmethod_t)nit___nit__SeparateCompiler___do_property_coloring, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#do_property_coloring */
(nitmethod_t)nit___nit__SeparateCompiler___compile_class_infos, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_class_infos */
(nitmethod_t)nit___nit__SeparateErasureCompiler___nit__separate_compiler__SeparateCompiler__compile_class_to_c, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#compile_class_to_c */
(nitmethod_t)nit___nit__SeparateCompiler___link_mmethods, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#link_mmethods */
(nitmethod_t)nit___nit__SeparateCompiler___compile_module_to_c, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_module_to_c */
(nitmethod_t)nit___nit__SeparateErasureCompiler___nit__separate_compiler__SeparateCompiler__compile_types, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#compile_types */
(nitmethod_t)nit___nit__SeparateErasureCompiler___nit__separate_compiler__SeparateCompiler__display_sizes, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#display_sizes */
(nitmethod_t)nit___nit__SeparateCompiler___display_isset_checks, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#display_isset_checks */
(nitmethod_t)nit___nit__SeparateCompiler___box_kinds, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#box_kinds */
(nitmethod_t)nit___nit__SeparateCompiler___runtime_type_analysis, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis */
(nitmethod_t)nit___nit__SeparateCompiler___class_conflict_graph_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#class_conflict_graph= */
(nitmethod_t)nit___nit__SeparateCompiler___class_conflict_graph, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#class_conflict_graph */
(nitmethod_t)nit___nit__SeparateCompiler___compile_color_consts, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_color_consts */
(nitmethod_t)nit___nit__SeparateCompiler___compile_color_const, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_color_const */
(nitmethod_t)nit___nit__SeparateCompiler___method_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#method_tables= */
(nitmethod_t)nit___nit__SeparateCompiler___attr_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_tables= */
(nitmethod_t)nit___nit__SeparateCompiler___method_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#method_tables */
(nitmethod_t)nit___nit__SeparateCompiler___attr_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_tables */
(nitmethod_t)nit___nit__SeparateCompiler___undead_types, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#undead_types */
(nitmethod_t)nit___nit__SeparateCompiler___box_kind_of, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#box_kind_of */
(nitmethod_t)nit___nit__SeparateCompiler___hardening_live_type, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#hardening_live_type */
(nitmethod_t)nit___nit__SeparateCompiler___link_mmethod, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#link_mmethod */
(nitmethod_t)nit___nit__SeparateCompiler___do_type_coloring, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#do_type_coloring */
(nitmethod_t)nit___nit__SeparateCompiler___compile_type_to_c, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_type_to_c */
(nitmethod_t)nit___nit__SeparateCompiler___type_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_tables */
(nitmethod_t)nit___nit__SeparateCompiler___resolution_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#resolution_tables */
(nitmethod_t)nit___nit__SeparateCompiler___attr_read_count, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_read_count */
(nitmethod_t)nit___nit__SeparateCompiler___isset_checks_count, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#isset_checks_count */
(nitmethod_t)nit___nit__SeparateCompiler___compile_header_attribute_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_header_attribute_structs */
(nitmethod_t)nit___nit__SeparateCompiler___color_consts_done, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#color_consts_done */
(nitmethod_t)nit___nit__SeparateCompiler___is_monomorphic, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#is_monomorphic */
(nitmethod_t)nit___nit__SeparateCompiler___poset_from_mtypes, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#poset_from_mtypes */
(nitmethod_t)nit___nit__SeparateCompiler___type_ids_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_ids= */
(nitmethod_t)nit___nit__SeparateCompiler___type_colors_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_colors= */
(nitmethod_t)nit___nit__SeparateCompiler___type_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_tables= */
(nitmethod_t)nit___nit__SeparateCompiler___build_type_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#build_type_tables */
(nitmethod_t)nit___nit__SeparateCompiler___compute_type_test_layouts, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compute_type_test_layouts */
(nitmethod_t)nit___nit__SeparateCompiler___type_ids, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_ids */
(nitmethod_t)nit___nit__SeparateCompiler___compute_resolution_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compute_resolution_tables */
(nitmethod_t)nit___nit__SeparateCompiler___type_colors, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_colors */
(nitmethod_t)nit___nit__SeparateCompiler___compile_type_resolution_table, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_type_resolution_table */
(nitmethod_t)nit___nit__SeparateCompiler___live_unresolved_types, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#live_unresolved_types */
(nitmethod_t)nit___nit__SeparateCompiler___opentype_colors_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#opentype_colors= */
(nitmethod_t)nit___nit__SeparateCompiler___resolution_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#resolution_tables= */
(nitmethod_t)nit___nit__SeparateCompiler___build_resolution_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#build_resolution_tables */
(nitmethod_t)nit___nit__SeparateCompiler___opentype_colors, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#opentype_colors */
(nitmethod_t)nit___nit__SeparateCompiler___attr_read_count_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_read_count= */
(nitmethod_t)nit___nit__SeparateCompiler___isset_checks_count_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#isset_checks_count= */
(nitmethod_t)nit___nit__AbstractCompiler___standard__kernel__Object__init, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#init */
(nitmethod_t)nit___nit__AbstractCompiler___display_stats, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#display_stats */
(nitmethod_t)nit___nit__AbstractCompiler___compile_nitni_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#compile_nitni_structs */
(nitmethod_t)nit___nit__AbstractCompiler___finalize_ffi_for_module, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#finalize_ffi_for_module */
(nitmethod_t)nit___nit__SeparateErasureCompiler___class_ids_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_ids= */
(nitmethod_t)nit___nit__SeparateErasureCompiler___class_colors_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_colors= */
(nitmethod_t)nit___nit__SeparateErasureCompiler___class_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_tables= */
(nitmethod_t)nit___nit__SeparateErasureCompiler___build_class_typing_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#build_class_typing_tables */
(nitmethod_t)nit___nit__SeparateErasureCompiler___vt_colors_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#vt_colors= */
(nitmethod_t)nit___nit__SeparateErasureCompiler___vt_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#vt_tables= */
(nitmethod_t)nit___nit__SeparateErasureCompiler___build_vt_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#build_vt_tables */
(nitmethod_t)nit___nit__SeparateErasureCompiler___class_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_tables */
(nitmethod_t)nit___nit__SeparateErasureCompiler___class_ids, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_ids */
(nitmethod_t)nit___nit__SeparateErasureCompiler___class_colors, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_colors */
(nitmethod_t)nit___nit__SeparateErasureCompiler___build_class_vts_table, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#build_class_vts_table */
(nitmethod_t)nit___nit__SeparateErasureCompiler___vt_colors, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#vt_colors */
(nitmethod_t)nit___nit__SeparateErasureCompiler___vt_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#vt_tables */
(nitmethod_t)nit___nit__SeparateErasureCompiler___retrieve_vt_bound, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#retrieve_vt_bound */
(nitmethod_t)nit___nit__SeparateCompiler___standard__kernel__Object__init, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#init */
}
};
/* allocate SeparateErasureCompiler */
val* NEW_nit__SeparateErasureCompiler(const struct type* type) {
val* self /* : SeparateErasureCompiler */;
val* var /* : HashMap[String, String] */;
val* var1 /* : List[CodeFile] */;
val* var2 /* : Array[String] */;
val* var3 /* : HashMap[String, String] */;
val* var4 /* : HashMap[String, ANode] */;
val* var5 /* : Array[ExternFile] */;
val* var6 /* : Array[String] */;
val* var7 /* : ArraySet[String] */;
val* var8 /* : Array[String] */;
val* var_ /* var : Array[String] */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
val* var28 /* : HashMap[String, Int] */;
val* var29 /* : HashMap[String, Int] */;
val* var30 /* : HashMap[String, Int] */;
val* var31 /* : Array[MNullableType] */;
val* var32 /* : HashSet[MType] */;
val* var33 /* : HashMap[MClassDef, HashSet[MType]] */;
val* var34 /* : HashMap[MClass, Int] */;
val* var35 /* : HashSet[Object] */;
val* var36 /* : HashMap[MType, Array[nullable MType]] */;
val* var37 /* : HashMap[MClassType, Array[nullable MType]] */;
val* var38 /* : HashMap[MClass, Array[nullable MPropDef]] */;
val* var39 /* : HashMap[MClass, Array[nullable MProperty]] */;
self = nit_alloc(sizeof(struct instance) + 39*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__SeparateErasureCompiler;
var = NEW_standard__HashMap(&type_standard__HashMap__standard__String__standard__String);
{
standard___standard__HashMap___standard__kernel__Object__init(var); /* Direct call hash_collection#HashMap#init on <var:HashMap[String, String]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___names].val = var; /* _names on <self:SeparateErasureCompiler exact> */
var1 = NEW_standard__List(&type_standard__List__nit__CodeFile);
{
{ /* Inline list#List#init (var1) on <var1:List[CodeFile]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files].val = var1; /* _files on <self:SeparateErasureCompiler exact> */
var2 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[String]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___linker_script].val = var2; /* _linker_script on <self:SeparateErasureCompiler exact> */
var3 = NEW_standard__HashMap(&type_standard__HashMap__standard__String__standard__String);
{
standard___standard__HashMap___standard__kernel__Object__init(var3); /* Direct call hash_collection#HashMap#init on <var3:HashMap[String, String]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___provided_declarations].val = var3; /* _provided_declarations on <self:SeparateErasureCompiler exact> */
var4 = NEW_standard__HashMap(&type_standard__HashMap__standard__String__nit__ANode);
{
standard___standard__HashMap___standard__kernel__Object__init(var4); /* Direct call hash_collection#HashMap#init on <var4:HashMap[String, ANode]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___requirers_of_declarations].val = var4; /* _requirers_of_declarations on <self:SeparateErasureCompiler exact> */
var5 = NEW_standard__Array(&type_standard__Array__nit__ExternFile);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[ExternFile]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___extern_bodies].val = var5; /* _extern_bodies on <self:SeparateErasureCompiler exact> */
var6 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[String]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files_to_copy].val = var6; /* _files_to_copy on <self:SeparateErasureCompiler exact> */
var7 = NEW_standard__ArraySet(&type_standard__ArraySet__standard__String);
{
standard___standard__ArraySet___standard__kernel__Object__init(var7); /* Direct call array#ArraySet#init on <var7:ArraySet[String]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___seen_extern].val = var7; /* _seen_extern on <self:SeparateErasureCompiler exact> */
var8 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___with_capacity(var8, 5l); /* Direct call array#Array#with_capacity on <var8:Array[String]>*/
}
var_ = var8;
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "isa";
var11 = standard___standard__NativeString___to_s_with_length(var10, 3l);
var9 = var11;
varonce = var9;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var9); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "as";
var15 = standard___standard__NativeString___to_s_with_length(var14, 2l);
var13 = var15;
varonce12 = var13;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var13); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "auto";
var19 = standard___standard__NativeString___to_s_with_length(var18, 4l);
var17 = var19;
varonce16 = var17;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var17); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "covariance";
var23 = standard___standard__NativeString___to_s_with_length(var22, 10l);
var21 = var23;
varonce20 = var21;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var21); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "erasure";
var27 = standard___standard__NativeString___to_s_with_length(var26, 7l);
var25 = var27;
varonce24 = var25;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var25); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_tags].val = var_; /* _count_type_test_tags on <self:SeparateErasureCompiler exact> */
{
var28 = nit___nit__AbstractCompiler___init_count_type_test_tags(self);
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved].val = var28; /* _count_type_test_resolved on <self:SeparateErasureCompiler exact> */
{
var29 = nit___nit__AbstractCompiler___init_count_type_test_tags(self);
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val = var29; /* _count_type_test_unresolved on <self:SeparateErasureCompiler exact> */
{
var30 = nit___nit__AbstractCompiler___init_count_type_test_tags(self);
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped].val = var30; /* _count_type_test_skipped on <self:SeparateErasureCompiler exact> */
var31 = NEW_standard__Array(&type_standard__Array__nit__MNullableType);
{
standard___standard__Array___standard__kernel__Object__init(var31); /* Direct call array#Array#init on <var31:Array[MNullableType]>*/
}
self->attrs[COLOR_nit__light__AbstractCompiler___compiled_null_types].val = var31; /* _compiled_null_types on <self:SeparateErasureCompiler exact> */
var32 = NEW_standard__HashSet(&type_standard__HashSet__nit__MType);
{
standard___standard__HashSet___standard__kernel__Object__init(var32); /* Direct call hash_collection#HashSet#init on <var32:HashSet[MType]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___undead_types].val = var32; /* _undead_types on <self:SeparateErasureCompiler exact> */
var33 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClassDef__standard__HashSet__nit__MType);
{
standard___standard__HashMap___standard__kernel__Object__init(var33); /* Direct call hash_collection#HashMap#init on <var33:HashMap[MClassDef, HashSet[MType]]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___live_unresolved_types].val = var33; /* _live_unresolved_types on <self:SeparateErasureCompiler exact> */
var34 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClass__standard__Int);
{
standard___standard__HashMap___standard__kernel__Object__init(var34); /* Direct call hash_collection#HashMap#init on <var34:HashMap[MClass, Int]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___box_kinds].val = var34; /* _box_kinds on <self:SeparateErasureCompiler exact> */
var35 = NEW_standard__HashSet(&type_standard__HashSet__standard__Object);
{
standard___standard__HashSet___standard__kernel__Object__init(var35); /* Direct call hash_collection#HashSet#init on <var35:HashSet[Object]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___color_consts_done].val = var35; /* _color_consts_done on <self:SeparateErasureCompiler exact> */
var36 = NEW_standard__HashMap(&type_standard__HashMap__nit__MType__standard__Array__nullable__nit__MType);
{
standard___standard__HashMap___standard__kernel__Object__init(var36); /* Direct call hash_collection#HashMap#init on <var36:HashMap[MType, Array[nullable MType]]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___type_tables].val = var36; /* _type_tables on <self:SeparateErasureCompiler exact> */
var37 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClassType__standard__Array__nullable__nit__MType);
{
standard___standard__HashMap___standard__kernel__Object__init(var37); /* Direct call hash_collection#HashMap#init on <var37:HashMap[MClassType, Array[nullable MType]]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___resolution_tables].val = var37; /* _resolution_tables on <self:SeparateErasureCompiler exact> */
var38 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClass__standard__Array__nullable__nit__MPropDef);
{
standard___standard__HashMap___standard__kernel__Object__init(var38); /* Direct call hash_collection#HashMap#init on <var38:HashMap[MClass, Array[nullable MPropDef]]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___method_tables].val = var38; /* _method_tables on <self:SeparateErasureCompiler exact> */
var39 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClass__standard__Array__nullable__nit__MProperty);
{
standard___standard__HashMap___standard__kernel__Object__init(var39); /* Direct call hash_collection#HashMap#init on <var39:HashMap[MClass, Array[nullable MProperty]]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_tables].val = var39; /* _attr_tables on <self:SeparateErasureCompiler exact> */
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___isset_checks_count].l = 0l; /* _isset_checks_count on <self:SeparateErasureCompiler exact> */
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_read_count].l = 0l; /* _attr_read_count on <self:SeparateErasureCompiler exact> */
return self;
}
/* runtime class nit__SeparateErasureCompilerVisitor */
const struct class class_nit__SeparateErasureCompilerVisitor = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__AbstractCompilerVisitor___standard__kernel__Object__init, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_decl, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_decl */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___require_declaration, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#require_declaration */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___compiler, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compiler */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_abort, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_abort */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___new_named_var, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_named_var */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___get_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_name */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___set_finalizer, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#set_finalizer */
(nitmethod_t)nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__init_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#init_instance */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#send */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___new_expr, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_expr */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___compiler_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compiler= */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___writer, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#writer */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___current_node, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#current_node */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_raw_abort, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_raw_abort */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___anchor, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#anchor */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___names, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#names */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___last, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___last_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last= */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___new_var, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_var */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___writer_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#writer= */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___frame, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#frame */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___monomorphic_send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#monomorphic_send */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___frame_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#frame= */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___mmodule, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#mmodule */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__call, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#call */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___assign, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#assign */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#write_attribute */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___bool_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#bool_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___debug, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#debug */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__adapt_signature, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#adapt_signature */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#autobox */
(nitmethod_t)nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__class_name_string, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#class_name_string */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___current_node_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#current_node= */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___ret, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#ret */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___value_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#value_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___check_recv_notnull, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#check_recv_notnull */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___object_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#object_type */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___bool_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#bool_type */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_cast, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_cast */
(nitmethod_t)nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#compile_callsite */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__supercall, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#supercall */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___variable, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variable */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___stmt, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#stmt */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__isset_attribute, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#isset_attribute */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__read_attribute, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#read_attribute */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___int_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#int_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___string_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#string_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___expr, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr */
(nitmethod_t)nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__type_test, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#type_test */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___monomorphic_super_send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#monomorphic_super_send */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___resolve_for, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#resolve_for */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#unbox_signature_extern */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#equal_test */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__native_array_def, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#native_array_def */
(nitmethod_t)nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__calloc_array, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#calloc_array */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__is_same_type_test, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#is_same_type_test */
(nitmethod_t)nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__box_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#box_extern */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___variables, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variables */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___get_property, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_property */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___autoadapt, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#autoadapt */
(nitmethod_t)nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#unbox_extern */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_extern */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___new_var_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_var_extern */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___declare_once, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#declare_once */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___escapemark_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_name */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___varargize, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#varargize */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_escape_label, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_escape_label */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___expr_bool, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr_bool */
(nitmethod_t)nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__native_array_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#native_array_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___init_instance_or_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#init_instance_or_extern */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___null_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#null_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___byte_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#byte_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___float_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#float_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___char_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#char_instance */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__array_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#array_instance */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__native_array_set, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#native_array_set */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__vararg_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#vararg_instance */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___class_info, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#class_info */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___hardening_live_open_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#hardening_live_open_type */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___link_unresolved_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#link_unresolved_type */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___type_info, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#type_info */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___table_send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#table_send */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___can_be_primitive, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#can_be_primitive */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___extract_tag, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#extract_tag */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___before_send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#before_send */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___direct_call, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#direct_call */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___maybe_null, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#maybe_null */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___hardening_cast_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#hardening_cast_type */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___compile_callsite, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compile_callsite */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#compile_callsite */
}
};
/* allocate SeparateErasureCompilerVisitor */
val* NEW_nit__SeparateErasureCompilerVisitor(const struct type* type) {
val* self /* : SeparateErasureCompilerVisitor */;
val* var /* : HashSet[String] */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__SeparateErasureCompilerVisitor;
var = NEW_standard__HashSet(&type_standard__HashSet__standard__String);
{
standard___standard__HashSet___standard__kernel__Object__init(var); /* Direct call hash_collection#HashSet#init on <var:HashSet[String]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___names].val = var; /* _names on <self:SeparateErasureCompilerVisitor exact> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___last].l = 0l; /* _last on <self:SeparateErasureCompilerVisitor exact> */
var1 = NEW_standard__HashMap(&type_standard__HashMap__nit__Variable__nit__RuntimeVariable);
{
standard___standard__HashMap___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[Variable, RuntimeVariable]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___variables].val = var1; /* _variables on <self:SeparateErasureCompilerVisitor exact> */
return self;
}
/* runtime class nit__SeparateCompilerPhase */
const struct class class_nit__SeparateCompilerPhase = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to separate_compiler:SeparateCompilerPhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to separate_compiler:SeparateCompilerPhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to separate_compiler:SeparateCompilerPhase:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to separate_compiler:SeparateCompilerPhase:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to separate_compiler:SeparateCompilerPhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to separate_compiler:SeparateCompilerPhase:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to separate_compiler:SeparateCompilerPhase:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to separate_compiler:SeparateCompilerPhase:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to separate_compiler:SeparateCompilerPhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to separate_compiler:SeparateCompilerPhase:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to separate_compiler:SeparateCompilerPhase:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to separate_compiler:SeparateCompilerPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to separate_compiler:SeparateCompilerPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to separate_compiler:SeparateCompilerPhase:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#disabled */
(nitmethod_t)nit___nit__SeparateCompilerPhase___nit__modelbuilder__Phase__process_mainmodule, /* pointer to separate_compiler:SeparateCompilerPhase:separate_compiler#SeparateCompilerPhase#process_mainmodule */
(nitmethod_t)nit___nit__Phase___process_nmodule, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nit___nit__Phase___process_npropdef, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#process_npropdef */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#disabled= */
}
};
/* allocate SeparateCompilerPhase */
val* NEW_nit__SeparateCompilerPhase(const struct type* type) {
val* self /* : SeparateCompilerPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__SeparateCompilerPhase;
self->attrs[COLOR_nit__phase__Phase___disabled].s = 0; /* _disabled on <self:SeparateCompilerPhase exact> */
return self;
}
/* runtime class nit__SeparateCompiler */
const struct class class_nit__SeparateCompiler = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__SeparateCompiler___standard__kernel__Object__init, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to separate_compiler:SeparateCompiler:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to separate_compiler:SeparateCompiler:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to separate_compiler:SeparateCompiler:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to separate_compiler:SeparateCompiler:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to separate_compiler:SeparateCompiler:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to separate_compiler:SeparateCompiler:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to separate_compiler:SeparateCompiler:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to separate_compiler:SeparateCompiler:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to separate_compiler:SeparateCompiler:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__AbstractCompiler___init_count_type_test_tags, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#init_count_type_test_tags */
(nitmethod_t)nit___nit__AbstractCompiler___mainmodule_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#mainmodule= */
(nitmethod_t)nit___nit__AbstractCompiler___modelbuilder_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#modelbuilder= */
(nitmethod_t)nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__do_compilation, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#do_compilation */
(nitmethod_t)nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__display_stats, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#display_stats */
(nitmethod_t)nit___nit__AbstractCompiler___new_file, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#new_file */
(nitmethod_t)nit___nit__AbstractCompiler___header_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#header= */
(nitmethod_t)nit___nit__AbstractCompiler___count_type_test_tags, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_tags */
(nitmethod_t)nit___nit__AbstractCompiler___compile_header, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#compile_header */
(nitmethod_t)nit___nit__AbstractCompiler___mainmodule, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#mainmodule */
(nitmethod_t)nit___nit__AbstractCompiler___modelbuilder, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#modelbuilder */
(nitmethod_t)nit___nit__AbstractCompiler___compile_nitni_global_ref_functions, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#compile_nitni_global_ref_functions */
(nitmethod_t)nit___nit__AbstractCompiler___compile_main_function, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#compile_main_function */
(nitmethod_t)nit___nit__AbstractCompiler___compile_finalizer_function, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#compile_finalizer_function */
(nitmethod_t)nit___nit__AbstractCompiler___target_platform, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#target_platform */
(nitmethod_t)nit___nit__AbstractCompiler___toolchain_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#toolchain= */
(nitmethod_t)nit___nit__AbstractCompiler___realmainmodule_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#realmainmodule= */
(nitmethod_t)nit___nit__AbstractCompiler___target_platform_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#target_platform= */
(nitmethod_t)nit___nit__AbstractCompiler___files, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#files */
(nitmethod_t)nit___nit__AbstractCompiler___header, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#header */
(nitmethod_t)nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__compile_header_structs, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_header_structs */
(nitmethod_t)nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__compile_nitni_structs, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_nitni_structs */
(nitmethod_t)nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__new_visitor, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#new_visitor */
(nitmethod_t)nit___nit__AbstractCompiler___provide_declaration, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#provide_declaration */
(nitmethod_t)nit___nit__AbstractCompiler___generate_init_attr, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#generate_init_attr */
(nitmethod_t)nit___nit__AbstractCompiler___count_type_test_resolved, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_resolved */
(nitmethod_t)nit___nit__AbstractCompiler___count_type_test_unresolved, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_unresolved */
(nitmethod_t)nit___nit__AbstractCompiler___count_type_test_skipped, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_skipped */
(nitmethod_t)nit___nit__AbstractCompiler___linker_script, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#linker_script */
(nitmethod_t)nit___nit__AbstractCompiler___requirers_of_declarations, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#requirers_of_declarations */
(nitmethod_t)nit___nit__AbstractCompiler___provided_declarations, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#provided_declarations */
(nitmethod_t)nit___nit__AbstractCompiler___realmainmodule, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#realmainmodule */
(nitmethod_t)nit___nit__AbstractCompiler___names, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#names */
(nitmethod_t)nit___nit__AbstractCompiler___build_c_to_nit_bindings, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#build_c_to_nit_bindings */
(nitmethod_t)nit___nit__AbstractCompiler___extern_bodies, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#extern_bodies */
(nitmethod_t)nit___nit__AbstractCompiler___files_to_copy, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#files_to_copy */
(nitmethod_t)nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__finalize_ffi_for_module, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#finalize_ffi_for_module */
(nitmethod_t)nit___nit__AbstractCompiler___toolchain, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#toolchain */
(nitmethod_t)nit___nit__AbstractCompiler___seen_extern, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#seen_extern */
(nitmethod_t)nit___nit__SeparateCompiler___runtime_type_analysis_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis= */
(nitmethod_t)nit___nit__SeparateCompiler___compile_box_kinds, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_box_kinds */
(nitmethod_t)nit___nit__SeparateCompiler___do_property_coloring, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#do_property_coloring */
(nitmethod_t)nit___nit__SeparateCompiler___compile_class_infos, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_class_infos */
(nitmethod_t)nit___nit__SeparateCompiler___compile_class_to_c, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_class_to_c */
(nitmethod_t)nit___nit__SeparateCompiler___link_mmethods, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#link_mmethods */
(nitmethod_t)nit___nit__SeparateCompiler___compile_module_to_c, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_module_to_c */
(nitmethod_t)nit___nit__SeparateCompiler___compile_types, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_types */
(nitmethod_t)nit___nit__SeparateCompiler___display_sizes, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#display_sizes */
(nitmethod_t)nit___nit__SeparateCompiler___display_isset_checks, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#display_isset_checks */
(nitmethod_t)nit___nit__SeparateCompiler___box_kinds, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#box_kinds */
(nitmethod_t)nit___nit__SeparateCompiler___runtime_type_analysis, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis */
(nitmethod_t)nit___nit__SeparateCompiler___class_conflict_graph_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#class_conflict_graph= */
(nitmethod_t)nit___nit__SeparateCompiler___class_conflict_graph, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#class_conflict_graph */
(nitmethod_t)nit___nit__SeparateCompiler___compile_color_consts, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_color_consts */
(nitmethod_t)nit___nit__SeparateCompiler___compile_color_const, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_color_const */
(nitmethod_t)nit___nit__SeparateCompiler___method_tables_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#method_tables= */
(nitmethod_t)nit___nit__SeparateCompiler___attr_tables_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_tables= */
(nitmethod_t)nit___nit__SeparateCompiler___method_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#method_tables */
(nitmethod_t)nit___nit__SeparateCompiler___attr_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_tables */
(nitmethod_t)nit___nit__SeparateCompiler___undead_types, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#undead_types */
(nitmethod_t)nit___nit__SeparateCompiler___box_kind_of, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#box_kind_of */
(nitmethod_t)nit___nit__SeparateCompiler___hardening_live_type, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#hardening_live_type */
(nitmethod_t)nit___nit__SeparateCompiler___link_mmethod, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#link_mmethod */
(nitmethod_t)nit___nit__SeparateCompiler___do_type_coloring, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#do_type_coloring */
(nitmethod_t)nit___nit__SeparateCompiler___compile_type_to_c, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_type_to_c */
(nitmethod_t)nit___nit__SeparateCompiler___type_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_tables */
(nitmethod_t)nit___nit__SeparateCompiler___resolution_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#resolution_tables */
(nitmethod_t)nit___nit__SeparateCompiler___attr_read_count, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_read_count */
(nitmethod_t)nit___nit__SeparateCompiler___isset_checks_count, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#isset_checks_count */
(nitmethod_t)nit___nit__SeparateCompiler___compile_header_attribute_structs, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_header_attribute_structs */
(nitmethod_t)nit___nit__SeparateCompiler___color_consts_done, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#color_consts_done */
(nitmethod_t)nit___nit__SeparateCompiler___is_monomorphic, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#is_monomorphic */
(nitmethod_t)nit___nit__SeparateCompiler___poset_from_mtypes, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#poset_from_mtypes */
(nitmethod_t)nit___nit__SeparateCompiler___type_ids_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_ids= */
(nitmethod_t)nit___nit__SeparateCompiler___type_colors_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_colors= */
(nitmethod_t)nit___nit__SeparateCompiler___type_tables_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_tables= */
(nitmethod_t)nit___nit__SeparateCompiler___build_type_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#build_type_tables */
(nitmethod_t)nit___nit__SeparateCompiler___compute_type_test_layouts, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compute_type_test_layouts */
(nitmethod_t)nit___nit__SeparateCompiler___type_ids, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_ids */
(nitmethod_t)nit___nit__SeparateCompiler___compute_resolution_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compute_resolution_tables */
(nitmethod_t)nit___nit__SeparateCompiler___type_colors, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_colors */
(nitmethod_t)nit___nit__SeparateCompiler___compile_type_resolution_table, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_type_resolution_table */
(nitmethod_t)nit___nit__SeparateCompiler___live_unresolved_types, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#live_unresolved_types */
(nitmethod_t)nit___nit__SeparateCompiler___opentype_colors_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#opentype_colors= */
(nitmethod_t)nit___nit__SeparateCompiler___resolution_tables_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#resolution_tables= */
(nitmethod_t)nit___nit__SeparateCompiler___build_resolution_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#build_resolution_tables */
(nitmethod_t)nit___nit__SeparateCompiler___opentype_colors, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#opentype_colors */
(nitmethod_t)nit___nit__SeparateCompiler___attr_read_count_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_read_count= */
(nitmethod_t)nit___nit__SeparateCompiler___isset_checks_count_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#isset_checks_count= */
(nitmethod_t)nit___nit__AbstractCompiler___standard__kernel__Object__init, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#init */
(nitmethod_t)nit___nit__AbstractCompiler___display_stats, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#display_stats */
(nitmethod_t)nit___nit__AbstractCompiler___compile_nitni_structs, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#compile_nitni_structs */
(nitmethod_t)nit___nit__AbstractCompiler___finalize_ffi_for_module, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#finalize_ffi_for_module */
}
};
/* allocate SeparateCompiler */
val* NEW_nit__SeparateCompiler(const struct type* type) {
val* self /* : SeparateCompiler */;
val* var /* : HashMap[String, String] */;
val* var1 /* : List[CodeFile] */;
val* var2 /* : Array[String] */;
val* var3 /* : HashMap[String, String] */;
val* var4 /* : HashMap[String, ANode] */;
val* var5 /* : Array[ExternFile] */;
val* var6 /* : Array[String] */;
val* var7 /* : ArraySet[String] */;
val* var8 /* : Array[String] */;
val* var_ /* var : Array[String] */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : FlatString */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : FlatString */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
val* var28 /* : HashMap[String, Int] */;
val* var29 /* : HashMap[String, Int] */;
val* var30 /* : HashMap[String, Int] */;
val* var31 /* : Array[MNullableType] */;
val* var32 /* : HashSet[MType] */;
val* var33 /* : HashMap[MClassDef, HashSet[MType]] */;
val* var34 /* : HashMap[MClass, Int] */;
val* var35 /* : HashSet[Object] */;
val* var36 /* : HashMap[MType, Array[nullable MType]] */;
val* var37 /* : HashMap[MClassType, Array[nullable MType]] */;
val* var38 /* : HashMap[MClass, Array[nullable MPropDef]] */;
val* var39 /* : HashMap[MClass, Array[nullable MProperty]] */;
self = nit_alloc(sizeof(struct instance) + 34*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__SeparateCompiler;
var = NEW_standard__HashMap(&type_standard__HashMap__standard__String__standard__String);
{
standard___standard__HashMap___standard__kernel__Object__init(var); /* Direct call hash_collection#HashMap#init on <var:HashMap[String, String]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___names].val = var; /* _names on <self:SeparateCompiler exact> */
var1 = NEW_standard__List(&type_standard__List__nit__CodeFile);
{
{ /* Inline list#List#init (var1) on <var1:List[CodeFile]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files].val = var1; /* _files on <self:SeparateCompiler exact> */
var2 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[String]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___linker_script].val = var2; /* _linker_script on <self:SeparateCompiler exact> */
var3 = NEW_standard__HashMap(&type_standard__HashMap__standard__String__standard__String);
{
standard___standard__HashMap___standard__kernel__Object__init(var3); /* Direct call hash_collection#HashMap#init on <var3:HashMap[String, String]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___provided_declarations].val = var3; /* _provided_declarations on <self:SeparateCompiler exact> */
var4 = NEW_standard__HashMap(&type_standard__HashMap__standard__String__nit__ANode);
{
standard___standard__HashMap___standard__kernel__Object__init(var4); /* Direct call hash_collection#HashMap#init on <var4:HashMap[String, ANode]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___requirers_of_declarations].val = var4; /* _requirers_of_declarations on <self:SeparateCompiler exact> */
var5 = NEW_standard__Array(&type_standard__Array__nit__ExternFile);
{
standard___standard__Array___standard__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[ExternFile]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___extern_bodies].val = var5; /* _extern_bodies on <self:SeparateCompiler exact> */
var6 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[String]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files_to_copy].val = var6; /* _files_to_copy on <self:SeparateCompiler exact> */
var7 = NEW_standard__ArraySet(&type_standard__ArraySet__standard__String);
{
standard___standard__ArraySet___standard__kernel__Object__init(var7); /* Direct call array#ArraySet#init on <var7:ArraySet[String]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___seen_extern].val = var7; /* _seen_extern on <self:SeparateCompiler exact> */
var8 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___with_capacity(var8, 5l); /* Direct call array#Array#with_capacity on <var8:Array[String]>*/
}
var_ = var8;
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "isa";
var11 = standard___standard__NativeString___to_s_with_length(var10, 3l);
var9 = var11;
varonce = var9;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var9); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "as";
var15 = standard___standard__NativeString___to_s_with_length(var14, 2l);
var13 = var15;
varonce12 = var13;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var13); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "auto";
var19 = standard___standard__NativeString___to_s_with_length(var18, 4l);
var17 = var19;
varonce16 = var17;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var17); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "covariance";
var23 = standard___standard__NativeString___to_s_with_length(var22, 10l);
var21 = var23;
varonce20 = var21;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var21); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "erasure";
var27 = standard___standard__NativeString___to_s_with_length(var26, 7l);
var25 = var27;
varonce24 = var25;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var25); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_tags].val = var_; /* _count_type_test_tags on <self:SeparateCompiler exact> */
{
var28 = nit___nit__AbstractCompiler___init_count_type_test_tags(self);
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved].val = var28; /* _count_type_test_resolved on <self:SeparateCompiler exact> */
{
var29 = nit___nit__AbstractCompiler___init_count_type_test_tags(self);
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val = var29; /* _count_type_test_unresolved on <self:SeparateCompiler exact> */
{
var30 = nit___nit__AbstractCompiler___init_count_type_test_tags(self);
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped].val = var30; /* _count_type_test_skipped on <self:SeparateCompiler exact> */
var31 = NEW_standard__Array(&type_standard__Array__nit__MNullableType);
{
standard___standard__Array___standard__kernel__Object__init(var31); /* Direct call array#Array#init on <var31:Array[MNullableType]>*/
}
self->attrs[COLOR_nit__light__AbstractCompiler___compiled_null_types].val = var31; /* _compiled_null_types on <self:SeparateCompiler exact> */
var32 = NEW_standard__HashSet(&type_standard__HashSet__nit__MType);
{
standard___standard__HashSet___standard__kernel__Object__init(var32); /* Direct call hash_collection#HashSet#init on <var32:HashSet[MType]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___undead_types].val = var32; /* _undead_types on <self:SeparateCompiler exact> */
var33 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClassDef__standard__HashSet__nit__MType);
{
standard___standard__HashMap___standard__kernel__Object__init(var33); /* Direct call hash_collection#HashMap#init on <var33:HashMap[MClassDef, HashSet[MType]]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___live_unresolved_types].val = var33; /* _live_unresolved_types on <self:SeparateCompiler exact> */
var34 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClass__standard__Int);
{
standard___standard__HashMap___standard__kernel__Object__init(var34); /* Direct call hash_collection#HashMap#init on <var34:HashMap[MClass, Int]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___box_kinds].val = var34; /* _box_kinds on <self:SeparateCompiler exact> */
var35 = NEW_standard__HashSet(&type_standard__HashSet__standard__Object);
{
standard___standard__HashSet___standard__kernel__Object__init(var35); /* Direct call hash_collection#HashSet#init on <var35:HashSet[Object]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___color_consts_done].val = var35; /* _color_consts_done on <self:SeparateCompiler exact> */
var36 = NEW_standard__HashMap(&type_standard__HashMap__nit__MType__standard__Array__nullable__nit__MType);
{
standard___standard__HashMap___standard__kernel__Object__init(var36); /* Direct call hash_collection#HashMap#init on <var36:HashMap[MType, Array[nullable MType]]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___type_tables].val = var36; /* _type_tables on <self:SeparateCompiler exact> */
var37 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClassType__standard__Array__nullable__nit__MType);
{
standard___standard__HashMap___standard__kernel__Object__init(var37); /* Direct call hash_collection#HashMap#init on <var37:HashMap[MClassType, Array[nullable MType]]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___resolution_tables].val = var37; /* _resolution_tables on <self:SeparateCompiler exact> */
var38 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClass__standard__Array__nullable__nit__MPropDef);
{
standard___standard__HashMap___standard__kernel__Object__init(var38); /* Direct call hash_collection#HashMap#init on <var38:HashMap[MClass, Array[nullable MPropDef]]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___method_tables].val = var38; /* _method_tables on <self:SeparateCompiler exact> */
var39 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClass__standard__Array__nullable__nit__MProperty);
{
standard___standard__HashMap___standard__kernel__Object__init(var39); /* Direct call hash_collection#HashMap#init on <var39:HashMap[MClass, Array[nullable MProperty]]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_tables].val = var39; /* _attr_tables on <self:SeparateCompiler exact> */
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___isset_checks_count].l = 0l; /* _isset_checks_count on <self:SeparateCompiler exact> */
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_read_count].l = 0l; /* _attr_read_count on <self:SeparateCompiler exact> */
return self;
}
/* runtime class nit__SeparateCompilerVisitor */
const struct class class_nit__SeparateCompilerVisitor = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__AbstractCompilerVisitor___standard__kernel__Object__init, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to separate_compiler:SeparateCompilerVisitor:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to separate_compiler:SeparateCompilerVisitor:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to separate_compiler:SeparateCompilerVisitor:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to separate_compiler:SeparateCompilerVisitor:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_decl, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_decl */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___require_declaration, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#require_declaration */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___compiler, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compiler */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_abort, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_abort */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___new_named_var, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_named_var */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___get_name, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_name */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___set_finalizer, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#set_finalizer */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__init_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#init_instance */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#send */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___new_expr, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_expr */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___compiler_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compiler= */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___writer, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#writer */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___current_node, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#current_node */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_raw_abort, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_raw_abort */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___anchor, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#anchor */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___names, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#names */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___last, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___last_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last= */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___new_var, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_var */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___writer_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#writer= */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___frame, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#frame */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___monomorphic_send, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#monomorphic_send */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___frame_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#frame= */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___mmodule, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#mmodule */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__call, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#call */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___assign, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#assign */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#write_attribute */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___bool_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#bool_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___debug, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#debug */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__adapt_signature, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#adapt_signature */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#autobox */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__class_name_string, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#class_name_string */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___current_node_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#current_node= */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___ret, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#ret */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___value_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#value_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___check_recv_notnull, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#check_recv_notnull */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___object_type, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#object_type */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___bool_type, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#bool_type */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_cast, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_cast */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#compile_callsite */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__supercall, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#supercall */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___variable, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variable */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___stmt, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#stmt */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__isset_attribute, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#isset_attribute */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__read_attribute, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#read_attribute */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___int_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#int_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___string_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#string_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___expr, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__type_test, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#type_test */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___monomorphic_super_send, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#monomorphic_super_send */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___resolve_for, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#resolve_for */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#unbox_signature_extern */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#equal_test */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__native_array_def, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#native_array_def */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___calloc_array, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#calloc_array */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__is_same_type_test, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#is_same_type_test */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__box_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#box_extern */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___variables, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variables */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___get_property, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_property */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___autoadapt, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#autoadapt */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#unbox_extern */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_extern */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___new_var_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_var_extern */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___declare_once, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#declare_once */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___escapemark_name, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_name */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___varargize, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#varargize */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_escape_label, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_escape_label */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___expr_bool, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr_bool */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__native_array_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#native_array_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___init_instance_or_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#init_instance_or_extern */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___null_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#null_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___byte_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#byte_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___float_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#float_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___char_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#char_instance */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__array_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#array_instance */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__native_array_set, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#native_array_set */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__vararg_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#vararg_instance */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___class_info, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#class_info */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___hardening_live_open_type, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#hardening_live_open_type */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___link_unresolved_type, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#link_unresolved_type */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___type_info, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#type_info */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___table_send, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#table_send */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___can_be_primitive, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#can_be_primitive */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___extract_tag, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#extract_tag */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___before_send, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#before_send */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___direct_call, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#direct_call */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___maybe_null, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#maybe_null */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___hardening_cast_type, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#hardening_cast_type */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___compile_callsite, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compile_callsite */
}
};
/* allocate SeparateCompilerVisitor */
val* NEW_nit__SeparateCompilerVisitor(const struct type* type) {
val* self /* : SeparateCompilerVisitor */;
val* var /* : HashSet[String] */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__SeparateCompilerVisitor;
var = NEW_standard__HashSet(&type_standard__HashSet__standard__String);
{
standard___standard__HashSet___standard__kernel__Object__init(var); /* Direct call hash_collection#HashSet#init on <var:HashSet[String]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___names].val = var; /* _names on <self:SeparateCompilerVisitor exact> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___last].l = 0l; /* _last on <self:SeparateCompilerVisitor exact> */
var1 = NEW_standard__HashMap(&type_standard__HashMap__nit__Variable__nit__RuntimeVariable);
{
standard___standard__HashMap___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[Variable, RuntimeVariable]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___variables].val = var1; /* _variables on <self:SeparateCompilerVisitor exact> */
return self;
}
/* runtime class nit__SeparateRuntimeFunction */
const struct class class_nit__SeparateRuntimeFunction = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__SeparateRuntimeFunction___standard__kernel__Object__init, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#sys */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___standard__string__Object__to_s, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to separate_compiler:SeparateRuntimeFunction:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to separate_compiler:SeparateRuntimeFunction:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to separate_compiler:SeparateRuntimeFunction:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to separate_compiler:SeparateRuntimeFunction:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__AbstractRuntimeFunction___c_name, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___nit__abstract_compiler__AbstractRuntimeFunction__compile_to_c, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#compile_to_c */
(nitmethod_t)nit___nit__AbstractRuntimeFunction___mmethoddef, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#mmethoddef */
(nitmethod_t)nit___nit__AbstractRuntimeFunction___mmethoddef_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#mmethoddef= */
(nitmethod_t)nit___nit__AbstractRuntimeFunction___c_name_cache, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name_cache */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___nit__abstract_compiler__AbstractRuntimeFunction__build_c_name, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#build_c_name */
(nitmethod_t)nit___nit__AbstractRuntimeFunction___c_name_cache_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name_cache= */
(nitmethod_t)standard___standard__Object___init, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#init */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___compile_trampolines, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#compile_trampolines */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___called_recv, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#called_recv */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___called_signature, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#called_signature */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___c_ret, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#c_ret */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___c_sig, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#c_sig */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___called_recv_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#called_recv= */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___called_signature_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#called_signature= */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___build_c_name_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#build_c_name= */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___is_thunk_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#is_thunk= */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___arguments, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#arguments */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___c_funptrtype, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#c_funptrtype */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___arguments_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#arguments= */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___is_thunk, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#is_thunk */
(nitmethod_t)nit___nit__AbstractRuntimeFunction___standard__kernel__Object__init, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#init */
}
};
/* allocate SeparateRuntimeFunction */
val* NEW_nit__SeparateRuntimeFunction(const struct type* type) {
val* self /* : SeparateRuntimeFunction */;
self = nit_alloc(sizeof(struct instance) + 13*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__SeparateRuntimeFunction;
self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___is_thunk].s = 0; /* _is_thunk on <self:SeparateRuntimeFunction exact> */
return self;
}
/* runtime class nit__PropertyLayoutElement */
/* allocate PropertyLayoutElement */
val* NEW_nit__PropertyLayoutElement(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "PropertyLayoutElement is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__Toolchain */
/* allocate Toolchain */
val* NEW_nit__Toolchain(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Toolchain is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__MakefileToolchain */
const struct class class_nit__MakefileToolchain = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__Toolchain___standard__kernel__Object__init, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#Toolchain#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to abstract_compiler:MakefileToolchain:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to abstract_compiler:MakefileToolchain:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to abstract_compiler:MakefileToolchain:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to abstract_compiler:MakefileToolchain:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to abstract_compiler:MakefileToolchain:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to abstract_compiler:MakefileToolchain:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to abstract_compiler:MakefileToolchain:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to abstract_compiler:MakefileToolchain:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to abstract_compiler:MakefileToolchain:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__MakefileToolchain___Toolchain__write_and_make, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#write_and_make */
(nitmethod_t)nit___nit__Toolchain___toolcontext_61d, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#Toolchain#toolcontext= */
(nitmethod_t)nit___nit__Toolchain___compiler_61d, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#Toolchain#compiler= */
(nitmethod_t)nit___nit__Toolchain___compile_dir, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#Toolchain#compile_dir */
(nitmethod_t)nit___nit__Toolchain___toolcontext, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#Toolchain#toolcontext */
(nitmethod_t)nit___nit__Toolchain___root_compile_dir, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#Toolchain#root_compile_dir */
(nitmethod_t)nit___nit__Toolchain___compiler, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#Toolchain#compiler */
(nitmethod_t)standard___standard__Object___init, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#init */
(nitmethod_t)nit___nit__MakefileToolchain___write_files, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#write_files */
(nitmethod_t)nit___nit__MakefileToolchain___write_makefile, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#write_makefile */
(nitmethod_t)nit___nit__MakefileToolchain___compile_c_code, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#compile_c_code */
(nitmethod_t)nit___nit__MakefileToolchain___outfile, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#outfile */
(nitmethod_t)nit___nit__MakefileToolchain___makefile_name, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#makefile_name */
(nitmethod_t)nit___nit__MakefileToolchain___default_outname, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#default_outname */
}
};
/* allocate MakefileToolchain */
val* NEW_nit__MakefileToolchain(const struct type* type) {
val* self /* : MakefileToolchain */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MakefileToolchain;
return self;
}
/* runtime class nit__AbstractCompiler */
/* allocate AbstractCompiler */
val* NEW_nit__AbstractCompiler(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AbstractCompiler is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__CodeFile */
const struct class class_nit__CodeFile = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__CodeFile___standard__kernel__Object__init, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to abstract_compiler:CodeFile:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to abstract_compiler:CodeFile:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to abstract_compiler:CodeFile:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to abstract_compiler:CodeFile:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to abstract_compiler:CodeFile:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to abstract_compiler:CodeFile:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to abstract_compiler:CodeFile:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to abstract_compiler:CodeFile:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to abstract_compiler:CodeFile:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to abstract_compiler:CodeFile:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to abstract_compiler:CodeFile:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to abstract_compiler:CodeFile:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to abstract_compiler:CodeFile:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to abstract_compiler:CodeFile:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to abstract_compiler:CodeFile:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__CodeFile___name_61d, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#name= */
(nitmethod_t)nit___nit__CodeFile___writers, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#writers */
(nitmethod_t)nit___nit__CodeFile___required_declarations, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#required_declarations */
(nitmethod_t)nit___nit__CodeFile___name, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#name */
(nitmethod_t)standard___standard__Object___init, /* pointer to abstract_compiler:CodeFile:kernel#Object#init */
}
};
/* allocate CodeFile */
val* NEW_nit__CodeFile(const struct type* type) {
val* self /* : CodeFile */;
val* var /* : Array[CodeWriter] */;
val* var1 /* : HashSet[String] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__CodeFile;
var = NEW_standard__Array(&type_standard__Array__nit__CodeWriter);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[CodeWriter]>*/
}
self->attrs[COLOR_nit__abstract_compiler__CodeFile___writers].val = var; /* _writers on <self:CodeFile exact> */
var1 = NEW_standard__HashSet(&type_standard__HashSet__standard__String);
{
standard___standard__HashSet___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashSet#init on <var1:HashSet[String]>*/
}
self->attrs[COLOR_nit__abstract_compiler__CodeFile___required_declarations].val = var1; /* _required_declarations on <self:CodeFile exact> */
return self;
}
/* runtime class nit__CodeWriter */
const struct class class_nit__CodeWriter = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__CodeWriter___standard__kernel__Object__init, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to abstract_compiler:CodeWriter:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to abstract_compiler:CodeWriter:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to abstract_compiler:CodeWriter:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to abstract_compiler:CodeWriter:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to abstract_compiler:CodeWriter:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to abstract_compiler:CodeWriter:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to abstract_compiler:CodeWriter:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to abstract_compiler:CodeWriter:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to abstract_compiler:CodeWriter:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to abstract_compiler:CodeWriter:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to abstract_compiler:CodeWriter:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to abstract_compiler:CodeWriter:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to abstract_compiler:CodeWriter:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to abstract_compiler:CodeWriter:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to abstract_compiler:CodeWriter:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__CodeWriter___file_61d, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#file= */
(nitmethod_t)nit___nit__CodeWriter___file, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#file */
(nitmethod_t)nit___nit__CodeWriter___add_decl, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#add_decl */
(nitmethod_t)nit___nit__CodeWriter___decl_lines, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#decl_lines */
(nitmethod_t)nit___nit__CodeWriter___lines, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#lines */
}
};
/* allocate CodeWriter */
val* NEW_nit__CodeWriter(const struct type* type) {
val* self /* : CodeWriter */;
val* var /* : List[String] */;
val* var1 /* : List[String] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__CodeWriter;
var = NEW_standard__List(&type_standard__List__standard__String);
{
{ /* Inline list#List#init (var) on <var:List[String]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__abstract_compiler__CodeWriter___lines].val = var; /* _lines on <self:CodeWriter exact> */
var1 = NEW_standard__List(&type_standard__List__standard__String);
{
{ /* Inline list#List#init (var1) on <var1:List[String]> */
RET_LABEL2:(void)0;
}
}
self->attrs[COLOR_nit__abstract_compiler__CodeWriter___decl_lines].val = var1; /* _decl_lines on <self:CodeWriter exact> */
return self;
}
/* runtime class nit__AbstractCompilerVisitor */
/* allocate AbstractCompilerVisitor */
val* NEW_nit__AbstractCompilerVisitor(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AbstractCompilerVisitor is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__AbstractRuntimeFunction */
/* allocate AbstractRuntimeFunction */
val* NEW_nit__AbstractRuntimeFunction(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AbstractRuntimeFunction is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__RuntimeVariable */
const struct class class_nit__RuntimeVariable = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__RuntimeVariable___standard__kernel__Object__init, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#sys */
(nitmethod_t)nit___nit__RuntimeVariable___standard__string__Object__to_s, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#== */
(nitmethod_t)nit___nit__RuntimeVariable___standard__string__Object__inspect, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to abstract_compiler:RuntimeVariable:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to abstract_compiler:RuntimeVariable:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to abstract_compiler:RuntimeVariable:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to abstract_compiler:RuntimeVariable:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to abstract_compiler:RuntimeVariable:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to abstract_compiler:RuntimeVariable:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to abstract_compiler:RuntimeVariable:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__RuntimeVariable___is_exact_61d, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#is_exact= */
(nitmethod_t)nit___nit__RuntimeVariable___name_61d, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#name= */
(nitmethod_t)nit___nit__RuntimeVariable___mtype_61d, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#mtype= */
(nitmethod_t)nit___nit__RuntimeVariable___mcasttype_61d, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#mcasttype= */
(nitmethod_t)nit___nit__RuntimeVariable___mtype, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#mtype */
(nitmethod_t)nit___nit__RuntimeVariable___mcasttype, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#mcasttype */
(nitmethod_t)nit___nit__RuntimeVariable___name, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#name */
(nitmethod_t)nit___nit__RuntimeVariable___is_exact, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#is_exact */
}
};
/* allocate RuntimeVariable */
val* NEW_nit__RuntimeVariable(const struct type* type) {
val* self /* : RuntimeVariable */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__RuntimeVariable;
self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___is_exact].s = 0; /* _is_exact on <self:RuntimeVariable exact> */
return self;
}
/* runtime class nit__StaticFrame */
const struct class class_nit__StaticFrame = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__StaticFrame___standard__kernel__Object__init, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to abstract_compiler:StaticFrame:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to abstract_compiler:StaticFrame:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to abstract_compiler:StaticFrame:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to abstract_compiler:StaticFrame:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to abstract_compiler:StaticFrame:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to abstract_compiler:StaticFrame:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to abstract_compiler:StaticFrame:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to abstract_compiler:StaticFrame:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to abstract_compiler:StaticFrame:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to abstract_compiler:StaticFrame:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to abstract_compiler:StaticFrame:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to abstract_compiler:StaticFrame:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to abstract_compiler:StaticFrame:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to abstract_compiler:StaticFrame:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to abstract_compiler:StaticFrame:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__StaticFrame___mpropdef, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#mpropdef */
(nitmethod_t)nit___nit__StaticFrame___arguments, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#arguments */
(nitmethod_t)nit___nit__StaticFrame___visitor_61d, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#visitor= */
(nitmethod_t)nit___nit__StaticFrame___mpropdef_61d, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#mpropdef= */
(nitmethod_t)nit___nit__StaticFrame___receiver_61d, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#receiver= */
(nitmethod_t)nit___nit__StaticFrame___arguments_61d, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#arguments= */
(nitmethod_t)nit___nit__StaticFrame___returnvar_61d, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#returnvar= */
(nitmethod_t)nit___nit__StaticFrame___returnlabel_61d, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#returnlabel= */
(nitmethod_t)nit___nit__StaticFrame___returnvar, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#returnvar */
(nitmethod_t)nit___nit__StaticFrame___returnlabel, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#returnlabel */
(nitmethod_t)nit___nit__StaticFrame___receiver, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#receiver */
(nitmethod_t)nit___nit__StaticFrame___comprehension, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#comprehension */
(nitmethod_t)nit___nit__StaticFrame___comprehension_61d, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#comprehension= */
(nitmethod_t)nit___nit__StaticFrame___escapemark_names, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#escapemark_names */
(nitmethod_t)standard___standard__Object___init, /* pointer to abstract_compiler:StaticFrame:kernel#Object#init */
}
};
/* allocate StaticFrame */
val* NEW_nit__StaticFrame(const struct type* type) {
val* self /* : StaticFrame */;
val* var /* : HashMap[EscapeMark, String] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__StaticFrame;
var = NEW_standard__HashMap(&type_standard__HashMap__nit__EscapeMark__standard__String);
{
standard___standard__HashMap___standard__kernel__Object__init(var); /* Direct call hash_collection#HashMap#init on <var:HashMap[EscapeMark, String]>*/
}
self->attrs[COLOR_nit__abstract_compiler__StaticFrame___escapemark_names].val = var; /* _escapemark_names on <self:StaticFrame exact> */
return self;
}
/* runtime class nit__platform__PlatformPhase */
const struct class class_nit__platform__PlatformPhase = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to platform:PlatformPhase:phase#Phase#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to platform:PlatformPhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to platform:PlatformPhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to platform:PlatformPhase:phase#Phase#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to platform:PlatformPhase:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to platform:PlatformPhase:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to platform:PlatformPhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to platform:PlatformPhase:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to platform:PlatformPhase:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to platform:PlatformPhase:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to platform:PlatformPhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to platform:PlatformPhase:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to platform:PlatformPhase:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to platform:PlatformPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to platform:PlatformPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to platform:PlatformPhase:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to platform:PlatformPhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to platform:PlatformPhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to platform:PlatformPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to platform:PlatformPhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to platform:PlatformPhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to platform:PlatformPhase:phase#Phase#disabled */
(nitmethod_t)nit__modelbuilder___Phase___process_mainmodule, /* pointer to platform:PlatformPhase:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)nit___nit__Phase___process_nmodule, /* pointer to platform:PlatformPhase:phase#Phase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to platform:PlatformPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit__platform___nit__platform__PlatformPhase___nit__phase__Phase__process_annotated_node, /* pointer to platform:PlatformPhase:platform#PlatformPhase#process_annotated_node */
(nitmethod_t)nit___nit__Phase___process_npropdef, /* pointer to platform:PlatformPhase:phase#Phase#process_npropdef */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to platform:PlatformPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to platform:PlatformPhase:phase#Phase#disabled= */
}
};
/* allocate PlatformPhase */
val* NEW_nit__platform__PlatformPhase(const struct type* type) {
val* self /* : PlatformPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__platform__PlatformPhase;
self->attrs[COLOR_nit__phase__Phase___disabled].s = 0; /* _disabled on <self:PlatformPhase exact> */
return self;
}
/* runtime class nit__Platform */
const struct class class_nit__Platform = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to platform:Platform:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to platform:Platform:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to platform:Platform:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to platform:Platform:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to platform:Platform:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to platform:Platform:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to platform:Platform:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to platform:Platform:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to platform:Platform:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to platform:Platform:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to platform:Platform:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to platform:Platform:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to platform:Platform:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to platform:Platform:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to platform:Platform:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to platform:Platform:light_c#Object#from_c_call_context */
(nitmethod_t)nit__abstract_compiler___Platform___toolchain, /* pointer to platform:Platform:abstract_compiler#Platform#toolchain */
(nitmethod_t)nit___nit__Platform___no_main, /* pointer to platform:Platform:platform#Platform#no_main */
(nitmethod_t)nit___nit__Platform___supports_libunwind, /* pointer to platform:Platform:platform#Platform#supports_libunwind */
(nitmethod_t)nit___nit__Platform___supports_linker_script, /* pointer to platform:Platform:platform#Platform#supports_linker_script */
(nitmethod_t)nit___nit__Platform___supports_libgc, /* pointer to platform:Platform:platform#Platform#supports_libgc */
}
};
/* allocate Platform */
val* NEW_nit__Platform(const struct type* type) {
val* self /* : Platform */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__Platform;
return self;
}
/* runtime class nit__InjectedLexer */
/* allocate InjectedLexer */
val* NEW_nit__InjectedLexer(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "InjectedLexer is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__CCompilationUnit */
const struct class class_nit__CCompilationUnit = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to c_tools:CCompilationUnit:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to c_tools:CCompilationUnit:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to c_tools:CCompilationUnit:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to c_tools:CCompilationUnit:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to c_tools:CCompilationUnit:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to c_tools:CCompilationUnit:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to c_tools:CCompilationUnit:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to c_tools:CCompilationUnit:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to c_tools:CCompilationUnit:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to c_tools:CCompilationUnit:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to c_tools:CCompilationUnit:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to c_tools:CCompilationUnit:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to c_tools:CCompilationUnit:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to c_tools:CCompilationUnit:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to c_tools:CCompilationUnit:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to c_tools:CCompilationUnit:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__CCompilationUnit___header_c_types, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#header_c_types */
(nitmethod_t)nit__light___CCompilationUnit___write_as_nitni, /* pointer to c_tools:CCompilationUnit:light#CCompilationUnit#write_as_nitni */
(nitmethod_t)nit___nit__CCompilationUnit___files, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#files */
(nitmethod_t)nit___nit__CCompilationUnit___header_c_base, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#header_c_base */
(nitmethod_t)nit___nit__CCompilationUnit___body_decl, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#body_decl */
(nitmethod_t)nit__light_ffi_base___CCompilationUnit___write_as_impl, /* pointer to c_tools:CCompilationUnit:light_ffi_base#CCompilationUnit#write_as_impl */
(nitmethod_t)nit__light_ffi_base___CCompilationUnit___write_header_to_file, /* pointer to c_tools:CCompilationUnit:light_ffi_base#CCompilationUnit#write_header_to_file */
(nitmethod_t)nit__light_ffi_base___CCompilationUnit___write_body_to_file, /* pointer to c_tools:CCompilationUnit:light_ffi_base#CCompilationUnit#write_body_to_file */
(nitmethod_t)nit___nit__CCompilationUnit___header_custom, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#header_custom */
(nitmethod_t)nit___nit__CCompilationUnit___body_impl, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#body_impl */
(nitmethod_t)nit___nit__CCompilationUnit___compile_header_core, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#compile_header_core */
(nitmethod_t)nit___nit__CCompilationUnit___compile_body_core, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#compile_body_core */
(nitmethod_t)nit___nit__CCompilationUnit___add_exported_function, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#add_exported_function */
(nitmethod_t)nit___nit__CCompilationUnit___header_decl, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#header_decl */
(nitmethod_t)nit___nit__CCompilationUnit___body_custom, /* pointer to c_tools:CCompilationUnit:c_tools#CCompilationUnit#body_custom */
}
};
/* allocate CCompilationUnit */
val* NEW_nit__CCompilationUnit(const struct type* type) {
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
self->class = &class_nit__CCompilationUnit;
var = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:Template>*/
}
self->attrs[COLOR_nit__c_tools__CCompilationUnit___header_c_base].val = var; /* _header_c_base on <self:CCompilationUnit exact> */
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
self->attrs[COLOR_nit__c_tools__CCompilationUnit___header_custom].val = var1; /* _header_custom on <self:CCompilationUnit exact> */
var2 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var2->class->vft[COLOR_standard__kernel__Object__init]))(var2); /* init on <var2:Template>*/
}
self->attrs[COLOR_nit__c_tools__CCompilationUnit___header_c_types].val = var2; /* _header_c_types on <self:CCompilationUnit exact> */
var3 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3); /* init on <var3:Template>*/
}
self->attrs[COLOR_nit__c_tools__CCompilationUnit___header_decl].val = var3; /* _header_decl on <self:CCompilationUnit exact> */
var4 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var4->class->vft[COLOR_standard__kernel__Object__init]))(var4); /* init on <var4:Template>*/
}
self->attrs[COLOR_nit__c_tools__CCompilationUnit___body_decl].val = var4; /* _body_decl on <self:CCompilationUnit exact> */
var5 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var5->class->vft[COLOR_standard__kernel__Object__init]))(var5); /* init on <var5:Template>*/
}
self->attrs[COLOR_nit__c_tools__CCompilationUnit___body_custom].val = var5; /* _body_custom on <self:CCompilationUnit exact> */
var6 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var6->class->vft[COLOR_standard__kernel__Object__init]))(var6); /* init on <var6:Template>*/
}
self->attrs[COLOR_nit__c_tools__CCompilationUnit___body_impl].val = var6; /* _body_impl on <self:CCompilationUnit exact> */
var7 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[String]>*/
}
self->attrs[COLOR_nit__c_tools__CCompilationUnit___files].val = var7; /* _files on <self:CCompilationUnit exact> */
return self;
}
/* runtime class nit__CFunction */
/* allocate CFunction */
val* NEW_nit__CFunction(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CFunction is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__ExternFile */
/* allocate ExternFile */
val* NEW_nit__ExternFile(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ExternFile is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__ExternCFile */
const struct class class_nit__ExternCFile = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__ExternCFile___standard__kernel__Object__init, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to c_tools:ExternCFile:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to c_tools:ExternCFile:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to c_tools:ExternCFile:string#Object#to_s */
(nitmethod_t)nit___nit__ExternCFile___standard__kernel__Object___61d_61d, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to c_tools:ExternCFile:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to c_tools:ExternCFile:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to c_tools:ExternCFile:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to c_tools:ExternCFile:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to c_tools:ExternCFile:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to c_tools:ExternCFile:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to c_tools:ExternCFile:string#Object#native_class_name */
(nitmethod_t)nit___nit__ExternCFile___standard__kernel__Object__hash, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to c_tools:ExternCFile:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to c_tools:ExternCFile:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to c_tools:ExternCFile:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__ExternFile___filename_61d, /* pointer to c_tools:ExternCFile:c_tools#ExternFile#filename= */
(nitmethod_t)nit___nit__ExternFile___pkgconfigs, /* pointer to c_tools:ExternCFile:c_tools#ExternFile#pkgconfigs */
(nitmethod_t)nit___nit__ExternCFile___ExternFile__makefile_rule_name, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#makefile_rule_name */
(nitmethod_t)nit___nit__ExternFile___filename, /* pointer to c_tools:ExternCFile:c_tools#ExternFile#filename */
(nitmethod_t)nit___nit__ExternCFile___ExternFile__makefile_rule_content, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#makefile_rule_content */
(nitmethod_t)nit___nit__ExternCFile___ExternFile__compiles_to_o_file, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#compiles_to_o_file */
(nitmethod_t)nit___nit__ExternFile___add_to_jar, /* pointer to c_tools:ExternCFile:c_tools#ExternFile#add_to_jar */
(nitmethod_t)standard___standard__Object___init, /* pointer to c_tools:ExternCFile:kernel#Object#init */
(nitmethod_t)nit___nit__ExternCFile___cflags_61d, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#cflags= */
(nitmethod_t)nit___nit__ExternCFile___cflags, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#cflags */
(nitmethod_t)nit___nit__ExternFile___standard__kernel__Object__init, /* pointer to c_tools:ExternCFile:c_tools#ExternFile#init */
}
};
/* allocate ExternCFile */
val* NEW_nit__ExternCFile(const struct type* type) {
val* self /* : ExternCFile */;
val* var /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ExternCFile;
var = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[String]>*/
}
self->attrs[COLOR_nit__c_tools__ExternFile___pkgconfigs].val = var; /* _pkgconfigs on <self:ExternCFile exact> */
return self;
}
/* runtime class counter__Counter */
/* allocate Counter[nullable Object] */
val* NEW_counter__Counter(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Counter is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class counter__CounterComparator */
/* allocate CounterComparator[nullable Object] */
val* NEW_counter__CounterComparator(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CounterComparator is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__POSetConflictGraph */
const struct class class_nit__POSetConflictGraph = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__POSetConflictGraph___standard__kernel__Object__init, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to coloring:POSetConflictGraph:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to coloring:POSetConflictGraph:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to coloring:POSetConflictGraph:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to coloring:POSetConflictGraph:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to coloring:POSetConflictGraph:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to coloring:POSetConflictGraph:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to coloring:POSetConflictGraph:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to coloring:POSetConflictGraph:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to coloring:POSetConflictGraph:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to coloring:POSetConflictGraph:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to coloring:POSetConflictGraph:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to coloring:POSetConflictGraph:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to coloring:POSetConflictGraph:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to coloring:POSetConflictGraph:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to coloring:POSetConflictGraph:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__POSetConflictGraph___poset, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#poset */
(nitmethod_t)nit___nit__POSetConflictGraph___poset_61d, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#poset= */
(nitmethod_t)nit___nit__POSetConflictGraph___conflicts, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#conflicts */
(nitmethod_t)nit___nit__POSetConflictGraph___border, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#border */
(nitmethod_t)nit___nit__POSetConflictGraph___crown, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#crown */
(nitmethod_t)nit___nit__POSetConflictGraph___extract_core, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#extract_core */
(nitmethod_t)nit___nit__POSetConflictGraph___extract_border, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#extract_border */
(nitmethod_t)nit___nit__POSetConflictGraph___extract_crown, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#extract_crown */
(nitmethod_t)nit___nit__POSetConflictGraph___compute_conflicts, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#compute_conflicts */
(nitmethod_t)nit___nit__POSetConflictGraph___order_61d, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#order= */
(nitmethod_t)nit___nit__POSetConflictGraph___order, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#order */
(nitmethod_t)nit___nit__POSetConflictGraph___core, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#core */
(nitmethod_t)nit___nit__POSetConflictGraph___is_border, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#is_border */
(nitmethod_t)nit___nit__POSetConflictGraph___add_conflicts, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#add_conflicts */
(nitmethod_t)nit___nit__POSetConflictGraph___add_conflict, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#add_conflict */
}
};
/* allocate POSetConflictGraph[nullable Object] */
val* NEW_nit__POSetConflictGraph(const struct type* type) {
val* self /* : POSetConflictGraph[nullable Object] */;
val* var /* : HashSet[nullable Object] */;
val* var1 /* : HashSet[nullable Object] */;
val* var2 /* : HashSet[nullable Object] */;
val* var3 /* : HashMap[nullable Object, Set[nullable Object]] */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__POSetConflictGraph;
var = NEW_standard__HashSet(self->type->resolution_table->types[COLOR_standard__HashSet__nit__POSetConflictGraph___35dE]);
{
standard___standard__HashSet___standard__kernel__Object__init(var); /* Direct call hash_collection#HashSet#init on <var:HashSet[nullable Object]>*/
}
self->attrs[COLOR_nit__coloring__POSetConflictGraph___core].val = var; /* _core on <self:POSetConflictGraph[nullable Object] exact> */
var1 = NEW_standard__HashSet(self->type->resolution_table->types[COLOR_standard__HashSet__nit__POSetConflictGraph___35dE]);
{
standard___standard__HashSet___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashSet#init on <var1:HashSet[nullable Object]>*/
}
self->attrs[COLOR_nit__coloring__POSetConflictGraph___border].val = var1; /* _border on <self:POSetConflictGraph[nullable Object] exact> */
var2 = NEW_standard__HashSet(self->type->resolution_table->types[COLOR_standard__HashSet__nit__POSetConflictGraph___35dE]);
{
standard___standard__HashSet___standard__kernel__Object__init(var2); /* Direct call hash_collection#HashSet#init on <var2:HashSet[nullable Object]>*/
}
self->attrs[COLOR_nit__coloring__POSetConflictGraph___crown].val = var2; /* _crown on <self:POSetConflictGraph[nullable Object] exact> */
var3 = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__nit__POSetConflictGraph___35dE__standard__Set__nit__POSetConflictGraph___35dE]);
{
standard___standard__HashMap___standard__kernel__Object__init(var3); /* Direct call hash_collection#HashMap#init on <var3:HashMap[nullable Object, Set[nullable Object]]>*/
}
self->attrs[COLOR_nit__coloring__POSetConflictGraph___conflicts].val = var3; /* _conflicts on <self:POSetConflictGraph[nullable Object] exact> */
return self;
}
/* runtime class nit__POSetColorer */
const struct class class_nit__POSetColorer = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to coloring:POSetColorer:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to coloring:POSetColorer:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to coloring:POSetColorer:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to coloring:POSetColorer:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to coloring:POSetColorer:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to coloring:POSetColorer:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to coloring:POSetColorer:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to coloring:POSetColorer:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to coloring:POSetColorer:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to coloring:POSetColorer:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to coloring:POSetColorer:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to coloring:POSetColorer:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to coloring:POSetColorer:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to coloring:POSetColorer:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to coloring:POSetColorer:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to coloring:POSetColorer:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__POSetColorer___colorize, /* pointer to coloring:POSetColorer:coloring#POSetColorer#colorize */
(nitmethod_t)nit___nit__POSetColorer___ids, /* pointer to coloring:POSetColorer:coloring#POSetColorer#ids */
(nitmethod_t)nit___nit__POSetColorer___colors, /* pointer to coloring:POSetColorer:coloring#POSetColorer#colors */
(nitmethod_t)nit___nit__POSetColorer___conflicts, /* pointer to coloring:POSetColorer:coloring#POSetColorer#conflicts */
(nitmethod_t)nit___nit__POSetColorer___poset_cache_61d, /* pointer to coloring:POSetColorer:coloring#POSetColorer#poset_cache= */
(nitmethod_t)nit___nit__POSetColorer___graph_61d, /* pointer to coloring:POSetColorer:coloring#POSetColorer#graph= */
(nitmethod_t)nit___nit__POSetColorer___allocate_ids, /* pointer to coloring:POSetColorer:coloring#POSetColorer#allocate_ids */
(nitmethod_t)nit___nit__POSetColorer___compute_colors, /* pointer to coloring:POSetColorer:coloring#POSetColorer#compute_colors */
(nitmethod_t)nit___nit__POSetColorer___conflicts_cache_61d, /* pointer to coloring:POSetColorer:coloring#POSetColorer#conflicts_cache= */
(nitmethod_t)nit___nit__POSetColorer___graph, /* pointer to coloring:POSetColorer:coloring#POSetColorer#graph */
(nitmethod_t)nit___nit__POSetColorer___is_colored_61d, /* pointer to coloring:POSetColorer:coloring#POSetColorer#is_colored= */
(nitmethod_t)nit___nit__POSetColorer___is_colored, /* pointer to coloring:POSetColorer:coloring#POSetColorer#is_colored */
(nitmethod_t)nit___nit__POSetColorer___ids_cache, /* pointer to coloring:POSetColorer:coloring#POSetColorer#ids_cache */
(nitmethod_t)nit___nit__POSetColorer___colors_cache, /* pointer to coloring:POSetColorer:coloring#POSetColorer#colors_cache */
(nitmethod_t)nit___nit__POSetColorer___conflicts_cache, /* pointer to coloring:POSetColorer:coloring#POSetColorer#conflicts_cache */
(nitmethod_t)nit___nit__POSetColorer___poset_cache, /* pointer to coloring:POSetColorer:coloring#POSetColorer#poset_cache */
(nitmethod_t)nit___nit__POSetColorer___colorize_core, /* pointer to coloring:POSetColorer:coloring#POSetColorer#colorize_core */
(nitmethod_t)nit___nit__POSetColorer___colorize_set, /* pointer to coloring:POSetColorer:coloring#POSetColorer#colorize_set */
(nitmethod_t)nit___nit__POSetColorer___min_color, /* pointer to coloring:POSetColorer:coloring#POSetColorer#min_color */
(nitmethod_t)nit___nit__POSetColorer___is_color_free, /* pointer to coloring:POSetColorer:coloring#POSetColorer#is_color_free */
}
};
/* allocate POSetColorer[Object] */
val* NEW_nit__POSetColorer(const struct type* type) {
val* self /* : POSetColorer[Object] */;
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Int] */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__POSetColorer;
self->attrs[COLOR_nit__coloring__POSetColorer___is_colored].s = 0; /* _is_colored on <self:POSetColorer[Object] exact> */
var = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__nit__POSetColorer___35dE__standard__Int]);
{
standard___standard__HashMap___standard__kernel__Object__init(var); /* Direct call hash_collection#HashMap#init on <var:HashMap[Object, Int]>*/
}
self->attrs[COLOR_nit__coloring__POSetColorer___ids_cache].val = var; /* _ids_cache on <self:POSetColorer[Object] exact> */
var1 = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__nit__POSetColorer___35dE__standard__Int]);
{
standard___standard__HashMap___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[Object, Int]>*/
}
self->attrs[COLOR_nit__coloring__POSetColorer___colors_cache].val = var1; /* _colors_cache on <self:POSetColorer[Object] exact> */
return self;
}
/* runtime class nit__POSetGroupColorer */
const struct class class_nit__POSetGroupColorer = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__POSetGroupColorer___standard__kernel__Object__init, /* pointer to coloring:POSetGroupColorer:coloring#POSetGroupColorer#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to coloring:POSetGroupColorer:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to coloring:POSetGroupColorer:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to coloring:POSetGroupColorer:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to coloring:POSetGroupColorer:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to coloring:POSetGroupColorer:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to coloring:POSetGroupColorer:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to coloring:POSetGroupColorer:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to coloring:POSetGroupColorer:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to coloring:POSetGroupColorer:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to coloring:POSetGroupColorer:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to coloring:POSetGroupColorer:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to coloring:POSetGroupColorer:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to coloring:POSetGroupColorer:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to coloring:POSetGroupColorer:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to coloring:POSetGroupColorer:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__POSetGroupColorer___graph, /* pointer to coloring:POSetGroupColorer:coloring#POSetGroupColorer#graph */
(nitmethod_t)nit___nit__POSetGroupColorer___used_colors, /* pointer to coloring:POSetGroupColorer:coloring#POSetGroupColorer#used_colors */
(nitmethod_t)nit___nit__POSetGroupColorer___compute_colors, /* pointer to coloring:POSetGroupColorer:coloring#POSetGroupColorer#compute_colors */
(nitmethod_t)nit___nit__POSetGroupColorer___colors_cache, /* pointer to coloring:POSetGroupColorer:coloring#POSetGroupColorer#colors_cache */
(nitmethod_t)nit___nit__POSetGroupColorer___graph_61d, /* pointer to coloring:POSetGroupColorer:coloring#POSetGroupColorer#graph= */
(nitmethod_t)nit___nit__POSetGroupColorer___buckets_61d, /* pointer to coloring:POSetGroupColorer:coloring#POSetGroupColorer#buckets= */
(nitmethod_t)nit___nit__POSetGroupColorer___colors, /* pointer to coloring:POSetGroupColorer:coloring#POSetGroupColorer#colors */
(nitmethod_t)nit___nit__POSetGroupColorer___build_layout, /* pointer to coloring:POSetGroupColorer:coloring#POSetGroupColorer#build_layout */
(nitmethod_t)nit___nit__POSetGroupColorer___colorize_core, /* pointer to coloring:POSetGroupColorer:coloring#POSetGroupColorer#colorize_core */
(nitmethod_t)nit___nit__POSetGroupColorer___colorize_set, /* pointer to coloring:POSetGroupColorer:coloring#POSetGroupColorer#colorize_set */
(nitmethod_t)nit___nit__POSetGroupColorer___poset, /* pointer to coloring:POSetGroupColorer:coloring#POSetGroupColorer#poset */
(nitmethod_t)nit___nit__POSetGroupColorer___buckets, /* pointer to coloring:POSetGroupColorer:coloring#POSetGroupColorer#buckets */
(nitmethod_t)nit___nit__POSetGroupColorer___inherit_color, /* pointer to coloring:POSetGroupColorer:coloring#POSetGroupColorer#inherit_color */
(nitmethod_t)nit___nit__POSetGroupColorer___next_free_color, /* pointer to coloring:POSetGroupColorer:coloring#POSetGroupColorer#next_free_color */
(nitmethod_t)nit___nit__POSetGroupColorer___min_colors, /* pointer to coloring:POSetGroupColorer:coloring#POSetGroupColorer#min_colors */
(nitmethod_t)standard___standard__Object___init, /* pointer to coloring:POSetGroupColorer:kernel#Object#init */
}
};
/* allocate POSetGroupColorer[Object, Object] */
val* NEW_nit__POSetGroupColorer(const struct type* type) {
val* self /* : POSetGroupColorer[Object, Object] */;
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, HashSet[Int]] */;
val* var2 /* : HashMap[Object, Int] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__POSetGroupColorer;
var = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__nit__POSetGroupColorer___35dE__standard__Int]);
{
standard___standard__HashMap___standard__kernel__Object__init(var); /* Direct call hash_collection#HashMap#init on <var:HashMap[Object, Int]>*/
}
self->attrs[COLOR_nit__coloring__POSetGroupColorer___colors_cache].val = var; /* _colors_cache on <self:POSetGroupColorer[Object, Object] exact> */
var1 = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__nit__POSetGroupColorer___35dH__standard__HashSet__standard__Int]);
{
standard___standard__HashMap___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[Object, HashSet[Int]]>*/
}
self->attrs[COLOR_nit__coloring__POSetGroupColorer___used_colors].val = var1; /* _used_colors on <self:POSetGroupColorer[Object, Object] exact> */
var2 = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__nit__POSetGroupColorer___35dH__standard__Int]);
{
standard___standard__HashMap___standard__kernel__Object__init(var2); /* Direct call hash_collection#HashMap#init on <var2:HashMap[Object, Int]>*/
}
self->attrs[COLOR_nit__coloring__POSetGroupColorer___min_colors].val = var2; /* _min_colors on <self:POSetGroupColorer[Object, Object] exact> */
return self;
}
/* runtime class nit__BucketsColorer */
const struct class class_nit__BucketsColorer = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to coloring:BucketsColorer:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to coloring:BucketsColorer:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to coloring:BucketsColorer:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to coloring:BucketsColorer:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to coloring:BucketsColorer:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to coloring:BucketsColorer:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to coloring:BucketsColorer:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to coloring:BucketsColorer:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to coloring:BucketsColorer:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to coloring:BucketsColorer:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to coloring:BucketsColorer:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to coloring:BucketsColorer:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to coloring:BucketsColorer:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to coloring:BucketsColorer:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to coloring:BucketsColorer:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to coloring:BucketsColorer:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__BucketsColorer___colorize, /* pointer to coloring:BucketsColorer:coloring#BucketsColorer#colorize */
(nitmethod_t)nit___nit__BucketsColorer___compute_conflicts, /* pointer to coloring:BucketsColorer:coloring#BucketsColorer#compute_conflicts */
(nitmethod_t)nit___nit__BucketsColorer___colors, /* pointer to coloring:BucketsColorer:coloring#BucketsColorer#colors */
(nitmethod_t)nit___nit__BucketsColorer___is_color_free, /* pointer to coloring:BucketsColorer:coloring#BucketsColorer#is_color_free */
(nitmethod_t)nit___nit__BucketsColorer___conflicts, /* pointer to coloring:BucketsColorer:coloring#BucketsColorer#conflicts */
}
};
/* allocate BucketsColorer[Object, Object] */
val* NEW_nit__BucketsColorer(const struct type* type) {
val* self /* : BucketsColorer[Object, Object] */;
val* var /* : HashMap[Object, Int] */;
val* var1 /* : HashMap[Object, Set[Object]] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__BucketsColorer;
var = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__nit__BucketsColorer___35dE__standard__Int]);
{
standard___standard__HashMap___standard__kernel__Object__init(var); /* Direct call hash_collection#HashMap#init on <var:HashMap[Object, Int]>*/
}
self->attrs[COLOR_nit__coloring__BucketsColorer___colors].val = var; /* _colors on <self:BucketsColorer[Object, Object] exact> */
var1 = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__nit__BucketsColorer___35dE__standard__Set__nit__BucketsColorer___35dE]);
{
standard___standard__HashMap___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[Object, Set[Object]]>*/
}
self->attrs[COLOR_nit__coloring__BucketsColorer___conflicts].val = var1; /* _conflicts on <self:BucketsColorer[Object, Object] exact> */
return self;
}
/* runtime class nit__POSetBucketsColorer */
const struct class class_nit__POSetBucketsColorer = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__POSetBucketsColorer___standard__kernel__Object__init, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to coloring:POSetBucketsColorer:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to coloring:POSetBucketsColorer:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to coloring:POSetBucketsColorer:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to coloring:POSetBucketsColorer:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to coloring:POSetBucketsColorer:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to coloring:POSetBucketsColorer:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to coloring:POSetBucketsColorer:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to coloring:POSetBucketsColorer:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to coloring:POSetBucketsColorer:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to coloring:POSetBucketsColorer:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to coloring:POSetBucketsColorer:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to coloring:POSetBucketsColorer:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to coloring:POSetBucketsColorer:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to coloring:POSetBucketsColorer:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to coloring:POSetBucketsColorer:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__POSetBucketsColorer___poset_61d, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#poset= */
(nitmethod_t)nit___nit__POSetBucketsColorer___conflicts_61d, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#conflicts= */
(nitmethod_t)nit___nit__POSetBucketsColorer___colorize, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#colorize */
(nitmethod_t)nit___nit__POSetBucketsColorer___colors, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#colors */
(nitmethod_t)nit___nit__POSetBucketsColorer___poset, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#poset */
(nitmethod_t)nit___nit__POSetBucketsColorer___min_color, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#min_color */
(nitmethod_t)nit___nit__POSetBucketsColorer___is_color_free, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#is_color_free */
(nitmethod_t)nit___nit__POSetBucketsColorer___max_color, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#max_color */
(nitmethod_t)nit___nit__POSetBucketsColorer___conflicts, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#conflicts */
(nitmethod_t)standard___standard__Object___init, /* pointer to coloring:POSetBucketsColorer:kernel#Object#init */
}
};
/* allocate POSetBucketsColorer[Object, Object] */
val* NEW_nit__POSetBucketsColorer(const struct type* type) {
val* self /* : POSetBucketsColorer[Object, Object] */;
val* var /* : HashMap[Object, Int] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__POSetBucketsColorer;
var = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__nit__POSetBucketsColorer___35dE__standard__Int]);
{
standard___standard__HashMap___standard__kernel__Object__init(var); /* Direct call hash_collection#HashMap#init on <var:HashMap[Object, Int]>*/
}
self->attrs[COLOR_nit__coloring__POSetBucketsColorer___colors].val = var; /* _colors on <self:POSetBucketsColorer[Object, Object] exact> */
return self;
}
/* runtime class nit__CallContext */
const struct class class_nit__CallContext = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to nitni_utilities:CallContext:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to nitni_utilities:CallContext:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to nitni_utilities:CallContext:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to nitni_utilities:CallContext:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to nitni_utilities:CallContext:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to nitni_utilities:CallContext:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to nitni_utilities:CallContext:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to nitni_utilities:CallContext:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to nitni_utilities:CallContext:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to nitni_utilities:CallContext:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to nitni_utilities:CallContext:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to nitni_utilities:CallContext:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to nitni_utilities:CallContext:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to nitni_utilities:CallContext:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to nitni_utilities:CallContext:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to nitni_utilities:CallContext:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__CallContext___name_mtype, /* pointer to nitni_utilities:CallContext:nitni_utilities#CallContext#name_mtype */
}
};
/* allocate CallContext */
val* NEW_nit__CallContext(const struct type* type) {
val* self /* : CallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__CallContext;
return self;
}
/* runtime class nit__SignatureLength */
const struct class class_nit__SignatureLength = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__SignatureLength___standard__kernel__Object__init, /* pointer to nitni_utilities:SignatureLength:nitni_utilities#SignatureLength#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to nitni_utilities:SignatureLength:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to nitni_utilities:SignatureLength:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to nitni_utilities:SignatureLength:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to nitni_utilities:SignatureLength:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to nitni_utilities:SignatureLength:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to nitni_utilities:SignatureLength:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to nitni_utilities:SignatureLength:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to nitni_utilities:SignatureLength:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to nitni_utilities:SignatureLength:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to nitni_utilities:SignatureLength:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to nitni_utilities:SignatureLength:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to nitni_utilities:SignatureLength:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to nitni_utilities:SignatureLength:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to nitni_utilities:SignatureLength:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to nitni_utilities:SignatureLength:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__SignatureLength___long, /* pointer to nitni_utilities:SignatureLength:nitni_utilities#SignatureLength#long */
(nitmethod_t)nit___nit__SignatureLength___long_61d, /* pointer to nitni_utilities:SignatureLength:nitni_utilities#SignatureLength#long= */
(nitmethod_t)standard___standard__Object___init, /* pointer to nitni_utilities:SignatureLength:kernel#Object#init */
}
};
/* allocate SignatureLength */
val* NEW_nit__SignatureLength(const struct type* type) {
val* self /* : SignatureLength */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__SignatureLength;
return self;
}
/* runtime class nit__FFILanguageAssignationPhase */
const struct class class_nit__FFILanguageAssignationPhase = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to light_ffi_base:FFILanguageAssignationPhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to light_ffi_base:FFILanguageAssignationPhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to light_ffi_base:FFILanguageAssignationPhase:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to light_ffi_base:FFILanguageAssignationPhase:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to light_ffi_base:FFILanguageAssignationPhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to light_ffi_base:FFILanguageAssignationPhase:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to light_ffi_base:FFILanguageAssignationPhase:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to light_ffi_base:FFILanguageAssignationPhase:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to light_ffi_base:FFILanguageAssignationPhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to light_ffi_base:FFILanguageAssignationPhase:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to light_ffi_base:FFILanguageAssignationPhase:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to light_ffi_base:FFILanguageAssignationPhase:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to light_ffi_base:FFILanguageAssignationPhase:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to light_ffi_base:FFILanguageAssignationPhase:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#disabled */
(nitmethod_t)nit__modelbuilder___Phase___process_mainmodule, /* pointer to light_ffi_base:FFILanguageAssignationPhase:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)nit___nit__FFILanguageAssignationPhase___nit__phase__Phase__process_nmodule, /* pointer to light_ffi_base:FFILanguageAssignationPhase:light_ffi_base#FFILanguageAssignationPhase#process_nmodule */
(nitmethod_t)nit___nit__FFILanguageAssignationPhase___nit__phase__Phase__process_nclassdef, /* pointer to light_ffi_base:FFILanguageAssignationPhase:light_ffi_base#FFILanguageAssignationPhase#process_nclassdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nit___nit__FFILanguageAssignationPhase___nit__phase__Phase__process_npropdef, /* pointer to light_ffi_base:FFILanguageAssignationPhase:light_ffi_base#FFILanguageAssignationPhase#process_npropdef */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#disabled= */
(nitmethod_t)nit___nit__FFILanguageAssignationPhase___languages, /* pointer to light_ffi_base:FFILanguageAssignationPhase:light_ffi_base#FFILanguageAssignationPhase#languages */
(nitmethod_t)nit___nit__FFILanguageAssignationPhase___verify_foreign_code_on_node, /* pointer to light_ffi_base:FFILanguageAssignationPhase:light_ffi_base#FFILanguageAssignationPhase#verify_foreign_code_on_node */
}
};
/* allocate FFILanguageAssignationPhase */
val* NEW_nit__FFILanguageAssignationPhase(const struct type* type) {
val* self /* : FFILanguageAssignationPhase */;
val* var /* : Array[FFILanguage] */;
val* var1 /* : CLanguage */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__FFILanguageAssignationPhase;
self->attrs[COLOR_nit__phase__Phase___disabled].s = 0; /* _disabled on <self:FFILanguageAssignationPhase exact> */
var = NEW_standard__Array(&type_standard__Array__nit__FFILanguage);
{
standard___standard__Array___standard__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[FFILanguage]>*/
}
self->attrs[COLOR_nit__light_ffi_base__FFILanguageAssignationPhase___languages].val = var; /* _languages on <self:FFILanguageAssignationPhase exact> */
var1 = NEW_nit__CLanguage(&type_nit__CLanguage);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nit__light_ffi_base__FFILanguage__ffi_language_assignation_phase_61d]))(var1, self); /* ffi_language_assignation_phase= on <var1:CLanguage>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:CLanguage>*/
}
self->attrs[COLOR_nit__light_c__FFILanguageAssignationPhase___c_language].val = var1; /* _c_language on <self:FFILanguageAssignationPhase exact> */
return self;
}
/* runtime class nit__FFILanguage */
/* allocate FFILanguage */
val* NEW_nit__FFILanguage(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "FFILanguage is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__ForeignType */
const struct class class_nit__ForeignType = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to light_ffi_base:ForeignType:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to light_ffi_base:ForeignType:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to light_ffi_base:ForeignType:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to light_ffi_base:ForeignType:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to light_ffi_base:ForeignType:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to light_ffi_base:ForeignType:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to light_ffi_base:ForeignType:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to light_ffi_base:ForeignType:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to light_ffi_base:ForeignType:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to light_ffi_base:ForeignType:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to light_ffi_base:ForeignType:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to light_ffi_base:ForeignType:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to light_ffi_base:ForeignType:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to light_ffi_base:ForeignType:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to light_ffi_base:ForeignType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to light_ffi_base:ForeignType:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__ForeignType___ctype, /* pointer to light_ffi_base:ForeignType:light_ffi_base#ForeignType#ctype */
}
};
/* allocate ForeignType */
val* NEW_nit__ForeignType(const struct type* type) {
val* self /* : ForeignType */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ForeignType;
return self;
}
/* runtime class nit__extern_classes__ExternClassesTypingPhaseAst */
const struct class class_nit__extern_classes__ExternClassesTypingPhaseAst = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to extern_classes:ExternClassesTypingPhaseAst:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to extern_classes:ExternClassesTypingPhaseAst:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to extern_classes:ExternClassesTypingPhaseAst:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to extern_classes:ExternClassesTypingPhaseAst:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to extern_classes:ExternClassesTypingPhaseAst:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to extern_classes:ExternClassesTypingPhaseAst:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseAst:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseAst:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#disabled */
(nitmethod_t)nit__modelbuilder___Phase___process_mainmodule, /* pointer to extern_classes:ExternClassesTypingPhaseAst:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)nit___nit__Phase___process_nmodule, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#process_nmodule */
(nitmethod_t)nit__extern_classes___nit__extern_classes__ExternClassesTypingPhaseAst___nit__phase__Phase__process_nclassdef, /* pointer to extern_classes:ExternClassesTypingPhaseAst:extern_classes#ExternClassesTypingPhaseAst#process_nclassdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#process_annotated_node */
(nitmethod_t)nit___nit__Phase___process_npropdef, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#process_npropdef */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#disabled= */
}
};
/* allocate ExternClassesTypingPhaseAst */
val* NEW_nit__extern_classes__ExternClassesTypingPhaseAst(const struct type* type) {
val* self /* : ExternClassesTypingPhaseAst */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__extern_classes__ExternClassesTypingPhaseAst;
self->attrs[COLOR_nit__phase__Phase___disabled].s = 0; /* _disabled on <self:ExternClassesTypingPhaseAst exact> */
return self;
}
/* runtime class nit__extern_classes__ExternClassesTypingPhaseModel */
const struct class class_nit__extern_classes__ExternClassesTypingPhaseModel = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to extern_classes:ExternClassesTypingPhaseModel:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to extern_classes:ExternClassesTypingPhaseModel:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to extern_classes:ExternClassesTypingPhaseModel:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to extern_classes:ExternClassesTypingPhaseModel:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to extern_classes:ExternClassesTypingPhaseModel:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to extern_classes:ExternClassesTypingPhaseModel:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseModel:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to extern_classes:ExternClassesTypingPhaseModel:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#disabled */
(nitmethod_t)nit__modelbuilder___Phase___process_mainmodule, /* pointer to extern_classes:ExternClassesTypingPhaseModel:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)nit___nit__Phase___process_nmodule, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#process_nmodule */
(nitmethod_t)nit__extern_classes___nit__extern_classes__ExternClassesTypingPhaseModel___nit__phase__Phase__process_nclassdef, /* pointer to extern_classes:ExternClassesTypingPhaseModel:extern_classes#ExternClassesTypingPhaseModel#process_nclassdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#process_annotated_node */
(nitmethod_t)nit___nit__Phase___process_npropdef, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#process_npropdef */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#disabled= */
}
};
/* allocate ExternClassesTypingPhaseModel */
val* NEW_nit__extern_classes__ExternClassesTypingPhaseModel(const struct type* type) {
val* self /* : ExternClassesTypingPhaseModel */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__extern_classes__ExternClassesTypingPhaseModel;
self->attrs[COLOR_nit__phase__Phase___disabled].s = 0; /* _disabled on <self:ExternClassesTypingPhaseModel exact> */
return self;
}
/* runtime class nit__CLanguage */
const struct class class_nit__CLanguage = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__FFILanguage___standard__kernel__Object__init, /* pointer to light_c:CLanguage:light_ffi_base#FFILanguage#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to light_c:CLanguage:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to light_c:CLanguage:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to light_c:CLanguage:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to light_c:CLanguage:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to light_c:CLanguage:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to light_c:CLanguage:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to light_c:CLanguage:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to light_c:CLanguage:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to light_c:CLanguage:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to light_c:CLanguage:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to light_c:CLanguage:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to light_c:CLanguage:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to light_c:CLanguage:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to light_c:CLanguage:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to light_c:CLanguage:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__FFILanguage___ffi_language_assignation_phase_61d, /* pointer to light_c:CLanguage:light_ffi_base#FFILanguage#ffi_language_assignation_phase= */
(nitmethod_t)nit___nit__FFILanguage___ffi_language_assignation_phase, /* pointer to light_c:CLanguage:light_ffi_base#FFILanguage#ffi_language_assignation_phase */
(nitmethod_t)nit___nit__CLanguage___nit__light_ffi_base__FFILanguage__get_ftype, /* pointer to light_c:CLanguage:light_c#CLanguage#get_ftype */
(nitmethod_t)nit___nit__CLanguage___nit__light_ffi_base__FFILanguage__identify_language, /* pointer to light_c:CLanguage:light_c#CLanguage#identify_language */
(nitmethod_t)nit___nit__CLanguage___nit__light_ffi_base__FFILanguage__compile_module_block, /* pointer to light_c:CLanguage:light_c#CLanguage#compile_module_block */
(nitmethod_t)nit___nit__CLanguage___nit__light_ffi_base__FFILanguage__compile_extern_class, /* pointer to light_c:CLanguage:light_c#CLanguage#compile_extern_class */
(nitmethod_t)nit___nit__CLanguage___nit__light_ffi_base__FFILanguage__compile_extern_method, /* pointer to light_c:CLanguage:light_c#CLanguage#compile_extern_method */
}
};
/* allocate CLanguage */
val* NEW_nit__CLanguage(const struct type* type) {
val* self /* : CLanguage */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__CLanguage;
return self;
}
/* runtime class nit__ForeignCType */
const struct class class_nit__ForeignCType = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__ForeignCType___standard__kernel__Object__init, /* pointer to light_c:ForeignCType:light_c#ForeignCType#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to light_c:ForeignCType:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to light_c:ForeignCType:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to light_c:ForeignCType:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to light_c:ForeignCType:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to light_c:ForeignCType:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to light_c:ForeignCType:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to light_c:ForeignCType:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to light_c:ForeignCType:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to light_c:ForeignCType:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to light_c:ForeignCType:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to light_c:ForeignCType:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to light_c:ForeignCType:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to light_c:ForeignCType:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to light_c:ForeignCType:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to light_c:ForeignCType:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__ForeignCType___nit__light_ffi_base__ForeignType__ctype, /* pointer to light_c:ForeignCType:light_c#ForeignCType#ctype */
(nitmethod_t)nit___nit__ForeignCType___ctype_61d, /* pointer to light_c:ForeignCType:light_c#ForeignCType#ctype= */
(nitmethod_t)standard___standard__Object___init, /* pointer to light_c:ForeignCType:kernel#Object#init */
}
};
/* allocate ForeignCType */
val* NEW_nit__ForeignCType(const struct type* type) {
val* self /* : ForeignCType */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ForeignCType;
return self;
}
/* runtime class nit__ToCCallContext */
/* allocate ToCCallContext */
val* NEW_nit__ToCCallContext(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ToCCallContext is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nit__FromCCallContext */
const struct class class_nit__FromCCallContext = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___init, /* pointer to light_c:FromCCallContext:kernel#Object#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to light_c:FromCCallContext:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to light_c:FromCCallContext:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to light_c:FromCCallContext:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to light_c:FromCCallContext:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to light_c:FromCCallContext:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to light_c:FromCCallContext:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to light_c:FromCCallContext:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to light_c:FromCCallContext:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to light_c:FromCCallContext:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to light_c:FromCCallContext:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to light_c:FromCCallContext:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to light_c:FromCCallContext:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to light_c:FromCCallContext:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to light_c:FromCCallContext:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to light_c:FromCCallContext:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__FromCCallContext___nit__nitni_utilities__CallContext__name_mtype, /* pointer to light_c:FromCCallContext:light_c#FromCCallContext#name_mtype */
}
};
/* allocate FromCCallContext */
val* NEW_nit__FromCCallContext(const struct type* type) {
val* self /* : FromCCallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__FromCCallContext;
return self;
}
/* runtime class nit__ExternCFunction */
const struct class class_nit__ExternCFunction = {
0, /* box_kind */
{
(nitmethod_t)nit___nit__CFunction___standard__kernel__Object__init, /* pointer to light_c:ExternCFunction:c_tools#CFunction#init */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to light_c:ExternCFunction:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___sys, /* pointer to light_c:ExternCFunction:kernel#Object#sys */
(nitmethod_t)standard__string___Object___to_s, /* pointer to light_c:ExternCFunction:string#Object#to_s */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to light_c:ExternCFunction:kernel#Object#== */
(nitmethod_t)standard__string___Object___inspect, /* pointer to light_c:ExternCFunction:string#Object#inspect */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to light_c:ExternCFunction:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object___object_id, /* pointer to light_c:ExternCFunction:kernel#Object#object_id */
(nitmethod_t)standard__string___Object___class_name, /* pointer to light_c:ExternCFunction:string#Object#class_name */
(nitmethod_t)standard__time___Object___get_time, /* pointer to light_c:ExternCFunction:time#Object#get_time */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to light_c:ExternCFunction:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to light_c:ExternCFunction:string#Object#native_class_name */
(nitmethod_t)standard___standard__Object___hash, /* pointer to light_c:ExternCFunction:kernel#Object#hash */
(nitmethod_t)nit__nitni_utilities___standard__Object___long_signature, /* pointer to light_c:ExternCFunction:nitni_utilities#Object#long_signature */
(nitmethod_t)nit__nitni_utilities___standard__Object___internal_call_context, /* pointer to light_c:ExternCFunction:nitni_utilities#Object#internal_call_context */
(nitmethod_t)nit__light_c___standard__Object___from_c_call_context, /* pointer to light_c:ExternCFunction:light_c#Object#from_c_call_context */
(nitmethod_t)nit___nit__CFunction___decls, /* pointer to light_c:ExternCFunction:c_tools#CFunction#decls */
(nitmethod_t)nit___nit__CFunction___exprs, /* pointer to light_c:ExternCFunction:c_tools#CFunction#exprs */
(nitmethod_t)nit___nit__CFunction___signature_61d, /* pointer to light_c:ExternCFunction:c_tools#CFunction#signature= */
(nitmethod_t)nit___nit__CFunction___signature, /* pointer to light_c:ExternCFunction:c_tools#CFunction#signature */
(nitmethod_t)nit___nit__CFunction___to_writer, /* pointer to light_c:ExternCFunction:c_tools#CFunction#to_writer */
(nitmethod_t)standard___standard__Object___init, /* pointer to light_c:ExternCFunction:kernel#Object#init */
(nitmethod_t)nit___nit__ExternCFunction___init, /* pointer to light_c:ExternCFunction:light_c#ExternCFunction#init */
(nitmethod_t)nit___nit__ExternCFunction___method_61d, /* pointer to light_c:ExternCFunction:light_c#ExternCFunction#method= */
}
};
/* allocate ExternCFunction */
val* NEW_nit__ExternCFunction(const struct type* type) {
val* self /* : ExternCFunction */;
val* var /* : Template */;
val* var1 /* : Template */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ExternCFunction;
var = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var->class->vft[COLOR_standard__kernel__Object__init]))(var); /* init on <var:Template>*/
}
self->attrs[COLOR_nit__c_tools__CFunction___decls].val = var; /* _decls on <self:ExternCFunction exact> */
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
self->attrs[COLOR_nit__c_tools__CFunction___exprs].val = var1; /* _exprs on <self:ExternCFunction exact> */
return self;
}
