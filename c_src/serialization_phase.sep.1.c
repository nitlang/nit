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
RET_LABEL:;
}
/* method serialization_phase#SerializationPhase#process_annotated_node for (self: Object, ANode, AAnnotation) */
void VIRTUAL_serialization_phase__SerializationPhase__process_annotated_node(val* self, val* p0, val* p1) {
serialization_phase__SerializationPhase__process_annotated_node(self, p0, p1);
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
val* var20 /* : nullable TAttrid */;
val* var21 /* : null */;
short int var22 /* : Bool */;
val* var23 /* : nullable TId */;
val* var24 /* : String */;
val* var_name /* var name: nullable Object */;
val* var25 /* : nullable TAttrid */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
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
val* var42 /* : Array[Object] */;
long var43 /* : Int */;
val* var44 /* : NativeArray[Object] */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
val* var51 /* : ToolContext */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : APropdef */;
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
var20 = ((val* (*)(val*))(var_attribute->class->vft[COLOR_parser_nodes__AAttrPropdef__n_id]))(var_attribute) /* n_id on <var_attribute:APropdef(AAttrPropdef)>*/;
var21 = NULL;
if (var20 == NULL) {
var22 = 1; /* is null */
} else {
var22 = 0; /* arg is null but recv is not */
}
if (var22){
var23 = ((val* (*)(val*))(var_attribute->class->vft[COLOR_parser_nodes__AAttrPropdef__n_id2]))(var_attribute) /* n_id2 on <var_attribute:APropdef(AAttrPropdef)>*/;
if (var23 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/serialization_phase.nit", 59);
show_backtrace(1);
} else {
var24 = ((val* (*)(val*))(var23->class->vft[COLOR_parser_nodes__Token__text]))(var23) /* text on <var23:nullable TId>*/;
}
var_name = var24;
} else {
var25 = ((val* (*)(val*))(var_attribute->class->vft[COLOR_parser_nodes__AAttrPropdef__n_id]))(var_attribute) /* n_id on <var_attribute:APropdef(AAttrPropdef)>*/;
if (var25 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/serialization_phase.nit", 60);
show_backtrace(1);
} else {
var26 = ((val* (*)(val*))(var25->class->vft[COLOR_parser_nodes__Token__text]))(var25) /* text on <var25:nullable TAttrid>*/;
}
var_name = var26;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = "\11v.serialize_attribute(\"";
var30 = 24;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = "\", ";
var35 = 3;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = ")";
var40 = 1;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var42 = array_instance Array[Object] */
var43 = 5;
var44 = NEW_array__NativeArray(var43, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var44)->values[0] = (val*) var28;
((struct instance_array__NativeArray*)var44)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var44)->values[2] = (val*) var33;
((struct instance_array__NativeArray*)var44)->values[3] = (val*) var_name;
((struct instance_array__NativeArray*)var44)->values[4] = (val*) var38;
((void (*)(val*, val*, long))(var42->class->vft[COLOR_array__Array__with_native]))(var42, var44, var43) /* with_native on <var42:Array[Object]>*/;
}
var45 = ((val* (*)(val*))(var42->class->vft[COLOR_string__Object__to_s]))(var42) /* to_s on <var42:Array[Object]>*/;
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var45) /* add on <var_code:Array[String]>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var16->class->vft[COLOR_abstract_collection__Iterator__next]))(var16) /* next on <var16:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
if (varonce46) {
var47 = varonce46;
} else {
var48 = "end";
var49 = 3;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
((void (*)(val*, val*))(var_code->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_code, var47) /* add on <var_code:Array[String]>*/;
var51 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:SerializationPhase>*/;
if (varonce52) {
var53 = varonce52;
} else {
var54 = "\n";
var55 = 1;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var57 = ((val* (*)(val*, val*))(var_code->class->vft[COLOR_string__Collection__join]))(var_code, var53) /* join on <var_code:Array[String]>*/;
var58 = ((val* (*)(val*, val*))(var51->class->vft[COLOR_parser_util__ToolContext__parse_propdef]))(var51, var57) /* parse_propdef on <var51:ToolContext>*/;
((void (*)(val*, val*))(var_npropdefs->class->vft[COLOR_abstract_collection__Sequence__push]))(var_npropdefs, var58) /* push on <var_npropdefs:ANodes[APropdef]>*/;
RET_LABEL:;
}
/* method serialization_phase#SerializationPhase#generate_serialization_method for (self: Object, AClassdef) */
void VIRTUAL_serialization_phase__SerializationPhase__generate_serialization_method(val* self, val* p0) {
serialization_phase__SerializationPhase__generate_serialization_method(self, p0);
RET_LABEL:;
}
