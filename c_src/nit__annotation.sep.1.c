#include "nit__annotation.sep.0.h"
/* method annotation#Prod#get_single_annotation for (self: Prod, String, ModelBuilder): nullable AAnnotation */
val* nit__annotation___Prod___get_single_annotation(val* self, val* p0, val* p1) {
val* var /* : nullable AAnnotation */;
val* var_name /* var name: String */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : Array[AAnnotation] */;
val* var_res /* var res: Array[AAnnotation] */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var11 /* : NativeArray[String] */;
static val* varonce;
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
val* var24 /* : nullable Object */;
val* var25 /* : Location */;
val* var27 /* : Location */;
long var28 /* : Int */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var33 /* : nullable Object */;
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
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_res) on <var_res:Array[AAnnotation]> */
var5 = var_res->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_res:Array[AAnnotation]> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var3,1l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var9 = var3 > 1l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
{
var10 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_res, 1l);
}
if (unlikely(varonce==NULL)) {
var11 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Syntax Error: multiple `";
var15 = standard___standard__NativeString___to_s_with_length(var14, 24l);
var13 = var15;
varonce12 = var13;
}
((struct instance_standard__NativeArray*)var11)->values[0]=var13;
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "`. A previous one is defined line ";
var19 = standard___standard__NativeString___to_s_with_length(var18, 34l);
var17 = var19;
varonce16 = var17;
}
((struct instance_standard__NativeArray*)var11)->values[2]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = ".";
var23 = standard___standard__NativeString___to_s_with_length(var22, 1l);
var21 = var23;
varonce20 = var21;
}
((struct instance_standard__NativeArray*)var11)->values[4]=var21;
} else {
var11 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var11)->values[1]=var_name;
{
var24 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_res, 0l);
}
{
{ /* Inline parser_nodes#ANode#location (var24) on <var24:nullable Object(AAnnotation)> */
var27 = var24->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var24:nullable Object(AAnnotation)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
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
var31 = standard__string___Int___Object__to_s(var28);
((struct instance_standard__NativeArray*)var11)->values[3]=var31;
{
var32 = ((val*(*)(val* self))(var11->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
nit___nit__ModelBuilder___error(var_modelbuilder, var10, var32); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
var33 = standard___standard__SequenceRead___Collection__first(var_res);
}
var = var33;
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
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var9 /* : nullable String */;
val* var_arg /* var arg: nullable String */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : NativeArray[String] */;
static val* varonce;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
val* var24 /* : String */;
val* var25 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline parser_nodes#AAnnotation#n_args (self) on <self:AAnnotation> */
var3 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2988);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_args = var1;
{
var4 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var_args);
}
{
{ /* Inline kernel#Int#== (var4,1l) on <var4:Int> */
var7 = var4 == 1l;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var8 = standard___standard__SequenceRead___Collection__first(var_args);
}
{
var9 = nit__literal___AExpr___as_string(var8);
}
var_arg = var9;
if (var_arg == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_arg,((val*)NULL)) on <var_arg:nullable String> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var_arg->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_arg, var_other); /* == on <var_arg:nullable String(String)>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
var = var_arg;
goto RET_LABEL;
} else {
}
} else {
}
if (unlikely(varonce==NULL)) {
var15 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Syntax Error: `";
var19 = standard___standard__NativeString___to_s_with_length(var18, 15l);
var17 = var19;
varonce16 = var17;
}
((struct instance_standard__NativeArray*)var15)->values[0]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "` expects a single String as argument.";
var23 = standard___standard__NativeString___to_s_with_length(var22, 38l);
var21 = var23;
varonce20 = var21;
}
((struct instance_standard__NativeArray*)var15)->values[2]=var21;
} else {
var15 = varonce;
varonce = NULL;
}
{
var24 = nit___nit__AAnnotation___name(self);
}
((struct instance_standard__NativeArray*)var15)->values[1]=var24;
{
var25 = ((val*(*)(val* self))(var15->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce = var15;
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var25); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var = ((val*)NULL);
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
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var9 /* : nullable String */;
val* var_arg /* var arg: nullable String */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : NativeArray[String] */;
static val* varonce;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : FlatString */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
val* var24 /* : String */;
val* var25 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline parser_nodes#AAnnotation#n_args (self) on <self:AAnnotation> */
var3 = self->attrs[COLOR_nit__parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2988);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_args = var1;
{
var4 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var_args);
}
{
{ /* Inline kernel#Int#== (var4,1l) on <var4:Int> */
var7 = var4 == 1l;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var8 = standard___standard__SequenceRead___Collection__first(var_args);
}
{
var9 = nit__literal___AExpr___as_id(var8);
}
var_arg = var9;
if (var_arg == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_arg,((val*)NULL)) on <var_arg:nullable String> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var_arg->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_arg, var_other); /* == on <var_arg:nullable String(String)>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
var = var_arg;
goto RET_LABEL;
} else {
}
} else {
}
if (unlikely(varonce==NULL)) {
var15 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Syntax Error: `";
var19 = standard___standard__NativeString___to_s_with_length(var18, 15l);
var17 = var19;
varonce16 = var17;
}
((struct instance_standard__NativeArray*)var15)->values[0]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "` expects a single identifier as argument.";
var23 = standard___standard__NativeString___to_s_with_length(var22, 42l);
var21 = var23;
varonce20 = var21;
}
((struct instance_standard__NativeArray*)var15)->values[2]=var21;
} else {
var15 = varonce;
varonce = NULL;
}
{
var24 = nit___nit__AAnnotation___name(self);
}
((struct instance_standard__NativeArray*)var15)->values[1]=var24;
{
var25 = ((val*(*)(val* self))(var15->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce = var15;
{
nit___nit__ModelBuilder___error(var_modelbuilder, self, var25); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
