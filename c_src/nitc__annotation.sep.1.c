#include "nitc__annotation.sep.0.h"
/* method annotation$Prod$get_single_annotation for (self: Prod, String, ModelBuilder): nullable AAnnotation */
val* nitc__annotation___Prod___get_single_annotation(val* self, val* p0, val* p1) {
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
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Bool */;
val* var19 /* : nullable Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Bool */;
val* var27 /* : nullable Bool */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Bool */;
val* var35 /* : nullable Bool */;
val* var36 /* : nullable Object */;
val* var37 /* : Location */;
val* var39 /* : Location */;
long var40 /* : Int */;
long var42 /* : Int */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var45 /* : nullable Object */;
var_name = p0;
var_modelbuilder = p1;
{
var1 = nitc___nitc__Prod___get_annotations(self, var_name);
}
var_res = var1;
{
var2 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_res);
}
if (var2){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline array$AbstractArrayRead$length (var_res) on <var_res:Array[AAnnotation]> */
var5 = var_res->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_res:Array[AAnnotation]> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var3,1l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
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
var10 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_res, 1l);
}
if (unlikely(varonce==NULL)) {
var11 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Syntax Error: multiple `";
var16 = (val*)(24l<<2|1);
var17 = (val*)(24l<<2|1);
var18 = (val*)((long)(0)<<2|3);
var19 = (val*)((long)(0)<<2|3);
var15 = core__flat___CString___to_s_unsafe(var14, var16, var17, var18, var19);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[0]=var13;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "`. A previous one is defined line ";
var24 = (val*)(34l<<2|1);
var25 = (val*)(34l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var11)->values[2]=var21;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = ".";
var32 = (val*)(1l<<2|1);
var33 = (val*)(1l<<2|1);
var34 = (val*)((long)(0)<<2|3);
var35 = (val*)((long)(0)<<2|3);
var31 = core__flat___CString___to_s_unsafe(var30, var32, var33, var34, var35);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var11)->values[4]=var29;
} else {
var11 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var11)->values[1]=var_name;
{
var36 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_res, 0l);
}
{
{ /* Inline parser_nodes$ANode$location (var36) on <var36:nullable Object(AAnnotation)> */
var39 = var36->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var36:nullable Object(AAnnotation)> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline location$Location$line_start (var37) on <var37:Location> */
var42 = var37->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var37:Location> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var43 = core__flat___Int___core__abstract_text__Object__to_s(var40);
((struct instance_core__NativeArray*)var11)->values[3]=var43;
{
var44 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var10, var44); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
var45 = core___core__SequenceRead___Collection__first(var_res);
}
var = var45;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation$AAnnotation$arg_as_string for (self: AAnnotation, ModelBuilder): nullable String */
val* nitc__annotation___AAnnotation___arg_as_string(val* self, val* p0) {
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
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Bool */;
val* var23 /* : nullable Bool */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
val* var32 /* : String */;
val* var33 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline parser_nodes$AAnnotation$n_args (self) on <self:AAnnotation> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_args = var1;
{
var4 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var_args);
}
{
{ /* Inline kernel$Int$== (var4,1l) on <var4:Int> */
var7 = var4 == 1l;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var8 = core___core__SequenceRead___Collection__first(var_args);
}
{
var9 = nitc__literal___AExpr___as_string(var8);
}
var_arg = var9;
if (var_arg == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_arg,((val*)NULL)) on <var_arg:nullable String> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var_arg->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_arg, var_other); /* == on <var_arg:nullable String(String)>*/
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
var15 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Syntax Error: `";
var20 = (val*)(15l<<2|1);
var21 = (val*)(15l<<2|1);
var22 = (val*)((long)(0)<<2|3);
var23 = (val*)((long)(0)<<2|3);
var19 = core__flat___CString___to_s_unsafe(var18, var20, var21, var22, var23);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var15)->values[0]=var17;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "` expects a single String as argument.";
var28 = (val*)(38l<<2|1);
var29 = (val*)(38l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var15)->values[2]=var25;
} else {
var15 = varonce;
varonce = NULL;
}
{
var32 = nitc___nitc__AAnnotation___name(self);
}
((struct instance_core__NativeArray*)var15)->values[1]=var32;
{
var33 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce = var15;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var33); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation$AAnnotation$arg_as_id for (self: AAnnotation, ModelBuilder): nullable String */
val* nitc__annotation___AAnnotation___arg_as_id(val* self, val* p0) {
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
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Bool */;
val* var23 /* : nullable Bool */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
val* var32 /* : String */;
val* var33 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline parser_nodes$AAnnotation$n_args (self) on <self:AAnnotation> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_args = var1;
{
var4 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var_args);
}
{
{ /* Inline kernel$Int$== (var4,1l) on <var4:Int> */
var7 = var4 == 1l;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var8 = core___core__SequenceRead___Collection__first(var_args);
}
{
var9 = nitc__parser_work___AExpr___as_id(var8);
}
var_arg = var9;
if (var_arg == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_arg,((val*)NULL)) on <var_arg:nullable String> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var_arg->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_arg, var_other); /* == on <var_arg:nullable String(String)>*/
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
var15 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Syntax Error: `";
var20 = (val*)(15l<<2|1);
var21 = (val*)(15l<<2|1);
var22 = (val*)((long)(0)<<2|3);
var23 = (val*)((long)(0)<<2|3);
var19 = core__flat___CString___to_s_unsafe(var18, var20, var21, var22, var23);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var15)->values[0]=var17;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "` expects a single identifier as argument.";
var28 = (val*)(42l<<2|1);
var29 = (val*)(42l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var15)->values[2]=var25;
} else {
var15 = varonce;
varonce = NULL;
}
{
var32 = nitc___nitc__AAnnotation___name(self);
}
((struct instance_core__NativeArray*)var15)->values[1]=var32;
{
var33 = ((val*(*)(val* self))(var15->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var15); /* native_to_s on <var15:NativeArray[String]>*/
}
varonce = var15;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var33); /* Direct call modelbuilder_base$ModelBuilder$error on <var_modelbuilder:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
