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
val* var31 /* : ANodes[AExpr] */;
val* var33 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
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
val* var59 /* : AModuleName */;
val* var60 /* : String */;
val* var_platform_name /* var platform_name: nullable Object */;
val* var61 /* : nullable Object */;
val* var62 /* : nullable String */;
val* var63 /* : null */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : FlatString */;
val* var76 /* : Array[Object] */;
long var77 /* : Int */;
val* var78 /* : NativeArray[Object] */;
val* var79 /* : String */;
val* var_format_error /* var format_error: String */;
val* var80 /* : nullable ANode */;
val* var82 /* : nullable ANode */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
val* var_nmodule /* var nmodule: AModule */;
val* var87 /* : nullable MModule */;
val* var89 /* : nullable MModule */;
val* var_mmodule /* var mmodule: nullable MModule */;
val* var90 /* : ToolContext */;
val* var92 /* : ToolContext */;
val* var93 /* : nullable Platform */;
val* var_platform /* var platform: nullable Platform */;
val* var94 /* : null */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
val* var97 /* : ToolContext */;
val* var99 /* : ToolContext */;
val* var100 /* : Location */;
val* var102 /* : Location */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : FlatString */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : FlatString */;
val* var113 /* : Array[Object] */;
long var114 /* : Int */;
val* var115 /* : NativeArray[Object] */;
val* var116 /* : String */;
val* var117 /* : nullable Platform */;
val* var_previous_target_platform /* var previous_target_platform: nullable Platform */;
short int var118 /* : Bool */;
val* var119 /* : null */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
short int var_ /* var : Bool */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : FlatString */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
long var132 /* : Int */;
val* var133 /* : FlatString */;
val* var134 /* : Array[Object] */;
long var135 /* : Int */;
val* var136 /* : NativeArray[Object] */;
val* var137 /* : String */;
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
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 162);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2039);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
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
{ /* Inline parser_nodes#AModuledecl#n_name (var_nmoduledecl) on <var_nmoduledecl:ANode(AModuledecl)> */
var59 = var_nmoduledecl->attrs[COLOR_parser_nodes__AModuledecl___n_name].val; /* _n_name on <var_nmoduledecl:ANode(AModuledecl)> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_name");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 869);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = parser_work__Prod__collect_text(var57);
}
var_platform_name = var60;
} else {
{
var61 = abstract_collection__SequenceRead__first(var_args);
}
{
var62 = annotation__AExpr__as_string(var61);
}
var_platform_name = var62;
var63 = NULL;
if (var_platform_name == NULL) {
var64 = 1; /* is null */
} else {
var64 = 0; /* arg is null but recv is not */
}
if (0) {
var65 = string__FlatString___61d_61d(var_platform_name, var63);
var64 = var65;
}
if (var64){
if (varonce66) {
var67 = varonce66;
} else {
var68 = "Syntax error: \"";
var69 = 15;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
if (varonce71) {
var72 = varonce71;
} else {
var73 = "\" expects its argument to be the name of the target platform as a String literal.";
var74 = 81;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
var76 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 3;
var78 = NEW_array__NativeArray(var77, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var78)->values[0] = (val*) var67;
((struct instance_array__NativeArray*)var78)->values[1] = (val*) var_annotation_name;
((struct instance_array__NativeArray*)var78)->values[2] = (val*) var72;
{
((void (*)(val*, val*, long))(var76->class->vft[COLOR_array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
}
}
{
var79 = ((val* (*)(val*))(var76->class->vft[COLOR_string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
}
var_format_error = var79;
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
var82 = var_nmoduledecl->attrs[COLOR_parser_nodes__ANode___parent].val; /* _parent on <var_nmoduledecl:ANode(AModuledecl)> */
var80 = var82;
RET_LABEL81:(void)0;
}
}
/* <var80:nullable ANode> isa AModule */
cltype84 = type_parser_nodes__AModule.color;
idtype85 = type_parser_nodes__AModule.id;
if(var80 == NULL) {
var83 = 0;
} else {
if(cltype84 >= var80->type->table_size) {
var83 = 0;
} else {
var83 = var80->type->type_table[cltype84] == idtype85;
}
}
if (unlikely(!var83)) {
var_class_name86 = var80 == NULL ? "null" : var80->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name86);
PRINT_ERROR(" (%s:%d)\n", "platform.nit", 67);
show_backtrace(1);
}
var_nmodule = var80;
{
{ /* Inline modelbuilder#AModule#mmodule (var_nmodule) on <var_nmodule:AModule> */
var89 = var_nmodule->attrs[COLOR_modelbuilder__AModule___mmodule].val; /* _mmodule on <var_nmodule:AModule> */
var87 = var89;
RET_LABEL88:(void)0;
}
}
var_mmodule = var87;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:PlatformPhase> */
var92 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:PlatformPhase> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 162);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
var93 = platform__ToolContext__platform_from_name(var90, var_platform_name);
}
var_platform = var93;
var94 = NULL;
if (var_platform == NULL) {
var95 = 1; /* is null */
} else {
var95 = 0; /* arg is null but recv is not */
}
if (0) {
var96 = ((short int (*)(val*, val*))(var_platform->class->vft[COLOR_kernel__Object___61d_61d]))(var_platform, var94) /* == on <var_platform:nullable Platform>*/;
var95 = var96;
}
if (var95){
{
{ /* Inline phase#Phase#toolcontext (self) on <self:PlatformPhase> */
var99 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:PlatformPhase> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 162);
show_backtrace(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
{ /* Inline parser_nodes#ANode#location (var_nat) on <var_nat:AAnnotation> */
var102 = var_nat->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var_nat:AAnnotation> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
if (varonce103) {
var104 = varonce103;
} else {
var105 = "Error: target platform \"";
var106 = 24;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
if (varonce108) {
var109 = varonce108;
} else {
var110 = "\" unknown";
var111 = 9;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
var113 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var113 = array_instance Array[Object] */
var114 = 3;
var115 = NEW_array__NativeArray(var114, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var115)->values[0] = (val*) var104;
((struct instance_array__NativeArray*)var115)->values[1] = (val*) var_platform_name;
((struct instance_array__NativeArray*)var115)->values[2] = (val*) var109;
{
((void (*)(val*, val*, long))(var113->class->vft[COLOR_array__Array__with_native]))(var113, var115, var114) /* with_native on <var113:Array[Object]>*/;
}
}
{
var116 = ((val* (*)(val*))(var113->class->vft[COLOR_string__Object__to_s]))(var113) /* to_s on <var113:Array[Object]>*/;
}
{
toolcontext__ToolContext__error(var97, var100, var116); /* Direct call toolcontext#ToolContext#error on <var97:ToolContext>*/
}
goto RET_LABEL;
} else {
}
if (var_mmodule == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "platform.nit", 76);
show_backtrace(1);
} else {
var117 = platform__MModule__target_platform(var_mmodule);
}
var_previous_target_platform = var117;
var119 = NULL;
if (var_previous_target_platform == NULL) {
var120 = 0; /* is null */
} else {
var120 = 1; /* arg is null and recv is not */
}
if (0) {
var121 = ((short int (*)(val*, val*))(var_previous_target_platform->class->vft[COLOR_kernel__Object___33d_61d]))(var_previous_target_platform, var119) /* != on <var_previous_target_platform:nullable Platform>*/;
var120 = var121;
}
var_ = var120;
if (var120){
{
var123 = ((short int (*)(val*, val*))(var_previous_target_platform->class->vft[COLOR_kernel__Object___33d_61d]))(var_previous_target_platform, var_platform) /* != on <var_previous_target_platform:nullable Platform(Platform)>*/;
var122 = var123;
}
var118 = var122;
} else {
var118 = var_;
}
if (var118){
if (varonce124) {
var125 = varonce124;
} else {
var126 = "Syntax error: a target platform has already been defined as \"";
var127 = 61;
var128 = string__NativeString__to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
if (varonce129) {
var130 = varonce129;
} else {
var131 = "\".";
var132 = 2;
var133 = string__NativeString__to_s_with_length(var131, var132);
var130 = var133;
varonce129 = var130;
}
var134 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var134 = array_instance Array[Object] */
var135 = 3;
var136 = NEW_array__NativeArray(var135, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var136)->values[0] = (val*) var125;
((struct instance_array__NativeArray*)var136)->values[1] = (val*) var_previous_target_platform;
((struct instance_array__NativeArray*)var136)->values[2] = (val*) var130;
{
((void (*)(val*, val*, long))(var134->class->vft[COLOR_array__Array__with_native]))(var134, var136, var135) /* with_native on <var134:Array[Object]>*/;
}
}
{
var137 = ((val* (*)(val*))(var134->class->vft[COLOR_string__Object__to_s]))(var134) /* to_s on <var134:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var_nat, var137); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
if (var_mmodule == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "platform.nit", 81);
show_backtrace(1);
} else {
{ /* Inline platform#MModule#local_target_platform= (var_mmodule,var_platform) on <var_mmodule:nullable MModule> */
if (unlikely(var_mmodule == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "platform.nit", 86);
show_backtrace(1);
}
var_mmodule->attrs[COLOR_platform__MModule___local_target_platform].val = var_platform; /* _local_target_platform on <var_mmodule:nullable MModule> */
RET_LABEL138:(void)0;
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
val* var_ /* var : Collection[MModule] */;
val* var11 /* : Iterator[nullable Object] */;
val* var_12 /* var : Iterator[MModule] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
val* var15 /* : nullable Platform */;
val* var17 /* : nullable Platform */;
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var22 /* : null */;
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
PRINT_ERROR(" (%s:%d)\n", "model/mmodule.nit", 93);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = poset__POSetElement__greaters(var7);
}
var_ = var10;
{
var11 = ((val* (*)(val*))(var_->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_) /* iterator on <var_:Collection[MModule]>*/;
}
var_12 = var11;
for(;;) {
{
var13 = ((short int (*)(val*))(var_12->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_12) /* is_ok on <var_12:Iterator[MModule]>*/;
}
if (var13){
{
var14 = ((val* (*)(val*))(var_12->class->vft[COLOR_abstract_collection__Iterator__item]))(var_12) /* item on <var_12:Iterator[MModule]>*/;
}
var_mmodule = var14;
{
{ /* Inline platform#MModule#local_target_platform (var_mmodule) on <var_mmodule:MModule> */
var17 = var_mmodule->attrs[COLOR_platform__MModule___local_target_platform].val; /* _local_target_platform on <var_mmodule:MModule> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_ltp = var15;
var18 = NULL;
if (var_ltp == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
var20 = ((short int (*)(val*, val*))(var_ltp->class->vft[COLOR_kernel__Object___33d_61d]))(var_ltp, var18) /* != on <var_ltp:nullable Platform>*/;
var19 = var20;
}
if (var19){
var = var_ltp;
goto RET_LABEL;
} else {
}
{
((void (*)(val*))(var_12->class->vft[COLOR_abstract_collection__Iterator__next]))(var_12) /* next on <var_12:Iterator[MModule]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_12) on <var_12:Iterator[MModule]> */
RET_LABEL21:(void)0;
}
}
var22 = NULL;
var = var22;
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
