#include "nit__modelbuilder_base.sep.0.h"
/* method modelbuilder_base#ToolContext#modelbuilder for (self: ToolContext): ModelBuilder */
val* nit__modelbuilder_base___ToolContext___modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : nullable ModelBuilder */;
val* var3 /* : nullable ModelBuilder */;
{
{ /* Inline modelbuilder_base#ToolContext#modelbuilder_real (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nit__modelbuilder_base__ToolContext___modelbuilder_real].val; /* _modelbuilder_real on <self:ToolContext> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 36);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ToolContext#modelbuilder_real for (self: ToolContext): nullable ModelBuilder */
val* nit__modelbuilder_base___ToolContext___modelbuilder_real(val* self) {
val* var /* : nullable ModelBuilder */;
val* var1 /* : nullable ModelBuilder */;
var1 = self->attrs[COLOR_nit__modelbuilder_base__ToolContext___modelbuilder_real].val; /* _modelbuilder_real on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ToolContext#modelbuilder_real= for (self: ToolContext, nullable ModelBuilder) */
void nit__modelbuilder_base___ToolContext___modelbuilder_real_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelbuilder_base__ToolContext___modelbuilder_real].val = p0; /* _modelbuilder_real on <self:ToolContext> */
RET_LABEL:;
}
/* method modelbuilder_base#ModelBuilder#model for (self: ModelBuilder): Model */
val* nit___nit__ModelBuilder___model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#model= for (self: ModelBuilder, Model) */
void nit___nit__ModelBuilder___model_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val = p0; /* _model on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelbuilder_base#ModelBuilder#toolcontext for (self: ModelBuilder): ToolContext */
val* nit___nit__ModelBuilder___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#toolcontext= for (self: ModelBuilder, ToolContext) */
void nit___nit__ModelBuilder___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val = p0; /* _toolcontext on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelbuilder_base#ModelBuilder#init for (self: ModelBuilder) */
void nit___nit__ModelBuilder___standard__kernel__Object__init(val* self) {
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : nullable ModelBuilder */;
val* var5 /* : nullable ModelBuilder */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : ToolContext */;
val* var14 /* : ToolContext */;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ToolContext#modelbuilder_real (var) on <var:ToolContext> */
var5 = var->attrs[COLOR_nit__modelbuilder_base__ToolContext___modelbuilder_real].val; /* _modelbuilder_real on <var:ToolContext> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (var3 == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var3,((val*)NULL)) on <var3:nullable ModelBuilder> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var3,var_other) on <var3:nullable ModelBuilder(ModelBuilder)> */
var11 = var3 == var_other;
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
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 54);
fatal_exit(1);
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var14 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ToolContext#modelbuilder_real= (var12,self) on <var12:ToolContext> */
var12->attrs[COLOR_nit__modelbuilder_base__ToolContext___modelbuilder_real].val = self; /* _modelbuilder_real on <var12:ToolContext> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method modelbuilder_base#ModelBuilder#try_get_mclass_by_name for (self: ModelBuilder, ANode, MModule, String): nullable MClass */
val* nit___nit__ModelBuilder___try_get_mclass_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MClass */;
val* var_anode /* var anode: ANode */;
val* var_mmodule /* var mmodule: MModule */;
val* var_name /* var name: String */;
val* var1 /* : Model */;
val* var3 /* : Model */;
val* var4 /* : nullable Array[MClass] */;
val* var_classes /* var classes: nullable Array[MClass] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_res /* var res: nullable MClass */;
val* var_ /* var : Array[MClass] */;
val* var7 /* : ArrayIterator[nullable Object] */;
val* var_8 /* var : ArrayIterator[MClass] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var11 /* : POSetElement[MModule] */;
val* var13 /* : POSetElement[MModule] */;
val* var14 /* : MModule */;
val* var16 /* : MModule */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : MModule */;
val* var21 /* : MModule */;
val* var22 /* : MVisibility */;
val* var24 /* : MVisibility */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : NativeArray[String] */;
static val* varonce;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : FlatString */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : FlatString */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : FlatString */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var52 /* : String */;
var_anode = p0;
var_mmodule = p1;
var_name = p2;
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var3 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__model___Model___get_mclasses_by_name(var1, var_name);
}
var_classes = var4;
if (var_classes == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = standard___standard__Array___standard__kernel__Object___61d_61d(var_classes, ((val*)NULL));
var5 = var6;
}
if (var5){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var_res = ((val*)NULL);
var_ = var_classes;
{
var7 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_8 = var7;
for(;;) {
{
var9 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_8);
}
if (var9){
{
var10 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_8);
}
var_mclass = var10;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var13 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var16 = var_mclass->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = poset___poset__POSetElement____60d_61d(var11, var14);
}
var18 = !var17;
if (var18){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var21 = var_mclass->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 357);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var_mclass) on <var_mclass:MClass> */
var24 = var_mclass->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var_mclass:MClass> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 440);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = nit___nit__MModule___is_visible(var_mmodule, var19, var22);
}
var26 = !var25;
if (var26){
goto BREAK_label;
} else {
}
if (var_res == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,((val*)NULL)) on <var_res:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable MClass(MClass)> */
var32 = var_res == var_other;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
var_res = var_mclass;
} else {
if (unlikely(varonce==NULL)) {
var33 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Error: ambiguous class name `";
var37 = standard___standard__NativeString___to_s_with_length(var36, 29l);
var35 = var37;
varonce34 = var35;
}
((struct instance_standard__NativeArray*)var33)->values[0]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "`; conflict between `";
var41 = standard___standard__NativeString___to_s_with_length(var40, 21l);
var39 = var41;
varonce38 = var39;
}
((struct instance_standard__NativeArray*)var33)->values[2]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "` and `";
var45 = standard___standard__NativeString___to_s_with_length(var44, 7l);
var43 = var45;
varonce42 = var43;
}
((struct instance_standard__NativeArray*)var33)->values[4]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "`.";
var49 = standard___standard__NativeString___to_s_with_length(var48, 2l);
var47 = var49;
varonce46 = var47;
}
((struct instance_standard__NativeArray*)var33)->values[6]=var47;
} else {
var33 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var33)->values[1]=var_name;
{
var50 = nit___nit__MClass___nit__model_base__MEntity__full_name(var_mclass);
}
((struct instance_standard__NativeArray*)var33)->values[3]=var50;
{
var51 = nit___nit__MClass___nit__model_base__MEntity__full_name(var_res);
}
((struct instance_standard__NativeArray*)var33)->values[5]=var51;
{
var52 = ((val*(*)(val* self))(var33->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce = var33;
{
nit___nit__ModelBuilder___error(self, var_anode, var52); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_8); /* Direct call array#ArrayIterator#next on <var_8:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label53;
}
}
BREAK_label53: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_8); /* Direct call array#ArrayIterator#finish on <var_8:ArrayIterator[MClass]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#get_mclass_by_name for (self: ModelBuilder, ANode, MModule, String): nullable MClass */
val* nit___nit__ModelBuilder___get_mclass_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MClass */;
val* var_node /* var node: ANode */;
val* var_mmodule /* var mmodule: MModule */;
val* var_name /* var name: String */;
val* var1 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : NativeArray[String] */;
static val* varonce;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var17 /* : String */;
var_node = p0;
var_mmodule = p1;
var_name = p2;
{
var1 = nit___nit__ModelBuilder___try_get_mclass_by_name(self, var_node, var_mmodule, var_name);
}
var_mclass = var1;
if (var_mclass == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var7 = var_mclass == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
if (unlikely(varonce==NULL)) {
var8 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "Type Error: missing primitive class `";
var12 = standard___standard__NativeString___to_s_with_length(var11, 37l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var8)->values[0]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "\'.";
var16 = standard___standard__NativeString___to_s_with_length(var15, 2l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var8)->values[2]=var14;
} else {
var8 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var8)->values[1]=var_name;
{
var17 = ((val*(*)(val* self))(var8->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce = var8;
{
nit___nit__ModelBuilder___error(self, var_node, var17); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
var = var_mclass;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#try_get_mproperty_by_name2 for (self: ModelBuilder, ANode, MModule, MType, String): nullable MProperty */
val* nit___nit__ModelBuilder___try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : nullable MProperty */;
val* var_anode /* var anode: ANode */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
val* var1 /* : Model */;
val* var3 /* : Model */;
val* var4 /* : nullable Array[MProperty] */;
val* var_props /* var props: nullable Array[MProperty] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var9 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var10 /* : nullable Object */;
val* var_cache /* var cache: nullable MProperty */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_res /* var res: nullable MProperty */;
val* var_ress /* var ress: nullable Array[MProperty] */;
val* var_ /* var : Array[MProperty] */;
val* var16 /* : ArrayIterator[nullable Object] */;
val* var_17 /* var : ArrayIterator[MProperty] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : MClassDef */;
val* var24 /* : MClassDef */;
val* var25 /* : MModule */;
val* var27 /* : MModule */;
val* var28 /* : MVisibility */;
val* var30 /* : MVisibility */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
int cltype;
int idtype;
short int var_36 /* var : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var_40 /* var : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
short int var45 /* : Bool */;
short int var_46 /* var : Bool */;
val* var47 /* : MClassDef */;
val* var49 /* : MClassDef */;
val* var50 /* : MClass */;
val* var52 /* : MClass */;
val* var53 /* : MClass */;
val* var55 /* : MClass */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var_other63 /* var other: nullable Object */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
short int var_73 /* var : Bool */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
short int var_77 /* var : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var_81 /* var : Bool */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
val* var85 /* : MClassDef */;
val* var87 /* : MClassDef */;
val* var88 /* : MClassType */;
val* var90 /* : MClassType */;
val* var_restype /* var restype: MClassType */;
val* var91 /* : MClassDef */;
val* var93 /* : MClassDef */;
val* var94 /* : MClassType */;
val* var96 /* : MClassType */;
val* var_mproptype /* var mproptype: MClassType */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
val* var100 /* : Array[MProperty] */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
short int var_109 /* var : Bool */;
short int var110 /* : Bool */;
int cltype111;
int idtype112;
short int var_113 /* var : Bool */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
val* var117 /* : MClassDef */;
val* var119 /* : MClassDef */;
val* var120 /* : MClassType */;
val* var122 /* : MClassType */;
val* var_restype123 /* var restype: MClassType */;
val* var124 /* : Array[MProperty] */;
val* var_ress2 /* var ress2: Array[MProperty] */;
val* var_125 /* var : Array[MProperty] */;
val* var126 /* : ArrayIterator[nullable Object] */;
val* var_127 /* var : ArrayIterator[MProperty] */;
short int var128 /* : Bool */;
val* var129 /* : nullable Object */;
val* var_mprop130 /* var mprop: MProperty */;
val* var131 /* : MClassDef */;
val* var133 /* : MClassDef */;
val* var134 /* : MClassType */;
val* var136 /* : MClassType */;
val* var_mproptype137 /* var mproptype: MClassType */;
short int var138 /* : Bool */;
short int var139 /* : Bool */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
int cltype142;
int idtype143;
short int var144 /* : Bool */;
short int var_145 /* var : Bool */;
short int var146 /* : Bool */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
short int var153 /* : Bool */;
short int var155 /* : Bool */;
short int var156 /* : Bool */;
long var157 /* : Int */;
long var159 /* : Int */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
int cltype163;
int idtype164;
const char* var_class_name;
short int var165 /* : Bool */;
val* var166 /* : Array[String] */;
val* var_s /* var s: Array[String] */;
val* var_167 /* var : Array[MProperty] */;
val* var168 /* : ArrayIterator[nullable Object] */;
val* var_169 /* var : ArrayIterator[MProperty] */;
short int var170 /* : Bool */;
val* var171 /* : nullable Object */;
val* var_mprop172 /* var mprop: MProperty */;
val* var173 /* : String */;
val* var175 /* : NativeArray[String] */;
static val* varonce;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
val* var179 /* : FlatString */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
val* var183 /* : FlatString */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
val* var187 /* : FlatString */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
val* var191 /* : FlatString */;
val* var192 /* : String */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
val* var196 /* : FlatString */;
val* var197 /* : String */;
val* var198 /* : String */;
val* var199 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var201 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
var_anode = p0;
var_mmodule = p1;
var_mtype = p2;
var_name = p3;
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var3 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__model___Model___get_mproperties_by_name(var1, var_name);
}
var_props = var4;
if (var_props == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = standard___standard__Array___standard__kernel__Object___61d_61d(var_props, ((val*)NULL));
var5 = var6;
}
if (var5){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#try_get_mproperty_by_name2_cache (self) on <self:ModelBuilder> */
var9 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___try_get_mproperty_by_name2_cache].val; /* _try_get_mproperty_by_name2_cache on <self:ModelBuilder> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_get_mproperty_by_name2_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 178);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = more_collections___more_collections__HashMap3____91d_93d(var7, var_mmodule, var_mtype, var_name);
}
var_cache = var10;
if (var_cache == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cache,((val*)NULL)) on <var_cache:nullable MProperty> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_cache->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cache, var_other); /* == on <var_cache:nullable MProperty(MProperty)>*/
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
var = var_cache;
goto RET_LABEL;
} else {
}
var_res = ((val*)NULL);
var_ress = ((val*)NULL);
var_ = var_props;
{
var16 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_17 = var16;
for(;;) {
{
var18 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_17);
}
if (var18){
{
var19 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_17);
}
var_mprop = var19;
{
var20 = nit___nit__MType___has_mproperty(var_mtype, var_mmodule, var_mprop);
}
var21 = !var20;
if (var21){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty> */
var24 = var_mprop->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1928);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var22) on <var22:MClassDef> */
var27 = var22->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var22:MClassDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model#MProperty#visibility (var_mprop) on <var_mprop:MProperty> */
var30 = var_mprop->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1949);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = nit___nit__MModule___is_visible(var_mmodule, var25, var28);
}
var32 = !var31;
if (var32){
goto BREAK_label;
} else {
}
/* <var_mprop:MProperty> isa MMethod */
cltype = type_nit__MMethod.color;
idtype = type_nit__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var35 = 0;
} else {
var35 = var_mprop->type->type_table[cltype] == idtype;
}
var_36 = var35;
if (var35){
{
{ /* Inline model#MMethod#is_new (var_mprop) on <var_mprop:MProperty(MMethod)> */
var39 = var_mprop->attrs[COLOR_nit__model__MMethod___is_new].s; /* _is_new on <var_mprop:MProperty(MMethod)> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var34 = var37;
} else {
var34 = var_36;
}
var_40 = var34;
if (var34){
/* <var_mtype:MType> isa MClassType */
cltype43 = type_nit__MClassType.color;
idtype44 = type_nit__MClassType.id;
if(cltype43 >= var_mtype->type->table_size) {
var42 = 0;
} else {
var42 = var_mtype->type->type_table[cltype43] == idtype44;
}
var45 = !var42;
var_46 = var45;
if (var45){
var41 = var_46;
} else {
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty(MMethod)> */
var49 = var_mprop->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty(MMethod)> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1928);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var47) on <var47:MClassDef> */
var52 = var47->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var47:MClassDef> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var55 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var50,var53) on <var50:MClass> */
var_other = var53;
{
var58 = ((short int(*)(val* self, val* p0))(var50->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var50, var_other); /* == on <var50:MClass>*/
}
var59 = !var58;
var56 = var59;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var41 = var56;
}
var33 = var41;
} else {
var33 = var_40;
}
if (var33){
goto BREAK_label;
} else {
}
if (var_res == NULL) {
var60 = 1; /* is null */
} else {
var60 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,((val*)NULL)) on <var_res:nullable MProperty> */
var_other63 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other63) on <var_res:nullable MProperty(MProperty)> */
var66 = var_res == var_other63;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var61 = var64;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
var60 = var61;
}
if (var60){
var_res = var_mprop;
goto BREAK_label;
} else {
}
/* <var_res:nullable MProperty(MProperty)> isa MMethod */
cltype71 = type_nit__MMethod.color;
idtype72 = type_nit__MMethod.id;
if(cltype71 >= var_res->type->table_size) {
var70 = 0;
} else {
var70 = var_res->type->type_table[cltype71] == idtype72;
}
var_73 = var70;
if (var70){
/* <var_mprop:MProperty> isa MMethod */
cltype75 = type_nit__MMethod.color;
idtype76 = type_nit__MMethod.id;
if(cltype75 >= var_mprop->type->table_size) {
var74 = 0;
} else {
var74 = var_mprop->type->type_table[cltype75] == idtype76;
}
var69 = var74;
} else {
var69 = var_73;
}
var_77 = var69;
if (var69){
{
{ /* Inline model#MMethod#is_init (var_res) on <var_res:nullable MProperty(MMethod)> */
var80 = var_res->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var_res:nullable MProperty(MMethod)> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
var68 = var78;
} else {
var68 = var_77;
}
var_81 = var68;
if (var68){
{
{ /* Inline model#MMethod#is_init (var_mprop) on <var_mprop:MProperty(MMethod)> */
var84 = var_mprop->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var_mprop:MProperty(MMethod)> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
var67 = var82;
} else {
var67 = var_81;
}
if (var67){
{
{ /* Inline model#MProperty#intro_mclassdef (var_res) on <var_res:nullable MProperty(MMethod)> */
var87 = var_res->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_res:nullable MProperty(MMethod)> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1928);
fatal_exit(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var85) on <var85:MClassDef> */
var90 = var85->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var85:MClassDef> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
var_restype = var88;
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty(MMethod)> */
var93 = var_mprop->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty(MMethod)> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1928);
fatal_exit(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var91) on <var91:MClassDef> */
var96 = var91->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var91:MClassDef> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
var_mproptype = var94;
{
var97 = nit___nit__MType___is_subtype(var_mproptype, var_mmodule, ((val*)NULL), var_restype);
}
if (var97){
var_res = var_mprop;
goto BREAK_label;
} else {
}
} else {
}
if (var_ress == NULL) {
var98 = 1; /* is null */
} else {
var98 = 0; /* arg is null but recv is not */
}
if (0) {
var99 = standard___standard__Array___standard__kernel__Object___61d_61d(var_ress, ((val*)NULL));
var98 = var99;
}
if (var98){
var100 = NEW_standard__Array(&type_standard__Array__nit__MProperty);
{
standard___standard__Array___standard__kernel__Object__init(var100); /* Direct call array#Array#init on <var100:Array[MProperty]>*/
}
var_ress = var100;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_ress, var_res); /* Direct call array#Array#add on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
} else {
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_ress, var_mprop); /* Direct call array#Array#add on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_17); /* Direct call array#ArrayIterator#next on <var_17:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label101;
}
}
BREAK_label101: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_17); /* Direct call array#ArrayIterator#finish on <var_17:ArrayIterator[MProperty]>*/
}
if (var_ress == NULL) {
var104 = 0; /* is null */
} else {
var104 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ress,((val*)NULL)) on <var_ress:nullable Array[MProperty]> */
var_other = ((val*)NULL);
{
var107 = ((short int(*)(val* self, val* p0))(var_ress->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ress, var_other); /* == on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
var108 = !var107;
var105 = var108;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
var104 = var105;
}
var_109 = var104;
if (var104){
/* <var_res:nullable MProperty> isa MMethod */
cltype111 = type_nit__MMethod.color;
idtype112 = type_nit__MMethod.id;
if(var_res == NULL) {
var110 = 0;
} else {
if(cltype111 >= var_res->type->table_size) {
var110 = 0;
} else {
var110 = var_res->type->type_table[cltype111] == idtype112;
}
}
var103 = var110;
} else {
var103 = var_109;
}
var_113 = var103;
if (var103){
{
{ /* Inline model#MMethod#is_init (var_res) on <var_res:nullable MProperty(MMethod)> */
var116 = var_res->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var_res:nullable MProperty(MMethod)> */
var114 = var116;
RET_LABEL115:(void)0;
}
}
var102 = var114;
} else {
var102 = var_113;
}
if (var102){
{
{ /* Inline model#MProperty#intro_mclassdef (var_res) on <var_res:nullable MProperty(MMethod)> */
var119 = var_res->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_res:nullable MProperty(MMethod)> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1928);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var117) on <var117:MClassDef> */
var122 = var117->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var117:MClassDef> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
var_restype123 = var120;
var124 = NEW_standard__Array(&type_standard__Array__nit__MProperty);
{
standard___standard__Array___standard__kernel__Object__init(var124); /* Direct call array#Array#init on <var124:Array[MProperty]>*/
}
var_ress2 = var124;
var_125 = var_ress;
{
var126 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_125);
}
var_127 = var126;
for(;;) {
{
var128 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_127);
}
if (var128){
{
var129 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_127);
}
var_mprop130 = var129;
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop130) on <var_mprop130:MProperty> */
var133 = var_mprop130->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop130:MProperty> */
if (unlikely(var133 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1928);
fatal_exit(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var131) on <var131:MClassDef> */
var136 = var131->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var131:MClassDef> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
var_mproptype137 = var134;
{
var138 = nit___nit__MType___is_subtype(var_restype123, var_mmodule, ((val*)NULL), var_mproptype137);
}
var139 = !var138;
if (var139){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_ress2, var_mprop130); /* Direct call array#Array#add on <var_ress2:Array[MProperty]>*/
}
} else {
/* <var_mprop130:MProperty> isa MMethod */
cltype142 = type_nit__MMethod.color;
idtype143 = type_nit__MMethod.id;
if(cltype142 >= var_mprop130->type->table_size) {
var141 = 0;
} else {
var141 = var_mprop130->type->type_table[cltype142] == idtype143;
}
var144 = !var141;
var_145 = var144;
if (var144){
var140 = var_145;
} else {
{
{ /* Inline model#MMethod#is_init (var_mprop130) on <var_mprop130:MProperty(MMethod)> */
var148 = var_mprop130->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var_mprop130:MProperty(MMethod)> */
var146 = var148;
RET_LABEL147:(void)0;
}
}
var149 = !var146;
var140 = var149;
}
if (var140){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_ress2, var_mprop130); /* Direct call array#Array#add on <var_ress2:Array[MProperty]>*/
}
} else {
}
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_127); /* Direct call array#ArrayIterator#next on <var_127:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label150;
}
}
BREAK_label150: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_127); /* Direct call array#ArrayIterator#finish on <var_127:ArrayIterator[MProperty]>*/
}
{
var151 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_ress2);
}
if (var151){
var_ress = ((val*)NULL);
} else {
var_ress = var_ress2;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_ress, var_res); /* Direct call array#Array#add on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
}
} else {
}
if (var_ress == NULL) {
var152 = 0; /* is null */
} else {
var152 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ress,((val*)NULL)) on <var_ress:nullable Array[MProperty]> */
var_other = ((val*)NULL);
{
var155 = ((short int(*)(val* self, val* p0))(var_ress->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ress, var_other); /* == on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
var156 = !var155;
var153 = var156;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
var152 = var153;
}
if (var152){
{
{ /* Inline array#AbstractArrayRead#length (var_ress) on <var_ress:nullable Array[MProperty](Array[MProperty])> */
var159 = var_ress->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_ress:nullable Array[MProperty](Array[MProperty])> */
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var157,1l) on <var157:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var162 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var162)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var165 = var157 > 1l;
var160 = var165;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
}
if (unlikely(!var160)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 168);
fatal_exit(1);
}
var166 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var166); /* Direct call array#Array#init on <var166:Array[String]>*/
}
var_s = var166;
var_167 = var_ress;
{
var168 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_167);
}
var_169 = var168;
for(;;) {
{
var170 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_169);
}
if (var170){
{
var171 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_169);
}
var_mprop172 = var171;
{
var173 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_mprop172);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_s, var173); /* Direct call array#Array#add on <var_s:Array[String]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_169); /* Direct call array#ArrayIterator#next on <var_169:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label174;
}
}
BREAK_label174: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_169); /* Direct call array#ArrayIterator#finish on <var_169:ArrayIterator[MProperty]>*/
}
if (unlikely(varonce==NULL)) {
var175 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "Error: ambiguous property name `";
var179 = standard___standard__NativeString___to_s_with_length(var178, 32l);
var177 = var179;
varonce176 = var177;
}
((struct instance_standard__NativeArray*)var175)->values[0]=var177;
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "` for `";
var183 = standard___standard__NativeString___to_s_with_length(var182, 7l);
var181 = var183;
varonce180 = var181;
}
((struct instance_standard__NativeArray*)var175)->values[2]=var181;
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = "`; conflict between ";
var187 = standard___standard__NativeString___to_s_with_length(var186, 20l);
var185 = var187;
varonce184 = var185;
}
((struct instance_standard__NativeArray*)var175)->values[4]=var185;
if (likely(varonce188!=NULL)) {
var189 = varonce188;
} else {
var190 = ".";
var191 = standard___standard__NativeString___to_s_with_length(var190, 1l);
var189 = var191;
varonce188 = var189;
}
((struct instance_standard__NativeArray*)var175)->values[6]=var189;
} else {
var175 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var175)->values[1]=var_name;
{
var192 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var175)->values[3]=var192;
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = " and ";
var196 = standard___standard__NativeString___to_s_with_length(var195, 5l);
var194 = var196;
varonce193 = var194;
}
{
var197 = standard__string___Collection___join(var_s, var194);
}
((struct instance_standard__NativeArray*)var175)->values[5]=var197;
{
var198 = ((val*(*)(val* self))(var175->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var175); /* native_to_s on <var175:NativeArray[String]>*/
}
varonce = var175;
{
nit___nit__ModelBuilder___error(self, var_anode, var198); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#try_get_mproperty_by_name2_cache (self) on <self:ModelBuilder> */
var201 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___try_get_mproperty_by_name2_cache].val; /* _try_get_mproperty_by_name2_cache on <self:ModelBuilder> */
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_get_mproperty_by_name2_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 178);
fatal_exit(1);
}
var199 = var201;
RET_LABEL200:(void)0;
}
}
{
more_collections___more_collections__HashMap3____91d_93d_61d(var199, var_mmodule, var_mtype, var_name, var_res); /* Direct call more_collections#HashMap3#[]= on <var199:HashMap3[MModule, MType, String, nullable MProperty]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#try_get_mproperty_by_name2_cache for (self: ModelBuilder): HashMap3[MModule, MType, String, nullable MProperty] */
val* nit___nit__ModelBuilder___try_get_mproperty_by_name2_cache(val* self) {
val* var /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var1 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
var1 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___try_get_mproperty_by_name2_cache].val; /* _try_get_mproperty_by_name2_cache on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_get_mproperty_by_name2_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 178);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#try_get_mproperty_by_name for (self: ModelBuilder, ANode, MClassDef, String): nullable MProperty */
val* nit___nit__ModelBuilder___try_get_mproperty_by_name(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MProperty */;
val* var_anode /* var anode: ANode */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_name /* var name: String */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
val* var4 /* : MClassType */;
val* var6 /* : MClassType */;
val* var7 /* : nullable MProperty */;
var_anode = p0;
var_mclassdef = p1;
var_name = p2;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var3 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var6 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit___nit__ModelBuilder___try_get_mproperty_by_name2(self, var_anode, var1, var4, var_name);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#error for (self: ModelBuilder, nullable ANode, String) */
void nit___nit__ModelBuilder___error(val* self, val* p0, val* p1) {
val* var_n /* var n: nullable ANode */;
val* var_text /* var text: String */;
val* var_l /* var l: nullable Object */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Location */;
val* var6 /* : ToolContext */;
val* var8 /* : ToolContext */;
val* var9 /* : Message */;
var_n = p0;
var_text = p1;
var_l = ((val*)NULL);
if (var_n == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n,((val*)NULL)) on <var_n:nullable ANode> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n, var_other); /* == on <var_n:nullable ANode(ANode)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
var5 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_n); /* hot_location on <var_n:nullable ANode(ANode)>*/
}
var_l = var5;
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var8 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nit___nit__ToolContext___error(var6, var_l, var_text);
}
RET_LABEL:;
}
/* method modelbuilder_base#ModelBuilder#warning for (self: ModelBuilder, nullable ANode, String, String) */
void nit___nit__ModelBuilder___warning(val* self, val* p0, val* p1, val* p2) {
val* var_n /* var n: nullable ANode */;
val* var_tag /* var tag: String */;
val* var_text /* var text: String */;
val* var_l /* var l: nullable Object */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Location */;
val* var6 /* : ToolContext */;
val* var8 /* : ToolContext */;
val* var9 /* : nullable Message */;
var_n = p0;
var_tag = p1;
var_text = p2;
var_l = ((val*)NULL);
if (var_n == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n,((val*)NULL)) on <var_n:nullable ANode> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n, var_other); /* == on <var_n:nullable ANode(ANode)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
var5 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_n); /* hot_location on <var_n:nullable ANode(ANode)>*/
}
var_l = var5;
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var8 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nit___nit__ToolContext___warning(var6, var_l, var_tag, var_text);
}
RET_LABEL:;
}
/* method modelbuilder_base#ModelBuilder#advice for (self: ModelBuilder, nullable ANode, String, String) */
void nit___nit__ModelBuilder___advice(val* self, val* p0, val* p1, val* p2) {
val* var_n /* var n: nullable ANode */;
val* var_tag /* var tag: String */;
val* var_text /* var text: String */;
val* var_l /* var l: nullable Object */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Location */;
val* var6 /* : ToolContext */;
val* var8 /* : ToolContext */;
val* var9 /* : nullable Message */;
var_n = p0;
var_tag = p1;
var_text = p2;
var_l = ((val*)NULL);
if (var_n == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n,((val*)NULL)) on <var_n:nullable ANode> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n, var_other); /* == on <var_n:nullable ANode(ANode)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
var5 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_n); /* hot_location on <var_n:nullable ANode(ANode)>*/
}
var_l = var5;
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var8 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nit___nit__ToolContext___advice(var6, var_l, var_tag, var_text);
}
RET_LABEL:;
}
/* method modelbuilder_base#ModelBuilder#force_get_primitive_method for (self: ModelBuilder, nullable ANode, String, MClass, MModule): MMethod */
val* nit___nit__ModelBuilder___force_get_primitive_method(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : MMethod */;
val* var_n /* var n: nullable ANode */;
val* var_name /* var name: String */;
val* var_recv /* var recv: MClass */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : nullable MMethod */;
val* var_res /* var res: nullable MMethod */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var_l /* var l: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other11 /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : Location */;
val* var15 /* : ToolContext */;
val* var17 /* : ToolContext */;
val* var18 /* : NativeArray[String] */;
static val* varonce;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
val* var31 /* : String */;
val* var32 /* : String */;
var_n = p0;
var_name = p1;
var_recv = p2;
var_mmodule = p3;
{
var1 = nit__model___MModule___try_get_primitive_method(var_mmodule, var_name, var_recv);
}
var_res = var1;
if (var_res == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,((val*)NULL)) on <var_res:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable MMethod(MMethod)> */
var7 = var_res == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var_l = ((val*)NULL);
if (var_n == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n,((val*)NULL)) on <var_n:nullable ANode> */
var_other11 = ((val*)NULL);
{
var12 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n, var_other11); /* == on <var_n:nullable ANode(ANode)>*/
}
var13 = !var12;
var9 = var13;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
{
var14 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_n); /* hot_location on <var_n:nullable ANode(ANode)>*/
}
var_l = var14;
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var17 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var18 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "Fatal Error: `";
var22 = standard___standard__NativeString___to_s_with_length(var21, 14l);
var20 = var22;
varonce19 = var20;
}
((struct instance_standard__NativeArray*)var18)->values[0]=var20;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "` must have a property named `";
var26 = standard___standard__NativeString___to_s_with_length(var25, 30l);
var24 = var26;
varonce23 = var24;
}
((struct instance_standard__NativeArray*)var18)->values[2]=var24;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "`.";
var30 = standard___standard__NativeString___to_s_with_length(var29, 2l);
var28 = var30;
varonce27 = var28;
}
((struct instance_standard__NativeArray*)var18)->values[4]=var28;
} else {
var18 = varonce;
varonce = NULL;
}
{
var31 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_standard__string__Object__to_s]))(var_recv); /* to_s on <var_recv:MClass>*/
}
((struct instance_standard__NativeArray*)var18)->values[1]=var31;
((struct instance_standard__NativeArray*)var18)->values[3]=var_name;
{
var32 = ((val*(*)(val* self))(var18->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce = var18;
{
nit___nit__ToolContext___fatal_error(var15, var_l, var32); /* Direct call toolcontext#ToolContext#fatal_error on <var15:ToolContext>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 222);
fatal_exit(1);
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#resolve_mtype_unchecked for (self: ModelBuilder, MModule, nullable MClassDef, AType, Bool): nullable MType */
val* nit___nit__ModelBuilder___resolve_mtype_unchecked(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : nullable MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
val* var_ntype /* var ntype: AType */;
short int var_with_virtual /* var with_virtual: Bool */;
val* var1 /* : TClassid */;
val* var3 /* : TClassid */;
val* var4 /* : String */;
val* var_name /* var name: String */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
val* var11 /* : nullable MProperty */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_prop /* var prop: nullable MVirtualTypeProp */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : ANodes[AType] */;
val* var20 /* : ANodes[AType] */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : NativeArray[String] */;
static val* varonce;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
val* var32 /* : String */;
val* var33 /* : MVirtualType */;
val* var35 /* : MVirtualType */;
val* var_res /* var res: MType */;
val* var36 /* : nullable TKwnullable */;
val* var38 /* : nullable TKwnullable */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : MType */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : MClass */;
val* var53 /* : MClass */;
val* var54 /* : Array[MParameterType] */;
val* var56 /* : Array[MParameterType] */;
val* var_57 /* var : Array[MParameterType] */;
val* var58 /* : ArrayIterator[nullable Object] */;
val* var_59 /* var : ArrayIterator[MParameterType] */;
short int var60 /* : Bool */;
val* var61 /* : nullable Object */;
val* var_p /* var p: MParameterType */;
val* var62 /* : String */;
val* var64 /* : String */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
val* var69 /* : ANodes[AType] */;
val* var71 /* : ANodes[AType] */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
val* var75 /* : NativeArray[String] */;
static val* varonce74;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : FlatString */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : FlatString */;
val* var84 /* : String */;
val* var85 /* : nullable TKwnullable */;
val* var87 /* : nullable TKwnullable */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
val* var93 /* : MType */;
val* var96 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
val* var102 /* : ANodes[AType] */;
val* var104 /* : ANodes[AType] */;
long var105 /* : Int */;
long var_arity /* var arity: Int */;
long var106 /* : Int */;
long var108 /* : Int */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
short int var115 /* : Bool */;
val* var117 /* : NativeArray[String] */;
static val* varonce116;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
val* var121 /* : FlatString */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
val* var125 /* : FlatString */;
val* var126 /* : String */;
val* var127 /* : String */;
long var128 /* : Int */;
long var130 /* : Int */;
short int var131 /* : Bool */;
short int var133 /* : Bool */;
val* var135 /* : NativeArray[String] */;
static val* varonce134;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
val* var139 /* : FlatString */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
val* var143 /* : FlatString */;
val* var144 /* : String */;
val* var146 /* : NativeArray[String] */;
static val* varonce145;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
val* var150 /* : FlatString */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
val* var154 /* : FlatString */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : NativeString */;
val* var158 /* : FlatString */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
val* var162 /* : FlatString */;
long var163 /* : Int */;
long var165 /* : Int */;
val* var166 /* : String */;
val* var167 /* : String */;
val* var168 /* : String */;
val* var169 /* : String */;
short int var170 /* : Bool */;
short int var172 /* : Bool */;
val* var173 /* : MClassType */;
val* var175 /* : MClassType */;
val* var176 /* : nullable TKwnullable */;
val* var178 /* : nullable TKwnullable */;
short int var179 /* : Bool */;
short int var180 /* : Bool */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
val* var184 /* : MType */;
val* var186 /* : Array[MType] */;
val* var_mtypes /* var mtypes: Array[MType] */;
val* var187 /* : ANodes[AType] */;
val* var189 /* : ANodes[AType] */;
val* var_190 /* var : ANodes[AType] */;
val* var191 /* : Iterator[ANode] */;
val* var_192 /* var : Iterator[AType] */;
short int var193 /* : Bool */;
val* var194 /* : nullable Object */;
val* var_nt /* var nt: AType */;
val* var195 /* : nullable MType */;
val* var_mt /* var mt: nullable MType */;
short int var196 /* : Bool */;
short int var197 /* : Bool */;
val* var_other199 /* var other: nullable Object */;
short int var200 /* : Bool */;
short int var202 /* : Bool */;
val* var204 /* : MClassType */;
val* var205 /* : nullable TKwnullable */;
val* var207 /* : nullable TKwnullable */;
short int var208 /* : Bool */;
short int var209 /* : Bool */;
short int var211 /* : Bool */;
short int var212 /* : Bool */;
val* var213 /* : MType */;
val* var216 /* : NativeArray[String] */;
static val* varonce215;
static val* varonce217;
val* var218 /* : String */;
char* var219 /* : NativeString */;
val* var220 /* : FlatString */;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : NativeString */;
val* var224 /* : FlatString */;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : NativeString */;
val* var228 /* : FlatString */;
val* var229 /* : String */;
val* var230 /* : String */;
var_mmodule = p0;
var_mclassdef = p1;
var_ntype = p2;
var_with_virtual = p3;
{
{ /* Inline parser_nodes#AType#n_id (var_ntype) on <var_ntype:AType> */
var3 = var_ntype->attrs[COLOR_nit__parser_nodes__AType___n_id].val; /* _n_id on <var_ntype:AType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1723);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__lexer_work___Token___text(var1);
}
var_name = var4;
if (var_mclassdef == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other = ((val*)NULL);
{
var9 = ((short int(*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclassdef, var_other); /* == on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
var_ = var6;
if (var6){
var5 = var_with_virtual;
} else {
var5 = var_;
}
if (var5){
{
var11 = nit___nit__ModelBuilder___try_get_mproperty_by_name(self, var_ntype, var_mclassdef, var_name);
}
/* <var11:nullable MProperty> isa nullable MVirtualTypeProp */
cltype = type_nullable__nit__MVirtualTypeProp.color;
idtype = type_nullable__nit__MVirtualTypeProp.id;
if(var11 == NULL) {
var12 = 1;
} else {
if(cltype >= var11->type->table_size) {
var12 = 0;
} else {
var12 = var11->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var12)) {
var_class_name = var11 == NULL ? "null" : var11->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MVirtualTypeProp", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 238);
fatal_exit(1);
}
var_prop = var11;
if (var_prop == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_prop,((val*)NULL)) on <var_prop:nullable MVirtualTypeProp> */
var_other = ((val*)NULL);
{
var16 = ((short int(*)(val* self, val* p0))(var_prop->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_prop, var_other); /* == on <var_prop:nullable MVirtualTypeProp(MVirtualTypeProp)>*/
}
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
{
{ /* Inline parser_nodes#AType#n_types (var_ntype) on <var_ntype:AType> */
var20 = var_ntype->attrs[COLOR_nit__parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1729);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(var18);
}
var22 = !var21;
if (var22){
if (unlikely(varonce==NULL)) {
var23 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "Type Error: formal type `";
var27 = standard___standard__NativeString___to_s_with_length(var26, 25l);
var25 = var27;
varonce24 = var25;
}
((struct instance_standard__NativeArray*)var23)->values[0]=var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "` cannot have formal parameters.";
var31 = standard___standard__NativeString___to_s_with_length(var30, 32l);
var29 = var31;
varonce28 = var29;
}
((struct instance_standard__NativeArray*)var23)->values[2]=var29;
} else {
var23 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var23)->values[1]=var_name;
{
var32 = ((val*(*)(val* self))(var23->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce = var23;
{
nit___nit__ModelBuilder___error(self, var_ntype, var32); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline model#MVirtualTypeProp#mvirtualtype (var_prop) on <var_prop:nullable MVirtualTypeProp(MVirtualTypeProp)> */
var35 = var_prop->attrs[COLOR_nit__model__MVirtualTypeProp___mvirtualtype].val; /* _mvirtualtype on <var_prop:nullable MVirtualTypeProp(MVirtualTypeProp)> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mvirtualtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2191);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
var_res = var33;
{
{ /* Inline parser_nodes#AType#n_kwnullable (var_ntype) on <var_ntype:AType> */
var38 = var_ntype->attrs[COLOR_nit__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <var_ntype:AType> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
if (var36 == NULL) {
var39 = 0; /* is null */
} else {
var39 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var36,((val*)NULL)) on <var36:nullable TKwnullable> */
var_other = ((val*)NULL);
{
var42 = ((short int(*)(val* self, val* p0))(var36->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var36, var_other); /* == on <var36:nullable TKwnullable(TKwnullable)>*/
}
var43 = !var42;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var39 = var40;
}
if (var39){
{
var44 = nit___nit__MType___as_nullable(var_res);
}
var_res = var44;
} else {
}
{
{ /* Inline modelbuilder_base#AType#mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nit__modelbuilder_base__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL45:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
if (var_mclassdef == NULL) {
var46 = 0; /* is null */
} else {
var46 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other = ((val*)NULL);
{
var49 = ((short int(*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclassdef, var_other); /* == on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
var50 = !var49;
var47 = var50;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
if (var46){
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var53 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline model#MClass#mparameters (var51) on <var51:MClass> */
var56 = var51->attrs[COLOR_nit__model__MClass___mparameters].val; /* _mparameters on <var51:MClass> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 382);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
var_57 = var54;
{
var58 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_57);
}
var_59 = var58;
for(;;) {
{
var60 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_59);
}
if (var60){
{
var61 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_59);
}
var_p = var61;
{
{ /* Inline model#MParameterType#name (var_p) on <var_p:MParameterType> */
var64 = var_p->attrs[COLOR_nit__model__MParameterType___name].val; /* _name on <var_p:MParameterType> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1481);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var62,var_name) on <var62:String> */
var_other = var_name;
{
var67 = ((short int(*)(val* self, val* p0))(var62->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var62, var_other); /* == on <var62:String>*/
}
var68 = !var67;
var65 = var68;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
if (var65){
goto BREAK_label;
} else {
}
{
{ /* Inline parser_nodes#AType#n_types (var_ntype) on <var_ntype:AType> */
var71 = var_ntype->attrs[COLOR_nit__parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1729);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(var69);
}
var73 = !var72;
if (var73){
if (unlikely(varonce74==NULL)) {
var75 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "Type Error: formal type `";
var79 = standard___standard__NativeString___to_s_with_length(var78, 25l);
var77 = var79;
varonce76 = var77;
}
((struct instance_standard__NativeArray*)var75)->values[0]=var77;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "` cannot have formal parameters.";
var83 = standard___standard__NativeString___to_s_with_length(var82, 32l);
var81 = var83;
varonce80 = var81;
}
((struct instance_standard__NativeArray*)var75)->values[2]=var81;
} else {
var75 = varonce74;
varonce74 = NULL;
}
((struct instance_standard__NativeArray*)var75)->values[1]=var_name;
{
var84 = ((val*(*)(val* self))(var75->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var75); /* native_to_s on <var75:NativeArray[String]>*/
}
varonce74 = var75;
{
nit___nit__ModelBuilder___error(self, var_ntype, var84); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
var_res = var_p;
{
{ /* Inline parser_nodes#AType#n_kwnullable (var_ntype) on <var_ntype:AType> */
var87 = var_ntype->attrs[COLOR_nit__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <var_ntype:AType> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
if (var85 == NULL) {
var88 = 0; /* is null */
} else {
var88 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var85,((val*)NULL)) on <var85:nullable TKwnullable> */
var_other = ((val*)NULL);
{
var91 = ((short int(*)(val* self, val* p0))(var85->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var85, var_other); /* == on <var85:nullable TKwnullable(TKwnullable)>*/
}
var92 = !var91;
var89 = var92;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
var88 = var89;
}
if (var88){
{
var93 = nit___nit__MType___as_nullable(var_res);
}
var_res = var93;
} else {
}
{
{ /* Inline modelbuilder_base#AType#mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nit__modelbuilder_base__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL94:(void)0;
}
}
var = var_res;
goto RET_LABEL;
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_59); /* Direct call array#ArrayIterator#next on <var_59:ArrayIterator[MParameterType]>*/
}
} else {
goto BREAK_label95;
}
}
BREAK_label95: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_59); /* Direct call array#ArrayIterator#finish on <var_59:ArrayIterator[MParameterType]>*/
}
} else {
}
{
var96 = nit___nit__ModelBuilder___try_get_mclass_by_name(self, var_ntype, var_mmodule, var_name);
}
var_mclass = var96;
if (var_mclass == NULL) {
var97 = 0; /* is null */
} else {
var97 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
var100 = ((short int(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclass, var_other); /* == on <var_mclass:nullable MClass(MClass)>*/
}
var101 = !var100;
var98 = var101;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
var97 = var98;
}
if (var97){
{
{ /* Inline parser_nodes#AType#n_types (var_ntype) on <var_ntype:AType> */
var104 = var_ntype->attrs[COLOR_nit__parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1729);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
var105 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var102);
}
var_arity = var105;
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var108 = var_mclass->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_arity,var106) on <var_arity:Int> */
var111 = var_arity == var106;
var112 = !var111;
var109 = var112;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
}
if (var109){
{
{ /* Inline kernel#Int#== (var_arity,0l) on <var_arity:Int> */
var115 = var_arity == 0l;
var113 = var115;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
}
if (var113){
if (unlikely(varonce116==NULL)) {
var117 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "Type Error: `";
var121 = standard___standard__NativeString___to_s_with_length(var120, 13l);
var119 = var121;
varonce118 = var119;
}
((struct instance_standard__NativeArray*)var117)->values[0]=var119;
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = "` is a generic class.";
var125 = standard___standard__NativeString___to_s_with_length(var124, 21l);
var123 = var125;
varonce122 = var123;
}
((struct instance_standard__NativeArray*)var117)->values[2]=var123;
} else {
var117 = varonce116;
varonce116 = NULL;
}
{
var126 = nit___nit__MClass___signature_to_s(var_mclass);
}
((struct instance_standard__NativeArray*)var117)->values[1]=var126;
{
var127 = ((val*(*)(val* self))(var117->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var117); /* native_to_s on <var117:NativeArray[String]>*/
}
varonce116 = var117;
{
nit___nit__ModelBuilder___error(self, var_ntype, var127); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var130 = var_mclass->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var128,0l) on <var128:Int> */
var133 = var128 == 0l;
var131 = var133;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
}
if (var131){
if (unlikely(varonce134==NULL)) {
var135 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce136!=NULL)) {
var137 = varonce136;
} else {
var138 = "Type Error: `";
var139 = standard___standard__NativeString___to_s_with_length(var138, 13l);
var137 = var139;
varonce136 = var137;
}
((struct instance_standard__NativeArray*)var135)->values[0]=var137;
if (likely(varonce140!=NULL)) {
var141 = varonce140;
} else {
var142 = "` is not a generic class.";
var143 = standard___standard__NativeString___to_s_with_length(var142, 25l);
var141 = var143;
varonce140 = var141;
}
((struct instance_standard__NativeArray*)var135)->values[2]=var141;
} else {
var135 = varonce134;
varonce134 = NULL;
}
((struct instance_standard__NativeArray*)var135)->values[1]=var_name;
{
var144 = ((val*(*)(val* self))(var135->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var135); /* native_to_s on <var135:NativeArray[String]>*/
}
varonce134 = var135;
{
nit___nit__ModelBuilder___error(self, var_ntype, var144); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
if (unlikely(varonce145==NULL)) {
var146 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = "Type Error: expected ";
var150 = standard___standard__NativeString___to_s_with_length(var149, 21l);
var148 = var150;
varonce147 = var148;
}
((struct instance_standard__NativeArray*)var146)->values[0]=var148;
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = " formal argument(s) for `";
var154 = standard___standard__NativeString___to_s_with_length(var153, 25l);
var152 = var154;
varonce151 = var152;
}
((struct instance_standard__NativeArray*)var146)->values[2]=var152;
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = "`; got ";
var158 = standard___standard__NativeString___to_s_with_length(var157, 7l);
var156 = var158;
varonce155 = var156;
}
((struct instance_standard__NativeArray*)var146)->values[4]=var156;
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = ".";
var162 = standard___standard__NativeString___to_s_with_length(var161, 1l);
var160 = var162;
varonce159 = var160;
}
((struct instance_standard__NativeArray*)var146)->values[6]=var160;
} else {
var146 = varonce145;
varonce145 = NULL;
}
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var165 = var_mclass->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var163 = var165;
RET_LABEL164:(void)0;
}
}
var166 = standard__string___Int___Object__to_s(var163);
((struct instance_standard__NativeArray*)var146)->values[1]=var166;
{
var167 = nit___nit__MClass___signature_to_s(var_mclass);
}
((struct instance_standard__NativeArray*)var146)->values[3]=var167;
var168 = standard__string___Int___Object__to_s(var_arity);
((struct instance_standard__NativeArray*)var146)->values[5]=var168;
{
var169 = ((val*(*)(val* self))(var146->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var146); /* native_to_s on <var146:NativeArray[String]>*/
}
varonce145 = var146;
{
nit___nit__ModelBuilder___error(self, var_ntype, var169); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#== (var_arity,0l) on <var_arity:Int> */
var172 = var_arity == 0l;
var170 = var172;
goto RET_LABEL171;
RET_LABEL171:(void)0;
}
}
if (var170){
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var175 = var_mclass->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var175 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var173 = var175;
RET_LABEL174:(void)0;
}
}
var_res = var173;
{
{ /* Inline parser_nodes#AType#n_kwnullable (var_ntype) on <var_ntype:AType> */
var178 = var_ntype->attrs[COLOR_nit__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <var_ntype:AType> */
var176 = var178;
RET_LABEL177:(void)0;
}
}
if (var176 == NULL) {
var179 = 0; /* is null */
} else {
var179 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var176,((val*)NULL)) on <var176:nullable TKwnullable> */
var_other = ((val*)NULL);
{
var182 = ((short int(*)(val* self, val* p0))(var176->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var176, var_other); /* == on <var176:nullable TKwnullable(TKwnullable)>*/
}
var183 = !var182;
var180 = var183;
goto RET_LABEL181;
RET_LABEL181:(void)0;
}
var179 = var180;
}
if (var179){
{
var184 = nit___nit__MType___as_nullable(var_res);
}
var_res = var184;
} else {
}
{
{ /* Inline modelbuilder_base#AType#mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nit__modelbuilder_base__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL185:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
var186 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___standard__kernel__Object__init(var186); /* Direct call array#Array#init on <var186:Array[MType]>*/
}
var_mtypes = var186;
{
{ /* Inline parser_nodes#AType#n_types (var_ntype) on <var_ntype:AType> */
var189 = var_ntype->attrs[COLOR_nit__parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var189 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1729);
fatal_exit(1);
}
var187 = var189;
RET_LABEL188:(void)0;
}
}
var_190 = var187;
{
var191 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_190);
}
var_192 = var191;
for(;;) {
{
var193 = ((short int(*)(val* self))((((long)var_192&3)?class_info[((long)var_192&3)]:var_192->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_192); /* is_ok on <var_192:Iterator[AType]>*/
}
if (var193){
{
var194 = ((val*(*)(val* self))((((long)var_192&3)?class_info[((long)var_192&3)]:var_192->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_192); /* item on <var_192:Iterator[AType]>*/
}
var_nt = var194;
{
var195 = nit___nit__ModelBuilder___resolve_mtype_unchecked(self, var_mmodule, var_mclassdef, var_nt, var_with_virtual);
}
var_mt = var195;
if (var_mt == NULL) {
var196 = 1; /* is null */
} else {
var196 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mt,((val*)NULL)) on <var_mt:nullable MType> */
var_other199 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mt,var_other199) on <var_mt:nullable MType(MType)> */
var202 = var_mt == var_other199;
var200 = var202;
goto RET_LABEL201;
RET_LABEL201:(void)0;
}
}
var197 = var200;
goto RET_LABEL198;
RET_LABEL198:(void)0;
}
var196 = var197;
}
if (var196){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_mtypes, var_mt); /* Direct call array#Array#add on <var_mtypes:Array[MType]>*/
}
{
((void(*)(val* self))((((long)var_192&3)?class_info[((long)var_192&3)]:var_192->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_192); /* next on <var_192:Iterator[AType]>*/
}
} else {
goto BREAK_label203;
}
}
BREAK_label203: (void)0;
{
((void(*)(val* self))((((long)var_192&3)?class_info[((long)var_192&3)]:var_192->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_192); /* finish on <var_192:Iterator[AType]>*/
}
{
var204 = nit___nit__MClass___get_mtype(var_mclass, var_mtypes);
}
var_res = var204;
{
{ /* Inline parser_nodes#AType#n_kwnullable (var_ntype) on <var_ntype:AType> */
var207 = var_ntype->attrs[COLOR_nit__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <var_ntype:AType> */
var205 = var207;
RET_LABEL206:(void)0;
}
}
if (var205 == NULL) {
var208 = 0; /* is null */
} else {
var208 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var205,((val*)NULL)) on <var205:nullable TKwnullable> */
var_other = ((val*)NULL);
{
var211 = ((short int(*)(val* self, val* p0))(var205->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var205, var_other); /* == on <var205:nullable TKwnullable(TKwnullable)>*/
}
var212 = !var211;
var209 = var212;
goto RET_LABEL210;
RET_LABEL210:(void)0;
}
var208 = var209;
}
if (var208){
{
var213 = nit___nit__MType___as_nullable(var_res);
}
var_res = var213;
} else {
}
{
{ /* Inline modelbuilder_base#AType#mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nit__modelbuilder_base__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL214:(void)0;
}
}
var = var_res;
goto RET_LABEL;
}
} else {
}
if (unlikely(varonce215==NULL)) {
var216 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce217!=NULL)) {
var218 = varonce217;
} else {
var219 = "Error: class `";
var220 = standard___standard__NativeString___to_s_with_length(var219, 14l);
var218 = var220;
varonce217 = var218;
}
((struct instance_standard__NativeArray*)var216)->values[0]=var218;
if (likely(varonce221!=NULL)) {
var222 = varonce221;
} else {
var223 = "` not found in module `";
var224 = standard___standard__NativeString___to_s_with_length(var223, 23l);
var222 = var224;
varonce221 = var222;
}
((struct instance_standard__NativeArray*)var216)->values[2]=var222;
if (likely(varonce225!=NULL)) {
var226 = varonce225;
} else {
var227 = "`.";
var228 = standard___standard__NativeString___to_s_with_length(var227, 2l);
var226 = var228;
varonce225 = var226;
}
((struct instance_standard__NativeArray*)var216)->values[4]=var226;
} else {
var216 = varonce215;
varonce215 = NULL;
}
((struct instance_standard__NativeArray*)var216)->values[1]=var_name;
{
var229 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_standard__string__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_standard__NativeArray*)var216)->values[3]=var229;
{
var230 = ((val*(*)(val* self))(var216->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var216); /* native_to_s on <var216:NativeArray[String]>*/
}
varonce215 = var216;
{
nit___nit__ModelBuilder___error(self, var_ntype, var230); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#resolve_mtype for (self: ModelBuilder, MModule, nullable MClassDef, AType): nullable MType */
val* nit___nit__ModelBuilder___resolve_mtype(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
val* var_ntype /* var ntype: AType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable MType */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
int cltype;
int idtype;
val* var21 /* : MClass */;
val* var23 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
long var_i /* var i: Int */;
long var24 /* : Int */;
long var26 /* : Int */;
long var_ /* var : Int */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name;
short int var32 /* : Bool */;
val* var33 /* : nullable MClassDef */;
val* var_intro /* var intro: nullable MClassDef */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : MClassType */;
val* var42 /* : MClassType */;
val* var43 /* : Array[MType] */;
val* var44 /* : nullable Object */;
val* var_bound /* var bound: MType */;
val* var45 /* : ANodes[AType] */;
val* var47 /* : ANodes[AType] */;
val* var48 /* : ANode */;
val* var_nt /* var nt: AType */;
val* var49 /* : nullable MType */;
val* var_mt /* var mt: nullable MType */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var_other59 /* var other: nullable Object */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var62 /* : MClassType */;
val* var64 /* : MClassType */;
val* var_anchor /* var anchor: nullable Object */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
val* var67 /* : NativeArray[String] */;
static val* varonce;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
val* var71 /* : FlatString */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : FlatString */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : FlatString */;
val* var80 /* : String */;
val* var81 /* : String */;
val* var82 /* : String */;
long var83 /* : Int */;
var_mmodule = p0;
var_mclassdef = p1;
var_ntype = p2;
{
{ /* Inline modelbuilder_base#AType#mtype (var_ntype) on <var_ntype:AType> */
var3 = var_ntype->attrs[COLOR_nit__modelbuilder_base__AType___mtype].val; /* _mtype on <var_ntype:AType> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mtype = var1;
if (var_mtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var9 = var_mtype == var_other;
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
{
var10 = nit___nit__ModelBuilder___resolve_mtype_unchecked(self, var_mmodule, var_mclassdef, var_ntype, 1);
}
var_mtype = var10;
} else {
}
if (var_mtype == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var16 = var_mtype == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder_base#AType#checked_mtype (var_ntype) on <var_ntype:AType> */
var19 = var_ntype->attrs[COLOR_nit__modelbuilder_base__AType___checked_mtype].s; /* _checked_mtype on <var_ntype:AType> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (var17){
var = var_mtype;
goto RET_LABEL;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MGenericType */
cltype = type_nit__MGenericType.color;
idtype = type_nit__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var20 = 0;
} else {
var20 = var_mtype->type->type_table[cltype] == idtype;
}
if (var20){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MType(MGenericType)> */
var23 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MGenericType)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_mclass = var21;
var_i = 0l;
{
{ /* Inline model#MClass#arity (var_mclass) on <var_mclass:MClass> */
var26 = var_mclass->attrs[COLOR_nit__model__MClass___arity].l; /* _arity on <var_mclass:MClass> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_ = var24;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var29 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var32 = var_i < var_;
var27 = var32;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
{
var33 = nit___nit__MClass___try_intro(var_mclass);
}
var_intro = var33;
if (var_intro == NULL) {
var34 = 1; /* is null */
} else {
var34 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_intro,((val*)NULL)) on <var_intro:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_intro,var_other) on <var_intro:nullable MClassDef(MClassDef)> */
var39 = var_intro == var_other;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassDef#bound_mtype (var_intro) on <var_intro:nullable MClassDef(MClassDef)> */
var42 = var_intro->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intro:nullable MClassDef(MClassDef)> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = ((val*(*)(val* self))(var40->class->vft[COLOR_nit__model__MClassType__arguments]))(var40); /* arguments on <var40:MClassType>*/
}
{
var44 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var43, var_i);
}
var_bound = var44;
{
{ /* Inline parser_nodes#AType#n_types (var_ntype) on <var_ntype:AType> */
var47 = var_ntype->attrs[COLOR_nit__parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1729);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(var45, var_i);
}
var_nt = var48;
{
var49 = nit___nit__ModelBuilder___resolve_mtype(self, var_mmodule, var_mclassdef, var_nt);
}
var_mt = var49;
if (var_mt == NULL) {
var50 = 1; /* is null */
} else {
var50 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mt,((val*)NULL)) on <var_mt:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mt,var_other) on <var_mt:nullable MType(MType)> */
var55 = var_mt == var_other;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (var_mclassdef == NULL) {
var56 = 0; /* is null */
} else {
var56 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other59 = ((val*)NULL);
{
var60 = ((short int(*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mclassdef, var_other59); /* == on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
var61 = !var60;
var57 = var61;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (var56){
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var64 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_anchor = var62;
} else {
var_anchor = ((val*)NULL);
}
{
var65 = nit___nit__ModelBuilder___check_subtype(self, var_nt, var_mmodule, var_anchor, var_mt, var_bound);
}
var66 = !var65;
if (var66){
if (unlikely(varonce==NULL)) {
var67 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "Type Error: expected `";
var71 = standard___standard__NativeString___to_s_with_length(var70, 22l);
var69 = var71;
varonce68 = var69;
}
((struct instance_standard__NativeArray*)var67)->values[0]=var69;
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "`, got `";
var75 = standard___standard__NativeString___to_s_with_length(var74, 8l);
var73 = var75;
varonce72 = var73;
}
((struct instance_standard__NativeArray*)var67)->values[2]=var73;
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "`.";
var79 = standard___standard__NativeString___to_s_with_length(var78, 2l);
var77 = var79;
varonce76 = var77;
}
((struct instance_standard__NativeArray*)var67)->values[4]=var77;
} else {
var67 = varonce;
varonce = NULL;
}
{
var80 = ((val*(*)(val* self))(var_bound->class->vft[COLOR_standard__string__Object__to_s]))(var_bound); /* to_s on <var_bound:MType>*/
}
((struct instance_standard__NativeArray*)var67)->values[1]=var80;
{
var81 = ((val*(*)(val* self))(var_mt->class->vft[COLOR_standard__string__Object__to_s]))(var_mt); /* to_s on <var_mt:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var67)->values[3]=var81;
{
var82 = ((val*(*)(val* self))(var67->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var67); /* native_to_s on <var67:NativeArray[String]>*/
}
varonce = var67;
{
nit___nit__ModelBuilder___error(self, var_nt, var82); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var83 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var83;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
} else {
}
{
{ /* Inline modelbuilder_base#AType#checked_mtype= (var_ntype,1) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nit__modelbuilder_base__AType___checked_mtype].s = 1; /* _checked_mtype on <var_ntype:AType> */
RET_LABEL84:(void)0;
}
}
var = var_mtype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#check_subtype for (self: ModelBuilder, ANode, MModule, nullable MClassType, MType, MType): Bool */
short int nit___nit__ModelBuilder___check_subtype(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
short int var /* : Bool */;
val* var_node /* var node: ANode */;
val* var_mmodule /* var mmodule: MModule */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_sub /* var sub: MType */;
val* var_sup /* var sup: MType */;
short int var1 /* : Bool */;
var_node = p0;
var_mmodule = p1;
var_anchor = p2;
var_sub = p3;
var_sup = p4;
{
var1 = nit___nit__MType___is_subtype(var_sub, var_mmodule, var_anchor, var_sup);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ModelBuilder#check_sametype for (self: ModelBuilder, ANode, MModule, nullable MClassType, MType, MType): Bool */
short int nit___nit__ModelBuilder___check_sametype(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
short int var /* : Bool */;
val* var_node /* var node: ANode */;
val* var_mmodule /* var mmodule: MModule */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_sub /* var sub: MType */;
val* var_sup /* var sup: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
short int var3 /* : Bool */;
var_node = p0;
var_mmodule = p1;
var_anchor = p2;
var_sub = p3;
var_sup = p4;
{
var2 = nit___nit__MType___is_subtype(var_sub, var_mmodule, var_anchor, var_sup);
}
var_ = var2;
if (var2){
{
var3 = nit___nit__MType___is_subtype(var_sup, var_mmodule, var_anchor, var_sub);
}
var1 = var3;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#AType#mtype for (self: AType): nullable MType */
val* nit__modelbuilder_base___AType___mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__modelbuilder_base__AType___mtype].val; /* _mtype on <self:AType> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#AType#mtype= for (self: AType, nullable MType) */
void nit__modelbuilder_base___AType___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelbuilder_base__AType___mtype].val = p0; /* _mtype on <self:AType> */
RET_LABEL:;
}
/* method modelbuilder_base#AType#checked_mtype for (self: AType): Bool */
short int nit__modelbuilder_base___AType___checked_mtype(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__modelbuilder_base__AType___checked_mtype].s; /* _checked_mtype on <self:AType> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#AType#checked_mtype= for (self: AType, Bool) */
void nit__modelbuilder_base___AType___checked_mtype_61d(val* self, short int p0) {
self->attrs[COLOR_nit__modelbuilder_base__AType___checked_mtype].s = p0; /* _checked_mtype on <self:AType> */
RET_LABEL:;
}
/* method modelbuilder_base#AIntrudeVisibility#mvisibility for (self: AIntrudeVisibility): MVisibility */
val* nit__modelbuilder_base___AIntrudeVisibility___AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
var1 = glob_sys;
{
var2 = nit__model_base___standard__Sys___intrude_visibility(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#APublicVisibility#mvisibility for (self: APublicVisibility): MVisibility */
val* nit__modelbuilder_base___APublicVisibility___AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
var1 = glob_sys;
{
var2 = nit__model_base___standard__Sys___public_visibility(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#AProtectedVisibility#mvisibility for (self: AProtectedVisibility): MVisibility */
val* nit__modelbuilder_base___AProtectedVisibility___AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
var1 = glob_sys;
{
var2 = nit__model_base___standard__Sys___protected_visibility(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#APrivateVisibility#mvisibility for (self: APrivateVisibility): MVisibility */
val* nit__modelbuilder_base___APrivateVisibility___AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
var1 = glob_sys;
{
var2 = nit__model_base___standard__Sys___private_visibility(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ADoc#mdoc_cache for (self: ADoc): nullable MDoc */
val* nit__modelbuilder_base___ADoc___mdoc_cache(val* self) {
val* var /* : nullable MDoc */;
val* var1 /* : nullable MDoc */;
var1 = self->attrs[COLOR_nit__modelbuilder_base__ADoc___mdoc_cache].val; /* _mdoc_cache on <self:ADoc> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#ADoc#mdoc_cache= for (self: ADoc, nullable MDoc) */
void nit__modelbuilder_base___ADoc___mdoc_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__modelbuilder_base__ADoc___mdoc_cache].val = p0; /* _mdoc_cache on <self:ADoc> */
RET_LABEL:;
}
/* method modelbuilder_base#ADoc#to_mdoc for (self: ADoc): MDoc */
val* nit__modelbuilder_base___ADoc___to_mdoc(val* self) {
val* var /* : MDoc */;
val* var1 /* : nullable MDoc */;
val* var3 /* : nullable MDoc */;
val* var_res /* var res: nullable MDoc */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MDoc */;
val* var10 /* : Location */;
val* var12 /* : Location */;
val* var13 /* : ANodes[TComment] */;
val* var15 /* : ANodes[TComment] */;
val* var_ /* var : ANodes[TComment] */;
val* var16 /* : Iterator[ANode] */;
val* var_17 /* var : Iterator[TComment] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_c /* var c: TComment */;
val* var20 /* : String */;
val* var_text /* var text: String */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var25 /* : Bool */;
val* var26 /* : Array[String] */;
val* var28 /* : Array[String] */;
static val* varonce;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
val* var32 /* : SequenceRead[Char] */;
val* var33 /* : nullable Object */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
uint32_t var37 /* : Char */;
val* var38 /* : SequenceRead[Char] */;
val* var39 /* : nullable Object */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
uint32_t var43 /* : Char */;
val* var44 /* : Text */;
val* var45 /* : Text */;
val* var46 /* : SequenceRead[Char] */;
val* var47 /* : nullable Object */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
uint32_t var51 /* : Char */;
long var52 /* : Int */;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
long var59 /* : Int */;
val* var60 /* : Text */;
val* var61 /* : Array[String] */;
val* var63 /* : Array[String] */;
{
{ /* Inline modelbuilder_base#ADoc#mdoc_cache (self) on <self:ADoc> */
var3 = self->attrs[COLOR_nit__modelbuilder_base__ADoc___mdoc_cache].val; /* _mdoc_cache on <self:ADoc> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
if (var_res == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable MDoc> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable MDoc(MDoc)>*/
}
var8 = !var7;
var5 = var8;
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
var9 = NEW_nit__MDoc(&type_nit__MDoc);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:ADoc> */
var12 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:ADoc> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nit__mdoc__MDoc__location_61d]))(var9, var10); /* location= on <var9:MDoc>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_standard__kernel__Object__init]))(var9); /* init on <var9:MDoc>*/
}
var_res = var9;
{
{ /* Inline parser_nodes#ADoc#n_comment (self) on <self:ADoc> */
var15 = self->attrs[COLOR_nit__parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_comment");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2945);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_ = var13;
{
var16 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:Iterator[TComment]>*/
}
if (var18){
{
var19 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:Iterator[TComment]>*/
}
var_c = var19;
{
var20 = nit__lexer_work___Token___text(var_c);
}
var_text = var20;
{
var21 = ((long(*)(val* self))(var_text->class->vft[COLOR_standard__string__Text__length]))(var_text); /* length on <var_text:String>*/
}
{
{ /* Inline kernel#Int#< (var21,2l) on <var21:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var24 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var25 = var21 < 2l;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
{ /* Inline mdoc#MDoc#content (var_res) on <var_res:nullable MDoc(MDoc)> */
var28 = var_res->attrs[COLOR_nit__mdoc__MDoc___content].val; /* _content on <var_res:nullable MDoc(MDoc)> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mdoc, 23);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (likely(varonce!=NULL)) {
var29 = varonce;
} else {
var30 = "";
var31 = standard___standard__NativeString___to_s_with_length(var30, 0l);
var29 = var31;
varonce = var29;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var26, var29); /* Direct call array#Array#add on <var26:Array[String]>*/
}
goto BREAK_label;
} else {
}
{
var32 = ((val*(*)(val* self))(var_text->class->vft[COLOR_standard__string__Text__chars]))(var_text); /* chars on <var_text:String>*/
}
{
var33 = ((val*(*)(val* self, long p0))((((long)var32&3)?class_info[((long)var32&3)]:var32->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var32, 0l); /* [] on <var32:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var33,'#') on <var33:nullable Object(Char)> */
var37 = (uint32_t)((long)(var33)>>2);
var36 = (var33 != NULL) && (var37 == '#');
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (unlikely(!var34)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 397);
fatal_exit(1);
}
{
var38 = ((val*(*)(val* self))(var_text->class->vft[COLOR_standard__string__Text__chars]))(var_text); /* chars on <var_text:String>*/
}
{
var39 = ((val*(*)(val* self, long p0))((((long)var38&3)?class_info[((long)var38&3)]:var38->class)->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var38, 1l); /* [] on <var38:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var39,' ') on <var39:nullable Object(Char)> */
var43 = (uint32_t)((long)(var39)>>2);
var42 = (var39 != NULL) && (var43 == ' ');
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
if (var40){
{
var44 = standard___standard__Text___substring_from(var_text, 2l);
}
var_text = var44;
} else {
{
var45 = standard___standard__Text___substring_from(var_text, 1l);
}
var_text = var45;
}
{
var46 = ((val*(*)(val* self))(var_text->class->vft[COLOR_standard__string__Text__chars]))(var_text); /* chars on <var_text:String>*/
}
{
var47 = ((val*(*)(val* self))((((long)var46&3)?class_info[((long)var46&3)]:var46->class)->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var46); /* last on <var46:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var47,'\n') on <var47:nullable Object(Char)> */
var51 = (uint32_t)((long)(var47)>>2);
var50 = (var47 != NULL) && (var51 == '\n');
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
{
var52 = ((long(*)(val* self))(var_text->class->vft[COLOR_standard__string__Text__length]))(var_text); /* length on <var_text:String>*/
}
{
{ /* Inline kernel#Int#- (var52,1l) on <var52:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var55 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var59 = var52 - 1l;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
{
var60 = ((val*(*)(val* self, long p0, long p1))(var_text->class->vft[COLOR_standard__string__Text__substring]))(var_text, 0l, var53); /* substring on <var_text:String>*/
}
var_text = var60;
} else {
}
{
{ /* Inline mdoc#MDoc#content (var_res) on <var_res:nullable MDoc(MDoc)> */
var63 = var_res->attrs[COLOR_nit__mdoc__MDoc___content].val; /* _content on <var_res:nullable MDoc(MDoc)> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mdoc, 23);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var61, var_text); /* Direct call array#Array#add on <var61:Array[String]>*/
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:Iterator[TComment]>*/
}
} else {
goto BREAK_label64;
}
}
BREAK_label64: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:Iterator[TComment]>*/
}
{
{ /* Inline modelbuilder_base#ADoc#mdoc_cache= (self,var_res) on <self:ADoc> */
self->attrs[COLOR_nit__modelbuilder_base__ADoc___mdoc_cache].val = var_res; /* _mdoc_cache on <self:ADoc> */
RET_LABEL65:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
