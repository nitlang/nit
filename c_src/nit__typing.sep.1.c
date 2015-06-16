#include "nit__typing.sep.0.h"
/* method typing#ToolContext#typing_phase for (self: ToolContext): Phase */
val* nit__typing___ToolContext___typing_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__typing__ToolContext___typing_phase].val; /* _typing_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _typing_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 25);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypingPhase#process_npropdef for (self: TypingPhase, APropdef) */
void nit__typing___nit__typing__TypingPhase___nit__phase__Phase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : ModelBuilder */;
var_npropdef = p0;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:TypingPhase> */
var2 = self->attrs[COLOR_nit__phase__Phase___toolcontext].val; /* _toolcontext on <self:TypingPhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 200);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__modelbuilder_base___ToolContext___modelbuilder(var);
}
{
((void(*)(val* self, val* p0))(var_npropdef->class->vft[COLOR_nit__typing__APropdef__do_typing]))(var_npropdef, var3); /* do_typing on <var_npropdef:APropdef>*/
}
RET_LABEL:;
}
/* method typing#TypeVisitor#modelbuilder for (self: TypeVisitor): ModelBuilder */
val* nit__typing___nit__typing__TypeVisitor___modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
var1 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#modelbuilder= for (self: TypeVisitor, ModelBuilder) */
void nit__typing___nit__typing__TypeVisitor___modelbuilder_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val = p0; /* _modelbuilder on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#mmodule for (self: TypeVisitor): MModule */
val* nit__typing___nit__typing__TypeVisitor___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#mmodule= for (self: TypeVisitor, MModule) */
void nit__typing___nit__typing__TypeVisitor___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val = p0; /* _mmodule on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#anchor for (self: TypeVisitor): nullable MClassType */
val* nit__typing___nit__typing__TypeVisitor___anchor(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_nit__typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#anchor= for (self: TypeVisitor, nullable MClassType) */
void nit__typing___nit__typing__TypeVisitor___anchor_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__TypeVisitor___anchor].val = p0; /* _anchor on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#mclassdef for (self: TypeVisitor): nullable MClassDef */
val* nit__typing___nit__typing__TypeVisitor___mclassdef(val* self) {
val* var /* : nullable MClassDef */;
val* var1 /* : nullable MClassDef */;
var1 = self->attrs[COLOR_nit__typing__TypeVisitor___mclassdef].val; /* _mclassdef on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#mclassdef= for (self: TypeVisitor, nullable MClassDef) */
void nit__typing___nit__typing__TypeVisitor___mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__TypeVisitor___mclassdef].val = p0; /* _mclassdef on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#mpropdef for (self: TypeVisitor): nullable MPropDef */
val* nit__typing___nit__typing__TypeVisitor___mpropdef(val* self) {
val* var /* : nullable MPropDef */;
val* var1 /* : nullable MPropDef */;
var1 = self->attrs[COLOR_nit__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#mpropdef= for (self: TypeVisitor, nullable MPropDef) */
void nit__typing___nit__typing__TypeVisitor___mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__TypeVisitor___mpropdef].val = p0; /* _mpropdef on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#selfvariable for (self: TypeVisitor): Variable */
val* nit__typing___nit__typing__TypeVisitor___selfvariable(val* self) {
val* var /* : Variable */;
val* var1 /* : Variable */;
var1 = self->attrs[COLOR_nit__typing__TypeVisitor___selfvariable].val; /* _selfvariable on <self:TypeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 50);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#selfvariable= for (self: TypeVisitor, Variable) */
void nit__typing___nit__typing__TypeVisitor___selfvariable_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__TypeVisitor___selfvariable].val = p0; /* _selfvariable on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#is_toplevel_context for (self: TypeVisitor): Bool */
short int nit__typing___nit__typing__TypeVisitor___is_toplevel_context(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__typing__TypeVisitor___is_toplevel_context].s; /* _is_toplevel_context on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#is_toplevel_context= for (self: TypeVisitor, Bool) */
void nit__typing___nit__typing__TypeVisitor___is_toplevel_context_61d(val* self, short int p0) {
self->attrs[COLOR_nit__typing__TypeVisitor___is_toplevel_context].s = p0; /* _is_toplevel_context on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#init for (self: TypeVisitor) */
void nit__typing___nit__typing__TypeVisitor___standard__kernel__Object__init(val* self) {
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var9 /* : MClassDef */;
val* var11 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var13 /* : MClassType */;
val* var15 /* : MClassType */;
val* var17 /* : MClass */;
val* var19 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
val* var20 /* : Variable */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : FlatString */;
val* var_selfvariable /* var selfvariable: Variable */;
val* var25 /* : MClassType */;
val* var27 /* : MClassType */;
val* var29 /* : MProperty */;
val* var31 /* : MProperty */;
val* var_mprop /* var mprop: MProperty */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
{
{ /* Inline typing#TypeVisitor#mpropdef (self) on <self:TypeVisitor> */
var2 = self->attrs[COLOR_nit__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <self:TypeVisitor> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
if (var_mpropdef == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MPropDef> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mpropdef, var_other); /* == on <var_mpropdef:nullable MPropDef(MPropDef)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
{ /* Inline typing#TypeVisitor#mpropdef= (self,var_mpropdef) on <self:TypeVisitor> */
self->attrs[COLOR_nit__typing__TypeVisitor___mpropdef].val = var_mpropdef; /* _mpropdef on <self:TypeVisitor> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var11 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MPropDef(MPropDef)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_mclassdef = var9;
{
{ /* Inline typing#TypeVisitor#mclassdef= (self,var_mclassdef) on <self:TypeVisitor> */
self->attrs[COLOR_nit__typing__TypeVisitor___mclassdef].val = var_mclassdef; /* _mclassdef on <self:TypeVisitor> */
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var15 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 556);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#anchor= (self,var13) on <self:TypeVisitor> */
self->attrs[COLOR_nit__typing__TypeVisitor___anchor].val = var13; /* _anchor on <self:TypeVisitor> */
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var19 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_mclass = var17;
var20 = NEW_nit__Variable(&type_nit__Variable);
if (likely(varonce!=NULL)) {
var21 = varonce;
} else {
var22 = "self";
var23 = standard___standard__NativeString___to_s_with_length(var22, 4l);
var21 = var23;
varonce = var21;
}
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_nit__scope__Variable__name_61d]))(var20, var21); /* name= on <var20:Variable>*/
}
{
((void(*)(val* self))(var20->class->vft[COLOR_standard__kernel__Object__init]))(var20); /* init on <var20:Variable>*/
}
var_selfvariable = var20;
{
{ /* Inline typing#TypeVisitor#selfvariable= (self,var_selfvariable) on <self:TypeVisitor> */
self->attrs[COLOR_nit__typing__TypeVisitor___selfvariable].val = var_selfvariable; /* _selfvariable on <self:TypeVisitor> */
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:MClass> */
var27 = var_mclass->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:MClass> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type= (var_selfvariable,var25) on <var_selfvariable:Variable> */
var_selfvariable->attrs[COLOR_nit__typing__Variable___declared_type].val = var25; /* _declared_type on <var_selfvariable:Variable> */
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var31 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MPropDef(MPropDef)> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_mprop = var29;
/* <var_mprop:MProperty> isa MMethod */
cltype = type_nit__MMethod.color;
idtype = type_nit__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var33 = 0;
} else {
var33 = var_mprop->type->type_table[cltype] == idtype;
}
var_ = var33;
if (var33){
{
{ /* Inline model#MMethod#is_new (var_mprop) on <var_mprop:MProperty(MMethod)> */
var36 = var_mprop->attrs[COLOR_nit__model__MMethod___is_new].s; /* _is_new on <var_mprop:MProperty(MMethod)> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var32 = var34;
} else {
var32 = var_;
}
if (var32){
{
{ /* Inline typing#TypeVisitor#is_toplevel_context= (self,1) on <self:TypeVisitor> */
self->attrs[COLOR_nit__typing__TypeVisitor___is_toplevel_context].s = 1; /* _is_toplevel_context on <self:TypeVisitor> */
RET_LABEL37:(void)0;
}
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method typing#TypeVisitor#anchor_to for (self: TypeVisitor, MType): MType */
val* nit__typing___nit__typing__TypeVisitor___anchor_to(val* self, val* p0) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : nullable MClassType */;
val* var3 /* : nullable MClassType */;
val* var_anchor /* var anchor: nullable MClassType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MModule */;
val* var14 /* : MModule */;
val* var15 /* : MType */;
var_mtype = p0;
{
{ /* Inline typing#TypeVisitor#anchor (self) on <self:TypeVisitor> */
var3 = self->attrs[COLOR_nit__typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_anchor = var1;
if (var_anchor == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_anchor,var_other) on <var_anchor:nullable MClassType(MClassType)> */
var9 = var_anchor == var_other;
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
var10 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var11 = !var10;
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 85);
fatal_exit(1);
}
var = var_mtype;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var14 = self->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_mtype, var12, var_anchor); /* anchor_to on <var_mtype:MType>*/
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#is_subtype for (self: TypeVisitor, MType, MType): Bool */
short int nit__typing___nit__typing__TypeVisitor___is_subtype(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_sub /* var sub: MType */;
val* var_sup /* var sup: MType */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
val* var4 /* : nullable MClassType */;
val* var6 /* : nullable MClassType */;
short int var7 /* : Bool */;
var_sub = p0;
var_sup = p1;
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var3 = self->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#anchor (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_nit__typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit___nit__MType___is_subtype(var_sub, var1, var4, var_sup);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#resolve_for for (self: TypeVisitor, MType, MType, Bool): MType */
val* nit__typing___nit__typing__TypeVisitor___resolve_for(val* self, val* p0, val* p1, short int p2) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_subtype /* var subtype: MType */;
short int var_for_self /* var for_self: Bool */;
val* var1 /* : nullable MClassType */;
val* var3 /* : nullable MClassType */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
short int var7 /* : Bool */;
val* var8 /* : MType */;
val* var_res /* var res: MType */;
var_mtype = p0;
var_subtype = p1;
var_for_self = p2;
{
{ /* Inline typing#TypeVisitor#anchor (self) on <self:TypeVisitor> */
var3 = self->attrs[COLOR_nit__typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = !var_for_self;
{
var8 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nit__model__MType__resolve_for]))(var_mtype, var_subtype, var1, var4, var7); /* resolve_for on <var_mtype:MType>*/
}
var_res = var8;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#check_subtype for (self: TypeVisitor, ANode, MType, MType, Bool): nullable MType */
val* nit__typing___nit__typing__TypeVisitor___check_subtype(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : nullable MType */;
val* var_node /* var node: ANode */;
val* var_sub /* var sub: MType */;
val* var_sup /* var sup: MType */;
short int var_autocast /* var autocast: Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MType */;
val* var_u /* var u: MType */;
val* var7 /* : ModelBuilder */;
val* var9 /* : ModelBuilder */;
val* var10 /* : NativeArray[String] */;
static val* varonce;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var31 /* : ModelBuilder */;
val* var33 /* : ModelBuilder */;
val* var35 /* : NativeArray[String] */;
static val* varonce34;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
val* var48 /* : String */;
val* var49 /* : String */;
val* var50 /* : String */;
var_node = p0;
var_sub = p1;
var_sup = p2;
var_autocast = p3;
{
var1 = nit__typing___nit__typing__TypeVisitor___is_subtype(self, var_sub, var_sup);
}
if (var1){
var = var_sub;
goto RET_LABEL;
} else {
}
var_ = var_autocast;
if (var_autocast){
{
var3 = nit__typing___nit__typing__TypeVisitor___anchor_to(self, var_sup);
}
{
var4 = nit__typing___nit__typing__TypeVisitor___is_subtype(self, var_sub, var3);
}
var2 = var4;
} else {
var2 = var_;
}
if (var2){
var = var_sup;
goto RET_LABEL;
} else {
}
{
var5 = ((short int(*)(val* self))(var_sub->class->vft[COLOR_nit__model__MType__need_anchor]))(var_sub); /* need_anchor on <var_sub:MType>*/
}
if (var5){
{
var6 = nit__typing___nit__typing__TypeVisitor___anchor_to(self, var_sub);
}
var_u = var6;
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var9 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var10 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Type Error: expected `";
var14 = standard___standard__NativeString___to_s_with_length(var13, 22l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "`, got `";
var18 = standard___standard__NativeString___to_s_with_length(var17, 8l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var10)->values[2]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = ": ";
var22 = standard___standard__NativeString___to_s_with_length(var21, 2l);
var20 = var22;
varonce19 = var20;
}
((struct instance_standard__NativeArray*)var10)->values[4]=var20;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "`.";
var26 = standard___standard__NativeString___to_s_with_length(var25, 2l);
var24 = var26;
varonce23 = var24;
}
((struct instance_standard__NativeArray*)var10)->values[6]=var24;
} else {
var10 = varonce;
varonce = NULL;
}
{
var27 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_standard__string__Object__to_s]))(var_sup); /* to_s on <var_sup:MType>*/
}
((struct instance_standard__NativeArray*)var10)->values[1]=var27;
{
var28 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_standard__string__Object__to_s]))(var_sub); /* to_s on <var_sub:MType>*/
}
((struct instance_standard__NativeArray*)var10)->values[3]=var28;
{
var29 = ((val*(*)(val* self))(var_u->class->vft[COLOR_standard__string__Object__to_s]))(var_u); /* to_s on <var_u:MType>*/
}
((struct instance_standard__NativeArray*)var10)->values[5]=var29;
{
var30 = ((val*(*)(val* self))(var10->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
nit___nit__ModelBuilder___error(var7, var_node, var30); /* Direct call modelbuilder_base#ModelBuilder#error on <var7:ModelBuilder>*/
}
} else {
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var33 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (unlikely(varonce34==NULL)) {
var35 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "Type Error: expected `";
var39 = standard___standard__NativeString___to_s_with_length(var38, 22l);
var37 = var39;
varonce36 = var37;
}
((struct instance_standard__NativeArray*)var35)->values[0]=var37;
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "`, got `";
var43 = standard___standard__NativeString___to_s_with_length(var42, 8l);
var41 = var43;
varonce40 = var41;
}
((struct instance_standard__NativeArray*)var35)->values[2]=var41;
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "`.";
var47 = standard___standard__NativeString___to_s_with_length(var46, 2l);
var45 = var47;
varonce44 = var45;
}
((struct instance_standard__NativeArray*)var35)->values[4]=var45;
} else {
var35 = varonce34;
varonce34 = NULL;
}
{
var48 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_standard__string__Object__to_s]))(var_sup); /* to_s on <var_sup:MType>*/
}
((struct instance_standard__NativeArray*)var35)->values[1]=var48;
{
var49 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_standard__string__Object__to_s]))(var_sub); /* to_s on <var_sub:MType>*/
}
((struct instance_standard__NativeArray*)var35)->values[3]=var49;
{
var50 = ((val*(*)(val* self))(var35->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var35); /* native_to_s on <var35:NativeArray[String]>*/
}
varonce34 = var35;
{
nit___nit__ModelBuilder___error(var31, var_node, var50); /* Direct call modelbuilder_base#ModelBuilder#error on <var31:ModelBuilder>*/
}
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_stmt for (self: TypeVisitor, nullable AExpr) */
void nit__typing___nit__typing__TypeVisitor___visit_stmt(val* self, val* p0) {
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
var_nexpr = p0;
if (var_nexpr == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nexpr,var_other) on <var_nexpr:nullable AExpr(AExpr)> */
var5 = var_nexpr == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_nit__typing__AExpr__accept_typing]))(var_nexpr, self); /* accept_typing on <var_nexpr:nullable AExpr(AExpr)>*/
}
RET_LABEL:;
}
/* method typing#TypeVisitor#visit_expr for (self: TypeVisitor, AExpr): nullable MType */
val* nit__typing___nit__typing__TypeVisitor___visit_expr(val* self, val* p0) {
val* var /* : nullable MType */;
val* var_nexpr /* var nexpr: AExpr */;
val* var1 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : ModelBuilder */;
val* var13 /* : ModelBuilder */;
val* var14 /* : ToolContext */;
val* var16 /* : ToolContext */;
long var17 /* : Int */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : ModelBuilder */;
val* var27 /* : ModelBuilder */;
val* var28 /* : ToolContext */;
val* var30 /* : ToolContext */;
long var31 /* : Int */;
long var33 /* : Int */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
static val* varonce;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : FlatString */;
var_nexpr = p0;
{
((void(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_nit__typing__AExpr__accept_typing]))(var_nexpr, self); /* accept_typing on <var_nexpr:AExpr>*/
}
{
var1 = ((val*(*)(val* self))(var_nexpr->class->vft[COLOR_nit__typing__AExpr__mtype]))(var_nexpr); /* mtype on <var_nexpr:AExpr>*/
}
var_mtype = var1;
if (var_mtype == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other); /* == on <var_mtype:nullable MType(MType)>*/
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var = var_mtype;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AExpr#is_typed (var_nexpr) on <var_nexpr:AExpr> */
var9 = var_nexpr->attrs[COLOR_nit__typing__AExpr___is_typed].s; /* _is_typed on <var_nexpr:AExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = !var7;
if (var10){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var13 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var11) on <var11:ModelBuilder> */
var16 = var11->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var11:ModelBuilder> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var14) on <var14:ToolContext> */
var19 = var14->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <var14:ToolContext> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var17,0l) on <var17:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var22 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var23 = var17 > 0l;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var24 = !var20;
if (var24){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var27 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var25) on <var25:ModelBuilder> */
var30 = var25->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var25:ModelBuilder> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#verbose_level (var28) on <var28:ToolContext> */
var33 = var28->attrs[COLOR_nit__toolcontext__ToolContext___verbose_level].l; /* _verbose_level on <var28:ToolContext> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var31,1l) on <var31:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var36 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var40 = var31 > 1l;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
if (likely(varonce!=NULL)) {
var41 = varonce;
} else {
var42 = "No return type but no error.";
var43 = standard___standard__NativeString___to_s_with_length(var42, 28l);
var41 = var43;
varonce = var41;
}
{
nit___nit__ANode___debug(var_nexpr, var41); /* Direct call parser_nodes#ANode#debug on <var_nexpr:AExpr>*/
}
} else {
}
} else {
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "Error: expected an expression.";
var47 = standard___standard__NativeString___to_s_with_length(var46, 30l);
var45 = var47;
varonce44 = var45;
}
{
nit__typing___nit__typing__TypeVisitor___error(self, var_nexpr, var45); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_expr_subtype for (self: TypeVisitor, AExpr, nullable MType): nullable MType */
val* nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(val* self, val* p0, val* p1) {
val* var /* : nullable MType */;
val* var_nexpr /* var nexpr: AExpr */;
val* var_sup /* var sup: nullable MType */;
val* var1 /* : nullable MType */;
val* var_sub /* var sub: nullable MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable MType */;
val* var_res /* var res: nullable MType */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other18 /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
var_nexpr = p0;
var_sup = p1;
{
var1 = nit__typing___nit__typing__TypeVisitor___visit_expr(self, var_nexpr);
}
var_sub = var1;
if (var_sub == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sub,((val*)NULL)) on <var_sub:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_sub,var_other) on <var_sub:nullable MType(MType)> */
var7 = var_sub == var_other;
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
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (var_sup == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sup,((val*)NULL)) on <var_sup:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_sup,var_other) on <var_sup:nullable MType(MType)> */
var13 = var_sup == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var14 = nit__typing___nit__typing__TypeVisitor___check_subtype(self, var_nexpr, var_sub, var_sup, 1);
}
var_res = var14;
if (var_res == NULL) {
var15 = 1; /* <var_sub:nullable MType(MType)> cannot be null */
} else {
{ /* Inline kernel#Object#!= (var_res,var_sub) on <var_res:nullable MType> */
var_other18 = var_sub;
{
var19 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other18); /* == on <var_res:nullable MType(MType)>*/
}
var20 = !var19;
var16 = var20;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
{
{ /* Inline typing#AExpr#implicit_cast_to= (var_nexpr,var_res) on <var_nexpr:AExpr> */
var_nexpr->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var_res; /* _implicit_cast_to on <var_nexpr:AExpr> */
RET_LABEL21:(void)0;
}
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_expr_bool for (self: TypeVisitor, AExpr): nullable MType */
val* nit__typing___nit__typing__TypeVisitor___visit_expr_bool(val* self, val* p0) {
val* var /* : nullable MType */;
val* var_nexpr /* var nexpr: AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : nullable MType */;
var_nexpr = p0;
{
var1 = nit__typing___nit__typing__TypeVisitor___type_bool(self, var_nexpr);
}
{
var2 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(self, var_nexpr, var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_expr_cast for (self: TypeVisitor, ANode, AExpr, AType): nullable MType */
val* nit__typing___nit__typing__TypeVisitor___visit_expr_cast(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var_node /* var node: ANode */;
val* var_nexpr /* var nexpr: AExpr */;
val* var_ntype /* var ntype: AType */;
val* var1 /* : nullable MType */;
val* var_sub /* var sub: nullable MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable MType */;
val* var_sup /* var sup: nullable MType */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : ModelBuilder */;
val* var22 /* : ModelBuilder */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : FlatString */;
val* var27 /* : NativeArray[String] */;
static val* varonce26;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
val* var31 /* : FlatString */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
val* var35 /* : FlatString */;
val* var36 /* : String */;
val* var37 /* : String */;
short int var38 /* : Bool */;
val* var39 /* : ModelBuilder */;
val* var41 /* : ModelBuilder */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : FlatString */;
val* var47 /* : NativeArray[String] */;
static val* varonce46;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : FlatString */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : FlatString */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : FlatString */;
val* var60 /* : String */;
val* var61 /* : String */;
val* var62 /* : String */;
var_node = p0;
var_nexpr = p1;
var_ntype = p2;
{
var1 = nit__typing___nit__typing__TypeVisitor___visit_expr(self, var_nexpr);
}
var_sub = var1;
if (var_sub == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sub,((val*)NULL)) on <var_sub:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_sub,var_other) on <var_sub:nullable MType(MType)> */
var7 = var_sub == var_other;
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
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var8 = nit__typing___nit__typing__TypeVisitor___resolve_mtype(self, var_ntype);
}
var_sup = var8;
if (var_sup == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sup,((val*)NULL)) on <var_sup:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_sup,var_other) on <var_sup:nullable MType(MType)> */
var14 = var_sup == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#== (var_sup,var_sub) on <var_sup:nullable MType(MType)> */
var_other = var_sub;
{
{ /* Inline kernel#Object#is_same_instance (var_sup,var_other) on <var_sup:nullable MType(MType)> */
var19 = var_sup == var_other;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var22 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (likely(varonce!=NULL)) {
var23 = varonce;
} else {
var24 = "useless-type-test";
var25 = standard___standard__NativeString___to_s_with_length(var24, 17l);
var23 = var25;
varonce = var23;
}
if (unlikely(varonce26==NULL)) {
var27 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "Warning: expression is already a `";
var31 = standard___standard__NativeString___to_s_with_length(var30, 34l);
var29 = var31;
varonce28 = var29;
}
((struct instance_standard__NativeArray*)var27)->values[0]=var29;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "`.";
var35 = standard___standard__NativeString___to_s_with_length(var34, 2l);
var33 = var35;
varonce32 = var33;
}
((struct instance_standard__NativeArray*)var27)->values[2]=var33;
} else {
var27 = varonce26;
varonce26 = NULL;
}
{
var36 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_standard__string__Object__to_s]))(var_sup); /* to_s on <var_sup:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var27)->values[1]=var36;
{
var37 = ((val*(*)(val* self))(var27->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var27); /* native_to_s on <var27:NativeArray[String]>*/
}
varonce26 = var27;
{
nit___nit__ModelBuilder___warning(var20, var_node, var23, var37); /* Direct call modelbuilder_base#ModelBuilder#warning on <var20:ModelBuilder>*/
}
} else {
{
var38 = nit__typing___nit__typing__TypeVisitor___is_subtype(self, var_sub, var_sup);
}
if (var38){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var41 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "useless-type-test";
var45 = standard___standard__NativeString___to_s_with_length(var44, 17l);
var43 = var45;
varonce42 = var43;
}
if (unlikely(varonce46==NULL)) {
var47 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "Warning: expression is already a `";
var51 = standard___standard__NativeString___to_s_with_length(var50, 34l);
var49 = var51;
varonce48 = var49;
}
((struct instance_standard__NativeArray*)var47)->values[0]=var49;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "` since it is a `";
var55 = standard___standard__NativeString___to_s_with_length(var54, 17l);
var53 = var55;
varonce52 = var53;
}
((struct instance_standard__NativeArray*)var47)->values[2]=var53;
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "`.";
var59 = standard___standard__NativeString___to_s_with_length(var58, 2l);
var57 = var59;
varonce56 = var57;
}
((struct instance_standard__NativeArray*)var47)->values[4]=var57;
} else {
var47 = varonce46;
varonce46 = NULL;
}
{
var60 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_standard__string__Object__to_s]))(var_sup); /* to_s on <var_sup:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var47)->values[1]=var60;
{
var61 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_standard__string__Object__to_s]))(var_sub); /* to_s on <var_sub:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var47)->values[3]=var61;
{
var62 = ((val*(*)(val* self))(var47->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var47); /* native_to_s on <var47:NativeArray[String]>*/
}
varonce46 = var47;
{
nit___nit__ModelBuilder___warning(var39, var_node, var43, var62); /* Direct call modelbuilder_base#ModelBuilder#warning on <var39:ModelBuilder>*/
}
} else {
}
}
var = var_sup;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#can_be_null for (self: TypeVisitor, MType): Bool */
short int nit__typing___nit__typing__TypeVisitor___can_be_null(val* self, val* p0) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var3 /* : Bool */;
int cltype4;
int idtype5;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
val* var9 /* : MType */;
val* var_x /* var x: MType */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
short int var_14 /* var : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
var_mtype = p0;
/* <var_mtype:MType> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var_mtype->type->table_size) {
var2 = 0;
} else {
var2 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var2;
if (var2){
var1 = var_;
} else {
/* <var_mtype:MType> isa MNullType */
cltype4 = type_nit__MNullType.color;
idtype5 = type_nit__MNullType.id;
if(cltype4 >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype4] == idtype5;
}
var1 = var3;
}
if (var1){
var = 1;
goto RET_LABEL;
} else {
}
/* <var_mtype:MType> isa MFormalType */
cltype7 = type_nit__MFormalType.color;
idtype8 = type_nit__MFormalType.id;
if(cltype7 >= var_mtype->type->table_size) {
var6 = 0;
} else {
var6 = var_mtype->type->type_table[cltype7] == idtype8;
}
if (var6){
{
var9 = nit__typing___nit__typing__TypeVisitor___anchor_to(self, var_mtype);
}
var_x = var9;
/* <var_x:MType> isa MNullableType */
cltype12 = type_nit__MNullableType.color;
idtype13 = type_nit__MNullableType.id;
if(cltype12 >= var_x->type->table_size) {
var11 = 0;
} else {
var11 = var_x->type->type_table[cltype12] == idtype13;
}
var_14 = var11;
if (var11){
var10 = var_14;
} else {
/* <var_x:MType> isa MNullType */
cltype16 = type_nit__MNullType.color;
idtype17 = type_nit__MNullType.id;
if(cltype16 >= var_x->type->table_size) {
var15 = 0;
} else {
var15 = var_x->type->type_table[cltype16] == idtype17;
}
var10 = var15;
}
if (var10){
var = 1;
goto RET_LABEL;
} else {
}
} else {
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#check_can_be_null for (self: TypeVisitor, ANode, MType): Bool */
short int nit__typing___nit__typing__TypeVisitor___check_can_be_null(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_anode /* var anode: ANode */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : MType */;
val* var_res /* var res: MType */;
val* var4 /* : ModelBuilder */;
val* var6 /* : ModelBuilder */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var11 /* : NativeArray[String] */;
static val* varonce10;
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
val* var24 /* : String */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var27 /* : ModelBuilder */;
val* var29 /* : ModelBuilder */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
val* var35 /* : NativeArray[String] */;
static val* varonce34;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
val* var44 /* : String */;
val* var45 /* : String */;
var_anode = p0;
var_mtype = p1;
{
var1 = nit__typing___nit__typing__TypeVisitor___can_be_null(self, var_mtype);
}
if (var1){
var = 1;
goto RET_LABEL;
} else {
}
/* <var_mtype:MType> isa MFormalType */
cltype = type_nit__MFormalType.color;
idtype = type_nit__MFormalType.id;
if(cltype >= var_mtype->type->table_size) {
var2 = 0;
} else {
var2 = var_mtype->type->type_table[cltype] == idtype;
}
if (var2){
{
var3 = nit__typing___nit__typing__TypeVisitor___anchor_to(self, var_mtype);
}
var_res = var3;
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "useless-null-test";
var9 = standard___standard__NativeString___to_s_with_length(var8, 17l);
var7 = var9;
varonce = var7;
}
if (unlikely(varonce10==NULL)) {
var11 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Warning: expression is not null, since it is a `";
var15 = standard___standard__NativeString___to_s_with_length(var14, 48l);
var13 = var15;
varonce12 = var13;
}
((struct instance_standard__NativeArray*)var11)->values[0]=var13;
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = ": ";
var19 = standard___standard__NativeString___to_s_with_length(var18, 2l);
var17 = var19;
varonce16 = var17;
}
((struct instance_standard__NativeArray*)var11)->values[2]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "`.";
var23 = standard___standard__NativeString___to_s_with_length(var22, 2l);
var21 = var23;
varonce20 = var21;
}
((struct instance_standard__NativeArray*)var11)->values[4]=var21;
} else {
var11 = varonce10;
varonce10 = NULL;
}
{
var24 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType(MFormalType)>*/
}
((struct instance_standard__NativeArray*)var11)->values[1]=var24;
{
var25 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:MType>*/
}
((struct instance_standard__NativeArray*)var11)->values[3]=var25;
{
var26 = ((val*(*)(val* self))(var11->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce10 = var11;
{
nit___nit__ModelBuilder___warning(var4, var_anode, var7, var26); /* Direct call modelbuilder_base#ModelBuilder#warning on <var4:ModelBuilder>*/
}
} else {
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var29 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "useless-null-test";
var33 = standard___standard__NativeString___to_s_with_length(var32, 17l);
var31 = var33;
varonce30 = var31;
}
if (unlikely(varonce34==NULL)) {
var35 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "Warning: expression is not null, since it is a `";
var39 = standard___standard__NativeString___to_s_with_length(var38, 48l);
var37 = var39;
varonce36 = var37;
}
((struct instance_standard__NativeArray*)var35)->values[0]=var37;
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "`.";
var43 = standard___standard__NativeString___to_s_with_length(var42, 2l);
var41 = var43;
varonce40 = var41;
}
((struct instance_standard__NativeArray*)var35)->values[2]=var41;
} else {
var35 = varonce34;
varonce34 = NULL;
}
{
var44 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var35)->values[1]=var44;
{
var45 = ((val*(*)(val* self))(var35->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var35); /* native_to_s on <var35:NativeArray[String]>*/
}
varonce34 = var35;
{
nit___nit__ModelBuilder___warning(var27, var_anode, var31, var45); /* Direct call modelbuilder_base#ModelBuilder#warning on <var27:ModelBuilder>*/
}
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#null_test for (self: TypeVisitor, ABinopExpr) */
void nit__typing___nit__typing__TypeVisitor___null_test(val* self, val* p0) {
val* var_anode /* var anode: ABinopExpr */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var_mtype2 /* var mtype2: nullable MType */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
int cltype;
int idtype;
short int var22 /* : Bool */;
val* var23 /* : AExpr */;
val* var25 /* : AExpr */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
val* var31 /* : MType */;
val* var32 /* : AExpr */;
val* var34 /* : AExpr */;
val* var35 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
int cltype43;
int idtype44;
val* var45 /* : nullable FlowContext */;
val* var47 /* : nullable FlowContext */;
val* var48 /* : FlowContext */;
val* var50 /* : FlowContext */;
val* var51 /* : nullable FlowContext */;
val* var53 /* : nullable FlowContext */;
val* var54 /* : FlowContext */;
val* var56 /* : FlowContext */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
val* var60 /* : nullable FlowContext */;
val* var62 /* : nullable FlowContext */;
val* var63 /* : FlowContext */;
val* var65 /* : FlowContext */;
val* var66 /* : nullable FlowContext */;
val* var68 /* : nullable FlowContext */;
val* var69 /* : FlowContext */;
val* var71 /* : FlowContext */;
var_anode = p0;
{
{ /* Inline parser_nodes#ASendExpr#n_expr (var_anode) on <var_anode:ABinopExpr> */
var2 = var_anode->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <var_anode:ABinopExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2025);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_nit__typing__AExpr__mtype]))(var); /* mtype on <var:AExpr>*/
}
var_mtype = var3;
{
{ /* Inline parser_nodes#ABinopExpr#n_expr2 (var_anode) on <var_anode:ABinopExpr> */
var6 = var_anode->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <var_anode:ABinopExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2036);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((val*(*)(val* self))(var4->class->vft[COLOR_nit__typing__AExpr__mtype]))(var4); /* mtype on <var4:AExpr>*/
}
var_mtype2 = var7;
if (var_mtype == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var14 = var_mtype == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
var_ = var9;
if (var9){
var8 = var_;
} else {
if (var_mtype2 == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype2,((val*)NULL)) on <var_mtype2:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype2,var_other) on <var_mtype2:nullable MType(MType)> */
var20 = var_mtype2 == var_other;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
var8 = var15;
}
if (var8){
goto RET_LABEL;
} else {
}
/* <var_mtype2:nullable MType(MType)> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var_mtype2->type->table_size) {
var21 = 0;
} else {
var21 = var_mtype2->type->type_table[cltype] == idtype;
}
var22 = !var21;
if (var22){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ASendExpr#n_expr (var_anode) on <var_anode:ABinopExpr> */
var25 = var_anode->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <var_anode:ABinopExpr> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2025);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nit__typing___nit__typing__TypeVisitor___check_can_be_null(self, var23, var_mtype);
}
var27 = !var26;
if (var27){
goto RET_LABEL;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MNullType */
cltype29 = type_nit__MNullType.color;
idtype30 = type_nit__MNullType.id;
if(cltype29 >= var_mtype->type->table_size) {
var28 = 0;
} else {
var28 = var_mtype->type->type_table[cltype29] == idtype30;
}
if (var28){
var_mtype = ((val*)NULL);
} else {
{
var31 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__as_notnull]))(var_mtype); /* as_notnull on <var_mtype:nullable MType(MType)>*/
}
var_mtype = var31;
}
{
{ /* Inline parser_nodes#ASendExpr#n_expr (var_anode) on <var_anode:ABinopExpr> */
var34 = var_anode->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <var_anode:ABinopExpr> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2025);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = ((val*(*)(val* self))(var32->class->vft[COLOR_nit__typing__AExpr__its_variable]))(var32); /* its_variable on <var32:AExpr>*/
}
var_variable = var35;
if (var_variable == NULL) {
var36 = 1; /* is null */
} else {
var36 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_variable,var_other) on <var_variable:nullable Variable(Variable)> */
var41 = var_variable == var_other;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var36 = var37;
}
if (var36){
goto RET_LABEL;
} else {
}
/* <var_anode:ABinopExpr> isa AEqExpr */
cltype43 = type_nit__AEqExpr.color;
idtype44 = type_nit__AEqExpr.id;
if(cltype43 >= var_anode->type->table_size) {
var42 = 0;
} else {
var42 = var_anode->type->type_table[cltype43] == idtype44;
}
if (var42){
{
{ /* Inline flow#AExpr#after_flow_context (var_anode) on <var_anode:ABinopExpr(AEqExpr)> */
var47 = var_anode->attrs[COLOR_nit__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_anode:ABinopExpr(AEqExpr)> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
if (var45 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 259);
fatal_exit(1);
} else {
{ /* Inline flow#FlowContext#when_true (var45) on <var45:nullable FlowContext> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 225);
fatal_exit(1);
}
var50 = var45->attrs[COLOR_nit__flow__FlowContext___when_true].val; /* _when_true on <var45:nullable FlowContext> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 225);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
nit__typing___FlowContext___set_var(var48, self, var_variable, var_mtype2); /* Direct call typing#FlowContext#set_var on <var48:FlowContext>*/
}
{
{ /* Inline flow#AExpr#after_flow_context (var_anode) on <var_anode:ABinopExpr(AEqExpr)> */
var53 = var_anode->attrs[COLOR_nit__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_anode:ABinopExpr(AEqExpr)> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
if (var51 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 260);
fatal_exit(1);
} else {
{ /* Inline flow#FlowContext#when_false (var51) on <var51:nullable FlowContext> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 228);
fatal_exit(1);
}
var56 = var51->attrs[COLOR_nit__flow__FlowContext___when_false].val; /* _when_false on <var51:nullable FlowContext> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 228);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
nit__typing___FlowContext___set_var(var54, self, var_variable, var_mtype); /* Direct call typing#FlowContext#set_var on <var54:FlowContext>*/
}
} else {
/* <var_anode:ABinopExpr> isa ANeExpr */
cltype58 = type_nit__ANeExpr.color;
idtype59 = type_nit__ANeExpr.id;
if(cltype58 >= var_anode->type->table_size) {
var57 = 0;
} else {
var57 = var_anode->type->type_table[cltype58] == idtype59;
}
if (var57){
{
{ /* Inline flow#AExpr#after_flow_context (var_anode) on <var_anode:ABinopExpr(ANeExpr)> */
var62 = var_anode->attrs[COLOR_nit__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_anode:ABinopExpr(ANeExpr)> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
if (var60 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 262);
fatal_exit(1);
} else {
{ /* Inline flow#FlowContext#when_false (var60) on <var60:nullable FlowContext> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 228);
fatal_exit(1);
}
var65 = var60->attrs[COLOR_nit__flow__FlowContext___when_false].val; /* _when_false on <var60:nullable FlowContext> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 228);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
nit__typing___FlowContext___set_var(var63, self, var_variable, var_mtype2); /* Direct call typing#FlowContext#set_var on <var63:FlowContext>*/
}
{
{ /* Inline flow#AExpr#after_flow_context (var_anode) on <var_anode:ABinopExpr(ANeExpr)> */
var68 = var_anode->attrs[COLOR_nit__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_anode:ABinopExpr(ANeExpr)> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
if (var66 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 263);
fatal_exit(1);
} else {
{ /* Inline flow#FlowContext#when_true (var66) on <var66:nullable FlowContext> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 225);
fatal_exit(1);
}
var71 = var66->attrs[COLOR_nit__flow__FlowContext___when_true].val; /* _when_true on <var66:nullable FlowContext> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 225);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
nit__typing___FlowContext___set_var(var69, self, var_variable, var_mtype); /* Direct call typing#FlowContext#set_var on <var69:FlowContext>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 265);
fatal_exit(1);
}
}
RET_LABEL:;
}
/* method typing#TypeVisitor#try_get_mproperty_by_name2 for (self: TypeVisitor, ANode, MType, String): nullable MProperty */
val* nit__typing___nit__typing__TypeVisitor___try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MProperty */;
val* var_anode /* var anode: ANode */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
val* var1 /* : ModelBuilder */;
val* var3 /* : ModelBuilder */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : nullable MProperty */;
var_anode = p0;
var_mtype = p1;
var_name = p2;
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var3 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit___nit__ModelBuilder___try_get_mproperty_by_name2(var1, var_anode, var4, var_mtype, var_name);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#resolve_mtype for (self: TypeVisitor, AType): nullable MType */
val* nit__typing___nit__typing__TypeVisitor___resolve_mtype(val* self, val* p0) {
val* var /* : nullable MType */;
val* var_node /* var node: AType */;
val* var1 /* : ModelBuilder */;
val* var3 /* : ModelBuilder */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : nullable MClassDef */;
val* var9 /* : nullable MClassDef */;
val* var10 /* : nullable MType */;
var_node = p0;
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var3 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mclassdef (self) on <self:TypeVisitor> */
var9 = self->attrs[COLOR_nit__typing__TypeVisitor___mclassdef].val; /* _mclassdef on <self:TypeVisitor> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nit___nit__ModelBuilder___resolve_mtype(var1, var4, var7, var_node);
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#try_get_mclass for (self: TypeVisitor, ANode, String): nullable MClass */
val* nit__typing___nit__typing__TypeVisitor___try_get_mclass(val* self, val* p0, val* p1) {
val* var /* : nullable MClass */;
val* var_node /* var node: ANode */;
val* var_name /* var name: String */;
val* var1 /* : ModelBuilder */;
val* var3 /* : ModelBuilder */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
var_node = p0;
var_name = p1;
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var3 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit___nit__ModelBuilder___try_get_mclass_by_name(var1, var_node, var4, var_name);
}
var_mclass = var7;
var = var_mclass;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#get_mclass for (self: TypeVisitor, ANode, String): nullable MClass */
val* nit__typing___nit__typing__TypeVisitor___get_mclass(val* self, val* p0, val* p1) {
val* var /* : nullable MClass */;
val* var_node /* var node: ANode */;
val* var_name /* var name: String */;
val* var1 /* : ModelBuilder */;
val* var3 /* : ModelBuilder */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
var_node = p0;
var_name = p1;
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var3 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit___nit__ModelBuilder___get_mclass_by_name(var1, var_node, var4, var_name);
}
var_mclass = var7;
var = var_mclass;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#type_bool for (self: TypeVisitor, ANode): nullable MType */
val* nit__typing___nit__typing__TypeVisitor___type_bool(val* self, val* p0) {
val* var /* : nullable MType */;
val* var_node /* var node: ANode */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
val* var4 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
var_node = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "Bool";
var3 = standard___standard__NativeString___to_s_with_length(var2, 4l);
var1 = var3;
varonce = var1;
}
{
var4 = nit__typing___nit__typing__TypeVisitor___get_mclass(self, var_node, var1);
}
var_mclass = var4;
if (var_mclass == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var10 = var_mclass == var_other;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var13 = var_mclass->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#get_method for (self: TypeVisitor, ANode, MType, String, Bool): nullable CallSite */
val* nit__typing___nit__typing__TypeVisitor___get_method(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : nullable CallSite */;
val* var_node /* var node: ANode */;
val* var_recvtype /* var recvtype: MType */;
val* var_name /* var name: String */;
short int var_recv_is_self /* var recv_is_self: Bool */;
val* var1 /* : MType */;
val* var_unsafe_type /* var unsafe_type: MType */;
short int var2 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
val* var6 /* : nullable MClass */;
val* var_objclass /* var objclass: nullable MClass */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : MClassType */;
val* var15 /* : MClassType */;
val* var16 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
short int var17 /* : Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
short int var22 /* : Bool */;
short int var_ /* var : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
val* var33 /* : nullable MProperty */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : ModelBuilder */;
val* var42 /* : ModelBuilder */;
val* var44 /* : NativeArray[String] */;
static val* varonce43;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : FlatString */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : FlatString */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : FlatString */;
val* var57 /* : String */;
val* var58 /* : String */;
short int var59 /* : Bool */;
val* var60 /* : ModelBuilder */;
val* var62 /* : ModelBuilder */;
val* var64 /* : NativeArray[String] */;
static val* varonce63;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : FlatString */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
val* var72 /* : FlatString */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : FlatString */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : FlatString */;
val* var81 /* : String */;
val* var82 /* : String */;
val* var83 /* : String */;
val* var84 /* : ModelBuilder */;
val* var86 /* : ModelBuilder */;
val* var88 /* : NativeArray[String] */;
static val* varonce87;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
val* var92 /* : FlatString */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : FlatString */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
val* var100 /* : FlatString */;
val* var101 /* : String */;
val* var102 /* : String */;
short int var103 /* : Bool */;
int cltype104;
int idtype105;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
int cltype108;
int idtype109;
short int var_110 /* var : Bool */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
val* var114 /* : NativeArray[String] */;
static val* varonce113;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
val* var118 /* : FlatString */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
val* var122 /* : FlatString */;
val* var123 /* : String */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
int cltype126;
int idtype127;
short int var_128 /* var : Bool */;
short int var129 /* : Bool */;
short int var130 /* : Bool */;
val* var131 /* : ModelBuilder */;
val* var133 /* : ModelBuilder */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
val* var137 /* : FlatString */;
val* var139 /* : NativeArray[String] */;
static val* varonce138;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
val* var143 /* : FlatString */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
val* var147 /* : FlatString */;
val* var148 /* : String */;
val* var149 /* : String */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
short int var154 /* : Bool */;
short int var_155 /* var : Bool */;
short int var_156 /* var : Bool */;
short int var157 /* : Bool */;
short int var159 /* : Bool */;
short int var160 /* : Bool */;
val* var162 /* : NativeArray[String] */;
static val* varonce161;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
val* var166 /* : FlatString */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
val* var170 /* : FlatString */;
val* var171 /* : String */;
short int var172 /* : Bool */;
short int var173 /* : Bool */;
short int var_174 /* var : Bool */;
short int var175 /* : Bool */;
short int var177 /* : Bool */;
val* var179 /* : NativeArray[String] */;
static val* varonce178;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
val* var183 /* : FlatString */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
val* var187 /* : FlatString */;
val* var188 /* : String */;
short int var189 /* : Bool */;
short int var190 /* : Bool */;
short int var191 /* : Bool */;
val* var192 /* : MVisibility */;
val* var194 /* : MVisibility */;
val* var195 /* : Sys */;
val* var196 /* : MVisibility */;
short int var197 /* : Bool */;
short int var199 /* : Bool */;
short int var201 /* : Bool */;
short int var_202 /* var : Bool */;
short int var203 /* : Bool */;
short int var_204 /* var : Bool */;
val* var205 /* : MModule */;
val* var207 /* : MModule */;
val* var208 /* : MClassDef */;
val* var210 /* : MClassDef */;
val* var211 /* : MModule */;
val* var213 /* : MModule */;
val* var214 /* : MVisibility */;
val* var215 /* : Sys */;
val* var216 /* : MVisibility */;
short int var217 /* : Bool */;
short int var_218 /* var : Bool */;
val* var219 /* : ModelBuilder */;
val* var221 /* : ModelBuilder */;
val* var222 /* : ToolContext */;
val* var224 /* : ToolContext */;
val* var225 /* : OptionBool */;
val* var227 /* : OptionBool */;
val* var228 /* : nullable Object */;
val* var230 /* : nullable Object */;
short int var231 /* : Bool */;
short int var232 /* : Bool */;
val* var233 /* : ModelBuilder */;
val* var235 /* : ModelBuilder */;
val* var237 /* : NativeArray[String] */;
static val* varonce236;
static val* varonce238;
val* var239 /* : String */;
char* var240 /* : NativeString */;
val* var241 /* : FlatString */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
val* var245 /* : FlatString */;
val* var246 /* : String */;
val* var247 /* : nullable MDeprecationInfo */;
val* var249 /* : nullable MDeprecationInfo */;
val* var_info /* var info: nullable MDeprecationInfo */;
short int var250 /* : Bool */;
short int var251 /* : Bool */;
short int var252 /* : Bool */;
val* var_other254 /* var other: nullable Object */;
short int var255 /* : Bool */;
short int var256 /* : Bool */;
short int var_257 /* var : Bool */;
val* var258 /* : nullable MPropDef */;
val* var260 /* : nullable MPropDef */;
val* var261 /* : MProperty */;
val* var263 /* : MProperty */;
val* var264 /* : nullable MDeprecationInfo */;
val* var266 /* : nullable MDeprecationInfo */;
short int var267 /* : Bool */;
short int var268 /* : Bool */;
short int var270 /* : Bool */;
short int var272 /* : Bool */;
val* var273 /* : nullable MDoc */;
val* var275 /* : nullable MDoc */;
val* var_mdoc /* var mdoc: nullable MDoc */;
short int var276 /* : Bool */;
short int var277 /* : Bool */;
short int var279 /* : Bool */;
short int var280 /* : Bool */;
val* var281 /* : ModelBuilder */;
val* var283 /* : ModelBuilder */;
static val* varonce284;
val* var285 /* : String */;
char* var286 /* : NativeString */;
val* var287 /* : FlatString */;
val* var289 /* : NativeArray[String] */;
static val* varonce288;
static val* varonce290;
val* var291 /* : String */;
char* var292 /* : NativeString */;
val* var293 /* : FlatString */;
static val* varonce294;
val* var295 /* : String */;
char* var296 /* : NativeString */;
val* var297 /* : FlatString */;
val* var298 /* : Array[String] */;
val* var300 /* : Array[String] */;
val* var301 /* : nullable Object */;
val* var302 /* : String */;
val* var303 /* : ModelBuilder */;
val* var305 /* : ModelBuilder */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : NativeString */;
val* var309 /* : FlatString */;
val* var311 /* : NativeArray[String] */;
static val* varonce310;
static val* varonce312;
val* var313 /* : String */;
char* var314 /* : NativeString */;
val* var315 /* : FlatString */;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : NativeString */;
val* var319 /* : FlatString */;
val* var320 /* : String */;
val* var321 /* : MModule */;
val* var323 /* : MModule */;
val* var324 /* : Array[MPropDef] */;
val* var_propdefs /* var propdefs: Array[MMethodDef] */;
long var325 /* : Int */;
long var327 /* : Int */;
short int var328 /* : Bool */;
short int var330 /* : Bool */;
val* var331 /* : ModelBuilder */;
val* var333 /* : ModelBuilder */;
val* var335 /* : NativeArray[String] */;
static val* varonce334;
static val* varonce336;
val* var337 /* : String */;
char* var338 /* : NativeString */;
val* var339 /* : FlatString */;
static val* varonce340;
val* var341 /* : String */;
char* var342 /* : NativeString */;
val* var343 /* : FlatString */;
static val* varonce344;
val* var345 /* : String */;
char* var346 /* : NativeString */;
val* var347 /* : FlatString */;
val* var348 /* : String */;
val* var349 /* : String */;
long var350 /* : Int */;
long var352 /* : Int */;
short int var353 /* : Bool */;
short int var355 /* : Bool */;
val* var356 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable Object */;
val* var357 /* : ModelBuilder */;
val* var359 /* : ModelBuilder */;
static val* varonce360;
val* var361 /* : String */;
char* var362 /* : NativeString */;
val* var363 /* : FlatString */;
val* var365 /* : NativeArray[String] */;
static val* varonce364;
static val* varonce366;
val* var367 /* : String */;
char* var368 /* : NativeString */;
val* var369 /* : FlatString */;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : NativeString */;
val* var373 /* : FlatString */;
static val* varonce374;
val* var375 /* : String */;
char* var376 /* : NativeString */;
val* var377 /* : FlatString */;
val* var378 /* : String */;
static val* varonce379;
val* var380 /* : String */;
char* var381 /* : NativeString */;
val* var382 /* : FlatString */;
val* var383 /* : String */;
val* var384 /* : String */;
val* var385 /* : MPropDef */;
val* var387 /* : MPropDef */;
val* var388 /* : nullable MSignature */;
val* var389 /* : nullable MSignature */;
val* var391 /* : nullable MSignature */;
val* var392 /* : nullable MSignature */;
val* var394 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var395 /* : Bool */;
short int var396 /* : Bool */;
short int var398 /* : Bool */;
short int var400 /* : Bool */;
val* var401 /* : MType */;
short int var402 /* : Bool */;
int cltype403;
int idtype404;
const char* var_class_name;
short int var_erasure_cast /* var erasure_cast: Bool */;
val* var405 /* : nullable MSignature */;
val* var407 /* : nullable MSignature */;
val* var408 /* : nullable MType */;
val* var410 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var411 /* : Bool */;
short int var412 /* : Bool */;
short int var_413 /* var : Bool */;
short int var414 /* : Bool */;
short int var415 /* : Bool */;
short int var417 /* : Bool */;
short int var418 /* : Bool */;
val* var419 /* : MType */;
short int var420 /* : Bool */;
int cltype421;
int idtype422;
val* var423 /* : nullable MType */;
val* var425 /* : nullable MType */;
val* var_erased_rettype /* var erased_rettype: nullable MType */;
short int var426 /* : Bool */;
short int var427 /* : Bool */;
short int var429 /* : Bool */;
short int var430 /* : Bool */;
val* var431 /* : CallSite */;
val* var432 /* : MModule */;
val* var434 /* : MModule */;
val* var435 /* : nullable MClassType */;
val* var437 /* : nullable MClassType */;
val* var_callsite /* var callsite: CallSite */;
var_node = p0;
var_recvtype = p1;
var_name = p2;
var_recv_is_self = p3;
{
var1 = nit__typing___nit__typing__TypeVisitor___anchor_to(self, var_recvtype);
}
var_unsafe_type = var1;
/* <var_recvtype:MType> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var_recvtype->type->table_size) {
var2 = 0;
} else {
var2 = var_recvtype->type->type_table[cltype] == idtype;
}
if (var2){
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "Object";
var5 = standard___standard__NativeString___to_s_with_length(var4, 6l);
var3 = var5;
varonce = var3;
}
{
var6 = nit__typing___nit__typing__TypeVisitor___get_mclass(self, var_node, var3);
}
var_objclass = var6;
if (var_objclass == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_objclass,((val*)NULL)) on <var_objclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_objclass,var_other) on <var_objclass:nullable MClass(MClass)> */
var12 = var_objclass == var_other;
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
if (var7){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#mclass_type (var_objclass) on <var_objclass:nullable MClass(MClass)> */
var15 = var_objclass->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_objclass:nullable MClass(MClass)> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_unsafe_type = var13;
} else {
}
{
var16 = nit__typing___nit__typing__TypeVisitor___try_get_mproperty_by_name2(self, var_node, var_unsafe_type, var_name);
}
var_mproperty = var16;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "new";
var21 = standard___standard__NativeString___to_s_with_length(var20, 3l);
var19 = var21;
varonce18 = var19;
}
{
var22 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var19); /* == on <var_name:String>*/
}
var_ = var22;
if (var22){
if (var_mproperty == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mproperty,((val*)NULL)) on <var_mproperty:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mproperty,var_other) on <var_mproperty:nullable MProperty(MProperty)> */
var28 = var_mproperty == var_other;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
var17 = var23;
} else {
var17 = var_;
}
if (var17){
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "init";
var32 = standard___standard__NativeString___to_s_with_length(var31, 4l);
var30 = var32;
varonce29 = var30;
}
var_name = var30;
{
var33 = nit__typing___nit__typing__TypeVisitor___try_get_mproperty_by_name2(self, var_node, var_unsafe_type, var_name);
}
var_mproperty = var33;
} else {
}
if (var_mproperty == NULL) {
var34 = 1; /* is null */
} else {
var34 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mproperty,((val*)NULL)) on <var_mproperty:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mproperty,var_other) on <var_mproperty:nullable MProperty(MProperty)> */
var39 = var_mproperty == var_other;
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
if (var_recv_is_self){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var42 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (unlikely(varonce43==NULL)) {
var44 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "Error: method or variable `";
var48 = standard___standard__NativeString___to_s_with_length(var47, 27l);
var46 = var48;
varonce45 = var46;
}
((struct instance_standard__NativeArray*)var44)->values[0]=var46;
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "` unknown in `";
var52 = standard___standard__NativeString___to_s_with_length(var51, 14l);
var50 = var52;
varonce49 = var50;
}
((struct instance_standard__NativeArray*)var44)->values[2]=var50;
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "`.";
var56 = standard___standard__NativeString___to_s_with_length(var55, 2l);
var54 = var56;
varonce53 = var54;
}
((struct instance_standard__NativeArray*)var44)->values[4]=var54;
} else {
var44 = varonce43;
varonce43 = NULL;
}
((struct instance_standard__NativeArray*)var44)->values[1]=var_name;
{
var57 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_standard__string__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:MType>*/
}
((struct instance_standard__NativeArray*)var44)->values[3]=var57;
{
var58 = ((val*(*)(val* self))(var44->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var44); /* native_to_s on <var44:NativeArray[String]>*/
}
varonce43 = var44;
{
nit___nit__ModelBuilder___error(var40, var_node, var58); /* Direct call modelbuilder_base#ModelBuilder#error on <var40:ModelBuilder>*/
}
} else {
{
var59 = ((short int(*)(val* self))(var_recvtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_recvtype); /* need_anchor on <var_recvtype:MType>*/
}
if (var59){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var62 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
if (unlikely(varonce63==NULL)) {
var64 = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "Error: method `";
var68 = standard___standard__NativeString___to_s_with_length(var67, 15l);
var66 = var68;
varonce65 = var66;
}
((struct instance_standard__NativeArray*)var64)->values[0]=var66;
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "` does not exists in `";
var72 = standard___standard__NativeString___to_s_with_length(var71, 22l);
var70 = var72;
varonce69 = var70;
}
((struct instance_standard__NativeArray*)var64)->values[2]=var70;
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = ": ";
var76 = standard___standard__NativeString___to_s_with_length(var75, 2l);
var74 = var76;
varonce73 = var74;
}
((struct instance_standard__NativeArray*)var64)->values[4]=var74;
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "`.";
var80 = standard___standard__NativeString___to_s_with_length(var79, 2l);
var78 = var80;
varonce77 = var78;
}
((struct instance_standard__NativeArray*)var64)->values[6]=var78;
} else {
var64 = varonce63;
varonce63 = NULL;
}
((struct instance_standard__NativeArray*)var64)->values[1]=var_name;
{
var81 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_standard__string__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:MType>*/
}
((struct instance_standard__NativeArray*)var64)->values[3]=var81;
{
var82 = ((val*(*)(val* self))(var_unsafe_type->class->vft[COLOR_standard__string__Object__to_s]))(var_unsafe_type); /* to_s on <var_unsafe_type:MType>*/
}
((struct instance_standard__NativeArray*)var64)->values[5]=var82;
{
var83 = ((val*(*)(val* self))(var64->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var64); /* native_to_s on <var64:NativeArray[String]>*/
}
varonce63 = var64;
{
nit___nit__ModelBuilder___error(var60, var_node, var83); /* Direct call modelbuilder_base#ModelBuilder#error on <var60:ModelBuilder>*/
}
} else {
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var86 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
if (unlikely(varonce87==NULL)) {
var88 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "Error: method `";
var92 = standard___standard__NativeString___to_s_with_length(var91, 15l);
var90 = var92;
varonce89 = var90;
}
((struct instance_standard__NativeArray*)var88)->values[0]=var90;
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "` does not exists in `";
var96 = standard___standard__NativeString___to_s_with_length(var95, 22l);
var94 = var96;
varonce93 = var94;
}
((struct instance_standard__NativeArray*)var88)->values[2]=var94;
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "`.";
var100 = standard___standard__NativeString___to_s_with_length(var99, 2l);
var98 = var100;
varonce97 = var98;
}
((struct instance_standard__NativeArray*)var88)->values[4]=var98;
} else {
var88 = varonce87;
varonce87 = NULL;
}
((struct instance_standard__NativeArray*)var88)->values[1]=var_name;
{
var101 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_standard__string__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:MType>*/
}
((struct instance_standard__NativeArray*)var88)->values[3]=var101;
{
var102 = ((val*(*)(val* self))(var88->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var88); /* native_to_s on <var88:NativeArray[String]>*/
}
varonce87 = var88;
{
nit___nit__ModelBuilder___error(var84, var_node, var102); /* Direct call modelbuilder_base#ModelBuilder#error on <var84:ModelBuilder>*/
}
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
/* <var_mproperty:nullable MProperty(MProperty)> isa MMethod */
cltype104 = type_nit__MMethod.color;
idtype105 = type_nit__MMethod.id;
if(cltype104 >= var_mproperty->type->table_size) {
var103 = 0;
} else {
var103 = var_mproperty->type->type_table[cltype104] == idtype105;
}
if (unlikely(!var103)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 326);
fatal_exit(1);
}
/* <var_recvtype:MType> isa MNullType */
cltype108 = type_nit__MNullType.color;
idtype109 = type_nit__MNullType.id;
if(cltype108 >= var_recvtype->type->table_size) {
var107 = 0;
} else {
var107 = var_recvtype->type->type_table[cltype108] == idtype109;
}
var_110 = var107;
if (var107){
{
var111 = nit___nit__MMethod___is_null_safe(var_mproperty);
}
var112 = !var111;
var106 = var112;
} else {
var106 = var_110;
}
if (var106){
if (unlikely(varonce113==NULL)) {
var114 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "Error: method `";
var118 = standard___standard__NativeString___to_s_with_length(var117, 15l);
var116 = var118;
varonce115 = var116;
}
((struct instance_standard__NativeArray*)var114)->values[0]=var116;
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "` called on `null`.";
var122 = standard___standard__NativeString___to_s_with_length(var121, 19l);
var120 = var122;
varonce119 = var120;
}
((struct instance_standard__NativeArray*)var114)->values[2]=var120;
} else {
var114 = varonce113;
varonce113 = NULL;
}
((struct instance_standard__NativeArray*)var114)->values[1]=var_name;
{
var123 = ((val*(*)(val* self))(var114->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var114); /* native_to_s on <var114:NativeArray[String]>*/
}
varonce113 = var114;
{
nit__typing___nit__typing__TypeVisitor___error(self, var_node, var123); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
/* <var_unsafe_type:MType> isa MNullableType */
cltype126 = type_nit__MNullableType.color;
idtype127 = type_nit__MNullableType.id;
if(cltype126 >= var_unsafe_type->type->table_size) {
var125 = 0;
} else {
var125 = var_unsafe_type->type->type_table[cltype126] == idtype127;
}
var_128 = var125;
if (var125){
{
var129 = nit___nit__MMethod___is_null_safe(var_mproperty);
}
var130 = !var129;
var124 = var130;
} else {
var124 = var_128;
}
if (var124){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var133 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var133 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "call-on-nullable";
var137 = standard___standard__NativeString___to_s_with_length(var136, 16l);
var135 = var137;
varonce134 = var135;
}
if (unlikely(varonce138==NULL)) {
var139 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce140!=NULL)) {
var141 = varonce140;
} else {
var142 = "Warning: method call on a nullable receiver `";
var143 = standard___standard__NativeString___to_s_with_length(var142, 45l);
var141 = var143;
varonce140 = var141;
}
((struct instance_standard__NativeArray*)var139)->values[0]=var141;
if (likely(varonce144!=NULL)) {
var145 = varonce144;
} else {
var146 = "`.";
var147 = standard___standard__NativeString___to_s_with_length(var146, 2l);
var145 = var147;
varonce144 = var145;
}
((struct instance_standard__NativeArray*)var139)->values[2]=var145;
} else {
var139 = varonce138;
varonce138 = NULL;
}
{
var148 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_standard__string__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:MType>*/
}
((struct instance_standard__NativeArray*)var139)->values[1]=var148;
{
var149 = ((val*(*)(val* self))(var139->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var139); /* native_to_s on <var139:NativeArray[String]>*/
}
varonce138 = var139;
{
nit___nit__ModelBuilder___advice(var131, var_node, var135, var149); /* Direct call modelbuilder_base#ModelBuilder#advice on <var131:ModelBuilder>*/
}
} else {
}
}
{
{ /* Inline typing#TypeVisitor#is_toplevel_context (self) on <self:TypeVisitor> */
var154 = self->attrs[COLOR_nit__typing__TypeVisitor___is_toplevel_context].s; /* _is_toplevel_context on <self:TypeVisitor> */
var152 = var154;
RET_LABEL153:(void)0;
}
}
var_155 = var152;
if (var152){
var151 = var_recv_is_self;
} else {
var151 = var_155;
}
var_156 = var151;
if (var151){
{
{ /* Inline model#MMethod#is_toplevel (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var159 = var_mproperty->attrs[COLOR_nit__model__MMethod___is_toplevel].s; /* _is_toplevel on <var_mproperty:nullable MProperty(MMethod)> */
var157 = var159;
RET_LABEL158:(void)0;
}
}
var160 = !var157;
var150 = var160;
} else {
var150 = var_156;
}
if (var150){
if (unlikely(varonce161==NULL)) {
var162 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "Error: `";
var166 = standard___standard__NativeString___to_s_with_length(var165, 8l);
var164 = var166;
varonce163 = var164;
}
((struct instance_standard__NativeArray*)var162)->values[0]=var164;
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = "` is not a top-level method, thus need a receiver.";
var170 = standard___standard__NativeString___to_s_with_length(var169, 50l);
var168 = var170;
varonce167 = var168;
}
((struct instance_standard__NativeArray*)var162)->values[2]=var168;
} else {
var162 = varonce161;
varonce161 = NULL;
}
((struct instance_standard__NativeArray*)var162)->values[1]=var_name;
{
var171 = ((val*(*)(val* self))(var162->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var162); /* native_to_s on <var162:NativeArray[String]>*/
}
varonce161 = var162;
{
nit__typing___nit__typing__TypeVisitor___error(self, var_node, var171); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
} else {
}
var173 = !var_recv_is_self;
var_174 = var173;
if (var173){
{
{ /* Inline model#MMethod#is_toplevel (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var177 = var_mproperty->attrs[COLOR_nit__model__MMethod___is_toplevel].s; /* _is_toplevel on <var_mproperty:nullable MProperty(MMethod)> */
var175 = var177;
RET_LABEL176:(void)0;
}
}
var172 = var175;
} else {
var172 = var_174;
}
if (var172){
if (unlikely(varonce178==NULL)) {
var179 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "Error: cannot call `";
var183 = standard___standard__NativeString___to_s_with_length(var182, 20l);
var181 = var183;
varonce180 = var181;
}
((struct instance_standard__NativeArray*)var179)->values[0]=var181;
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = "`, a top-level method, with a receiver.";
var187 = standard___standard__NativeString___to_s_with_length(var186, 39l);
var185 = var187;
varonce184 = var185;
}
((struct instance_standard__NativeArray*)var179)->values[2]=var185;
} else {
var179 = varonce178;
varonce178 = NULL;
}
((struct instance_standard__NativeArray*)var179)->values[1]=var_name;
{
var188 = ((val*(*)(val* self))(var179->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var179); /* native_to_s on <var179:NativeArray[String]>*/
}
varonce178 = var179;
{
nit__typing___nit__typing__TypeVisitor___error(self, var_node, var188); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
} else {
}
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var194 = var_mproperty->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_mproperty:nullable MProperty(MMethod)> */
if (unlikely(var194 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1949);
fatal_exit(1);
}
var192 = var194;
RET_LABEL193:(void)0;
}
}
var195 = glob_sys;
{
var196 = nit__model_base___standard__Sys___protected_visibility(var195);
}
{
{ /* Inline kernel#Object#== (var192,var196) on <var192:MVisibility> */
var_other = var196;
{
{ /* Inline kernel#Object#is_same_instance (var192,var_other) on <var192:MVisibility> */
var201 = var192 == var_other;
var199 = var201;
goto RET_LABEL200;
RET_LABEL200:(void)0;
}
}
var197 = var199;
goto RET_LABEL198;
RET_LABEL198:(void)0;
}
}
var_202 = var197;
if (var197){
var203 = !var_recv_is_self;
var191 = var203;
} else {
var191 = var_202;
}
var_204 = var191;
if (var191){
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var207 = self->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var207 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
fatal_exit(1);
}
var205 = var207;
RET_LABEL206:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var210 = var_mproperty->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mproperty:nullable MProperty(MMethod)> */
if (unlikely(var210 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1928);
fatal_exit(1);
}
var208 = var210;
RET_LABEL209:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var208) on <var208:MClassDef> */
var213 = var208->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var208:MClassDef> */
if (unlikely(var213 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var211 = var213;
RET_LABEL212:(void)0;
}
}
{
var214 = nit___nit__MModule___visibility_for(var205, var211);
}
var215 = glob_sys;
{
var216 = nit__model_base___standard__Sys___intrude_visibility(var215);
}
{
var217 = nit___nit__MVisibility___standard__kernel__Comparable___60d(var214, var216);
}
var190 = var217;
} else {
var190 = var_204;
}
var_218 = var190;
if (var190){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var221 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var219) on <var219:ModelBuilder> */
var224 = var219->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var219:ModelBuilder> */
if (unlikely(var224 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var222 = var224;
RET_LABEL223:(void)0;
}
}
{
{ /* Inline modelbuilder#ToolContext#opt_ignore_visibility (var222) on <var222:ToolContext> */
var227 = var222->attrs[COLOR_nit__modelbuilder__ToolContext___opt_ignore_visibility].val; /* _opt_ignore_visibility on <var222:ToolContext> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_ignore_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder, 27);
fatal_exit(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
{ /* Inline opts#Option#value (var225) on <var225:OptionBool> */
var230 = var225->attrs[COLOR_opts__Option___value].val; /* _value on <var225:OptionBool> */
var228 = var230;
RET_LABEL229:(void)0;
}
}
var231 = (short int)((long)(var228)>>2);
var232 = !var231;
var189 = var232;
} else {
var189 = var_218;
}
if (var189){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var235 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var235 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var233 = var235;
RET_LABEL234:(void)0;
}
}
if (unlikely(varonce236==NULL)) {
var237 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce238!=NULL)) {
var239 = varonce238;
} else {
var240 = "Error: method `";
var241 = standard___standard__NativeString___to_s_with_length(var240, 15l);
var239 = var241;
varonce238 = var239;
}
((struct instance_standard__NativeArray*)var237)->values[0]=var239;
if (likely(varonce242!=NULL)) {
var243 = varonce242;
} else {
var244 = "` is protected and can only accessed by `self`.";
var245 = standard___standard__NativeString___to_s_with_length(var244, 47l);
var243 = var245;
varonce242 = var243;
}
((struct instance_standard__NativeArray*)var237)->values[2]=var243;
} else {
var237 = varonce236;
varonce236 = NULL;
}
((struct instance_standard__NativeArray*)var237)->values[1]=var_name;
{
var246 = ((val*(*)(val* self))(var237->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var237); /* native_to_s on <var237:NativeArray[String]>*/
}
varonce236 = var237;
{
nit___nit__ModelBuilder___error(var233, var_node, var246); /* Direct call modelbuilder_base#ModelBuilder#error on <var233:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline mdoc#MEntity#deprecation (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var249 = var_mproperty->attrs[COLOR_nit__mdoc__MEntity___deprecation].val; /* _deprecation on <var_mproperty:nullable MProperty(MMethod)> */
var247 = var249;
RET_LABEL248:(void)0;
}
}
var_info = var247;
if (var_info == NULL) {
var251 = 0; /* is null */
} else {
var251 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_info,((val*)NULL)) on <var_info:nullable MDeprecationInfo> */
var_other254 = ((val*)NULL);
{
var255 = ((short int(*)(val* self, val* p0))(var_info->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_info, var_other254); /* == on <var_info:nullable MDeprecationInfo(MDeprecationInfo)>*/
}
var256 = !var255;
var252 = var256;
goto RET_LABEL253;
RET_LABEL253:(void)0;
}
var251 = var252;
}
var_257 = var251;
if (var251){
{
{ /* Inline typing#TypeVisitor#mpropdef (self) on <self:TypeVisitor> */
var260 = self->attrs[COLOR_nit__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <self:TypeVisitor> */
var258 = var260;
RET_LABEL259:(void)0;
}
}
if (var258 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 349);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var258) on <var258:nullable MPropDef> */
if (unlikely(var258 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var263 = var258->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var258:nullable MPropDef> */
if (unlikely(var263 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var261 = var263;
RET_LABEL262:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#deprecation (var261) on <var261:MProperty> */
var266 = var261->attrs[COLOR_nit__mdoc__MEntity___deprecation].val; /* _deprecation on <var261:MProperty> */
var264 = var266;
RET_LABEL265:(void)0;
}
}
if (var264 == NULL) {
var267 = 1; /* is null */
} else {
var267 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var264,((val*)NULL)) on <var264:nullable MDeprecationInfo> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var264,var_other) on <var264:nullable MDeprecationInfo(MDeprecationInfo)> */
var272 = var264 == var_other;
var270 = var272;
goto RET_LABEL271;
RET_LABEL271:(void)0;
}
}
var268 = var270;
goto RET_LABEL269;
RET_LABEL269:(void)0;
}
var267 = var268;
}
var250 = var267;
} else {
var250 = var_257;
}
if (var250){
{
{ /* Inline mdoc#MDeprecationInfo#mdoc (var_info) on <var_info:nullable MDeprecationInfo(MDeprecationInfo)> */
var275 = var_info->attrs[COLOR_nit__mdoc__MDeprecationInfo___mdoc].val; /* _mdoc on <var_info:nullable MDeprecationInfo(MDeprecationInfo)> */
var273 = var275;
RET_LABEL274:(void)0;
}
}
var_mdoc = var273;
if (var_mdoc == NULL) {
var276 = 0; /* is null */
} else {
var276 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mdoc,((val*)NULL)) on <var_mdoc:nullable MDoc> */
var_other254 = ((val*)NULL);
{
var279 = ((short int(*)(val* self, val* p0))(var_mdoc->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mdoc, var_other254); /* == on <var_mdoc:nullable MDoc(MDoc)>*/
}
var280 = !var279;
var277 = var280;
goto RET_LABEL278;
RET_LABEL278:(void)0;
}
var276 = var277;
}
if (var276){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var283 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var283 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var281 = var283;
RET_LABEL282:(void)0;
}
}
if (likely(varonce284!=NULL)) {
var285 = varonce284;
} else {
var286 = "deprecated-method";
var287 = standard___standard__NativeString___to_s_with_length(var286, 17l);
var285 = var287;
varonce284 = var285;
}
if (unlikely(varonce288==NULL)) {
var289 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce290!=NULL)) {
var291 = varonce290;
} else {
var292 = "Deprecation Warning: method `";
var293 = standard___standard__NativeString___to_s_with_length(var292, 29l);
var291 = var293;
varonce290 = var291;
}
((struct instance_standard__NativeArray*)var289)->values[0]=var291;
if (likely(varonce294!=NULL)) {
var295 = varonce294;
} else {
var296 = "` is deprecated: ";
var297 = standard___standard__NativeString___to_s_with_length(var296, 17l);
var295 = var297;
varonce294 = var295;
}
((struct instance_standard__NativeArray*)var289)->values[2]=var295;
} else {
var289 = varonce288;
varonce288 = NULL;
}
((struct instance_standard__NativeArray*)var289)->values[1]=var_name;
{
{ /* Inline mdoc#MDoc#content (var_mdoc) on <var_mdoc:nullable MDoc(MDoc)> */
var300 = var_mdoc->attrs[COLOR_nit__mdoc__MDoc___content].val; /* _content on <var_mdoc:nullable MDoc(MDoc)> */
if (unlikely(var300 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mdoc, 23);
fatal_exit(1);
}
var298 = var300;
RET_LABEL299:(void)0;
}
}
{
var301 = standard___standard__SequenceRead___Collection__first(var298);
}
((struct instance_standard__NativeArray*)var289)->values[3]=var301;
{
var302 = ((val*(*)(val* self))(var289->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var289); /* native_to_s on <var289:NativeArray[String]>*/
}
varonce288 = var289;
{
nit___nit__ModelBuilder___warning(var281, var_node, var285, var302); /* Direct call modelbuilder_base#ModelBuilder#warning on <var281:ModelBuilder>*/
}
} else {
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var305 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var305 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var303 = var305;
RET_LABEL304:(void)0;
}
}
if (likely(varonce306!=NULL)) {
var307 = varonce306;
} else {
var308 = "deprecated-method";
var309 = standard___standard__NativeString___to_s_with_length(var308, 17l);
var307 = var309;
varonce306 = var307;
}
if (unlikely(varonce310==NULL)) {
var311 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce312!=NULL)) {
var313 = varonce312;
} else {
var314 = "Deprecation Warning: method `";
var315 = standard___standard__NativeString___to_s_with_length(var314, 29l);
var313 = var315;
varonce312 = var313;
}
((struct instance_standard__NativeArray*)var311)->values[0]=var313;
if (likely(varonce316!=NULL)) {
var317 = varonce316;
} else {
var318 = "` is deprecated.";
var319 = standard___standard__NativeString___to_s_with_length(var318, 16l);
var317 = var319;
varonce316 = var317;
}
((struct instance_standard__NativeArray*)var311)->values[2]=var317;
} else {
var311 = varonce310;
varonce310 = NULL;
}
((struct instance_standard__NativeArray*)var311)->values[1]=var_name;
{
var320 = ((val*(*)(val* self))(var311->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var311); /* native_to_s on <var311:NativeArray[String]>*/
}
varonce310 = var311;
{
nit___nit__ModelBuilder___warning(var303, var_node, var307, var320); /* Direct call modelbuilder_base#ModelBuilder#warning on <var303:ModelBuilder>*/
}
}
} else {
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var323 = self->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var323 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
fatal_exit(1);
}
var321 = var323;
RET_LABEL322:(void)0;
}
}
{
var324 = nit___nit__MProperty___lookup_definitions(var_mproperty, var321, var_unsafe_type);
}
var_propdefs = var324;
{
{ /* Inline array#AbstractArrayRead#length (var_propdefs) on <var_propdefs:Array[MMethodDef]> */
var327 = var_propdefs->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_propdefs:Array[MMethodDef]> */
var325 = var327;
RET_LABEL326:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var325,0l) on <var325:Int> */
var330 = var325 == 0l;
var328 = var330;
goto RET_LABEL329;
RET_LABEL329:(void)0;
}
}
if (var328){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var333 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var333 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var331 = var333;
RET_LABEL332:(void)0;
}
}
if (unlikely(varonce334==NULL)) {
var335 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce336!=NULL)) {
var337 = varonce336;
} else {
var338 = "Type Error: no definition found for property `";
var339 = standard___standard__NativeString___to_s_with_length(var338, 46l);
var337 = var339;
varonce336 = var337;
}
((struct instance_standard__NativeArray*)var335)->values[0]=var337;
if (likely(varonce340!=NULL)) {
var341 = varonce340;
} else {
var342 = "` in `";
var343 = standard___standard__NativeString___to_s_with_length(var342, 6l);
var341 = var343;
varonce340 = var341;
}
((struct instance_standard__NativeArray*)var335)->values[2]=var341;
if (likely(varonce344!=NULL)) {
var345 = varonce344;
} else {
var346 = "`.";
var347 = standard___standard__NativeString___to_s_with_length(var346, 2l);
var345 = var347;
varonce344 = var345;
}
((struct instance_standard__NativeArray*)var335)->values[4]=var345;
} else {
var335 = varonce334;
varonce334 = NULL;
}
((struct instance_standard__NativeArray*)var335)->values[1]=var_name;
{
var348 = ((val*(*)(val* self))(var_unsafe_type->class->vft[COLOR_standard__string__Object__to_s]))(var_unsafe_type); /* to_s on <var_unsafe_type:MType>*/
}
((struct instance_standard__NativeArray*)var335)->values[3]=var348;
{
var349 = ((val*(*)(val* self))(var335->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var335); /* native_to_s on <var335:NativeArray[String]>*/
}
varonce334 = var335;
{
nit___nit__ModelBuilder___error(var331, var_node, var349); /* Direct call modelbuilder_base#ModelBuilder#error on <var331:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_propdefs) on <var_propdefs:Array[MMethodDef]> */
var352 = var_propdefs->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_propdefs:Array[MMethodDef]> */
var350 = var352;
RET_LABEL351:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var350,1l) on <var350:Int> */
var355 = var350 == 1l;
var353 = var355;
goto RET_LABEL354;
RET_LABEL354:(void)0;
}
}
if (var353){
{
var356 = standard___standard__SequenceRead___Collection__first(var_propdefs);
}
var_mpropdef = var356;
} else {
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var359 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var359 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var357 = var359;
RET_LABEL358:(void)0;
}
}
if (likely(varonce360!=NULL)) {
var361 = varonce360;
} else {
var362 = "property-conflict";
var363 = standard___standard__NativeString___to_s_with_length(var362, 17l);
var361 = var363;
varonce360 = var361;
}
if (unlikely(varonce364==NULL)) {
var365 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce366!=NULL)) {
var367 = varonce366;
} else {
var368 = "Warning: conflicting property definitions for property `";
var369 = standard___standard__NativeString___to_s_with_length(var368, 56l);
var367 = var369;
varonce366 = var367;
}
((struct instance_standard__NativeArray*)var365)->values[0]=var367;
if (likely(varonce370!=NULL)) {
var371 = varonce370;
} else {
var372 = "` in `";
var373 = standard___standard__NativeString___to_s_with_length(var372, 6l);
var371 = var373;
varonce370 = var371;
}
((struct instance_standard__NativeArray*)var365)->values[2]=var371;
if (likely(varonce374!=NULL)) {
var375 = varonce374;
} else {
var376 = "`: ";
var377 = standard___standard__NativeString___to_s_with_length(var376, 3l);
var375 = var377;
varonce374 = var375;
}
((struct instance_standard__NativeArray*)var365)->values[4]=var375;
} else {
var365 = varonce364;
varonce364 = NULL;
}
((struct instance_standard__NativeArray*)var365)->values[1]=var_name;
{
var378 = ((val*(*)(val* self))(var_unsafe_type->class->vft[COLOR_standard__string__Object__to_s]))(var_unsafe_type); /* to_s on <var_unsafe_type:MType>*/
}
((struct instance_standard__NativeArray*)var365)->values[3]=var378;
if (likely(varonce379!=NULL)) {
var380 = varonce379;
} else {
var381 = " ";
var382 = standard___standard__NativeString___to_s_with_length(var381, 1l);
var380 = var382;
varonce379 = var380;
}
{
var383 = standard__string___Collection___join(var_propdefs, var380);
}
((struct instance_standard__NativeArray*)var365)->values[5]=var383;
{
var384 = ((val*(*)(val* self))(var365->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var365); /* native_to_s on <var365:NativeArray[String]>*/
}
varonce364 = var365;
{
nit___nit__ModelBuilder___warning(var357, var_node, var361, var384); /* Direct call modelbuilder_base#ModelBuilder#warning on <var357:ModelBuilder>*/
}
{
{ /* Inline model#MProperty#intro (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var387 = var_mproperty->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_mproperty:nullable MProperty(MMethod)> */
if (unlikely(var387 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var385 = var387;
RET_LABEL386:(void)0;
}
}
var_mpropdef = var385;
}
}
{
{ /* Inline model#MMethodDef#new_msignature (var_mpropdef) on <var_mpropdef:nullable Object(MMethodDef)> */
var391 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_mpropdef:nullable Object(MMethodDef)> */
var389 = var391;
RET_LABEL390:(void)0;
}
}
if (var389!=NULL) {
var388 = var389;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable Object(MMethodDef)> */
var394 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable Object(MMethodDef)> */
var392 = var394;
RET_LABEL393:(void)0;
}
}
var388 = var392;
}
var_msignature = var388;
if (var_msignature == NULL) {
var395 = 1; /* is null */
} else {
var395 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var400 = var_msignature == var_other;
var398 = var400;
goto RET_LABEL399;
RET_LABEL399:(void)0;
}
}
var396 = var398;
goto RET_LABEL397;
RET_LABEL397:(void)0;
}
var395 = var396;
}
if (var395){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var401 = nit__typing___nit__typing__TypeVisitor___resolve_for(self, var_msignature, var_recvtype, var_recv_is_self);
}
/* <var401:MType> isa MSignature */
cltype403 = type_nit__MSignature.color;
idtype404 = type_nit__MSignature.id;
if(cltype403 >= var401->type->table_size) {
var402 = 0;
} else {
var402 = var401->type->type_table[cltype403] == idtype404;
}
if (unlikely(!var402)) {
var_class_name = var401 == NULL ? "null" : var401->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MSignature", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 373);
fatal_exit(1);
}
var_msignature = var401;
var_erasure_cast = 0;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable Object(MMethodDef)> */
var407 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable Object(MMethodDef)> */
var405 = var407;
RET_LABEL406:(void)0;
}
}
if (var405 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 376);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var405) on <var405:nullable MSignature> */
if (unlikely(var405 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1768);
fatal_exit(1);
}
var410 = var405->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var405:nullable MSignature> */
var408 = var410;
RET_LABEL409:(void)0;
}
}
var_rettype = var408;
var412 = !var_recv_is_self;
var_413 = var412;
if (var412){
if (var_rettype == NULL) {
var414 = 0; /* is null */
} else {
var414 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rettype,((val*)NULL)) on <var_rettype:nullable MType> */
var_other254 = ((val*)NULL);
{
var417 = ((short int(*)(val* self, val* p0))(var_rettype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_rettype, var_other254); /* == on <var_rettype:nullable MType(MType)>*/
}
var418 = !var417;
var415 = var418;
goto RET_LABEL416;
RET_LABEL416:(void)0;
}
var414 = var415;
}
var411 = var414;
} else {
var411 = var_413;
}
if (var411){
{
var419 = ((val*(*)(val* self))(var_rettype->class->vft[COLOR_nit__model__MType__undecorate]))(var_rettype); /* undecorate on <var_rettype:nullable MType(MType)>*/
}
var_rettype = var419;
/* <var_rettype:nullable MType(MType)> isa MParameterType */
cltype421 = type_nit__MParameterType.color;
idtype422 = type_nit__MParameterType.id;
if(cltype421 >= var_rettype->type->table_size) {
var420 = 0;
} else {
var420 = var_rettype->type->type_table[cltype421] == idtype422;
}
if (var420){
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var425 = var_msignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var423 = var425;
RET_LABEL424:(void)0;
}
}
var_erased_rettype = var423;
if (var_erased_rettype == NULL) {
var426 = 0; /* is null */
} else {
var426 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_erased_rettype,((val*)NULL)) on <var_erased_rettype:nullable MType> */
var_other254 = ((val*)NULL);
{
var429 = ((short int(*)(val* self, val* p0))(var_erased_rettype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_erased_rettype, var_other254); /* == on <var_erased_rettype:nullable MType(MType)>*/
}
var430 = !var429;
var427 = var430;
goto RET_LABEL428;
RET_LABEL428:(void)0;
}
var426 = var427;
}
if (unlikely(!var426)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 381);
fatal_exit(1);
}
var_erasure_cast = 1;
} else {
}
} else {
}
var431 = NEW_nit__CallSite(&type_nit__CallSite);
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var434 = self->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var434 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
fatal_exit(1);
}
var432 = var434;
RET_LABEL433:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#anchor (self) on <self:TypeVisitor> */
var437 = self->attrs[COLOR_nit__typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
var435 = var437;
RET_LABEL436:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var431->class->vft[COLOR_nit__typing__CallSite__node_61d]))(var431, var_node); /* node= on <var431:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var431->class->vft[COLOR_nit__typing__CallSite__recv_61d]))(var431, var_recvtype); /* recv= on <var431:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var431->class->vft[COLOR_nit__typing__CallSite__mmodule_61d]))(var431, var432); /* mmodule= on <var431:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var431->class->vft[COLOR_nit__typing__CallSite__anchor_61d]))(var431, var435); /* anchor= on <var431:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var431->class->vft[COLOR_nit__typing__CallSite__recv_is_self_61d]))(var431, var_recv_is_self); /* recv_is_self= on <var431:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var431->class->vft[COLOR_nit__typing__CallSite__mproperty_61d]))(var431, var_mproperty); /* mproperty= on <var431:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var431->class->vft[COLOR_nit__typing__CallSite__mpropdef_61d]))(var431, var_mpropdef); /* mpropdef= on <var431:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var431->class->vft[COLOR_nit__typing__CallSite__msignature_61d]))(var431, var_msignature); /* msignature= on <var431:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var431->class->vft[COLOR_nit__typing__CallSite__erasure_cast_61d]))(var431, var_erasure_cast); /* erasure_cast= on <var431:CallSite>*/
}
{
((void(*)(val* self))(var431->class->vft[COLOR_standard__kernel__Object__init]))(var431); /* init on <var431:CallSite>*/
}
var_callsite = var431;
var = var_callsite;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#try_get_method for (self: TypeVisitor, ANode, MType, String, Bool): nullable CallSite */
val* nit__typing___nit__typing__TypeVisitor___try_get_method(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : nullable CallSite */;
val* var_node /* var node: ANode */;
val* var_recvtype /* var recvtype: MType */;
val* var_name /* var name: String */;
short int var_recv_is_self /* var recv_is_self: Bool */;
val* var1 /* : MType */;
val* var_unsafe_type /* var unsafe_type: MType */;
val* var2 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable CallSite */;
var_node = p0;
var_recvtype = p1;
var_name = p2;
var_recv_is_self = p3;
{
var1 = nit__typing___nit__typing__TypeVisitor___anchor_to(self, var_recvtype);
}
var_unsafe_type = var1;
{
var2 = nit__typing___nit__typing__TypeVisitor___try_get_mproperty_by_name2(self, var_node, var_unsafe_type, var_name);
}
var_mproperty = var2;
if (var_mproperty == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mproperty,((val*)NULL)) on <var_mproperty:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mproperty,var_other) on <var_mproperty:nullable MProperty(MProperty)> */
var8 = var_mproperty == var_other;
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
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var9 = nit__typing___nit__typing__TypeVisitor___get_method(self, var_node, var_recvtype, var_name, var_recv_is_self);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#check_signature for (self: TypeVisitor, ANode, Array[AExpr], MProperty, MSignature): nullable SignatureMap */
val* nit__typing___nit__typing__TypeVisitor___check_signature(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : nullable SignatureMap */;
val* var_node /* var node: ANode */;
val* var_args /* var args: Array[AExpr] */;
val* var_mproperty /* var mproperty: MProperty */;
val* var_msignature /* var msignature: MSignature */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
short int var18 /* : Bool */;
val* var19 /* : ModelBuilder */;
val* var21 /* : ModelBuilder */;
val* var22 /* : NativeArray[String] */;
static val* varonce;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : FlatString */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : String */;
long var47 /* : Int */;
long var49 /* : Int */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var52 /* : String */;
long var53 /* : Int */;
long var55 /* : Int */;
long var56 /* : Int */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
long var61 /* : Int */;
long var62 /* : Int */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
val* var66 /* : ModelBuilder */;
val* var68 /* : ModelBuilder */;
val* var70 /* : NativeArray[String] */;
static val* varonce69;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
val* var74 /* : FlatString */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
val* var78 /* : FlatString */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
val* var82 /* : FlatString */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
val* var86 /* : FlatString */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
val* var90 /* : FlatString */;
long var91 /* : Int */;
val* var92 /* : String */;
val* var93 /* : String */;
val* var94 /* : String */;
long var95 /* : Int */;
long var97 /* : Int */;
val* var98 /* : String */;
val* var99 /* : String */;
val* var100 /* : String */;
long var101 /* : Int */;
long var103 /* : Int */;
long var104 /* : Int */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
int cltype108;
int idtype109;
const char* var_class_name110;
short int var111 /* : Bool */;
val* var112 /* : ModelBuilder */;
val* var114 /* : ModelBuilder */;
val* var116 /* : NativeArray[String] */;
static val* varonce115;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
val* var120 /* : FlatString */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
val* var124 /* : FlatString */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
val* var128 /* : FlatString */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
val* var132 /* : FlatString */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
val* var136 /* : FlatString */;
long var137 /* : Int */;
val* var138 /* : String */;
val* var139 /* : String */;
val* var140 /* : String */;
long var141 /* : Int */;
long var143 /* : Int */;
val* var144 /* : String */;
val* var145 /* : String */;
val* var146 /* : String */;
long var147 /* : Int */;
long var149 /* : Int */;
long var150 /* : Int */;
short int var151 /* : Bool */;
short int var153 /* : Bool */;
int cltype154;
int idtype155;
const char* var_class_name156;
short int var157 /* : Bool */;
val* var158 /* : ModelBuilder */;
val* var160 /* : ModelBuilder */;
val* var162 /* : NativeArray[String] */;
static val* varonce161;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
val* var166 /* : FlatString */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
val* var170 /* : FlatString */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
val* var174 /* : FlatString */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : NativeString */;
val* var178 /* : FlatString */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
val* var182 /* : FlatString */;
long var183 /* : Int */;
val* var184 /* : String */;
val* var185 /* : String */;
val* var186 /* : String */;
long var187 /* : Int */;
long var189 /* : Int */;
val* var190 /* : String */;
val* var191 /* : String */;
val* var192 /* : String */;
val* var193 /* : SignatureMap */;
val* var_map /* var map: SignatureMap */;
long var195 /* : Int */;
long var197 /* : Int */;
long var198 /* : Int */;
long var199 /* : Int */;
short int var201 /* : Bool */;
int cltype202;
int idtype203;
const char* var_class_name204;
long var205 /* : Int */;
long var_setted /* var setted: Int */;
long var_i /* var i: Int */;
long var206 /* : Int */;
long var208 /* : Int */;
long var_ /* var : Int */;
short int var209 /* : Bool */;
short int var211 /* : Bool */;
int cltype212;
int idtype213;
const char* var_class_name214;
short int var215 /* : Bool */;
val* var216 /* : nullable Object */;
val* var_e /* var e: AExpr */;
short int var217 /* : Bool */;
int cltype218;
int idtype219;
short int var220 /* : Bool */;
val* var221 /* : TId */;
val* var223 /* : TId */;
val* var224 /* : String */;
val* var_name /* var name: String */;
val* var225 /* : nullable MParameter */;
val* var_param /* var param: nullable MParameter */;
short int var226 /* : Bool */;
short int var227 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var229 /* : Bool */;
short int var231 /* : Bool */;
val* var232 /* : ModelBuilder */;
val* var234 /* : ModelBuilder */;
val* var235 /* : TId */;
val* var237 /* : TId */;
val* var239 /* : NativeArray[String] */;
static val* varonce238;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : NativeString */;
val* var243 /* : FlatString */;
static val* varonce244;
val* var245 /* : String */;
char* var246 /* : NativeString */;
val* var247 /* : FlatString */;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : NativeString */;
val* var251 /* : FlatString */;
val* var252 /* : String */;
val* var253 /* : String */;
val* var254 /* : String */;
short int var255 /* : Bool */;
short int var257 /* : Bool */;
short int var258 /* : Bool */;
val* var259 /* : ModelBuilder */;
val* var261 /* : ModelBuilder */;
val* var263 /* : NativeArray[String] */;
static val* varonce262;
static val* varonce264;
val* var265 /* : String */;
char* var266 /* : NativeString */;
val* var267 /* : FlatString */;
static val* varonce268;
val* var269 /* : String */;
char* var270 /* : NativeString */;
val* var271 /* : FlatString */;
static val* varonce272;
val* var273 /* : String */;
char* var274 /* : NativeString */;
val* var275 /* : FlatString */;
val* var276 /* : String */;
val* var277 /* : String */;
val* var278 /* : String */;
val* var279 /* : Array[MParameter] */;
val* var281 /* : Array[MParameter] */;
long var282 /* : Int */;
long var_idx /* var idx: Int */;
val* var283 /* : ArrayMap[Int, Int] */;
val* var285 /* : ArrayMap[Int, Int] */;
val* var286 /* : nullable Object */;
val* var287 /* : nullable Object */;
val* var_prev /* var prev: nullable Int */;
short int var288 /* : Bool */;
short int var289 /* : Bool */;
short int var291 /* : Bool */;
short int var292 /* : Bool */;
val* var293 /* : ModelBuilder */;
val* var295 /* : ModelBuilder */;
val* var297 /* : NativeArray[String] */;
static val* varonce296;
static val* varonce298;
val* var299 /* : String */;
char* var300 /* : NativeString */;
val* var301 /* : FlatString */;
static val* varonce302;
val* var303 /* : String */;
char* var304 /* : NativeString */;
val* var305 /* : FlatString */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : NativeString */;
val* var309 /* : FlatString */;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : NativeString */;
val* var313 /* : FlatString */;
val* var314 /* : String */;
long var315 /* : Int */;
val* var316 /* : String */;
val* var317 /* : String */;
val* var318 /* : String */;
val* var319 /* : ArrayMap[Int, Int] */;
val* var321 /* : ArrayMap[Int, Int] */;
val* var322 /* : nullable Object */;
val* var323 /* : nullable Object */;
long var324 /* : Int */;
short int var326 /* : Bool */;
int cltype327;
int idtype328;
const char* var_class_name329;
long var330 /* : Int */;
val* var331 /* : AExpr */;
val* var333 /* : AExpr */;
val* var334 /* : MType */;
val* var336 /* : MType */;
val* var337 /* : nullable MType */;
long var339 /* : Int */;
long var341 /* : Int */;
long var343 /* : Int */;
long var344 /* : Int */;
long var345 /* : Int */;
short int var347 /* : Bool */;
int cltype348;
int idtype349;
const char* var_class_name350;
long var351 /* : Int */;
long var_vararg_decl /* var vararg_decl: Int */;
long var_j /* var j: Int */;
long var_i352 /* var i: Int */;
long var353 /* : Int */;
long var_354 /* var : Int */;
short int var355 /* : Bool */;
short int var357 /* : Bool */;
int cltype358;
int idtype359;
const char* var_class_name360;
short int var361 /* : Bool */;
val* var362 /* : ArrayMap[Int, Int] */;
val* var364 /* : ArrayMap[Int, Int] */;
short int var365 /* : Bool */;
val* var366 /* : nullable Object */;
val* var368 /* : Array[MParameter] */;
val* var370 /* : Array[MParameter] */;
val* var371 /* : nullable Object */;
val* var_param372 /* var param: MParameter */;
short int var373 /* : Bool */;
short int var375 /* : Bool */;
short int var376 /* : Bool */;
short int var378 /* : Bool */;
int cltype379;
int idtype380;
const char* var_class_name381;
short int var382 /* : Bool */;
long var383 /* : Int */;
short int var385 /* : Bool */;
int cltype386;
int idtype387;
const char* var_class_name388;
long var389 /* : Int */;
val* var390 /* : nullable Object */;
short int var391 /* : Bool */;
int cltype392;
int idtype393;
long var394 /* : Int */;
short int var396 /* : Bool */;
int cltype397;
int idtype398;
const char* var_class_name399;
long var400 /* : Int */;
val* var402 /* : nullable Object */;
val* var_arg /* var arg: AExpr */;
val* var403 /* : ArrayMap[Int, Int] */;
val* var405 /* : ArrayMap[Int, Int] */;
val* var406 /* : nullable Object */;
val* var407 /* : nullable Object */;
long var408 /* : Int */;
short int var410 /* : Bool */;
int cltype411;
int idtype412;
const char* var_class_name413;
long var414 /* : Int */;
short int var415 /* : Bool */;
short int var417 /* : Bool */;
long var418 /* : Int */;
short int var420 /* : Bool */;
int cltype421;
int idtype422;
const char* var_class_name423;
long var424 /* : Int */;
val* var425 /* : MType */;
val* var427 /* : MType */;
val* var_paramtype /* var paramtype: MType */;
val* var428 /* : nullable MType */;
long var429 /* : Int */;
short int var431 /* : Bool */;
short int var433 /* : Bool */;
int cltype434;
int idtype435;
const char* var_class_name436;
short int var437 /* : Bool */;
val* var438 /* : Array[MParameter] */;
val* var440 /* : Array[MParameter] */;
val* var441 /* : nullable Object */;
val* var442 /* : MType */;
val* var444 /* : MType */;
val* var_paramtype445 /* var paramtype: MType */;
val* var446 /* : nullable Object */;
val* var_first /* var first: AExpr */;
short int var447 /* : Bool */;
short int var449 /* : Bool */;
static val* varonce450;
val* var451 /* : String */;
char* var452 /* : NativeString */;
val* var453 /* : FlatString */;
val* var454 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var455 /* : Bool */;
short int var456 /* : Bool */;
short int var458 /* : Bool */;
short int var460 /* : Bool */;
val* var461 /* : Array[MType] */;
val* var_462 /* var : Array[MType] */;
val* var463 /* : MClassType */;
val* var_array_mtype /* var array_mtype: MClassType */;
short int var464 /* : Bool */;
int cltype465;
int idtype466;
val* var467 /* : AExpr */;
val* var469 /* : AExpr */;
val* var470 /* : nullable MType */;
val* var471 /* : AExpr */;
val* var473 /* : AExpr */;
val* var474 /* : nullable MType */;
val* var476 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
short int var477 /* : Bool */;
short int var478 /* : Bool */;
short int var480 /* : Bool */;
short int var482 /* : Bool */;
short int var483 /* : Bool */;
short int var484 /* : Bool */;
short int var485 /* : Bool */;
short int var_486 /* var : Bool */;
short int var487 /* : Bool */;
val* var489 /* : NativeArray[String] */;
static val* varonce488;
static val* varonce490;
val* var491 /* : String */;
char* var492 /* : NativeString */;
val* var493 /* : FlatString */;
static val* varonce494;
val* var495 /* : String */;
char* var496 /* : NativeString */;
val* var497 /* : FlatString */;
static val* varonce498;
val* var499 /* : String */;
char* var500 /* : NativeString */;
val* var501 /* : FlatString */;
val* var502 /* : String */;
val* var503 /* : String */;
val* var504 /* : String */;
val* var506 /* : nullable MType */;
long var507 /* : Int */;
short int var509 /* : Bool */;
int cltype510;
int idtype511;
const char* var_class_name512;
long var513 /* : Int */;
long var_i515 /* var i: Int */;
long var516 /* : Int */;
short int var518 /* : Bool */;
int cltype519;
int idtype520;
const char* var_class_name521;
long var522 /* : Int */;
long var_523 /* var : Int */;
short int var524 /* : Bool */;
short int var526 /* : Bool */;
int cltype527;
int idtype528;
const char* var_class_name529;
short int var530 /* : Bool */;
val* var531 /* : nullable Object */;
val* var532 /* : nullable MType */;
long var533 /* : Int */;
var_node = p0;
var_args = p1;
var_mproperty = p2;
var_msignature = p3;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var3 = var_msignature->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_vararg_rank = var1;
{
{ /* Inline kernel#Int#>= (var_vararg_rank,0l) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var7 = var_vararg_rank >= 0l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var10 = var_args->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit___nit__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#< (var8,var11) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var18 = var8 < var11;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var21 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var22 = NEW_standard__NativeArray(10l, &type_standard__NativeArray__standard__String);
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "Error: expected at least ";
var26 = standard___standard__NativeString___to_s_with_length(var25, 25l);
var24 = var26;
varonce23 = var24;
}
((struct instance_standard__NativeArray*)var22)->values[0]=var24;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = " argument(s) for `";
var30 = standard___standard__NativeString___to_s_with_length(var29, 18l);
var28 = var30;
varonce27 = var28;
}
((struct instance_standard__NativeArray*)var22)->values[2]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "`; got ";
var34 = standard___standard__NativeString___to_s_with_length(var33, 7l);
var32 = var34;
varonce31 = var32;
}
((struct instance_standard__NativeArray*)var22)->values[5]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = ". See introduction at `";
var38 = standard___standard__NativeString___to_s_with_length(var37, 23l);
var36 = var38;
varonce35 = var36;
}
((struct instance_standard__NativeArray*)var22)->values[7]=var36;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "`.";
var42 = standard___standard__NativeString___to_s_with_length(var41, 2l);
var40 = var42;
varonce39 = var40;
}
((struct instance_standard__NativeArray*)var22)->values[9]=var40;
} else {
var22 = varonce;
varonce = NULL;
}
{
var43 = nit___nit__MSignature___arity(var_msignature);
}
var44 = standard__string___Int___Object__to_s(var43);
((struct instance_standard__NativeArray*)var22)->values[1]=var44;
{
var45 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var22)->values[3]=var45;
{
var46 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_standard__NativeArray*)var22)->values[4]=var46;
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var49 = var_args->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
var50 = standard__string___Int___Object__to_s(var47);
((struct instance_standard__NativeArray*)var22)->values[6]=var50;
{
var51 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_mproperty);
}
((struct instance_standard__NativeArray*)var22)->values[8]=var51;
{
var52 = ((val*(*)(val* self))(var22->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var22); /* native_to_s on <var22:NativeArray[String]>*/
}
varonce = var22;
{
nit___nit__ModelBuilder___error(var19, var_node, var52); /* Direct call modelbuilder_base#ModelBuilder#error on <var19:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var55 = var_args->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
var56 = nit___nit__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#!= (var53,var56) on <var53:Int> */
var59 = var53 == var56;
var60 = !var59;
var57 = var60;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
if (var57){
{
var61 = nit___nit__MSignature___arity(var_msignature);
}
{
var62 = nit___nit__MSignature___min_arity(var_msignature);
}
{
{ /* Inline kernel#Int#== (var61,var62) on <var61:Int> */
var65 = var61 == var62;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
if (var63){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var68 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
if (unlikely(varonce69==NULL)) {
var70 = NEW_standard__NativeArray(10l, &type_standard__NativeArray__standard__String);
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "Error: expected ";
var74 = standard___standard__NativeString___to_s_with_length(var73, 16l);
var72 = var74;
varonce71 = var72;
}
((struct instance_standard__NativeArray*)var70)->values[0]=var72;
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = " argument(s) for `";
var78 = standard___standard__NativeString___to_s_with_length(var77, 18l);
var76 = var78;
varonce75 = var76;
}
((struct instance_standard__NativeArray*)var70)->values[2]=var76;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "`; got ";
var82 = standard___standard__NativeString___to_s_with_length(var81, 7l);
var80 = var82;
varonce79 = var80;
}
((struct instance_standard__NativeArray*)var70)->values[5]=var80;
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = ". See introduction at `";
var86 = standard___standard__NativeString___to_s_with_length(var85, 23l);
var84 = var86;
varonce83 = var84;
}
((struct instance_standard__NativeArray*)var70)->values[7]=var84;
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "`.";
var90 = standard___standard__NativeString___to_s_with_length(var89, 2l);
var88 = var90;
varonce87 = var88;
}
((struct instance_standard__NativeArray*)var70)->values[9]=var88;
} else {
var70 = varonce69;
varonce69 = NULL;
}
{
var91 = nit___nit__MSignature___arity(var_msignature);
}
var92 = standard__string___Int___Object__to_s(var91);
((struct instance_standard__NativeArray*)var70)->values[1]=var92;
{
var93 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var70)->values[3]=var93;
{
var94 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_standard__NativeArray*)var70)->values[4]=var94;
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var97 = var_args->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var95 = var97;
RET_LABEL96:(void)0;
}
}
var98 = standard__string___Int___Object__to_s(var95);
((struct instance_standard__NativeArray*)var70)->values[6]=var98;
{
var99 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_mproperty);
}
((struct instance_standard__NativeArray*)var70)->values[8]=var99;
{
var100 = ((val*(*)(val* self))(var70->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var70); /* native_to_s on <var70:NativeArray[String]>*/
}
varonce69 = var70;
{
nit___nit__ModelBuilder___error(var66, var_node, var100); /* Direct call modelbuilder_base#ModelBuilder#error on <var66:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var103 = var_args->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
var104 = nit___nit__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#> (var101,var104) on <var101:Int> */
/* Covariant cast for argument 0 (i) <var104:Int> isa OTHER */
/* <var104:Int> isa OTHER */
var107 = 1; /* easy <var104:Int> isa OTHER*/
if (unlikely(!var107)) {
var_class_name110 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name110);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var111 = var101 > var104;
var105 = var111;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
}
if (var105){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var114 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
if (unlikely(varonce115==NULL)) {
var116 = NEW_standard__NativeArray(10l, &type_standard__NativeArray__standard__String);
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "Error: expected at most ";
var120 = standard___standard__NativeString___to_s_with_length(var119, 24l);
var118 = var120;
varonce117 = var118;
}
((struct instance_standard__NativeArray*)var116)->values[0]=var118;
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = " argument(s) for `";
var124 = standard___standard__NativeString___to_s_with_length(var123, 18l);
var122 = var124;
varonce121 = var122;
}
((struct instance_standard__NativeArray*)var116)->values[2]=var122;
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "`; got ";
var128 = standard___standard__NativeString___to_s_with_length(var127, 7l);
var126 = var128;
varonce125 = var126;
}
((struct instance_standard__NativeArray*)var116)->values[5]=var126;
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = ". See introduction at `";
var132 = standard___standard__NativeString___to_s_with_length(var131, 23l);
var130 = var132;
varonce129 = var130;
}
((struct instance_standard__NativeArray*)var116)->values[7]=var130;
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "`.";
var136 = standard___standard__NativeString___to_s_with_length(var135, 2l);
var134 = var136;
varonce133 = var134;
}
((struct instance_standard__NativeArray*)var116)->values[9]=var134;
} else {
var116 = varonce115;
varonce115 = NULL;
}
{
var137 = nit___nit__MSignature___arity(var_msignature);
}
var138 = standard__string___Int___Object__to_s(var137);
((struct instance_standard__NativeArray*)var116)->values[1]=var138;
{
var139 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var116)->values[3]=var139;
{
var140 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_standard__NativeArray*)var116)->values[4]=var140;
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var143 = var_args->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var141 = var143;
RET_LABEL142:(void)0;
}
}
var144 = standard__string___Int___Object__to_s(var141);
((struct instance_standard__NativeArray*)var116)->values[6]=var144;
{
var145 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_mproperty);
}
((struct instance_standard__NativeArray*)var116)->values[8]=var145;
{
var146 = ((val*(*)(val* self))(var116->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var116); /* native_to_s on <var116:NativeArray[String]>*/
}
varonce115 = var116;
{
nit___nit__ModelBuilder___error(var112, var_node, var146); /* Direct call modelbuilder_base#ModelBuilder#error on <var112:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var149 = var_args->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var147 = var149;
RET_LABEL148:(void)0;
}
}
{
var150 = nit___nit__MSignature___min_arity(var_msignature);
}
{
{ /* Inline kernel#Int#< (var147,var150) on <var147:Int> */
/* Covariant cast for argument 0 (i) <var150:Int> isa OTHER */
/* <var150:Int> isa OTHER */
var153 = 1; /* easy <var150:Int> isa OTHER*/
if (unlikely(!var153)) {
var_class_name156 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name156);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var157 = var147 < var150;
var151 = var157;
goto RET_LABEL152;
RET_LABEL152:(void)0;
}
}
if (var151){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var160 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
if (unlikely(varonce161==NULL)) {
var162 = NEW_standard__NativeArray(10l, &type_standard__NativeArray__standard__String);
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "Error: expected at least ";
var166 = standard___standard__NativeString___to_s_with_length(var165, 25l);
var164 = var166;
varonce163 = var164;
}
((struct instance_standard__NativeArray*)var162)->values[0]=var164;
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = " argument(s) for `";
var170 = standard___standard__NativeString___to_s_with_length(var169, 18l);
var168 = var170;
varonce167 = var168;
}
((struct instance_standard__NativeArray*)var162)->values[2]=var168;
if (likely(varonce171!=NULL)) {
var172 = varonce171;
} else {
var173 = "`; got ";
var174 = standard___standard__NativeString___to_s_with_length(var173, 7l);
var172 = var174;
varonce171 = var172;
}
((struct instance_standard__NativeArray*)var162)->values[5]=var172;
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = ". See introduction at `";
var178 = standard___standard__NativeString___to_s_with_length(var177, 23l);
var176 = var178;
varonce175 = var176;
}
((struct instance_standard__NativeArray*)var162)->values[7]=var176;
if (likely(varonce179!=NULL)) {
var180 = varonce179;
} else {
var181 = "`.";
var182 = standard___standard__NativeString___to_s_with_length(var181, 2l);
var180 = var182;
varonce179 = var180;
}
((struct instance_standard__NativeArray*)var162)->values[9]=var180;
} else {
var162 = varonce161;
varonce161 = NULL;
}
{
var183 = nit___nit__MSignature___min_arity(var_msignature);
}
var184 = standard__string___Int___Object__to_s(var183);
((struct instance_standard__NativeArray*)var162)->values[1]=var184;
{
var185 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var162)->values[3]=var185;
{
var186 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_standard__NativeArray*)var162)->values[4]=var186;
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var189 = var_args->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var187 = var189;
RET_LABEL188:(void)0;
}
}
var190 = standard__string___Int___Object__to_s(var187);
((struct instance_standard__NativeArray*)var162)->values[6]=var190;
{
var191 = nit___nit__MProperty___nit__model_base__MEntity__full_name(var_mproperty);
}
((struct instance_standard__NativeArray*)var162)->values[8]=var191;
{
var192 = ((val*(*)(val* self))(var162->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var162); /* native_to_s on <var162:NativeArray[String]>*/
}
varonce161 = var162;
{
nit___nit__ModelBuilder___error(var158, var_node, var192); /* Direct call modelbuilder_base#ModelBuilder#error on <var158:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
} else {
}
}
var193 = NEW_nit__SignatureMap(&type_nit__SignatureMap);
{
{ /* Inline kernel#Object#init (var193) on <var193:SignatureMap> */
RET_LABEL194:(void)0;
}
}
var_map = var193;
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var197 = var_args->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var195 = var197;
RET_LABEL196:(void)0;
}
}
{
var198 = nit___nit__MSignature___min_arity(var_msignature);
}
{
{ /* Inline kernel#Int#- (var195,var198) on <var195:Int> */
/* Covariant cast for argument 0 (i) <var198:Int> isa OTHER */
/* <var198:Int> isa OTHER */
var201 = 1; /* easy <var198:Int> isa OTHER*/
if (unlikely(!var201)) {
var_class_name204 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name204);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var205 = var195 - var198;
var199 = var205;
goto RET_LABEL200;
RET_LABEL200:(void)0;
}
}
var_setted = var199;
var_i = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var208 = var_args->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var206 = var208;
RET_LABEL207:(void)0;
}
}
var_ = var206;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var211 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var211)) {
var_class_name214 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name214);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var215 = var_i < var_;
var209 = var215;
goto RET_LABEL210;
RET_LABEL210:(void)0;
}
}
if (var209){
{
var216 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_args, var_i);
}
var_e = var216;
/* <var_e:AExpr> isa ANamedargExpr */
cltype218 = type_nit__ANamedargExpr.color;
idtype219 = type_nit__ANamedargExpr.id;
if(cltype218 >= var_e->type->table_size) {
var217 = 0;
} else {
var217 = var_e->type->type_table[cltype218] == idtype219;
}
var220 = !var217;
if (var220){
goto BREAK_label;
} else {
}
{
{ /* Inline parser_nodes#ANamedargExpr#n_id (var_e) on <var_e:AExpr(ANamedargExpr)> */
var223 = var_e->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_id].val; /* _n_id on <var_e:AExpr(ANamedargExpr)> */
if (unlikely(var223 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2703);
fatal_exit(1);
}
var221 = var223;
RET_LABEL222:(void)0;
}
}
{
var224 = nit__lexer_work___Token___text(var221);
}
var_name = var224;
{
var225 = nit___nit__MSignature___mparameter_by_name(var_msignature, var_name);
}
var_param = var225;
if (var_param == NULL) {
var226 = 1; /* is null */
} else {
var226 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_param,((val*)NULL)) on <var_param:nullable MParameter> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_param,var_other) on <var_param:nullable MParameter(MParameter)> */
var231 = var_param == var_other;
var229 = var231;
goto RET_LABEL230;
RET_LABEL230:(void)0;
}
}
var227 = var229;
goto RET_LABEL228;
RET_LABEL228:(void)0;
}
var226 = var227;
}
if (var226){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var234 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var234 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var232 = var234;
RET_LABEL233:(void)0;
}
}
{
{ /* Inline parser_nodes#ANamedargExpr#n_id (var_e) on <var_e:AExpr(ANamedargExpr)> */
var237 = var_e->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_id].val; /* _n_id on <var_e:AExpr(ANamedargExpr)> */
if (unlikely(var237 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2703);
fatal_exit(1);
}
var235 = var237;
RET_LABEL236:(void)0;
}
}
if (unlikely(varonce238==NULL)) {
var239 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce240!=NULL)) {
var241 = varonce240;
} else {
var242 = "Error: no parameter `";
var243 = standard___standard__NativeString___to_s_with_length(var242, 21l);
var241 = var243;
varonce240 = var241;
}
((struct instance_standard__NativeArray*)var239)->values[0]=var241;
if (likely(varonce244!=NULL)) {
var245 = varonce244;
} else {
var246 = "` for `";
var247 = standard___standard__NativeString___to_s_with_length(var246, 7l);
var245 = var247;
varonce244 = var245;
}
((struct instance_standard__NativeArray*)var239)->values[2]=var245;
if (likely(varonce248!=NULL)) {
var249 = varonce248;
} else {
var250 = "`.";
var251 = standard___standard__NativeString___to_s_with_length(var250, 2l);
var249 = var251;
varonce248 = var249;
}
((struct instance_standard__NativeArray*)var239)->values[5]=var249;
} else {
var239 = varonce238;
varonce238 = NULL;
}
((struct instance_standard__NativeArray*)var239)->values[1]=var_name;
{
var252 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var239)->values[3]=var252;
{
var253 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_standard__NativeArray*)var239)->values[4]=var253;
{
var254 = ((val*(*)(val* self))(var239->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var239); /* native_to_s on <var239:NativeArray[String]>*/
}
varonce238 = var239;
{
nit___nit__ModelBuilder___error(var232, var235, var254); /* Direct call modelbuilder_base#ModelBuilder#error on <var232:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MParameter#is_default (var_param) on <var_param:nullable MParameter(MParameter)> */
var257 = var_param->attrs[COLOR_nit__model__MParameter___is_default].s; /* _is_default on <var_param:nullable MParameter(MParameter)> */
var255 = var257;
RET_LABEL256:(void)0;
}
}
var258 = !var255;
if (var258){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var261 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var261 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var259 = var261;
RET_LABEL260:(void)0;
}
}
if (unlikely(varonce262==NULL)) {
var263 = NEW_standard__NativeArray(6l, &type_standard__NativeArray__standard__String);
if (likely(varonce264!=NULL)) {
var265 = varonce264;
} else {
var266 = "Error: parameter `";
var267 = standard___standard__NativeString___to_s_with_length(var266, 18l);
var265 = var267;
varonce264 = var265;
}
((struct instance_standard__NativeArray*)var263)->values[0]=var265;
if (likely(varonce268!=NULL)) {
var269 = varonce268;
} else {
var270 = "` is not optional for `";
var271 = standard___standard__NativeString___to_s_with_length(var270, 23l);
var269 = var271;
varonce268 = var269;
}
((struct instance_standard__NativeArray*)var263)->values[2]=var269;
if (likely(varonce272!=NULL)) {
var273 = varonce272;
} else {
var274 = "`.";
var275 = standard___standard__NativeString___to_s_with_length(var274, 2l);
var273 = var275;
varonce272 = var273;
}
((struct instance_standard__NativeArray*)var263)->values[5]=var273;
} else {
var263 = varonce262;
varonce262 = NULL;
}
((struct instance_standard__NativeArray*)var263)->values[1]=var_name;
{
var276 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var263)->values[3]=var276;
{
var277 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_standard__NativeArray*)var263)->values[4]=var277;
{
var278 = ((val*(*)(val* self))(var263->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var263); /* native_to_s on <var263:NativeArray[String]>*/
}
varonce262 = var263;
{
nit___nit__ModelBuilder___error(var259, var_e, var278); /* Direct call modelbuilder_base#ModelBuilder#error on <var259:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var281 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var281 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var279 = var281;
RET_LABEL280:(void)0;
}
}
{
var282 = standard___standard__AbstractArrayRead___standard__abstract_collection__SequenceRead__index_of(var279, var_param);
}
var_idx = var282;
{
{ /* Inline typing#SignatureMap#map (var_map) on <var_map:SignatureMap> */
var285 = var_map->attrs[COLOR_nit__typing__SignatureMap___map].val; /* _map on <var_map:SignatureMap> */
if (unlikely(var285 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 597);
fatal_exit(1);
}
var283 = var285;
RET_LABEL284:(void)0;
}
}
{
var287 = (val*)(var_idx<<2|1);
var286 = standard___standard__MapRead___get_or_null(var283, var287);
}
var_prev = var286;
if (var_prev == NULL) {
var288 = 0; /* is null */
} else {
var288 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Int#!= (var_prev,((val*)NULL)) on <var_prev:nullable Int> */
var291 = 0; /* incompatible types Int vs. null; cannot be NULL */
var292 = !var291;
var289 = var292;
goto RET_LABEL290;
RET_LABEL290:(void)0;
}
var288 = var289;
}
if (var288){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var295 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var295 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var293 = var295;
RET_LABEL294:(void)0;
}
}
if (unlikely(varonce296==NULL)) {
var297 = NEW_standard__NativeArray(8l, &type_standard__NativeArray__standard__String);
if (likely(varonce298!=NULL)) {
var299 = varonce298;
} else {
var300 = "Error: parameter `";
var301 = standard___standard__NativeString___to_s_with_length(var300, 18l);
var299 = var301;
varonce298 = var299;
}
((struct instance_standard__NativeArray*)var297)->values[0]=var299;
if (likely(varonce302!=NULL)) {
var303 = varonce302;
} else {
var304 = "` already associated with argument #";
var305 = standard___standard__NativeString___to_s_with_length(var304, 36l);
var303 = var305;
varonce302 = var303;
}
((struct instance_standard__NativeArray*)var297)->values[2]=var303;
if (likely(varonce306!=NULL)) {
var307 = varonce306;
} else {
var308 = " for `";
var309 = standard___standard__NativeString___to_s_with_length(var308, 6l);
var307 = var309;
varonce306 = var307;
}
((struct instance_standard__NativeArray*)var297)->values[4]=var307;
if (likely(varonce310!=NULL)) {
var311 = varonce310;
} else {
var312 = "`.";
var313 = standard___standard__NativeString___to_s_with_length(var312, 2l);
var311 = var313;
varonce310 = var311;
}
((struct instance_standard__NativeArray*)var297)->values[7]=var311;
} else {
var297 = varonce296;
varonce296 = NULL;
}
((struct instance_standard__NativeArray*)var297)->values[1]=var_name;
var315 = (long)(var_prev)>>2;
var314 = standard__string___Int___Object__to_s(var315);
((struct instance_standard__NativeArray*)var297)->values[3]=var314;
{
var316 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_standard__string__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_standard__NativeArray*)var297)->values[5]=var316;
{
var317 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_standard__string__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_standard__NativeArray*)var297)->values[6]=var317;
{
var318 = ((val*(*)(val* self))(var297->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var297); /* native_to_s on <var297:NativeArray[String]>*/
}
varonce296 = var297;
{
nit___nit__ModelBuilder___error(var293, var_e, var318); /* Direct call modelbuilder_base#ModelBuilder#error on <var293:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#SignatureMap#map (var_map) on <var_map:SignatureMap> */
var321 = var_map->attrs[COLOR_nit__typing__SignatureMap___map].val; /* _map on <var_map:SignatureMap> */
if (unlikely(var321 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 597);
fatal_exit(1);
}
var319 = var321;
RET_LABEL320:(void)0;
}
}
{
var322 = (val*)(var_idx<<2|1);
var323 = (val*)(var_i<<2|1);
standard___standard__ArrayMap___standard__abstract_collection__Map___91d_93d_61d(var319, var322, var323); /* Direct call array#ArrayMap#[]= on <var319:ArrayMap[Int, Int]>*/
}
{
{ /* Inline kernel#Int#- (var_setted,1l) on <var_setted:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var326 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var326)) {
var_class_name329 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name329);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var330 = var_setted - 1l;
var324 = var330;
goto RET_LABEL325;
RET_LABEL325:(void)0;
}
}
var_setted = var324;
{
{ /* Inline parser_nodes#ANamedargExpr#n_expr (var_e) on <var_e:AExpr(ANamedargExpr)> */
var333 = var_e->attrs[COLOR_nit__parser_nodes__ANamedargExpr___n_expr].val; /* _n_expr on <var_e:AExpr(ANamedargExpr)> */
if (unlikely(var333 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2709);
fatal_exit(1);
}
var331 = var333;
RET_LABEL332:(void)0;
}
}
{
{ /* Inline model#MParameter#mtype (var_param) on <var_param:nullable MParameter(MParameter)> */
var336 = var_param->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_param:nullable MParameter(MParameter)> */
if (unlikely(var336 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var334 = var336;
RET_LABEL335:(void)0;
}
}
{
var337 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(self, var331, var334);
}
{
{ /* Inline typing#AExpr#mtype= (var_e,var337) on <var_e:AExpr(ANamedargExpr)> */
var_e->attrs[COLOR_nit__typing__AExpr___mtype].val = var337; /* _mtype on <var_e:AExpr(ANamedargExpr)> */
RET_LABEL338:(void)0;
}
}
BREAK_label: (void)0;
{
var339 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var339;
} else {
goto BREAK_label340;
}
}
BREAK_label340: (void)0;
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var343 = var_args->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var341 = var343;
RET_LABEL342:(void)0;
}
}
{
var344 = nit___nit__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#- (var341,var344) on <var341:Int> */
/* Covariant cast for argument 0 (i) <var344:Int> isa OTHER */
/* <var344:Int> isa OTHER */
var347 = 1; /* easy <var344:Int> isa OTHER*/
if (unlikely(!var347)) {
var_class_name350 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name350);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var351 = var341 - var344;
var345 = var351;
goto RET_LABEL346;
RET_LABEL346:(void)0;
}
}
var_vararg_decl = var345;
var_j = 0l;
var_i352 = 0l;
{
var353 = nit___nit__MSignature___arity(var_msignature);
}
var_354 = var353;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i352,var_354) on <var_i352:Int> */
/* Covariant cast for argument 0 (i) <var_354:Int> isa OTHER */
/* <var_354:Int> isa OTHER */
var357 = 1; /* easy <var_354:Int> isa OTHER*/
if (unlikely(!var357)) {
var_class_name360 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name360);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var361 = var_i352 < var_354;
var355 = var361;
goto RET_LABEL356;
RET_LABEL356:(void)0;
}
}
if (var355){
{
{ /* Inline typing#SignatureMap#map (var_map) on <var_map:SignatureMap> */
var364 = var_map->attrs[COLOR_nit__typing__SignatureMap___map].val; /* _map on <var_map:SignatureMap> */
if (unlikely(var364 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 597);
fatal_exit(1);
}
var362 = var364;
RET_LABEL363:(void)0;
}
}
{
var366 = (val*)(var_i352<<2|1);
var365 = standard___standard__CoupleMap___MapRead__has_key(var362, var366);
}
if (var365){
goto BREAK_label367;
} else {
}
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var370 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var370 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var368 = var370;
RET_LABEL369:(void)0;
}
}
{
var371 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var368, var_i352);
}
var_param372 = var371;
{
{ /* Inline model#MParameter#is_default (var_param372) on <var_param372:MParameter> */
var375 = var_param372->attrs[COLOR_nit__model__MParameter___is_default].s; /* _is_default on <var_param372:MParameter> */
var373 = var375;
RET_LABEL374:(void)0;
}
}
if (var373){
{
{ /* Inline kernel#Int#> (var_setted,0l) on <var_setted:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var378 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var378)) {
var_class_name381 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name381);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 536);
fatal_exit(1);
}
var382 = var_setted > 0l;
var376 = var382;
goto RET_LABEL377;
RET_LABEL377:(void)0;
}
}
if (var376){
{
{ /* Inline kernel#Int#- (var_setted,1l) on <var_setted:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var385 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var385)) {
var_class_name388 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name388);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 540);
fatal_exit(1);
}
var389 = var_setted - 1l;
var383 = var389;
goto RET_LABEL384;
RET_LABEL384:(void)0;
}
}
var_setted = var383;
} else {
goto BREAK_label367;
}
} else {
}
for(;;) {
{
var390 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_args, var_j);
}
/* <var390:nullable Object(AExpr)> isa ANamedargExpr */
cltype392 = type_nit__ANamedargExpr.color;
idtype393 = type_nit__ANamedargExpr.id;
if(cltype392 >= var390->type->table_size) {
var391 = 0;
} else {
var391 = var390->type->type_table[cltype392] == idtype393;
}
if (var391){
{
{ /* Inline kernel#Int#+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var396 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var396)) {
var_class_name399 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name399);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var400 = var_j + 1l;
var394 = var400;
goto RET_LABEL395;
RET_LABEL395:(void)0;
}
}
var_j = var394;
} else {
goto BREAK_label401;
}
}
BREAK_label401: (void)0;
{
var402 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_args, var_j);
}
var_arg = var402;
{
{ /* Inline typing#SignatureMap#map (var_map) on <var_map:SignatureMap> */
var405 = var_map->attrs[COLOR_nit__typing__SignatureMap___map].val; /* _map on <var_map:SignatureMap> */
if (unlikely(var405 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 597);
fatal_exit(1);
}
var403 = var405;
RET_LABEL404:(void)0;
}
}
{
var406 = (val*)(var_i352<<2|1);
var407 = (val*)(var_j<<2|1);
standard___standard__ArrayMap___standard__abstract_collection__Map___91d_93d_61d(var403, var406, var407); /* Direct call array#ArrayMap#[]= on <var403:ArrayMap[Int, Int]>*/
}
{
{ /* Inline kernel#Int#+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var410 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var410)) {
var_class_name413 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name413);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var414 = var_j + 1l;
var408 = var414;
goto RET_LABEL409;
RET_LABEL409:(void)0;
}
}
var_j = var408;
{
{ /* Inline kernel#Int#== (var_i352,var_vararg_rank) on <var_i352:Int> */
var417 = var_i352 == var_vararg_rank;
var415 = var417;
goto RET_LABEL416;
RET_LABEL416:(void)0;
}
}
if (var415){
{
{ /* Inline kernel#Int#+ (var_j,var_vararg_decl) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_decl:Int> isa OTHER */
/* <var_vararg_decl:Int> isa OTHER */
var420 = 1; /* easy <var_vararg_decl:Int> isa OTHER*/
if (unlikely(!var420)) {
var_class_name423 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name423);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var424 = var_j + var_vararg_decl;
var418 = var424;
goto RET_LABEL419;
RET_LABEL419:(void)0;
}
}
var_j = var418;
goto BREAK_label367;
} else {
}
{
{ /* Inline model#MParameter#mtype (var_param372) on <var_param372:MParameter> */
var427 = var_param372->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var_param372:MParameter> */
if (unlikely(var427 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var425 = var427;
RET_LABEL426:(void)0;
}
}
var_paramtype = var425;
{
var428 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(self, var_arg, var_paramtype);
}
BREAK_label367: (void)0;
{
var429 = standard___standard__Int___Discrete__successor(var_i352, 1l);
}
var_i352 = var429;
} else {
goto BREAK_label430;
}
}
BREAK_label430: (void)0;
{
{ /* Inline kernel#Int#>= (var_vararg_rank,0l) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var433 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var433)) {
var_class_name436 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name436);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 535);
fatal_exit(1);
}
var437 = var_vararg_rank >= 0l;
var431 = var437;
goto RET_LABEL432;
RET_LABEL432:(void)0;
}
}
if (var431){
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var440 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var440 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var438 = var440;
RET_LABEL439:(void)0;
}
}
{
var441 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var438, var_vararg_rank);
}
{
{ /* Inline model#MParameter#mtype (var441) on <var441:nullable Object(MParameter)> */
var444 = var441->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var441:nullable Object(MParameter)> */
if (unlikely(var444 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var442 = var444;
RET_LABEL443:(void)0;
}
}
var_paramtype445 = var442;
{
var446 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_args, var_vararg_rank);
}
var_first = var446;
{
{ /* Inline kernel#Int#== (var_vararg_decl,0l) on <var_vararg_decl:Int> */
var449 = var_vararg_decl == 0l;
var447 = var449;
goto RET_LABEL448;
RET_LABEL448:(void)0;
}
}
if (var447){
if (likely(varonce450!=NULL)) {
var451 = varonce450;
} else {
var452 = "Array";
var453 = standard___standard__NativeString___to_s_with_length(var452, 5l);
var451 = var453;
varonce450 = var451;
}
{
var454 = nit__typing___nit__typing__TypeVisitor___get_mclass(self, var_node, var451);
}
var_mclass = var454;
if (var_mclass == NULL) {
var455 = 1; /* is null */
} else {
var455 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var460 = var_mclass == var_other;
var458 = var460;
goto RET_LABEL459;
RET_LABEL459:(void)0;
}
}
var456 = var458;
goto RET_LABEL457;
RET_LABEL457:(void)0;
}
var455 = var456;
}
if (var455){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var461 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___with_capacity(var461, 1l); /* Direct call array#Array#with_capacity on <var461:Array[MType]>*/
}
var_462 = var461;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_462, var_paramtype445); /* Direct call array#AbstractArray#push on <var_462:Array[MType]>*/
}
{
var463 = nit___nit__MClass___get_mtype(var_mclass, var_462);
}
var_array_mtype = var463;
/* <var_first:AExpr> isa AVarargExpr */
cltype465 = type_nit__AVarargExpr.color;
idtype466 = type_nit__AVarargExpr.id;
if(cltype465 >= var_first->type->table_size) {
var464 = 0;
} else {
var464 = var_first->type->type_table[cltype465] == idtype466;
}
if (var464){
{
{ /* Inline parser_nodes#AVarargExpr#n_expr (var_first) on <var_first:AExpr(AVarargExpr)> */
var469 = var_first->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <var_first:AExpr(AVarargExpr)> */
if (unlikely(var469 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2692);
fatal_exit(1);
}
var467 = var469;
RET_LABEL468:(void)0;
}
}
{
var470 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(self, var467, var_array_mtype);
}
{
{ /* Inline parser_nodes#AVarargExpr#n_expr (var_first) on <var_first:AExpr(AVarargExpr)> */
var473 = var_first->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <var_first:AExpr(AVarargExpr)> */
if (unlikely(var473 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2692);
fatal_exit(1);
}
var471 = var473;
RET_LABEL472:(void)0;
}
}
{
var474 = ((val*(*)(val* self))(var471->class->vft[COLOR_nit__typing__AExpr__mtype]))(var471); /* mtype on <var471:AExpr>*/
}
{
{ /* Inline typing#AExpr#mtype= (var_first,var474) on <var_first:AExpr(AVarargExpr)> */
var_first->attrs[COLOR_nit__typing__AExpr___mtype].val = var474; /* _mtype on <var_first:AExpr(AVarargExpr)> */
RET_LABEL475:(void)0;
}
}
} else {
{
var476 = nit__typing___nit__typing__TypeVisitor___visit_expr(self, var_first);
}
var_t = var476;
if (var_t == NULL) {
var477 = 1; /* is null */
} else {
var477 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,((val*)NULL)) on <var_t:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other) on <var_t:nullable MType(MType)> */
var482 = var_t == var_other;
var480 = var482;
goto RET_LABEL481;
RET_LABEL481:(void)0;
}
}
var478 = var480;
goto RET_LABEL479;
RET_LABEL479:(void)0;
}
var477 = var478;
}
if (var477){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var484 = nit__typing___nit__typing__TypeVisitor___is_subtype(self, var_t, var_paramtype445);
}
var485 = !var484;
var_486 = var485;
if (var485){
{
var487 = nit__typing___nit__typing__TypeVisitor___is_subtype(self, var_t, var_array_mtype);
}
var483 = var487;
} else {
var483 = var_486;
}
if (var483){
if (unlikely(varonce488==NULL)) {
var489 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce490!=NULL)) {
var491 = varonce490;
} else {
var492 = "Type Error: expected `";
var493 = standard___standard__NativeString___to_s_with_length(var492, 22l);
var491 = var493;
varonce490 = var491;
}
((struct instance_standard__NativeArray*)var489)->values[0]=var491;
if (likely(varonce494!=NULL)) {
var495 = varonce494;
} else {
var496 = "`, got `";
var497 = standard___standard__NativeString___to_s_with_length(var496, 8l);
var495 = var497;
varonce494 = var495;
}
((struct instance_standard__NativeArray*)var489)->values[2]=var495;
if (likely(varonce498!=NULL)) {
var499 = varonce498;
} else {
var500 = "`. Is an ellipsis `...` missing on the argument?";
var501 = standard___standard__NativeString___to_s_with_length(var500, 48l);
var499 = var501;
varonce498 = var499;
}
((struct instance_standard__NativeArray*)var489)->values[4]=var499;
} else {
var489 = varonce488;
varonce488 = NULL;
}
{
var502 = ((val*(*)(val* self))(var_paramtype445->class->vft[COLOR_standard__string__Object__to_s]))(var_paramtype445); /* to_s on <var_paramtype445:MType>*/
}
((struct instance_standard__NativeArray*)var489)->values[1]=var502;
{
var503 = ((val*(*)(val* self))(var_t->class->vft[COLOR_standard__string__Object__to_s]))(var_t); /* to_s on <var_t:nullable MType(MType)>*/
}
((struct instance_standard__NativeArray*)var489)->values[3]=var503;
{
var504 = ((val*(*)(val* self))(var489->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var489); /* native_to_s on <var489:NativeArray[String]>*/
}
varonce488 = var489;
{
nit__typing___nit__typing__TypeVisitor___error(self, var_first, var504); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#SignatureMap#vararg_decl= (var_map,1l) on <var_map:SignatureMap> */
var_map->attrs[COLOR_nit__typing__SignatureMap___vararg_decl].l = 1l; /* _vararg_decl on <var_map:SignatureMap> */
RET_LABEL505:(void)0;
}
}
{
var506 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(self, var_first, var_paramtype445);
}
}
} else {
{
{ /* Inline kernel#Int#+ (var_vararg_decl,1l) on <var_vararg_decl:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var509 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var509)) {
var_class_name512 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name512);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var513 = var_vararg_decl + 1l;
var507 = var513;
goto RET_LABEL508;
RET_LABEL508:(void)0;
}
}
{
{ /* Inline typing#SignatureMap#vararg_decl= (var_map,var507) on <var_map:SignatureMap> */
var_map->attrs[COLOR_nit__typing__SignatureMap___vararg_decl].l = var507; /* _vararg_decl on <var_map:SignatureMap> */
RET_LABEL514:(void)0;
}
}
var_i515 = var_vararg_rank;
{
{ /* Inline kernel#Int#+ (var_vararg_rank,var_vararg_decl) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_decl:Int> isa OTHER */
/* <var_vararg_decl:Int> isa OTHER */
var518 = 1; /* easy <var_vararg_decl:Int> isa OTHER*/
if (unlikely(!var518)) {
var_class_name521 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name521);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var522 = var_vararg_rank + var_vararg_decl;
var516 = var522;
goto RET_LABEL517;
RET_LABEL517:(void)0;
}
}
var_523 = var516;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i515,var_523) on <var_i515:Int> */
/* Covariant cast for argument 0 (i) <var_523:Int> isa OTHER */
/* <var_523:Int> isa OTHER */
var526 = 1; /* easy <var_523:Int> isa OTHER*/
if (unlikely(!var526)) {
var_class_name529 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name529);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 533);
fatal_exit(1);
}
var530 = var_i515 <= var_523;
var524 = var530;
goto RET_LABEL525;
RET_LABEL525:(void)0;
}
}
if (var524){
{
var531 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_args, var_i515);
}
{
var532 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(self, var531, var_paramtype445);
}
{
var533 = standard___standard__Int___Discrete__successor(var_i515, 1l);
}
var_i515 = var533;
} else {
goto BREAK_label534;
}
}
BREAK_label534: (void)0;
}
} else {
}
var = var_map;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#error for (self: TypeVisitor, ANode, String) */
void nit__typing___nit__typing__TypeVisitor___error(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_message /* var message: String */;
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
val* var6 /* : Location */;
val* var7 /* : Message */;
var_node = p0;
var_message = p1;
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var2 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_node); /* hot_location on <var_node:ANode>*/
}
{
var7 = nit___nit__ToolContext___error(var3, var6, var_message);
}
RET_LABEL:;
}
/* method typing#TypeVisitor#get_variable for (self: TypeVisitor, AExpr, Variable): nullable MType */
val* nit__typing___nit__typing__TypeVisitor___get_variable(val* self, val* p0, val* p1) {
val* var /* : nullable MType */;
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: Variable */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable MType */;
val* var7 /* : nullable MType */;
val* var8 /* : nullable FlowContext */;
val* var10 /* : nullable FlowContext */;
val* var_flow /* var flow: nullable FlowContext */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : HashMap[Variable, nullable MType] */;
val* var19 /* : HashMap[Variable, nullable MType] */;
short int var20 /* : Bool */;
val* var21 /* : HashMap[Variable, nullable MType] */;
val* var23 /* : HashMap[Variable, nullable MType] */;
val* var24 /* : nullable Object */;
val* var25 /* : Array[nullable MType] */;
val* var_mtypes /* var mtypes: Array[nullable MType] */;
long var26 /* : Int */;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : nullable MType */;
val* var34 /* : nullable MType */;
long var35 /* : Int */;
long var37 /* : Int */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : nullable Object */;
val* var42 /* : nullable MType */;
val* var_res /* var res: nullable MType */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
val* var49 /* : nullable MType */;
val* var51 /* : nullable MType */;
var_node = p0;
var_variable = p1;
{
{ /* Inline typing#Variable#is_adapted (var_variable) on <var_variable:Variable> */
var3 = var_variable->attrs[COLOR_nit__typing__Variable___is_adapted].s; /* _is_adapted on <var_variable:Variable> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = !var1;
if (var4){
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var7 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var = var5;
goto RET_LABEL;
} else {
}
{
{ /* Inline flow#AExpr#after_flow_context (var_node) on <var_node:AExpr> */
var10 = var_node->attrs[COLOR_nit__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_node:AExpr> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_flow = var8;
if (var_flow == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_flow,((val*)NULL)) on <var_flow:nullable FlowContext> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_flow,var_other) on <var_flow:nullable FlowContext(FlowContext)> */
var16 = var_flow == var_other;
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
{ /* Inline typing#FlowContext#vars (var_flow) on <var_flow:nullable FlowContext(FlowContext)> */
var19 = var_flow->attrs[COLOR_nit__typing__FlowContext___vars].val; /* _vars on <var_flow:nullable FlowContext(FlowContext)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 659);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var17, var_variable);
}
if (var20){
{
{ /* Inline typing#FlowContext#vars (var_flow) on <var_flow:nullable FlowContext(FlowContext)> */
var23 = var_flow->attrs[COLOR_nit__typing__FlowContext___vars].val; /* _vars on <var_flow:nullable FlowContext(FlowContext)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 659);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var21, var_variable);
}
var = var24;
goto RET_LABEL;
} else {
{
var25 = nit__typing___FlowContext___collect_types(var_flow, var_variable);
}
var_mtypes = var25;
{
{ /* Inline array#AbstractArrayRead#length (var_mtypes) on <var_mtypes:Array[nullable MType]> */
var28 = var_mtypes->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_mtypes:Array[nullable MType]> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var26,0l) on <var26:Int> */
var31 = var26 == 0l;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var34 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var = var32;
goto RET_LABEL;
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_mtypes) on <var_mtypes:Array[nullable MType]> */
var37 = var_mtypes->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_mtypes:Array[nullable MType]> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var35,1l) on <var35:Int> */
var40 = var35 == 1l;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
{
var41 = standard___standard__SequenceRead___Collection__first(var_mtypes);
}
var = var41;
goto RET_LABEL;
} else {
{
var42 = nit__typing___nit__typing__TypeVisitor___merge_types(self, var_node, var_mtypes);
}
var_res = var42;
if (var_res == NULL) {
var43 = 1; /* is null */
} else {
var43 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,((val*)NULL)) on <var_res:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable MType(MType)> */
var48 = var_res == var_other;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
var43 = var44;
}
if (var43){
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var51 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_res = var49;
} else {
}
var = var_res;
goto RET_LABEL;
}
}
}
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#dirty for (self: TypeVisitor): Bool */
short int nit__typing___nit__typing__TypeVisitor___dirty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__typing__TypeVisitor___dirty].s; /* _dirty on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#dirty= for (self: TypeVisitor, Bool) */
void nit__typing___nit__typing__TypeVisitor___dirty_61d(val* self, short int p0) {
self->attrs[COLOR_nit__typing__TypeVisitor___dirty].s = p0; /* _dirty on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#has_loop for (self: TypeVisitor): Bool */
short int nit__typing___nit__typing__TypeVisitor___has_loop(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__typing__TypeVisitor___has_loop].s; /* _has_loop on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#has_loop= for (self: TypeVisitor, Bool) */
void nit__typing___nit__typing__TypeVisitor___has_loop_61d(val* self, short int p0) {
self->attrs[COLOR_nit__typing__TypeVisitor___has_loop].s = p0; /* _has_loop on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#set_variable for (self: TypeVisitor, AExpr, Variable, nullable MType) */
void nit__typing___nit__typing__TypeVisitor___set_variable(val* self, val* p0, val* p1, val* p2) {
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: Variable */;
val* var_mtype /* var mtype: nullable MType */;
val* var /* : nullable FlowContext */;
val* var2 /* : nullable FlowContext */;
val* var_flow /* var flow: nullable FlowContext */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
var_node = p0;
var_variable = p1;
var_mtype = p2;
{
{ /* Inline flow#AExpr#after_flow_context (var_node) on <var_node:AExpr> */
var2 = var_node->attrs[COLOR_nit__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_node:AExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_flow = var;
if (var_flow == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_flow,((val*)NULL)) on <var_flow:nullable FlowContext> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_flow->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_flow, var_other); /* == on <var_flow:nullable FlowContext(FlowContext)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 563);
fatal_exit(1);
}
{
nit__typing___FlowContext___set_var(var_flow, self, var_variable, var_mtype); /* Direct call typing#FlowContext#set_var on <var_flow:nullable FlowContext(FlowContext)>*/
}
RET_LABEL:;
}
/* method typing#TypeVisitor#merge_types for (self: TypeVisitor, ANode, Array[nullable MType]): nullable MType */
val* nit__typing___nit__typing__TypeVisitor___merge_types(val* self, val* p0, val* p1) {
val* var /* : nullable MType */;
val* var_node /* var node: ANode */;
val* var_col /* var col: Array[nullable MType] */;
long var1 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_ /* var : Array[nullable MType] */;
val* var8 /* : ArrayIterator[nullable Object] */;
val* var_9 /* var : ArrayIterator[nullable MType] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_t1 /* var t1: nullable MType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var_found /* var found: Bool */;
val* var_18 /* var : Array[nullable MType] */;
val* var19 /* : ArrayIterator[nullable Object] */;
val* var_20 /* var : ArrayIterator[nullable MType] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_t2 /* var t2: nullable MType */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var_32 /* var : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : MType */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
var_node = p0;
var_col = p1;
{
{ /* Inline array#AbstractArrayRead#length (var_col) on <var_col:Array[nullable MType]> */
var3 = var_col->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_col:Array[nullable MType]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var1,1l) on <var1:Int> */
var6 = var1 == 1l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
var7 = standard___standard__SequenceRead___Collection__first(var_col);
}
var = var7;
goto RET_LABEL;
} else {
}
var_ = var_col;
{
var8 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_9 = var8;
for(;;) {
{
var10 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_9);
}
if (var10){
{
var11 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_9);
}
var_t1 = var11;
if (var_t1 == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t1,((val*)NULL)) on <var_t1:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t1,var_other) on <var_t1:nullable MType(MType)> */
var17 = var_t1 == var_other;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
goto BREAK_label;
} else {
}
var_found = 1;
var_18 = var_col;
{
var19 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_18);
}
var_20 = var19;
for(;;) {
{
var21 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_20);
}
if (var21){
{
var22 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_20);
}
var_t2 = var22;
if (var_t2 == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t2,((val*)NULL)) on <var_t2:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t2,var_other) on <var_t2:nullable MType(MType)> */
var28 = var_t2 == var_other;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
goto BREAK_label29;
} else {
}
{
var31 = nit__typing___nit__typing__TypeVisitor___can_be_null(self, var_t2);
}
var_32 = var31;
if (var31){
{
var33 = nit__typing___nit__typing__TypeVisitor___can_be_null(self, var_t1);
}
var34 = !var33;
var30 = var34;
} else {
var30 = var_32;
}
if (var30){
{
var35 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_nit__model__MType__as_nullable]))(var_t1); /* as_nullable on <var_t1:nullable MType(MType)>*/
}
var_t1 = var35;
} else {
}
{
var36 = nit__typing___nit__typing__TypeVisitor___is_subtype(self, var_t2, var_t1);
}
var37 = !var36;
if (var37){
var_found = 0;
} else {
}
BREAK_label29: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_20); /* Direct call array#ArrayIterator#next on <var_20:ArrayIterator[nullable MType]>*/
}
} else {
goto BREAK_label38;
}
}
BREAK_label38: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_20); /* Direct call array#ArrayIterator#finish on <var_20:ArrayIterator[nullable MType]>*/
}
if (var_found){
var = var_t1;
goto RET_LABEL;
} else {
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_9); /* Direct call array#ArrayIterator#next on <var_9:ArrayIterator[nullable MType]>*/
}
} else {
goto BREAK_label39;
}
}
BREAK_label39: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_9); /* Direct call array#ArrayIterator#finish on <var_9:ArrayIterator[nullable MType]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#SignatureMap#map for (self: SignatureMap): ArrayMap[Int, Int] */
val* nit___nit__SignatureMap___map(val* self) {
val* var /* : ArrayMap[Int, Int] */;
val* var1 /* : ArrayMap[Int, Int] */;
var1 = self->attrs[COLOR_nit__typing__SignatureMap___map].val; /* _map on <self:SignatureMap> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 597);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#SignatureMap#vararg_decl for (self: SignatureMap): Int */
long nit___nit__SignatureMap___vararg_decl(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__typing__SignatureMap___vararg_decl].l; /* _vararg_decl on <self:SignatureMap> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#SignatureMap#vararg_decl= for (self: SignatureMap, Int) */
void nit___nit__SignatureMap___vararg_decl_61d(val* self, long p0) {
self->attrs[COLOR_nit__typing__SignatureMap___vararg_decl].l = p0; /* _vararg_decl on <self:SignatureMap> */
RET_LABEL:;
}
/* method typing#CallSite#node for (self: CallSite): ANode */
val* nit___nit__CallSite___node(val* self) {
val* var /* : ANode */;
val* var1 /* : ANode */;
var1 = self->attrs[COLOR_nit__typing__CallSite___node].val; /* _node on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 607);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#node= for (self: CallSite, ANode) */
void nit___nit__CallSite___node_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__CallSite___node].val = p0; /* _node on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#recv for (self: CallSite): MType */
val* nit___nit__CallSite___recv(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nit__typing__CallSite___recv].val; /* _recv on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 610);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#recv= for (self: CallSite, MType) */
void nit___nit__CallSite___recv_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__CallSite___recv].val = p0; /* _recv on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#mmodule for (self: CallSite): MModule */
val* nit___nit__CallSite___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nit__typing__CallSite___mmodule].val; /* _mmodule on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 613);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mmodule= for (self: CallSite, MModule) */
void nit___nit__CallSite___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__CallSite___mmodule].val = p0; /* _mmodule on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#anchor for (self: CallSite): nullable MClassType */
val* nit___nit__CallSite___anchor(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_nit__typing__CallSite___anchor].val; /* _anchor on <self:CallSite> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#anchor= for (self: CallSite, nullable MClassType) */
void nit___nit__CallSite___anchor_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__CallSite___anchor].val = p0; /* _anchor on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#recv_is_self= for (self: CallSite, Bool) */
void nit___nit__CallSite___recv_is_self_61d(val* self, short int p0) {
self->attrs[COLOR_nit__typing__CallSite___recv_is_self].s = p0; /* _recv_is_self on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#mproperty for (self: CallSite): MMethod */
val* nit___nit__CallSite___mproperty(val* self) {
val* var /* : MMethod */;
val* var1 /* : MMethod */;
var1 = self->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 624);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mproperty= for (self: CallSite, MMethod) */
void nit___nit__CallSite___mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__CallSite___mproperty].val = p0; /* _mproperty on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#mpropdef for (self: CallSite): MMethodDef */
val* nit___nit__CallSite___mpropdef(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
var1 = self->attrs[COLOR_nit__typing__CallSite___mpropdef].val; /* _mpropdef on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 627);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mpropdef= for (self: CallSite, MMethodDef) */
void nit___nit__CallSite___mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__CallSite___mpropdef].val = p0; /* _mpropdef on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#msignature for (self: CallSite): MSignature */
val* nit___nit__CallSite___msignature(val* self) {
val* var /* : MSignature */;
val* var1 /* : MSignature */;
var1 = self->attrs[COLOR_nit__typing__CallSite___msignature].val; /* _msignature on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 631);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#msignature= for (self: CallSite, MSignature) */
void nit___nit__CallSite___msignature_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__CallSite___msignature].val = p0; /* _msignature on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#erasure_cast for (self: CallSite): Bool */
short int nit___nit__CallSite___erasure_cast(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__typing__CallSite___erasure_cast].s; /* _erasure_cast on <self:CallSite> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#erasure_cast= for (self: CallSite, Bool) */
void nit___nit__CallSite___erasure_cast_61d(val* self, short int p0) {
self->attrs[COLOR_nit__typing__CallSite___erasure_cast].s = p0; /* _erasure_cast on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#signaturemap for (self: CallSite): nullable SignatureMap */
val* nit___nit__CallSite___signaturemap(val* self) {
val* var /* : nullable SignatureMap */;
val* var1 /* : nullable SignatureMap */;
var1 = self->attrs[COLOR_nit__typing__CallSite___signaturemap].val; /* _signaturemap on <self:CallSite> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#signaturemap= for (self: CallSite, nullable SignatureMap) */
void nit___nit__CallSite___signaturemap_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__CallSite___signaturemap].val = p0; /* _signaturemap on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#check_signature for (self: CallSite, TypeVisitor, Array[AExpr]): Bool */
short int nit___nit__CallSite___check_signature(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_v /* var v: TypeVisitor */;
val* var_args /* var args: Array[AExpr] */;
val* var1 /* : ANode */;
val* var3 /* : ANode */;
val* var4 /* : MMethod */;
val* var6 /* : MMethod */;
val* var7 /* : MSignature */;
val* var9 /* : MSignature */;
val* var10 /* : nullable SignatureMap */;
val* var_map /* var map: nullable SignatureMap */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
var_v = p0;
var_args = p1;
{
{ /* Inline typing#CallSite#node (self) on <self:CallSite> */
var3 = self->attrs[COLOR_nit__typing__CallSite___node].val; /* _node on <self:CallSite> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 607);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#CallSite#mproperty (self) on <self:CallSite> */
var6 = self->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <self:CallSite> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 624);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing#CallSite#msignature (self) on <self:CallSite> */
var9 = self->attrs[COLOR_nit__typing__CallSite___msignature].val; /* _msignature on <self:CallSite> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 631);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nit__typing___nit__typing__TypeVisitor___check_signature(var_v, var1, var_args, var4, var7);
}
var_map = var10;
{
{ /* Inline typing#CallSite#signaturemap= (self,var_map) on <self:CallSite> */
self->attrs[COLOR_nit__typing__CallSite___signaturemap].val = var_map; /* _signaturemap on <self:CallSite> */
RET_LABEL11:(void)0;
}
}
if (var_map == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_map,((val*)NULL)) on <var_map:nullable SignatureMap> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_map,var_other) on <var_map:nullable SignatureMap(SignatureMap)> */
var17 = var_map == var_other;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#CallSite#init for (self: CallSite) */
void nit___nit__CallSite___standard__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__CallSite___standard__kernel__Object__init]))(self); /* init on <self:CallSite>*/
}
RET_LABEL:;
}
/* method typing#Variable#declared_type for (self: Variable): nullable MType */
val* nit__typing___Variable___declared_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <self:Variable> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#Variable#declared_type= for (self: Variable, nullable MType) */
void nit__typing___Variable___declared_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__Variable___declared_type].val = p0; /* _declared_type on <self:Variable> */
RET_LABEL:;
}
/* method typing#Variable#is_adapted for (self: Variable): Bool */
short int nit__typing___Variable___is_adapted(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__typing__Variable___is_adapted].s; /* _is_adapted on <self:Variable> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#Variable#is_adapted= for (self: Variable, Bool) */
void nit__typing___Variable___is_adapted_61d(val* self, short int p0) {
self->attrs[COLOR_nit__typing__Variable___is_adapted].s = p0; /* _is_adapted on <self:Variable> */
RET_LABEL:;
}
/* method typing#FlowContext#vars for (self: FlowContext): HashMap[Variable, nullable MType] */
val* nit__typing___FlowContext___vars(val* self) {
val* var /* : HashMap[Variable, nullable MType] */;
val* var1 /* : HashMap[Variable, nullable MType] */;
var1 = self->attrs[COLOR_nit__typing__FlowContext___vars].val; /* _vars on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 659);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#FlowContext#set_var for (self: FlowContext, TypeVisitor, Variable, nullable MType) */
void nit__typing___FlowContext___set_var(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: TypeVisitor */;
val* var_variable /* var variable: Variable */;
val* var_mtype /* var mtype: nullable MType */;
short int var /* : Bool */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : HashMap[Variable, nullable MType] */;
val* var17 /* : HashMap[Variable, nullable MType] */;
short int var18 /* : Bool */;
short int var_19 /* var : Bool */;
val* var20 /* : HashMap[Variable, nullable MType] */;
val* var22 /* : HashMap[Variable, nullable MType] */;
val* var23 /* : nullable Object */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : HashMap[Variable, nullable MType] */;
val* var32 /* : HashMap[Variable, nullable MType] */;
var_v = p0;
var_variable = p1;
var_mtype = p2;
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var3 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = (var_mtype == NULL);
} else {
{ /* Inline kernel#Object#== (var1,var_mtype) on <var1:nullable MType> */
var_other = var_mtype;
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable MType(MType)> */
var9 = var1 == var_other;
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
var_ = var4;
if (var4){
{
{ /* Inline typing#Variable#is_adapted (var_variable) on <var_variable:Variable> */
var12 = var_variable->attrs[COLOR_nit__typing__Variable___is_adapted].s; /* _is_adapted on <var_variable:Variable> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var13 = !var10;
var = var13;
} else {
var = var_;
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#FlowContext#vars (self) on <self:FlowContext> */
var17 = self->attrs[COLOR_nit__typing__FlowContext___vars].val; /* _vars on <self:FlowContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 659);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var15, var_variable);
}
var_19 = var18;
if (var18){
{
{ /* Inline typing#FlowContext#vars (self) on <self:FlowContext> */
var22 = self->attrs[COLOR_nit__typing__FlowContext___vars].val; /* _vars on <self:FlowContext> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 659);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var20, var_variable);
}
if (var23 == NULL) {
var24 = (var_mtype == NULL);
} else {
{ /* Inline kernel#Object#== (var23,var_mtype) on <var23:nullable Object(nullable MType)> */
var_other = var_mtype;
{
{ /* Inline kernel#Object#is_same_instance (var23,var_other) on <var23:nullable MType(MType)> */
var29 = var23 == var_other;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
var14 = var24;
} else {
var14 = var_19;
}
if (var14){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#FlowContext#vars (self) on <self:FlowContext> */
var32 = self->attrs[COLOR_nit__typing__FlowContext___vars].val; /* _vars on <self:FlowContext> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 659);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var30, var_variable, var_mtype); /* Direct call hash_collection#HashMap#[]= on <var30:HashMap[Variable, nullable MType]>*/
}
{
{ /* Inline typing#TypeVisitor#dirty= (var_v,1) on <var_v:TypeVisitor> */
var_v->attrs[COLOR_nit__typing__TypeVisitor___dirty].s = 1; /* _dirty on <var_v:TypeVisitor> */
RET_LABEL33:(void)0;
}
}
{
{ /* Inline typing#Variable#is_adapted= (var_variable,1) on <var_variable:Variable> */
var_variable->attrs[COLOR_nit__typing__Variable___is_adapted].s = 1; /* _is_adapted on <var_variable:Variable> */
RET_LABEL34:(void)0;
}
}
RET_LABEL:;
}
/* method typing#FlowContext#collect_types for (self: FlowContext, Variable): Array[nullable MType] */
val* nit__typing___FlowContext___collect_types(val* self, val* p0) {
val* var /* : Array[nullable MType] */;
val* var_variable /* var variable: Variable */;
val* var1 /* : Array[nullable MType] */;
val* var_res /* var res: Array[nullable MType] */;
val* var2 /* : Array[FlowContext] */;
val* var_ /* var : Array[FlowContext] */;
val* var_todo /* var todo: Array[FlowContext] */;
val* var3 /* : HashSet[FlowContext] */;
val* var_seen /* var seen: HashSet[FlowContext] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_f /* var f: FlowContext */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : HashMap[Variable, nullable MType] */;
val* var11 /* : HashMap[Variable, nullable MType] */;
short int var12 /* : Bool */;
val* var13 /* : HashMap[Variable, nullable MType] */;
val* var15 /* : HashMap[Variable, nullable MType] */;
val* var16 /* : nullable Object */;
val* var17 /* : Array[FlowContext] */;
val* var19 /* : Array[FlowContext] */;
val* var20 /* : Array[FlowContext] */;
val* var22 /* : Array[FlowContext] */;
val* var23 /* : Array[FlowContext] */;
val* var25 /* : Array[FlowContext] */;
short int var26 /* : Bool */;
val* var27 /* : nullable MType */;
val* var29 /* : nullable MType */;
var_variable = p0;
var1 = NEW_standard__Array(&type_standard__Array__nullable__nit__MType);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[nullable MType]>*/
}
var_res = var1;
var2 = NEW_standard__Array(&type_standard__Array__nit__FlowContext);
{
standard___standard__Array___with_capacity(var2, 1l); /* Direct call array#Array#with_capacity on <var2:Array[FlowContext]>*/
}
var_ = var2;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, self); /* Direct call array#AbstractArray#push on <var_:Array[FlowContext]>*/
}
var_todo = var_;
var3 = NEW_standard__HashSet(&type_standard__HashSet__nit__FlowContext);
{
standard___standard__HashSet___standard__kernel__Object__init(var3); /* Direct call hash_collection#HashSet#init on <var3:HashSet[FlowContext]>*/
}
var_seen = var3;
for(;;) {
{
var4 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_todo);
}
var5 = !var4;
if (var5){
{
var6 = standard___standard__AbstractArray___standard__abstract_collection__Sequence__pop(var_todo);
}
var_f = var6;
{
var7 = nit___nit__FlowContext___is_unreachable(var_f);
}
if (var7){
goto BREAK_label;
} else {
}
{
var8 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var_seen, var_f);
}
if (var8){
goto BREAK_label;
} else {
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var_seen, var_f); /* Direct call hash_collection#HashSet#add on <var_seen:HashSet[FlowContext]>*/
}
{
{ /* Inline typing#FlowContext#vars (var_f) on <var_f:FlowContext> */
var11 = var_f->attrs[COLOR_nit__typing__FlowContext___vars].val; /* _vars on <var_f:FlowContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 659);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = standard___standard__HashMap___standard__abstract_collection__MapRead__has_key(var9, var_variable);
}
if (var12){
{
{ /* Inline typing#FlowContext#vars (var_f) on <var_f:FlowContext> */
var15 = var_f->attrs[COLOR_nit__typing__FlowContext___vars].val; /* _vars on <var_f:FlowContext> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 659);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var13, var_variable);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var16); /* Direct call array#Array#add on <var_res:Array[nullable MType]>*/
}
} else {
{
{ /* Inline flow#FlowContext#previous (var_f) on <var_f:FlowContext> */
var19 = var_f->attrs[COLOR_nit__flow__FlowContext___previous].val; /* _previous on <var_f:FlowContext> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 189);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all(var_todo, var17); /* Direct call array#Array#add_all on <var_todo:Array[FlowContext]>*/
}
{
{ /* Inline flow#FlowContext#loops (var_f) on <var_f:FlowContext> */
var22 = var_f->attrs[COLOR_nit__flow__FlowContext___loops].val; /* _loops on <var_f:FlowContext> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _loops");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 192);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add_all(var_todo, var20); /* Direct call array#Array#add_all on <var_todo:Array[FlowContext]>*/
}
{
{ /* Inline flow#FlowContext#previous (var_f) on <var_f:FlowContext> */
var25 = var_f->attrs[COLOR_nit__flow__FlowContext___previous].val; /* _previous on <var_f:FlowContext> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 189);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var23);
}
if (var26){
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var29 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var27); /* Direct call array#Array#add on <var_res:Array[nullable MType]>*/
}
} else {
}
}
} else {
goto BREAK_label30;
}
BREAK_label: (void)0;
}
BREAK_label30: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#APropdef#do_typing for (self: APropdef, ModelBuilder) */
void nit__typing___APropdef___do_typing(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_modelbuilder = p0;
RET_LABEL:;
}
/* method typing#APropdef#selfvariable= for (self: APropdef, nullable Variable) */
void nit__typing___APropdef___selfvariable_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__APropdef___selfvariable].val = p0; /* _selfvariable on <self:APropdef> */
RET_LABEL:;
}
/* method typing#AMethPropdef#do_typing for (self: AMethPropdef, ModelBuilder) */
void nit__typing___AMethPropdef___APropdef__do_typing(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable MPropDef */;
val* var11 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : TypeVisitor */;
val* var19 /* : MClassDef */;
val* var21 /* : MClassDef */;
val* var22 /* : MModule */;
val* var24 /* : MModule */;
val* var_v /* var v: TypeVisitor */;
val* var25 /* : Variable */;
val* var27 /* : Variable */;
val* var29 /* : nullable MPropDef */;
val* var31 /* : nullable MPropDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var32 /* : nullable MSignature */;
val* var34 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
long var_i /* var i: Int */;
long var41 /* : Int */;
long var_ /* var : Int */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var45 /* : Bool */;
val* var46 /* : Array[MParameter] */;
val* var48 /* : Array[MParameter] */;
val* var49 /* : nullable Object */;
val* var50 /* : MType */;
val* var52 /* : MType */;
val* var_mtype /* var mtype: MType */;
long var53 /* : Int */;
long var55 /* : Int */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : nullable ASignature */;
val* var61 /* : nullable ASignature */;
val* var62 /* : ANodes[AParam] */;
val* var64 /* : ANodes[AParam] */;
val* var65 /* : ANode */;
static val* varonce;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : FlatString */;
val* var69 /* : nullable MClass */;
val* var_arrayclass /* var arrayclass: nullable MClass */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
val* var76 /* : Array[MType] */;
val* var_77 /* var : Array[MType] */;
val* var78 /* : MClassType */;
val* var79 /* : nullable ASignature */;
val* var81 /* : nullable ASignature */;
val* var82 /* : ANodes[AParam] */;
val* var84 /* : ANodes[AParam] */;
val* var85 /* : ANode */;
val* var86 /* : nullable Variable */;
val* var88 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
val* var_other92 /* var other: nullable Object */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
long var96 /* : Int */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
short int var_103 /* var : Bool */;
short int var104 /* : Bool */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
val* var110 /* : nullable FlowContext */;
val* var112 /* : nullable FlowContext */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
short int var_115 /* var : Bool */;
val* var116 /* : nullable MType */;
val* var118 /* : nullable MType */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
val* var127 /* : FlatString */;
var_modelbuilder = p0;
{
{ /* Inline parser_nodes#AMethPropdef#n_block (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_nblock = var;
if (var_nblock == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nblock,((val*)NULL)) on <var_nblock:nullable AExpr> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nblock,var_other) on <var_nblock:nullable AExpr(AExpr)> */
var8 = var_nblock == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var11 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_mpropdef = var9;
if (var_mpropdef == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var17 = var_mpropdef == var_other;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
goto RET_LABEL;
} else {
}
var18 = NEW_nit__typing__TypeVisitor(&type_nit__typing__TypeVisitor);
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var21 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var19) on <var19:MClassDef> */
var24 = var19->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var19:MClassDef> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder_61d]))(var18, var_modelbuilder); /* modelbuilder= on <var18:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_nit__typing__TypeVisitor__mmodule_61d]))(var18, var22); /* mmodule= on <var18:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_nit__typing__TypeVisitor__mpropdef_61d]))(var18, var_mpropdef); /* mpropdef= on <var18:TypeVisitor>*/
}
{
((void(*)(val* self))(var18->class->vft[COLOR_standard__kernel__Object__init]))(var18); /* init on <var18:TypeVisitor>*/
}
var_v = var18;
{
{ /* Inline typing#TypeVisitor#selfvariable (var_v) on <var_v:TypeVisitor> */
var27 = var_v->attrs[COLOR_nit__typing__TypeVisitor___selfvariable].val; /* _selfvariable on <var_v:TypeVisitor> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 50);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline typing#APropdef#selfvariable= (self,var25) on <self:AMethPropdef> */
self->attrs[COLOR_nit__typing__APropdef___selfvariable].val = var25; /* _selfvariable on <self:AMethPropdef> */
RET_LABEL28:(void)0;
}
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var31 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 730);
fatal_exit(1);
}
var_mmethoddef = var29;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var34 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_msignature = var32;
if (var_msignature == NULL) {
var35 = 1; /* is null */
} else {
var35 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var40 = var_msignature == var_other;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
goto RET_LABEL;
} else {
}
var_i = 0l;
{
var41 = nit___nit__MSignature___arity(var_msignature);
}
var_ = var41;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var44 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var44)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var45 = var_i < var_;
var42 = var45;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
if (var42){
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var48 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var46, var_i);
}
{
{ /* Inline model#MParameter#mtype (var49) on <var49:nullable Object(MParameter)> */
var52 = var49->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var49:nullable Object(MParameter)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
var_mtype = var50;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var55 = var_msignature->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:nullable MSignature(MSignature)> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var53,var_i) on <var53:Int> */
var58 = var53 == var_i;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
if (var56){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var61 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
if (var59 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 736);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var59) on <var59:nullable ASignature> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var64 = var59->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <var59:nullable ASignature> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
var65 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(var62, var_i);
}
if (likely(varonce!=NULL)) {
var66 = varonce;
} else {
var67 = "Array";
var68 = standard___standard__NativeString___to_s_with_length(var67, 5l);
var66 = var68;
varonce = var66;
}
{
var69 = nit__typing___nit__typing__TypeVisitor___get_mclass(var_v, var65, var66);
}
var_arrayclass = var69;
if (var_arrayclass == NULL) {
var70 = 1; /* is null */
} else {
var70 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_arrayclass,((val*)NULL)) on <var_arrayclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_arrayclass,var_other) on <var_arrayclass:nullable MClass(MClass)> */
var75 = var_arrayclass == var_other;
var73 = var75;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
var70 = var71;
}
if (var70){
goto RET_LABEL;
} else {
}
var76 = NEW_standard__Array(&type_standard__Array__nit__MType);
{
standard___standard__Array___with_capacity(var76, 1l); /* Direct call array#Array#with_capacity on <var76:Array[MType]>*/
}
var_77 = var76;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_77, var_mtype); /* Direct call array#AbstractArray#push on <var_77:Array[MType]>*/
}
{
var78 = nit___nit__MClass___get_mtype(var_arrayclass, var_77);
}
var_mtype = var78;
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var81 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
if (var79 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 740);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var79) on <var79:nullable ASignature> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var84 = var79->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <var79:nullable ASignature> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
var85 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(var82, var_i);
}
{
{ /* Inline scope#AParam#variable (var85) on <var85:ANode(AParam)> */
var88 = var85->attrs[COLOR_nit__scope__AParam___variable].val; /* _variable on <var85:ANode(AParam)> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
var_variable = var86;
if (var_variable == NULL) {
var89 = 0; /* is null */
} else {
var89 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other92 = ((val*)NULL);
{
var93 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_variable, var_other92); /* == on <var_variable:nullable Variable(Variable)>*/
}
var94 = !var93;
var90 = var94;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
var89 = var90;
}
if (unlikely(!var89)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 741);
fatal_exit(1);
}
{
{ /* Inline typing#Variable#declared_type= (var_variable,var_mtype) on <var_variable:nullable Variable(Variable)> */
var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val = var_mtype; /* _declared_type on <var_variable:nullable Variable(Variable)> */
RET_LABEL95:(void)0;
}
}
{
var96 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var96;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
for(;;) {
{
{ /* Inline typing#TypeVisitor#dirty= (var_v,0) on <var_v:TypeVisitor> */
var_v->attrs[COLOR_nit__typing__TypeVisitor___dirty].s = 0; /* _dirty on <var_v:TypeVisitor> */
RET_LABEL97:(void)0;
}
}
{
nit__typing___nit__typing__TypeVisitor___visit_stmt(var_v, var_nblock); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline typing#TypeVisitor#has_loop (var_v) on <var_v:TypeVisitor> */
var101 = var_v->attrs[COLOR_nit__typing__TypeVisitor___has_loop].s; /* _has_loop on <var_v:TypeVisitor> */
var99 = var101;
RET_LABEL100:(void)0;
}
}
var102 = !var99;
var_103 = var102;
if (var102){
var98 = var_103;
} else {
{
{ /* Inline typing#TypeVisitor#dirty (var_v) on <var_v:TypeVisitor> */
var106 = var_v->attrs[COLOR_nit__typing__TypeVisitor___dirty].s; /* _dirty on <var_v:TypeVisitor> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
var107 = !var104;
var98 = var107;
}
if (var98){
goto BREAK_label108;
} else {
}
}
BREAK_label108: (void)0;
{
{ /* Inline flow#AExpr#after_flow_context (var_nblock) on <var_nblock:nullable AExpr(AExpr)> */
var112 = var_nblock->attrs[COLOR_nit__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_nblock:nullable AExpr(AExpr)> */
var110 = var112;
RET_LABEL111:(void)0;
}
}
if (var110 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 751);
fatal_exit(1);
} else {
var113 = nit___nit__FlowContext___is_unreachable(var110);
}
var114 = !var113;
var_115 = var114;
if (var114){
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var118 = var_msignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var116 = var118;
RET_LABEL117:(void)0;
}
}
if (var116 == NULL) {
var119 = 0; /* is null */
} else {
var119 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var116,((val*)NULL)) on <var116:nullable MType> */
var_other92 = ((val*)NULL);
{
var122 = ((short int(*)(val* self, val* p0))(var116->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var116, var_other92); /* == on <var116:nullable MType(MType)>*/
}
var123 = !var122;
var120 = var123;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
var119 = var120;
}
var109 = var119;
} else {
var109 = var_115;
}
if (var109){
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = "Error: reached end of function; expected `return` with a value.";
var127 = standard___standard__NativeString___to_s_with_length(var126, 63l);
var125 = var127;
varonce124 = var125;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var125); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method typing#AAttrPropdef#do_typing for (self: AAttrPropdef, ModelBuilder) */
void nit__typing___AAttrPropdef___APropdef__do_typing(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
short int var /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable MMethodDef */;
val* var6 /* : nullable MMethodDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
val* var14 /* : nullable MSignature */;
val* var16 /* : nullable MSignature */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : TypeVisitor */;
val* var24 /* : MClassDef */;
val* var26 /* : MClassDef */;
val* var27 /* : MModule */;
val* var29 /* : MModule */;
val* var_v /* var v: TypeVisitor */;
val* var30 /* : Variable */;
val* var32 /* : Variable */;
val* var34 /* : nullable AExpr */;
val* var36 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var_other40 /* var other: nullable Object */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : nullable MType */;
val* var45 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var46 /* : nullable MType */;
val* var47 /* : nullable AExpr */;
val* var49 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : nullable FlowContext */;
val* var57 /* : nullable FlowContext */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
static val* varonce;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : FlatString */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = !var;
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:AAttrPropdef> */
var6 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_mpropdef = var4;
if (var_mpropdef == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var13 = var_mpropdef == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
var_ = var8;
if (var8){
var7 = var_;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var16 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (var14 == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var14,((val*)NULL)) on <var14:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var14,var_other) on <var14:nullable MSignature(MSignature)> */
var22 = var14 == var_other;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
var7 = var17;
}
if (var7){
goto RET_LABEL;
} else {
}
var23 = NEW_nit__typing__TypeVisitor(&type_nit__typing__TypeVisitor);
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var26 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var24) on <var24:MClassDef> */
var29 = var24->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var24:MClassDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 550);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder_61d]))(var23, var_modelbuilder); /* modelbuilder= on <var23:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nit__typing__TypeVisitor__mmodule_61d]))(var23, var27); /* mmodule= on <var23:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nit__typing__TypeVisitor__mpropdef_61d]))(var23, var_mpropdef); /* mpropdef= on <var23:TypeVisitor>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_standard__kernel__Object__init]))(var23); /* init on <var23:TypeVisitor>*/
}
var_v = var23;
{
{ /* Inline typing#TypeVisitor#selfvariable (var_v) on <var_v:TypeVisitor> */
var32 = var_v->attrs[COLOR_nit__typing__TypeVisitor___selfvariable].val; /* _selfvariable on <var_v:TypeVisitor> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 50);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline typing#APropdef#selfvariable= (self,var30) on <self:AAttrPropdef> */
self->attrs[COLOR_nit__typing__APropdef___selfvariable].val = var30; /* _selfvariable on <self:AAttrPropdef> */
RET_LABEL33:(void)0;
}
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var36 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_nexpr = var34;
if (var_nexpr == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other40 = ((val*)NULL);
{
var41 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nexpr, var_other40); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
}
var42 = !var41;
var38 = var42;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (var37){
{
{ /* Inline modelize_property#AAttrPropdef#mtype (self) on <self:AAttrPropdef> */
var45 = self->attrs[COLOR_nit__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <self:AAttrPropdef> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_mtype = var43;
{
var46 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(var_v, var_nexpr, var_mtype);
}
} else {
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_block (self) on <self:AAttrPropdef> */
var49 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
var_nblock = var47;
if (var_nblock == NULL) {
var50 = 0; /* is null */
} else {
var50 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nblock,((val*)NULL)) on <var_nblock:nullable AExpr> */
var_other40 = ((val*)NULL);
{
var53 = ((short int(*)(val* self, val* p0))(var_nblock->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nblock, var_other40); /* == on <var_nblock:nullable AExpr(AExpr)>*/
}
var54 = !var53;
var51 = var54;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var50 = var51;
}
if (var50){
{
nit__typing___nit__typing__TypeVisitor___visit_stmt(var_v, var_nblock); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline flow#AExpr#after_flow_context (var_nblock) on <var_nblock:nullable AExpr(AExpr)> */
var57 = var_nblock->attrs[COLOR_nit__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_nblock:nullable AExpr(AExpr)> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (var55 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 777);
fatal_exit(1);
} else {
var58 = nit___nit__FlowContext___is_unreachable(var55);
}
var59 = !var58;
if (var59){
if (likely(varonce!=NULL)) {
var60 = varonce;
} else {
var61 = "Error: reached end of block; expected `return`.";
var62 = standard___standard__NativeString___to_s_with_length(var61, 47l);
var60 = var62;
varonce = var60;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var60); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method typing#AExpr#mtype for (self: AExpr): nullable MType */
val* nit__typing___AExpr___mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__typing__AExpr___mtype].val; /* _mtype on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#mtype= for (self: AExpr, nullable MType) */
void nit__typing___AExpr___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AExpr___mtype].val = p0; /* _mtype on <self:AExpr> */
RET_LABEL:;
}
/* method typing#AExpr#is_typed for (self: AExpr): Bool */
short int nit__typing___AExpr___is_typed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__typing__AExpr___is_typed].s; /* _is_typed on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#is_typed= for (self: AExpr, Bool) */
void nit__typing___AExpr___is_typed_61d(val* self, short int p0) {
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = p0; /* _is_typed on <self:AExpr> */
RET_LABEL:;
}
/* method typing#AExpr#implicit_cast_to for (self: AExpr): nullable MType */
val* nit__typing___AExpr___implicit_cast_to(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val; /* _implicit_cast_to on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#implicit_cast_to= for (self: AExpr, nullable MType) */
void nit__typing___AExpr___implicit_cast_to_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = p0; /* _implicit_cast_to on <self:AExpr> */
RET_LABEL:;
}
/* method typing#AExpr#its_variable for (self: AExpr): nullable Variable */
val* nit__typing___AExpr___its_variable(val* self) {
val* var /* : nullable Variable */;
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AExpr#accept_typing for (self: AExpr, TypeVisitor) */
void nit__typing___AExpr___accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
val* var6 /* : String */;
var_v = p0;
if (unlikely(varonce==NULL)) {
var = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "no implemented accept_typing for ";
var4 = standard___standard__NativeString___to_s_with_length(var3, 33l);
var2 = var4;
varonce1 = var2;
}
((struct instance_standard__NativeArray*)var)->values[0]=var2;
} else {
var = varonce;
varonce = NULL;
}
{
var5 = standard__string___Object___class_name(self);
}
((struct instance_standard__NativeArray*)var)->values[1]=var5;
{
var6 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var6); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
RET_LABEL:;
}
/* method typing#AExpr#comprehension for (self: AExpr): nullable AArrayExpr */
val* nit__typing___AExpr___comprehension(val* self) {
val* var /* : nullable AArrayExpr */;
val* var1 /* : nullable AArrayExpr */;
var1 = self->attrs[COLOR_nit__typing__AExpr___comprehension].val; /* _comprehension on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#comprehension= for (self: AExpr, nullable AArrayExpr) */
void nit__typing___AExpr___comprehension_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AExpr___comprehension].val = p0; /* _comprehension on <self:AExpr> */
RET_LABEL:;
}
/* method typing#ABlockExpr#accept_typing for (self: ABlockExpr, TypeVisitor) */
void nit__typing___ABlockExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
val* var_ /* var : ANodes[AExpr] */;
val* var3 /* : Iterator[ANode] */;
val* var_4 /* var : Iterator[AExpr] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: AExpr */;
var_v = p0;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1758);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = nit___nit__ANodes___standard__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[AExpr]>*/
}
if (var5){
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[AExpr]>*/
}
var_e = var6;
{
nit__typing___nit__typing__TypeVisitor___visit_stmt(var_v, var_e); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[AExpr]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_standard__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[AExpr]>*/
}
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:ABlockExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ABlockExpr> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ABlockExpr#mtype for (self: ABlockExpr): nullable MType */
val* nit__typing___ABlockExpr___AExpr__mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
short int var4 /* : Bool */;
val* var5 /* : ANodes[AExpr] */;
val* var7 /* : ANodes[AExpr] */;
val* var8 /* : nullable Object */;
val* var9 /* : nullable MType */;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1758);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(var1);
}
if (var4){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var7 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1758);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = standard___standard__SequenceRead___last(var5);
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_nit__typing__AExpr__mtype]))(var8); /* mtype on <var8:nullable Object(AExpr)>*/
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AVardeclExpr#accept_typing for (self: AVardeclExpr, TypeVisitor) */
void nit__typing___AVardeclExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable AType */;
val* var11 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var_mtype /* var mtype: nullable MType */;
val* var18 /* : nullable MType */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : nullable AExpr */;
val* var27 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var_other31 /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : nullable MType */;
val* var_etype /* var etype: nullable MType */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : ModelBuilder */;
val* var53 /* : ModelBuilder */;
static val* varonce;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : FlatString */;
val* var58 /* : NativeArray[String] */;
static val* varonce57;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : FlatString */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : FlatString */;
val* var67 /* : String */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var71 /* : nullable MType */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
val* var_decltype /* var decltype: nullable MType */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
short int var_ /* var : Bool */;
short int var85 /* : Bool */;
int cltype;
int idtype;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
val* var90 /* : nullable MClass */;
val* var_objclass /* var objclass: nullable MClass */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
val* var97 /* : MClassType */;
val* var99 /* : MClassType */;
val* var100 /* : MType */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
short int var104 /* : Bool */;
short int var106 /* : Bool */;
var_v = p0;
{
{ /* Inline scope#AVardeclExpr#variable (self) on <self:AVardeclExpr> */
var2 = self->attrs[COLOR_nit__scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_variable = var;
if (var_variable == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_variable,var_other) on <var_variable:nullable Variable(Variable)> */
var8 = var_variable == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AVardeclExpr#n_type (self) on <self:AVardeclExpr> */
var11 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:AVardeclExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_ntype = var9;
if (var_ntype == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ntype,var_other) on <var_ntype:nullable AType(AType)> */
var17 = var_ntype == var_other;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
var_mtype = ((val*)NULL);
} else {
{
var18 = nit__typing___nit__typing__TypeVisitor___resolve_mtype(var_v, var_ntype);
}
var_mtype = var18;
if (var_mtype == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var24 = var_mtype == var_other;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
goto RET_LABEL;
} else {
}
}
{
{ /* Inline parser_nodes#AVardeclExpr#n_expr (self) on <self:AVardeclExpr> */
var27 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_nexpr = var25;
if (var_nexpr == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other31 = ((val*)NULL);
{
var32 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nexpr, var_other31); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
}
var33 = !var32;
var29 = var33;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
if (var_mtype == NULL) {
var34 = 0; /* is null */
} else {
var34 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other31 = ((val*)NULL);
{
var37 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other31); /* == on <var_mtype:nullable MType(MType)>*/
}
var38 = !var37;
var35 = var38;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
{
var39 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(var_v, var_nexpr, var_mtype);
}
var_etype = var39;
if (var_etype == NULL) {
var40 = 0; /* <var_mtype:nullable MType(MType)> cannot be null */
} else {
{ /* Inline kernel#Object#== (var_etype,var_mtype) on <var_etype:nullable MType> */
var_other = var_mtype;
{
{ /* Inline kernel#Object#is_same_instance (var_etype,var_other) on <var_etype:nullable MType(MType)> */
var45 = var_etype == var_other;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
if (var40){
if (var_ntype == NULL) {
var46 = 0; /* is null */
} else {
var46 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other31 = ((val*)NULL);
{
var49 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ntype, var_other31); /* == on <var_ntype:nullable AType(AType)>*/
}
var50 = !var49;
var47 = var50;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
if (unlikely(!var46)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 853);
fatal_exit(1);
}
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var53 = var_v->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
if (likely(varonce!=NULL)) {
var54 = varonce;
} else {
var55 = "useless-type";
var56 = standard___standard__NativeString___to_s_with_length(var55, 12l);
var54 = var56;
varonce = var54;
}
if (unlikely(varonce57==NULL)) {
var58 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "Warning: useless type definition for variable `";
var62 = standard___standard__NativeString___to_s_with_length(var61, 47l);
var60 = var62;
varonce59 = var60;
}
((struct instance_standard__NativeArray*)var58)->values[0]=var60;
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "`";
var66 = standard___standard__NativeString___to_s_with_length(var65, 1l);
var64 = var66;
varonce63 = var64;
}
((struct instance_standard__NativeArray*)var58)->values[2]=var64;
} else {
var58 = varonce57;
varonce57 = NULL;
}
{
{ /* Inline scope#Variable#name (var_variable) on <var_variable:nullable Variable(Variable)> */
var69 = var_variable->attrs[COLOR_nit__scope__Variable___name].val; /* _name on <var_variable:nullable Variable(Variable)> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 35);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
((struct instance_standard__NativeArray*)var58)->values[1]=var67;
{
var70 = ((val*(*)(val* self))(var58->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var58); /* native_to_s on <var58:NativeArray[String]>*/
}
varonce57 = var58;
{
nit___nit__ModelBuilder___advice(var51, var_ntype, var54, var70); /* Direct call modelbuilder_base#ModelBuilder#advice on <var51:ModelBuilder>*/
}
} else {
}
} else {
{
var71 = nit__typing___nit__typing__TypeVisitor___visit_expr(var_v, var_nexpr);
}
var_mtype = var71;
if (var_mtype == NULL) {
var72 = 1; /* is null */
} else {
var72 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var77 = var_mtype == var_other;
var75 = var77;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var73 = var75;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
var72 = var73;
}
if (var72){
goto RET_LABEL;
} else {
}
}
} else {
}
var_decltype = var_mtype;
if (var_mtype == NULL) {
var79 = 1; /* is null */
} else {
var79 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var84 = var_mtype == var_other;
var82 = var84;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
var80 = var82;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
var79 = var80;
}
var_ = var79;
if (var79){
var78 = var_;
} else {
/* <var_mtype:nullable MType(MType)> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var85 = 0;
} else {
var85 = var_mtype->type->type_table[cltype] == idtype;
}
var78 = var85;
}
if (var78){
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "Object";
var89 = standard___standard__NativeString___to_s_with_length(var88, 6l);
var87 = var89;
varonce86 = var87;
}
{
var90 = nit__typing___nit__typing__TypeVisitor___get_mclass(var_v, self, var87);
}
var_objclass = var90;
if (var_objclass == NULL) {
var91 = 1; /* is null */
} else {
var91 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_objclass,((val*)NULL)) on <var_objclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_objclass,var_other) on <var_objclass:nullable MClass(MClass)> */
var96 = var_objclass == var_other;
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
var91 = var92;
}
if (var91){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#mclass_type (var_objclass) on <var_objclass:nullable MClass(MClass)> */
var99 = var_objclass->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_objclass:nullable MClass(MClass)> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 484);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
var100 = nit___nit__MType___as_nullable(var97);
}
var_decltype = var100;
if (var_mtype == NULL) {
var101 = 1; /* is null */
} else {
var101 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType(nullable MNullType)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MNullType(MNullType)> */
var106 = var_mtype == var_other;
var104 = var106;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
}
var102 = var104;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
var101 = var102;
}
if (var101){
var_mtype = var_decltype;
} else {
}
} else {
}
{
{ /* Inline typing#Variable#declared_type= (var_variable,var_decltype) on <var_variable:nullable Variable(Variable)> */
var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val = var_decltype; /* _declared_type on <var_variable:nullable Variable(Variable)> */
RET_LABEL107:(void)0;
}
}
{
nit__typing___nit__typing__TypeVisitor___set_variable(var_v, self, var_variable, var_mtype); /* Direct call typing#TypeVisitor#set_variable on <var_v:TypeVisitor>*/
}
{
{ /* Inline typing#AExpr#mtype= (self,var_mtype) on <self:AVardeclExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:AVardeclExpr> */
RET_LABEL108:(void)0;
}
}
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:AVardeclExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AVardeclExpr> */
RET_LABEL109:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AVarExpr#its_variable for (self: AVarExpr): nullable Variable */
val* nit__typing___AVarExpr___AExpr__its_variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
val* var3 /* : nullable Variable */;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarExpr> */
var3 = self->attrs[COLOR_nit__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AVarExpr#accept_typing for (self: AVarExpr, TypeVisitor) */
void nit__typing___AVarExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other13 /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
var_v = p0;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarExpr> */
var2 = self->attrs[COLOR_nit__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_variable = var;
if (var_variable == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_variable,var_other) on <var_variable:nullable Variable(Variable)> */
var8 = var_variable == var_other;
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
goto RET_LABEL;
} else {
}
{
var9 = nit__typing___nit__typing__TypeVisitor___get_variable(var_v, self, var_variable);
}
var_mtype = var9;
if (var_mtype == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other13 = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other13); /* == on <var_mtype:nullable MType(MType)>*/
}
var15 = !var14;
var11 = var15;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
} else {
}
{
{ /* Inline typing#AExpr#mtype= (self,var_mtype) on <self:AVarExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:AVarExpr> */
RET_LABEL16:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AVarAssignExpr#accept_typing for (self: AVarAssignExpr, TypeVisitor) */
void nit__typing___AVarAssignExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : AExpr */;
val* var10 /* : AExpr */;
val* var11 /* : nullable MType */;
val* var13 /* : nullable MType */;
val* var14 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
var_v = p0;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarAssignExpr> */
var2 = self->attrs[COLOR_nit__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarAssignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_variable = var;
if (var_variable == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_variable, var_other); /* == on <var_variable:nullable Variable(Variable)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 902);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:AVarAssignExpr> */
var10 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1995);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:nullable Variable(Variable)> */
var13 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:nullable Variable(Variable)> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(var_v, var8, var11);
}
var_mtype = var14;
{
nit__typing___nit__typing__TypeVisitor___set_variable(var_v, self, var_variable, var_mtype); /* Direct call typing#TypeVisitor#set_variable on <var_v:TypeVisitor>*/
}
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:AVarAssignExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AVarAssignExpr> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AReassignFormExpr#reassign_callsite for (self: AReassignFormExpr): nullable CallSite */
val* nit__typing___AReassignFormExpr___reassign_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AReassignFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AReassignFormExpr#reassign_callsite= for (self: AReassignFormExpr, nullable CallSite) */
void nit__typing___AReassignFormExpr___reassign_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AReassignFormExpr___reassign_callsite].val = p0; /* _reassign_callsite on <self:AReassignFormExpr> */
RET_LABEL:;
}
/* method typing#AReassignFormExpr#read_type for (self: AReassignFormExpr): nullable MType */
val* nit__typing___AReassignFormExpr___read_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nit__typing__AReassignFormExpr___read_type].val; /* _read_type on <self:AReassignFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AReassignFormExpr#read_type= for (self: AReassignFormExpr, nullable MType) */
void nit__typing___AReassignFormExpr___read_type_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AReassignFormExpr___read_type].val = p0; /* _read_type on <self:AReassignFormExpr> */
RET_LABEL:;
}
/* method typing#AReassignFormExpr#resolve_reassignment for (self: AReassignFormExpr, TypeVisitor, MType, MType): nullable MType */
val* nit__typing___AReassignFormExpr___resolve_reassignment(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var_v /* var v: TypeVisitor */;
val* var_readtype /* var readtype: MType */;
val* var_writetype /* var writetype: MType */;
val* var1 /* : AAssignOp */;
val* var3 /* : AAssignOp */;
val* var4 /* : String */;
val* var_reassign_name /* var reassign_name: String */;
val* var6 /* : AAssignOp */;
val* var8 /* : AAssignOp */;
val* var9 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var17 /* : MSignature */;
val* var19 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var20 /* : nullable MType */;
val* var22 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var23 /* : Bool */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var_ /* var : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var_other31 /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : AExpr */;
val* var36 /* : AExpr */;
val* var37 /* : Array[MParameter] */;
val* var39 /* : Array[MParameter] */;
val* var40 /* : nullable Object */;
val* var41 /* : MType */;
val* var43 /* : MType */;
val* var44 /* : nullable MType */;
val* var_value_type /* var value_type: nullable MType */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : nullable MType */;
var_v = p0;
var_readtype = p1;
var_writetype = p2;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_assign_op (self) on <self:AReassignFormExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AReassignFormExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2003);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_nit__parser_nodes__AAssignOp__operator]))(var1); /* operator on <var1:AAssignOp>*/
}
var_reassign_name = var4;
{
{ /* Inline typing#AReassignFormExpr#read_type= (self,var_readtype) on <self:AReassignFormExpr> */
self->attrs[COLOR_nit__typing__AReassignFormExpr___read_type].val = var_readtype; /* _read_type on <self:AReassignFormExpr> */
RET_LABEL5:(void)0;
}
}
{
{ /* Inline parser_nodes#AReassignFormExpr#n_assign_op (self) on <self:AReassignFormExpr> */
var8 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AReassignFormExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2003);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nit__typing___nit__typing__TypeVisitor___get_method(var_v, var6, var_readtype, var_reassign_name, 0);
}
var_callsite = var9;
if (var_callsite == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var15 = var_callsite == var_other;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite= (self,var_callsite) on <self:AReassignFormExpr> */
self->attrs[COLOR_nit__typing__AReassignFormExpr___reassign_callsite].val = var_callsite; /* _reassign_callsite on <self:AReassignFormExpr> */
RET_LABEL16:(void)0;
}
}
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var19 = var_callsite->attrs[COLOR_nit__typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 631);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_msignature = var17;
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var22 = var_msignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_rettype = var20;
{
var24 = nit___nit__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#== (var24,1l) on <var24:Int> */
var27 = var24 == 1l;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_ = var25;
if (var25){
if (var_rettype == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rettype,((val*)NULL)) on <var_rettype:nullable MType> */
var_other31 = ((val*)NULL);
{
var32 = ((short int(*)(val* self, val* p0))(var_rettype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_rettype, var_other31); /* == on <var_rettype:nullable MType(MType)>*/
}
var33 = !var32;
var29 = var33;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
var23 = var28;
} else {
var23 = var_;
}
if (unlikely(!var23)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 935);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:AReassignFormExpr> */
var36 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AReassignFormExpr> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2006);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var39 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = standard___standard__SequenceRead___Collection__first(var37);
}
{
{ /* Inline model#MParameter#mtype (var40) on <var40:nullable Object(MParameter)> */
var43 = var40->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var40:nullable Object(MParameter)> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(var_v, var34, var41);
}
var_value_type = var44;
if (var_value_type == NULL) {
var45 = 1; /* is null */
} else {
var45 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_value_type,((val*)NULL)) on <var_value_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_value_type,var_other) on <var_value_type:nullable MType(MType)> */
var50 = var_value_type == var_other;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
if (var45){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var51 = nit__typing___nit__typing__TypeVisitor___check_subtype(var_v, self, var_rettype, var_writetype, 0);
}
var = var_rettype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
