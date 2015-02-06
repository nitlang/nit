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
show_backtrace(1);
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
show_backtrace(1);
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
show_backtrace(1);
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
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : ToolContext */;
val* var15 /* : ToolContext */;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
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
var6 = NULL;
if (var3 == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var3,var6) on <var3:nullable ModelBuilder> */
var_other = var6;
{
{ /* Inline kernel#Object#is_same_instance (var3,var_other) on <var3:nullable ModelBuilder(ModelBuilder)> */
var12 = var3 == var_other;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (unlikely(!var7)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 54);
show_backtrace(1);
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var15 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ToolContext#modelbuilder_real= (var13,self) on <var13:ToolContext> */
var13->attrs[COLOR_nit__modelbuilder_base__ToolContext___modelbuilder_real].val = self; /* _modelbuilder_real on <var13:ToolContext> */
RET_LABEL16:(void)0;
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
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : null */;
val* var9 /* : null */;
val* var_res /* var res: nullable MClass */;
val* var_ /* var : Array[MClass] */;
val* var10 /* : ArrayIterator[nullable Object] */;
val* var_11 /* var : ArrayIterator[MClass] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var14 /* : POSetElement[MModule] */;
val* var16 /* : POSetElement[MModule] */;
val* var17 /* : MModule */;
val* var19 /* : MModule */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : MModule */;
val* var24 /* : MModule */;
val* var25 /* : MVisibility */;
val* var27 /* : MVisibility */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : null */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
static val* varonce;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
long var44 /* : Int */;
val* var45 /* : FlatString */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
val* var52 /* : String */;
val* var53 /* : Array[Object] */;
long var54 /* : Int */;
val* var55 /* : NativeArray[Object] */;
val* var56 /* : String */;
val* var57 /* : null */;
var_anode = p0;
var_mmodule = p1;
var_name = p2;
{
{ /* Inline modelbuilder_base#ModelBuilder#model (self) on <self:ModelBuilder> */
var3 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 44);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__model___Model___get_mclasses_by_name(var1, var_name);
}
var_classes = var4;
var5 = NULL;
if (var_classes == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = standard___standard__Array___standard__kernel__Object___61d_61d(var_classes, var5);
var6 = var7;
}
if (var6){
var8 = NULL;
var = var8;
goto RET_LABEL;
} else {
}
var9 = NULL;
var_res = var9;
var_ = var_classes;
{
var10 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_11);
}
if (var12){
{
var13 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_11);
}
var_mclass = var13;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var16 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 96);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var19 = var_mclass->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = poset___poset__POSetElement____60d_61d(var14, var17);
}
var21 = !var20;
if (var21){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MClass#intro_mmodule (var_mclass) on <var_mclass:MClass> */
var24 = var_mclass->attrs[COLOR_nit__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 343);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MClass#visibility (var_mclass) on <var_mclass:MClass> */
var27 = var_mclass->attrs[COLOR_nit__model__MClass___visibility].val; /* _visibility on <var_mclass:MClass> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 403);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = nit___nit__MModule___is_visible(var_mmodule, var22, var25);
}
var29 = !var28;
if (var29){
goto BREAK_label;
} else {
}
var30 = NULL;
if (var_res == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var30) on <var_res:nullable MClass> */
var_other = var30;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable MClass(MClass)> */
var36 = var_res == var_other;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
var_res = var_mclass;
} else {
if (varonce) {
var37 = varonce;
} else {
var38 = "Ambigous class name \'";
var39 = 21;
var40 = standard___standard__NativeString___to_s_with_length(var38, var39);
var37 = var40;
varonce = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = "\'; conflict between ";
var44 = 20;
var45 = standard___standard__NativeString___to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
{
var46 = nit___nit__MClass___nit__model_base__MEntity__full_name(var_mclass);
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = " and ";
var50 = 5;
var51 = standard___standard__NativeString___to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
{
var52 = nit___nit__MClass___nit__model_base__MEntity__full_name(var_res);
}
var53 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var53 = array_instance Array[Object] */
var54 = 6;
var55 = NEW_standard__NativeArray(var54, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var55)->values[0] = (val*) var37;
((struct instance_standard__NativeArray*)var55)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var55)->values[2] = (val*) var42;
((struct instance_standard__NativeArray*)var55)->values[3] = (val*) var46;
((struct instance_standard__NativeArray*)var55)->values[4] = (val*) var48;
((struct instance_standard__NativeArray*)var55)->values[5] = (val*) var52;
{
((void (*)(val* self, val* p0, long p1))(var53->class->vft[COLOR_standard__array__Array__with_native]))(var53, var55, var54) /* with_native on <var53:Array[Object]>*/;
}
}
{
var56 = ((val* (*)(val* self))(var53->class->vft[COLOR_standard__string__Object__to_s]))(var53) /* to_s on <var53:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_anode, var56); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
var57 = NULL;
var = var57;
goto RET_LABEL;
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_11); /* Direct call array#ArrayIterator#next on <var_11:ArrayIterator[MClass]>*/
}
} else {
goto BREAK_label58;
}
}
BREAK_label58: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_11) on <var_11:ArrayIterator[MClass]> */
RET_LABEL59:(void)0;
}
}
var = var_res;
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
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : null */;
val* var9 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var11 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var12 /* : nullable Object */;
val* var_cache /* var cache: nullable MProperty */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : null */;
val* var_res /* var res: nullable MProperty */;
val* var20 /* : null */;
val* var_ress /* var ress: nullable Array[MProperty] */;
val* var_ /* var : Array[MProperty] */;
val* var21 /* : ArrayIterator[nullable Object] */;
val* var_22 /* var : ArrayIterator[MProperty] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : MClassDef */;
val* var29 /* : MClassDef */;
val* var30 /* : MModule */;
val* var32 /* : MModule */;
val* var33 /* : MVisibility */;
val* var35 /* : MVisibility */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
int cltype;
int idtype;
short int var_41 /* var : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var_45 /* var : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
short int var50 /* : Bool */;
short int var_51 /* var : Bool */;
val* var52 /* : MClassDef */;
val* var54 /* : MClassDef */;
val* var55 /* : MClass */;
val* var57 /* : MClass */;
val* var58 /* : MClass */;
val* var60 /* : MClass */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
val* var65 /* : null */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
val* var_other69 /* var other: nullable Object */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
short int var_79 /* var : Bool */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
short int var_83 /* var : Bool */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
short int var_87 /* var : Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
val* var91 /* : MClassDef */;
val* var93 /* : MClassDef */;
val* var94 /* : MClassType */;
val* var96 /* : MClassType */;
val* var_restype /* var restype: MClassType */;
val* var97 /* : MClassDef */;
val* var99 /* : MClassDef */;
val* var100 /* : MClassType */;
val* var102 /* : MClassType */;
val* var_mproptype /* var mproptype: MClassType */;
val* var103 /* : null */;
short int var104 /* : Bool */;
val* var105 /* : null */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
val* var108 /* : Array[MProperty] */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
val* var113 /* : null */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
short int var_119 /* var : Bool */;
short int var120 /* : Bool */;
int cltype121;
int idtype122;
short int var_123 /* var : Bool */;
short int var124 /* : Bool */;
short int var126 /* : Bool */;
val* var127 /* : MClassDef */;
val* var129 /* : MClassDef */;
val* var130 /* : MClassType */;
val* var132 /* : MClassType */;
val* var_restype133 /* var restype: MClassType */;
val* var134 /* : Array[MProperty] */;
val* var_ress2 /* var ress2: Array[MProperty] */;
val* var_135 /* var : Array[MProperty] */;
val* var136 /* : ArrayIterator[nullable Object] */;
val* var_137 /* var : ArrayIterator[MProperty] */;
short int var138 /* : Bool */;
val* var139 /* : nullable Object */;
val* var_mprop140 /* var mprop: MProperty */;
val* var141 /* : MClassDef */;
val* var143 /* : MClassDef */;
val* var144 /* : MClassType */;
val* var146 /* : MClassType */;
val* var_mproptype147 /* var mproptype: MClassType */;
val* var148 /* : null */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
int cltype153;
int idtype154;
short int var155 /* : Bool */;
short int var_156 /* var : Bool */;
short int var157 /* : Bool */;
short int var159 /* : Bool */;
short int var160 /* : Bool */;
short int var163 /* : Bool */;
val* var164 /* : null */;
val* var165 /* : null */;
short int var166 /* : Bool */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
long var171 /* : Int */;
long var173 /* : Int */;
long var174 /* : Int */;
short int var175 /* : Bool */;
short int var177 /* : Bool */;
int cltype178;
int idtype179;
const char* var_class_name;
short int var180 /* : Bool */;
val* var181 /* : Array[String] */;
val* var_s /* var s: Array[String] */;
val* var_182 /* var : Array[MProperty] */;
val* var183 /* : ArrayIterator[nullable Object] */;
val* var_184 /* var : ArrayIterator[MProperty] */;
short int var185 /* : Bool */;
val* var186 /* : nullable Object */;
val* var_mprop187 /* var mprop: MProperty */;
val* var188 /* : String */;
static val* varonce;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : FlatString */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
long var198 /* : Int */;
val* var199 /* : FlatString */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
long var203 /* : Int */;
val* var204 /* : FlatString */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : NativeString */;
long var208 /* : Int */;
val* var209 /* : FlatString */;
val* var210 /* : String */;
val* var211 /* : Array[Object] */;
long var212 /* : Int */;
val* var213 /* : NativeArray[Object] */;
val* var214 /* : String */;
val* var215 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var217 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
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
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit__model___Model___get_mproperties_by_name(var1, var_name);
}
var_props = var4;
var5 = NULL;
if (var_props == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = standard___standard__Array___standard__kernel__Object___61d_61d(var_props, var5);
var6 = var7;
}
if (var6){
var8 = NULL;
var = var8;
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#try_get_mproperty_by_name2_cache (self) on <self:ModelBuilder> */
var11 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___try_get_mproperty_by_name2_cache].val; /* _try_get_mproperty_by_name2_cache on <self:ModelBuilder> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_get_mproperty_by_name2_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 168);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = more_collections___more_collections__HashMap3____91d_93d(var9, var_mmodule, var_mtype, var_name);
}
var_cache = var12;
var13 = NULL;
if (var_cache == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cache,var13) on <var_cache:nullable MProperty> */
var_other = var13;
{
var17 = ((short int (*)(val* self, val* p0))(var_cache->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_cache, var_other) /* == on <var_cache:nullable MProperty(MProperty)>*/;
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
var = var_cache;
goto RET_LABEL;
} else {
}
var19 = NULL;
var_res = var19;
var20 = NULL;
var_ress = var20;
var_ = var_props;
{
var21 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_22 = var21;
for(;;) {
{
var23 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_22);
}
if (var23){
{
var24 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_22);
}
var_mprop = var24;
{
var25 = nit___nit__MType___has_mproperty(var_mtype, var_mmodule, var_mprop);
}
var26 = !var25;
if (var26){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty> */
var29 = var_mprop->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var27) on <var27:MClassDef> */
var32 = var27->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var27:MClassDef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model#MProperty#visibility (var_mprop) on <var_mprop:MProperty> */
var35 = var_mprop->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1757);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = nit___nit__MModule___is_visible(var_mmodule, var30, var33);
}
var37 = !var36;
if (var37){
goto BREAK_label;
} else {
}
/* <var_mprop:MProperty> isa MMethod */
cltype = type_nit__MMethod.color;
idtype = type_nit__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var40 = 0;
} else {
var40 = var_mprop->type->type_table[cltype] == idtype;
}
var_41 = var40;
if (var40){
{
{ /* Inline model#MMethod#is_new (var_mprop) on <var_mprop:MProperty(MMethod)> */
var44 = var_mprop->attrs[COLOR_nit__model__MMethod___is_new].s; /* _is_new on <var_mprop:MProperty(MMethod)> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
var39 = var42;
} else {
var39 = var_41;
}
var_45 = var39;
if (var39){
/* <var_mtype:MType> isa MClassType */
cltype48 = type_nit__MClassType.color;
idtype49 = type_nit__MClassType.id;
if(cltype48 >= var_mtype->type->table_size) {
var47 = 0;
} else {
var47 = var_mtype->type->type_table[cltype48] == idtype49;
}
var50 = !var47;
var_51 = var50;
if (var50){
var46 = var_51;
} else {
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty(MMethod)> */
var54 = var_mprop->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty(MMethod)> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var52) on <var52:MClassDef> */
var57 = var52->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var52:MClassDef> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var60 = var_mtype->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var55,var58) on <var55:MClass> */
var_other = var58;
{
var63 = ((short int (*)(val* self, val* p0))(var55->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var55, var_other) /* == on <var55:MClass>*/;
}
var64 = !var63;
var61 = var64;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var46 = var61;
}
var38 = var46;
} else {
var38 = var_45;
}
if (var38){
goto BREAK_label;
} else {
}
var65 = NULL;
if (var_res == NULL) {
var66 = 1; /* is null */
} else {
var66 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var65) on <var_res:nullable MProperty> */
var_other69 = var65;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other69) on <var_res:nullable MProperty(MProperty)> */
var72 = var_res == var_other69;
var70 = var72;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var67 = var70;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
var66 = var67;
}
if (var66){
var_res = var_mprop;
goto BREAK_label;
} else {
}
/* <var_res:nullable MProperty(MProperty)> isa MMethod */
cltype77 = type_nit__MMethod.color;
idtype78 = type_nit__MMethod.id;
if(cltype77 >= var_res->type->table_size) {
var76 = 0;
} else {
var76 = var_res->type->type_table[cltype77] == idtype78;
}
var_79 = var76;
if (var76){
/* <var_mprop:MProperty> isa MMethod */
cltype81 = type_nit__MMethod.color;
idtype82 = type_nit__MMethod.id;
if(cltype81 >= var_mprop->type->table_size) {
var80 = 0;
} else {
var80 = var_mprop->type->type_table[cltype81] == idtype82;
}
var75 = var80;
} else {
var75 = var_79;
}
var_83 = var75;
if (var75){
{
{ /* Inline model#MMethod#is_init (var_res) on <var_res:nullable MProperty(MMethod)> */
var86 = var_res->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var_res:nullable MProperty(MMethod)> */
var84 = var86;
RET_LABEL85:(void)0;
}
}
var74 = var84;
} else {
var74 = var_83;
}
var_87 = var74;
if (var74){
{
{ /* Inline model#MMethod#is_init (var_mprop) on <var_mprop:MProperty(MMethod)> */
var90 = var_mprop->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var_mprop:MProperty(MMethod)> */
var88 = var90;
RET_LABEL89:(void)0;
}
}
var73 = var88;
} else {
var73 = var_87;
}
if (var73){
{
{ /* Inline model#MProperty#intro_mclassdef (var_res) on <var_res:nullable MProperty(MMethod)> */
var93 = var_res->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_res:nullable MProperty(MMethod)> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
var_restype = var94;
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop) on <var_mprop:MProperty(MMethod)> */
var99 = var_mprop->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty(MMethod)> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var97) on <var97:MClassDef> */
var102 = var97->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var97:MClassDef> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
var_mproptype = var100;
var103 = NULL;
{
var104 = nit___nit__MType___is_subtype(var_mproptype, var_mmodule, var103, var_restype);
}
if (var104){
var_res = var_mprop;
goto BREAK_label;
} else {
}
} else {
}
var105 = NULL;
if (var_ress == NULL) {
var106 = 1; /* is null */
} else {
var106 = 0; /* arg is null but recv is not */
}
if (0) {
var107 = standard___standard__Array___standard__kernel__Object___61d_61d(var_ress, var105);
var106 = var107;
}
if (var106){
var108 = NEW_standard__Array(&type_standard__Array__nit__MProperty);
{
standard___standard__Array___standard__kernel__Object__init(var108); /* Direct call array#Array#init on <var108:Array[MProperty]>*/
}
var_ress = var108;
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
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_22); /* Direct call array#ArrayIterator#next on <var_22:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label109;
}
}
BREAK_label109: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_22) on <var_22:ArrayIterator[MProperty]> */
RET_LABEL110:(void)0;
}
}
var113 = NULL;
if (var_ress == NULL) {
var114 = 0; /* is null */
} else {
var114 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ress,var113) on <var_ress:nullable Array[MProperty]> */
var_other = var113;
{
var117 = ((short int (*)(val* self, val* p0))(var_ress->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ress, var_other) /* == on <var_ress:nullable Array[MProperty](Array[MProperty])>*/;
}
var118 = !var117;
var115 = var118;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
var114 = var115;
}
var_119 = var114;
if (var114){
/* <var_res:nullable MProperty> isa MMethod */
cltype121 = type_nit__MMethod.color;
idtype122 = type_nit__MMethod.id;
if(var_res == NULL) {
var120 = 0;
} else {
if(cltype121 >= var_res->type->table_size) {
var120 = 0;
} else {
var120 = var_res->type->type_table[cltype121] == idtype122;
}
}
var112 = var120;
} else {
var112 = var_119;
}
var_123 = var112;
if (var112){
{
{ /* Inline model#MMethod#is_init (var_res) on <var_res:nullable MProperty(MMethod)> */
var126 = var_res->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var_res:nullable MProperty(MMethod)> */
var124 = var126;
RET_LABEL125:(void)0;
}
}
var111 = var124;
} else {
var111 = var_123;
}
if (var111){
{
{ /* Inline model#MProperty#intro_mclassdef (var_res) on <var_res:nullable MProperty(MMethod)> */
var129 = var_res->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_res:nullable MProperty(MMethod)> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var127) on <var127:MClassDef> */
var132 = var127->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var127:MClassDef> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
var_restype133 = var130;
var134 = NEW_standard__Array(&type_standard__Array__nit__MProperty);
{
standard___standard__Array___standard__kernel__Object__init(var134); /* Direct call array#Array#init on <var134:Array[MProperty]>*/
}
var_ress2 = var134;
var_135 = var_ress;
{
var136 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_135);
}
var_137 = var136;
for(;;) {
{
var138 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_137);
}
if (var138){
{
var139 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_137);
}
var_mprop140 = var139;
{
{ /* Inline model#MProperty#intro_mclassdef (var_mprop140) on <var_mprop140:MProperty> */
var143 = var_mprop140->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop140:MProperty> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var141) on <var141:MClassDef> */
var146 = var141->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var141:MClassDef> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
var_mproptype147 = var144;
var148 = NULL;
{
var149 = nit___nit__MType___is_subtype(var_restype133, var_mmodule, var148, var_mproptype147);
}
var150 = !var149;
if (var150){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_ress2, var_mprop140); /* Direct call array#Array#add on <var_ress2:Array[MProperty]>*/
}
} else {
/* <var_mprop140:MProperty> isa MMethod */
cltype153 = type_nit__MMethod.color;
idtype154 = type_nit__MMethod.id;
if(cltype153 >= var_mprop140->type->table_size) {
var152 = 0;
} else {
var152 = var_mprop140->type->type_table[cltype153] == idtype154;
}
var155 = !var152;
var_156 = var155;
if (var155){
var151 = var_156;
} else {
{
{ /* Inline model#MMethod#is_init (var_mprop140) on <var_mprop140:MProperty(MMethod)> */
var159 = var_mprop140->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var_mprop140:MProperty(MMethod)> */
var157 = var159;
RET_LABEL158:(void)0;
}
}
var160 = !var157;
var151 = var160;
}
if (var151){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_ress2, var_mprop140); /* Direct call array#Array#add on <var_ress2:Array[MProperty]>*/
}
} else {
}
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_137); /* Direct call array#ArrayIterator#next on <var_137:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label161;
}
}
BREAK_label161: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_137) on <var_137:ArrayIterator[MProperty]> */
RET_LABEL162:(void)0;
}
}
{
var163 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_ress2);
}
if (var163){
var164 = NULL;
var_ress = var164;
} else {
var_ress = var_ress2;
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_ress, var_res); /* Direct call array#Array#add on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
}
} else {
}
var165 = NULL;
if (var_ress == NULL) {
var166 = 0; /* is null */
} else {
var166 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ress,var165) on <var_ress:nullable Array[MProperty]> */
var_other = var165;
{
var169 = ((short int (*)(val* self, val* p0))(var_ress->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ress, var_other) /* == on <var_ress:nullable Array[MProperty](Array[MProperty])>*/;
}
var170 = !var169;
var167 = var170;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
var166 = var167;
}
if (var166){
{
{ /* Inline array#AbstractArrayRead#length (var_ress) on <var_ress:nullable Array[MProperty](Array[MProperty])> */
var173 = var_ress->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_ress:nullable Array[MProperty](Array[MProperty])> */
var171 = var173;
RET_LABEL172:(void)0;
}
}
var174 = 1;
{
{ /* Inline kernel#Int#> (var171,var174) on <var171:Int> */
/* Covariant cast for argument 0 (i) <var174:Int> isa OTHER */
/* <var174:Int> isa OTHER */
var177 = 1; /* easy <var174:Int> isa OTHER*/
if (unlikely(!var177)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var180 = var171 > var174;
var175 = var180;
goto RET_LABEL176;
RET_LABEL176:(void)0;
}
}
if (unlikely(!var175)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 158);
show_backtrace(1);
}
var181 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var181); /* Direct call array#Array#init on <var181:Array[String]>*/
}
var_s = var181;
var_182 = var_ress;
{
var183 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_182);
}
var_184 = var183;
for(;;) {
{
var185 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_184);
}
if (var185){
{
var186 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_184);
}
var_mprop187 = var186;
{
var188 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_mprop187);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_s, var188); /* Direct call array#Array#add on <var_s:Array[String]>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_184); /* Direct call array#ArrayIterator#next on <var_184:ArrayIterator[MProperty]>*/
}
} else {
goto BREAK_label189;
}
}
BREAK_label189: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_184) on <var_184:ArrayIterator[MProperty]> */
RET_LABEL190:(void)0;
}
}
if (varonce) {
var191 = varonce;
} else {
var192 = "Ambigous property name \'";
var193 = 24;
var194 = standard___standard__NativeString___to_s_with_length(var192, var193);
var191 = var194;
varonce = var191;
}
if (varonce195) {
var196 = varonce195;
} else {
var197 = "\' for ";
var198 = 6;
var199 = standard___standard__NativeString___to_s_with_length(var197, var198);
var196 = var199;
varonce195 = var196;
}
if (varonce200) {
var201 = varonce200;
} else {
var202 = "; conflict between ";
var203 = 19;
var204 = standard___standard__NativeString___to_s_with_length(var202, var203);
var201 = var204;
varonce200 = var201;
}
if (varonce205) {
var206 = varonce205;
} else {
var207 = " and ";
var208 = 5;
var209 = standard___standard__NativeString___to_s_with_length(var207, var208);
var206 = var209;
varonce205 = var206;
}
{
var210 = standard__string___Collection___join(var_s, var206);
}
var211 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var211 = array_instance Array[Object] */
var212 = 6;
var213 = NEW_standard__NativeArray(var212, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var213)->values[0] = (val*) var191;
((struct instance_standard__NativeArray*)var213)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var213)->values[2] = (val*) var196;
((struct instance_standard__NativeArray*)var213)->values[3] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var213)->values[4] = (val*) var201;
((struct instance_standard__NativeArray*)var213)->values[5] = (val*) var210;
{
((void (*)(val* self, val* p0, long p1))(var211->class->vft[COLOR_standard__array__Array__with_native]))(var211, var213, var212) /* with_native on <var211:Array[Object]>*/;
}
}
{
var214 = ((val* (*)(val* self))(var211->class->vft[COLOR_standard__string__Object__to_s]))(var211) /* to_s on <var211:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(self, var_anode, var214); /* Direct call modelbuilder_base#ModelBuilder#error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#try_get_mproperty_by_name2_cache (self) on <self:ModelBuilder> */
var217 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___try_get_mproperty_by_name2_cache].val; /* _try_get_mproperty_by_name2_cache on <self:ModelBuilder> */
if (unlikely(var217 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_get_mproperty_by_name2_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 168);
show_backtrace(1);
}
var215 = var217;
RET_LABEL216:(void)0;
}
}
{
more_collections___more_collections__HashMap3____91d_93d_61d(var215, var_mmodule, var_mtype, var_name, var_res); /* Direct call more_collections#HashMap3#[]= on <var215:HashMap3[MModule, MType, String, nullable MProperty]>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 168);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
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
val* var /* : null */;
val* var_l /* var l: nullable Object */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Location */;
val* var8 /* : ToolContext */;
val* var10 /* : ToolContext */;
var_n = p0;
var_text = p1;
var = NULL;
var_l = var;
var1 = NULL;
if (var_n == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n,var1) on <var_n:nullable ANode> */
var_other = var1;
{
var5 = ((short int (*)(val* self, val* p0))(var_n->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n, var_other) /* == on <var_n:nullable ANode(ANode)>*/;
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
var7 = ((val* (*)(val* self))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_n) /* hot_location on <var_n:nullable ANode(ANode)>*/;
}
var_l = var7;
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var10 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
nit___nit__ToolContext___error(var8, var_l, var_text); /* Direct call toolcontext#ToolContext#error on <var8:ToolContext>*/
}
RET_LABEL:;
}
/* method modelbuilder_base#ModelBuilder#warning for (self: ModelBuilder, nullable ANode, String, String) */
void nit___nit__ModelBuilder___warning(val* self, val* p0, val* p1, val* p2) {
val* var_n /* var n: nullable ANode */;
val* var_tag /* var tag: String */;
val* var_text /* var text: String */;
val* var /* : null */;
val* var_l /* var l: nullable Object */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Location */;
val* var8 /* : ToolContext */;
val* var10 /* : ToolContext */;
var_n = p0;
var_tag = p1;
var_text = p2;
var = NULL;
var_l = var;
var1 = NULL;
if (var_n == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n,var1) on <var_n:nullable ANode> */
var_other = var1;
{
var5 = ((short int (*)(val* self, val* p0))(var_n->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n, var_other) /* == on <var_n:nullable ANode(ANode)>*/;
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
var7 = ((val* (*)(val* self))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_n) /* hot_location on <var_n:nullable ANode(ANode)>*/;
}
var_l = var7;
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var10 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
nit___nit__ToolContext___warning(var8, var_l, var_tag, var_text); /* Direct call toolcontext#ToolContext#warning on <var8:ToolContext>*/
}
RET_LABEL:;
}
/* method modelbuilder_base#ModelBuilder#advice for (self: ModelBuilder, nullable ANode, String, String) */
void nit___nit__ModelBuilder___advice(val* self, val* p0, val* p1, val* p2) {
val* var_n /* var n: nullable ANode */;
val* var_tag /* var tag: String */;
val* var_text /* var text: String */;
val* var /* : null */;
val* var_l /* var l: nullable Object */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : Location */;
val* var8 /* : ToolContext */;
val* var10 /* : ToolContext */;
var_n = p0;
var_tag = p1;
var_text = p2;
var = NULL;
var_l = var;
var1 = NULL;
if (var_n == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n,var1) on <var_n:nullable ANode> */
var_other = var1;
{
var5 = ((short int (*)(val* self, val* p0))(var_n->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n, var_other) /* == on <var_n:nullable ANode(ANode)>*/;
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
var7 = ((val* (*)(val* self))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_n) /* hot_location on <var_n:nullable ANode(ANode)>*/;
}
var_l = var7;
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var10 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
nit___nit__ToolContext___advice(var8, var_l, var_tag, var_text); /* Direct call toolcontext#ToolContext#advice on <var8:ToolContext>*/
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
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : null */;
val* var_l /* var l: nullable Object */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other14 /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : Location */;
val* var18 /* : ToolContext */;
val* var20 /* : ToolContext */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : FlatString */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : FlatString */;
val* var35 /* : Array[Object] */;
long var36 /* : Int */;
val* var37 /* : NativeArray[Object] */;
val* var38 /* : String */;
var_n = p0;
var_name = p1;
var_recv = p2;
var_mmodule = p3;
{
var1 = nit__model___MModule___try_get_primitive_method(var_mmodule, var_name, var_recv);
}
var_res = var1;
var2 = NULL;
if (var_res == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var2) on <var_res:nullable MMethod> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable MMethod(MMethod)> */
var8 = var_res == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
var9 = NULL;
var_l = var9;
var10 = NULL;
if (var_n == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n,var10) on <var_n:nullable ANode> */
var_other14 = var10;
{
var15 = ((short int (*)(val* self, val* p0))(var_n->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n, var_other14) /* == on <var_n:nullable ANode(ANode)>*/;
}
var16 = !var15;
var12 = var16;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
var17 = ((val* (*)(val* self))(var_n->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_n) /* hot_location on <var_n:nullable ANode(ANode)>*/;
}
var_l = var17;
} else {
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var20 = self->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (varonce) {
var21 = varonce;
} else {
var22 = "Fatal Error: ";
var23 = 13;
var24 = standard___standard__NativeString___to_s_with_length(var22, var23);
var21 = var24;
varonce = var21;
}
if (varonce25) {
var26 = varonce25;
} else {
var27 = " must have a property named ";
var28 = 28;
var29 = standard___standard__NativeString___to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
if (varonce30) {
var31 = varonce30;
} else {
var32 = ".";
var33 = 1;
var34 = standard___standard__NativeString___to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
var35 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var35 = array_instance Array[Object] */
var36 = 5;
var37 = NEW_standard__NativeArray(var36, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var37)->values[0] = (val*) var21;
((struct instance_standard__NativeArray*)var37)->values[1] = (val*) var_recv;
((struct instance_standard__NativeArray*)var37)->values[2] = (val*) var26;
((struct instance_standard__NativeArray*)var37)->values[3] = (val*) var_name;
((struct instance_standard__NativeArray*)var37)->values[4] = (val*) var31;
{
((void (*)(val* self, val* p0, long p1))(var35->class->vft[COLOR_standard__array__Array__with_native]))(var35, var37, var36) /* with_native on <var35:Array[Object]>*/;
}
}
{
var38 = ((val* (*)(val* self))(var35->class->vft[COLOR_standard__string__Object__to_s]))(var35) /* to_s on <var35:Array[Object]>*/;
}
{
nit___nit__ToolContext___fatal_error(var18, var_l, var38); /* Direct call toolcontext#ToolContext#fatal_error on <var18:ToolContext>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 212);
show_backtrace(1);
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#AIntrudeVisibility#mvisibility for (self: AIntrudeVisibility): MVisibility */
val* nit__modelbuilder_base___AIntrudeVisibility___AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
{
var1 = nit__model_base___standard__Object___intrude_visibility(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#APublicVisibility#mvisibility for (self: APublicVisibility): MVisibility */
val* nit__modelbuilder_base___APublicVisibility___AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
{
var1 = nit__model_base___standard__Object___public_visibility(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#AProtectedVisibility#mvisibility for (self: AProtectedVisibility): MVisibility */
val* nit__modelbuilder_base___AProtectedVisibility___AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
{
var1 = nit__model_base___standard__Object___protected_visibility(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base#APrivateVisibility#mvisibility for (self: APrivateVisibility): MVisibility */
val* nit__modelbuilder_base___APrivateVisibility___AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
{
var1 = nit__model_base___standard__Object___private_visibility(self);
}
var = var1;
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
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MDoc */;
val* var12 /* : ANodes[TComment] */;
val* var14 /* : ANodes[TComment] */;
val* var_ /* var : ANodes[TComment] */;
val* var15 /* : Iterator[ANode] */;
val* var_16 /* var : Iterator[TComment] */;
short int var17 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_c /* var c: TComment */;
val* var19 /* : String */;
val* var_text /* var text: String */;
long var20 /* : Int */;
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
long var31 /* : Int */;
val* var32 /* : FlatString */;
val* var33 /* : SequenceRead[Char] */;
long var34 /* : Int */;
val* var35 /* : nullable Object */;
char var36 /* : Char */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
char var40 /* : Char */;
val* var41 /* : SequenceRead[Char] */;
long var42 /* : Int */;
val* var43 /* : nullable Object */;
char var44 /* : Char */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
char var48 /* : Char */;
long var49 /* : Int */;
val* var50 /* : Text */;
long var51 /* : Int */;
val* var52 /* : Text */;
val* var53 /* : SequenceRead[Char] */;
val* var54 /* : nullable Object */;
char var55 /* : Char */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
char var59 /* : Char */;
long var60 /* : Int */;
long var61 /* : Int */;
long var62 /* : Int */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
long var69 /* : Int */;
val* var70 /* : Text */;
val* var71 /* : Array[String] */;
val* var73 /* : Array[String] */;
{
{ /* Inline modelbuilder_base#ADoc#mdoc_cache (self) on <self:ADoc> */
var3 = self->attrs[COLOR_nit__modelbuilder_base__ADoc___mdoc_cache].val; /* _mdoc_cache on <self:ADoc> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
var4 = NULL;
if (var_res == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var4) on <var_res:nullable MDoc> */
var_other = var4;
{
var8 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable MDoc(MDoc)>*/;
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var = var_res;
goto RET_LABEL;
} else {
}
var10 = NEW_nit__MDoc(&type_nit__MDoc);
{
{ /* Inline kernel#Object#init (var10) on <var10:MDoc> */
RET_LABEL11:(void)0;
}
}
var_res = var10;
{
{ /* Inline parser_nodes#ADoc#n_comment (self) on <self:ADoc> */
var14 = self->attrs[COLOR_nit__parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_comment");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2515);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_ = var12;
{
var15 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_16 = var15;
for(;;) {
{
var17 = ((short int (*)(val* self))(var_16->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_16) /* is_ok on <var_16:Iterator[TComment]>*/;
}
if (var17){
{
var18 = ((val* (*)(val* self))(var_16->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_16) /* item on <var_16:Iterator[TComment]>*/;
}
var_c = var18;
{
var19 = nit__lexer_work___Token___text(var_c);
}
var_text = var19;
{
var20 = ((long (*)(val* self))(var_text->class->vft[COLOR_standard__string__Text__length]))(var_text) /* length on <var_text:String>*/;
}
var21 = 2;
{
{ /* Inline kernel#Int#< (var20,var21) on <var20:Int> */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var25 = var20 < var21;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mdoc, 22);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (varonce) {
var29 = varonce;
} else {
var30 = "";
var31 = 0;
var32 = standard___standard__NativeString___to_s_with_length(var30, var31);
var29 = var32;
varonce = var29;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var26, var29); /* Direct call array#Array#add on <var26:Array[String]>*/
}
goto BREAK_label;
} else {
}
{
var33 = ((val* (*)(val* self))(var_text->class->vft[COLOR_standard__string__Text__chars]))(var_text) /* chars on <var_text:String>*/;
}
var34 = 0;
{
var35 = ((val* (*)(val* self, long p0))(var33->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var33, var34) /* [] on <var33:SequenceRead[Char]>*/;
}
var36 = '#';
{
{ /* Inline kernel#Char#== (var35,var36) on <var35:nullable Object(Char)> */
var39 = (var35 != NULL) && (var35->class == &class_standard__Char);
if (var39) {
var40 = ((struct instance_standard__Char*)var35)->value; /* autounbox from nullable Object to Char */;
var39 = (var40 == var36);
}
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (unlikely(!var37)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 250);
show_backtrace(1);
}
{
var41 = ((val* (*)(val* self))(var_text->class->vft[COLOR_standard__string__Text__chars]))(var_text) /* chars on <var_text:String>*/;
}
var42 = 1;
{
var43 = ((val* (*)(val* self, long p0))(var41->class->vft[COLOR_standard__abstract_collection__SequenceRead___91d_93d]))(var41, var42) /* [] on <var41:SequenceRead[Char]>*/;
}
var44 = ' ';
{
{ /* Inline kernel#Char#== (var43,var44) on <var43:nullable Object(Char)> */
var47 = (var43 != NULL) && (var43->class == &class_standard__Char);
if (var47) {
var48 = ((struct instance_standard__Char*)var43)->value; /* autounbox from nullable Object to Char */;
var47 = (var48 == var44);
}
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
var49 = 2;
{
var50 = standard___standard__Text___substring_from(var_text, var49);
}
var_text = var50;
} else {
var51 = 1;
{
var52 = standard___standard__Text___substring_from(var_text, var51);
}
var_text = var52;
}
{
var53 = ((val* (*)(val* self))(var_text->class->vft[COLOR_standard__string__Text__chars]))(var_text) /* chars on <var_text:String>*/;
}
{
var54 = ((val* (*)(val* self))(var53->class->vft[COLOR_standard__abstract_collection__SequenceRead__last]))(var53) /* last on <var53:SequenceRead[Char]>*/;
}
var55 = '\n';
{
{ /* Inline kernel#Char#== (var54,var55) on <var54:nullable Object(Char)> */
var58 = (var54 != NULL) && (var54->class == &class_standard__Char);
if (var58) {
var59 = ((struct instance_standard__Char*)var54)->value; /* autounbox from nullable Object to Char */;
var58 = (var59 == var55);
}
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
if (var56){
var60 = 0;
{
var61 = ((long (*)(val* self))(var_text->class->vft[COLOR_standard__string__Text__length]))(var_text) /* length on <var_text:String>*/;
}
var62 = 1;
{
{ /* Inline kernel#Int#- (var61,var62) on <var61:Int> */
/* Covariant cast for argument 0 (i) <var62:Int> isa OTHER */
/* <var62:Int> isa OTHER */
var65 = 1; /* easy <var62:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name68 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var69 = var61 - var62;
var63 = var69;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
{
var70 = ((val* (*)(val* self, long p0, long p1))(var_text->class->vft[COLOR_standard__string__Text__substring]))(var_text, var60, var63) /* substring on <var_text:String>*/;
}
var_text = var70;
} else {
}
{
{ /* Inline mdoc#MDoc#content (var_res) on <var_res:nullable MDoc(MDoc)> */
var73 = var_res->attrs[COLOR_nit__mdoc__MDoc___content].val; /* _content on <var_res:nullable MDoc(MDoc)> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mdoc, 22);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var71, var_text); /* Direct call array#Array#add on <var71:Array[String]>*/
}
BREAK_label: (void)0;
{
((void (*)(val* self))(var_16->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_16) /* next on <var_16:Iterator[TComment]>*/;
}
} else {
goto BREAK_label74;
}
}
BREAK_label74: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_16) on <var_16:Iterator[TComment]> */
RET_LABEL75:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ADoc#mdoc_cache= (self,var_res) on <self:ADoc> */
self->attrs[COLOR_nit__modelbuilder_base__ADoc___mdoc_cache].val = var_res; /* _mdoc_cache on <self:ADoc> */
RET_LABEL76:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
