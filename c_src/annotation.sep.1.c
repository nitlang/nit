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
{ /* Inline array#AbstractArrayRead#length (var_res) on <var_res:Array[AAnnotation]> */
var6 = var_res->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_res:Array[AAnnotation]> */
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
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
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
var13 = array__Array___91d_93d(var_res, var12);
}
if (varonce) {
var14 = varonce;
} else {
var15 = "Error: multiple annotation `";
var16 = 28;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce = var14;
}
if (varonce18) {
var19 = varonce18;
} else {
var20 = "`. A previous one is defined line ";
var21 = 34;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
var23 = 0;
{
var24 = array__Array___91d_93d(var_res, var23);
}
{
{ /* Inline parser_nodes#ANode#location (var24) on <var24:nullable Object(AAnnotation)> */
var27 = var24->attrs[COLOR_parser_nodes__ANode___location].val; /* _location on <var24:nullable Object(AAnnotation)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 23);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var25) on <var25:Location> */
var30 = var25->attrs[COLOR_location__Location___line_start].l; /* _line_start on <var25:Location> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
var31 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var31 = array_instance Array[Object] */
var32 = 4;
var33 = NEW_array__NativeArray(var32, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var33)->values[0] = (val*) var14;
((struct instance_array__NativeArray*)var33)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var33)->values[2] = (val*) var19;
var34 = BOX_kernel__Int(var28); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var33)->values[3] = (val*) var34;
{
((void (*)(val*, val*, long))(var31->class->vft[COLOR_array__Array__with_native]))(var31, var33, var32) /* with_native on <var31:Array[Object]>*/;
}
}
{
var35 = ((val* (*)(val*))(var31->class->vft[COLOR_string__Object__to_s]))(var31) /* to_s on <var31:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var_modelbuilder, var13, var35); /* Direct call modelbuilder#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
var36 = abstract_collection__SequenceRead__first(var_res);
}
var = var36;
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
val* var4 /* : nullable AAnnotations */;
val* var_nas /* var nas: nullable AAnnotations */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : ANodes[AAnnotation] */;
val* var14 /* : ANodes[AAnnotation] */;
val* var_ /* var : ANodes[AAnnotation] */;
val* var15 /* : Iterator[ANode] */;
val* var_16 /* var : Iterator[AAnnotation] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_na /* var na: AAnnotation */;
val* var19 /* : String */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var_other23 /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
var_name = p0;
var1 = NEW_array__Array(&type_array__Arrayparser_nodes__AAnnotation);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:Array[AAnnotation]>*/;
}
var_res = var1;
{
{ /* Inline parser_nodes#Prod#n_annotations (self) on <self:Prod> */
var4 = self->attrs[COLOR_parser_nodes__Prod___n_annotations].val; /* _n_annotations on <self:Prod> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_nas = var2;
var5 = NULL;
if (var_nas == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nas,var5) on <var_nas:nullable AAnnotations> */
var_other = var5;
{
{ /* Inline kernel#Object#is_same_instance (var_nas,var_other) on <var_nas:nullable AAnnotations(AAnnotations)> */
var11 = var_nas == var_other;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAnnotations#n_items (var_nas) on <var_nas:nullable AAnnotations(AAnnotations)> */
var14 = var_nas->attrs[COLOR_parser_nodes__AAnnotations___n_items].val; /* _n_items on <var_nas:nullable AAnnotations(AAnnotations)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_items");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2027);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_ = var12;
{
var15 = parser_nodes__ANodes__iterator(var_);
}
var_16 = var15;
for(;;) {
{
var17 = ((short int (*)(val*))(var_16->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_16) /* is_ok on <var_16:Iterator[AAnnotation]>*/;
}
if (var17){
{
var18 = ((val* (*)(val*))(var_16->class->vft[COLOR_abstract_collection__Iterator__item]))(var_16) /* item on <var_16:Iterator[AAnnotation]>*/;
}
var_na = var18;
{
var19 = annotation__AAnnotation__name(var_na);
}
{
{ /* Inline kernel#Object#!= (var19,var_name) on <var19:String> */
var_other23 = var_name;
{
var25 = ((short int (*)(val*, val*))(var19->class->vft[COLOR_kernel__Object___61d_61d]))(var19, var_other23) /* == on <var19:String>*/;
var24 = var25;
}
var26 = !var24;
var21 = var26;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
goto BREAK_label;
} else {
}
{
array__Array__add(var_res, var_na); /* Direct call array#Array#add on <var_res:Array[AAnnotation]>*/
}
BREAK_label: (void)0;
{
((void (*)(val*))(var_16->class->vft[COLOR_abstract_collection__Iterator__next]))(var_16) /* next on <var_16:Iterator[AAnnotation]>*/;
}
} else {
goto BREAK_label27;
}
}
BREAK_label27: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_16) on <var_16:Iterator[AAnnotation]> */
RET_LABEL28:(void)0;
}
}
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
val* var3 /* : AAtid */;
val* var4 /* : Token */;
val* var6 /* : Token */;
val* var7 /* : String */;
{
{ /* Inline parser_nodes#AAnnotation#n_atid (self) on <self:AAnnotation> */
var3 = self->attrs[COLOR_parser_nodes__AAnnotation___n_atid].val; /* _n_atid on <self:AAnnotation> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_atid");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2037);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes#AAtid#n_id (var1) on <var1:AAtid> */
var6 = var1->attrs[COLOR_parser_nodes__AAtid___n_id].val; /* _n_id on <var1:AAtid> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2046);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = lexer_work__Token__text(var4);
}
var = var7;
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
/* method annotation#AAnnotation#arg_as_string for (self: AAnnotation, ModelBuilder): nullable String */
val* annotation__AAnnotation__arg_as_string(val* self, val* p0) {
val* var /* : nullable String */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2039);
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
var11 = annotation__AExpr__as_string(var10);
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
var26 = "\" expects a single String as argument.";
var27 = 38;
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
/* method annotation#AAnnotation#arg_as_string for (self: Object, ModelBuilder): nullable String */
val* VIRTUAL_annotation__AAnnotation__arg_as_string(val* self, val* p0) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = annotation__AAnnotation__arg_as_string(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method annotation#AAnnotation#arg_as_id for (self: AAnnotation, ModelBuilder): nullable String */
val* annotation__AAnnotation__arg_as_id(val* self, val* p0) {
val* var /* : nullable String */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var_args /* var args: ANodes[AExpr] */;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 2039);
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
var11 = annotation__AExpr__as_id(var10);
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
/* method annotation#AExpr#as_string for (self: AExpr): nullable String */
val* annotation__AExpr__as_string(val* self) {
val* var /* : nullable String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
val* var3 /* : null */;
val* var4 /* : nullable String */;
val* var6 /* : nullable String */;
/* <self:AExpr> isa AStringFormExpr */
cltype = type_parser_nodes__AStringFormExpr.color;
idtype = type_parser_nodes__AStringFormExpr.id;
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
{ /* Inline literal#AStringFormExpr#value (self) on <self:AExpr(AStringFormExpr)> */
var6 = self->attrs[COLOR_literal__AStringFormExpr___value].val; /* _value on <self:AExpr(AStringFormExpr)> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "annotation.nit", 109);
show_backtrace(1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#AExpr#as_string for (self: Object): nullable String */
val* VIRTUAL_annotation__AExpr__as_string(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = annotation__AExpr__as_string(self);
var = var1;
RET_LABEL:;
return var;
}
/* method annotation#AExpr#as_id for (self: AExpr): nullable String */
val* annotation__AExpr__as_id(val* self) {
val* var /* : nullable String */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : String */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
short int var6 /* : Bool */;
val* var7 /* : null */;
val* var8 /* : AExpr */;
val* var10 /* : AExpr */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
short int var14 /* : Bool */;
val* var15 /* : null */;
val* var16 /* : AExprs */;
val* var18 /* : AExprs */;
val* var19 /* : ANodes[AExpr] */;
val* var21 /* : ANodes[AExpr] */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : null */;
val* var25 /* : TId */;
val* var27 /* : TId */;
val* var28 /* : String */;
/* <self:AExpr> isa AMethidExpr */
cltype = type_parser_nodes__AMethidExpr.color;
idtype = type_parser_nodes__AMethidExpr.id;
if(cltype >= self->type->table_size) {
var1 = 0;
} else {
var1 = self->type->type_table[cltype] == idtype;
}
if (var1){
{
var2 = parser_work__Prod__collect_text(self);
}
var = var2;
goto RET_LABEL;
} else {
}
/* <self:AExpr> isa ACallExpr */
cltype4 = type_parser_nodes__ACallExpr.color;
idtype5 = type_parser_nodes__ACallExpr.id;
if(cltype4 >= self->type->table_size) {
var3 = 0;
} else {
var3 = self->type->type_table[cltype4] == idtype5;
}
var6 = !var3;
if (var6){
var7 = NULL;
var = var7;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ASendExpr#n_expr (self) on <self:AExpr(ACallExpr)> */
var10 = self->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <self:AExpr(ACallExpr)> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1466);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
/* <var8:AExpr> isa AImplicitSelfExpr */
cltype12 = type_parser_nodes__AImplicitSelfExpr.color;
idtype13 = type_parser_nodes__AImplicitSelfExpr.id;
if(cltype12 >= var8->type->table_size) {
var11 = 0;
} else {
var11 = var8->type->type_table[cltype12] == idtype13;
}
var14 = !var11;
if (var14){
var15 = NULL;
var = var15;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ACallFormExpr#n_args (self) on <self:AExpr(ACallExpr)> */
var18 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_args].val; /* _n_args on <self:AExpr(ACallExpr)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1647);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var16) on <var16:AExprs> */
var21 = var16->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var16:AExprs> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1946);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = parser_nodes__ANodes__is_empty(var19);
}
var23 = !var22;
if (var23){
var24 = NULL;
var = var24;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ACallFormExpr#n_id (self) on <self:AExpr(ACallExpr)> */
var27 = self->attrs[COLOR_parser_nodes__ACallFormExpr___n_id].val; /* _n_id on <self:AExpr(ACallExpr)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1644);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = lexer_work__Token__text(var25);
}
var = var28;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method annotation#AExpr#as_id for (self: Object): nullable String */
val* VIRTUAL_annotation__AExpr__as_id(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = annotation__AExpr__as_id(self);
var = var1;
RET_LABEL:;
return var;
}
