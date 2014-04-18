#include "typing.sep.0.h"
/* method typing#ASuperExpr#process_superinit for (self: ASuperExpr, TypeVisitor) */
void typing__ASuperExpr__process_superinit(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AClassdef */;
val* var1 /* : nullable MClassDef */;
val* var2 /* : MClassType */;
val* var_recvtype /* var recvtype: MClassType */;
val* var3 /* : MPropDef */;
val* var_mpropdef /* var mpropdef: MPropDef */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : MProperty */;
val* var_mproperty /* var mproperty: MMethod */;
val* var6 /* : null */;
val* var_superprop /* var superprop: nullable MMethodDef */;
val* var7 /* : AClassdef */;
val* var8 /* : nullable MClassDef */;
val* var9 /* : Array[MClassType] */;
val* var10 /* : Iterator[nullable Object] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var13 /* : MModule */;
val* var14 /* : MType */;
val* var15 /* : ModelBuilder */;
val* var16 /* : ToolContext */;
long var17 /* : Int */;
long var_errcount /* var errcount: Int */;
val* var18 /* : String */;
val* var19 /* : nullable MProperty */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
const char* var_class_name;
val* var_candidate /* var candidate: nullable MMethod */;
val* var23 /* : null */;
short int var24 /* : Bool */;
val* var25 /* : ModelBuilder */;
val* var26 /* : ToolContext */;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : null */;
short int var37 /* : Bool */;
short int var_ /* var : Bool */;
val* var38 /* : MProperty */;
short int var39 /* : Bool */;
static val* varonce;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : String */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : String */;
val* var55 /* : MProperty */;
val* var56 /* : String */;
val* var57 /* : Array[Object] */;
long var58 /* : Int */;
val* var59 /* : NativeArray[Object] */;
val* var60 /* : String */;
val* var61 /* : MModule */;
val* var62 /* : Array[MPropDef] */;
val* var_candidatedefs /* var candidatedefs: Array[MMethodDef] */;
val* var63 /* : null */;
short int var64 /* : Bool */;
val* var65 /* : nullable Object */;
short int var66 /* : Bool */;
long var67 /* : Int */;
long var68 /* : Int */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
short int var75 /* : Bool */;
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
val* var96 /* : String */;
val* var97 /* : Array[Object] */;
long var98 /* : Int */;
val* var99 /* : NativeArray[Object] */;
val* var100 /* : String */;
val* var101 /* : nullable Object */;
val* var102 /* : null */;
short int var103 /* : Bool */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
long var107 /* : Int */;
val* var108 /* : String */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
val* var113 /* : String */;
val* var114 /* : Array[Object] */;
long var115 /* : Int */;
val* var116 /* : NativeArray[Object] */;
val* var117 /* : String */;
short int var118 /* : Bool */;
val* var119 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var120 /* : CallSite */;
short int var121 /* : Bool */;
val* var122 /* : MProperty */;
short int var123 /* : Bool */;
val* var_callsite /* var callsite: CallSite */;
val* var124 /* : AExprs */;
val* var125 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
long var126 /* : Int */;
long var127 /* : Int */;
short int var128 /* : Bool */;
short int var130 /* : Bool */;
int cltype131;
int idtype132;
const char* var_class_name133;
short int var134 /* : Bool */;
short int var135 /* : Bool */;
val* var136 /* : nullable MSignature */;
long var137 /* : Int */;
long var138 /* : Int */;
short int var139 /* : Bool */;
short int var141 /* : Bool */;
int cltype142;
int idtype143;
const char* var_class_name144;
short int var145 /* : Bool */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : NativeString */;
long var149 /* : Int */;
val* var150 /* : String */;
val* var151 /* : nullable MSignature */;
long var152 /* : Int */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : String */;
long var158 /* : Int */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : String */;
val* var164 /* : Array[Object] */;
long var165 /* : Int */;
val* var166 /* : NativeArray[Object] */;
val* var167 /* : Object */;
val* var168 /* : Object */;
val* var169 /* : String */;
long var170 /* : Int */;
long var_i /* var i: Int */;
val* var171 /* : Array[MParameter] */;
val* var172 /* : Iterator[nullable Object] */;
short int var173 /* : Bool */;
val* var174 /* : nullable Object */;
val* var_sp /* var sp: MParameter */;
val* var175 /* : nullable MSignature */;
val* var176 /* : Array[MParameter] */;
val* var177 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var178 /* : MType */;
val* var179 /* : MType */;
short int var180 /* : Bool */;
short int var181 /* : Bool */;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : NativeString */;
long var185 /* : Int */;
val* var186 /* : String */;
static val* varonce187;
val* var188 /* : String */;
char* var189 /* : NativeString */;
long var190 /* : Int */;
val* var191 /* : String */;
val* var192 /* : MType */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
long var196 /* : Int */;
val* var197 /* : String */;
val* var198 /* : String */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : NativeString */;
long var202 /* : Int */;
val* var203 /* : String */;
val* var204 /* : MType */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
long var208 /* : Int */;
val* var209 /* : String */;
val* var210 /* : Array[Object] */;
long var211 /* : Int */;
val* var212 /* : NativeArray[Object] */;
val* var213 /* : Object */;
val* var214 /* : String */;
long var215 /* : Int */;
long var216 /* : Int */;
long var218 /* : Int */;
short int var220 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__nclassdef]))(var_v) /* nclassdef on <var_v:TypeVisitor>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var) /* mclassdef on <var:AClassdef>*/;
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 1460);
show_backtrace(1);
} else {
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_model__MClassDef__bound_mtype]))(var1) /* bound_mtype on <var1:nullable MClassDef>*/;
}
var_recvtype = var2;
var3 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__mpropdef]))(var_v) /* mpropdef on <var_v:TypeVisitor>*/;
var_mpropdef = var3;
/* <var_mpropdef:MPropDef> isa MMethodDef */
cltype = type_model__MMethodDef.color;
idtype = type_model__MMethodDef.id;
if(cltype >= var_mpropdef->type->table_size) {
var4 = 0;
} else {
var4 = var_mpropdef->type->type_table[cltype] == idtype;
}
if (!var4) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 1462);
show_backtrace(1);
}
var5 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MPropDef__mproperty]))(var_mpropdef) /* mproperty on <var_mpropdef:MPropDef(MMethodDef)>*/;
var_mproperty = var5;
var6 = NULL;
var_superprop = var6;
var7 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__nclassdef]))(var_v) /* nclassdef on <var_v:TypeVisitor>*/;
var8 = ((val* (*)(val*))(var7->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var7) /* mclassdef on <var7:AClassdef>*/;
if (var8 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 1465);
show_backtrace(1);
} else {
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_model__MClassDef__supertypes]))(var8) /* supertypes on <var8:nullable MClassDef>*/;
}
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Collection__iterator]))(var9) /* iterator on <var9:Array[MClassType]>*/;
for(;;) {
var11 = ((short int (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var10) /* is_ok on <var10:Iterator[nullable Object]>*/;
if(!var11) break;
var12 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__item]))(var10) /* item on <var10:Iterator[nullable Object]>*/;
var_msupertype = var12;
var13 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__mmodule]))(var_v) /* mmodule on <var_v:TypeVisitor>*/;
var14 = ((val* (*)(val*, val*, val*))(var_msupertype->class->vft[COLOR_model__MType__anchor_to]))(var_msupertype, var13, var_recvtype) /* anchor_to on <var_msupertype:MClassType>*/;
var_msupertype = var14;
var15 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(var_v) /* modelbuilder on <var_v:TypeVisitor>*/;
var16 = ((val* (*)(val*))(var15->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var15) /* toolcontext on <var15:ModelBuilder>*/;
var17 = ((long (*)(val*))(var16->class->vft[COLOR_toolcontext__ToolContext__error_count]))(var16) /* error_count on <var16:ToolContext>*/;
var_errcount = var17;
var18 = ((val* (*)(val*))(var_mproperty->class->vft[COLOR_model__MProperty__name]))(var_mproperty) /* name on <var_mproperty:MMethod>*/;
var19 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__try_get_mproperty_by_name2]))(var_v, self, var_msupertype, var18) /* try_get_mproperty_by_name2 on <var_v:TypeVisitor>*/;
/* <var19:nullable MProperty> isa nullable MMethod */
cltype21 = type_nullable_model__MMethod.color;
idtype22 = type_nullable_model__MMethod.id;
if(var19 == NULL) {
var20 = 1;
} else {
if(cltype21 >= var19->type->table_size) {
var20 = 0;
} else {
var20 = var19->type->type_table[cltype21] == idtype22;
}
}
if (!var20) {
var_class_name = var19 == NULL ? "null" : var19->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 1468);
show_backtrace(1);
}
var_candidate = var19;
var23 = NULL;
if (var_candidate == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (var24){
var25 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(var_v) /* modelbuilder on <var_v:TypeVisitor>*/;
var26 = ((val* (*)(val*))(var25->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(var25) /* toolcontext on <var25:ModelBuilder>*/;
var27 = ((long (*)(val*))(var26->class->vft[COLOR_toolcontext__ToolContext__error_count]))(var26) /* error_count on <var26:ToolContext>*/;
{ /* Inline kernel#Int#> (var27,var_errcount) */
/* Covariant cast for argument 0 (i) <var_errcount:Int> isa OTHER */
/* <var_errcount:Int> isa OTHER */
var30 = 1; /* easy <var_errcount:Int> isa OTHER*/
if (!var30) {
var_class_name33 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var34 = var27 > var_errcount;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
if (var28){
goto RET_LABEL;
} else {
}
goto CONTINUE_label;
} else {
}
var36 = NULL;
if (var_superprop == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
var_ = var37;
if (var37){
var38 = ((val* (*)(val*))(var_superprop->class->vft[COLOR_model__MPropDef__mproperty]))(var_superprop) /* mproperty on <var_superprop:nullable MMethodDef(MMethodDef)>*/;
var39 = ((short int (*)(val*, val*))(var38->class->vft[COLOR_kernel__Object___33d_61d]))(var38, var_candidate) /* != on <var38:MProperty(MMethod)>*/;
var35 = var39;
} else {
var35 = var_;
}
if (var35){
if (varonce) {
var40 = varonce;
} else {
var41 = "Error: conflicting super constructor to call for ";
var42 = 49;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce = var40;
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = ": ";
var47 = 2;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
var49 = ((val* (*)(val*))(var_candidate->class->vft[COLOR_model__MProperty__full_name]))(var_candidate) /* full_name on <var_candidate:nullable MMethod(MMethod)>*/;
if (varonce50) {
var51 = varonce50;
} else {
var52 = ", ";
var53 = 2;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var55 = ((val* (*)(val*))(var_superprop->class->vft[COLOR_model__MPropDef__mproperty]))(var_superprop) /* mproperty on <var_superprop:nullable MMethodDef(MMethodDef)>*/;
var56 = ((val* (*)(val*))(var55->class->vft[COLOR_model__MProperty__full_name]))(var55) /* full_name on <var55:MProperty(MMethod)>*/;
var57 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var57 = array_instance Array[Object] */
var58 = 6;
var59 = NEW_array__NativeArray(var58, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var59)->values[0] = (val*) var40;
((struct instance_array__NativeArray*)var59)->values[1] = (val*) var_mproperty;
((struct instance_array__NativeArray*)var59)->values[2] = (val*) var45;
((struct instance_array__NativeArray*)var59)->values[3] = (val*) var49;
((struct instance_array__NativeArray*)var59)->values[4] = (val*) var51;
((struct instance_array__NativeArray*)var59)->values[5] = (val*) var56;
((void (*)(val*, val*, long))(var57->class->vft[COLOR_array__Array__with_native]))(var57, var59, var58) /* with_native on <var57:Array[Object]>*/;
}
var60 = ((val* (*)(val*))(var57->class->vft[COLOR_string__Object__to_s]))(var57) /* to_s on <var57:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var60) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var61 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__mmodule]))(var_v) /* mmodule on <var_v:TypeVisitor>*/;
var62 = ((val* (*)(val*, val*, val*))(var_candidate->class->vft[COLOR_model__MProperty__lookup_definitions]))(var_candidate, var61, var_recvtype) /* lookup_definitions on <var_candidate:nullable MMethod(MMethod)>*/;
var_candidatedefs = var62;
var63 = NULL;
if (var_superprop == NULL) {
var64 = 0; /* is null */
} else {
var64 = 1; /* arg is null and recv is not */
}
if (var64){
var65 = ((val* (*)(val*))(var_candidatedefs->class->vft[COLOR_abstract_collection__Collection__first]))(var_candidatedefs) /* first on <var_candidatedefs:Array[MMethodDef]>*/;
var66 = ((short int (*)(val*, val*))(var_superprop->class->vft[COLOR_kernel__Object___61d_61d]))(var_superprop, var65) /* == on <var_superprop:nullable MMethodDef(MMethodDef)>*/;
if (var66){
goto CONTINUE_label;
} else {
}
((void (*)(val*, val*))(var_candidatedefs->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_candidatedefs, var_superprop) /* add on <var_candidatedefs:Array[MMethodDef]>*/;
} else {
}
var67 = ((long (*)(val*))(var_candidatedefs->class->vft[COLOR_abstract_collection__Collection__length]))(var_candidatedefs) /* length on <var_candidatedefs:Array[MMethodDef]>*/;
var68 = 1;
{ /* Inline kernel#Int#> (var67,var68) */
/* Covariant cast for argument 0 (i) <var68:Int> isa OTHER */
/* <var68:Int> isa OTHER */
var71 = 1; /* easy <var68:Int> isa OTHER*/
if (!var71) {
var_class_name74 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var75 = var67 > var68;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
if (var69){
if (varonce76) {
var77 = varonce76;
} else {
var78 = "Error: confliting property definitions for property ";
var79 = 52;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
if (varonce81) {
var82 = varonce81;
} else {
var83 = " in ";
var84 = 4;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
if (varonce86) {
var87 = varonce86;
} else {
var88 = ": ";
var89 = 2;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
if (varonce91) {
var92 = varonce91;
} else {
var93 = ", ";
var94 = 2;
var95 = string__NativeString__to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
var96 = ((val* (*)(val*, val*))(var_candidatedefs->class->vft[COLOR_string__Collection__join]))(var_candidatedefs, var92) /* join on <var_candidatedefs:Array[MMethodDef]>*/;
var97 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var97 = array_instance Array[Object] */
var98 = 6;
var99 = NEW_array__NativeArray(var98, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var99)->values[0] = (val*) var77;
((struct instance_array__NativeArray*)var99)->values[1] = (val*) var_mproperty;
((struct instance_array__NativeArray*)var99)->values[2] = (val*) var82;
((struct instance_array__NativeArray*)var99)->values[3] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var99)->values[4] = (val*) var87;
((struct instance_array__NativeArray*)var99)->values[5] = (val*) var96;
((void (*)(val*, val*, long))(var97->class->vft[COLOR_array__Array__with_native]))(var97, var99, var98) /* with_native on <var97:Array[Object]>*/;
}
var100 = ((val* (*)(val*))(var97->class->vft[COLOR_string__Object__to_s]))(var97) /* to_s on <var97:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var100) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var101 = ((val* (*)(val*))(var_candidatedefs->class->vft[COLOR_abstract_collection__Collection__first]))(var_candidatedefs) /* first on <var_candidatedefs:Array[MMethodDef]>*/;
var_superprop = var101;
CONTINUE_label: (void)0;
((void (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__next]))(var10) /* next on <var10:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var102 = NULL;
if (var_superprop == NULL) {
var103 = 1; /* is null */
} else {
var103 = 0; /* arg is null but recv is not */
}
if (var103){
if (varonce104) {
var105 = varonce104;
} else {
var106 = "Error: No super method to call for ";
var107 = 35;
var108 = string__NativeString__to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
if (varonce109) {
var110 = varonce109;
} else {
var111 = ".";
var112 = 1;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
var114 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var114 = array_instance Array[Object] */
var115 = 3;
var116 = NEW_array__NativeArray(var115, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var116)->values[0] = (val*) var105;
((struct instance_array__NativeArray*)var116)->values[1] = (val*) var_mproperty;
((struct instance_array__NativeArray*)var116)->values[2] = (val*) var110;
((void (*)(val*, val*, long))(var114->class->vft[COLOR_array__Array__with_native]))(var114, var116, var115) /* with_native on <var114:Array[Object]>*/;
}
var117 = ((val* (*)(val*))(var114->class->vft[COLOR_string__Object__to_s]))(var114) /* to_s on <var114:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var117) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var118 = 1;
var119 = ((val* (*)(val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__resolve_signature_for]))(var_v, var_superprop, var_recvtype, var118) /* resolve_signature_for on <var_v:TypeVisitor>*/;
var_msignature = var119;
var120 = NEW_typing__CallSite(&type_typing__CallSite);
var121 = 1;
var122 = ((val* (*)(val*))(var_superprop->class->vft[COLOR_model__MPropDef__mproperty]))(var_superprop) /* mproperty on <var_superprop:nullable MMethodDef(MMethodDef)>*/;
var123 = 0;
((void (*)(val*, val*, val*, short int, val*, val*, val*, short int))(var120->class->vft[COLOR_typing__CallSite__init]))(var120, self, var_recvtype, var121, var122, var_superprop, var_msignature, var123) /* init on <var120:CallSite>*/;
var_callsite = var120;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__ASuperExpr__callsite_61d]))(self, var_callsite) /* callsite= on <self:ASuperExpr>*/;
var124 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ASuperExpr__n_args]))(self) /* n_args on <self:ASuperExpr>*/;
var125 = ((val* (*)(val*))(var124->class->vft[COLOR_typing__AExprs__to_a]))(var124) /* to_a on <var124:AExprs>*/;
var_args = var125;
var126 = ((long (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__length]))(var_args) /* length on <var_args:Array[AExpr]>*/;
var127 = 0;
{ /* Inline kernel#Int#> (var126,var127) */
/* Covariant cast for argument 0 (i) <var127:Int> isa OTHER */
/* <var127:Int> isa OTHER */
var130 = 1; /* easy <var127:Int> isa OTHER*/
if (!var130) {
var_class_name133 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name133);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 267);
show_backtrace(1);
}
var134 = var126 > var127;
var128 = var134;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
if (var128){
var135 = ((short int (*)(val*, val*, val*))(var_callsite->class->vft[COLOR_typing__CallSite__check_signature]))(var_callsite, var_v, var_args) /* check_signature on <var_callsite:CallSite>*/;
var135;
} else {
var136 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MPropDef(MMethodDef)>*/;
if (var136 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 1502);
show_backtrace(1);
} else {
var137 = ((long (*)(val*))(var136->class->vft[COLOR_model__MSignature__arity]))(var136) /* arity on <var136:nullable MSignature>*/;
}
var138 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__arity]))(var_msignature) /* arity on <var_msignature:MSignature>*/;
{ /* Inline kernel#Int#< (var137,var138) */
/* Covariant cast for argument 0 (i) <var138:Int> isa OTHER */
/* <var138:Int> isa OTHER */
var141 = 1; /* easy <var138:Int> isa OTHER*/
if (!var141) {
var_class_name144 = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name144);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 265);
show_backtrace(1);
}
var145 = var137 < var138;
var139 = var145;
goto RET_LABEL140;
RET_LABEL140:(void)0;
}
if (var139){
if (varonce146) {
var147 = varonce146;
} else {
var148 = "Error: Not enough implicit arguments to pass. Got ";
var149 = 50;
var150 = string__NativeString__to_s_with_length(var148, var149);
var147 = var150;
varonce146 = var147;
}
var151 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MPropDef(MMethodDef)>*/;
if (var151 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 1503);
show_backtrace(1);
} else {
var152 = ((long (*)(val*))(var151->class->vft[COLOR_model__MSignature__arity]))(var151) /* arity on <var151:nullable MSignature>*/;
}
if (varonce153) {
var154 = varonce153;
} else {
var155 = ", expected at least ";
var156 = 20;
var157 = string__NativeString__to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
var158 = ((long (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__arity]))(var_msignature) /* arity on <var_msignature:MSignature>*/;
if (varonce159) {
var160 = varonce159;
} else {
var161 = ". Signature is ";
var162 = 15;
var163 = string__NativeString__to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
var164 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var164 = array_instance Array[Object] */
var165 = 6;
var166 = NEW_array__NativeArray(var165, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var166)->values[0] = (val*) var147;
var167 = BOX_kernel__Int(var152); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var166)->values[1] = (val*) var167;
((struct instance_array__NativeArray*)var166)->values[2] = (val*) var154;
var168 = BOX_kernel__Int(var158); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var166)->values[3] = (val*) var168;
((struct instance_array__NativeArray*)var166)->values[4] = (val*) var160;
((struct instance_array__NativeArray*)var166)->values[5] = (val*) var_msignature;
((void (*)(val*, val*, long))(var164->class->vft[COLOR_array__Array__with_native]))(var164, var166, var165) /* with_native on <var164:Array[Object]>*/;
}
var169 = ((val* (*)(val*))(var164->class->vft[COLOR_string__Object__to_s]))(var164) /* to_s on <var164:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var169) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var170 = 0;
var_i = var170;
var171 = ((val* (*)(val*))(var_msignature->class->vft[COLOR_model__MSignature__mparameters]))(var_msignature) /* mparameters on <var_msignature:MSignature>*/;
var172 = ((val* (*)(val*))(var171->class->vft[COLOR_abstract_collection__Collection__iterator]))(var171) /* iterator on <var171:Array[MParameter]>*/;
for(;;) {
var173 = ((short int (*)(val*))(var172->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var172) /* is_ok on <var172:Iterator[nullable Object]>*/;
if(!var173) break;
var174 = ((val* (*)(val*))(var172->class->vft[COLOR_abstract_collection__Iterator__item]))(var172) /* item on <var172:Iterator[nullable Object]>*/;
var_sp = var174;
var175 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MMethodDef__msignature]))(var_mpropdef) /* msignature on <var_mpropdef:MPropDef(MMethodDef)>*/;
if (var175 == NULL) {
fprintf(stderr, "Runtime error: %s", "Receiver is null");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 1509);
show_backtrace(1);
} else {
var176 = ((val* (*)(val*))(var175->class->vft[COLOR_model__MSignature__mparameters]))(var175) /* mparameters on <var175:nullable MSignature>*/;
}
var177 = ((val* (*)(val*, long))(var176->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var176, var_i) /* [] on <var176:Array[MParameter]>*/;
var_p = var177;
var178 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__mtype]))(var_p) /* mtype on <var_p:MParameter>*/;
var179 = ((val* (*)(val*))(var_sp->class->vft[COLOR_model__MParameter__mtype]))(var_sp) /* mtype on <var_sp:MParameter>*/;
var180 = ((short int (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__is_subtype]))(var_v, var178, var179) /* is_subtype on <var_v:TypeVisitor>*/;
var181 = !var180;
if (var181){
if (varonce182) {
var183 = varonce182;
} else {
var184 = "Type error: expected argument #";
var185 = 31;
var186 = string__NativeString__to_s_with_length(var184, var185);
var183 = var186;
varonce182 = var183;
}
if (varonce187) {
var188 = varonce187;
} else {
var189 = " of type ";
var190 = 9;
var191 = string__NativeString__to_s_with_length(var189, var190);
var188 = var191;
varonce187 = var188;
}
var192 = ((val* (*)(val*))(var_sp->class->vft[COLOR_model__MParameter__mtype]))(var_sp) /* mtype on <var_sp:MParameter>*/;
if (varonce193) {
var194 = varonce193;
} else {
var195 = ", got implicit argument ";
var196 = 24;
var197 = string__NativeString__to_s_with_length(var195, var196);
var194 = var197;
varonce193 = var194;
}
var198 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__name]))(var_p) /* name on <var_p:MParameter>*/;
if (varonce199) {
var200 = varonce199;
} else {
var201 = " of type ";
var202 = 9;
var203 = string__NativeString__to_s_with_length(var201, var202);
var200 = var203;
varonce199 = var200;
}
var204 = ((val* (*)(val*))(var_p->class->vft[COLOR_model__MParameter__mtype]))(var_p) /* mtype on <var_p:MParameter>*/;
if (varonce205) {
var206 = varonce205;
} else {
var207 = ". Signature is ";
var208 = 15;
var209 = string__NativeString__to_s_with_length(var207, var208);
var206 = var209;
varonce205 = var206;
}
var210 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var210 = array_instance Array[Object] */
var211 = 10;
var212 = NEW_array__NativeArray(var211, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var212)->values[0] = (val*) var183;
var213 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var212)->values[1] = (val*) var213;
((struct instance_array__NativeArray*)var212)->values[2] = (val*) var188;
((struct instance_array__NativeArray*)var212)->values[3] = (val*) var192;
((struct instance_array__NativeArray*)var212)->values[4] = (val*) var194;
((struct instance_array__NativeArray*)var212)->values[5] = (val*) var198;
((struct instance_array__NativeArray*)var212)->values[6] = (val*) var200;
((struct instance_array__NativeArray*)var212)->values[7] = (val*) var204;
((struct instance_array__NativeArray*)var212)->values[8] = (val*) var206;
((struct instance_array__NativeArray*)var212)->values[9] = (val*) var_msignature;
((void (*)(val*, val*, long))(var210->class->vft[COLOR_array__Array__with_native]))(var210, var212, var211) /* with_native on <var210:Array[Object]>*/;
}
var214 = ((val* (*)(val*))(var210->class->vft[COLOR_string__Object__to_s]))(var210) /* to_s on <var210:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var214) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var215 = 1;
{ /* Inline kernel#Int#+ (var_i,var215) */
var218 = var_i + var215;
var216 = var218;
goto RET_LABEL217;
RET_LABEL217:(void)0;
}
var_i = var216;
CONTINUE_label219: (void)0;
((void (*)(val*))(var172->class->vft[COLOR_abstract_collection__Iterator__next]))(var172) /* next on <var172:Iterator[nullable Object]>*/;
}
BREAK_label219: (void)0;
}
var220 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var220) /* is_typed= on <self:ASuperExpr>*/;
RET_LABEL:;
}
/* method typing#ASuperExpr#process_superinit for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ASuperExpr__process_superinit(val* self, val* p0) {
typing__ASuperExpr__process_superinit(self, p0);
RET_LABEL:;
}
/* method typing#ANewExpr#callsite for (self: ANewExpr): nullable CallSite */
val* typing__ANewExpr__callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_typing__ANewExpr___64dcallsite].val; /* @callsite on <self:ANewExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ANewExpr#callsite for (self: Object): nullable CallSite */
val* VIRTUAL_typing__ANewExpr__callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = typing__ANewExpr__callsite(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ANewExpr#callsite= for (self: ANewExpr, nullable CallSite) */
void typing__ANewExpr__callsite_61d(val* self, val* p0) {
self->attrs[COLOR_typing__ANewExpr___64dcallsite].val = p0; /* @callsite on <self:ANewExpr> */
RET_LABEL:;
}
/* method typing#ANewExpr#callsite= for (self: Object, nullable CallSite) */
void VIRTUAL_typing__ANewExpr__callsite_61d(val* self, val* p0) {
typing__ANewExpr__callsite_61d(self, p0);
RET_LABEL:;
}
/* method typing#ANewExpr#accept_typing for (self: ANewExpr, TypeVisitor) */
void typing__ANewExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AType */;
val* var1 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
val* var36 /* : MClass */;
val* var37 /* : MClassKind */;
val* var38 /* : MClassKind */;
short int var39 /* : Bool */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : String */;
val* var50 /* : Array[Object] */;
long var51 /* : Int */;
val* var52 /* : NativeArray[Object] */;
val* var53 /* : String */;
val* var54 /* : MClass */;
val* var55 /* : MClassKind */;
val* var56 /* : MClassKind */;
short int var57 /* : Bool */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : String */;
val* var68 /* : Array[Object] */;
long var69 /* : Int */;
val* var70 /* : NativeArray[Object] */;
val* var71 /* : String */;
val* var72 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
val* var73 /* : null */;
short int var74 /* : Bool */;
val* var75 /* : String */;
val* var_name /* var name: String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : String */;
short int var81 /* : Bool */;
val* var82 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var83 /* : null */;
short int var84 /* : Bool */;
val* var85 /* : MMethod */;
val* var86 /* : MClass */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : String */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : String */;
val* var99 /* : Array[Object] */;
long var100 /* : Int */;
val* var101 /* : NativeArray[Object] */;
val* var102 /* : String */;
val* var103 /* : AExprs */;
val* var104 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var105 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANewExpr__n_type]))(self) /* n_type on <self:ANewExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__resolve_mtype]))(var_v, var) /* resolve_mtype on <var_v:TypeVisitor>*/;
var_recvtype = var1;
var2 = NULL;
if (var_recvtype == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var_recvtype) /* mtype= on <self:ANewExpr>*/;
/* <var_recvtype:nullable MType(MType)> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_recvtype->type->table_size) {
var4 = 0;
} else {
var4 = var_recvtype->type->type_table[cltype] == idtype;
}
var5 = !var4;
if (var5){
/* <var_recvtype:nullable MType(MType)> isa MNullableType */
cltype7 = type_model__MNullableType.color;
idtype8 = type_model__MNullableType.id;
if(cltype7 >= var_recvtype->type->table_size) {
var6 = 0;
} else {
var6 = var_recvtype->type->type_table[cltype7] == idtype8;
}
if (var6){
if (varonce) {
var9 = varonce;
} else {
var10 = "Type error: cannot instantiate the nullable type ";
var11 = 49;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = ".";
var16 = 1;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 3;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var14;
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var21) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
if (varonce22) {
var23 = varonce22;
} else {
var24 = "Type error: cannot instantiate the formal type ";
var25 = 47;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = ".";
var30 = 1;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 3;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var23;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var28;
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var35) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
}
} else {
var36 = ((val* (*)(val*))(var_recvtype->class->vft[COLOR_model__MClassType__mclass]))(var_recvtype) /* mclass on <var_recvtype:nullable MType(MClassType)>*/;
var37 = ((val* (*)(val*))(var36->class->vft[COLOR_model__MClass__kind]))(var36) /* kind on <var36:MClass>*/;
var38 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__abstract_kind]))(self) /* abstract_kind on <self:ANewExpr>*/;
var39 = ((short int (*)(val*, val*))(var37->class->vft[COLOR_kernel__Object___61d_61d]))(var37, var38) /* == on <var37:MClassKind>*/;
if (var39){
if (varonce40) {
var41 = varonce40;
} else {
var42 = "Cannot instantiate abstract class ";
var43 = 34;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = ".";
var48 = 1;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var50 = array_instance Array[Object] */
var51 = 3;
var52 = NEW_array__NativeArray(var51, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var52)->values[0] = (val*) var41;
((struct instance_array__NativeArray*)var52)->values[1] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var52)->values[2] = (val*) var46;
((void (*)(val*, val*, long))(var50->class->vft[COLOR_array__Array__with_native]))(var50, var52, var51) /* with_native on <var50:Array[Object]>*/;
}
var53 = ((val* (*)(val*))(var50->class->vft[COLOR_string__Object__to_s]))(var50) /* to_s on <var50:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var53) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
var54 = ((val* (*)(val*))(var_recvtype->class->vft[COLOR_model__MClassType__mclass]))(var_recvtype) /* mclass on <var_recvtype:nullable MType(MClassType)>*/;
var55 = ((val* (*)(val*))(var54->class->vft[COLOR_model__MClass__kind]))(var54) /* kind on <var54:MClass>*/;
var56 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__interface_kind]))(self) /* interface_kind on <self:ANewExpr>*/;
var57 = ((short int (*)(val*, val*))(var55->class->vft[COLOR_kernel__Object___61d_61d]))(var55, var56) /* == on <var55:MClassKind>*/;
if (var57){
if (varonce58) {
var59 = varonce58;
} else {
var60 = "Cannot instantiate interface ";
var61 = 29;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
if (varonce63) {
var64 = varonce63;
} else {
var65 = ".";
var66 = 1;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
var68 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var68 = array_instance Array[Object] */
var69 = 3;
var70 = NEW_array__NativeArray(var69, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var70)->values[0] = (val*) var59;
((struct instance_array__NativeArray*)var70)->values[1] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var70)->values[2] = (val*) var64;
((void (*)(val*, val*, long))(var68->class->vft[COLOR_array__Array__with_native]))(var68, var70, var69) /* with_native on <var68:Array[Object]>*/;
}
var71 = ((val* (*)(val*))(var68->class->vft[COLOR_string__Object__to_s]))(var68) /* to_s on <var68:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var71) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
}
}
var72 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANewExpr__n_id]))(self) /* n_id on <self:ANewExpr>*/;
var_nid = var72;
var73 = NULL;
if (var_nid == NULL) {
var74 = 0; /* is null */
} else {
var74 = 1; /* arg is null and recv is not */
}
if (var74){
var75 = ((val* (*)(val*))(var_nid->class->vft[COLOR_parser_nodes__Token__text]))(var_nid) /* text on <var_nid:nullable TId(TId)>*/;
var_name = var75;
} else {
if (varonce76) {
var77 = varonce76;
} else {
var78 = "init";
var79 = 4;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
var_name = var77;
}
var81 = 0;
var82 = ((val* (*)(val*, val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__get_method]))(var_v, self, var_recvtype, var_name, var81) /* get_method on <var_v:TypeVisitor>*/;
var_callsite = var82;
var83 = NULL;
if (var_callsite == NULL) {
var84 = 1; /* is null */
} else {
var84 = 0; /* arg is null but recv is not */
}
if (var84){
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_typing__ANewExpr__callsite_61d]))(self, var_callsite) /* callsite= on <self:ANewExpr>*/;
var85 = ((val* (*)(val*))(var_callsite->class->vft[COLOR_typing__CallSite__mproperty]))(var_callsite) /* mproperty on <var_callsite:nullable CallSite(CallSite)>*/;
var86 = ((val* (*)(val*))(var_recvtype->class->vft[COLOR_model__MClassType__mclass]))(var_recvtype) /* mclass on <var_recvtype:nullable MType(MClassType)>*/;
var87 = ((short int (*)(val*, val*))(var85->class->vft[COLOR_model__MMethod__is_init_for]))(var85, var86) /* is_init_for on <var85:MMethod>*/;
var88 = !var87;
if (var88){
if (varonce89) {
var90 = varonce89;
} else {
var91 = "Error: ";
var92 = 7;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
if (varonce94) {
var95 = varonce94;
} else {
var96 = " is not a constructor.";
var97 = 22;
var98 = string__NativeString__to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
var99 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var99 = array_instance Array[Object] */
var100 = 3;
var101 = NEW_array__NativeArray(var100, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var101)->values[0] = (val*) var90;
((struct instance_array__NativeArray*)var101)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var101)->values[2] = (val*) var95;
((void (*)(val*, val*, long))(var99->class->vft[COLOR_array__Array__with_native]))(var99, var101, var100) /* with_native on <var99:Array[Object]>*/;
}
var102 = ((val* (*)(val*))(var99->class->vft[COLOR_string__Object__to_s]))(var99) /* to_s on <var99:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var102) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var103 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANewExpr__n_args]))(self) /* n_args on <self:ANewExpr>*/;
var104 = ((val* (*)(val*))(var103->class->vft[COLOR_typing__AExprs__to_a]))(var103) /* to_a on <var103:AExprs>*/;
var_args = var104;
var105 = ((short int (*)(val*, val*, val*))(var_callsite->class->vft[COLOR_typing__CallSite__check_signature]))(var_callsite, var_v, var_args) /* check_signature on <var_callsite:nullable CallSite(CallSite)>*/;
var105;
RET_LABEL:;
}
/* method typing#ANewExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ANewExpr__accept_typing(val* self, val* p0) {
typing__ANewExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AAttrFormExpr#mproperty for (self: AAttrFormExpr): nullable MAttribute */
val* typing__AAttrFormExpr__mproperty(val* self) {
val* var /* : nullable MAttribute */;
val* var1 /* : nullable MAttribute */;
var1 = self->attrs[COLOR_typing__AAttrFormExpr___64dmproperty].val; /* @mproperty on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#mproperty for (self: Object): nullable MAttribute */
val* VIRTUAL_typing__AAttrFormExpr__mproperty(val* self) {
val* var /* : nullable MAttribute */;
val* var1 /* : nullable MAttribute */;
var1 = typing__AAttrFormExpr__mproperty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#mproperty= for (self: AAttrFormExpr, nullable MAttribute) */
void typing__AAttrFormExpr__mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AAttrFormExpr___64dmproperty].val = p0; /* @mproperty on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method typing#AAttrFormExpr#mproperty= for (self: Object, nullable MAttribute) */
void VIRTUAL_typing__AAttrFormExpr__mproperty_61d(val* self, val* p0) {
typing__AAttrFormExpr__mproperty_61d(self, p0);
RET_LABEL:;
}
/* method typing#AAttrFormExpr#attr_type for (self: AAttrFormExpr): nullable MType */
val* typing__AAttrFormExpr__attr_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_typing__AAttrFormExpr___64dattr_type].val; /* @attr_type on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#attr_type for (self: Object): nullable MType */
val* VIRTUAL_typing__AAttrFormExpr__attr_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__AAttrFormExpr__attr_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#attr_type= for (self: AAttrFormExpr, nullable MType) */
void typing__AAttrFormExpr__attr_type_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AAttrFormExpr___64dattr_type].val = p0; /* @attr_type on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method typing#AAttrFormExpr#attr_type= for (self: Object, nullable MType) */
void VIRTUAL_typing__AAttrFormExpr__attr_type_61d(val* self, val* p0) {
typing__AAttrFormExpr__attr_type_61d(self, p0);
RET_LABEL:;
}
/* method typing#AAttrFormExpr#resolve_property for (self: AAttrFormExpr, TypeVisitor) */
void typing__AAttrFormExpr__resolve_property(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : TAttrid */;
val* var5 /* : String */;
val* var_name /* var name: String */;
short int var6 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
val* var20 /* : MType */;
val* var_unsafe_type /* var unsafe_type: MType */;
val* var21 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
val* var22 /* : null */;
short int var23 /* : Bool */;
val* var24 /* : ModelBuilder */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
val* var40 /* : Array[Object] */;
long var41 /* : Int */;
val* var42 /* : NativeArray[Object] */;
val* var43 /* : String */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
val* var47 /* : MModule */;
val* var48 /* : Array[MPropDef] */;
val* var_mpropdefs /* var mpropdefs: Array[MAttributeDef] */;
long var49 /* : Int */;
long var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
val* var55 /* : nullable MType */;
val* var_attr_type /* var attr_type: MType */;
val* var56 /* : AExpr */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
val* var60 /* : MType */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__n_expr]))(self) /* n_expr on <self:AAttrFormExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var) /* visit_expr on <var_v:TypeVisitor>*/;
var_recvtype = var1;
var2 = NULL;
if (var_recvtype == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__n_id]))(self) /* n_id on <self:AAttrFormExpr>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_parser_nodes__Token__text]))(var4) /* text on <var4:TAttrid>*/;
var_name = var5;
/* <var_recvtype:nullable MType(MType)> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(cltype >= var_recvtype->type->table_size) {
var6 = 0;
} else {
var6 = var_recvtype->type->type_table[cltype] == idtype;
}
if (var6){
if (varonce) {
var7 = varonce;
} else {
var8 = "Error: Attribute \'";
var9 = 18;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = "\' access on \'null\'.";
var14 = 19;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 3;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var7;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var12;
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var19) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var20 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__anchor_to]))(var_v, var_recvtype) /* anchor_to on <var_v:TypeVisitor>*/;
var_unsafe_type = var20;
var21 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__try_get_mproperty_by_name2]))(var_v, self, var_unsafe_type, var_name) /* try_get_mproperty_by_name2 on <var_v:TypeVisitor>*/;
var_mproperty = var21;
var22 = NULL;
if (var_mproperty == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (var23){
var24 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(var_v) /* modelbuilder on <var_v:TypeVisitor>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "Error: Attribute ";
var28 = 17;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
if (varonce30) {
var31 = varonce30;
} else {
var32 = " doesn\'t exists in ";
var33 = 19;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = ".";
var38 = 1;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
var40 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var40 = array_instance Array[Object] */
var41 = 5;
var42 = NEW_array__NativeArray(var41, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var42)->values[0] = (val*) var26;
((struct instance_array__NativeArray*)var42)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var42)->values[2] = (val*) var31;
((struct instance_array__NativeArray*)var42)->values[3] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var42)->values[4] = (val*) var36;
((void (*)(val*, val*, long))(var40->class->vft[COLOR_array__Array__with_native]))(var40, var42, var41) /* with_native on <var40:Array[Object]>*/;
}
var43 = ((val* (*)(val*))(var40->class->vft[COLOR_string__Object__to_s]))(var40) /* to_s on <var40:Array[Object]>*/;
((void (*)(val*, val*, val*))(var24->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var24, self, var43) /* error on <var24:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
/* <var_mproperty:nullable MProperty(MProperty)> isa MAttribute */
cltype45 = type_model__MAttribute.color;
idtype46 = type_model__MAttribute.id;
if(cltype45 >= var_mproperty->type->table_size) {
var44 = 0;
} else {
var44 = var_mproperty->type->type_table[cltype45] == idtype46;
}
if (!var44) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 1600);
show_backtrace(1);
}
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AAttrFormExpr__mproperty_61d]))(self, var_mproperty) /* mproperty= on <self:AAttrFormExpr>*/;
var47 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__mmodule]))(var_v) /* mmodule on <var_v:TypeVisitor>*/;
var48 = ((val* (*)(val*, val*, val*))(var_mproperty->class->vft[COLOR_model__MProperty__lookup_definitions]))(var_mproperty, var47, var_unsafe_type) /* lookup_definitions on <var_mproperty:nullable MProperty(MAttribute)>*/;
var_mpropdefs = var48;
var49 = ((long (*)(val*))(var_mpropdefs->class->vft[COLOR_abstract_collection__Collection__length]))(var_mpropdefs) /* length on <var_mpropdefs:Array[MAttributeDef]>*/;
var50 = 1;
{ /* Inline kernel#Int#== (var49,var50) */
var53 = var49 == var50;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
if (!var51) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 1604);
show_backtrace(1);
}
var54 = ((val* (*)(val*))(var_mpropdefs->class->vft[COLOR_abstract_collection__Collection__first]))(var_mpropdefs) /* first on <var_mpropdefs:Array[MAttributeDef]>*/;
var_mpropdef = var54;
var55 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MAttributeDef__static_mtype]))(var_mpropdef) /* static_mtype on <var_mpropdef:MAttributeDef>*/;
if (var55 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 1606);
show_backtrace(1);
}
var_attr_type = var55;
var56 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__n_expr]))(self) /* n_expr on <self:AAttrFormExpr>*/;
/* <var56:AExpr> isa ASelfExpr */
cltype58 = type_parser_nodes__ASelfExpr.color;
idtype59 = type_parser_nodes__ASelfExpr.id;
if(cltype58 >= var56->type->table_size) {
var57 = 0;
} else {
var57 = var56->type->type_table[cltype58] == idtype59;
}
var60 = ((val* (*)(val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__resolve_for]))(var_v, var_attr_type, var_recvtype, var57) /* resolve_for on <var_v:TypeVisitor>*/;
var_attr_type = var60;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AAttrFormExpr__attr_type_61d]))(self, var_attr_type) /* attr_type= on <self:AAttrFormExpr>*/;
RET_LABEL:;
}
/* method typing#AAttrFormExpr#resolve_property for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAttrFormExpr__resolve_property(val* self, val* p0) {
typing__AAttrFormExpr__resolve_property(self, p0);
RET_LABEL:;
}
/* method typing#AAttrExpr#accept_typing for (self: AAttrExpr, TypeVisitor) */
void typing__AAttrExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AAttrFormExpr__resolve_property]))(self, var_v) /* resolve_property on <self:AAttrExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AAttrFormExpr__attr_type]))(self) /* attr_type on <self:AAttrExpr>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var) /* mtype= on <self:AAttrExpr>*/;
RET_LABEL:;
}
/* method typing#AAttrExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAttrExpr__accept_typing(val* self, val* p0) {
typing__AAttrExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AAttrAssignExpr#accept_typing for (self: AAttrAssignExpr, TypeVisitor) */
void typing__AAttrAssignExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : AExpr */;
val* var2 /* : nullable MType */;
short int var3 /* : Bool */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AAttrFormExpr__resolve_property]))(self, var_v) /* resolve_property on <self:AAttrAssignExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AAttrFormExpr__attr_type]))(self) /* attr_type on <self:AAttrAssignExpr>*/;
var_mtype = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssignFormExpr__n_value]))(self) /* n_value on <self:AAttrAssignExpr>*/;
var2 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_subtype]))(var_v, var1, var_mtype) /* visit_expr_subtype on <var_v:TypeVisitor>*/;
var2;
var3 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var3) /* is_typed= on <self:AAttrAssignExpr>*/;
RET_LABEL:;
}
/* method typing#AAttrAssignExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAttrAssignExpr__accept_typing(val* self, val* p0) {
typing__AAttrAssignExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AAttrReassignExpr#accept_typing for (self: AAttrReassignExpr, TypeVisitor) */
void typing__AAttrReassignExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable MType */;
short int var4 /* : Bool */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AAttrFormExpr__resolve_property]))(self, var_v) /* resolve_property on <self:AAttrReassignExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AAttrFormExpr__attr_type]))(self) /* attr_type on <self:AAttrReassignExpr>*/;
var_mtype = var;
var1 = NULL;
if (var_mtype == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
goto RET_LABEL;
} else {
}
var3 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_typing__AReassignFormExpr__resolve_reassignment]))(self, var_v, var_mtype, var_mtype) /* resolve_reassignment on <self:AAttrReassignExpr>*/;
var3;
var4 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var4) /* is_typed= on <self:AAttrReassignExpr>*/;
RET_LABEL:;
}
/* method typing#AAttrReassignExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAttrReassignExpr__accept_typing(val* self, val* p0) {
typing__AAttrReassignExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AIssetAttrExpr#accept_typing for (self: AIssetAttrExpr, TypeVisitor) */
void typing__AIssetAttrExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : AExpr */;
val* var4 /* : nullable MType */;
val* var_recvtype /* var recvtype: MType */;
short int var5 /* : Bool */;
val* var6 /* : MType */;
val* var_bound /* var bound: MType */;
short int var7 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : nullable MType */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AAttrFormExpr__resolve_property]))(self, var_v) /* resolve_property on <self:AIssetAttrExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AAttrFormExpr__attr_type]))(self) /* attr_type on <self:AIssetAttrExpr>*/;
var_mtype = var;
var1 = NULL;
if (var_mtype == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
goto RET_LABEL;
} else {
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__n_expr]))(self) /* n_expr on <self:AIssetAttrExpr>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_typing__AExpr__mtype]))(var3) /* mtype on <var3:AExpr>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 1652);
show_backtrace(1);
}
var_recvtype = var4;
var5 = 0;
var6 = ((val* (*)(val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__resolve_for]))(var_v, var_mtype, var_recvtype, var5) /* resolve_for on <var_v:TypeVisitor>*/;
var_bound = var6;
/* <var_bound:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_bound->type->table_size) {
var7 = 0;
} else {
var7 = var_bound->type->type_table[cltype] == idtype;
}
if (var7){
if (varonce) {
var8 = varonce;
} else {
var9 = "Error: isset on a nullable attribute.";
var10 = 37;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var8) /* error on <var_v:TypeVisitor>*/;
} else {
}
var12 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__type_bool]))(var_v, self) /* type_bool on <var_v:TypeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var12) /* mtype= on <self:AIssetAttrExpr>*/;
RET_LABEL:;
}
/* method typing#AIssetAttrExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AIssetAttrExpr__accept_typing(val* self, val* p0) {
typing__AIssetAttrExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#ADebugTypeExpr#accept_typing for (self: ADebugTypeExpr, TypeVisitor) */
void typing__ADebugTypeExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_expr /* var expr: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var_unsafe /* var unsafe: MType */;
val* var5 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var6 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MType */;
val* var_umtype /* var umtype: MType */;
val* var12 /* : ModelBuilder */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
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
val* var37 /* : Array[Object] */;
long var38 /* : Int */;
val* var39 /* : NativeArray[Object] */;
val* var40 /* : String */;
short int var41 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ADebugTypeExpr__n_expr]))(self) /* n_expr on <self:ADebugTypeExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var) /* visit_expr on <var_v:TypeVisitor>*/;
var_expr = var1;
var2 = NULL;
if (var_expr == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__anchor_to]))(var_v, var_expr) /* anchor_to on <var_v:TypeVisitor>*/;
var_unsafe = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ADebugTypeExpr__n_type]))(self) /* n_type on <self:ADebugTypeExpr>*/;
var_ntype = var5;
var6 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__resolve_mtype]))(var_v, var_ntype) /* resolve_mtype on <var_v:TypeVisitor>*/;
var_mtype = var6;
var8 = NULL;
if (var_mtype == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
var_ = var9;
if (var9){
var10 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___33d_61d]))(var_mtype, var_expr) /* != on <var_mtype:nullable MType(MType)>*/;
var7 = var10;
} else {
var7 = var_;
}
if (var7){
var11 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__anchor_to]))(var_v, var_mtype) /* anchor_to on <var_v:TypeVisitor>*/;
var_umtype = var11;
var12 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(var_v) /* modelbuilder on <var_v:TypeVisitor>*/;
if (varonce) {
var13 = varonce;
} else {
var14 = "Found type ";
var15 = 11;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = " (-> ";
var20 = 5;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "), expected ";
var25 = 12;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = " (-> ";
var30 = 5;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = ")";
var35 = 1;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var37 = array_instance Array[Object] */
var38 = 9;
var39 = NEW_array__NativeArray(var38, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var39)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var39)->values[1] = (val*) var_expr;
((struct instance_array__NativeArray*)var39)->values[2] = (val*) var18;
((struct instance_array__NativeArray*)var39)->values[3] = (val*) var_unsafe;
((struct instance_array__NativeArray*)var39)->values[4] = (val*) var23;
((struct instance_array__NativeArray*)var39)->values[5] = (val*) var_mtype;
((struct instance_array__NativeArray*)var39)->values[6] = (val*) var28;
((struct instance_array__NativeArray*)var39)->values[7] = (val*) var_umtype;
((struct instance_array__NativeArray*)var39)->values[8] = (val*) var33;
((void (*)(val*, val*, long))(var37->class->vft[COLOR_array__Array__with_native]))(var37, var39, var38) /* with_native on <var37:Array[Object]>*/;
}
var40 = ((val* (*)(val*))(var37->class->vft[COLOR_string__Object__to_s]))(var37) /* to_s on <var37:Array[Object]>*/;
((void (*)(val*, val*, val*))(var12->class->vft[COLOR_modelbuilder__ModelBuilder__warning]))(var12, self, var40) /* warning on <var12:ModelBuilder>*/;
} else {
}
var41 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var41) /* is_typed= on <self:ADebugTypeExpr>*/;
RET_LABEL:;
}
/* method typing#ADebugTypeExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ADebugTypeExpr__accept_typing(val* self, val* p0) {
typing__ADebugTypeExpr__accept_typing(self, p0);
RET_LABEL:;
}
