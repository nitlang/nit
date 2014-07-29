#include "annotation.sep.0.h"
/* method annotation#Prod#get_single_annotation for (self: Prod, String, ModelBuilder): nullable AAnnotation */
val* annotation__Prod__get_single_annotation(val* self, val* p0, val* p1) {
val* var /* : nullable AAnnotation */;
val* var_name /* var name: String */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : Array[AAnnotation] */;
val* var_res /* var res: Array[AAnnotation] */;
short int var2 /* : Bool */;
val* var3 /* : null */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
long var10 /* : Int */;
val* var11 /* : nullable Object */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
long var21 /* : Int */;
val* var22 /* : nullable Object */;
val* var23 /* : Location */;
long var24 /* : Int */;
long var26 /* : Int */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : Object */;
val* var31 /* : String */;
val* var32 /* : nullable Object */;
var_name = p0;
var_modelbuilder = p1;
{
var1 = annotation__Prod__get_annotations(self, var_name);
}
var_res = var1;
{
var2 = array__AbstractArrayRead__is_empty(var_res);
}
if (var2){
var3 = NULL;
var = var3;
goto RET_LABEL;
} else {
}
{
var4 = array__AbstractArrayRead__length(var_res);
}
var5 = 1;
{
{ /* Inline kernel#Int#> (var4,var5) on <var4:Int> */
/* Covariant cast for argument 0 (i) <var5:Int> isa OTHER */
/* <var5:Int> isa OTHER */
var8 = 1; /* easy <var5:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var9 = var4 > var5;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var10 = 1;
{
var11 = array__Array___91d_93d(var_res, var10);
}
if (varonce) {
var12 = varonce;
} else {
var13 = "Error: multiple annotation `";
var14 = 28;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = "`. A previous one is defined line ";
var19 = 34;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = 0;
{
var22 = array__Array___91d_93d(var_res, var21);
}
{
var23 = parser_nodes__ANode__location(var22);
}
{
{ /* Inline location#Location#line_start (var23) on <var23:Location> */
var26 = var23->attrs[COLOR_location__Location___line_start].l; /* _line_start on <var23:Location> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 4;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var12;
((struct instance_array__NativeArray*)var29)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var29)->values[2] = (val*) var17;
var30 = BOX_kernel__Int(var24); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var29)->values[3] = (val*) var30;
{
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var31 = ((val* (*)(val*))(var27->class->vft[COLOR_string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var11, var31); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
var32 = abstract_collection__SequenceRead__first(var_res);
}
var = var32;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#Prod#get_single_annotation for (self: Object, String, ModelBuilder): nullable AAnnotation */
val* VIRTUAL_annotation__Prod__get_single_annotation(val* self, val* p0, val* p1) {
val* var /* : nullable AAnnotation */;
val* var1 /* : nullable AAnnotation */;
var1 = annotation__Prod__get_single_annotation(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method annotation#Prod#get_annotations for (self: Prod, String): Array[AAnnotation] */
val* annotation__Prod__get_annotations(val* self, val* p0) {
val* var /* : Array[AAnnotation] */;
val* var_name /* var name: String */;
val* var1 /* : Array[AAnnotation] */;
val* var_res /* var res: Array[AAnnotation] */;
val* var2 /* : nullable AAnnotations */;
val* var_nas /* var nas: nullable AAnnotations */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : ANodes[AAnnotation] */;
val* var12 /* : ANodes[AAnnotation] */;
val* var13 /* : Iterator[ANode] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_na /* var na: AAnnotation */;
val* var16 /* : String */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other20 /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
var_name = p0;
var1 = NEW_array__Array(&type_array__Arrayparser_nodes__AAnnotation);
{
array__Array__init(var1); /* Direct call array#Array#init on <var1:Array[AAnnotation]>*/
}
var_res = var1;
{
var2 = parser_nodes__Prod__n_annotations(self);
}
var_nas = var2;
var3 = NULL;
if (var_nas == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nas,var3) on <var_nas:nullable AAnnotations> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_nas,var_other) on <var_nas:nullable AAnnotations(AAnnotations)> */
var9 = var_nas == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAnnotations#n_items (var_nas) on <var_nas:nullable AAnnotations(AAnnotations)> */
var12 = var_nas->attrs[COLOR_parser_nodes__AAnnotations___n_items].val; /* _n_items on <var_nas:nullable AAnnotations(AAnnotations)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_items");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2403);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = parser_nodes__ANodes__iterator(var10);
}
for(;;) {
{
var14 = ((short int (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var13) /* is_ok on <var13:Iterator[ANode]>*/;
}
if(!var14) break;
{
var15 = ((val* (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__item]))(var13) /* item on <var13:Iterator[ANode]>*/;
}
var_na = var15;
{
var16 = annotation__AAnnotation__name(var_na);
}
{
{ /* Inline kernel#Object#!= (var16,var_name) on <var16:String> */
var_other20 = var_name;
{
var22 = ((short int (*)(val*, val*))(var16->class->vft[COLOR_kernel__Object___61d_61d]))(var16, var_other20) /* == on <var16:String>*/;
var21 = var22;
}
var23 = !var21;
var18 = var23;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
goto CONTINUE_label;
} else {
}
{
array__Array__add(var_res, var_na); /* Direct call array#Array#add on <var_res:Array[AAnnotation]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var13->class->vft[COLOR_abstract_collection__Iterator__next]))(var13) /* next on <var13:Iterator[ANode]>*/;
}
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#Prod#get_annotations for (self: Object, String): Array[AAnnotation] */
val* VIRTUAL_annotation__Prod__get_annotations(val* self, val* p0) {
val* var /* : Array[AAnnotation] */;
val* var1 /* : Array[AAnnotation] */;
var1 = annotation__Prod__get_annotations(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method annotation#AAnnotation#name for (self: AAnnotation): String */
val* annotation__AAnnotation__name(val* self) {
val* var /* : String */;
val* var1 /* : AAtid */;
val* var2 /* : Token */;
val* var3 /* : String */;
{
var1 = parser_nodes__AAnnotation__n_atid(self);
}
{
var2 = parser_nodes__AAtid__n_id(var1);
}
{
var3 = lexer_work__Token__text(var2);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#AAnnotation#name for (self: Object): String */
val* VIRTUAL_annotation__AAnnotation__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = annotation__AAnnotation__name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method annotation#AAnnotation#arg_as_id for (self: AAnnotation, ModelBuilder): nullable String */
val* annotation__AAnnotation__arg_as_id(val* self, val* p0) {
val* var /* : nullable String */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : ANodes[AAtArg] */;
val* var3 /* : ANodes[AAtArg] */;
val* var_args /* var args: ANodes[AAtArg] */;
long var4 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var11 /* : nullable String */;
val* var_arg /* var arg: nullable String */;
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : FlatString */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[Object] */;
val* var32 /* : String */;
val* var33 /* : null */;
var_modelbuilder = p0;
{
{ /* Inline parser_nodes#AAnnotation#n_args (self) on <self:AAnnotation> */
var3 = self->attrs[COLOR_parser_nodes__AAnnotation___n_args].val; /* _n_args on <self:AAnnotation> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2426);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_args = var1;
{
var4 = parser_nodes__ANodes__length(var_args);
}
var5 = 1;
{
{ /* Inline kernel#Int#== (var4,var5) on <var4:Int> */
var9 = var4 == var5;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
var10 = abstract_collection__SequenceRead__first(var_args);
}
{
var11 = annotation__AAtArg__as_id(var10);
}
var_arg = var11;
var12 = NULL;
if (var_arg == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_arg,var12) on <var_arg:nullable String> */
var_other = var12;
{
var17 = ((short int (*)(val*, val*))(var_arg->class->vft[COLOR_kernel__Object___61d_61d]))(var_arg, var_other) /* == on <var_arg:nullable String(String)>*/;
var16 = var17;
}
var18 = !var16;
var14 = var18;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
var = var_arg;
goto RET_LABEL;
} else {
}
} else {
}
if (varonce) {
var19 = varonce;
} else {
var20 = "Annotation error: \"";
var21 = 19;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce = var19;
}
{
var23 = annotation__AAnnotation__name(self);
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = "\" expects a single identifier as argument.";
var27 = 42;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 3;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var19;
((struct instance_array__NativeArray*)var31)->values[1] = (val*) var23;
((struct instance_array__NativeArray*)var31)->values[2] = (val*) var25;
{
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
}
}
{
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, self, var32); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
var33 = NULL;
var = var33;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#AAnnotation#arg_as_id for (self: Object, ModelBuilder): nullable String */
val* VIRTUAL_annotation__AAnnotation__arg_as_id(val* self, val* p0) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = annotation__AAnnotation__arg_as_id(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method annotation#AAtArg#as_string for (self: AAtArg): nullable String */
val* annotation__AAtArg__as_string(val* self) {
val* var /* : nullable String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
val* var3 /* : null */;
val* var4 /* : AExpr */;
val* var_nexpr /* var nexpr: AExpr */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
short int var8 /* : Bool */;
val* var9 /* : null */;
val* var10 /* : nullable String */;
val* var12 /* : nullable String */;
/* <self:AAtArg> isa AExprAtArg */
cltype = type_parser_nodes__AExprAtArg.color;
idtype = type_parser_nodes__AExprAtArg.id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
var2 = !var1;
if (var2){
var3 = NULL;
var = var3;
goto RET_LABEL;
} else {
}
{
var4 = parser_nodes__AExprAtArg__n_expr(self);
}
var_nexpr = var4;
/* <var_nexpr:AExpr> isa AStringFormExpr */
cltype6 = type_parser_nodes__AStringFormExpr.color;
idtype7 = type_parser_nodes__AStringFormExpr.id;
if(cltype6 >= var_nexpr->type->table_size) {
var5 = 0;
} else {
var5 = var_nexpr->type->type_table[cltype6] == idtype7;
}
var8 = !var5;
if (var8){
var9 = NULL;
var = var9;
goto RET_LABEL;
} else {
}
{
{ /* Inline literal#AStringFormExpr#value (var_nexpr) on <var_nexpr:AExpr(AStringFormExpr)> */
var12 = var_nexpr->attrs[COLOR_literal__AStringFormExpr___value].val; /* _value on <var_nexpr:AExpr(AStringFormExpr)> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/annotation.nit", 111);
show_backtrace(1);
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#AAtArg#as_string for (self: Object): nullable String */
val* VIRTUAL_annotation__AAtArg__as_string(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = annotation__AAtArg__as_string(self);
var = var1;
RET_LABEL:;
return var;
}
/* method annotation#AAtArg#as_id for (self: AAtArg): nullable String */
val* annotation__AAtArg__as_id(val* self) {
val* var /* : nullable String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
val* var3 /* : null */;
val* var4 /* : AExpr */;
val* var_nexpr /* var nexpr: AExpr */;
short int var5 /* : Bool */;
int cltype6;
int idtype7;
short int var8 /* : Bool */;
val* var9 /* : null */;
val* var10 /* : AExpr */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
short int var14 /* : Bool */;
val* var15 /* : null */;
val* var16 /* : AExprs */;
val* var17 /* : ANodes[AExpr] */;
val* var19 /* : ANodes[AExpr] */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : null */;
val* var23 /* : TId */;
val* var24 /* : String */;
/* <self:AAtArg> isa AExprAtArg */
cltype = type_parser_nodes__AExprAtArg.color;
idtype = type_parser_nodes__AExprAtArg.id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
var2 = !var1;
if (var2){
var3 = NULL;
var = var3;
goto RET_LABEL;
} else {
}
{
var4 = parser_nodes__AExprAtArg__n_expr(self);
}
var_nexpr = var4;
/* <var_nexpr:AExpr> isa ACallExpr */
cltype6 = type_parser_nodes__ACallExpr.color;
idtype7 = type_parser_nodes__ACallExpr.id;
if(cltype6 >= var_nexpr->type->table_size) {
var5 = 0;
} else {
var5 = var_nexpr->type->type_table[cltype6] == idtype7;
}
var8 = !var5;
if (var8){
var9 = NULL;
var = var9;
goto RET_LABEL;
} else {
}
{
var10 = parser_nodes__ASendExpr__n_expr(var_nexpr);
}
/* <var10:AExpr> isa AImplicitSelfExpr */
cltype12 = type_parser_nodes__AImplicitSelfExpr.color;
idtype13 = type_parser_nodes__AImplicitSelfExpr.id;
if(cltype12 >= var10->type->table_size) {
var11 = 0;
} else {
var11 = var10->type->type_table[cltype12] == idtype13;
}
var14 = !var11;
if (var14){
var15 = NULL;
var = var15;
goto RET_LABEL;
} else {
}
{
var16 = parser_nodes__ACallFormExpr__n_args(var_nexpr);
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var16) on <var16:AExprs> */
var19 = var16->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var16:AExprs> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = parser_nodes__ANodes__is_empty(var17);
}
var21 = !var20;
if (var21){
var22 = NULL;
var = var22;
goto RET_LABEL;
} else {
}
{
var23 = parser_nodes__ACallFormExpr__n_id(var_nexpr);
}
{
var24 = lexer_work__Token__text(var23);
}
var = var24;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#AAtArg#as_id for (self: Object): nullable String */
val* VIRTUAL_annotation__AAtArg__as_id(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = annotation__AAtArg__as_id(self);
var = var1;
RET_LABEL:;
return var;
}
