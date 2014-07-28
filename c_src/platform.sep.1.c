#include "platform.sep.0.h"
/* method platform#ToolContext#platform_from_name for (self: ToolContext, String): nullable Platform */
val* platform__ToolContext__platform_from_name(val* self, val* p0) {
val* var /* : nullable Platform */;
val* var_name /* var name: String */;
val* var1 /* : null */;
var_name = p0;
var1 = NULL;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method platform#ToolContext#platform_from_name for (self: Object, String): nullable Platform */
val* VIRTUAL_platform__ToolContext__platform_from_name(val* self, val* p0) {
val* var /* : nullable Platform */;
val* var1 /* : nullable Platform */;
var1 = platform__ToolContext__platform_from_name(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method platform#PlatformPhase#process_annotated_node for (self: PlatformPhase, ANode, AAnnotation) */
void platform__PlatformPhase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_nmoduledecl /* var nmoduledecl: ANode */;
val* var_nat /* var nat: AAnnotation */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var_annotation_name /* var annotation_name: String */;
val* var4 /* : String */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : ToolContext */;
val* var13 /* : ToolContext */;
val* var14 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
short int var15 /* : Bool */;
int cltype;
int idtype;
short int var16 /* : Bool */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : String */;
val* var31 /* : ANodes[AAtArg] */;
val* var33 /* : ANodes[AAtArg] */;
val* var_args /* var args: ANodes[AAtArg] */;
long var34 /* : Int */;
long var35 /* : Int */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name;
short int var41 /* : Bool */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
val* var52 /* : Array[Object] */;
long var53 /* : Int */;
val* var54 /* : NativeArray[Object] */;
val* var55 /* : String */;
short int var56 /* : Bool */;
val* var57 /* : AModuleName */;
val* var58 /* : String */;
val* var_platform_name /* var platform_name: nullable Object */;
val* var59 /* : nullable Object */;
val* var60 /* : nullable String */;
val* var61 /* : null */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
val* var74 /* : Array[Object] */;
long var75 /* : Int */;
val* var76 /* : NativeArray[Object] */;
val* var77 /* : String */;
val* var_format_error /* var format_error: String */;
val* var78 /* : nullable ANode */;
val* var80 /* : nullable ANode */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
val* var_nmodule /* var nmodule: AModule */;
val* var85 /* : nullable MModule */;
val* var87 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
val* var88 /* : ToolContext */;
val* var90 /* : ToolContext */;
val* var91 /* : nullable Platform */;
val* var_platform /* var platform: nullable Platform */;
val* var92 /* : null */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
val* var95 /* : ToolContext */;
val* var97 /* : ToolContext */;
val* var98 /* : Location */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : FlatString */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
long var107 /* : Int */;
val* var108 /* : FlatString */;
val* var109 /* : Array[Object] */;
long var110 /* : Int */;
val* var111 /* : NativeArray[Object] */;
val* var112 /* : String */;
val* var113 /* : nullable Platform */;
val* var_previous_target_platform /* var previous_target_platform: nullable Platform */;
short int var114 /* : Bool */;
val* var115 /* : null */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var_ /* var : Bool */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : FlatString */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : FlatString */;
val* var130 /* : Array[Object] */;
long var131 /* : Int */;
val* var132 /* : NativeArray[Object] */;
val* var133 /* : String */;
var_nmoduledecl = p0;
var_nat = p1;
if (varonce) {
var = varonce;
} else {
var1 = "platform";
var2 = 8;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
var_annotation_name = var;
{
var4 = annotation__AAnnotation__name(var_nat);
}
{
{ /* Inline kernel#Object#!= (var4,var_annotation_name) on <var4:String> */
var_other = var_annotation_name;
{
var9 = ((short int (*)(val*, val*))(var4->class->vft[COLOR_kernel__Object___61d_61d]))(var4, var_other) /* == on <var4:String>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
goto RET_LABEL;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:PlatformPhase> */
var13 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:PlatformPhase> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 145);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = modelbuilder__ToolContext__modelbuilder(var11);
}
var_modelbuilder = var14;
/* <var_nmoduledecl:ANode> isa AModuledecl */
cltype = type_parser_nodes__AModuledecl.color;
idtype = type_parser_nodes__AModuledecl.id;
if(cltype >= var_nmoduledecl->type->table_size) {
var15 = 0;
} else {
var15 = var_nmoduledecl->type->type_table[cltype] == idtype;
}
var16 = !var15;
if (var16){
if (varonce17) {
var18 = varonce17;
} else {
var19 = "Syntax error: only the declaration of modules may use \"";
var20 = 55;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "\".";
var25 = 2;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 3;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var18;
((struct instance_array__NativeArray*)var29)->values[1] = (val*) var_annotation_name;
((struct instance_array__NativeArray*)var29)->values[2] = (val*) var23;
{
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val*))(var27->class->vft[COLOR_string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_nat, var30); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_nat) on <var_nat:AAnnotation> */
var33 = var_nat->attrs[COLOR_parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_nat:AAnnotation> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2426);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
var_args = var31;
{
var34 = parser_nodes__ANodes__length(var_args);
}
var35 = 1;
{
{ /* Inline kernel#Int#> (var34,var35) on <var34:Int> */
/* Covariant cast for argument 0 (i) <var35:Int> isa OTHER */
/* <var35:Int> isa OTHER */
var38 = 1; /* easy <var35:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var41 = var34 > var35;
var36 = var41;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (var36){
if (varonce42) {
var43 = varonce42;
} else {
var44 = "Syntax error: \"";
var45 = 15;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = "\" expects at most a single argument.";
var50 = 36;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var52 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var52 = array_instance Array[Object] */
var53 = 3;
var54 = NEW_array__NativeArray(var53, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var54)->values[0] = (val*) var43;
((struct instance_array__NativeArray*)var54)->values[1] = (val*) var_annotation_name;
((struct instance_array__NativeArray*)var54)->values[2] = (val*) var48;
{
((void (*)(val*, val*, long))(var52->class->vft[COLOR_array__Array__with_native]))(var52, var54, var53) /* with_native on <var52:Array[Object]>*/;
}
}
{
var55 = ((val* (*)(val*))(var52->class->vft[COLOR_string__Object__to_s]))(var52) /* to_s on <var52:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_nat, var55); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
{
var56 = parser_nodes__ANodes__is_empty(var_args);
}
if (var56){
{
var57 = parser_nodes__AModuledecl__n_name(var_nmoduledecl);
}
{
var58 = modelize_property__Prod__collect_text(var57);
}
var_platform_name = var58;
} else {
{
var59 = abstract_collection__SequenceRead__first(var_args);
}
{
var60 = annotation__AAtArg__as_string(var59);
}
var_platform_name = var60;
var61 = NULL;
if (var_platform_name == NULL) {
var62 = 1; /* is null */
} else {
var62 = 0; /* arg is null but recv is not */
}
if (0) {
var63 = string__FlatString___61d_61d(var_platform_name, var61);
var62 = var63;
}
if (var62){
if (varonce64) {
var65 = varonce64;
} else {
var66 = "Syntax error: \"";
var67 = 15;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = "\" expects its argument to be the name of the target platform as a String literal.";
var72 = 81;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
var74 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var74 = array_instance Array[Object] */
var75 = 3;
var76 = NEW_array__NativeArray(var75, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var76)->values[0] = (val*) var65;
((struct instance_array__NativeArray*)var76)->values[1] = (val*) var_annotation_name;
((struct instance_array__NativeArray*)var76)->values[2] = (val*) var70;
{
((void (*)(val*, val*, long))(var74->class->vft[COLOR_array__Array__with_native]))(var74, var76, var75) /* with_native on <var74:Array[Object]>*/;
}
}
{
var77 = ((val* (*)(val*))(var74->class->vft[COLOR_string__Object__to_s]))(var74) /* to_s on <var74:Array[Object]>*/;
}
var_format_error = var77;
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_nat, var_format_error); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
}
}
{
{ /* Inline parser_nodes#ANode#parent (var_nmoduledecl) on <var_nmoduledecl:ANode(AModuledecl)> */
var80 = var_nmoduledecl->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <var_nmoduledecl:ANode(AModuledecl)> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
/* <var78:nullable ANode> isa AModule */
cltype82 = type_parser_nodes__AModule.color;
idtype83 = type_parser_nodes__AModule.id;
if(var78 == NULL) {
var81 = 0;
} else {
if(cltype82 >= var78->type->table_size) {
var81 = 0;
} else {
var81 = var78->type->type_table[cltype82] == idtype83;
}
}
if (unlikely(!var81)) {
var_class_name84 = var78 == NULL ? "null" : var78->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", "src/platform.nit", 66);
show_backtrace(1);
}
var_nmodule = var78;
{
{ /* Inline modelbuilder#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var87 = var_nmodule->attrs[COLOR_modelbuilder__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
var_mmodule = var85;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:PlatformPhase> */
var90 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:PlatformPhase> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 145);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
var91 = platform__ToolContext__platform_from_name(var88, var_platform_name);
}
var_platform = var91;
var92 = NULL;
if (var_platform == NULL) {
var93 = 1; /* is null */
} else {
var93 = 0; /* arg is null but recv is not */
}
if (0) {
var94 = ((short int (*)(val*, val*))(var_platform->class->vft[COLOR_kernel__Object___61d_61d]))(var_platform, var92) /* == on <var_platform:nullable Platform>*/;
var93 = var94;
}
if (var93){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:PlatformPhase> */
var97 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:PlatformPhase> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 145);
show_backtrace(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
{
var98 = parser_nodes__ANode__location(var_nat);
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = "Error: target platform \"";
var102 = 24;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
if (varonce104) {
var105 = varonce104;
} else {
var106 = "\" unknown";
var107 = 9;
var108 = string__NativeString__to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
var109 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var109 = array_instance Array[Object] */
var110 = 3;
var111 = NEW_array__NativeArray(var110, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var111)->values[0] = (val*) var100;
((struct instance_array__NativeArray*)var111)->values[1] = (val*) var_platform_name;
((struct instance_array__NativeArray*)var111)->values[2] = (val*) var105;
{
((void (*)(val*, val*, long))(var109->class->vft[COLOR_array__Array__with_native]))(var109, var111, var110) /* with_native on <var109:Array[Object]>*/;
}
}
{
var112 = ((val* (*)(val*))(var109->class->vft[COLOR_string__Object__to_s]))(var109) /* to_s on <var109:Array[Object]>*/;
}
{
toolcontext__ToolContext__error(var95, var98, var112); /* Direct call toolcontext#ToolContext#error on <var95:ToolContext>*/
}
goto RET_LABEL;
} else {
}
if (var_mmodule == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/platform.nit", 75);
show_backtrace(1);
} else {
var113 = platform__MModule__target_platform(var_mmodule);
}
var_previous_target_platform = var113;
var115 = NULL;
if (var_previous_target_platform == NULL) {
var116 = 0; /* is null */
} else {
var116 = 1; /* arg is null and recv is not */
}
if (0) {
var117 = ((short int (*)(val*, val*))(var_previous_target_platform->class->vft[COLOR_kernel__Object___33d_61d]))(var_previous_target_platform, var115) /* != on <var_previous_target_platform:nullable Platform>*/;
var116 = var117;
}
var_ = var116;
if (var116){
{
var119 = ((short int (*)(val*, val*))(var_previous_target_platform->class->vft[COLOR_kernel__Object___33d_61d]))(var_previous_target_platform, var_platform) /* != on <var_previous_target_platform:nullable Platform(Platform)>*/;
var118 = var119;
}
var114 = var118;
} else {
var114 = var_;
}
if (var114){
if (varonce120) {
var121 = varonce120;
} else {
var122 = "Syntax error: a target platform has already been defined as \"";
var123 = 61;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
if (varonce125) {
var126 = varonce125;
} else {
var127 = "\".";
var128 = 2;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
var130 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var130 = array_instance Array[Object] */
var131 = 3;
var132 = NEW_array__NativeArray(var131, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var132)->values[0] = (val*) var121;
((struct instance_array__NativeArray*)var132)->values[1] = (val*) var_previous_target_platform;
((struct instance_array__NativeArray*)var132)->values[2] = (val*) var126;
{
((void (*)(val*, val*, long))(var130->class->vft[COLOR_array__Array__with_native]))(var130, var132, var131) /* with_native on <var130:Array[Object]>*/;
}
}
{
var133 = ((val* (*)(val*))(var130->class->vft[COLOR_string__Object__to_s]))(var130) /* to_s on <var130:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_nat, var133); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
if (var_mmodule == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/platform.nit", 80);
show_backtrace(1);
} else {
{ /* Inline platform#MModule#local_target_platform= (var_mmodule,var_platform) on <var_mmodule:nullable MModule> */
if (unlikely(var_mmodule == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/platform.nit", 85);
show_backtrace(1);
}
var_mmodule->attrs[COLOR_platform__MModule___local_target_platform].val = var_platform; /* _local_target_platform on <var_mmodule:nullable MModule> */
RET_LABEL134:(void)0;
}
}
RET_LABEL:;
}
/* method platform#PlatformPhase#process_annotated_node for (self: Object, ANode, AAnnotation) */
void VIRTUAL_platform__PlatformPhase__process_annotated_node(val* self, val* p0, val* p1) {
platform__PlatformPhase__process_annotated_node(self, p0, p1); /* Direct call platform#PlatformPhase#process_annotated_node on <self:Object(PlatformPhase)>*/
RET_LABEL:;
}
/* method platform#MModule#local_target_platform for (self: MModule): nullable Platform */
val* platform__MModule__local_target_platform(val* self) {
val* var /* : nullable Platform */;
val* var1 /* : nullable Platform */;
var1 = self->attrs[COLOR_platform__MModule___local_target_platform].val; /* _local_target_platform on <self:MModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method platform#MModule#local_target_platform for (self: Object): nullable Platform */
val* VIRTUAL_platform__MModule__local_target_platform(val* self) {
val* var /* : nullable Platform */;
val* var1 /* : nullable Platform */;
val* var3 /* : nullable Platform */;
{ /* Inline platform#MModule#local_target_platform (self) on <self:Object(MModule)> */
var3 = self->attrs[COLOR_platform__MModule___local_target_platform].val; /* _local_target_platform on <self:Object(MModule)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method platform#MModule#local_target_platform= for (self: MModule, nullable Platform) */
void platform__MModule__local_target_platform_61d(val* self, val* p0) {
self->attrs[COLOR_platform__MModule___local_target_platform].val = p0; /* _local_target_platform on <self:MModule> */
RET_LABEL:;
}
/* method platform#MModule#local_target_platform= for (self: Object, nullable Platform) */
void VIRTUAL_platform__MModule__local_target_platform_61d(val* self, val* p0) {
{ /* Inline platform#MModule#local_target_platform= (self,p0) on <self:Object(MModule)> */
self->attrs[COLOR_platform__MModule___local_target_platform].val = p0; /* _local_target_platform on <self:Object(MModule)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method platform#MModule#target_platform for (self: MModule): nullable Platform */
val* platform__MModule__target_platform(val* self) {
val* var /* : nullable Platform */;
val* var1 /* : nullable Platform */;
val* var3 /* : nullable Platform */;
val* var_ltp /* var ltp: nullable Platform */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : POSetElement[MModule] */;
val* var9 /* : POSetElement[MModule] */;
val* var10 /* : Collection[Object] */;
val* var11 /* : Iterator[nullable Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
val* var14 /* : nullable Platform */;
val* var16 /* : nullable Platform */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : null */;
{
{ /* Inline platform#MModule#local_target_platform (self) on <self:MModule> */
var3 = self->attrs[COLOR_platform__MModule___local_target_platform].val; /* _local_target_platform on <self:MModule> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ltp = var1;
var4 = NULL;
if (var_ltp == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int (*)(val*, val*))(var_ltp->class->vft[COLOR_kernel__Object___33d_61d]))(var_ltp, var4) /* != on <var_ltp:nullable Platform>*/;
var5 = var6;
}
if (var5){
var = var_ltp;
goto RET_LABEL;
} else {
}
{
{ /* Inline mmodule#MModule#in_importation (self) on <self:MModule> */
var9 = self->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <self:MModule> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 101);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = poset__POSetElement__greaters(var7);
}
{
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Collection__iterator]))(var10) /* iterator on <var10:Collection[Object](Collection[MModule])>*/;
}
for(;;) {
{
var12 = ((short int (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var11) /* is_ok on <var11:Iterator[nullable Object]>*/;
}
if(!var12) break;
{
var13 = ((val* (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__item]))(var11) /* item on <var11:Iterator[nullable Object]>*/;
}
var_mmodule = var13;
{
{ /* Inline platform#MModule#local_target_platform (var_mmodule) on <var_mmodule:MModule> */
var16 = var_mmodule->attrs[COLOR_platform__MModule___local_target_platform].val; /* _local_target_platform on <var_mmodule:MModule> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_ltp = var14;
var17 = NULL;
if (var_ltp == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
var19 = ((short int (*)(val*, val*))(var_ltp->class->vft[COLOR_kernel__Object___33d_61d]))(var_ltp, var17) /* != on <var_ltp:nullable Platform>*/;
var18 = var19;
}
if (var18){
var = var_ltp;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var11->class->vft[COLOR_abstract_collection__Iterator__next]))(var11) /* next on <var11:Iterator[nullable Object]>*/;
}
}
BREAK_label: (void)0;
var20 = NULL;
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method platform#MModule#target_platform for (self: Object): nullable Platform */
val* VIRTUAL_platform__MModule__target_platform(val* self) {
val* var /* : nullable Platform */;
val* var1 /* : nullable Platform */;
var1 = platform__MModule__target_platform(self);
var = var1;
RET_LABEL:;
return var;
}
/* method platform#Platform#supports_libunwind for (self: Platform): Bool */
short int platform__Platform__supports_libunwind(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method platform#Platform#supports_libunwind for (self: Object): Bool */
short int VIRTUAL_platform__Platform__supports_libunwind(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = platform__Platform__supports_libunwind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method platform#Platform#supports_libgc for (self: Platform): Bool */
short int platform__Platform__supports_libgc(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method platform#Platform#supports_libgc for (self: Object): Bool */
short int VIRTUAL_platform__Platform__supports_libgc(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = platform__Platform__supports_libgc(self);
var = var1;
RET_LABEL:;
return var;
}
/* method platform#Platform#no_main for (self: Platform): Bool */
short int platform__Platform__no_main(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method platform#Platform#no_main for (self: Object): Bool */
short int VIRTUAL_platform__Platform__no_main(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = platform__Platform__no_main(self);
var = var1;
RET_LABEL:;
return var;
}
