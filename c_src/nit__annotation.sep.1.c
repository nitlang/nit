#include "nit__annotation.sep.0.h"
/* method annotation#Prod#get_single_annotation for (self: Prod, String, ModelBuilder): nullable AAnnotation */
val* nit__annotation___Prod___get_single_annotation(val* self, val* p0, val* p1) {
val* var /* : nullable AAnnotation */;
val* var_name /* var name: String */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : Array[AAnnotation] */;
val* var_res /* var res: Array[AAnnotation] */;
short int var2 /* : Bool */;
val* var3 /* : null */;
long var4 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
long var12 /* : Int */;
val* var13 /* : nullable Object */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : FlatString */;
long var23 /* : Int */;
val* var24 /* : nullable Object */;
val* var25 /* : Location */;
val* var27 /* : Location */;
long var28 /* : Int */;
long var30 /* : Int */;
val* var31 /* : Array[Object] */;
long var32 /* : Int */;
val* var33 /* : NativeArray[Object] */;
val* var34 /* : Object */;
val* var35 /* : String */;
val* var36 /* : nullable Object */;
var_name = p0;
var_modelbuilder = p1;
{
var1 = nit___nit__Prod___get_annotations(self, var_name);
}
var_res = var1;
{
var2 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_res);
}
if (var2){
var3 = NULL;
var = var3;
goto RET_LABEL;
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_res) on <var_res:Array[AAnnotation]> */
var6 = var_res->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_res:Array[AAnnotation]> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = 1;
{
{ /* Inline kernel#Int#> (var4,var7) on <var4:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var11 = var4 > var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var12 = 1;
{
var13 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_res, var12);
}
if (varonce) {
var14 = varonce;
} else {
var15 = "Error: multiple annotation `";
var16 = 28;
var17 = standard___standard__NativeString___to_s_with_length(var15, var16);
var14 = var17;
varonce = var14;
}
if (varonce18) {
var19 = varonce18;
} else {
var20 = "`. A previous one is defined line ";
var21 = 34;
var22 = standard___standard__NativeString___to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = 0;
{
var24 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_res, var23);
}
{
{ /* Inline parser_nodes#ANode#location (var24) on <var24:nullable Object(AAnnotation)> */
var27 = var24->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var24:nullable Object(AAnnotation)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var25) on <var25:Location> */
var30 = var25->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <var25:Location> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
var31 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var31 = array_instance Array[Object] */
var32 = 4;
var33 = NEW_standard__NativeArray(var32, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var33)->values[0] = (val*) var14;
((struct instance_standard__NativeArray*)var33)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var33)->values[2] = (val*) var19;
var34 = BOX_standard__Int(var28); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var33)->values[3] = (val*) var34;
{
((void (*)(val* self, val* p0, long p1))(var31->class->vft[COLOR_standard__array__Array__with_native]))(var31, var33, var32) /* with_native on <var31:Array[Object]>*/;
}
}
{
var35 = ((val* (*)(val* self))(var31->class->vft[COLOR_standard__string__Object__to_s]))(var31) /* to_s on <var31:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, var13, var35); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
var36 = standard___standard__SequenceRead___Collection__first(var_res);
}
var = var36;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#AAnnotation#arg_as_string for (self: AAnnotation, ModelBuilder): nullable String */
val* nit__annotation___AAnnotation___arg_as_string(val* self, val* p0) {
val* var /* : nullable String */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var10 /* : nullable String */;
val* var_arg /* var arg: nullable String */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : String */;
val* var31 /* : null */;
var_modelbuilder = p0;
{
{ /* Inline parser_nodes#AAnnotation#n_args (self) on <self:AAnnotation> */
var3 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2552);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_args = var1;
{
var4 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var_args);
}
var5 = 1;
{
{ /* Inline kernel#Int#== (var4,var5) on <var4:Int> */
var8 = var4 == var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
var9 = standard___standard__SequenceRead___Collection__first(var_args);
}
{
var10 = nit__literal___AExpr___as_string(var9);
}
var_arg = var10;
var11 = NULL;
if (var_arg == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_arg,var11) on <var_arg:nullable String> */
var_other = var11;
{
var15 = ((short int (*)(val* self, val* p0))(var_arg->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_arg, var_other) /* == on <var_arg:nullable String(String)>*/;
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
var = var_arg;
goto RET_LABEL;
} else {
}
} else {
}
if (varonce) {
var17 = varonce;
} else {
var18 = "Annotation error: \"";
var19 = 19;
var20 = standard___standard__NativeString___to_s_with_length(var18, var19);
var17 = var20;
varonce = var17;
}
{
var21 = nit___nit__AAnnotation___name(self);
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "\" expects a single String as argument.";
var25 = 38;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 3;
var29 = NEW_standard__NativeArray(var28, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var29)->values[0] = (val*) var17;
((struct instance_standard__NativeArray*)var29)->values[1] = (val*) var21;
((struct instance_standard__NativeArray*)var29)->values[2] = (val*) var23;
{
((void (*)(val* self, val* p0, long p1))(var27->class->vft[COLOR_standard__array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val* self))(var27->class->vft[COLOR_standard__string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var30); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var31 = NULL;
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#AAnnotation#arg_as_id for (self: AAnnotation, ModelBuilder): nullable String */
val* nit__annotation___AAnnotation___arg_as_id(val* self, val* p0) {
val* var /* : nullable String */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var10 /* : nullable String */;
val* var_arg /* var arg: nullable String */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
static val* varonce;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : String */;
val* var31 /* : null */;
var_modelbuilder = p0;
{
{ /* Inline parser_nodes#AAnnotation#n_args (self) on <self:AAnnotation> */
var3 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2552);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_args = var1;
{
var4 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var_args);
}
var5 = 1;
{
{ /* Inline kernel#Int#== (var4,var5) on <var4:Int> */
var8 = var4 == var5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
var9 = standard___standard__SequenceRead___Collection__first(var_args);
}
{
var10 = nit__literal___AExpr___as_id(var9);
}
var_arg = var10;
var11 = NULL;
if (var_arg == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_arg,var11) on <var_arg:nullable String> */
var_other = var11;
{
var15 = ((short int (*)(val* self, val* p0))(var_arg->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_arg, var_other) /* == on <var_arg:nullable String(String)>*/;
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
var = var_arg;
goto RET_LABEL;
} else {
}
} else {
}
if (varonce) {
var17 = varonce;
} else {
var18 = "Annotation error: \"";
var19 = 19;
var20 = standard___standard__NativeString___to_s_with_length(var18, var19);
var17 = var20;
varonce = var17;
}
{
var21 = nit___nit__AAnnotation___name(self);
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "\" expects a single identifier as argument.";
var25 = 42;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 3;
var29 = NEW_standard__NativeArray(var28, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var29)->values[0] = (val*) var17;
((struct instance_standard__NativeArray*)var29)->values[1] = (val*) var21;
((struct instance_standard__NativeArray*)var29)->values[2] = (val*) var23;
{
((void (*)(val* self, val* p0, long p1))(var27->class->vft[COLOR_standard__array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val* self))(var27->class->vft[COLOR_standard__string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var30); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var31 = NULL;
var = var31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
