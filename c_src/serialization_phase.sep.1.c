#include "serialization_phase.sep.0.h"
/* method serialization_phase#ToolContext#serialization_phase for (self: ToolContext): Phase */
val* serialization_phase__ToolContext__serialization_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_serialization_phase__ToolContext___64dserialization_phase].val; /* @serialization_phase on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @serialization_phase");
fprintf(stderr, " (%s:%d)\n", "src/serialization_phase.nit", 26);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method serialization_phase#ToolContext#serialization_phase for (self: Object): Phase */
val* VIRTUAL_serialization_phase__ToolContext__serialization_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = serialization_phase__ToolContext__serialization_phase(self);
var = var1;
RET_LABEL:;
return var;
}
/* method serialization_phase#ToolContext#serialization_phase= for (self: ToolContext, Phase) */
void serialization_phase__ToolContext__serialization_phase_61d(val* self, val* p0) {
self->attrs[COLOR_serialization_phase__ToolContext___64dserialization_phase].val = p0; /* @serialization_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method serialization_phase#ToolContext#serialization_phase= for (self: Object, Phase) */
void VIRTUAL_serialization_phase__ToolContext__serialization_phase_61d(val* self, val* p0) {
serialization_phase__ToolContext__serialization_phase_61d(self, p0);
RET_LABEL:;
}
/* method serialization_phase#SerializationPhase#process_annotated_node for (self: SerializationPhase, ANode, AAnnotation) */
void serialization_phase__SerializationPhase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_nclassdef /* var nclassdef: ANode */;
val* var_nat /* var nat: AAnnotation */;
val* var /* : AAtid */;
val* var1 /* : Token */;
val* var2 /* : String */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
short int var9 /* : Bool */;
val* var10 /* : ToolContext */;
val* var11 /* : Location */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
var_nclassdef = p0;
var_nat = p1;
var = ((val* (*)(val*))(var_nat->class->vft[COLOR_parser_nodes__AAnnotation__n_atid]))(var_nat) /* n_atid on <var_nat:AAnnotation>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_parser_nodes__AAtid__n_id]))(var) /* n_id on <var:AAtid>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_parser_nodes__Token__text]))(var1) /* text on <var1:Token>*/;
if (varonce) {
var3 = varonce;
} else {
var4 = "auto_serializable";
var5 = 17;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_kernel__Object___33d_61d]))(var2, var3) /* != on <var2:String>*/;
if (var7){
goto RET_LABEL;
} else {
}
/* <var_nclassdef:ANode> isa AStdClassdef */
cltype = type_parser_nodes__AStdClassdef.color;
idtype = type_parser_nodes__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var8 = 0;
} else {
var8 = var_nclassdef->type->type_table[cltype] == idtype;
}
var9 = !var8;
if (var9){
var10 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:SerializationPhase>*/;
var11 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__ANode__location]))(var_nclassdef) /* location on <var_nclassdef:ANode>*/;
if (varonce12) {
var13 = varonce12;
} else {
var14 = "Syntax error: only a concrete class can be automatically serialized.";
var15 = 68;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
((void (*)(val*, val*, val*))(var10->class->vft[COLOR_toolcontext__ToolContext__error]))(var10, var11, var13) /* error on <var10:ToolContext>*/;
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_serialization_phase__SerializationPhase__generate_serialization_method]))(self, var_nclassdef) /* generate_serialization_method on <self:SerializationPhase>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_serialization_phase__SerializationPhase__generate_deserialization_init]))(self, var_nclassdef) /* generate_deserialization_init on <self:SerializationPhase>*/;
RET_LABEL:;
}
/* method serialization_phase#SerializationPhase#process_annotated_node for (self: Object, ANode, AAnnotation) */
void VIRTUAL_serialization_phase__SerializationPhase__process_annotated_node(val* self, val* p0, val* p1) {
serialization_phase__SerializationPhase__process_annotated_node(self, p0, p1);
RET_LABEL:;
}
/* method serialization_phase#SerializationPhase#process_nmodule for (self: SerializationPhase, AModule) */
void serialization_phase__SerializationPhase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : Array[AStdClassdef] */;
val* var_auto_serializable_nclassdefs /* var auto_serializable_nclassdefs: Array[AStdClassdef] */;
val* var1 /* : ANodes[AClassdef] */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : Array[AAnnotation] */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
var_nmodule = p0;
var = NEW_array__Array(&type_array__Arrayparser_nodes__AStdClassdef);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[AStdClassdef]>*/;
var_auto_serializable_nclassdefs = var;
var1 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var_nmodule) /* n_classdefs on <var_nmodule:AModule>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__iterator]))(var1) /* iterator on <var1:ANodes[AClassdef]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_nclassdef = var4;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_parser_nodes__AStdClassdef.color;
idtype = type_parser_nodes__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var6 = 0;
} else {
var6 = var_nclassdef->type->type_table[cltype] == idtype;
}
var_ = var6;
if (var6){
if (varonce) {
var7 = varonce;
} else {
var8 = "auto_serializable";
var9 = 17;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
var11 = ((val* (*)(val*, val*))(var_nclassdef->class->vft[COLOR_parser_util__ANode__collect_annotations_by_name]))(var_nclassdef, var7) /* collect_annotations_by_name on <var_nclassdef:AClassdef(AStdClassdef)>*/;
var12 = ((short int (*)(val*))(var11->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var11) /* is_empty on <var11:Array[AAnnotation]>*/;
var13 = !var12;
var5 = var13;
} else {
var5 = var_;
}
if (var5){
((void (*)(val*, val*))(var_auto_serializable_nclassdefs->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_auto_serializable_nclassdefs, var_nclassdef) /* add on <var_auto_serializable_nclassdefs:Array[AStdClassdef]>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var14 = ((short int (*)(val*))(var_auto_serializable_nclassdefs->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_auto_serializable_nclassdefs) /* is_empty on <var_auto_serializable_nclassdefs:Array[AStdClassdef]>*/;
var15 = !var14;
if (var15){
((void (*)(val*, val*, val*))(self->class->vft[COLOR_serialization_phase__SerializationPhase__generate_deserialization_method]))(self, var_nmodule, var_auto_serializable_nclassdefs) /* generate_deserialization_method on <self:SerializationPhase>*/;
} else {
}
RET_LABEL:;
}
/* method serialization_phase#SerializationPhase#process_nmodule for (self: Object, AModule) */
void VIRTUAL_serialization_phase__SerializationPhase__process_nmodule(val* self, val* p0) {
serialization_phase__SerializationPhase__process_nmodule(self, p0);
RET_LABEL:;
}
/* method serialization_phase#SerializationPhase#generate_serialization_method for (self: SerializationPhase, AClassdef) */
void serialization_phase__SerializationPhase__generate_serialization_method(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : ANodes[APropdef] */;
val* var_npropdefs /* var npropdefs: ANodes[APropdef] */;
val* var1 /* : Array[String] */;
val* var_code /* var code: Array[String] */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : Iterator[nullable Object] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_attribute /* var attribute: APropdef */;
short int var19 /* : Bool */;
int cltype;
int idtype;
val* var20 /* : String */;
val* var_name /* var name: String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
val* var36 /* : Array[Object] */;
long var37 /* : Int */;
val* var38 /* : NativeArray[Object] */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : ToolContext */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var52 /* : APropdef */;
var_nclassdef = p0;
var = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var_nclassdef) /* n_propdefs on <var_nclassdef:AClassdef>*/;
var_npropdefs = var;
var1 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[String]>*/;
var_code = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = "redef fun core_serialize_to(v)";
var4 = 30;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var2) /* add on <var_code:Array[String]>*/;
if (varonce6) {
var7 = varonce6;
} else {
var8 = "do";
var9 = 2;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var7) /* add on <var_code:Array[String]>*/;
if (varonce11) {
var12 = varonce11;
} else {
var13 = "\11super";
var14 = 6;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var12) /* add on <var_code:Array[String]>*/;
var16 = ((val* (*)(val*))(var_npropdefs->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_npropdefs) /* iterator on <var_npropdefs:ANodes[APropdef]>*/;
for(;;) {
var17 = ((short int (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var16) /* is_ok on <var16:Iterator[nullable Object]>*/;
if(!var17) break;
var18 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__item]))(var16) /* item on <var16:Iterator[nullable Object]>*/;
var_attribute = var18;
/* <var_attribute:APropdef> isa AAttrPropdef */
cltype = type_parser_nodes__AAttrPropdef.color;
idtype = type_parser_nodes__AAttrPropdef.id;
if(cltype >= var_attribute->type->table_size) {
var19 = 0;
} else {
var19 = var_attribute->type->type_table[cltype] == idtype;
}
if (var19){
var20 = ((val* (*)(val*))(var_attribute->class->vft[COLOR_serialization_phase__AAttrPropdef__name]))(var_attribute) /* name on <var_attribute:APropdef(AAttrPropdef)>*/;
var_name = var20;
if (varonce21) {
var22 = varonce21;
} else {
var23 = "\11v.serialize_attribute(\"";
var24 = 24;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = "\", ";
var29 = 3;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = ")";
var34 = 1;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var36 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var36 = array_instance Array[Object] */
var37 = 5;
var38 = NEW_array__NativeArray(var37, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var38)->values[0] = (val*) var22;
((struct instance_array__NativeArray*)var38)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var38)->values[2] = (val*) var27;
((struct instance_array__NativeArray*)var38)->values[3] = (val*) var_name;
((struct instance_array__NativeArray*)var38)->values[4] = (val*) var32;
((void (*)(val*, val*, long))(var36->class->vft[COLOR_array__Array__with_native]))(var36, var38, var37) /* with_native on <var36:Array[Object]>*/;
}
var39 = ((val* (*)(val*))(var36->class->vft[COLOR_string__Object__to_s]))(var36) /* to_s on <var36:Array[Object]>*/;
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var39) /* add on <var_code:Array[String]>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__next]))(var16) /* next on <var16:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce40) {
var41 = varonce40;
} else {
var42 = "end";
var43 = 3;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var41) /* add on <var_code:Array[String]>*/;
var45 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:SerializationPhase>*/;
if (varonce46) {
var47 = varonce46;
} else {
var48 = "\n";
var49 = 1;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = ((val* (*)(val*, val*))(var_code->class->vft[COLOR_string__Collection__join]))(var_code, var47) /* join on <var_code:Array[String]>*/;
var52 = ((val* (*)(val*, val*))(var45->class->vft[COLOR_parser_util__ToolContext__parse_propdef]))(var45, var51) /* parse_propdef on <var45:ToolContext>*/;
((void (*)(val*, val*))(var_npropdefs->class->vft[COLOR_abstract_collection__Sequence__push]))(var_npropdefs, var52) /* push on <var_npropdefs:ANodes[APropdef]>*/;
RET_LABEL:;
}
/* method serialization_phase#SerializationPhase#generate_serialization_method for (self: Object, AClassdef) */
void VIRTUAL_serialization_phase__SerializationPhase__generate_serialization_method(val* self, val* p0) {
serialization_phase__SerializationPhase__generate_serialization_method(self, p0);
RET_LABEL:;
}
/* method serialization_phase#SerializationPhase#generate_deserialization_init for (self: SerializationPhase, AClassdef) */
void serialization_phase__SerializationPhase__generate_deserialization_init(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : ANodes[APropdef] */;
val* var_npropdefs /* var npropdefs: ANodes[APropdef] */;
val* var1 /* : Array[String] */;
val* var_code /* var code: Array[String] */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : Iterator[nullable Object] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_attribute /* var attribute: APropdef */;
short int var19 /* : Bool */;
int cltype;
int idtype;
val* var20 /* : nullable AType */;
val* var21 /* : null */;
short int var22 /* : Bool */;
val* var23 /* : ToolContext */;
val* var24 /* : Location */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var_name /* var name: String */;
val* var31 /* : String */;
val* var_type_name /* var type_name: String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : String */;
val* var52 /* : Array[Object] */;
long var53 /* : Int */;
val* var54 /* : NativeArray[Object] */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : String */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : String */;
val* var81 /* : Array[Object] */;
long var82 /* : Int */;
val* var83 /* : NativeArray[Object] */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : String */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
long var93 /* : Int */;
val* var94 /* : String */;
val* var95 /* : Array[Object] */;
long var96 /* : Int */;
val* var97 /* : NativeArray[Object] */;
val* var98 /* : String */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : String */;
val* var104 /* : ToolContext */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : String */;
val* var110 /* : String */;
val* var111 /* : APropdef */;
var_nclassdef = p0;
var = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var_nclassdef) /* n_propdefs on <var_nclassdef:AClassdef>*/;
var_npropdefs = var;
var1 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var1->class->vft[COLOR_array__Array__init]))(var1) /* init on <var1:Array[String]>*/;
var_code = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = "init from_deserializer(v: Deserializer)";
var4 = 39;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var2) /* add on <var_code:Array[String]>*/;
if (varonce6) {
var7 = varonce6;
} else {
var8 = "do";
var9 = 2;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var7) /* add on <var_code:Array[String]>*/;
if (varonce11) {
var12 = varonce11;
} else {
var13 = "\11v.notify_of_creation self";
var14 = 26;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var12) /* add on <var_code:Array[String]>*/;
var16 = ((val* (*)(val*))(var_npropdefs->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_npropdefs) /* iterator on <var_npropdefs:ANodes[APropdef]>*/;
for(;;) {
var17 = ((short int (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var16) /* is_ok on <var16:Iterator[nullable Object]>*/;
if(!var17) break;
var18 = ((val* (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__item]))(var16) /* item on <var16:Iterator[nullable Object]>*/;
var_attribute = var18;
/* <var_attribute:APropdef> isa AAttrPropdef */
cltype = type_parser_nodes__AAttrPropdef.color;
idtype = type_parser_nodes__AAttrPropdef.id;
if(cltype >= var_attribute->type->table_size) {
var19 = 0;
} else {
var19 = var_attribute->type->type_table[cltype] == idtype;
}
if (var19){
var20 = ((val* (*)(val*))(var_attribute->class->vft[COLOR_parser_nodes__AAttrPropdef__n_type]))(var_attribute) /* n_type on <var_attribute:APropdef(AAttrPropdef)>*/;
var21 = NULL;
if (var20 == NULL) {
var22 = 1; /* is null */
} else {
var22 = 0; /* arg is null but recv is not */
}
if (var22){
var23 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:SerializationPhase>*/;
var24 = ((val* (*)(val*))(var_attribute->class->vft[COLOR_parser_nodes__ANode__location]))(var_attribute) /* location on <var_attribute:APropdef(AAttrPropdef)>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "NOT YET IMPLEMENTED: all attributes of an auto_serialized class definition must define a type.";
var28 = 94;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
((void (*)(val*, val*, val*))(var23->class->vft[COLOR_toolcontext__ToolContext__error]))(var23, var24, var26) /* error on <var23:ToolContext>*/;
goto CONTINUE_label;
} else {
}
var30 = ((val* (*)(val*))(var_attribute->class->vft[COLOR_serialization_phase__AAttrPropdef__name]))(var_attribute) /* name on <var_attribute:APropdef(AAttrPropdef)>*/;
var_name = var30;
var31 = ((val* (*)(val*))(var_attribute->class->vft[COLOR_serialization_phase__AAttrPropdef__type_name]))(var_attribute) /* type_name on <var_attribute:APropdef(AAttrPropdef)>*/;
var_type_name = var31;
if (varonce32) {
var33 = varonce32;
} else {
var34 = "";
var35 = 0;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var33) /* add on <var_code:Array[String]>*/;
if (varonce37) {
var38 = varonce37;
} else {
var39 = "\11var ";
var40 = 5;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = " = v.deserialize_attribute(\"";
var45 = 28;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = "\")";
var50 = 2;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var52 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var52 = array_instance Array[Object] */
var53 = 5;
var54 = NEW_array__NativeArray(var53, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var54)->values[0] = (val*) var38;
((struct instance_array__NativeArray*)var54)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var54)->values[2] = (val*) var43;
((struct instance_array__NativeArray*)var54)->values[3] = (val*) var_name;
((struct instance_array__NativeArray*)var54)->values[4] = (val*) var48;
((void (*)(val*, val*, long))(var52->class->vft[COLOR_array__Array__with_native]))(var52, var54, var53) /* with_native on <var52:Array[Object]>*/;
}
var55 = ((val* (*)(val*))(var52->class->vft[COLOR_string__Object__to_s]))(var52) /* to_s on <var52:Array[Object]>*/;
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var55) /* add on <var_code:Array[String]>*/;
if (varonce56) {
var57 = varonce56;
} else {
var58 = "\11assert ";
var59 = 8;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
if (varonce61) {
var62 = varonce61;
} else {
var63 = " isa ";
var64 = 5;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = " else print \"Expected attribute \'";
var69 = 33;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
if (varonce71) {
var72 = varonce71;
} else {
var73 = "\' to be of type \'";
var74 = 17;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
if (varonce76) {
var77 = varonce76;
} else {
var78 = "\'\"";
var79 = 2;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
var81 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var81 = array_instance Array[Object] */
var82 = 9;
var83 = NEW_array__NativeArray(var82, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var83)->values[0] = (val*) var57;
((struct instance_array__NativeArray*)var83)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var83)->values[2] = (val*) var62;
((struct instance_array__NativeArray*)var83)->values[3] = (val*) var_type_name;
((struct instance_array__NativeArray*)var83)->values[4] = (val*) var67;
((struct instance_array__NativeArray*)var83)->values[5] = (val*) var_name;
((struct instance_array__NativeArray*)var83)->values[6] = (val*) var72;
((struct instance_array__NativeArray*)var83)->values[7] = (val*) var_type_name;
((struct instance_array__NativeArray*)var83)->values[8] = (val*) var77;
((void (*)(val*, val*, long))(var81->class->vft[COLOR_array__Array__with_native]))(var81, var83, var82) /* with_native on <var81:Array[Object]>*/;
}
var84 = ((val* (*)(val*))(var81->class->vft[COLOR_string__Object__to_s]))(var81) /* to_s on <var81:Array[Object]>*/;
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var84) /* add on <var_code:Array[String]>*/;
if (varonce85) {
var86 = varonce85;
} else {
var87 = "\11self.";
var88 = 6;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
if (varonce90) {
var91 = varonce90;
} else {
var92 = " = ";
var93 = 3;
var94 = string__NativeString__to_s_with_length(var92, var93);
var91 = var94;
varonce90 = var91;
}
var95 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var95 = array_instance Array[Object] */
var96 = 4;
var97 = NEW_array__NativeArray(var96, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var97)->values[0] = (val*) var86;
((struct instance_array__NativeArray*)var97)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var97)->values[2] = (val*) var91;
((struct instance_array__NativeArray*)var97)->values[3] = (val*) var_name;
((void (*)(val*, val*, long))(var95->class->vft[COLOR_array__Array__with_native]))(var95, var97, var96) /* with_native on <var95:Array[Object]>*/;
}
var98 = ((val* (*)(val*))(var95->class->vft[COLOR_string__Object__to_s]))(var95) /* to_s on <var95:Array[Object]>*/;
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var98) /* add on <var_code:Array[String]>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__next]))(var16) /* next on <var16:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce99) {
var100 = varonce99;
} else {
var101 = "end";
var102 = 3;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var100) /* add on <var_code:Array[String]>*/;
var104 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:SerializationPhase>*/;
if (varonce105) {
var106 = varonce105;
} else {
var107 = "\n";
var108 = 1;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
var110 = ((val* (*)(val*, val*))(var_code->class->vft[COLOR_string__Collection__join]))(var_code, var106) /* join on <var_code:Array[String]>*/;
var111 = ((val* (*)(val*, val*))(var104->class->vft[COLOR_parser_util__ToolContext__parse_propdef]))(var104, var110) /* parse_propdef on <var104:ToolContext>*/;
((void (*)(val*, val*))(var_npropdefs->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_npropdefs, var111) /* add on <var_npropdefs:ANodes[APropdef]>*/;
RET_LABEL:;
}
/* method serialization_phase#SerializationPhase#generate_deserialization_init for (self: Object, AClassdef) */
void VIRTUAL_serialization_phase__SerializationPhase__generate_deserialization_init(val* self, val* p0) {
serialization_phase__SerializationPhase__generate_deserialization_init(self, p0);
RET_LABEL:;
}
/* method serialization_phase#SerializationPhase#generate_deserialization_method for (self: SerializationPhase, AModule, Array[AStdClassdef]) */
void serialization_phase__SerializationPhase__generate_deserialization_method(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdefs /* var nclassdefs: Array[AStdClassdef] */;
val* var /* : Array[String] */;
val* var_code /* var code: Array[String] */;
val* var1 /* : nullable AStdClassdef */;
val* var_deserializer_nclassdef /* var deserializer_nclassdef: nullable AStdClassdef */;
val* var2 /* : null */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : String */;
val* var8 /* : null */;
val* var_deserializer_npropdef /* var deserializer_npropdef: nullable Object */;
val* var9 /* : nullable AMethPropdef */;
val* var10 /* : null */;
short int var11 /* : Bool */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
val* var22 /* : ToolContext */;
val* var23 /* : Location */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : Iterator[nullable Object] */;
short int var30 /* : Bool */;
val* var31 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AStdClassdef */;
val* var32 /* : nullable TClassid */;
val* var33 /* : String */;
val* var_name /* var name: String */;
char var34 /* : Char */;
short int var35 /* : Bool */;
val* var36 /* : nullable Object */;
short int var37 /* : Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : String */;
val* var53 /* : Array[Object] */;
long var54 /* : Int */;
val* var55 /* : NativeArray[Object] */;
val* var56 /* : String */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : String */;
val* var67 /* : null */;
short int var68 /* : Bool */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : String */;
val* var74 /* : ANodes[AClassdef] */;
val* var75 /* : ToolContext */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : String */;
val* var81 /* : String */;
val* var82 /* : AClassdef */;
val* var83 /* : ANodes[APropdef] */;
val* var84 /* : ToolContext */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : String */;
val* var90 /* : String */;
val* var91 /* : APropdef */;
var_nmodule = p0;
var_nclassdefs = p1;
var = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var->class->vft[COLOR_array__Array__init]))(var) /* init on <var:Array[String]>*/;
var_code = var;
var1 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_serialization_phase__AModule__deserializer_nclassdef]))(var_nmodule) /* deserializer_nclassdef on <var_nmodule:AModule>*/;
var_deserializer_nclassdef = var1;
var2 = NULL;
if (var_deserializer_nclassdef == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
if (varonce) {
var4 = varonce;
} else {
var5 = "redef class Deserializer";
var6 = 24;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var4) /* add on <var_code:Array[String]>*/;
var8 = NULL;
var_deserializer_npropdef = var8;
} else {
var9 = ((val* (*)(val*))(var_deserializer_nclassdef->class->vft[COLOR_serialization_phase__AStdClassdef__deserializer_npropdef]))(var_deserializer_nclassdef) /* deserializer_npropdef on <var_deserializer_nclassdef:nullable AStdClassdef(AStdClassdef)>*/;
var_deserializer_npropdef = var9;
}
var10 = NULL;
if (var_deserializer_npropdef == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (var11){
if (varonce12) {
var13 = varonce12;
} else {
var14 = "\11redef fun deserialize_class(name)";
var15 = 34;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var13) /* add on <var_code:Array[String]>*/;
if (varonce17) {
var18 = varonce17;
} else {
var19 = "\11do";
var20 = 3;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var18) /* add on <var_code:Array[String]>*/;
} else {
var22 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:SerializationPhase>*/;
var23 = ((val* (*)(val*))(var_deserializer_npropdef->class->vft[COLOR_parser_nodes__ANode__location]))(var_deserializer_npropdef) /* location on <var_deserializer_npropdef:nullable Object(AMethPropdef)>*/;
if (varonce24) {
var25 = varonce24;
} else {
var26 = "Annotation error: you cannont define Deserializer::deserialize_class in a module where you use \"auto_serializable\".";
var27 = 115;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
((void (*)(val*, val*, val*))(var22->class->vft[COLOR_toolcontext__ToolContext__error]))(var22, var23, var25) /* error on <var22:ToolContext>*/;
goto RET_LABEL;
}
var29 = ((val* (*)(val*))(var_nclassdefs->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_nclassdefs) /* iterator on <var_nclassdefs:Array[AStdClassdef]>*/;
for(;;) {
var30 = ((short int (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var29) /* is_ok on <var29:Iterator[nullable Object]>*/;
if(!var30) break;
var31 = ((val* (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__item]))(var29) /* item on <var29:Iterator[nullable Object]>*/;
var_nclassdef = var31;
var32 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_id]))(var_nclassdef) /* n_id on <var_nclassdef:AStdClassdef>*/;
if (var32 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/serialization_phase.nit", 137);
show_backtrace(1);
} else {
var33 = ((val* (*)(val*))(var32->class->vft[COLOR_parser_nodes__Token__text]))(var32) /* text on <var32:nullable TClassid>*/;
}
var_name = var33;
var34 = '[';
var36 = BOX_kernel__Char(var34); /* autobox from Char to nullable Object */
var35 = ((short int (*)(val*, val*))(var_name->class->vft[COLOR_abstract_collection__Collection__has]))(var_name, var36) /* has on <var_name:String>*/;
var37 = !var35;
if (var37){
if (varonce38) {
var39 = varonce38;
} else {
var40 = "\11\11if name == \"";
var41 = 14;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
if (varonce43) {
var44 = varonce43;
} else {
var45 = "\" then return new ";
var46 = 18;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
if (varonce48) {
var49 = varonce48;
} else {
var50 = ".from_deserializer(self)";
var51 = 24;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
var53 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var53 = array_instance Array[Object] */
var54 = 5;
var55 = NEW_array__NativeArray(var54, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var55)->values[0] = (val*) var39;
((struct instance_array__NativeArray*)var55)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var55)->values[2] = (val*) var44;
((struct instance_array__NativeArray*)var55)->values[3] = (val*) var_name;
((struct instance_array__NativeArray*)var55)->values[4] = (val*) var49;
((void (*)(val*, val*, long))(var53->class->vft[COLOR_array__Array__with_native]))(var53, var55, var54) /* with_native on <var53:Array[Object]>*/;
}
var56 = ((val* (*)(val*))(var53->class->vft[COLOR_string__Object__to_s]))(var53) /* to_s on <var53:Array[Object]>*/;
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var56) /* add on <var_code:Array[String]>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var29->class->vft[COLOR_abstract_collection__Iterator__next]))(var29) /* next on <var29:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce57) {
var58 = varonce57;
} else {
var59 = "\11\11return super";
var60 = 14;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var58) /* add on <var_code:Array[String]>*/;
if (varonce62) {
var63 = varonce62;
} else {
var64 = "\11end";
var65 = 4;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var63) /* add on <var_code:Array[String]>*/;
var67 = NULL;
if (var_deserializer_nclassdef == NULL) {
var68 = 1; /* is null */
} else {
var68 = 0; /* arg is null but recv is not */
}
if (var68){
if (varonce69) {
var70 = varonce69;
} else {
var71 = "end";
var72 = 3;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var70) /* add on <var_code:Array[String]>*/;
var74 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var_nmodule) /* n_classdefs on <var_nmodule:AModule>*/;
var75 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:SerializationPhase>*/;
if (varonce76) {
var77 = varonce76;
} else {
var78 = "\n";
var79 = 1;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
var81 = ((val* (*)(val*, val*))(var_code->class->vft[COLOR_string__Collection__join]))(var_code, var77) /* join on <var_code:Array[String]>*/;
var82 = ((val* (*)(val*, val*))(var75->class->vft[COLOR_parser_util__ToolContext__parse_classdef]))(var75, var81) /* parse_classdef on <var75:ToolContext>*/;
((void (*)(val*, val*))(var74->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var74, var82) /* add on <var74:ANodes[AClassdef]>*/;
} else {
var83 = ((val* (*)(val*))(var_deserializer_nclassdef->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(var_deserializer_nclassdef) /* n_propdefs on <var_deserializer_nclassdef:nullable AStdClassdef(AStdClassdef)>*/;
var84 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:SerializationPhase>*/;
if (varonce85) {
var86 = varonce85;
} else {
var87 = "\n";
var88 = 1;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var90 = ((val* (*)(val*, val*))(var_code->class->vft[COLOR_string__Collection__join]))(var_code, var86) /* join on <var_code:Array[String]>*/;
var91 = ((val* (*)(val*, val*))(var84->class->vft[COLOR_parser_util__ToolContext__parse_propdef]))(var84, var90) /* parse_propdef on <var84:ToolContext>*/;
((void (*)(val*, val*))(var83->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var83, var91) /* add on <var83:ANodes[APropdef]>*/;
}
RET_LABEL:;
}
/* method serialization_phase#SerializationPhase#generate_deserialization_method for (self: Object, AModule, Array[AStdClassdef]) */
void VIRTUAL_serialization_phase__SerializationPhase__generate_deserialization_method(val* self, val* p0, val* p1) {
serialization_phase__SerializationPhase__generate_deserialization_method(self, p0, p1);
RET_LABEL:;
}
/* method serialization_phase#AAttrPropdef#name for (self: AAttrPropdef): String */
val* serialization_phase__AAttrPropdef__name(val* self) {
val* var /* : String */;
val* var1 /* : nullable TAttrid */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : nullable TId */;
val* var5 /* : String */;
val* var6 /* : nullable TAttrid */;
val* var7 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_id]))(self) /* n_id on <self:AAttrPropdef>*/;
var2 = NULL;
if (var1 == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_id2]))(self) /* n_id2 on <self:AAttrPropdef>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/serialization_phase.nit", 158);
show_backtrace(1);
} else {
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_parser_nodes__Token__text]))(var4) /* text on <var4:nullable TId>*/;
}
var = var5;
goto RET_LABEL;
} else {
}
var6 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_id]))(self) /* n_id on <self:AAttrPropdef>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/serialization_phase.nit", 159);
show_backtrace(1);
} else {
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_parser_nodes__Token__text]))(var6) /* text on <var6:nullable TAttrid>*/;
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method serialization_phase#AAttrPropdef#name for (self: Object): String */
val* VIRTUAL_serialization_phase__AAttrPropdef__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = serialization_phase__AAttrPropdef__name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method serialization_phase#AAttrPropdef#type_name for (self: AAttrPropdef): String */
val* serialization_phase__AAttrPropdef__type_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable AType */;
val* var2 /* : TClassid */;
val* var3 /* : String */;
val* var_name /* var name: String */;
val* var4 /* : nullable AType */;
val* var5 /* : nullable TKwnullable */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : Array[Object] */;
long var9 /* : Int */;
val* var_ /* var : Array[Object] */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : nullable AType */;
val* var21 /* : ANodes[AType] */;
val* var_types /* var types: ANodes[AType] */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : Array[String] */;
val* var_params /* var params: Array[String] */;
val* var25 /* : Iterator[nullable Object] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_t /* var t: AType */;
val* var28 /* : TClassid */;
val* var29 /* : String */;
val* var30 /* : Array[Object] */;
long var31 /* : Int */;
val* var_32 /* var : Array[Object] */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : String */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : String */;
val* var54 /* : String */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_type]))(self) /* n_type on <self:AAttrPropdef>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/serialization_phase.nit", 164);
show_backtrace(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_parser_nodes__AType__n_id]))(var1) /* n_id on <var1:nullable AType>*/;
}
var3 = ((val* (*)(val*))(var2->class->vft[COLOR_parser_nodes__Token__text]))(var2) /* text on <var2:TClassid>*/;
var_name = var3;
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_type]))(self) /* n_type on <self:AAttrPropdef>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/serialization_phase.nit", 166);
show_backtrace(1);
} else {
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_parser_nodes__AType__n_kwnullable]))(var4) /* n_kwnullable on <var4:nullable AType>*/;
}
var6 = NULL;
if (var5 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (var7){
var8 = NEW_array__Array(&type_array__Arraykernel__Object);
var9 = 3;
((void (*)(val*, long))(var8->class->vft[COLOR_array__Array__with_capacity]))(var8, var9) /* with_capacity on <var8:Array[Object]>*/;
var_ = var8;
if (varonce) {
var10 = varonce;
} else {
var11 = "nullable ";
var12 = 9;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var10) /* add on <var_:Array[Object]>*/;
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var_name) /* add on <var_:Array[Object]>*/;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "";
var17 = 0;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
((void (*)(val*, val*))(var_->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_, var15) /* add on <var_:Array[Object]>*/;
var19 = ((val* (*)(val*))(var_->class->vft[COLOR_string__Object__to_s]))(var_) /* to_s on <var_:Array[Object]>*/;
var_name = var19;
} else {
}
var20 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrPropdef__n_type]))(self) /* n_type on <self:AAttrPropdef>*/;
if (var20 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/serialization_phase.nit", 168);
show_backtrace(1);
} else {
var21 = ((val* (*)(val*))(var20->class->vft[COLOR_parser_nodes__AType__n_types]))(var20) /* n_types on <var20:nullable AType>*/;
}
var_types = var21;
var22 = ((short int (*)(val*))(var_types->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_types) /* is_empty on <var_types:ANodes[AType]>*/;
var23 = !var22;
if (var23){
var24 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var24->class->vft[COLOR_array__Array__init]))(var24) /* init on <var24:Array[String]>*/;
var_params = var24;
var25 = ((val* (*)(val*))(var_types->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_types) /* iterator on <var_types:ANodes[AType]>*/;
for(;;) {
var26 = ((short int (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var25) /* is_ok on <var25:Iterator[nullable Object]>*/;
if(!var26) break;
var27 = ((val* (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__item]))(var25) /* item on <var25:Iterator[nullable Object]>*/;
var_t = var27;
var28 = ((val* (*)(val*))(var_t->class->vft[COLOR_parser_nodes__AType__n_id]))(var_t) /* n_id on <var_t:AType>*/;
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_parser_nodes__Token__text]))(var28) /* text on <var28:TClassid>*/;
((void (*)(val*, val*))(var_params->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_params, var29) /* add on <var_params:Array[String]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__next]))(var25) /* next on <var25:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var30 = NEW_array__Array(&type_array__Arraykernel__Object);
var31 = 5;
((void (*)(val*, long))(var30->class->vft[COLOR_array__Array__with_capacity]))(var30, var31) /* with_capacity on <var30:Array[Object]>*/;
var_32 = var30;
if (varonce33) {
var34 = varonce33;
} else {
var35 = "";
var36 = 0;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
((void (*)(val*, val*))(var_32->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_32, var34) /* add on <var_32:Array[Object]>*/;
((void (*)(val*, val*))(var_32->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_32, var_name) /* add on <var_32:Array[Object]>*/;
if (varonce38) {
var39 = varonce38;
} else {
var40 = "[";
var41 = 1;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
((void (*)(val*, val*))(var_32->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_32, var39) /* add on <var_32:Array[Object]>*/;
if (varonce43) {
var44 = varonce43;
} else {
var45 = ", ";
var46 = 2;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
var48 = ((val* (*)(val*, val*))(var_params->class->vft[COLOR_string__Collection__join]))(var_params, var44) /* join on <var_params:Array[String]>*/;
((void (*)(val*, val*))(var_32->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_32, var48) /* add on <var_32:Array[Object]>*/;
if (varonce49) {
var50 = varonce49;
} else {
var51 = "]";
var52 = 1;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
((void (*)(val*, val*))(var_32->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_32, var50) /* add on <var_32:Array[Object]>*/;
var54 = ((val* (*)(val*))(var_32->class->vft[COLOR_string__Object__to_s]))(var_32) /* to_s on <var_32:Array[Object]>*/;
var = var54;
goto RET_LABEL;
} else {
var = var_name;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method serialization_phase#AAttrPropdef#type_name for (self: Object): String */
val* VIRTUAL_serialization_phase__AAttrPropdef__type_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = serialization_phase__AAttrPropdef__type_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method serialization_phase#AModule#deserializer_nclassdef for (self: AModule): nullable AStdClassdef */
val* serialization_phase__AModule__deserializer_nclassdef(val* self) {
val* var /* : nullable AStdClassdef */;
val* var1 /* : ANodes[AClassdef] */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var7 /* : nullable TClassid */;
val* var8 /* : String */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
short int var13 /* : Bool */;
val* var14 /* : null */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(self) /* n_classdefs on <self:AModule>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__iterator]))(var1) /* iterator on <var1:ANodes[AClassdef]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_nclassdef = var4;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_parser_nodes__AStdClassdef.color;
idtype = type_parser_nodes__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var6 = 0;
} else {
var6 = var_nclassdef->type->type_table[cltype] == idtype;
}
var_ = var6;
if (var6){
var7 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_id]))(var_nclassdef) /* n_id on <var_nclassdef:AClassdef(AStdClassdef)>*/;
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/serialization_phase.nit", 181);
show_backtrace(1);
} else {
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_parser_nodes__Token__text]))(var7) /* text on <var7:nullable TClassid>*/;
}
if (varonce) {
var9 = varonce;
} else {
var10 = "Deserialization";
var11 = 15;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
var13 = ((short int (*)(val*, val*))(var8->class->vft[COLOR_kernel__Object___61d_61d]))(var8, var9) /* == on <var8:String>*/;
var5 = var13;
} else {
var5 = var_;
}
if (var5){
var = var_nclassdef;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var14 = NULL;
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method serialization_phase#AModule#deserializer_nclassdef for (self: Object): nullable AStdClassdef */
val* VIRTUAL_serialization_phase__AModule__deserializer_nclassdef(val* self) {
val* var /* : nullable AStdClassdef */;
val* var1 /* : nullable AStdClassdef */;
var1 = serialization_phase__AModule__deserializer_nclassdef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method serialization_phase#AStdClassdef#deserializer_npropdef for (self: AStdClassdef): nullable AMethPropdef */
val* serialization_phase__AStdClassdef__deserializer_npropdef(val* self) {
val* var /* : nullable AMethPropdef */;
val* var1 /* : ANodes[APropdef] */;
val* var2 /* : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var5 /* : Bool */;
int cltype;
int idtype;
val* var6 /* : nullable AMethid */;
val* var_id /* var id: nullable AMethid */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
short int var_ /* var : Bool */;
val* var11 /* : TId */;
val* var12 /* : String */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
short int var17 /* : Bool */;
val* var18 /* : null */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AClassdef__n_propdefs]))(self) /* n_propdefs on <self:AStdClassdef>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_abstract_collection__Collection__iterator]))(var1) /* iterator on <var1:ANodes[APropdef]>*/;
for(;;) {
var3 = ((short int (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var2) /* is_ok on <var2:Iterator[nullable Object]>*/;
if(!var3) break;
var4 = ((val* (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__item]))(var2) /* item on <var2:Iterator[nullable Object]>*/;
var_npropdef = var4;
/* <var_npropdef:APropdef> isa AMethPropdef */
cltype = type_parser_nodes__AMethPropdef.color;
idtype = type_parser_nodes__AMethPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var5 = 0;
} else {
var5 = var_npropdef->type->type_table[cltype] == idtype;
}
if (var5){
var6 = ((val* (*)(val*))(var_npropdef->class->vft[COLOR_parser_nodes__AMethPropdef__n_methid]))(var_npropdef) /* n_methid on <var_npropdef:APropdef(AMethPropdef)>*/;
var_id = var6;
/* <var_id:nullable AMethid> isa AIdMethid */
cltype9 = type_parser_nodes__AIdMethid.color;
idtype10 = type_parser_nodes__AIdMethid.id;
if(var_id == NULL) {
var8 = 0;
} else {
if(cltype9 >= var_id->type->table_size) {
var8 = 0;
} else {
var8 = var_id->type->type_table[cltype9] == idtype10;
}
}
var_ = var8;
if (var8){
var11 = ((val* (*)(val*))(var_id->class->vft[COLOR_parser_nodes__AIdMethid__n_id]))(var_id) /* n_id on <var_id:nullable AMethid(AIdMethid)>*/;
var12 = ((val* (*)(val*))(var11->class->vft[COLOR_parser_nodes__Token__text]))(var11) /* text on <var11:TId>*/;
if (varonce) {
var13 = varonce;
} else {
var14 = "deserialize_class";
var15 = 17;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
var17 = ((short int (*)(val*, val*))(var12->class->vft[COLOR_kernel__Object___61d_61d]))(var12, var13) /* == on <var12:String>*/;
var7 = var17;
} else {
var7 = var_;
}
if (var7){
var = var_npropdef;
goto RET_LABEL;
} else {
}
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var2->class->vft[COLOR_abstract_collection__Iterator__next]))(var2) /* next on <var2:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var18 = NULL;
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method serialization_phase#AStdClassdef#deserializer_npropdef for (self: Object): nullable AMethPropdef */
val* VIRTUAL_serialization_phase__AStdClassdef__deserializer_npropdef(val* self) {
val* var /* : nullable AMethPropdef */;
val* var1 /* : nullable AMethPropdef */;
var1 = serialization_phase__AStdClassdef__deserializer_npropdef(self);
var = var1;
RET_LABEL:;
return var;
}
