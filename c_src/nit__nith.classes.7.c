#include "nit__nith.classes.0.h"
/* runtime class nit__FlowContext */
const struct class class_nit__FlowContext = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to flow:FlowContext:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to flow:FlowContext:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to flow:FlowContext:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to flow:FlowContext:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to flow:FlowContext:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to flow:FlowContext:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to flow:FlowContext:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to flow:FlowContext:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to flow:FlowContext:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to flow:FlowContext:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to flow:FlowContext:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to flow:FlowContext:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to flow:FlowContext:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to flow:FlowContext:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to flow:FlowContext:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to flow:FlowContext:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to flow:FlowContext:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to flow:FlowContext:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to flow:FlowContext:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to flow:FlowContext:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to flow:FlowContext:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to flow:FlowContext:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to flow:FlowContext:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to flow:FlowContext:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to flow:FlowContext:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to flow:FlowContext:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to flow:FlowContext:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to flow:FlowContext:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to flow:FlowContext:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to flow:FlowContext:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to flow:FlowContext:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to flow:FlowContext:model#Object#extern_kind */
(nitmethod_t)nit___nit__FlowContext___previous, /* pointer to flow:FlowContext:flow#FlowContext#previous */
(nitmethod_t)nit___nit__FlowContext___loops, /* pointer to flow:FlowContext:flow#FlowContext#loops */
(nitmethod_t)nit___nit__FlowContext___is_marked_unreachable, /* pointer to flow:FlowContext:flow#FlowContext#is_marked_unreachable */
(nitmethod_t)nit___nit__FlowContext___is_marked_unreachable_61d, /* pointer to flow:FlowContext:flow#FlowContext#is_marked_unreachable= */
(nitmethod_t)nit___nit__FlowContext___is_unreachable, /* pointer to flow:FlowContext:flow#FlowContext#is_unreachable */
(nitmethod_t)nit___nit__FlowContext___is_already_unreachable, /* pointer to flow:FlowContext:flow#FlowContext#is_already_unreachable */
(nitmethod_t)nit___nit__FlowContext___is_already_unreachable_61d, /* pointer to flow:FlowContext:flow#FlowContext#is_already_unreachable= */
(nitmethod_t)nit___nit__FlowContext___is_start, /* pointer to flow:FlowContext:flow#FlowContext#is_start */
(nitmethod_t)nit___nit__FlowContext___is_start_61d, /* pointer to flow:FlowContext:flow#FlowContext#is_start= */
(nitmethod_t)nit___nit__FlowContext___node, /* pointer to flow:FlowContext:flow#FlowContext#node */
(nitmethod_t)nit___nit__FlowContext___node_61d, /* pointer to flow:FlowContext:flow#FlowContext#node= */
(nitmethod_t)nit___nit__FlowContext___name_61d, /* pointer to flow:FlowContext:flow#FlowContext#name= */
(nitmethod_t)nit___nit__FlowContext___when_true, /* pointer to flow:FlowContext:flow#FlowContext#when_true */
(nitmethod_t)nit___nit__FlowContext___when_true_61d, /* pointer to flow:FlowContext:flow#FlowContext#when_true= */
(nitmethod_t)nit___nit__FlowContext___when_false, /* pointer to flow:FlowContext:flow#FlowContext#when_false */
(nitmethod_t)nit___nit__FlowContext___when_false_61d, /* pointer to flow:FlowContext:flow#FlowContext#when_false= */
(nitmethod_t)nit___nit__FlowContext___add_previous, /* pointer to flow:FlowContext:flow#FlowContext#add_previous */
(nitmethod_t)nit___nit__FlowContext___add_loop, /* pointer to flow:FlowContext:flow#FlowContext#add_loop */
(nitmethod_t)nit__local_var_init___FlowContext___set_vars, /* pointer to flow:FlowContext:local_var_init#FlowContext#set_vars */
(nitmethod_t)nit__local_var_init___FlowContext___is_variable_set, /* pointer to flow:FlowContext:local_var_init#FlowContext#is_variable_set */
(nitmethod_t)nit__typing___FlowContext___vars, /* pointer to flow:FlowContext:typing#FlowContext#vars */
(nitmethod_t)nit__typing___FlowContext___cache, /* pointer to flow:FlowContext:typing#FlowContext#cache */
(nitmethod_t)nit__typing___FlowContext___set_var, /* pointer to flow:FlowContext:typing#FlowContext#set_var */
(nitmethod_t)nit__typing___FlowContext___collect_types, /* pointer to flow:FlowContext:typing#FlowContext#collect_types */
}
};
/* allocate FlowContext */
val* NEW_nit__FlowContext(const struct type* type) {
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
val* var9 /* : FlatString */;
val* var10 /* : HashSet[Variable] */;
val* var11 /* : HashMap[Variable, nullable MType] */;
val* var12 /* : HashMap[Variable, nullable Array[nullable MType]] */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
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
var2 = 0;
self->attrs[COLOR_nit__flow__FlowContext___is_marked_unreachable].s = var2; /* _is_marked_unreachable on <self:FlowContext exact> */
var3 = 0;
self->attrs[COLOR_nit__flow__FlowContext___is_already_unreachable].s = var3; /* _is_already_unreachable on <self:FlowContext exact> */
var4 = 0;
self->attrs[COLOR_nit__flow__FlowContext___is_start].s = var4; /* _is_start on <self:FlowContext exact> */
var5 = NULL;
self->attrs[COLOR_nit__flow__FlowContext___node].val = var5; /* _node on <self:FlowContext exact> */
if (varonce) {
var6 = varonce;
} else {
var7 = "";
var8 = 0;
var9 = standard___standard__NativeString___to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
self->attrs[COLOR_nit__flow__FlowContext___name].val = var6; /* _name on <self:FlowContext exact> */
self->attrs[COLOR_nit__flow__FlowContext___when_true].val = self; /* _when_true on <self:FlowContext exact> */
self->attrs[COLOR_nit__flow__FlowContext___when_false].val = self; /* _when_false on <self:FlowContext exact> */
var10 = NEW_standard__HashSet(&type_standard__HashSet__nit__Variable);
{
standard___standard__HashSet___standard__kernel__Object__init(var10); /* Direct call hash_collection#HashSet#init on <var10:HashSet[Variable]>*/
}
self->attrs[COLOR_nit__local_var_init__FlowContext___set_vars].val = var10; /* _set_vars on <self:FlowContext exact> */
var11 = NEW_standard__HashMap(&type_standard__HashMap__nit__Variable__nullable__nit__MType);
{
standard___standard__HashMap___standard__kernel__Object__init(var11); /* Direct call hash_collection#HashMap#init on <var11:HashMap[Variable, nullable MType]>*/
}
self->attrs[COLOR_nit__typing__FlowContext___vars].val = var11; /* _vars on <self:FlowContext exact> */
var12 = NEW_standard__HashMap(&type_standard__HashMap__nit__Variable__nullable__standard__Array__nullable__nit__MType);
{
standard___standard__HashMap___standard__kernel__Object__init(var12); /* Direct call hash_collection#HashMap#init on <var12:HashMap[Variable, nullable Array[nullable MType]]>*/
}
self->attrs[COLOR_nit__typing__FlowContext___cache].val = var12; /* _cache on <self:FlowContext exact> */
return self;
}
/* runtime class nit__scope__ScopePhase */
const struct class class_nit__scope__ScopePhase = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to scope:ScopePhase:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to scope:ScopePhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to scope:ScopePhase:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to scope:ScopePhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to scope:ScopePhase:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to scope:ScopePhase:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to scope:ScopePhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to scope:ScopePhase:phase#Phase#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to scope:ScopePhase:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to scope:ScopePhase:phase#Phase#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to scope:ScopePhase:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to scope:ScopePhase:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to scope:ScopePhase:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to scope:ScopePhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to scope:ScopePhase:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to scope:ScopePhase:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to scope:ScopePhase:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to scope:ScopePhase:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to scope:ScopePhase:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to scope:ScopePhase:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to scope:ScopePhase:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to scope:ScopePhase:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to scope:ScopePhase:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to scope:ScopePhase:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to scope:ScopePhase:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to scope:ScopePhase:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to scope:ScopePhase:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to scope:ScopePhase:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to scope:ScopePhase:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to scope:ScopePhase:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to scope:ScopePhase:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to scope:ScopePhase:model#Object#extern_kind */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to scope:ScopePhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to scope:ScopePhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to scope:ScopePhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to scope:ScopePhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to scope:ScopePhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to scope:ScopePhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to scope:ScopePhase:phase#Phase#disabled */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to scope:ScopePhase:phase#Phase#disabled= */
(nitmethod_t)nit___nit__Phase___process_nmodule, /* pointer to scope:ScopePhase:phase#Phase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to scope:ScopePhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit__scope___nit__scope__ScopePhase___nit__phase__Phase__process_npropdef, /* pointer to scope:ScopePhase:scope#ScopePhase#process_npropdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to scope:ScopePhase:phase#Phase#process_annotated_node */
(nitmethod_t)nit__modelbuilder___Phase___process_mainmodule, /* pointer to scope:ScopePhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate ScopePhase */
val* NEW_nit__scope__ScopePhase(const struct type* type) {
val* self /* : ScopePhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__scope__ScopePhase;
var = 0;
self->attrs[COLOR_nit__phase__Phase___disabled].s = var; /* _disabled on <self:ScopePhase exact> */
return self;
}
/* runtime class nit__Variable */
const struct class class_nit__Variable = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to scope:Variable:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to scope:Variable:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to scope:Variable:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to scope:Variable:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to scope:Variable:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to scope:Variable:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to scope:Variable:kernel#Object#sys */
(nitmethod_t)nit___nit__Variable___standard__kernel__Object__init, /* pointer to scope:Variable:scope#Variable#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to scope:Variable:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__Variable___standard__string__Object__to_s, /* pointer to scope:Variable:scope#Variable#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to scope:Variable:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to scope:Variable:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to scope:Variable:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to scope:Variable:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to scope:Variable:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to scope:Variable:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to scope:Variable:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to scope:Variable:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to scope:Variable:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to scope:Variable:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to scope:Variable:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to scope:Variable:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to scope:Variable:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to scope:Variable:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to scope:Variable:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to scope:Variable:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to scope:Variable:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to scope:Variable:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to scope:Variable:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to scope:Variable:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to scope:Variable:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to scope:Variable:model#Object#extern_kind */
(nitmethod_t)nit___nit__Variable___name, /* pointer to scope:Variable:scope#Variable#name */
(nitmethod_t)nit___nit__Variable___name_61d, /* pointer to scope:Variable:scope#Variable#name= */
(nitmethod_t)nit___nit__Variable___location, /* pointer to scope:Variable:scope#Variable#location */
(nitmethod_t)nit___nit__Variable___location_61d, /* pointer to scope:Variable:scope#Variable#location= */
(nitmethod_t)nit___nit__Variable___warn_unread, /* pointer to scope:Variable:scope#Variable#warn_unread */
(nitmethod_t)nit___nit__Variable___warn_unread_61d, /* pointer to scope:Variable:scope#Variable#warn_unread= */
(nitmethod_t)nit__typing___Variable___declared_type, /* pointer to scope:Variable:typing#Variable#declared_type */
(nitmethod_t)nit__typing___Variable___declared_type_61d, /* pointer to scope:Variable:typing#Variable#declared_type= */
(nitmethod_t)standard___standard__Object___init, /* pointer to scope:Variable:kernel#Object#init */
}
};
/* allocate Variable */
val* NEW_nit__Variable(const struct type* type) {
val* self /* : Variable */;
val* var /* : null */;
short int var1 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__Variable;
var = NULL;
self->attrs[COLOR_nit__scope__Variable___location].val = var; /* _location on <self:Variable exact> */
var1 = 0;
self->attrs[COLOR_nit__scope__Variable___warn_unread].s = var1; /* _warn_unread on <self:Variable exact> */
return self;
}
/* runtime class nit__EscapeMark */
const struct class class_nit__EscapeMark = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to scope:EscapeMark:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to scope:EscapeMark:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to scope:EscapeMark:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to scope:EscapeMark:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to scope:EscapeMark:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to scope:EscapeMark:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to scope:EscapeMark:kernel#Object#sys */
(nitmethod_t)nit___nit__EscapeMark___standard__kernel__Object__init, /* pointer to scope:EscapeMark:scope#EscapeMark#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to scope:EscapeMark:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to scope:EscapeMark:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to scope:EscapeMark:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to scope:EscapeMark:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to scope:EscapeMark:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to scope:EscapeMark:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to scope:EscapeMark:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to scope:EscapeMark:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to scope:EscapeMark:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to scope:EscapeMark:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to scope:EscapeMark:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to scope:EscapeMark:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to scope:EscapeMark:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to scope:EscapeMark:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to scope:EscapeMark:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to scope:EscapeMark:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to scope:EscapeMark:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to scope:EscapeMark:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to scope:EscapeMark:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to scope:EscapeMark:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to scope:EscapeMark:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to scope:EscapeMark:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to scope:EscapeMark:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to scope:EscapeMark:model#Object#extern_kind */
(nitmethod_t)nit___nit__EscapeMark___name, /* pointer to scope:EscapeMark:scope#EscapeMark#name */
(nitmethod_t)nit___nit__EscapeMark___name_61d, /* pointer to scope:EscapeMark:scope#EscapeMark#name= */
(nitmethod_t)nit___nit__EscapeMark___continue_mark, /* pointer to scope:EscapeMark:scope#EscapeMark#continue_mark */
(nitmethod_t)nit___nit__EscapeMark___continue_mark_61d, /* pointer to scope:EscapeMark:scope#EscapeMark#continue_mark= */
(nitmethod_t)nit___nit__EscapeMark___escapes, /* pointer to scope:EscapeMark:scope#EscapeMark#escapes */
(nitmethod_t)standard___standard__Object___init, /* pointer to scope:EscapeMark:kernel#Object#init */
}
};
/* allocate EscapeMark */
val* NEW_nit__EscapeMark(const struct type* type) {
val* self /* : EscapeMark */;
val* var /* : null */;
val* var1 /* : Array[AEscapeExpr] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__EscapeMark;
var = NULL;
self->attrs[COLOR_nit__scope__EscapeMark___continue_mark].val = var; /* _continue_mark on <self:EscapeMark exact> */
var1 = NEW_standard__Array(&type_standard__Array__nit__AEscapeExpr);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[AEscapeExpr]>*/
}
self->attrs[COLOR_nit__scope__EscapeMark___escapes].val = var1; /* _escapes on <self:EscapeMark exact> */
return self;
}
/* runtime class nit__scope__ScopeVisitor */
const struct class class_nit__scope__ScopeVisitor = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to scope:ScopeVisitor:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to scope:ScopeVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to scope:ScopeVisitor:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to scope:ScopeVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to scope:ScopeVisitor:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to scope:ScopeVisitor:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to scope:ScopeVisitor:kernel#Object#sys */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___standard__kernel__Object__init, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to scope:ScopeVisitor:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to scope:ScopeVisitor:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to scope:ScopeVisitor:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to scope:ScopeVisitor:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to scope:ScopeVisitor:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to scope:ScopeVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to scope:ScopeVisitor:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to scope:ScopeVisitor:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to scope:ScopeVisitor:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to scope:ScopeVisitor:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to scope:ScopeVisitor:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to scope:ScopeVisitor:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to scope:ScopeVisitor:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to scope:ScopeVisitor:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to scope:ScopeVisitor:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to scope:ScopeVisitor:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to scope:ScopeVisitor:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to scope:ScopeVisitor:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to scope:ScopeVisitor:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to scope:ScopeVisitor:model#Object#extern_kind */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___nit__parser_nodes__Visitor__visit, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#visit */
(nitmethod_t)nit___nit__Visitor___enter_visit, /* pointer to scope:ScopeVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)nit___nit__Visitor___current_node, /* pointer to scope:ScopeVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___toolcontext, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#toolcontext */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___toolcontext_61d, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#toolcontext= */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___selfvariable, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#selfvariable */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___scopes, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#scopes */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___shift_scope, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#shift_scope */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___register_variable, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#register_variable */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___search_variable, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#search_variable */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___enter_visit_block, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#enter_visit_block */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___search_label, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#search_label */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___make_escape_mark, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#make_escape_mark */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___get_escapemark, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#get_escapemark */
(nitmethod_t)nit__scope___nit__scope__ScopeVisitor___error, /* pointer to scope:ScopeVisitor:scope#ScopeVisitor#error */
(nitmethod_t)standard___standard__Object___init, /* pointer to scope:ScopeVisitor:kernel#Object#init */
}
};
/* allocate ScopeVisitor */
val* NEW_nit__scope__ScopeVisitor(const struct type* type) {
val* self /* : ScopeVisitor */;
val* var /* : null */;
val* var1 /* : Variable */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
val* var6 /* : List[Scope] */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__scope__ScopeVisitor;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:ScopeVisitor exact> */
var1 = NEW_nit__Variable(&type_nit__Variable);
if (varonce) {
var2 = varonce;
} else {
var3 = "self";
var4 = 4;
var5 = standard___standard__NativeString___to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
{
((void (*)(val* self, val* p0))(var1->class->vft[COLOR_nit__scope__Variable__name_61d]))(var1, var2) /* name= on <var1:Variable>*/;
}
{
((void (*)(val* self))(var1->class->vft[COLOR_standard__kernel__Object__init]))(var1) /* init on <var1:Variable>*/;
}
self->attrs[COLOR_nit__scope__ScopeVisitor___selfvariable].val = var1; /* _selfvariable on <self:ScopeVisitor exact> */
var6 = NEW_standard__List(&type_standard__List__nit__scope__Scope);
{
{ /* Inline list#List#init (var6) on <var6:List[Scope]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__scope__ScopeVisitor___scopes].val = var6; /* _scopes on <self:ScopeVisitor exact> */
return self;
}
/* runtime class nit__scope__Scope */
const struct class class_nit__scope__Scope = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to scope:Scope:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to scope:Scope:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to scope:Scope:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to scope:Scope:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to scope:Scope:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to scope:Scope:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to scope:Scope:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to scope:Scope:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to scope:Scope:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to scope:Scope:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to scope:Scope:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to scope:Scope:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to scope:Scope:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to scope:Scope:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to scope:Scope:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to scope:Scope:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to scope:Scope:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to scope:Scope:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to scope:Scope:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to scope:Scope:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to scope:Scope:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to scope:Scope:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to scope:Scope:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to scope:Scope:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to scope:Scope:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to scope:Scope:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to scope:Scope:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to scope:Scope:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to scope:Scope:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to scope:Scope:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to scope:Scope:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to scope:Scope:model#Object#extern_kind */
(nitmethod_t)nit__scope___nit__scope__Scope___variables, /* pointer to scope:Scope:scope#Scope#variables */
(nitmethod_t)nit__scope___nit__scope__Scope___escapemark, /* pointer to scope:Scope:scope#Scope#escapemark */
(nitmethod_t)nit__scope___nit__scope__Scope___escapemark_61d, /* pointer to scope:Scope:scope#Scope#escapemark= */
(nitmethod_t)nit__scope___nit__scope__Scope___get_variable, /* pointer to scope:Scope:scope#Scope#get_variable */
}
};
/* allocate Scope */
val* NEW_nit__scope__Scope(const struct type* type) {
val* self /* : Scope */;
val* var /* : HashMap[String, Variable] */;
val* var1 /* : null */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__scope__Scope;
var = NEW_standard__HashMap(&type_standard__HashMap__standard__String__nit__Variable);
{
standard___standard__HashMap___standard__kernel__Object__init(var); /* Direct call hash_collection#HashMap#init on <var:HashMap[String, Variable]>*/
}
self->attrs[COLOR_nit__scope__Scope___variables].val = var; /* _variables on <self:Scope exact> */
var1 = NULL;
self->attrs[COLOR_nit__scope__Scope___escapemark].val = var1; /* _escapemark on <self:Scope exact> */
return self;
}
/* runtime class nit__ASTValidationVisitor */
const struct class class_nit__ASTValidationVisitor = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to astvalidation:ASTValidationVisitor:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to astvalidation:ASTValidationVisitor:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to astvalidation:ASTValidationVisitor:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to astvalidation:ASTValidationVisitor:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to astvalidation:ASTValidationVisitor:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to astvalidation:ASTValidationVisitor:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to astvalidation:ASTValidationVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to astvalidation:ASTValidationVisitor:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to astvalidation:ASTValidationVisitor:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to astvalidation:ASTValidationVisitor:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to astvalidation:ASTValidationVisitor:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to astvalidation:ASTValidationVisitor:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to astvalidation:ASTValidationVisitor:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to astvalidation:ASTValidationVisitor:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to astvalidation:ASTValidationVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to astvalidation:ASTValidationVisitor:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to astvalidation:ASTValidationVisitor:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to astvalidation:ASTValidationVisitor:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to astvalidation:ASTValidationVisitor:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to astvalidation:ASTValidationVisitor:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to astvalidation:ASTValidationVisitor:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to astvalidation:ASTValidationVisitor:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to astvalidation:ASTValidationVisitor:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to astvalidation:ASTValidationVisitor:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to astvalidation:ASTValidationVisitor:model#Object#extern_kind */
(nitmethod_t)nit___nit__ASTValidationVisitor___nit__parser_nodes__Visitor__visit, /* pointer to astvalidation:ASTValidationVisitor:astvalidation#ASTValidationVisitor#visit */
(nitmethod_t)nit___nit__Visitor___enter_visit, /* pointer to astvalidation:ASTValidationVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)nit___nit__Visitor___current_node, /* pointer to astvalidation:ASTValidationVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)nit___nit__ASTValidationVisitor___path, /* pointer to astvalidation:ASTValidationVisitor:astvalidation#ASTValidationVisitor#path */
(nitmethod_t)nit___nit__ASTValidationVisitor___seen, /* pointer to astvalidation:ASTValidationVisitor:astvalidation#ASTValidationVisitor#seen */
}
};
/* allocate ASTValidationVisitor */
val* NEW_nit__ASTValidationVisitor(const struct type* type) {
val* self /* : ASTValidationVisitor */;
val* var /* : null */;
val* var1 /* : List[ANode] */;
val* var2 /* : HashSet[ANode] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ASTValidationVisitor;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:ASTValidationVisitor exact> */
var1 = NEW_standard__List(&type_standard__List__nit__ANode);
{
{ /* Inline list#List#init (var1) on <var1:List[ANode]> */
RET_LABEL:(void)0;
}
}
self->attrs[COLOR_nit__astvalidation__ASTValidationVisitor___path].val = var1; /* _path on <self:ASTValidationVisitor exact> */
var2 = NEW_standard__HashSet(&type_standard__HashSet__nit__ANode);
{
standard___standard__HashSet___standard__kernel__Object__init(var2); /* Direct call hash_collection#HashSet#init on <var2:HashSet[ANode]>*/
}
self->attrs[COLOR_nit__astvalidation__ASTValidationVisitor___seen].val = var2; /* _seen on <self:ASTValidationVisitor exact> */
return self;
}
/* runtime class nit__auto_super_init__AutoSuperInitPhase */
const struct class class_nit__auto_super_init__AutoSuperInitPhase = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to auto_super_init:AutoSuperInitPhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to auto_super_init:AutoSuperInitPhase:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to auto_super_init:AutoSuperInitPhase:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to auto_super_init:AutoSuperInitPhase:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to auto_super_init:AutoSuperInitPhase:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to auto_super_init:AutoSuperInitPhase:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to auto_super_init:AutoSuperInitPhase:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to auto_super_init:AutoSuperInitPhase:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to auto_super_init:AutoSuperInitPhase:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to auto_super_init:AutoSuperInitPhase:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to auto_super_init:AutoSuperInitPhase:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to auto_super_init:AutoSuperInitPhase:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to auto_super_init:AutoSuperInitPhase:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to auto_super_init:AutoSuperInitPhase:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to auto_super_init:AutoSuperInitPhase:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to auto_super_init:AutoSuperInitPhase:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to auto_super_init:AutoSuperInitPhase:model#Object#extern_kind */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#disabled */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#disabled= */
(nitmethod_t)nit___nit__Phase___process_nmodule, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit__auto_super_init___nit__auto_super_init__AutoSuperInitPhase___nit__phase__Phase__process_npropdef, /* pointer to auto_super_init:AutoSuperInitPhase:auto_super_init#AutoSuperInitPhase#process_npropdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to auto_super_init:AutoSuperInitPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nit__modelbuilder___Phase___process_mainmodule, /* pointer to auto_super_init:AutoSuperInitPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate AutoSuperInitPhase */
val* NEW_nit__auto_super_init__AutoSuperInitPhase(const struct type* type) {
val* self /* : AutoSuperInitPhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__auto_super_init__AutoSuperInitPhase;
var = 0;
self->attrs[COLOR_nit__phase__Phase___disabled].s = var; /* _disabled on <self:AutoSuperInitPhase exact> */
return self;
}
/* runtime class nit__auto_super_init__AutoSuperInitVisitor */
const struct class class_nit__auto_super_init__AutoSuperInitVisitor = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to auto_super_init:AutoSuperInitVisitor:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to auto_super_init:AutoSuperInitVisitor:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to auto_super_init:AutoSuperInitVisitor:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to auto_super_init:AutoSuperInitVisitor:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to auto_super_init:AutoSuperInitVisitor:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to auto_super_init:AutoSuperInitVisitor:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to auto_super_init:AutoSuperInitVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to auto_super_init:AutoSuperInitVisitor:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to auto_super_init:AutoSuperInitVisitor:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to auto_super_init:AutoSuperInitVisitor:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to auto_super_init:AutoSuperInitVisitor:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to auto_super_init:AutoSuperInitVisitor:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to auto_super_init:AutoSuperInitVisitor:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to auto_super_init:AutoSuperInitVisitor:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to auto_super_init:AutoSuperInitVisitor:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to auto_super_init:AutoSuperInitVisitor:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to auto_super_init:AutoSuperInitVisitor:model#Object#extern_kind */
(nitmethod_t)nit__auto_super_init___nit__auto_super_init__AutoSuperInitVisitor___nit__parser_nodes__Visitor__visit, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#visit */
(nitmethod_t)nit___nit__Visitor___enter_visit, /* pointer to auto_super_init:AutoSuperInitVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)nit___nit__Visitor___current_node, /* pointer to auto_super_init:AutoSuperInitVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)nit__auto_super_init___nit__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#has_explicit_super_init */
(nitmethod_t)nit__auto_super_init___nit__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#has_explicit_super_init= */
(nitmethod_t)nit__auto_super_init___nit__auto_super_init__AutoSuperInitVisitor___is_broken, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#is_broken */
(nitmethod_t)nit__auto_super_init___nit__auto_super_init__AutoSuperInitVisitor___is_broken_61d, /* pointer to auto_super_init:AutoSuperInitVisitor:auto_super_init#AutoSuperInitVisitor#is_broken= */
}
};
/* allocate AutoSuperInitVisitor */
val* NEW_nit__auto_super_init__AutoSuperInitVisitor(const struct type* type) {
val* self /* : AutoSuperInitVisitor */;
val* var /* : null */;
val* var1 /* : null */;
short int var2 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__auto_super_init__AutoSuperInitVisitor;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:AutoSuperInitVisitor exact> */
var1 = NULL;
self->attrs[COLOR_nit__auto_super_init__AutoSuperInitVisitor___has_explicit_super_init].val = var1; /* _has_explicit_super_init on <self:AutoSuperInitVisitor exact> */
var2 = 0;
self->attrs[COLOR_nit__auto_super_init__AutoSuperInitVisitor___is_broken].s = var2; /* _is_broken on <self:AutoSuperInitVisitor exact> */
return self;
}
/* runtime class nit__RapidTypeAnalysis */
const struct class class_nit__RapidTypeAnalysis = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to rapid_type_analysis:RapidTypeAnalysis:kernel#Object#sys */
(nitmethod_t)nit___nit__RapidTypeAnalysis___standard__kernel__Object__init, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to rapid_type_analysis:RapidTypeAnalysis:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to rapid_type_analysis:RapidTypeAnalysis:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to rapid_type_analysis:RapidTypeAnalysis:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to rapid_type_analysis:RapidTypeAnalysis:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to rapid_type_analysis:RapidTypeAnalysis:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to rapid_type_analysis:RapidTypeAnalysis:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to rapid_type_analysis:RapidTypeAnalysis:model#Object#extern_kind */
(nitmethod_t)nit___nit__RapidTypeAnalysis___modelbuilder, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#modelbuilder */
(nitmethod_t)nit___nit__RapidTypeAnalysis___modelbuilder_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#modelbuilder= */
(nitmethod_t)nit___nit__RapidTypeAnalysis___mainmodule, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#mainmodule */
(nitmethod_t)nit___nit__RapidTypeAnalysis___mainmodule_61d, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#mainmodule= */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_types */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_open_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_open_types */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_classes, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_classes */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_cast_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_cast_types */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_open_cast_types, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_methoddefs, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_methoddefs */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_methods, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_methods */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_callsites, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_callsites */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_targets_cache, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_targets_cache */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_targets, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_targets */
(nitmethod_t)nit___nit__RapidTypeAnalysis___live_super_sends, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#live_super_sends */
(nitmethod_t)nit___nit__RapidTypeAnalysis___totry_methods, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#totry_methods */
(nitmethod_t)nit___nit__RapidTypeAnalysis___totry_methods_to_remove, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#totry_methods_to_remove */
(nitmethod_t)nit___nit__RapidTypeAnalysis___try_methods, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#try_methods */
(nitmethod_t)nit___nit__RapidTypeAnalysis___todo, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#todo */
(nitmethod_t)nit___nit__RapidTypeAnalysis___force_alive, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#force_alive */
(nitmethod_t)nit___nit__RapidTypeAnalysis___run_analysis, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#run_analysis */
(nitmethod_t)nit___nit__RapidTypeAnalysis___check_depth, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#check_depth */
(nitmethod_t)nit___nit__RapidTypeAnalysis___add_new, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_new */
(nitmethod_t)nit___nit__RapidTypeAnalysis___add_cast, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_cast */
(nitmethod_t)nit___nit__RapidTypeAnalysis___try_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#try_send */
(nitmethod_t)nit___nit__RapidTypeAnalysis___add_call, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_call */
(nitmethod_t)nit___nit__RapidTypeAnalysis___add_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_send */
(nitmethod_t)nit___nit__RapidTypeAnalysis___try_super_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#try_super_send */
(nitmethod_t)nit___nit__RapidTypeAnalysis___add_super_send, /* pointer to rapid_type_analysis:RapidTypeAnalysis:rapid_type_analysis#RapidTypeAnalysis#add_super_send */
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
(nitmethod_t)standard___standard__Object___object_id, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#sys */
(nitmethod_t)nit___nit__RapidTypeVisitor___standard__kernel__Object__init, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to rapid_type_analysis:RapidTypeVisitor:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to rapid_type_analysis:RapidTypeVisitor:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to rapid_type_analysis:RapidTypeVisitor:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to rapid_type_analysis:RapidTypeVisitor:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to rapid_type_analysis:RapidTypeVisitor:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to rapid_type_analysis:RapidTypeVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to rapid_type_analysis:RapidTypeVisitor:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to rapid_type_analysis:RapidTypeVisitor:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to rapid_type_analysis:RapidTypeVisitor:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to rapid_type_analysis:RapidTypeVisitor:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to rapid_type_analysis:RapidTypeVisitor:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to rapid_type_analysis:RapidTypeVisitor:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to rapid_type_analysis:RapidTypeVisitor:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to rapid_type_analysis:RapidTypeVisitor:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to rapid_type_analysis:RapidTypeVisitor:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to rapid_type_analysis:RapidTypeVisitor:model#Object#extern_kind */
(nitmethod_t)nit___nit__RapidTypeVisitor___nit__parser_nodes__Visitor__visit, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#visit */
(nitmethod_t)nit___nit__Visitor___enter_visit, /* pointer to rapid_type_analysis:RapidTypeVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)nit___nit__Visitor___current_node, /* pointer to rapid_type_analysis:RapidTypeVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)nit___nit__RapidTypeVisitor___analysis, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#analysis */
(nitmethod_t)nit___nit__RapidTypeVisitor___analysis_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#analysis= */
(nitmethod_t)nit___nit__RapidTypeVisitor___receiver, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#receiver */
(nitmethod_t)nit___nit__RapidTypeVisitor___receiver_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#receiver= */
(nitmethod_t)nit___nit__RapidTypeVisitor___mpropdef_61d, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#mpropdef= */
(nitmethod_t)nit___nit__RapidTypeVisitor___cleanup_type, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#cleanup_type */
(nitmethod_t)nit___nit__RapidTypeVisitor___get_class, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#get_class */
(nitmethod_t)nit___nit__RapidTypeVisitor___get_method, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#get_method */
(nitmethod_t)nit___nit__RapidTypeVisitor___add_type, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#add_type */
(nitmethod_t)nit___nit__RapidTypeVisitor___add_monomorphic_send, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send */
(nitmethod_t)nit___nit__RapidTypeVisitor___add_cast_type, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#add_cast_type */
(nitmethod_t)nit___nit__RapidTypeVisitor___add_callsite, /* pointer to rapid_type_analysis:RapidTypeVisitor:rapid_type_analysis#RapidTypeVisitor#add_callsite */
(nitmethod_t)standard___standard__Object___init, /* pointer to rapid_type_analysis:RapidTypeVisitor:kernel#Object#init */
}
};
/* allocate RapidTypeVisitor */
val* NEW_nit__RapidTypeVisitor(const struct type* type) {
val* self /* : RapidTypeVisitor */;
val* var /* : null */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__RapidTypeVisitor;
var = NULL;
self->attrs[COLOR_nit__parser_nodes__Visitor___current_node].val = var; /* _current_node on <self:RapidTypeVisitor exact> */
return self;
}
/* runtime class csv__CsvFormat */
/* allocate CsvFormat */
val* NEW_csv__CsvFormat(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CsvFormat is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class csv__CsvDocument */
/* allocate CsvDocument */
val* NEW_csv__CsvDocument(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CsvDocument is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class csv__CsvWriter */
/* allocate CsvWriter */
val* NEW_csv__CsvWriter(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CsvWriter is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class csv__CsvReader */
/* allocate CsvReader */
val* NEW_csv__CsvReader(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CsvReader is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__ErasureCompilerPhase */
const struct class class_nit__ErasureCompilerPhase = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:model#Object#extern_kind */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#disabled */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#disabled= */
(nitmethod_t)nit___nit__Phase___process_nmodule, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit___nit__Phase___process_npropdef, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#process_npropdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nit___nit__ErasureCompilerPhase___nit__modelbuilder__Phase__process_mainmodule, /* pointer to separate_erasure_compiler:ErasureCompilerPhase:separate_erasure_compiler#ErasureCompilerPhase#process_mainmodule */
}
};
/* allocate ErasureCompilerPhase */
val* NEW_nit__ErasureCompilerPhase(const struct type* type) {
val* self /* : ErasureCompilerPhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__ErasureCompilerPhase;
var = 0;
self->attrs[COLOR_nit__phase__Phase___disabled].s = var; /* _disabled on <self:ErasureCompilerPhase exact> */
return self;
}
/* runtime class nit__SeparateErasureCompiler */
const struct class class_nit__SeparateErasureCompiler = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:kernel#Object#sys */
(nitmethod_t)nit___nit__SeparateErasureCompiler___standard__kernel__Object__init, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:model#Object#extern_kind */
(nitmethod_t)nit___nit__AbstractCompiler___names, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#names */
(nitmethod_t)nit___nit__AbstractCompiler___mainmodule, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#mainmodule */
(nitmethod_t)nit___nit__AbstractCompiler___mainmodule_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#mainmodule= */
(nitmethod_t)nit___nit__AbstractCompiler___realmainmodule, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#realmainmodule */
(nitmethod_t)nit___nit__AbstractCompiler___realmainmodule_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#realmainmodule= */
(nitmethod_t)nit___nit__AbstractCompiler___modelbuilder, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#modelbuilder */
(nitmethod_t)nit___nit__AbstractCompiler___modelbuilder_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#modelbuilder= */
(nitmethod_t)nit___nit__AbstractCompiler___target_platform, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#target_platform */
(nitmethod_t)nit___nit__AbstractCompiler___target_platform_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#target_platform= */
(nitmethod_t)nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__do_compilation, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#do_compilation */
(nitmethod_t)nit___nit__AbstractCompiler___new_file, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#new_file */
(nitmethod_t)nit___nit__AbstractCompiler___files, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#files */
(nitmethod_t)nit___nit__SeparateErasureCompiler___nit__abstract_compiler__AbstractCompiler__new_visitor, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#new_visitor */
(nitmethod_t)nit___nit__AbstractCompiler___header, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#header */
(nitmethod_t)nit___nit__AbstractCompiler___header_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#header= */
(nitmethod_t)nit___nit__AbstractCompiler___linker_script, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#linker_script */
(nitmethod_t)nit___nit__AbstractCompiler___provide_declaration, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#provide_declaration */
(nitmethod_t)nit___nit__AbstractCompiler___provided_declarations, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#provided_declarations */
(nitmethod_t)nit___nit__AbstractCompiler___requirers_of_declarations, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#requirers_of_declarations */
(nitmethod_t)nit___nit__AbstractCompiler___build_c_to_nit_bindings, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#build_c_to_nit_bindings */
(nitmethod_t)nit___nit__AbstractCompiler___compile_header, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#compile_header */
(nitmethod_t)nit___nit__SeparateErasureCompiler___nit__abstract_compiler__AbstractCompiler__compile_header_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#compile_header_structs */
(nitmethod_t)nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__compile_nitni_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_nitni_structs */
(nitmethod_t)nit___nit__AbstractCompiler___compile_finalizer_function, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#compile_finalizer_function */
(nitmethod_t)nit___nit__AbstractCompiler___compile_main_function, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#compile_main_function */
(nitmethod_t)nit___nit__AbstractCompiler___compile_nitni_global_ref_functions, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#compile_nitni_global_ref_functions */
(nitmethod_t)nit___nit__AbstractCompiler___extern_bodies, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#extern_bodies */
(nitmethod_t)nit___nit__AbstractCompiler___files_to_copy, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#files_to_copy */
(nitmethod_t)nit___nit__AbstractCompiler___seen_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#seen_extern */
(nitmethod_t)nit___nit__AbstractCompiler___generate_init_attr, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#generate_init_attr */
(nitmethod_t)nit___nit__AbstractCompiler___count_type_test_tags, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_tags */
(nitmethod_t)nit___nit__AbstractCompiler___count_type_test_resolved, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_resolved */
(nitmethod_t)nit___nit__AbstractCompiler___count_type_test_unresolved, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_unresolved */
(nitmethod_t)nit___nit__AbstractCompiler___count_type_test_skipped, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#count_type_test_skipped */
(nitmethod_t)nit___nit__AbstractCompiler___init_count_type_test_tags, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#init_count_type_test_tags */
(nitmethod_t)nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__display_stats, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#display_stats */
(nitmethod_t)nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__finalize_ffi_for_module, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#finalize_ffi_for_module */
(nitmethod_t)nit___nit__AbstractCompiler___div, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#div */
(nitmethod_t)nit___nit__SeparateCompiler___runtime_type_analysis, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis */
(nitmethod_t)nit___nit__SeparateCompiler___runtime_type_analysis_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis= */
(nitmethod_t)nit___nit__SeparateCompiler___undead_types, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#undead_types */
(nitmethod_t)nit___nit__SeparateCompiler___live_unresolved_types, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#live_unresolved_types */
(nitmethod_t)nit___nit__SeparateCompiler___type_ids, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_ids */
(nitmethod_t)nit___nit__SeparateCompiler___type_ids_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_ids= */
(nitmethod_t)nit___nit__SeparateCompiler___type_colors, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_colors */
(nitmethod_t)nit___nit__SeparateCompiler___type_colors_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_colors= */
(nitmethod_t)nit___nit__SeparateCompiler___opentype_colors, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#opentype_colors */
(nitmethod_t)nit___nit__SeparateCompiler___opentype_colors_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#opentype_colors= */
(nitmethod_t)nit___nit__SeparateCompiler___method_colors, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#method_colors */
(nitmethod_t)nit___nit__SeparateCompiler___method_colors_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#method_colors= */
(nitmethod_t)nit___nit__SeparateCompiler___attr_colors, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_colors */
(nitmethod_t)nit___nit__SeparateCompiler___attr_colors_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_colors= */
(nitmethod_t)nit___nit__SeparateErasureCompiler___nit__separate_compiler__SeparateCompiler__compile_types, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#compile_types */
(nitmethod_t)nit___nit__SeparateCompiler___compile_header_attribute_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_header_attribute_structs */
(nitmethod_t)nit___nit__SeparateCompiler___compile_box_kinds, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_box_kinds */
(nitmethod_t)nit___nit__SeparateCompiler___box_kinds, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#box_kinds */
(nitmethod_t)nit___nit__SeparateCompiler___box_kind_of, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#box_kind_of */
(nitmethod_t)nit___nit__SeparateCompiler___compile_color_consts, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_color_consts */
(nitmethod_t)nit___nit__SeparateCompiler___compile_color_const, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_color_const */
(nitmethod_t)nit___nit__SeparateCompiler___color_consts_done, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#color_consts_done */
(nitmethod_t)nit___nit__SeparateCompiler___do_property_coloring, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#do_property_coloring */
(nitmethod_t)nit___nit__SeparateCompiler___build_method_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#build_method_tables */
(nitmethod_t)nit___nit__SeparateCompiler___build_attr_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#build_attr_tables */
(nitmethod_t)nit___nit__SeparateCompiler___do_type_coloring, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#do_type_coloring */
(nitmethod_t)nit___nit__SeparateCompiler___poset_from_mtypes, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#poset_from_mtypes */
(nitmethod_t)nit___nit__SeparateCompiler___build_type_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#build_type_tables */
(nitmethod_t)nit___nit__SeparateCompiler___compile_resolution_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_resolution_tables */
(nitmethod_t)nit___nit__SeparateCompiler___build_resolution_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#build_resolution_tables */
(nitmethod_t)nit___nit__SeparateCompiler___compile_module_to_c, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_module_to_c */
(nitmethod_t)nit___nit__SeparateCompiler___compile_type_to_c, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_type_to_c */
(nitmethod_t)nit___nit__SeparateCompiler___compile_type_resolution_table, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#compile_type_resolution_table */
(nitmethod_t)nit___nit__SeparateErasureCompiler___nit__separate_compiler__SeparateCompiler__compile_class_to_c, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#compile_class_to_c */
(nitmethod_t)nit___nit__SeparateCompiler___hardening_live_type, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#hardening_live_type */
(nitmethod_t)nit___nit__SeparateCompiler___type_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_tables */
(nitmethod_t)nit___nit__SeparateCompiler___type_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#type_tables= */
(nitmethod_t)nit___nit__SeparateCompiler___resolution_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#resolution_tables */
(nitmethod_t)nit___nit__SeparateCompiler___resolution_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#resolution_tables= */
(nitmethod_t)nit___nit__SeparateCompiler___method_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#method_tables */
(nitmethod_t)nit___nit__SeparateCompiler___method_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#method_tables= */
(nitmethod_t)nit___nit__SeparateCompiler___attr_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_tables */
(nitmethod_t)nit___nit__SeparateCompiler___attr_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_tables= */
(nitmethod_t)nit___nit__SeparateErasureCompiler___nit__separate_compiler__SeparateCompiler__display_sizes, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#display_sizes */
(nitmethod_t)nit___nit__SeparateCompiler___isset_checks_count, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#isset_checks_count */
(nitmethod_t)nit___nit__SeparateCompiler___isset_checks_count_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#isset_checks_count= */
(nitmethod_t)nit___nit__SeparateCompiler___attr_read_count, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_read_count */
(nitmethod_t)nit___nit__SeparateCompiler___attr_read_count_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#attr_read_count= */
(nitmethod_t)nit___nit__SeparateCompiler___display_isset_checks, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_compiler#SeparateCompiler#display_isset_checks */
(nitmethod_t)nit___nit__AbstractCompiler___standard__kernel__Object__init, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#init */
(nitmethod_t)nit___nit__AbstractCompiler___display_stats, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#display_stats */
(nitmethod_t)nit___nit__AbstractCompiler___compile_nitni_structs, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#compile_nitni_structs */
(nitmethod_t)nit___nit__AbstractCompiler___finalize_ffi_for_module, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:abstract_compiler#AbstractCompiler#finalize_ffi_for_module */
(nitmethod_t)nit___nit__SeparateErasureCompiler___class_ids, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_ids */
(nitmethod_t)nit___nit__SeparateErasureCompiler___class_ids_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_ids= */
(nitmethod_t)nit___nit__SeparateErasureCompiler___class_colors, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_colors */
(nitmethod_t)nit___nit__SeparateErasureCompiler___class_colors_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_colors= */
(nitmethod_t)nit___nit__SeparateErasureCompiler___vt_colors, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#vt_colors */
(nitmethod_t)nit___nit__SeparateErasureCompiler___vt_colors_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#vt_colors= */
(nitmethod_t)nit___nit__SeparateErasureCompiler___build_vt_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#build_vt_tables */
(nitmethod_t)nit___nit__SeparateErasureCompiler___build_class_typing_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#build_class_typing_tables */
(nitmethod_t)nit___nit__SeparateErasureCompiler___build_class_vts_table, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#build_class_vts_table */
(nitmethod_t)nit___nit__SeparateErasureCompiler___retrieve_vt_bound, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#retrieve_vt_bound */
(nitmethod_t)nit___nit__SeparateErasureCompiler___class_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_tables */
(nitmethod_t)nit___nit__SeparateErasureCompiler___class_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#class_tables= */
(nitmethod_t)nit___nit__SeparateErasureCompiler___vt_tables, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#vt_tables */
(nitmethod_t)nit___nit__SeparateErasureCompiler___vt_tables_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompiler:separate_erasure_compiler#SeparateErasureCompiler#vt_tables= */
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
long var9 /* : Int */;
val* var_ /* var : Array[String] */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : HashMap[String, Int] */;
val* var35 /* : HashMap[String, Int] */;
val* var36 /* : HashMap[String, Int] */;
val* var37 /* : HashSet[MType] */;
val* var38 /* : HashMap[MClassDef, HashSet[MType]] */;
val* var39 /* : HashMap[MClass, Int] */;
val* var40 /* : HashSet[Object] */;
val* var41 /* : HashMap[MType, Array[nullable MType]] */;
val* var42 /* : HashMap[MClassType, Array[nullable MType]] */;
val* var43 /* : HashMap[MClass, Array[nullable MPropDef]] */;
val* var44 /* : HashMap[MClass, Array[nullable MPropDef]] */;
long var45 /* : Int */;
long var46 /* : Int */;
self = nit_alloc(sizeof(struct instance) + 38*sizeof(nitattribute_t));
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
var9 = 5;
{
standard___standard__Array___with_capacity(var8, var9); /* Direct call array#Array#with_capacity on <var8:Array[String]>*/
}
var_ = var8;
if (varonce) {
var10 = varonce;
} else {
var11 = "isa";
var12 = 3;
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var10); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = "as";
var17 = 2;
var18 = standard___standard__NativeString___to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var15); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = "auto";
var22 = 4;
var23 = standard___standard__NativeString___to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var20); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = "covariance";
var27 = 10;
var28 = standard___standard__NativeString___to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var25); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = "erasure";
var32 = 7;
var33 = standard___standard__NativeString___to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var30); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_tags].val = var_; /* _count_type_test_tags on <self:SeparateErasureCompiler exact> */
{
var34 = nit___nit__AbstractCompiler___init_count_type_test_tags(self);
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved].val = var34; /* _count_type_test_resolved on <self:SeparateErasureCompiler exact> */
{
var35 = nit___nit__AbstractCompiler___init_count_type_test_tags(self);
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val = var35; /* _count_type_test_unresolved on <self:SeparateErasureCompiler exact> */
{
var36 = nit___nit__AbstractCompiler___init_count_type_test_tags(self);
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped].val = var36; /* _count_type_test_skipped on <self:SeparateErasureCompiler exact> */
var37 = NEW_standard__HashSet(&type_standard__HashSet__nit__MType);
{
standard___standard__HashSet___standard__kernel__Object__init(var37); /* Direct call hash_collection#HashSet#init on <var37:HashSet[MType]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___undead_types].val = var37; /* _undead_types on <self:SeparateErasureCompiler exact> */
var38 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClassDef__standard__HashSet__nit__MType);
{
standard___standard__HashMap___standard__kernel__Object__init(var38); /* Direct call hash_collection#HashMap#init on <var38:HashMap[MClassDef, HashSet[MType]]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___live_unresolved_types].val = var38; /* _live_unresolved_types on <self:SeparateErasureCompiler exact> */
var39 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClass__standard__Int);
{
standard___standard__HashMap___standard__kernel__Object__init(var39); /* Direct call hash_collection#HashMap#init on <var39:HashMap[MClass, Int]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___box_kinds].val = var39; /* _box_kinds on <self:SeparateErasureCompiler exact> */
var40 = NEW_standard__HashSet(&type_standard__HashSet__standard__Object);
{
standard___standard__HashSet___standard__kernel__Object__init(var40); /* Direct call hash_collection#HashSet#init on <var40:HashSet[Object]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___color_consts_done].val = var40; /* _color_consts_done on <self:SeparateErasureCompiler exact> */
var41 = NEW_standard__HashMap(&type_standard__HashMap__nit__MType__standard__Array__nullable__nit__MType);
{
standard___standard__HashMap___standard__kernel__Object__init(var41); /* Direct call hash_collection#HashMap#init on <var41:HashMap[MType, Array[nullable MType]]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___type_tables].val = var41; /* _type_tables on <self:SeparateErasureCompiler exact> */
var42 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClassType__standard__Array__nullable__nit__MType);
{
standard___standard__HashMap___standard__kernel__Object__init(var42); /* Direct call hash_collection#HashMap#init on <var42:HashMap[MClassType, Array[nullable MType]]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___resolution_tables].val = var42; /* _resolution_tables on <self:SeparateErasureCompiler exact> */
var43 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClass__standard__Array__nullable__nit__MPropDef);
{
standard___standard__HashMap___standard__kernel__Object__init(var43); /* Direct call hash_collection#HashMap#init on <var43:HashMap[MClass, Array[nullable MPropDef]]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___method_tables].val = var43; /* _method_tables on <self:SeparateErasureCompiler exact> */
var44 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClass__standard__Array__nullable__nit__MPropDef);
{
standard___standard__HashMap___standard__kernel__Object__init(var44); /* Direct call hash_collection#HashMap#init on <var44:HashMap[MClass, Array[nullable MPropDef]]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_tables].val = var44; /* _attr_tables on <self:SeparateErasureCompiler exact> */
var45 = 0;
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___isset_checks_count].l = var45; /* _isset_checks_count on <self:SeparateErasureCompiler exact> */
var46 = 0;
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_read_count].l = var46; /* _attr_read_count on <self:SeparateErasureCompiler exact> */
return self;
}
/* runtime class nit__SeparateErasureCompilerVisitor */
const struct class class_nit__SeparateErasureCompilerVisitor = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:kernel#Object#sys */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___standard__kernel__Object__init, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:model#Object#extern_kind */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___compiler, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compiler */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___compiler_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compiler= */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___current_node, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#current_node */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___current_node_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#current_node= */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___frame, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#frame */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___frame_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#frame= */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___object_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#object_type */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___bool_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#bool_type */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___writer, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#writer */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___writer_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#writer= */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___get_class, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_class */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___get_property, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_property */
(nitmethod_t)nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#compile_callsite */
(nitmethod_t)nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__native_array_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#native_array_instance */
(nitmethod_t)nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__calloc_array, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#calloc_array */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__native_array_def, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#native_array_def */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___varargize, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#varargize */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___anchor, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#anchor */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___resolve_for, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#resolve_for */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___autoadapt, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#autoadapt */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__supercall, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#supercall */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__adapt_signature, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#adapt_signature */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#unbox_signature_extern */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#autobox */
(nitmethod_t)nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__box_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#box_extern */
(nitmethod_t)nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#unbox_extern */
(nitmethod_t)nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__type_test, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#type_test */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__is_same_type_test, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#is_same_type_test */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#equal_test */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__call, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#call */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#send */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___monomorphic_send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#monomorphic_send */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___monomorphic_super_send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#monomorphic_super_send */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__isset_attribute, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#isset_attribute */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__read_attribute, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#read_attribute */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#write_attribute */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___check_recv_notnull, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#check_recv_notnull */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___names, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#names */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___last, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___last_61d, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last= */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___get_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_name */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___escapemark_name, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_name */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_escape_label, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_escape_label */
(nitmethod_t)nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__class_name_string, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#class_name_string */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___variables, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variables */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___variable, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variable */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___new_var, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_var */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___new_var_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_var_extern */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___new_named_var, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_named_var */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___assign, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#assign */
(nitmethod_t)nit___nit__SeparateErasureCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__init_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_erasure_compiler#SeparateErasureCompilerVisitor#init_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___init_instance_or_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#init_instance_or_extern */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___set_finalizer, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#set_finalizer */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___int_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#int_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___bool_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#bool_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___string_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#string_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___value_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#value_instance */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__array_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#array_instance */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__vararg_instance, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#vararg_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_decl, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_decl */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___require_declaration, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#require_declaration */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___declare_once, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#declare_once */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_extern, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_extern */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___new_expr, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_expr */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_abort, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_abort */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_raw_abort, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_raw_abort */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_cast, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_cast */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___ret, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#ret */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___stmt, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#stmt */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___expr, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___expr_bool, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr_bool */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___debug, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#debug */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___type_info, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#type_info */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___before_send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#before_send */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___table_send, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#table_send */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___hardening_live_open_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#hardening_live_open_type */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___hardening_cast_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#hardening_cast_type */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___can_be_primitive, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#can_be_primitive */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___maybe_null, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#maybe_null */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___link_unresolved_type, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#link_unresolved_type */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___compile_callsite, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compile_callsite */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite, /* pointer to separate_erasure_compiler:SeparateErasureCompilerVisitor:separate_compiler#SeparateCompilerVisitor#compile_callsite */
}
};
/* allocate SeparateErasureCompilerVisitor */
val* NEW_nit__SeparateErasureCompilerVisitor(const struct type* type) {
val* self /* : SeparateErasureCompilerVisitor */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : HashSet[String] */;
long var3 /* : Int */;
val* var4 /* : HashMap[Variable, RuntimeVariable] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__SeparateErasureCompilerVisitor;
var = NULL;
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = var; /* _current_node on <self:SeparateErasureCompilerVisitor exact> */
var1 = NULL;
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val = var1; /* _frame on <self:SeparateErasureCompilerVisitor exact> */
var2 = NEW_standard__HashSet(&type_standard__HashSet__standard__String);
{
standard___standard__HashSet___standard__kernel__Object__init(var2); /* Direct call hash_collection#HashSet#init on <var2:HashSet[String]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___names].val = var2; /* _names on <self:SeparateErasureCompilerVisitor exact> */
var3 = 0;
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___last].l = var3; /* _last on <self:SeparateErasureCompilerVisitor exact> */
var4 = NEW_standard__HashMap(&type_standard__HashMap__nit__Variable__nit__RuntimeVariable);
{
standard___standard__HashMap___standard__kernel__Object__init(var4); /* Direct call hash_collection#HashMap#init on <var4:HashMap[Variable, RuntimeVariable]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___variables].val = var4; /* _variables on <self:SeparateErasureCompilerVisitor exact> */
return self;
}
/* runtime class nit__SeparateCompilerPhase */
const struct class class_nit__SeparateCompilerPhase = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to separate_compiler:SeparateCompilerPhase:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to separate_compiler:SeparateCompilerPhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to separate_compiler:SeparateCompilerPhase:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to separate_compiler:SeparateCompilerPhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to separate_compiler:SeparateCompilerPhase:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to separate_compiler:SeparateCompilerPhase:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to separate_compiler:SeparateCompilerPhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to separate_compiler:SeparateCompilerPhase:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to separate_compiler:SeparateCompilerPhase:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to separate_compiler:SeparateCompilerPhase:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to separate_compiler:SeparateCompilerPhase:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to separate_compiler:SeparateCompilerPhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to separate_compiler:SeparateCompilerPhase:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to separate_compiler:SeparateCompilerPhase:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to separate_compiler:SeparateCompilerPhase:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to separate_compiler:SeparateCompilerPhase:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to separate_compiler:SeparateCompilerPhase:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to separate_compiler:SeparateCompilerPhase:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to separate_compiler:SeparateCompilerPhase:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to separate_compiler:SeparateCompilerPhase:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to separate_compiler:SeparateCompilerPhase:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to separate_compiler:SeparateCompilerPhase:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to separate_compiler:SeparateCompilerPhase:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to separate_compiler:SeparateCompilerPhase:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to separate_compiler:SeparateCompilerPhase:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to separate_compiler:SeparateCompilerPhase:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to separate_compiler:SeparateCompilerPhase:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to separate_compiler:SeparateCompilerPhase:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to separate_compiler:SeparateCompilerPhase:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to separate_compiler:SeparateCompilerPhase:model#Object#extern_kind */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#disabled */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#disabled= */
(nitmethod_t)nit___nit__Phase___process_nmodule, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit___nit__Phase___process_npropdef, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#process_npropdef */
(nitmethod_t)nit___nit__Phase___process_annotated_node, /* pointer to separate_compiler:SeparateCompilerPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nit___nit__SeparateCompilerPhase___nit__modelbuilder__Phase__process_mainmodule, /* pointer to separate_compiler:SeparateCompilerPhase:separate_compiler#SeparateCompilerPhase#process_mainmodule */
}
};
/* allocate SeparateCompilerPhase */
val* NEW_nit__SeparateCompilerPhase(const struct type* type) {
val* self /* : SeparateCompilerPhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__SeparateCompilerPhase;
var = 0;
self->attrs[COLOR_nit__phase__Phase___disabled].s = var; /* _disabled on <self:SeparateCompilerPhase exact> */
return self;
}
/* runtime class nit__SeparateCompiler */
const struct class class_nit__SeparateCompiler = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to separate_compiler:SeparateCompiler:kernel#Object#sys */
(nitmethod_t)nit___nit__SeparateCompiler___standard__kernel__Object__init, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to separate_compiler:SeparateCompiler:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to separate_compiler:SeparateCompiler:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to separate_compiler:SeparateCompiler:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to separate_compiler:SeparateCompiler:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to separate_compiler:SeparateCompiler:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to separate_compiler:SeparateCompiler:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to separate_compiler:SeparateCompiler:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to separate_compiler:SeparateCompiler:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to separate_compiler:SeparateCompiler:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to separate_compiler:SeparateCompiler:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to separate_compiler:SeparateCompiler:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to separate_compiler:SeparateCompiler:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to separate_compiler:SeparateCompiler:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to separate_compiler:SeparateCompiler:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to separate_compiler:SeparateCompiler:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to separate_compiler:SeparateCompiler:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to separate_compiler:SeparateCompiler:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to separate_compiler:SeparateCompiler:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to separate_compiler:SeparateCompiler:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to separate_compiler:SeparateCompiler:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to separate_compiler:SeparateCompiler:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to separate_compiler:SeparateCompiler:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to separate_compiler:SeparateCompiler:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to separate_compiler:SeparateCompiler:model#Object#extern_kind */
(nitmethod_t)nit___nit__AbstractCompiler___names, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#names */
(nitmethod_t)nit___nit__AbstractCompiler___mainmodule, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#mainmodule */
(nitmethod_t)nit___nit__AbstractCompiler___mainmodule_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#mainmodule= */
(nitmethod_t)nit___nit__AbstractCompiler___realmainmodule, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#realmainmodule */
(nitmethod_t)nit___nit__AbstractCompiler___realmainmodule_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#realmainmodule= */
(nitmethod_t)nit___nit__AbstractCompiler___modelbuilder, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#modelbuilder */
(nitmethod_t)nit___nit__AbstractCompiler___modelbuilder_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#modelbuilder= */
(nitmethod_t)nit___nit__AbstractCompiler___target_platform, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#target_platform */
(nitmethod_t)nit___nit__AbstractCompiler___target_platform_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#target_platform= */
(nitmethod_t)nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__do_compilation, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#do_compilation */
(nitmethod_t)nit___nit__AbstractCompiler___new_file, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#new_file */
(nitmethod_t)nit___nit__AbstractCompiler___files, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#files */
(nitmethod_t)nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__new_visitor, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#new_visitor */
(nitmethod_t)nit___nit__AbstractCompiler___header, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#header */
(nitmethod_t)nit___nit__AbstractCompiler___header_61d, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#header= */
(nitmethod_t)nit___nit__AbstractCompiler___linker_script, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#linker_script */
(nitmethod_t)nit___nit__AbstractCompiler___provide_declaration, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#provide_declaration */
(nitmethod_t)nit___nit__AbstractCompiler___provided_declarations, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#provided_declarations */
(nitmethod_t)nit___nit__AbstractCompiler___requirers_of_declarations, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#requirers_of_declarations */
(nitmethod_t)nit___nit__AbstractCompiler___build_c_to_nit_bindings, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#build_c_to_nit_bindings */
(nitmethod_t)nit___nit__AbstractCompiler___compile_header, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#compile_header */
(nitmethod_t)nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__compile_header_structs, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_header_structs */
(nitmethod_t)nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__compile_nitni_structs, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_nitni_structs */
(nitmethod_t)nit___nit__AbstractCompiler___compile_finalizer_function, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#compile_finalizer_function */
(nitmethod_t)nit___nit__AbstractCompiler___compile_main_function, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#compile_main_function */
(nitmethod_t)nit___nit__AbstractCompiler___compile_nitni_global_ref_functions, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#compile_nitni_global_ref_functions */
(nitmethod_t)nit___nit__AbstractCompiler___extern_bodies, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#extern_bodies */
(nitmethod_t)nit___nit__AbstractCompiler___files_to_copy, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#files_to_copy */
(nitmethod_t)nit___nit__AbstractCompiler___seen_extern, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#seen_extern */
(nitmethod_t)nit___nit__AbstractCompiler___generate_init_attr, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#generate_init_attr */
(nitmethod_t)nit___nit__AbstractCompiler___count_type_test_tags, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_tags */
(nitmethod_t)nit___nit__AbstractCompiler___count_type_test_resolved, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_resolved */
(nitmethod_t)nit___nit__AbstractCompiler___count_type_test_unresolved, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_unresolved */
(nitmethod_t)nit___nit__AbstractCompiler___count_type_test_skipped, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#count_type_test_skipped */
(nitmethod_t)nit___nit__AbstractCompiler___init_count_type_test_tags, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#init_count_type_test_tags */
(nitmethod_t)nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__display_stats, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#display_stats */
(nitmethod_t)nit___nit__SeparateCompiler___nit__abstract_compiler__AbstractCompiler__finalize_ffi_for_module, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#finalize_ffi_for_module */
(nitmethod_t)nit___nit__AbstractCompiler___div, /* pointer to separate_compiler:SeparateCompiler:abstract_compiler#AbstractCompiler#div */
(nitmethod_t)nit___nit__SeparateCompiler___runtime_type_analysis, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis */
(nitmethod_t)nit___nit__SeparateCompiler___runtime_type_analysis_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#runtime_type_analysis= */
(nitmethod_t)nit___nit__SeparateCompiler___undead_types, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#undead_types */
(nitmethod_t)nit___nit__SeparateCompiler___live_unresolved_types, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#live_unresolved_types */
(nitmethod_t)nit___nit__SeparateCompiler___type_ids, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_ids */
(nitmethod_t)nit___nit__SeparateCompiler___type_ids_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_ids= */
(nitmethod_t)nit___nit__SeparateCompiler___type_colors, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_colors */
(nitmethod_t)nit___nit__SeparateCompiler___type_colors_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_colors= */
(nitmethod_t)nit___nit__SeparateCompiler___opentype_colors, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#opentype_colors */
(nitmethod_t)nit___nit__SeparateCompiler___opentype_colors_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#opentype_colors= */
(nitmethod_t)nit___nit__SeparateCompiler___method_colors, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#method_colors */
(nitmethod_t)nit___nit__SeparateCompiler___method_colors_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#method_colors= */
(nitmethod_t)nit___nit__SeparateCompiler___attr_colors, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_colors */
(nitmethod_t)nit___nit__SeparateCompiler___attr_colors_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_colors= */
(nitmethod_t)nit___nit__SeparateCompiler___compile_types, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_types */
(nitmethod_t)nit___nit__SeparateCompiler___compile_header_attribute_structs, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_header_attribute_structs */
(nitmethod_t)nit___nit__SeparateCompiler___compile_box_kinds, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_box_kinds */
(nitmethod_t)nit___nit__SeparateCompiler___box_kinds, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#box_kinds */
(nitmethod_t)nit___nit__SeparateCompiler___box_kind_of, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#box_kind_of */
(nitmethod_t)nit___nit__SeparateCompiler___compile_color_consts, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_color_consts */
(nitmethod_t)nit___nit__SeparateCompiler___compile_color_const, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_color_const */
(nitmethod_t)nit___nit__SeparateCompiler___color_consts_done, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#color_consts_done */
(nitmethod_t)nit___nit__SeparateCompiler___do_property_coloring, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#do_property_coloring */
(nitmethod_t)nit___nit__SeparateCompiler___build_method_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#build_method_tables */
(nitmethod_t)nit___nit__SeparateCompiler___build_attr_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#build_attr_tables */
(nitmethod_t)nit___nit__SeparateCompiler___do_type_coloring, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#do_type_coloring */
(nitmethod_t)nit___nit__SeparateCompiler___poset_from_mtypes, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#poset_from_mtypes */
(nitmethod_t)nit___nit__SeparateCompiler___build_type_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#build_type_tables */
(nitmethod_t)nit___nit__SeparateCompiler___compile_resolution_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_resolution_tables */
(nitmethod_t)nit___nit__SeparateCompiler___build_resolution_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#build_resolution_tables */
(nitmethod_t)nit___nit__SeparateCompiler___compile_module_to_c, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_module_to_c */
(nitmethod_t)nit___nit__SeparateCompiler___compile_type_to_c, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_type_to_c */
(nitmethod_t)nit___nit__SeparateCompiler___compile_type_resolution_table, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_type_resolution_table */
(nitmethod_t)nit___nit__SeparateCompiler___compile_class_to_c, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#compile_class_to_c */
(nitmethod_t)nit___nit__SeparateCompiler___hardening_live_type, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#hardening_live_type */
(nitmethod_t)nit___nit__SeparateCompiler___type_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_tables */
(nitmethod_t)nit___nit__SeparateCompiler___type_tables_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#type_tables= */
(nitmethod_t)nit___nit__SeparateCompiler___resolution_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#resolution_tables */
(nitmethod_t)nit___nit__SeparateCompiler___resolution_tables_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#resolution_tables= */
(nitmethod_t)nit___nit__SeparateCompiler___method_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#method_tables */
(nitmethod_t)nit___nit__SeparateCompiler___method_tables_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#method_tables= */
(nitmethod_t)nit___nit__SeparateCompiler___attr_tables, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_tables */
(nitmethod_t)nit___nit__SeparateCompiler___attr_tables_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_tables= */
(nitmethod_t)nit___nit__SeparateCompiler___display_sizes, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#display_sizes */
(nitmethod_t)nit___nit__SeparateCompiler___isset_checks_count, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#isset_checks_count */
(nitmethod_t)nit___nit__SeparateCompiler___isset_checks_count_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#isset_checks_count= */
(nitmethod_t)nit___nit__SeparateCompiler___attr_read_count, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_read_count */
(nitmethod_t)nit___nit__SeparateCompiler___attr_read_count_61d, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#attr_read_count= */
(nitmethod_t)nit___nit__SeparateCompiler___display_isset_checks, /* pointer to separate_compiler:SeparateCompiler:separate_compiler#SeparateCompiler#display_isset_checks */
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
long var9 /* : Int */;
val* var_ /* var : Array[String] */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : HashMap[String, Int] */;
val* var35 /* : HashMap[String, Int] */;
val* var36 /* : HashMap[String, Int] */;
val* var37 /* : HashSet[MType] */;
val* var38 /* : HashMap[MClassDef, HashSet[MType]] */;
val* var39 /* : HashMap[MClass, Int] */;
val* var40 /* : HashSet[Object] */;
val* var41 /* : HashMap[MType, Array[nullable MType]] */;
val* var42 /* : HashMap[MClassType, Array[nullable MType]] */;
val* var43 /* : HashMap[MClass, Array[nullable MPropDef]] */;
val* var44 /* : HashMap[MClass, Array[nullable MPropDef]] */;
long var45 /* : Int */;
long var46 /* : Int */;
self = nit_alloc(sizeof(struct instance) + 33*sizeof(nitattribute_t));
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
var9 = 5;
{
standard___standard__Array___with_capacity(var8, var9); /* Direct call array#Array#with_capacity on <var8:Array[String]>*/
}
var_ = var8;
if (varonce) {
var10 = varonce;
} else {
var11 = "isa";
var12 = 3;
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var10); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = "as";
var17 = 2;
var18 = standard___standard__NativeString___to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var15); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = "auto";
var22 = 4;
var23 = standard___standard__NativeString___to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var20); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = "covariance";
var27 = 10;
var28 = standard___standard__NativeString___to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var25); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = "erasure";
var32 = 7;
var33 = standard___standard__NativeString___to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var30); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_tags].val = var_; /* _count_type_test_tags on <self:SeparateCompiler exact> */
{
var34 = nit___nit__AbstractCompiler___init_count_type_test_tags(self);
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_resolved].val = var34; /* _count_type_test_resolved on <self:SeparateCompiler exact> */
{
var35 = nit___nit__AbstractCompiler___init_count_type_test_tags(self);
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val = var35; /* _count_type_test_unresolved on <self:SeparateCompiler exact> */
{
var36 = nit___nit__AbstractCompiler___init_count_type_test_tags(self);
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___count_type_test_skipped].val = var36; /* _count_type_test_skipped on <self:SeparateCompiler exact> */
var37 = NEW_standard__HashSet(&type_standard__HashSet__nit__MType);
{
standard___standard__HashSet___standard__kernel__Object__init(var37); /* Direct call hash_collection#HashSet#init on <var37:HashSet[MType]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___undead_types].val = var37; /* _undead_types on <self:SeparateCompiler exact> */
var38 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClassDef__standard__HashSet__nit__MType);
{
standard___standard__HashMap___standard__kernel__Object__init(var38); /* Direct call hash_collection#HashMap#init on <var38:HashMap[MClassDef, HashSet[MType]]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___live_unresolved_types].val = var38; /* _live_unresolved_types on <self:SeparateCompiler exact> */
var39 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClass__standard__Int);
{
standard___standard__HashMap___standard__kernel__Object__init(var39); /* Direct call hash_collection#HashMap#init on <var39:HashMap[MClass, Int]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___box_kinds].val = var39; /* _box_kinds on <self:SeparateCompiler exact> */
var40 = NEW_standard__HashSet(&type_standard__HashSet__standard__Object);
{
standard___standard__HashSet___standard__kernel__Object__init(var40); /* Direct call hash_collection#HashSet#init on <var40:HashSet[Object]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___color_consts_done].val = var40; /* _color_consts_done on <self:SeparateCompiler exact> */
var41 = NEW_standard__HashMap(&type_standard__HashMap__nit__MType__standard__Array__nullable__nit__MType);
{
standard___standard__HashMap___standard__kernel__Object__init(var41); /* Direct call hash_collection#HashMap#init on <var41:HashMap[MType, Array[nullable MType]]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___type_tables].val = var41; /* _type_tables on <self:SeparateCompiler exact> */
var42 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClassType__standard__Array__nullable__nit__MType);
{
standard___standard__HashMap___standard__kernel__Object__init(var42); /* Direct call hash_collection#HashMap#init on <var42:HashMap[MClassType, Array[nullable MType]]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___resolution_tables].val = var42; /* _resolution_tables on <self:SeparateCompiler exact> */
var43 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClass__standard__Array__nullable__nit__MPropDef);
{
standard___standard__HashMap___standard__kernel__Object__init(var43); /* Direct call hash_collection#HashMap#init on <var43:HashMap[MClass, Array[nullable MPropDef]]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___method_tables].val = var43; /* _method_tables on <self:SeparateCompiler exact> */
var44 = NEW_standard__HashMap(&type_standard__HashMap__nit__MClass__standard__Array__nullable__nit__MPropDef);
{
standard___standard__HashMap___standard__kernel__Object__init(var44); /* Direct call hash_collection#HashMap#init on <var44:HashMap[MClass, Array[nullable MPropDef]]>*/
}
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_tables].val = var44; /* _attr_tables on <self:SeparateCompiler exact> */
var45 = 0;
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___isset_checks_count].l = var45; /* _isset_checks_count on <self:SeparateCompiler exact> */
var46 = 0;
self->attrs[COLOR_nit__separate_compiler__SeparateCompiler___attr_read_count].l = var46; /* _attr_read_count on <self:SeparateCompiler exact> */
return self;
}
/* runtime class nit__SeparateCompilerVisitor */
const struct class class_nit__SeparateCompilerVisitor = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to separate_compiler:SeparateCompilerVisitor:kernel#Object#sys */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___standard__kernel__Object__init, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to separate_compiler:SeparateCompilerVisitor:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to separate_compiler:SeparateCompilerVisitor:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to separate_compiler:SeparateCompilerVisitor:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to separate_compiler:SeparateCompilerVisitor:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to separate_compiler:SeparateCompilerVisitor:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to separate_compiler:SeparateCompilerVisitor:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to separate_compiler:SeparateCompilerVisitor:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to separate_compiler:SeparateCompilerVisitor:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to separate_compiler:SeparateCompilerVisitor:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to separate_compiler:SeparateCompilerVisitor:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to separate_compiler:SeparateCompilerVisitor:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to separate_compiler:SeparateCompilerVisitor:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to separate_compiler:SeparateCompilerVisitor:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to separate_compiler:SeparateCompilerVisitor:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to separate_compiler:SeparateCompilerVisitor:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to separate_compiler:SeparateCompilerVisitor:model#Object#extern_kind */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___compiler, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compiler */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___compiler_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compiler= */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___current_node, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#current_node */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___current_node_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#current_node= */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___frame, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#frame */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___frame_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#frame= */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___object_type, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#object_type */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___bool_type, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#bool_type */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___writer, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#writer */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___writer_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#writer= */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___get_class, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_class */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___get_property, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_property */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#compile_callsite */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__native_array_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#native_array_instance */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__calloc_array, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#calloc_array */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__native_array_def, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#native_array_def */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___varargize, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#varargize */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___anchor, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#anchor */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___resolve_for, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#resolve_for */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___autoadapt, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#autoadapt */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__supercall, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#supercall */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__adapt_signature, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#adapt_signature */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#unbox_signature_extern */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#autobox */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__box_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#box_extern */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__unbox_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#unbox_extern */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__type_test, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#type_test */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__is_same_type_test, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#is_same_type_test */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__equal_test, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#equal_test */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__call, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#call */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#send */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___monomorphic_send, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#monomorphic_send */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___monomorphic_super_send, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#monomorphic_super_send */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__isset_attribute, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#isset_attribute */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__read_attribute, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#read_attribute */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__write_attribute, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#write_attribute */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___check_recv_notnull, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#check_recv_notnull */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___names, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#names */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___last, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___last_61d, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#last= */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___get_name, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#get_name */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___escapemark_name, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#escapemark_name */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_escape_label, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_escape_label */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__class_name_string, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#class_name_string */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___variables, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variables */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___variable, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#variable */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___new_var, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_var */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___new_var_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_var_extern */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___new_named_var, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_named_var */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___assign, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#assign */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__init_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#init_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___init_instance_or_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#init_instance_or_extern */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___set_finalizer, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#set_finalizer */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___int_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#int_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___bool_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#bool_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___string_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#string_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___value_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#value_instance */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__array_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#array_instance */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__vararg_instance, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#vararg_instance */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_decl, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_decl */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___require_declaration, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#require_declaration */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___declare_once, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#declare_once */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_extern, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_extern */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___new_expr, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#new_expr */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_abort, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_abort */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_raw_abort, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_raw_abort */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___add_cast, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#add_cast */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___ret, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#ret */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___stmt, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#stmt */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___expr, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___expr_bool, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#expr_bool */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___debug, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#debug */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___type_info, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#type_info */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___before_send, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#before_send */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___table_send, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#table_send */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___hardening_live_open_type, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#hardening_live_open_type */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___hardening_cast_type, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#hardening_cast_type */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___can_be_primitive, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#can_be_primitive */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___maybe_null, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#maybe_null */
(nitmethod_t)nit___nit__SeparateCompilerVisitor___link_unresolved_type, /* pointer to separate_compiler:SeparateCompilerVisitor:separate_compiler#SeparateCompilerVisitor#link_unresolved_type */
(nitmethod_t)nit___nit__AbstractCompilerVisitor___compile_callsite, /* pointer to separate_compiler:SeparateCompilerVisitor:abstract_compiler#AbstractCompilerVisitor#compile_callsite */
}
};
/* allocate SeparateCompilerVisitor */
val* NEW_nit__SeparateCompilerVisitor(const struct type* type) {
val* self /* : SeparateCompilerVisitor */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : HashSet[String] */;
long var3 /* : Int */;
val* var4 /* : HashMap[Variable, RuntimeVariable] */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__SeparateCompilerVisitor;
var = NULL;
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = var; /* _current_node on <self:SeparateCompilerVisitor exact> */
var1 = NULL;
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val = var1; /* _frame on <self:SeparateCompilerVisitor exact> */
var2 = NEW_standard__HashSet(&type_standard__HashSet__standard__String);
{
standard___standard__HashSet___standard__kernel__Object__init(var2); /* Direct call hash_collection#HashSet#init on <var2:HashSet[String]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___names].val = var2; /* _names on <self:SeparateCompilerVisitor exact> */
var3 = 0;
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___last].l = var3; /* _last on <self:SeparateCompilerVisitor exact> */
var4 = NEW_standard__HashMap(&type_standard__HashMap__nit__Variable__nit__RuntimeVariable);
{
standard___standard__HashMap___standard__kernel__Object__init(var4); /* Direct call hash_collection#HashMap#init on <var4:HashMap[Variable, RuntimeVariable]>*/
}
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___variables].val = var4; /* _variables on <self:SeparateCompilerVisitor exact> */
return self;
}
/* runtime class nit__SeparateRuntimeFunction */
const struct class class_nit__SeparateRuntimeFunction = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#sys */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___standard__kernel__Object__init, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to separate_compiler:SeparateRuntimeFunction:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___standard__string__Object__to_s, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to separate_compiler:SeparateRuntimeFunction:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to separate_compiler:SeparateRuntimeFunction:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to separate_compiler:SeparateRuntimeFunction:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to separate_compiler:SeparateRuntimeFunction:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to separate_compiler:SeparateRuntimeFunction:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to separate_compiler:SeparateRuntimeFunction:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to separate_compiler:SeparateRuntimeFunction:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to separate_compiler:SeparateRuntimeFunction:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to separate_compiler:SeparateRuntimeFunction:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to separate_compiler:SeparateRuntimeFunction:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to separate_compiler:SeparateRuntimeFunction:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to separate_compiler:SeparateRuntimeFunction:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to separate_compiler:SeparateRuntimeFunction:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to separate_compiler:SeparateRuntimeFunction:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to separate_compiler:SeparateRuntimeFunction:model#Object#extern_kind */
(nitmethod_t)nit___nit__AbstractRuntimeFunction___mmethoddef, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#mmethoddef */
(nitmethod_t)nit___nit__AbstractRuntimeFunction___mmethoddef_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#mmethoddef= */
(nitmethod_t)nit___nit__AbstractRuntimeFunction___c_name, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___nit__abstract_compiler__AbstractRuntimeFunction__build_c_name, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#build_c_name */
(nitmethod_t)nit___nit__AbstractRuntimeFunction___c_name_cache, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name_cache */
(nitmethod_t)nit___nit__AbstractRuntimeFunction___c_name_cache_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#c_name_cache= */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___nit__abstract_compiler__AbstractRuntimeFunction__compile_to_c, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#compile_to_c */
(nitmethod_t)standard___standard__Object___init, /* pointer to separate_compiler:SeparateRuntimeFunction:kernel#Object#init */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___called_recv, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#called_recv */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___called_recv_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#called_recv= */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___called_signature, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#called_signature */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___called_signature_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#called_signature= */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___build_c_name_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#build_c_name= */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___is_thunk, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#is_thunk */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___is_thunk_61d, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#is_thunk= */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___c_ret, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#c_ret */
(nitmethod_t)nit___nit__SeparateRuntimeFunction___c_sig, /* pointer to separate_compiler:SeparateRuntimeFunction:separate_compiler#SeparateRuntimeFunction#c_sig */
(nitmethod_t)nit___nit__AbstractRuntimeFunction___standard__kernel__Object__init, /* pointer to separate_compiler:SeparateRuntimeFunction:abstract_compiler#AbstractRuntimeFunction#init */
}
};
/* allocate SeparateRuntimeFunction */
val* NEW_nit__SeparateRuntimeFunction(const struct type* type) {
val* self /* : SeparateRuntimeFunction */;
val* var /* : null */;
short int var1 /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 10*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__SeparateRuntimeFunction;
var = NULL;
self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___c_name_cache].val = var; /* _c_name_cache on <self:SeparateRuntimeFunction exact> */
var1 = 0;
self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___is_thunk].s = var1; /* _is_thunk on <self:SeparateRuntimeFunction exact> */
return self;
}
/* runtime class nit__PropertyLayoutElement */
/* allocate PropertyLayoutElement */
val* NEW_nit__PropertyLayoutElement(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "PropertyLayoutElement is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__Toolchain */
/* allocate Toolchain */
val* NEW_nit__Toolchain(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "Toolchain is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__MakefileToolchain */
const struct class class_nit__MakefileToolchain = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#sys */
(nitmethod_t)nit___nit__Toolchain___standard__kernel__Object__init, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#Toolchain#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to abstract_compiler:MakefileToolchain:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to abstract_compiler:MakefileToolchain:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to abstract_compiler:MakefileToolchain:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to abstract_compiler:MakefileToolchain:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to abstract_compiler:MakefileToolchain:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to abstract_compiler:MakefileToolchain:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to abstract_compiler:MakefileToolchain:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to abstract_compiler:MakefileToolchain:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to abstract_compiler:MakefileToolchain:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to abstract_compiler:MakefileToolchain:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to abstract_compiler:MakefileToolchain:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to abstract_compiler:MakefileToolchain:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to abstract_compiler:MakefileToolchain:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to abstract_compiler:MakefileToolchain:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to abstract_compiler:MakefileToolchain:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to abstract_compiler:MakefileToolchain:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to abstract_compiler:MakefileToolchain:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to abstract_compiler:MakefileToolchain:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to abstract_compiler:MakefileToolchain:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to abstract_compiler:MakefileToolchain:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to abstract_compiler:MakefileToolchain:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to abstract_compiler:MakefileToolchain:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to abstract_compiler:MakefileToolchain:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to abstract_compiler:MakefileToolchain:model#Object#extern_kind */
(nitmethod_t)nit___nit__Toolchain___toolcontext, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#Toolchain#toolcontext */
(nitmethod_t)nit___nit__Toolchain___toolcontext_61d, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#Toolchain#toolcontext= */
(nitmethod_t)nit___nit__Toolchain___compile_dir, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#Toolchain#compile_dir */
(nitmethod_t)nit___nit__MakefileToolchain___Toolchain__write_and_make, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#write_and_make */
(nitmethod_t)standard___standard__Object___init, /* pointer to abstract_compiler:MakefileToolchain:kernel#Object#init */
(nitmethod_t)nit___nit__MakefileToolchain___write_files, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#write_files */
(nitmethod_t)nit___nit__MakefileToolchain___makefile_name, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#makefile_name */
(nitmethod_t)nit___nit__MakefileToolchain___default_outname, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#default_outname */
(nitmethod_t)nit___nit__MakefileToolchain___outfile, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#outfile */
(nitmethod_t)nit___nit__MakefileToolchain___write_makefile, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#write_makefile */
(nitmethod_t)nit___nit__MakefileToolchain___compile_c_code, /* pointer to abstract_compiler:MakefileToolchain:abstract_compiler#MakefileToolchain#compile_c_code */
}
};
/* allocate MakefileToolchain */
val* NEW_nit__MakefileToolchain(const struct type* type) {
val* self /* : MakefileToolchain */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__MakefileToolchain;
return self;
}
/* runtime class nit__AbstractCompiler */
/* allocate AbstractCompiler */
val* NEW_nit__AbstractCompiler(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AbstractCompiler is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__CodeFile */
const struct class class_nit__CodeFile = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to abstract_compiler:CodeFile:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to abstract_compiler:CodeFile:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to abstract_compiler:CodeFile:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to abstract_compiler:CodeFile:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to abstract_compiler:CodeFile:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to abstract_compiler:CodeFile:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to abstract_compiler:CodeFile:kernel#Object#sys */
(nitmethod_t)nit___nit__CodeFile___standard__kernel__Object__init, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to abstract_compiler:CodeFile:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to abstract_compiler:CodeFile:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to abstract_compiler:CodeFile:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to abstract_compiler:CodeFile:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to abstract_compiler:CodeFile:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to abstract_compiler:CodeFile:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to abstract_compiler:CodeFile:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to abstract_compiler:CodeFile:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to abstract_compiler:CodeFile:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to abstract_compiler:CodeFile:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to abstract_compiler:CodeFile:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to abstract_compiler:CodeFile:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to abstract_compiler:CodeFile:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to abstract_compiler:CodeFile:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to abstract_compiler:CodeFile:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to abstract_compiler:CodeFile:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to abstract_compiler:CodeFile:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to abstract_compiler:CodeFile:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to abstract_compiler:CodeFile:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to abstract_compiler:CodeFile:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to abstract_compiler:CodeFile:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to abstract_compiler:CodeFile:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to abstract_compiler:CodeFile:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to abstract_compiler:CodeFile:model#Object#extern_kind */
(nitmethod_t)nit___nit__CodeFile___name, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#name */
(nitmethod_t)nit___nit__CodeFile___name_61d, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#name= */
(nitmethod_t)nit___nit__CodeFile___writers, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#writers */
(nitmethod_t)nit___nit__CodeFile___required_declarations, /* pointer to abstract_compiler:CodeFile:abstract_compiler#CodeFile#required_declarations */
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
(nitmethod_t)standard___standard__Object___object_id, /* pointer to abstract_compiler:CodeWriter:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to abstract_compiler:CodeWriter:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to abstract_compiler:CodeWriter:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to abstract_compiler:CodeWriter:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to abstract_compiler:CodeWriter:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to abstract_compiler:CodeWriter:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to abstract_compiler:CodeWriter:kernel#Object#sys */
(nitmethod_t)nit___nit__CodeWriter___standard__kernel__Object__init, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to abstract_compiler:CodeWriter:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to abstract_compiler:CodeWriter:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to abstract_compiler:CodeWriter:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to abstract_compiler:CodeWriter:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to abstract_compiler:CodeWriter:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to abstract_compiler:CodeWriter:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to abstract_compiler:CodeWriter:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to abstract_compiler:CodeWriter:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to abstract_compiler:CodeWriter:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to abstract_compiler:CodeWriter:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to abstract_compiler:CodeWriter:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to abstract_compiler:CodeWriter:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to abstract_compiler:CodeWriter:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to abstract_compiler:CodeWriter:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to abstract_compiler:CodeWriter:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to abstract_compiler:CodeWriter:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to abstract_compiler:CodeWriter:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to abstract_compiler:CodeWriter:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to abstract_compiler:CodeWriter:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to abstract_compiler:CodeWriter:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to abstract_compiler:CodeWriter:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to abstract_compiler:CodeWriter:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to abstract_compiler:CodeWriter:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to abstract_compiler:CodeWriter:model#Object#extern_kind */
(nitmethod_t)nit___nit__CodeWriter___file, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#file */
(nitmethod_t)nit___nit__CodeWriter___file_61d, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#file= */
(nitmethod_t)nit___nit__CodeWriter___lines, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#lines */
(nitmethod_t)nit___nit__CodeWriter___decl_lines, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#decl_lines */
(nitmethod_t)nit___nit__CodeWriter___add_decl, /* pointer to abstract_compiler:CodeWriter:abstract_compiler#CodeWriter#add_decl */
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
show_backtrace(1);
}
/* runtime class nit__AbstractRuntimeFunction */
/* allocate AbstractRuntimeFunction */
val* NEW_nit__AbstractRuntimeFunction(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AbstractRuntimeFunction is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__RuntimeVariable */
const struct class class_nit__RuntimeVariable = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to abstract_compiler:RuntimeVariable:kernel#Object#sys */
(nitmethod_t)nit___nit__RuntimeVariable___standard__kernel__Object__init, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to abstract_compiler:RuntimeVariable:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__RuntimeVariable___standard__string__Object__to_s, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to abstract_compiler:RuntimeVariable:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to abstract_compiler:RuntimeVariable:string#Object#class_name */
(nitmethod_t)nit___nit__RuntimeVariable___standard__string__Object__inspect, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to abstract_compiler:RuntimeVariable:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to abstract_compiler:RuntimeVariable:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to abstract_compiler:RuntimeVariable:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to abstract_compiler:RuntimeVariable:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to abstract_compiler:RuntimeVariable:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to abstract_compiler:RuntimeVariable:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to abstract_compiler:RuntimeVariable:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to abstract_compiler:RuntimeVariable:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to abstract_compiler:RuntimeVariable:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to abstract_compiler:RuntimeVariable:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to abstract_compiler:RuntimeVariable:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to abstract_compiler:RuntimeVariable:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to abstract_compiler:RuntimeVariable:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to abstract_compiler:RuntimeVariable:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to abstract_compiler:RuntimeVariable:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to abstract_compiler:RuntimeVariable:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to abstract_compiler:RuntimeVariable:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to abstract_compiler:RuntimeVariable:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to abstract_compiler:RuntimeVariable:model#Object#extern_kind */
(nitmethod_t)nit___nit__RuntimeVariable___name, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#name */
(nitmethod_t)nit___nit__RuntimeVariable___name_61d, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#name= */
(nitmethod_t)nit___nit__RuntimeVariable___mtype, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#mtype */
(nitmethod_t)nit___nit__RuntimeVariable___mtype_61d, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#mtype= */
(nitmethod_t)nit___nit__RuntimeVariable___mcasttype, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#mcasttype */
(nitmethod_t)nit___nit__RuntimeVariable___mcasttype_61d, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#mcasttype= */
(nitmethod_t)nit___nit__RuntimeVariable___is_exact, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#is_exact */
(nitmethod_t)nit___nit__RuntimeVariable___is_exact_61d, /* pointer to abstract_compiler:RuntimeVariable:abstract_compiler#RuntimeVariable#is_exact= */
}
};
/* allocate RuntimeVariable */
val* NEW_nit__RuntimeVariable(const struct type* type) {
val* self /* : RuntimeVariable */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__RuntimeVariable;
var = 0;
self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___is_exact].s = var; /* _is_exact on <self:RuntimeVariable exact> */
return self;
}
/* runtime class nit__StaticFrame */
const struct class class_nit__StaticFrame = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to abstract_compiler:StaticFrame:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to abstract_compiler:StaticFrame:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to abstract_compiler:StaticFrame:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to abstract_compiler:StaticFrame:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to abstract_compiler:StaticFrame:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to abstract_compiler:StaticFrame:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to abstract_compiler:StaticFrame:kernel#Object#sys */
(nitmethod_t)nit___nit__StaticFrame___standard__kernel__Object__init, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to abstract_compiler:StaticFrame:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to abstract_compiler:StaticFrame:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to abstract_compiler:StaticFrame:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to abstract_compiler:StaticFrame:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to abstract_compiler:StaticFrame:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to abstract_compiler:StaticFrame:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to abstract_compiler:StaticFrame:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to abstract_compiler:StaticFrame:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to abstract_compiler:StaticFrame:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to abstract_compiler:StaticFrame:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to abstract_compiler:StaticFrame:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to abstract_compiler:StaticFrame:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to abstract_compiler:StaticFrame:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to abstract_compiler:StaticFrame:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to abstract_compiler:StaticFrame:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to abstract_compiler:StaticFrame:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to abstract_compiler:StaticFrame:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to abstract_compiler:StaticFrame:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to abstract_compiler:StaticFrame:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to abstract_compiler:StaticFrame:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to abstract_compiler:StaticFrame:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to abstract_compiler:StaticFrame:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to abstract_compiler:StaticFrame:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to abstract_compiler:StaticFrame:model#Object#extern_kind */
(nitmethod_t)nit___nit__StaticFrame___visitor_61d, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#visitor= */
(nitmethod_t)nit___nit__StaticFrame___mpropdef, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#mpropdef */
(nitmethod_t)nit___nit__StaticFrame___mpropdef_61d, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#mpropdef= */
(nitmethod_t)nit___nit__StaticFrame___receiver, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#receiver */
(nitmethod_t)nit___nit__StaticFrame___receiver_61d, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#receiver= */
(nitmethod_t)nit___nit__StaticFrame___arguments, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#arguments */
(nitmethod_t)nit___nit__StaticFrame___arguments_61d, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#arguments= */
(nitmethod_t)nit___nit__StaticFrame___returnvar, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#returnvar */
(nitmethod_t)nit___nit__StaticFrame___returnvar_61d, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#returnvar= */
(nitmethod_t)nit___nit__StaticFrame___returnlabel, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#returnlabel */
(nitmethod_t)nit___nit__StaticFrame___returnlabel_61d, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#returnlabel= */
(nitmethod_t)nit___nit__StaticFrame___escapemark_names, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#escapemark_names */
(nitmethod_t)nit___nit__StaticFrame___comprehension, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#comprehension */
(nitmethod_t)nit___nit__StaticFrame___comprehension_61d, /* pointer to abstract_compiler:StaticFrame:abstract_compiler#StaticFrame#comprehension= */
(nitmethod_t)standard___standard__Object___init, /* pointer to abstract_compiler:StaticFrame:kernel#Object#init */
}
};
/* allocate StaticFrame */
val* NEW_nit__StaticFrame(const struct type* type) {
val* self /* : StaticFrame */;
val* var /* : null */;
val* var1 /* : null */;
val* var2 /* : HashMap[EscapeMark, String] */;
val* var3 /* : null */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__StaticFrame;
var = NULL;
self->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnvar].val = var; /* _returnvar on <self:StaticFrame exact> */
var1 = NULL;
self->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnlabel].val = var1; /* _returnlabel on <self:StaticFrame exact> */
var2 = NEW_standard__HashMap(&type_standard__HashMap__nit__EscapeMark__standard__String);
{
standard___standard__HashMap___standard__kernel__Object__init(var2); /* Direct call hash_collection#HashMap#init on <var2:HashMap[EscapeMark, String]>*/
}
self->attrs[COLOR_nit__abstract_compiler__StaticFrame___escapemark_names].val = var2; /* _escapemark_names on <self:StaticFrame exact> */
var3 = NULL;
self->attrs[COLOR_nit__abstract_compiler__StaticFrame___comprehension].val = var3; /* _comprehension on <self:StaticFrame exact> */
return self;
}
/* runtime class nit__platform__PlatformPhase */
const struct class class_nit__platform__PlatformPhase = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to platform:PlatformPhase:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to platform:PlatformPhase:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to platform:PlatformPhase:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to platform:PlatformPhase:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to platform:PlatformPhase:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to platform:PlatformPhase:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to platform:PlatformPhase:kernel#Object#sys */
(nitmethod_t)nit___nit__Phase___standard__kernel__Object__init, /* pointer to platform:PlatformPhase:phase#Phase#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to platform:PlatformPhase:sorter#Object#default_comparator */
(nitmethod_t)nit___nit__Phase___standard__string__Object__to_s, /* pointer to platform:PlatformPhase:phase#Phase#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to platform:PlatformPhase:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to platform:PlatformPhase:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to platform:PlatformPhase:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to platform:PlatformPhase:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to platform:PlatformPhase:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to platform:PlatformPhase:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to platform:PlatformPhase:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to platform:PlatformPhase:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to platform:PlatformPhase:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to platform:PlatformPhase:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to platform:PlatformPhase:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to platform:PlatformPhase:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to platform:PlatformPhase:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to platform:PlatformPhase:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to platform:PlatformPhase:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to platform:PlatformPhase:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to platform:PlatformPhase:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to platform:PlatformPhase:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to platform:PlatformPhase:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to platform:PlatformPhase:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to platform:PlatformPhase:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to platform:PlatformPhase:model#Object#extern_kind */
(nitmethod_t)nit___nit__Phase___toolcontext, /* pointer to platform:PlatformPhase:phase#Phase#toolcontext */
(nitmethod_t)nit___nit__Phase___toolcontext_61d, /* pointer to platform:PlatformPhase:phase#Phase#toolcontext= */
(nitmethod_t)nit___nit__Phase___in_hierarchy, /* pointer to platform:PlatformPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nit___nit__Phase___in_hierarchy_61d, /* pointer to platform:PlatformPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nit___nit__Phase___depends, /* pointer to platform:PlatformPhase:phase#Phase#depends */
(nitmethod_t)nit___nit__Phase___depends_61d, /* pointer to platform:PlatformPhase:phase#Phase#depends= */
(nitmethod_t)nit___nit__Phase___disabled, /* pointer to platform:PlatformPhase:phase#Phase#disabled */
(nitmethod_t)nit___nit__Phase___disabled_61d, /* pointer to platform:PlatformPhase:phase#Phase#disabled= */
(nitmethod_t)nit___nit__Phase___process_nmodule, /* pointer to platform:PlatformPhase:phase#Phase#process_nmodule */
(nitmethod_t)nit___nit__Phase___process_nclassdef, /* pointer to platform:PlatformPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nit___nit__Phase___process_npropdef, /* pointer to platform:PlatformPhase:phase#Phase#process_npropdef */
(nitmethod_t)nit__platform___nit__platform__PlatformPhase___nit__phase__Phase__process_annotated_node, /* pointer to platform:PlatformPhase:platform#PlatformPhase#process_annotated_node */
(nitmethod_t)nit__modelbuilder___Phase___process_mainmodule, /* pointer to platform:PlatformPhase:modelbuilder#Phase#process_mainmodule */
}
};
/* allocate PlatformPhase */
val* NEW_nit__platform__PlatformPhase(const struct type* type) {
val* self /* : PlatformPhase */;
short int var /* : Bool */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__platform__PlatformPhase;
var = 0;
self->attrs[COLOR_nit__phase__Phase___disabled].s = var; /* _disabled on <self:PlatformPhase exact> */
return self;
}
/* runtime class nit__Platform */
const struct class class_nit__Platform = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to platform:Platform:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to platform:Platform:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to platform:Platform:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to platform:Platform:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to platform:Platform:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to platform:Platform:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to platform:Platform:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to platform:Platform:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to platform:Platform:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to platform:Platform:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to platform:Platform:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to platform:Platform:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to platform:Platform:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to platform:Platform:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to platform:Platform:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to platform:Platform:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to platform:Platform:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to platform:Platform:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to platform:Platform:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to platform:Platform:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to platform:Platform:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to platform:Platform:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to platform:Platform:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to platform:Platform:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to platform:Platform:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to platform:Platform:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to platform:Platform:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to platform:Platform:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to platform:Platform:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to platform:Platform:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to platform:Platform:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to platform:Platform:model#Object#extern_kind */
(nitmethod_t)nit___nit__Platform___supports_libunwind, /* pointer to platform:Platform:platform#Platform#supports_libunwind */
(nitmethod_t)nit___nit__Platform___supports_libgc, /* pointer to platform:Platform:platform#Platform#supports_libgc */
(nitmethod_t)nit___nit__Platform___no_main, /* pointer to platform:Platform:platform#Platform#no_main */
(nitmethod_t)nit___nit__Platform___supports_linker_script, /* pointer to platform:Platform:platform#Platform#supports_linker_script */
(nitmethod_t)nit__abstract_compiler___Platform___toolchain, /* pointer to platform:Platform:abstract_compiler#Platform#toolchain */
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
show_backtrace(1);
}
/* runtime class nit__CCompilationUnit */
/* allocate CCompilationUnit */
val* NEW_nit__CCompilationUnit(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CCompilationUnit is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__CFunction */
/* allocate CFunction */
val* NEW_nit__CFunction(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CFunction is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__ExternFile */
/* allocate ExternFile */
val* NEW_nit__ExternFile(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ExternFile is DEAD");
PRINT_ERROR("\n");
show_backtrace(1);
}
/* runtime class nit__ExternCFile */
const struct class class_nit__ExternCFile = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to c_tools:ExternCFile:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to c_tools:ExternCFile:kernel#Object#is_same_instance */
(nitmethod_t)nit___nit__ExternCFile___standard__kernel__Object___61d_61d, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to c_tools:ExternCFile:kernel#Object#!= */
(nitmethod_t)nit___nit__ExternCFile___standard__kernel__Object__hash, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to c_tools:ExternCFile:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to c_tools:ExternCFile:kernel#Object#sys */
(nitmethod_t)nit___nit__ExternCFile___standard__kernel__Object__init, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to c_tools:ExternCFile:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to c_tools:ExternCFile:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to c_tools:ExternCFile:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to c_tools:ExternCFile:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to c_tools:ExternCFile:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to c_tools:ExternCFile:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to c_tools:ExternCFile:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to c_tools:ExternCFile:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to c_tools:ExternCFile:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to c_tools:ExternCFile:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to c_tools:ExternCFile:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to c_tools:ExternCFile:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to c_tools:ExternCFile:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to c_tools:ExternCFile:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to c_tools:ExternCFile:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to c_tools:ExternCFile:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to c_tools:ExternCFile:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to c_tools:ExternCFile:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to c_tools:ExternCFile:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to c_tools:ExternCFile:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to c_tools:ExternCFile:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to c_tools:ExternCFile:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to c_tools:ExternCFile:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to c_tools:ExternCFile:model#Object#extern_kind */
(nitmethod_t)nit___nit__ExternFile___filename, /* pointer to c_tools:ExternCFile:c_tools#ExternFile#filename */
(nitmethod_t)nit___nit__ExternFile___filename_61d, /* pointer to c_tools:ExternCFile:c_tools#ExternFile#filename= */
(nitmethod_t)nit___nit__ExternCFile___ExternFile__makefile_rule_name, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#makefile_rule_name */
(nitmethod_t)nit___nit__ExternCFile___ExternFile__makefile_rule_content, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#makefile_rule_content */
(nitmethod_t)nit___nit__ExternCFile___ExternFile__compiles_to_o_file, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#compiles_to_o_file */
(nitmethod_t)nit___nit__ExternFile___add_to_jar, /* pointer to c_tools:ExternCFile:c_tools#ExternFile#add_to_jar */
(nitmethod_t)nit___nit__ExternFile___pkgconfigs, /* pointer to c_tools:ExternCFile:c_tools#ExternFile#pkgconfigs */
(nitmethod_t)standard___standard__Object___init, /* pointer to c_tools:ExternCFile:kernel#Object#init */
(nitmethod_t)nit___nit__ExternCFile___cflags, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#cflags */
(nitmethod_t)nit___nit__ExternCFile___cflags_61d, /* pointer to c_tools:ExternCFile:c_tools#ExternCFile#cflags= */
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
/* runtime class nit__POSetConflictGraph */
const struct class class_nit__POSetConflictGraph = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to coloring:POSetConflictGraph:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to coloring:POSetConflictGraph:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to coloring:POSetConflictGraph:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to coloring:POSetConflictGraph:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to coloring:POSetConflictGraph:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to coloring:POSetConflictGraph:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to coloring:POSetConflictGraph:kernel#Object#sys */
(nitmethod_t)nit___nit__POSetConflictGraph___standard__kernel__Object__init, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to coloring:POSetConflictGraph:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to coloring:POSetConflictGraph:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to coloring:POSetConflictGraph:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to coloring:POSetConflictGraph:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to coloring:POSetConflictGraph:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to coloring:POSetConflictGraph:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to coloring:POSetConflictGraph:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to coloring:POSetConflictGraph:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to coloring:POSetConflictGraph:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to coloring:POSetConflictGraph:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to coloring:POSetConflictGraph:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to coloring:POSetConflictGraph:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to coloring:POSetConflictGraph:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to coloring:POSetConflictGraph:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to coloring:POSetConflictGraph:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to coloring:POSetConflictGraph:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to coloring:POSetConflictGraph:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to coloring:POSetConflictGraph:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to coloring:POSetConflictGraph:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to coloring:POSetConflictGraph:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to coloring:POSetConflictGraph:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to coloring:POSetConflictGraph:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to coloring:POSetConflictGraph:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to coloring:POSetConflictGraph:model#Object#extern_kind */
(nitmethod_t)nit___nit__POSetConflictGraph___core, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#core */
(nitmethod_t)nit___nit__POSetConflictGraph___border, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#border */
(nitmethod_t)nit___nit__POSetConflictGraph___crown, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#crown */
(nitmethod_t)nit___nit__POSetConflictGraph___conflicts, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#conflicts */
(nitmethod_t)nit___nit__POSetConflictGraph___poset, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#poset */
(nitmethod_t)nit___nit__POSetConflictGraph___poset_61d, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#poset= */
(nitmethod_t)nit___nit__POSetConflictGraph___extract_core, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#extract_core */
(nitmethod_t)nit___nit__POSetConflictGraph___extract_border, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#extract_border */
(nitmethod_t)nit___nit__POSetConflictGraph___is_border, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#is_border */
(nitmethod_t)nit___nit__POSetConflictGraph___extract_crown, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#extract_crown */
(nitmethod_t)nit___nit__POSetConflictGraph___compute_conflicts, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#compute_conflicts */
(nitmethod_t)nit___nit__POSetConflictGraph___add_conflict, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#add_conflict */
(nitmethod_t)nit___nit__POSetConflictGraph___add_conflicts, /* pointer to coloring:POSetConflictGraph:coloring#POSetConflictGraph#add_conflicts */
}
};
/* allocate POSetConflictGraph[Object] */
val* NEW_nit__POSetConflictGraph(const struct type* type) {
val* self /* : POSetConflictGraph[Object] */;
val* var /* : HashSet[Object] */;
val* var1 /* : HashSet[Object] */;
val* var2 /* : HashSet[Object] */;
val* var3 /* : HashMap[Object, Set[Object]] */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__POSetConflictGraph;
var = NEW_standard__HashSet(self->type->resolution_table->types[COLOR_standard__HashSet__nit__POSetConflictGraph___35dE]);
{
standard___standard__HashSet___standard__kernel__Object__init(var); /* Direct call hash_collection#HashSet#init on <var:HashSet[Object]>*/
}
self->attrs[COLOR_nit__coloring__POSetConflictGraph___core].val = var; /* _core on <self:POSetConflictGraph[Object] exact> */
var1 = NEW_standard__HashSet(self->type->resolution_table->types[COLOR_standard__HashSet__nit__POSetConflictGraph___35dE]);
{
standard___standard__HashSet___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashSet#init on <var1:HashSet[Object]>*/
}
self->attrs[COLOR_nit__coloring__POSetConflictGraph___border].val = var1; /* _border on <self:POSetConflictGraph[Object] exact> */
var2 = NEW_standard__HashSet(self->type->resolution_table->types[COLOR_standard__HashSet__nit__POSetConflictGraph___35dE]);
{
standard___standard__HashSet___standard__kernel__Object__init(var2); /* Direct call hash_collection#HashSet#init on <var2:HashSet[Object]>*/
}
self->attrs[COLOR_nit__coloring__POSetConflictGraph___crown].val = var2; /* _crown on <self:POSetConflictGraph[Object] exact> */
var3 = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__nit__POSetConflictGraph___35dE__standard__Set__nit__POSetConflictGraph___35dE]);
{
standard___standard__HashMap___standard__kernel__Object__init(var3); /* Direct call hash_collection#HashMap#init on <var3:HashMap[Object, Set[Object]]>*/
}
self->attrs[COLOR_nit__coloring__POSetConflictGraph___conflicts].val = var3; /* _conflicts on <self:POSetConflictGraph[Object] exact> */
return self;
}
/* runtime class nit__POSetColorer */
const struct class class_nit__POSetColorer = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to coloring:POSetColorer:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to coloring:POSetColorer:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to coloring:POSetColorer:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to coloring:POSetColorer:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to coloring:POSetColorer:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to coloring:POSetColorer:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to coloring:POSetColorer:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to coloring:POSetColorer:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to coloring:POSetColorer:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to coloring:POSetColorer:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to coloring:POSetColorer:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to coloring:POSetColorer:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to coloring:POSetColorer:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to coloring:POSetColorer:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to coloring:POSetColorer:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to coloring:POSetColorer:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to coloring:POSetColorer:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to coloring:POSetColorer:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to coloring:POSetColorer:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to coloring:POSetColorer:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to coloring:POSetColorer:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to coloring:POSetColorer:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to coloring:POSetColorer:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to coloring:POSetColorer:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to coloring:POSetColorer:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to coloring:POSetColorer:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to coloring:POSetColorer:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to coloring:POSetColorer:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to coloring:POSetColorer:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to coloring:POSetColorer:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to coloring:POSetColorer:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to coloring:POSetColorer:model#Object#extern_kind */
(nitmethod_t)nit___nit__POSetColorer___is_colored, /* pointer to coloring:POSetColorer:coloring#POSetColorer#is_colored */
(nitmethod_t)nit___nit__POSetColorer___is_colored_61d, /* pointer to coloring:POSetColorer:coloring#POSetColorer#is_colored= */
(nitmethod_t)nit___nit__POSetColorer___ids, /* pointer to coloring:POSetColorer:coloring#POSetColorer#ids */
(nitmethod_t)nit___nit__POSetColorer___ids_cache, /* pointer to coloring:POSetColorer:coloring#POSetColorer#ids_cache */
(nitmethod_t)nit___nit__POSetColorer___colors, /* pointer to coloring:POSetColorer:coloring#POSetColorer#colors */
(nitmethod_t)nit___nit__POSetColorer___colors_cache, /* pointer to coloring:POSetColorer:coloring#POSetColorer#colors_cache */
(nitmethod_t)nit___nit__POSetColorer___poset_cache, /* pointer to coloring:POSetColorer:coloring#POSetColorer#poset_cache */
(nitmethod_t)nit___nit__POSetColorer___poset_cache_61d, /* pointer to coloring:POSetColorer:coloring#POSetColorer#poset_cache= */
(nitmethod_t)nit___nit__POSetColorer___conflicts, /* pointer to coloring:POSetColorer:coloring#POSetColorer#conflicts */
(nitmethod_t)nit___nit__POSetColorer___conflicts_cache, /* pointer to coloring:POSetColorer:coloring#POSetColorer#conflicts_cache */
(nitmethod_t)nit___nit__POSetColorer___conflicts_cache_61d, /* pointer to coloring:POSetColorer:coloring#POSetColorer#conflicts_cache= */
(nitmethod_t)nit___nit__POSetColorer___graph, /* pointer to coloring:POSetColorer:coloring#POSetColorer#graph */
(nitmethod_t)nit___nit__POSetColorer___graph_61d, /* pointer to coloring:POSetColorer:coloring#POSetColorer#graph= */
(nitmethod_t)nit___nit__POSetColorer___colorize, /* pointer to coloring:POSetColorer:coloring#POSetColorer#colorize */
(nitmethod_t)nit___nit__POSetColorer___allocate_ids, /* pointer to coloring:POSetColorer:coloring#POSetColorer#allocate_ids */
(nitmethod_t)nit___nit__POSetColorer___compute_colors, /* pointer to coloring:POSetColorer:coloring#POSetColorer#compute_colors */
(nitmethod_t)nit___nit__POSetColorer___colorize_core, /* pointer to coloring:POSetColorer:coloring#POSetColorer#colorize_core */
(nitmethod_t)nit___nit__POSetColorer___colorize_set, /* pointer to coloring:POSetColorer:coloring#POSetColorer#colorize_set */
(nitmethod_t)nit___nit__POSetColorer___min_color, /* pointer to coloring:POSetColorer:coloring#POSetColorer#min_color */
(nitmethod_t)nit___nit__POSetColorer___is_color_free, /* pointer to coloring:POSetColorer:coloring#POSetColorer#is_color_free */
}
};
/* allocate POSetColorer[Object] */
val* NEW_nit__POSetColorer(const struct type* type) {
val* self /* : POSetColorer[Object] */;
short int var /* : Bool */;
val* var1 /* : HashMap[Object, Int] */;
val* var2 /* : HashMap[Object, Int] */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nit__POSetColorer;
var = 0;
self->attrs[COLOR_nit__coloring__POSetColorer___is_colored].s = var; /* _is_colored on <self:POSetColorer[Object] exact> */
var1 = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__nit__POSetColorer___35dE__standard__Int]);
{
standard___standard__HashMap___standard__kernel__Object__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[Object, Int]>*/
}
self->attrs[COLOR_nit__coloring__POSetColorer___ids_cache].val = var1; /* _ids_cache on <self:POSetColorer[Object] exact> */
var2 = NEW_standard__HashMap(self->type->resolution_table->types[COLOR_standard__HashMap__nit__POSetColorer___35dE__standard__Int]);
{
standard___standard__HashMap___standard__kernel__Object__init(var2); /* Direct call hash_collection#HashMap#init on <var2:HashMap[Object, Int]>*/
}
self->attrs[COLOR_nit__coloring__POSetColorer___colors_cache].val = var2; /* _colors_cache on <self:POSetColorer[Object] exact> */
return self;
}
/* runtime class nit__BucketsColorer */
const struct class class_nit__BucketsColorer = {
0, /* box_kind */
{
(nitmethod_t)standard___standard__Object___object_id, /* pointer to coloring:BucketsColorer:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to coloring:BucketsColorer:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to coloring:BucketsColorer:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to coloring:BucketsColorer:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to coloring:BucketsColorer:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to coloring:BucketsColorer:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to coloring:BucketsColorer:kernel#Object#sys */
(nitmethod_t)standard___standard__Object___init, /* pointer to coloring:BucketsColorer:kernel#Object#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to coloring:BucketsColorer:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to coloring:BucketsColorer:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to coloring:BucketsColorer:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to coloring:BucketsColorer:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to coloring:BucketsColorer:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to coloring:BucketsColorer:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to coloring:BucketsColorer:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to coloring:BucketsColorer:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to coloring:BucketsColorer:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to coloring:BucketsColorer:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to coloring:BucketsColorer:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to coloring:BucketsColorer:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to coloring:BucketsColorer:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to coloring:BucketsColorer:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to coloring:BucketsColorer:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to coloring:BucketsColorer:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to coloring:BucketsColorer:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to coloring:BucketsColorer:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to coloring:BucketsColorer:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to coloring:BucketsColorer:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to coloring:BucketsColorer:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to coloring:BucketsColorer:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to coloring:BucketsColorer:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to coloring:BucketsColorer:model#Object#extern_kind */
(nitmethod_t)nit___nit__BucketsColorer___colors, /* pointer to coloring:BucketsColorer:coloring#BucketsColorer#colors */
(nitmethod_t)nit___nit__BucketsColorer___conflicts, /* pointer to coloring:BucketsColorer:coloring#BucketsColorer#conflicts */
(nitmethod_t)nit___nit__BucketsColorer___colorize, /* pointer to coloring:BucketsColorer:coloring#BucketsColorer#colorize */
(nitmethod_t)nit___nit__BucketsColorer___is_color_free, /* pointer to coloring:BucketsColorer:coloring#BucketsColorer#is_color_free */
(nitmethod_t)nit___nit__BucketsColorer___compute_conflicts, /* pointer to coloring:BucketsColorer:coloring#BucketsColorer#compute_conflicts */
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
(nitmethod_t)standard___standard__Object___object_id, /* pointer to coloring:POSetBucketsColorer:kernel#Object#object_id */
(nitmethod_t)standard___standard__Object___is_same_instance, /* pointer to coloring:POSetBucketsColorer:kernel#Object#is_same_instance */
(nitmethod_t)standard___standard__Object____61d_61d, /* pointer to coloring:POSetBucketsColorer:kernel#Object#== */
(nitmethod_t)standard___standard__Object____33d_61d, /* pointer to coloring:POSetBucketsColorer:kernel#Object#!= */
(nitmethod_t)standard___standard__Object___hash, /* pointer to coloring:POSetBucketsColorer:kernel#Object#hash */
(nitmethod_t)standard___standard__Object___exit, /* pointer to coloring:POSetBucketsColorer:kernel#Object#exit */
(nitmethod_t)standard___standard__Object___sys, /* pointer to coloring:POSetBucketsColorer:kernel#Object#sys */
(nitmethod_t)nit___nit__POSetBucketsColorer___standard__kernel__Object__init, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#init */
(nitmethod_t)standard__sorter___Object___default_comparator, /* pointer to coloring:POSetBucketsColorer:sorter#Object#default_comparator */
(nitmethod_t)standard__string___Object___to_s, /* pointer to coloring:POSetBucketsColorer:string#Object#to_s */
(nitmethod_t)standard__string___Object___native_class_name, /* pointer to coloring:POSetBucketsColorer:string#Object#native_class_name */
(nitmethod_t)standard__string___Object___class_name, /* pointer to coloring:POSetBucketsColorer:string#Object#class_name */
(nitmethod_t)standard__string___Object___inspect, /* pointer to coloring:POSetBucketsColorer:string#Object#inspect */
(nitmethod_t)standard__string___Object___inspect_head, /* pointer to coloring:POSetBucketsColorer:string#Object#inspect_head */
(nitmethod_t)standard__string___Object___args, /* pointer to coloring:POSetBucketsColorer:string#Object#args */
(nitmethod_t)standard__ropes___Object___maxlen, /* pointer to coloring:POSetBucketsColorer:ropes#Object#maxlen */
(nitmethod_t)standard__time___Object___get_time, /* pointer to coloring:POSetBucketsColorer:time#Object#get_time */
(nitmethod_t)standard__file___Object___printn, /* pointer to coloring:POSetBucketsColorer:file#Object#printn */
(nitmethod_t)standard__file___Object___print, /* pointer to coloring:POSetBucketsColorer:file#Object#print */
(nitmethod_t)standard__file___Object___getcwd, /* pointer to coloring:POSetBucketsColorer:file#Object#getcwd */
(nitmethod_t)standard__file___Object___file_getcwd, /* pointer to coloring:POSetBucketsColorer:file#Object#file_getcwd */
(nitmethod_t)nit__model_base___standard__Object___intrude_visibility, /* pointer to coloring:POSetBucketsColorer:model_base#Object#intrude_visibility */
(nitmethod_t)nit__model_base___standard__Object___public_visibility, /* pointer to coloring:POSetBucketsColorer:model_base#Object#public_visibility */
(nitmethod_t)nit__model_base___standard__Object___protected_visibility, /* pointer to coloring:POSetBucketsColorer:model_base#Object#protected_visibility */
(nitmethod_t)nit__model_base___standard__Object___private_visibility, /* pointer to coloring:POSetBucketsColorer:model_base#Object#private_visibility */
(nitmethod_t)nit__model_base___standard__Object___none_visibility, /* pointer to coloring:POSetBucketsColorer:model_base#Object#none_visibility */
(nitmethod_t)nit__version___standard__Object___nit_version, /* pointer to coloring:POSetBucketsColorer:version#Object#nit_version */
(nitmethod_t)nit__model___standard__Object___abstract_kind, /* pointer to coloring:POSetBucketsColorer:model#Object#abstract_kind */
(nitmethod_t)nit__model___standard__Object___concrete_kind, /* pointer to coloring:POSetBucketsColorer:model#Object#concrete_kind */
(nitmethod_t)nit__model___standard__Object___interface_kind, /* pointer to coloring:POSetBucketsColorer:model#Object#interface_kind */
(nitmethod_t)nit__model___standard__Object___enum_kind, /* pointer to coloring:POSetBucketsColorer:model#Object#enum_kind */
(nitmethod_t)nit__model___standard__Object___extern_kind, /* pointer to coloring:POSetBucketsColorer:model#Object#extern_kind */
(nitmethod_t)nit___nit__POSetBucketsColorer___colors, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#colors */
(nitmethod_t)nit___nit__POSetBucketsColorer___poset, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#poset */
(nitmethod_t)nit___nit__POSetBucketsColorer___poset_61d, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#poset= */
(nitmethod_t)nit___nit__POSetBucketsColorer___conflicts, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#conflicts */
(nitmethod_t)nit___nit__POSetBucketsColorer___conflicts_61d, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#conflicts= */
(nitmethod_t)nit___nit__POSetBucketsColorer___colorize, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#colorize */
(nitmethod_t)nit___nit__POSetBucketsColorer___min_color, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#min_color */
(nitmethod_t)nit___nit__POSetBucketsColorer___max_color, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#max_color */
(nitmethod_t)nit___nit__POSetBucketsColorer___is_color_free, /* pointer to coloring:POSetBucketsColorer:coloring#POSetBucketsColorer#is_color_free */
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
