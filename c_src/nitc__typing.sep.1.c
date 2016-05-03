#include "nitc__typing.sep.0.h"
/* method typing#ToolContext#typing_phase for (self: ToolContext): Phase */
val* nitc__typing___ToolContext___typing_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitc__typing__ToolContext___typing_phase].val; /* _typing_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _typing_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 26);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypingPhase#process_npropdef for (self: TypingPhase, APropdef) */
void nitc__typing___nitc__typing__TypingPhase___nitc__phase__Phase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : ModelBuilder */;
var_npropdef = p0;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:TypingPhase> */
var2 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:TypingPhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 200);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__modelbuilder_base___ToolContext___modelbuilder(var);
}
{
((void(*)(val* self, val* p0))(var_npropdef->class->vft[COLOR_nitc__typing__APropdef__do_typing]))(var_npropdef, var3); /* do_typing on <var_npropdef:APropdef>*/
}
RET_LABEL:;
}
/* method typing#TypeVisitor#modelbuilder for (self: TypeVisitor): ModelBuilder */
val* nitc__typing___nitc__typing__TypeVisitor___modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
var1 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#modelbuilder= for (self: TypeVisitor, ModelBuilder) */
void nitc__typing___nitc__typing__TypeVisitor___modelbuilder_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val = p0; /* _modelbuilder on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#mmodule for (self: TypeVisitor): MModule */
val* nitc__typing___nitc__typing__TypeVisitor___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#mmodule= for (self: TypeVisitor, MModule) */
void nitc__typing___nitc__typing__TypeVisitor___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val = p0; /* _mmodule on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#anchor for (self: TypeVisitor): nullable MClassType */
val* nitc__typing___nitc__typing__TypeVisitor___anchor(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#anchor= for (self: TypeVisitor, nullable MClassType) */
void nitc__typing___nitc__typing__TypeVisitor___anchor_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val = p0; /* _anchor on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#mclassdef for (self: TypeVisitor): nullable MClassDef */
val* nitc__typing___nitc__typing__TypeVisitor___mclassdef(val* self) {
val* var /* : nullable MClassDef */;
val* var1 /* : nullable MClassDef */;
var1 = self->attrs[COLOR_nitc__typing__TypeVisitor___mclassdef].val; /* _mclassdef on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#mclassdef= for (self: TypeVisitor, nullable MClassDef) */
void nitc__typing___nitc__typing__TypeVisitor___mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__TypeVisitor___mclassdef].val = p0; /* _mclassdef on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#mpropdef for (self: TypeVisitor): nullable MPropDef */
val* nitc__typing___nitc__typing__TypeVisitor___mpropdef(val* self) {
val* var /* : nullable MPropDef */;
val* var1 /* : nullable MPropDef */;
var1 = self->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#mpropdef= for (self: TypeVisitor, nullable MPropDef) */
void nitc__typing___nitc__typing__TypeVisitor___mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val = p0; /* _mpropdef on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#selfvariable for (self: TypeVisitor): Variable */
val* nitc__typing___nitc__typing__TypeVisitor___selfvariable(val* self) {
val* var /* : Variable */;
val* var1 /* : Variable */;
var1 = self->attrs[COLOR_nitc__typing__TypeVisitor___selfvariable].val; /* _selfvariable on <self:TypeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 51);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#selfvariable= for (self: TypeVisitor, Variable) */
void nitc__typing___nitc__typing__TypeVisitor___selfvariable_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__TypeVisitor___selfvariable].val = p0; /* _selfvariable on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#is_toplevel_context for (self: TypeVisitor): Bool */
short int nitc__typing___nitc__typing__TypeVisitor___is_toplevel_context(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__typing__TypeVisitor___is_toplevel_context].s; /* _is_toplevel_context on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#is_toplevel_context= for (self: TypeVisitor, Bool) */
void nitc__typing___nitc__typing__TypeVisitor___is_toplevel_context_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__typing__TypeVisitor___is_toplevel_context].s = p0; /* _is_toplevel_context on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#init for (self: TypeVisitor) */
void nitc__typing___nitc__typing__TypeVisitor___core__kernel__Object__init(val* self) {
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
val* var23 /* : String */;
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
((void(*)(val* self))(self->class->vft[COLOR_nitc__typing___nitc__typing__TypeVisitor___core__kernel__Object__init]))(self); /* init on <self:TypeVisitor>*/
}
{
{ /* Inline typing#TypeVisitor#mpropdef (self) on <self:TypeVisitor> */
var2 = self->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <self:TypeVisitor> */
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
var6 = ((short int(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mpropdef, var_other); /* == on <var_mpropdef:nullable MPropDef(MPropDef)>*/
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
self->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val = var_mpropdef; /* _mpropdef on <self:TypeVisitor> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var11 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MPropDef(MPropDef)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_mclassdef = var9;
{
{ /* Inline typing#TypeVisitor#mclassdef= (self,var_mclassdef) on <self:TypeVisitor> */
self->attrs[COLOR_nitc__typing__TypeVisitor___mclassdef].val = var_mclassdef; /* _mclassdef on <self:TypeVisitor> */
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var15 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 579);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#anchor= (self,var13) on <self:TypeVisitor> */
self->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val = var13; /* _anchor on <self:TypeVisitor> */
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var19 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 576);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_mclass = var17;
var20 = NEW_nitc__Variable(&type_nitc__Variable);
if (likely(varonce!=NULL)) {
var21 = varonce;
} else {
var22 = "self";
var23 = core__flat___NativeString___to_s_full(var22, 4l, 4l);
var21 = var23;
varonce = var21;
}
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_nitc__scope__Variable__name_61d]))(var20, var21); /* name= on <var20:Variable>*/
}
{
((void(*)(val* self))(var20->class->vft[COLOR_core__kernel__Object__init]))(var20); /* init on <var20:Variable>*/
}
var_selfvariable = var20;
{
{ /* Inline typing#TypeVisitor#selfvariable= (self,var_selfvariable) on <self:TypeVisitor> */
self->attrs[COLOR_nitc__typing__TypeVisitor___selfvariable].val = var_selfvariable; /* _selfvariable on <self:TypeVisitor> */
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:MClass> */
var27 = var_mclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:MClass> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type= (var_selfvariable,var25) on <var_selfvariable:Variable> */
var_selfvariable->attrs[COLOR_nitc__typing__Variable___declared_type].val = var25; /* _declared_type on <var_selfvariable:Variable> */
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var31 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MPropDef(MPropDef)> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_mprop = var29;
/* <var_mprop:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var33 = 0;
} else {
var33 = var_mprop->type->type_table[cltype] == idtype;
}
var_ = var33;
if (var33){
{
{ /* Inline model#MMethod#is_new (var_mprop) on <var_mprop:MProperty(MMethod)> */
var36 = var_mprop->attrs[COLOR_nitc__model__MMethod___is_new].s; /* _is_new on <var_mprop:MProperty(MMethod)> */
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
self->attrs[COLOR_nitc__typing__TypeVisitor___is_toplevel_context].s = 1; /* _is_toplevel_context on <self:TypeVisitor> */
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
val* nitc__typing___nitc__typing__TypeVisitor___anchor_to(val* self, val* p0) {
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
var3 = self->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
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
var10 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var11 = !var10;
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 86);
fatal_exit(1);
}
var = var_mtype;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var14 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_mtype, var12, var_anchor); /* anchor_to on <var_mtype:MType>*/
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#is_subtype for (self: TypeVisitor, MType, MType): Bool */
short int nitc__typing___nitc__typing__TypeVisitor___is_subtype(val* self, val* p0, val* p1) {
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
var3 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#anchor (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc___nitc__MType___is_subtype(var_sub, var1, var4, var_sup);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#resolve_for for (self: TypeVisitor, MType, MType, Bool): MType */
val* nitc__typing___nitc__typing__TypeVisitor___resolve_for(val* self, val* p0, val* p1, short int p2) {
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
var3 = self->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = !var_for_self;
{
var8 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_mtype, var_subtype, var1, var4, var7); /* resolve_for on <var_mtype:MType>*/
}
var_res = var8;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#check_subtype for (self: TypeVisitor, ANode, MType, MType, Bool): nullable MType */
val* nitc__typing___nitc__typing__TypeVisitor___check_subtype(val* self, val* p0, val* p1, val* p2, short int p3) {
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
int cltype;
int idtype;
short int var6 /* : Bool */;
val* var7 /* : MType */;
val* var_u /* var u: MType */;
val* var8 /* : ModelBuilder */;
val* var10 /* : ModelBuilder */;
val* var11 /* : NativeArray[String] */;
static val* varonce;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var31 /* : String */;
val* var32 /* : ModelBuilder */;
val* var34 /* : ModelBuilder */;
val* var36 /* : NativeArray[String] */;
static val* varonce35;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
val* var40 /* : String */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : String */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var51 /* : String */;
var_node = p0;
var_sub = p1;
var_sup = p2;
var_autocast = p3;
{
var1 = nitc__typing___nitc__typing__TypeVisitor___is_subtype(self, var_sub, var_sup);
}
if (var1){
var = var_sub;
goto RET_LABEL;
} else {
}
var_ = var_autocast;
if (var_autocast){
{
var3 = nitc__typing___nitc__typing__TypeVisitor___anchor_to(self, var_sup);
}
{
var4 = nitc__typing___nitc__typing__TypeVisitor___is_subtype(self, var_sub, var3);
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
/* <var_sup:MType> isa MBottomType */
cltype = type_nitc__MBottomType.color;
idtype = type_nitc__MBottomType.id;
if(cltype >= var_sup->type->table_size) {
var5 = 0;
} else {
var5 = var_sup->type->type_table[cltype] == idtype;
}
if (var5){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var6 = ((short int(*)(val* self))(var_sub->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_sub); /* need_anchor on <var_sub:MType>*/
}
if (var6){
{
var7 = nitc__typing___nitc__typing__TypeVisitor___anchor_to(self, var_sub);
}
var_u = var7;
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var10 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var11 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Type Error: expected `";
var15 = core__flat___NativeString___to_s_full(var14, 22l, 22l);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[0]=var13;
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "`, got `";
var19 = core__flat___NativeString___to_s_full(var18, 8l, 8l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var11)->values[2]=var17;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = ": ";
var23 = core__flat___NativeString___to_s_full(var22, 2l, 2l);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var11)->values[4]=var21;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "`.";
var27 = core__flat___NativeString___to_s_full(var26, 2l, 2l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var11)->values[6]=var25;
} else {
var11 = varonce;
varonce = NULL;
}
{
var28 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sup); /* to_s on <var_sup:MType>*/
}
((struct instance_core__NativeArray*)var11)->values[1]=var28;
{
var29 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sub); /* to_s on <var_sub:MType>*/
}
((struct instance_core__NativeArray*)var11)->values[3]=var29;
{
var30 = ((val*(*)(val* self))(var_u->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_u); /* to_s on <var_u:MType>*/
}
((struct instance_core__NativeArray*)var11)->values[5]=var30;
{
var31 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
nitc___nitc__ModelBuilder___error(var8, var_node, var31); /* Direct call modelbuilder_base#ModelBuilder#error on <var8:ModelBuilder>*/
}
} else {
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var34 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (unlikely(varonce35==NULL)) {
var36 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "Type Error: expected `";
var40 = core__flat___NativeString___to_s_full(var39, 22l, 22l);
var38 = var40;
varonce37 = var38;
}
((struct instance_core__NativeArray*)var36)->values[0]=var38;
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "`, got `";
var44 = core__flat___NativeString___to_s_full(var43, 8l, 8l);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var36)->values[2]=var42;
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "`.";
var48 = core__flat___NativeString___to_s_full(var47, 2l, 2l);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var36)->values[4]=var46;
} else {
var36 = varonce35;
varonce35 = NULL;
}
{
var49 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sup); /* to_s on <var_sup:MType>*/
}
((struct instance_core__NativeArray*)var36)->values[1]=var49;
{
var50 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sub); /* to_s on <var_sub:MType>*/
}
((struct instance_core__NativeArray*)var36)->values[3]=var50;
{
var51 = ((val*(*)(val* self))(var36->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var36); /* native_to_s on <var36:NativeArray[String]>*/
}
varonce35 = var36;
{
nitc___nitc__ModelBuilder___error(var32, var_node, var51); /* Direct call modelbuilder_base#ModelBuilder#error on <var32:ModelBuilder>*/
}
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_stmt for (self: TypeVisitor, nullable AExpr) */
void nitc__typing___nitc__typing__TypeVisitor___visit_stmt(val* self, val* p0) {
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
((void(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_nitc__typing__AExpr__accept_typing]))(var_nexpr, self); /* accept_typing on <var_nexpr:nullable AExpr(AExpr)>*/
}
RET_LABEL:;
}
/* method typing#TypeVisitor#visit_expr for (self: TypeVisitor, AExpr): nullable MType */
val* nitc__typing___nitc__typing__TypeVisitor___visit_expr(val* self, val* p0) {
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
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : String */;
var_nexpr = p0;
{
((void(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_nitc__typing__AExpr__accept_typing]))(var_nexpr, self); /* accept_typing on <var_nexpr:AExpr>*/
}
{
var1 = ((val*(*)(val* self))(var_nexpr->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var_nexpr); /* mtype on <var_nexpr:AExpr>*/
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
var5 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other); /* == on <var_mtype:nullable MType(MType)>*/
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
var9 = var_nexpr->attrs[COLOR_nitc__typing__AExpr___is_typed].s; /* _is_typed on <var_nexpr:AExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = !var7;
if (var10){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var13 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var11) on <var11:ModelBuilder> */
var16 = var11->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var11:ModelBuilder> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var14) on <var14:ToolContext> */
var19 = var14->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <var14:ToolContext> */
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
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
var27 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var25) on <var25:ModelBuilder> */
var30 = var25->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var25:ModelBuilder> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#verbose_level (var28) on <var28:ToolContext> */
var33 = var28->attrs[COLOR_nitc__toolcontext__ToolContext___verbose_level].l; /* _verbose_level on <var28:ToolContext> */
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
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
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
var43 = core__flat___NativeString___to_s_full(var42, 28l, 28l);
var41 = var43;
varonce = var41;
}
{
nitc___nitc__ANode___debug(var_nexpr, var41); /* Direct call parser_nodes#ANode#debug on <var_nexpr:AExpr>*/
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
var47 = core__flat___NativeString___to_s_full(var46, 30l, 30l);
var45 = var47;
varonce44 = var45;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(self, var_nexpr, var45); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_expr_subtype for (self: TypeVisitor, AExpr, nullable MType): nullable MType */
val* nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(val* self, val* p0, val* p1) {
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
var1 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(self, var_nexpr);
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
var14 = nitc__typing___nitc__typing__TypeVisitor___check_subtype(self, var_nexpr, var_sub, var_sup, 1);
}
var_res = var14;
if (var_res == NULL) {
var15 = 1; /* <var_sub:nullable MType(MType)> cannot be null */
} else {
{ /* Inline kernel#Object#!= (var_res,var_sub) on <var_res:nullable MType> */
var_other18 = var_sub;
{
var19 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other18); /* == on <var_res:nullable MType(MType)>*/
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
var_nexpr->attrs[COLOR_nitc__typing__AExpr___implicit_cast_to].val = var_res; /* _implicit_cast_to on <var_nexpr:AExpr> */
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
val* nitc__typing___nitc__typing__TypeVisitor___visit_expr_bool(val* self, val* p0) {
val* var /* : nullable MType */;
val* var_nexpr /* var nexpr: AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : nullable MType */;
var_nexpr = p0;
{
var1 = nitc__typing___nitc__typing__TypeVisitor___type_bool(self, var_nexpr);
}
{
var2 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(self, var_nexpr, var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#check_expr_cast for (self: TypeVisitor, ANode, AExpr, AType): nullable MType */
val* nitc__typing___nitc__typing__TypeVisitor___check_expr_cast(val* self, val* p0, val* p1, val* p2) {
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
val* var10 /* : nullable MType */;
val* var_sup /* var sup: nullable MType */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : ModelBuilder */;
val* var24 /* : ModelBuilder */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var39 /* : String */;
short int var40 /* : Bool */;
val* var41 /* : ModelBuilder */;
val* var43 /* : ModelBuilder */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : String */;
val* var49 /* : NativeArray[String] */;
static val* varonce48;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var64 /* : String */;
var_node = p0;
var_nexpr = p1;
var_ntype = p2;
{
var1 = ((val*(*)(val* self))(var_nexpr->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var_nexpr); /* mtype on <var_nexpr:AExpr>*/
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
{ /* Inline modelbuilder_base#AType#mtype (var_ntype) on <var_ntype:AType> */
var10 = var_ntype->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var_ntype:AType> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_sup = var8;
if (var_sup == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sup,((val*)NULL)) on <var_sup:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_sup,var_other) on <var_sup:nullable MType(MType)> */
var16 = var_sup == var_other;
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
{ /* Inline kernel#Object#== (var_sup,var_sub) on <var_sup:nullable MType(MType)> */
var_other = var_sub;
{
{ /* Inline kernel#Object#is_same_instance (var_sup,var_other) on <var_sup:nullable MType(MType)> */
var21 = var_sup == var_other;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var24 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (likely(varonce!=NULL)) {
var25 = varonce;
} else {
var26 = "useless-type-test";
var27 = core__flat___NativeString___to_s_full(var26, 17l, 17l);
var25 = var27;
varonce = var25;
}
if (unlikely(varonce28==NULL)) {
var29 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "Warning: expression is already a `";
var33 = core__flat___NativeString___to_s_full(var32, 34l, 34l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var29)->values[0]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "`.";
var37 = core__flat___NativeString___to_s_full(var36, 2l, 2l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var29)->values[2]=var35;
} else {
var29 = varonce28;
varonce28 = NULL;
}
{
var38 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sup); /* to_s on <var_sup:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var29)->values[1]=var38;
{
var39 = ((val*(*)(val* self))(var29->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
nitc___nitc__ModelBuilder___warning(var22, var_node, var25, var39); /* Direct call modelbuilder_base#ModelBuilder#warning on <var22:ModelBuilder>*/
}
} else {
{
var40 = nitc__typing___nitc__typing__TypeVisitor___is_subtype(self, var_sub, var_sup);
}
if (var40){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var43 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "useless-type-test";
var47 = core__flat___NativeString___to_s_full(var46, 17l, 17l);
var45 = var47;
varonce44 = var45;
}
if (unlikely(varonce48==NULL)) {
var49 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "Warning: expression is already a `";
var53 = core__flat___NativeString___to_s_full(var52, 34l, 34l);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var49)->values[0]=var51;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "` since it is a `";
var57 = core__flat___NativeString___to_s_full(var56, 17l, 17l);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var49)->values[2]=var55;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "`.";
var61 = core__flat___NativeString___to_s_full(var60, 2l, 2l);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var49)->values[4]=var59;
} else {
var49 = varonce48;
varonce48 = NULL;
}
{
var62 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sup); /* to_s on <var_sup:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var49)->values[1]=var62;
{
var63 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sub); /* to_s on <var_sub:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var49)->values[3]=var63;
{
var64 = ((val*(*)(val* self))(var49->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var49); /* native_to_s on <var49:NativeArray[String]>*/
}
varonce48 = var49;
{
nitc___nitc__ModelBuilder___warning(var41, var_node, var45, var64); /* Direct call modelbuilder_base#ModelBuilder#warning on <var41:ModelBuilder>*/
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
short int nitc__typing___nitc__typing__TypeVisitor___can_be_null(val* self, val* p0) {
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
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
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
cltype4 = type_nitc__MNullType.color;
idtype5 = type_nitc__MNullType.id;
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
cltype7 = type_nitc__MFormalType.color;
idtype8 = type_nitc__MFormalType.id;
if(cltype7 >= var_mtype->type->table_size) {
var6 = 0;
} else {
var6 = var_mtype->type->type_table[cltype7] == idtype8;
}
if (var6){
{
var9 = nitc__typing___nitc__typing__TypeVisitor___anchor_to(self, var_mtype);
}
var_x = var9;
/* <var_x:MType> isa MNullableType */
cltype12 = type_nitc__MNullableType.color;
idtype13 = type_nitc__MNullableType.id;
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
cltype16 = type_nitc__MNullType.color;
idtype17 = type_nitc__MNullType.id;
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
short int nitc__typing___nitc__typing__TypeVisitor___check_can_be_null(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_anode /* var anode: ANode */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : ModelBuilder */;
val* var4 /* : ModelBuilder */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : MType */;
val* var_res /* var res: MType */;
val* var17 /* : ModelBuilder */;
val* var19 /* : ModelBuilder */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
val* var23 /* : String */;
val* var25 /* : NativeArray[String] */;
static val* varonce24;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var39 /* : String */;
val* var40 /* : String */;
val* var41 /* : ModelBuilder */;
val* var43 /* : ModelBuilder */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : String */;
val* var49 /* : NativeArray[String] */;
static val* varonce48;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var59 /* : String */;
var_anode = p0;
var_mtype = p1;
/* <var_mtype:MType> isa MNullType */
cltype = type_nitc__MNullType.color;
idtype = type_nitc__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var1 = 0;
} else {
var1 = var_mtype->type->type_table[cltype] == idtype;
}
if (var1){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var4 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "useless-null-test";
var7 = core__flat___NativeString___to_s_full(var6, 17l, 17l);
var5 = var7;
varonce = var5;
}
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "Warning: expression is always `null`.";
var11 = core__flat___NativeString___to_s_full(var10, 37l, 37l);
var9 = var11;
varonce8 = var9;
}
{
nitc___nitc__ModelBuilder___warning(var2, var_anode, var5, var9); /* Direct call modelbuilder_base#ModelBuilder#warning on <var2:ModelBuilder>*/
}
var = 1;
goto RET_LABEL;
} else {
}
{
var12 = nitc__typing___nitc__typing__TypeVisitor___can_be_null(self, var_mtype);
}
if (var12){
var = 1;
goto RET_LABEL;
} else {
}
/* <var_mtype:MType> isa MFormalType */
cltype14 = type_nitc__MFormalType.color;
idtype15 = type_nitc__MFormalType.id;
if(cltype14 >= var_mtype->type->table_size) {
var13 = 0;
} else {
var13 = var_mtype->type->type_table[cltype14] == idtype15;
}
if (var13){
{
var16 = nitc__typing___nitc__typing__TypeVisitor___anchor_to(self, var_mtype);
}
var_res = var16;
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var19 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "useless-null-test";
var23 = core__flat___NativeString___to_s_full(var22, 17l, 17l);
var21 = var23;
varonce20 = var21;
}
if (unlikely(varonce24==NULL)) {
var25 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "Warning: expression is not null, since it is a `";
var29 = core__flat___NativeString___to_s_full(var28, 48l, 48l);
var27 = var29;
varonce26 = var27;
}
((struct instance_core__NativeArray*)var25)->values[0]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = ": ";
var33 = core__flat___NativeString___to_s_full(var32, 2l, 2l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var25)->values[2]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "`.";
var37 = core__flat___NativeString___to_s_full(var36, 2l, 2l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var25)->values[4]=var35;
} else {
var25 = varonce24;
varonce24 = NULL;
}
{
var38 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType(MFormalType)>*/
}
((struct instance_core__NativeArray*)var25)->values[1]=var38;
{
var39 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:MType>*/
}
((struct instance_core__NativeArray*)var25)->values[3]=var39;
{
var40 = ((val*(*)(val* self))(var25->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
nitc___nitc__ModelBuilder___warning(var17, var_anode, var21, var40); /* Direct call modelbuilder_base#ModelBuilder#warning on <var17:ModelBuilder>*/
}
} else {
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var43 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "useless-null-test";
var47 = core__flat___NativeString___to_s_full(var46, 17l, 17l);
var45 = var47;
varonce44 = var45;
}
if (unlikely(varonce48==NULL)) {
var49 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "Warning: expression is not null, since it is a `";
var53 = core__flat___NativeString___to_s_full(var52, 48l, 48l);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var49)->values[0]=var51;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "`.";
var57 = core__flat___NativeString___to_s_full(var56, 2l, 2l);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var49)->values[2]=var55;
} else {
var49 = varonce48;
varonce48 = NULL;
}
{
var58 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var49)->values[1]=var58;
{
var59 = ((val*(*)(val* self))(var49->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var49); /* native_to_s on <var49:NativeArray[String]>*/
}
varonce48 = var49;
{
nitc___nitc__ModelBuilder___warning(var41, var_anode, var45, var59); /* Direct call modelbuilder_base#ModelBuilder#warning on <var41:ModelBuilder>*/
}
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#null_test for (self: TypeVisitor, ABinopExpr) */
void nitc__typing___nitc__typing__TypeVisitor___null_test(val* self, val* p0) {
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
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : MType */;
val* var29 /* : AExpr */;
val* var31 /* : AExpr */;
val* var32 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
val* var42 /* : nullable FlowContext */;
val* var44 /* : nullable FlowContext */;
val* var45 /* : FlowContext */;
val* var47 /* : FlowContext */;
val* var48 /* : nullable FlowContext */;
val* var50 /* : nullable FlowContext */;
val* var51 /* : FlowContext */;
val* var53 /* : FlowContext */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
val* var57 /* : nullable FlowContext */;
val* var59 /* : nullable FlowContext */;
val* var60 /* : FlowContext */;
val* var62 /* : FlowContext */;
val* var63 /* : nullable FlowContext */;
val* var65 /* : nullable FlowContext */;
val* var66 /* : FlowContext */;
val* var68 /* : FlowContext */;
var_anode = p0;
{
{ /* Inline parser_nodes#ASendExpr#n_expr (var_anode) on <var_anode:ABinopExpr> */
var2 = var_anode->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <var_anode:ABinopExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2022);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var); /* mtype on <var:AExpr>*/
}
var_mtype = var3;
{
{ /* Inline parser_nodes#ABinopExpr#n_expr2 (var_anode) on <var_anode:ABinopExpr> */
var6 = var_anode->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <var_anode:ABinopExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2033);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((val*(*)(val* self))(var4->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var4); /* mtype on <var4:AExpr>*/
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
cltype = type_nitc__MNullType.color;
idtype = type_nitc__MNullType.id;
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
var23 = nitc__typing___nitc__typing__TypeVisitor___can_be_null(self, var_mtype);
}
var24 = !var23;
if (var24){
goto RET_LABEL;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MNullType */
cltype26 = type_nitc__MNullType.color;
idtype27 = type_nitc__MNullType.id;
if(cltype26 >= var_mtype->type->table_size) {
var25 = 0;
} else {
var25 = var_mtype->type->type_table[cltype26] == idtype27;
}
if (var25){
var_mtype = ((val*)NULL);
} else {
{
var28 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__as_notnull]))(var_mtype); /* as_notnull on <var_mtype:nullable MType(MType)>*/
}
var_mtype = var28;
}
{
{ /* Inline parser_nodes#ASendExpr#n_expr (var_anode) on <var_anode:ABinopExpr> */
var31 = var_anode->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <var_anode:ABinopExpr> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2022);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = ((val*(*)(val* self))(var29->class->vft[COLOR_nitc__typing__AExpr__its_variable]))(var29); /* its_variable on <var29:AExpr>*/
}
var_variable = var32;
if (var_variable == NULL) {
var33 = 1; /* is null */
} else {
var33 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_variable,var_other) on <var_variable:nullable Variable(Variable)> */
var38 = var_variable == var_other;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
goto RET_LABEL;
} else {
}
/* <var_anode:ABinopExpr> isa AEqExpr */
cltype40 = type_nitc__AEqExpr.color;
idtype41 = type_nitc__AEqExpr.id;
if(cltype40 >= var_anode->type->table_size) {
var39 = 0;
} else {
var39 = var_anode->type->type_table[cltype40] == idtype41;
}
if (var39){
{
{ /* Inline flow#AExpr#after_flow_context (var_anode) on <var_anode:ABinopExpr(AEqExpr)> */
var44 = var_anode->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_anode:ABinopExpr(AEqExpr)> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (var42 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 265);
fatal_exit(1);
} else {
{ /* Inline flow#FlowContext#when_true (var42) on <var42:nullable FlowContext> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var47 = var42->attrs[COLOR_nitc__flow__FlowContext___when_true].val; /* _when_true on <var42:nullable FlowContext> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
nitc__typing___FlowContext___set_var(var45, self, var_variable, var_mtype2); /* Direct call typing#FlowContext#set_var on <var45:FlowContext>*/
}
{
{ /* Inline flow#AExpr#after_flow_context (var_anode) on <var_anode:ABinopExpr(AEqExpr)> */
var50 = var_anode->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_anode:ABinopExpr(AEqExpr)> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (var48 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 266);
fatal_exit(1);
} else {
{ /* Inline flow#FlowContext#when_false (var48) on <var48:nullable FlowContext> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 228);
fatal_exit(1);
}
var53 = var48->attrs[COLOR_nitc__flow__FlowContext___when_false].val; /* _when_false on <var48:nullable FlowContext> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 228);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
nitc__typing___FlowContext___set_var(var51, self, var_variable, var_mtype); /* Direct call typing#FlowContext#set_var on <var51:FlowContext>*/
}
} else {
/* <var_anode:ABinopExpr> isa ANeExpr */
cltype55 = type_nitc__ANeExpr.color;
idtype56 = type_nitc__ANeExpr.id;
if(cltype55 >= var_anode->type->table_size) {
var54 = 0;
} else {
var54 = var_anode->type->type_table[cltype55] == idtype56;
}
if (var54){
{
{ /* Inline flow#AExpr#after_flow_context (var_anode) on <var_anode:ABinopExpr(ANeExpr)> */
var59 = var_anode->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_anode:ABinopExpr(ANeExpr)> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (var57 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 268);
fatal_exit(1);
} else {
{ /* Inline flow#FlowContext#when_false (var57) on <var57:nullable FlowContext> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 228);
fatal_exit(1);
}
var62 = var57->attrs[COLOR_nitc__flow__FlowContext___when_false].val; /* _when_false on <var57:nullable FlowContext> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 228);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
nitc__typing___FlowContext___set_var(var60, self, var_variable, var_mtype2); /* Direct call typing#FlowContext#set_var on <var60:FlowContext>*/
}
{
{ /* Inline flow#AExpr#after_flow_context (var_anode) on <var_anode:ABinopExpr(ANeExpr)> */
var65 = var_anode->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_anode:ABinopExpr(ANeExpr)> */
var63 = var65;
RET_LABEL64:(void)0;
}
}
if (var63 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 269);
fatal_exit(1);
} else {
{ /* Inline flow#FlowContext#when_true (var63) on <var63:nullable FlowContext> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var68 = var63->attrs[COLOR_nitc__flow__FlowContext___when_true].val; /* _when_true on <var63:nullable FlowContext> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
nitc__typing___FlowContext___set_var(var66, self, var_variable, var_mtype); /* Direct call typing#FlowContext#set_var on <var66:FlowContext>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 271);
fatal_exit(1);
}
}
RET_LABEL:;
}
/* method typing#TypeVisitor#try_get_mproperty_by_name2 for (self: TypeVisitor, ANode, MType, String): nullable MProperty */
val* nitc__typing___nitc__typing__TypeVisitor___try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2) {
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
var3 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name2(var1, var_anode, var4, var_mtype, var_name);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#resolve_mtype for (self: TypeVisitor, AType): nullable MType */
val* nitc__typing___nitc__typing__TypeVisitor___resolve_mtype(val* self, val* p0) {
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
var3 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mclassdef (self) on <self:TypeVisitor> */
var9 = self->attrs[COLOR_nitc__typing__TypeVisitor___mclassdef].val; /* _mclassdef on <self:TypeVisitor> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc___nitc__ModelBuilder___resolve_mtype(var1, var4, var7, var_node);
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#try_get_mclass for (self: TypeVisitor, ANode, String): nullable MClass */
val* nitc__typing___nitc__typing__TypeVisitor___try_get_mclass(val* self, val* p0, val* p1) {
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
var3 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var1, var_node, var4, var_name);
}
var_mclass = var7;
var = var_mclass;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#get_mclass for (self: TypeVisitor, ANode, String): nullable MClass */
val* nitc__typing___nitc__typing__TypeVisitor___get_mclass(val* self, val* p0, val* p1) {
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
var3 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc___nitc__ModelBuilder___get_mclass_by_name(var1, var_node, var4, var_name);
}
var_mclass = var7;
var = var_mclass;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#type_bool for (self: TypeVisitor, ANode): nullable MType */
val* nitc__typing___nitc__typing__TypeVisitor___type_bool(val* self, val* p0) {
val* var /* : nullable MType */;
val* var_node /* var node: ANode */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : String */;
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
var3 = core__flat___NativeString___to_s_full(var2, 4l, 4l);
var1 = var3;
varonce = var1;
}
{
var4 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(self, var_node, var1);
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
var13 = var_mclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
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
val* nitc__typing___nitc__typing__TypeVisitor___get_method(val* self, val* p0, val* p1, val* p2, short int p3) {
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
val* var5 /* : String */;
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
val* var21 /* : String */;
short int var22 /* : Bool */;
short int var_ /* var : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : String */;
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
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : String */;
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
val* var68 /* : String */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
val* var76 /* : String */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : String */;
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
val* var92 /* : String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
val* var100 /* : String */;
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
val* var118 /* : String */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
val* var122 /* : String */;
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
val* var137 /* : String */;
val* var139 /* : NativeArray[String] */;
static val* varonce138;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
val* var143 /* : String */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
val* var147 /* : String */;
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
val* var166 /* : String */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
val* var170 /* : String */;
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
val* var183 /* : String */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
val* var187 /* : String */;
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
val* var241 /* : String */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
val* var245 /* : String */;
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
val* var287 /* : String */;
val* var289 /* : NativeArray[String] */;
static val* varonce288;
static val* varonce290;
val* var291 /* : String */;
char* var292 /* : NativeString */;
val* var293 /* : String */;
static val* varonce294;
val* var295 /* : String */;
char* var296 /* : NativeString */;
val* var297 /* : String */;
val* var298 /* : Array[String] */;
val* var300 /* : Array[String] */;
val* var301 /* : nullable Object */;
val* var302 /* : String */;
val* var303 /* : ModelBuilder */;
val* var305 /* : ModelBuilder */;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : NativeString */;
val* var309 /* : String */;
val* var311 /* : NativeArray[String] */;
static val* varonce310;
static val* varonce312;
val* var313 /* : String */;
char* var314 /* : NativeString */;
val* var315 /* : String */;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : NativeString */;
val* var319 /* : String */;
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
val* var339 /* : String */;
static val* varonce340;
val* var341 /* : String */;
char* var342 /* : NativeString */;
val* var343 /* : String */;
static val* varonce344;
val* var345 /* : String */;
char* var346 /* : NativeString */;
val* var347 /* : String */;
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
val* var363 /* : String */;
val* var365 /* : NativeArray[String] */;
static val* varonce364;
static val* varonce366;
val* var367 /* : String */;
char* var368 /* : NativeString */;
val* var369 /* : String */;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : NativeString */;
val* var373 /* : String */;
static val* varonce374;
val* var375 /* : String */;
char* var376 /* : NativeString */;
val* var377 /* : String */;
val* var378 /* : String */;
static val* varonce379;
val* var380 /* : String */;
char* var381 /* : NativeString */;
val* var382 /* : String */;
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
val* var432 /* : Location */;
val* var433 /* : MModule */;
val* var435 /* : MModule */;
val* var436 /* : nullable MClassType */;
val* var438 /* : nullable MClassType */;
val* var_callsite /* var callsite: CallSite */;
var_node = p0;
var_recvtype = p1;
var_name = p2;
var_recv_is_self = p3;
{
var1 = nitc__typing___nitc__typing__TypeVisitor___anchor_to(self, var_recvtype);
}
var_unsafe_type = var1;
/* <var_recvtype:MType> isa MNullType */
cltype = type_nitc__MNullType.color;
idtype = type_nitc__MNullType.id;
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
var5 = core__flat___NativeString___to_s_full(var4, 6l, 6l);
var3 = var5;
varonce = var3;
}
{
var6 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(self, var_node, var3);
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
var15 = var_objclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_objclass:nullable MClass(MClass)> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
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
var16 = nitc__typing___nitc__typing__TypeVisitor___try_get_mproperty_by_name2(self, var_node, var_unsafe_type, var_name);
}
var_mproperty = var16;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "new";
var21 = core__flat___NativeString___to_s_full(var20, 3l, 3l);
var19 = var21;
varonce18 = var19;
}
{
var22 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var19); /* == on <var_name:String>*/
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
var32 = core__flat___NativeString___to_s_full(var31, 4l, 4l);
var30 = var32;
varonce29 = var30;
}
var_name = var30;
{
var33 = nitc__typing___nitc__typing__TypeVisitor___try_get_mproperty_by_name2(self, var_node, var_unsafe_type, var_name);
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
var42 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (unlikely(varonce43==NULL)) {
var44 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "Error: method or variable `";
var48 = core__flat___NativeString___to_s_full(var47, 27l, 27l);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var44)->values[0]=var46;
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "` unknown in `";
var52 = core__flat___NativeString___to_s_full(var51, 14l, 14l);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var44)->values[2]=var50;
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "`.";
var56 = core__flat___NativeString___to_s_full(var55, 2l, 2l);
var54 = var56;
varonce53 = var54;
}
((struct instance_core__NativeArray*)var44)->values[4]=var54;
} else {
var44 = varonce43;
varonce43 = NULL;
}
((struct instance_core__NativeArray*)var44)->values[1]=var_name;
{
var57 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:MType>*/
}
((struct instance_core__NativeArray*)var44)->values[3]=var57;
{
var58 = ((val*(*)(val* self))(var44->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var44); /* native_to_s on <var44:NativeArray[String]>*/
}
varonce43 = var44;
{
nitc___nitc__ModelBuilder___error(var40, var_node, var58); /* Direct call modelbuilder_base#ModelBuilder#error on <var40:ModelBuilder>*/
}
} else {
{
var59 = ((short int(*)(val* self))(var_recvtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_recvtype); /* need_anchor on <var_recvtype:MType>*/
}
if (var59){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var62 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
if (unlikely(varonce63==NULL)) {
var64 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "Error: method `";
var68 = core__flat___NativeString___to_s_full(var67, 15l, 15l);
var66 = var68;
varonce65 = var66;
}
((struct instance_core__NativeArray*)var64)->values[0]=var66;
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "` does not exists in `";
var72 = core__flat___NativeString___to_s_full(var71, 22l, 22l);
var70 = var72;
varonce69 = var70;
}
((struct instance_core__NativeArray*)var64)->values[2]=var70;
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = ": ";
var76 = core__flat___NativeString___to_s_full(var75, 2l, 2l);
var74 = var76;
varonce73 = var74;
}
((struct instance_core__NativeArray*)var64)->values[4]=var74;
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "`.";
var80 = core__flat___NativeString___to_s_full(var79, 2l, 2l);
var78 = var80;
varonce77 = var78;
}
((struct instance_core__NativeArray*)var64)->values[6]=var78;
} else {
var64 = varonce63;
varonce63 = NULL;
}
((struct instance_core__NativeArray*)var64)->values[1]=var_name;
{
var81 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:MType>*/
}
((struct instance_core__NativeArray*)var64)->values[3]=var81;
{
var82 = ((val*(*)(val* self))(var_unsafe_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_unsafe_type); /* to_s on <var_unsafe_type:MType>*/
}
((struct instance_core__NativeArray*)var64)->values[5]=var82;
{
var83 = ((val*(*)(val* self))(var64->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var64); /* native_to_s on <var64:NativeArray[String]>*/
}
varonce63 = var64;
{
nitc___nitc__ModelBuilder___error(var60, var_node, var83); /* Direct call modelbuilder_base#ModelBuilder#error on <var60:ModelBuilder>*/
}
} else {
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var86 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
if (unlikely(varonce87==NULL)) {
var88 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "Error: method `";
var92 = core__flat___NativeString___to_s_full(var91, 15l, 15l);
var90 = var92;
varonce89 = var90;
}
((struct instance_core__NativeArray*)var88)->values[0]=var90;
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "` does not exists in `";
var96 = core__flat___NativeString___to_s_full(var95, 22l, 22l);
var94 = var96;
varonce93 = var94;
}
((struct instance_core__NativeArray*)var88)->values[2]=var94;
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "`.";
var100 = core__flat___NativeString___to_s_full(var99, 2l, 2l);
var98 = var100;
varonce97 = var98;
}
((struct instance_core__NativeArray*)var88)->values[4]=var98;
} else {
var88 = varonce87;
varonce87 = NULL;
}
((struct instance_core__NativeArray*)var88)->values[1]=var_name;
{
var101 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:MType>*/
}
((struct instance_core__NativeArray*)var88)->values[3]=var101;
{
var102 = ((val*(*)(val* self))(var88->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var88); /* native_to_s on <var88:NativeArray[String]>*/
}
varonce87 = var88;
{
nitc___nitc__ModelBuilder___error(var84, var_node, var102); /* Direct call modelbuilder_base#ModelBuilder#error on <var84:ModelBuilder>*/
}
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
/* <var_mproperty:nullable MProperty(MProperty)> isa MMethod */
cltype104 = type_nitc__MMethod.color;
idtype105 = type_nitc__MMethod.id;
if(cltype104 >= var_mproperty->type->table_size) {
var103 = 0;
} else {
var103 = var_mproperty->type->type_table[cltype104] == idtype105;
}
if (unlikely(!var103)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 332);
fatal_exit(1);
}
/* <var_recvtype:MType> isa MNullType */
cltype108 = type_nitc__MNullType.color;
idtype109 = type_nitc__MNullType.id;
if(cltype108 >= var_recvtype->type->table_size) {
var107 = 0;
} else {
var107 = var_recvtype->type->type_table[cltype108] == idtype109;
}
var_110 = var107;
if (var107){
{
var111 = nitc___nitc__MMethod___is_null_safe(var_mproperty);
}
var112 = !var111;
var106 = var112;
} else {
var106 = var_110;
}
if (var106){
if (unlikely(varonce113==NULL)) {
var114 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "Error: method `";
var118 = core__flat___NativeString___to_s_full(var117, 15l, 15l);
var116 = var118;
varonce115 = var116;
}
((struct instance_core__NativeArray*)var114)->values[0]=var116;
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "` called on `null`.";
var122 = core__flat___NativeString___to_s_full(var121, 19l, 19l);
var120 = var122;
varonce119 = var120;
}
((struct instance_core__NativeArray*)var114)->values[2]=var120;
} else {
var114 = varonce113;
varonce113 = NULL;
}
((struct instance_core__NativeArray*)var114)->values[1]=var_name;
{
var123 = ((val*(*)(val* self))(var114->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var114); /* native_to_s on <var114:NativeArray[String]>*/
}
varonce113 = var114;
{
nitc__typing___nitc__typing__TypeVisitor___error(self, var_node, var123); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
/* <var_unsafe_type:MType> isa MNullableType */
cltype126 = type_nitc__MNullableType.color;
idtype127 = type_nitc__MNullableType.id;
if(cltype126 >= var_unsafe_type->type->table_size) {
var125 = 0;
} else {
var125 = var_unsafe_type->type->type_table[cltype126] == idtype127;
}
var_128 = var125;
if (var125){
{
var129 = nitc___nitc__MMethod___is_null_safe(var_mproperty);
}
var130 = !var129;
var124 = var130;
} else {
var124 = var_128;
}
if (var124){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var133 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var133 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
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
var137 = core__flat___NativeString___to_s_full(var136, 16l, 16l);
var135 = var137;
varonce134 = var135;
}
if (unlikely(varonce138==NULL)) {
var139 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce140!=NULL)) {
var141 = varonce140;
} else {
var142 = "Warning: method call on a nullable receiver `";
var143 = core__flat___NativeString___to_s_full(var142, 45l, 45l);
var141 = var143;
varonce140 = var141;
}
((struct instance_core__NativeArray*)var139)->values[0]=var141;
if (likely(varonce144!=NULL)) {
var145 = varonce144;
} else {
var146 = "`.";
var147 = core__flat___NativeString___to_s_full(var146, 2l, 2l);
var145 = var147;
varonce144 = var145;
}
((struct instance_core__NativeArray*)var139)->values[2]=var145;
} else {
var139 = varonce138;
varonce138 = NULL;
}
{
var148 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:MType>*/
}
((struct instance_core__NativeArray*)var139)->values[1]=var148;
{
var149 = ((val*(*)(val* self))(var139->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var139); /* native_to_s on <var139:NativeArray[String]>*/
}
varonce138 = var139;
{
nitc___nitc__ModelBuilder___advice(var131, var_node, var135, var149); /* Direct call modelbuilder_base#ModelBuilder#advice on <var131:ModelBuilder>*/
}
} else {
}
}
{
{ /* Inline typing#TypeVisitor#is_toplevel_context (self) on <self:TypeVisitor> */
var154 = self->attrs[COLOR_nitc__typing__TypeVisitor___is_toplevel_context].s; /* _is_toplevel_context on <self:TypeVisitor> */
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
var159 = var_mproperty->attrs[COLOR_nitc__model__MMethod___is_toplevel].s; /* _is_toplevel on <var_mproperty:nullable MProperty(MMethod)> */
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
var162 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "Error: `";
var166 = core__flat___NativeString___to_s_full(var165, 8l, 8l);
var164 = var166;
varonce163 = var164;
}
((struct instance_core__NativeArray*)var162)->values[0]=var164;
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = "` is not a top-level method, thus need a receiver.";
var170 = core__flat___NativeString___to_s_full(var169, 50l, 50l);
var168 = var170;
varonce167 = var168;
}
((struct instance_core__NativeArray*)var162)->values[2]=var168;
} else {
var162 = varonce161;
varonce161 = NULL;
}
((struct instance_core__NativeArray*)var162)->values[1]=var_name;
{
var171 = ((val*(*)(val* self))(var162->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var162); /* native_to_s on <var162:NativeArray[String]>*/
}
varonce161 = var162;
{
nitc__typing___nitc__typing__TypeVisitor___error(self, var_node, var171); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
} else {
}
var173 = !var_recv_is_self;
var_174 = var173;
if (var173){
{
{ /* Inline model#MMethod#is_toplevel (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var177 = var_mproperty->attrs[COLOR_nitc__model__MMethod___is_toplevel].s; /* _is_toplevel on <var_mproperty:nullable MProperty(MMethod)> */
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
var179 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "Error: cannot call `";
var183 = core__flat___NativeString___to_s_full(var182, 20l, 20l);
var181 = var183;
varonce180 = var181;
}
((struct instance_core__NativeArray*)var179)->values[0]=var181;
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = "`, a top-level method, with a receiver.";
var187 = core__flat___NativeString___to_s_full(var186, 39l, 39l);
var185 = var187;
varonce184 = var185;
}
((struct instance_core__NativeArray*)var179)->values[2]=var185;
} else {
var179 = varonce178;
varonce178 = NULL;
}
((struct instance_core__NativeArray*)var179)->values[1]=var_name;
{
var188 = ((val*(*)(val* self))(var179->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var179); /* native_to_s on <var179:NativeArray[String]>*/
}
varonce178 = var179;
{
nitc__typing___nitc__typing__TypeVisitor___error(self, var_node, var188); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
} else {
}
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var194 = var_mproperty->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mproperty:nullable MProperty(MMethod)> */
if (unlikely(var194 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1967);
fatal_exit(1);
}
var192 = var194;
RET_LABEL193:(void)0;
}
}
var195 = glob_sys;
{
var196 = nitc__model_base___core__Sys___protected_visibility(var195);
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
var207 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var207 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var205 = var207;
RET_LABEL206:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var210 = var_mproperty->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mproperty:nullable MProperty(MMethod)> */
if (unlikely(var210 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1946);
fatal_exit(1);
}
var208 = var210;
RET_LABEL209:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var208) on <var208:MClassDef> */
var213 = var208->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var208:MClassDef> */
if (unlikely(var213 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var211 = var213;
RET_LABEL212:(void)0;
}
}
{
var214 = nitc___nitc__MModule___visibility_for(var205, var211);
}
var215 = glob_sys;
{
var216 = nitc__model_base___core__Sys___intrude_visibility(var215);
}
{
var217 = nitc___nitc__MVisibility___core__kernel__Comparable___60d(var214, var216);
}
var190 = var217;
} else {
var190 = var_204;
}
var_218 = var190;
if (var190){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var221 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var219) on <var219:ModelBuilder> */
var224 = var219->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var219:ModelBuilder> */
if (unlikely(var224 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var222 = var224;
RET_LABEL223:(void)0;
}
}
{
{ /* Inline modelbuilder#ToolContext#opt_ignore_visibility (var222) on <var222:ToolContext> */
var227 = var222->attrs[COLOR_nitc__modelbuilder__ToolContext___opt_ignore_visibility].val; /* _opt_ignore_visibility on <var222:ToolContext> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_ignore_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder, 27);
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
var235 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var235 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var233 = var235;
RET_LABEL234:(void)0;
}
}
if (unlikely(varonce236==NULL)) {
var237 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce238!=NULL)) {
var239 = varonce238;
} else {
var240 = "Error: method `";
var241 = core__flat___NativeString___to_s_full(var240, 15l, 15l);
var239 = var241;
varonce238 = var239;
}
((struct instance_core__NativeArray*)var237)->values[0]=var239;
if (likely(varonce242!=NULL)) {
var243 = varonce242;
} else {
var244 = "` is protected and can only accessed by `self`.";
var245 = core__flat___NativeString___to_s_full(var244, 47l, 47l);
var243 = var245;
varonce242 = var243;
}
((struct instance_core__NativeArray*)var237)->values[2]=var243;
} else {
var237 = varonce236;
varonce236 = NULL;
}
((struct instance_core__NativeArray*)var237)->values[1]=var_name;
{
var246 = ((val*(*)(val* self))(var237->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var237); /* native_to_s on <var237:NativeArray[String]>*/
}
varonce236 = var237;
{
nitc___nitc__ModelBuilder___error(var233, var_node, var246); /* Direct call modelbuilder_base#ModelBuilder#error on <var233:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline mdoc#MEntity#deprecation (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var249 = var_mproperty->attrs[COLOR_nitc__mdoc__MEntity___deprecation].val; /* _deprecation on <var_mproperty:nullable MProperty(MMethod)> */
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
var255 = ((short int(*)(val* self, val* p0))(var_info->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_info, var_other254); /* == on <var_info:nullable MDeprecationInfo(MDeprecationInfo)>*/
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
var260 = self->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <self:TypeVisitor> */
var258 = var260;
RET_LABEL259:(void)0;
}
}
if (var258 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 355);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var258) on <var258:nullable MPropDef> */
if (unlikely(var258 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var263 = var258->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var258:nullable MPropDef> */
if (unlikely(var263 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2230);
fatal_exit(1);
}
var261 = var263;
RET_LABEL262:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#deprecation (var261) on <var261:MProperty> */
var266 = var261->attrs[COLOR_nitc__mdoc__MEntity___deprecation].val; /* _deprecation on <var261:MProperty> */
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
var275 = var_info->attrs[COLOR_nitc__mdoc__MDeprecationInfo___mdoc].val; /* _mdoc on <var_info:nullable MDeprecationInfo(MDeprecationInfo)> */
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
var279 = ((short int(*)(val* self, val* p0))(var_mdoc->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mdoc, var_other254); /* == on <var_mdoc:nullable MDoc(MDoc)>*/
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
var283 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var283 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
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
var287 = core__flat___NativeString___to_s_full(var286, 17l, 17l);
var285 = var287;
varonce284 = var285;
}
if (unlikely(varonce288==NULL)) {
var289 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce290!=NULL)) {
var291 = varonce290;
} else {
var292 = "Deprecation Warning: method `";
var293 = core__flat___NativeString___to_s_full(var292, 29l, 29l);
var291 = var293;
varonce290 = var291;
}
((struct instance_core__NativeArray*)var289)->values[0]=var291;
if (likely(varonce294!=NULL)) {
var295 = varonce294;
} else {
var296 = "` is deprecated: ";
var297 = core__flat___NativeString___to_s_full(var296, 17l, 17l);
var295 = var297;
varonce294 = var295;
}
((struct instance_core__NativeArray*)var289)->values[2]=var295;
} else {
var289 = varonce288;
varonce288 = NULL;
}
((struct instance_core__NativeArray*)var289)->values[1]=var_name;
{
{ /* Inline mdoc#MDoc#content (var_mdoc) on <var_mdoc:nullable MDoc(MDoc)> */
var300 = var_mdoc->attrs[COLOR_nitc__mdoc__MDoc___content].val; /* _content on <var_mdoc:nullable MDoc(MDoc)> */
if (unlikely(var300 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mdoc, 23);
fatal_exit(1);
}
var298 = var300;
RET_LABEL299:(void)0;
}
}
{
var301 = core___core__SequenceRead___Collection__first(var298);
}
((struct instance_core__NativeArray*)var289)->values[3]=var301;
{
var302 = ((val*(*)(val* self))(var289->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var289); /* native_to_s on <var289:NativeArray[String]>*/
}
varonce288 = var289;
{
nitc___nitc__ModelBuilder___warning(var281, var_node, var285, var302); /* Direct call modelbuilder_base#ModelBuilder#warning on <var281:ModelBuilder>*/
}
} else {
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var305 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var305 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
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
var309 = core__flat___NativeString___to_s_full(var308, 17l, 17l);
var307 = var309;
varonce306 = var307;
}
if (unlikely(varonce310==NULL)) {
var311 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce312!=NULL)) {
var313 = varonce312;
} else {
var314 = "Deprecation Warning: method `";
var315 = core__flat___NativeString___to_s_full(var314, 29l, 29l);
var313 = var315;
varonce312 = var313;
}
((struct instance_core__NativeArray*)var311)->values[0]=var313;
if (likely(varonce316!=NULL)) {
var317 = varonce316;
} else {
var318 = "` is deprecated.";
var319 = core__flat___NativeString___to_s_full(var318, 16l, 16l);
var317 = var319;
varonce316 = var317;
}
((struct instance_core__NativeArray*)var311)->values[2]=var317;
} else {
var311 = varonce310;
varonce310 = NULL;
}
((struct instance_core__NativeArray*)var311)->values[1]=var_name;
{
var320 = ((val*(*)(val* self))(var311->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var311); /* native_to_s on <var311:NativeArray[String]>*/
}
varonce310 = var311;
{
nitc___nitc__ModelBuilder___warning(var303, var_node, var307, var320); /* Direct call modelbuilder_base#ModelBuilder#warning on <var303:ModelBuilder>*/
}
}
} else {
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var323 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var323 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var321 = var323;
RET_LABEL322:(void)0;
}
}
{
var324 = nitc___nitc__MProperty___lookup_definitions(var_mproperty, var321, var_unsafe_type);
}
var_propdefs = var324;
{
{ /* Inline array#AbstractArrayRead#length (var_propdefs) on <var_propdefs:Array[MMethodDef]> */
var327 = var_propdefs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_propdefs:Array[MMethodDef]> */
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
var333 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var333 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var331 = var333;
RET_LABEL332:(void)0;
}
}
if (unlikely(varonce334==NULL)) {
var335 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce336!=NULL)) {
var337 = varonce336;
} else {
var338 = "Type Error: no definition found for property `";
var339 = core__flat___NativeString___to_s_full(var338, 46l, 46l);
var337 = var339;
varonce336 = var337;
}
((struct instance_core__NativeArray*)var335)->values[0]=var337;
if (likely(varonce340!=NULL)) {
var341 = varonce340;
} else {
var342 = "` in `";
var343 = core__flat___NativeString___to_s_full(var342, 6l, 6l);
var341 = var343;
varonce340 = var341;
}
((struct instance_core__NativeArray*)var335)->values[2]=var341;
if (likely(varonce344!=NULL)) {
var345 = varonce344;
} else {
var346 = "`.";
var347 = core__flat___NativeString___to_s_full(var346, 2l, 2l);
var345 = var347;
varonce344 = var345;
}
((struct instance_core__NativeArray*)var335)->values[4]=var345;
} else {
var335 = varonce334;
varonce334 = NULL;
}
((struct instance_core__NativeArray*)var335)->values[1]=var_name;
{
var348 = ((val*(*)(val* self))(var_unsafe_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_unsafe_type); /* to_s on <var_unsafe_type:MType>*/
}
((struct instance_core__NativeArray*)var335)->values[3]=var348;
{
var349 = ((val*(*)(val* self))(var335->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var335); /* native_to_s on <var335:NativeArray[String]>*/
}
varonce334 = var335;
{
nitc___nitc__ModelBuilder___error(var331, var_node, var349); /* Direct call modelbuilder_base#ModelBuilder#error on <var331:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_propdefs) on <var_propdefs:Array[MMethodDef]> */
var352 = var_propdefs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_propdefs:Array[MMethodDef]> */
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
var356 = core___core__SequenceRead___Collection__first(var_propdefs);
}
var_mpropdef = var356;
} else {
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var359 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var359 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
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
var363 = core__flat___NativeString___to_s_full(var362, 17l, 17l);
var361 = var363;
varonce360 = var361;
}
if (unlikely(varonce364==NULL)) {
var365 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce366!=NULL)) {
var367 = varonce366;
} else {
var368 = "Warning: conflicting property definitions for property `";
var369 = core__flat___NativeString___to_s_full(var368, 56l, 56l);
var367 = var369;
varonce366 = var367;
}
((struct instance_core__NativeArray*)var365)->values[0]=var367;
if (likely(varonce370!=NULL)) {
var371 = varonce370;
} else {
var372 = "` in `";
var373 = core__flat___NativeString___to_s_full(var372, 6l, 6l);
var371 = var373;
varonce370 = var371;
}
((struct instance_core__NativeArray*)var365)->values[2]=var371;
if (likely(varonce374!=NULL)) {
var375 = varonce374;
} else {
var376 = "`: ";
var377 = core__flat___NativeString___to_s_full(var376, 3l, 3l);
var375 = var377;
varonce374 = var375;
}
((struct instance_core__NativeArray*)var365)->values[4]=var375;
} else {
var365 = varonce364;
varonce364 = NULL;
}
((struct instance_core__NativeArray*)var365)->values[1]=var_name;
{
var378 = ((val*(*)(val* self))(var_unsafe_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_unsafe_type); /* to_s on <var_unsafe_type:MType>*/
}
((struct instance_core__NativeArray*)var365)->values[3]=var378;
if (likely(varonce379!=NULL)) {
var380 = varonce379;
} else {
var381 = " ";
var382 = core__flat___NativeString___to_s_full(var381, 1l, 1l);
var380 = var382;
varonce379 = var380;
}
{
var383 = core__abstract_text___Collection___join(var_propdefs, var380);
}
((struct instance_core__NativeArray*)var365)->values[5]=var383;
{
var384 = ((val*(*)(val* self))(var365->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var365); /* native_to_s on <var365:NativeArray[String]>*/
}
varonce364 = var365;
{
nitc___nitc__ModelBuilder___warning(var357, var_node, var361, var384); /* Direct call modelbuilder_base#ModelBuilder#warning on <var357:ModelBuilder>*/
}
{
{ /* Inline model#MProperty#intro (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var387 = var_mproperty->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_mproperty:nullable MProperty(MMethod)> */
if (unlikely(var387 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1986);
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
var391 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_mpropdef:nullable Object(MMethodDef)> */
var389 = var391;
RET_LABEL390:(void)0;
}
}
if (var389!=NULL) {
var388 = var389;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable Object(MMethodDef)> */
var394 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable Object(MMethodDef)> */
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
var401 = nitc__typing___nitc__typing__TypeVisitor___resolve_for(self, var_msignature, var_recvtype, var_recv_is_self);
}
/* <var401:MType> isa MSignature */
cltype403 = type_nitc__MSignature.color;
idtype404 = type_nitc__MSignature.id;
if(cltype403 >= var401->type->table_size) {
var402 = 0;
} else {
var402 = var401->type->type_table[cltype403] == idtype404;
}
if (unlikely(!var402)) {
var_class_name = var401 == NULL ? "null" : var401->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MSignature", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 379);
fatal_exit(1);
}
var_msignature = var401;
var_erasure_cast = 0;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable Object(MMethodDef)> */
var407 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable Object(MMethodDef)> */
var405 = var407;
RET_LABEL406:(void)0;
}
}
if (var405 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 382);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var405) on <var405:nullable MSignature> */
if (unlikely(var405 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1795);
fatal_exit(1);
}
var410 = var405->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var405:nullable MSignature> */
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
var417 = ((short int(*)(val* self, val* p0))(var_rettype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rettype, var_other254); /* == on <var_rettype:nullable MType(MType)>*/
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
var419 = ((val*(*)(val* self))(var_rettype->class->vft[COLOR_nitc__model__MType__undecorate]))(var_rettype); /* undecorate on <var_rettype:nullable MType(MType)>*/
}
var_rettype = var419;
/* <var_rettype:nullable MType(MType)> isa MParameterType */
cltype421 = type_nitc__MParameterType.color;
idtype422 = type_nitc__MParameterType.id;
if(cltype421 >= var_rettype->type->table_size) {
var420 = 0;
} else {
var420 = var_rettype->type->type_table[cltype421] == idtype422;
}
if (var420){
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var425 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
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
var429 = ((short int(*)(val* self, val* p0))(var_erased_rettype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_erased_rettype, var_other254); /* == on <var_erased_rettype:nullable MType(MType)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 387);
fatal_exit(1);
}
var_erasure_cast = 1;
} else {
}
} else {
}
var431 = NEW_nitc__CallSite(&type_nitc__CallSite);
{
var432 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nitc__parser_nodes__ANode__hot_location]))(var_node); /* hot_location on <var_node:ANode>*/
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var435 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var435 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var433 = var435;
RET_LABEL434:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#anchor (self) on <self:TypeVisitor> */
var438 = self->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
var436 = var438;
RET_LABEL437:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var431->class->vft[COLOR_nitc__typing__CallSite__location_61d]))(var431, var432); /* location= on <var431:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var431->class->vft[COLOR_nitc__typing__CallSite__recv_61d]))(var431, var_recvtype); /* recv= on <var431:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var431->class->vft[COLOR_nitc__typing__CallSite__mmodule_61d]))(var431, var433); /* mmodule= on <var431:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var431->class->vft[COLOR_nitc__typing__CallSite__anchor_61d]))(var431, var436); /* anchor= on <var431:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var431->class->vft[COLOR_nitc__typing__CallSite__recv_is_self_61d]))(var431, var_recv_is_self); /* recv_is_self= on <var431:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var431->class->vft[COLOR_nitc__typing__CallSite__mproperty_61d]))(var431, var_mproperty); /* mproperty= on <var431:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var431->class->vft[COLOR_nitc__typing__CallSite__mpropdef_61d]))(var431, var_mpropdef); /* mpropdef= on <var431:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var431->class->vft[COLOR_nitc__typing__CallSite__msignature_61d]))(var431, var_msignature); /* msignature= on <var431:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var431->class->vft[COLOR_nitc__typing__CallSite__erasure_cast_61d]))(var431, var_erasure_cast); /* erasure_cast= on <var431:CallSite>*/
}
{
((void(*)(val* self))(var431->class->vft[COLOR_core__kernel__Object__init]))(var431); /* init on <var431:CallSite>*/
}
var_callsite = var431;
var = var_callsite;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#try_get_method for (self: TypeVisitor, ANode, MType, String, Bool): nullable CallSite */
val* nitc__typing___nitc__typing__TypeVisitor___try_get_method(val* self, val* p0, val* p1, val* p2, short int p3) {
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
var1 = nitc__typing___nitc__typing__TypeVisitor___anchor_to(self, var_recvtype);
}
var_unsafe_type = var1;
{
var2 = nitc__typing___nitc__typing__TypeVisitor___try_get_mproperty_by_name2(self, var_node, var_unsafe_type, var_name);
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
var9 = nitc__typing___nitc__typing__TypeVisitor___get_method(self, var_node, var_recvtype, var_name, var_recv_is_self);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#check_signature for (self: TypeVisitor, ANode, Array[AExpr], MProperty, MSignature): nullable SignatureMap */
val* nitc__typing___nitc__typing__TypeVisitor___check_signature(val* self, val* p0, val* p1, val* p2, val* p3) {
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
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : String */;
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
long var63 /* : Int */;
long var64 /* : Int */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
short int var71 /* : Bool */;
val* var72 /* : ModelBuilder */;
val* var74 /* : ModelBuilder */;
val* var76 /* : NativeArray[String] */;
static val* varonce75;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
val* var88 /* : String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
val* var92 /* : String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : String */;
long var97 /* : Int */;
val* var98 /* : String */;
val* var99 /* : String */;
val* var100 /* : String */;
long var101 /* : Int */;
long var103 /* : Int */;
val* var104 /* : String */;
val* var105 /* : String */;
val* var106 /* : String */;
val* var107 /* : SignatureMap */;
val* var_map /* var map: SignatureMap */;
val* var109 /* : String */;
val* var111 /* : String */;
val* var112 /* : SequenceRead[Char] */;
val* var113 /* : nullable Object */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
uint32_t var117 /* : Char */;
short int var_last_is_padded /* var last_is_padded: Bool */;
long var118 /* : Int */;
long var120 /* : Int */;
long var_nbargs /* var nbargs: Int */;
long var121 /* : Int */;
short int var123 /* : Bool */;
int cltype124;
int idtype125;
const char* var_class_name126;
long var127 /* : Int */;
val* var128 /* : nullable Object */;
short int var129 /* : Bool */;
int cltype130;
int idtype131;
short int var132 /* : Bool */;
val* var133 /* : ArrayMap[Int, Int] */;
val* var135 /* : ArrayMap[Int, Int] */;
long var136 /* : Int */;
long var137 /* : Int */;
short int var139 /* : Bool */;
int cltype140;
int idtype141;
const char* var_class_name142;
long var143 /* : Int */;
long var144 /* : Int */;
long var146 /* : Int */;
long var147 /* : Int */;
short int var149 /* : Bool */;
int cltype150;
int idtype151;
const char* var_class_name152;
long var153 /* : Int */;
val* var154 /* : nullable Object */;
val* var155 /* : nullable Object */;
val* var156 /* : nullable Object */;
val* var157 /* : Array[MParameter] */;
val* var159 /* : Array[MParameter] */;
val* var160 /* : nullable Object */;
val* var161 /* : MType */;
val* var163 /* : MType */;
val* var164 /* : nullable MType */;
long var_i /* var i: Int */;
long var165 /* : Int */;
long var167 /* : Int */;
long var_ /* var : Int */;
short int var168 /* : Bool */;
short int var170 /* : Bool */;
int cltype171;
int idtype172;
const char* var_class_name173;
short int var174 /* : Bool */;
val* var175 /* : nullable Object */;
val* var_e /* var e: AExpr */;
short int var176 /* : Bool */;
int cltype177;
int idtype178;
short int var179 /* : Bool */;
val* var181 /* : TId */;
val* var183 /* : TId */;
val* var184 /* : String */;
val* var_name /* var name: String */;
val* var185 /* : nullable MParameter */;
val* var_param /* var param: nullable MParameter */;
short int var186 /* : Bool */;
short int var187 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var189 /* : Bool */;
short int var191 /* : Bool */;
val* var192 /* : ModelBuilder */;
val* var194 /* : ModelBuilder */;
val* var195 /* : TId */;
val* var197 /* : TId */;
val* var199 /* : NativeArray[String] */;
static val* varonce198;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : NativeString */;
val* var203 /* : String */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : NativeString */;
val* var207 /* : String */;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : NativeString */;
val* var211 /* : String */;
val* var212 /* : String */;
val* var213 /* : String */;
val* var214 /* : String */;
val* var215 /* : Array[MParameter] */;
val* var217 /* : Array[MParameter] */;
long var218 /* : Int */;
long var_idx /* var idx: Int */;
val* var219 /* : ArrayMap[Int, Int] */;
val* var221 /* : ArrayMap[Int, Int] */;
val* var222 /* : nullable Object */;
val* var223 /* : nullable Object */;
val* var_prev /* var prev: nullable Int */;
short int var224 /* : Bool */;
short int var225 /* : Bool */;
short int var227 /* : Bool */;
short int var228 /* : Bool */;
val* var229 /* : ModelBuilder */;
val* var231 /* : ModelBuilder */;
val* var233 /* : NativeArray[String] */;
static val* varonce232;
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : NativeString */;
val* var237 /* : String */;
static val* varonce238;
val* var239 /* : String */;
char* var240 /* : NativeString */;
val* var241 /* : String */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
val* var245 /* : String */;
static val* varonce246;
val* var247 /* : String */;
char* var248 /* : NativeString */;
val* var249 /* : String */;
val* var250 /* : String */;
long var251 /* : Int */;
val* var252 /* : String */;
val* var253 /* : String */;
val* var254 /* : String */;
val* var255 /* : ArrayMap[Int, Int] */;
val* var257 /* : ArrayMap[Int, Int] */;
val* var258 /* : nullable Object */;
val* var259 /* : nullable Object */;
val* var260 /* : AExpr */;
val* var262 /* : AExpr */;
val* var263 /* : MType */;
val* var265 /* : MType */;
val* var266 /* : nullable MType */;
long var268 /* : Int */;
long var_min_arity /* var min_arity: Int */;
long var269 /* : Int */;
long var271 /* : Int */;
long var272 /* : Int */;
long var273 /* : Int */;
short int var275 /* : Bool */;
int cltype276;
int idtype277;
const char* var_class_name278;
long var279 /* : Int */;
long var_vararg_decl /* var vararg_decl: Int */;
long var_j /* var j: Int */;
long var_i280 /* var i: Int */;
long var281 /* : Int */;
long var_282 /* var : Int */;
short int var283 /* : Bool */;
short int var285 /* : Bool */;
int cltype286;
int idtype287;
const char* var_class_name288;
short int var289 /* : Bool */;
val* var291 /* : ArrayMap[Int, Int] */;
val* var293 /* : ArrayMap[Int, Int] */;
short int var294 /* : Bool */;
val* var295 /* : nullable Object */;
val* var297 /* : Array[MParameter] */;
val* var299 /* : Array[MParameter] */;
val* var300 /* : nullable Object */;
val* var_param301 /* var param: MParameter */;
short int var302 /* : Bool */;
short int var303 /* : Bool */;
short int var305 /* : Bool */;
int cltype306;
int idtype307;
const char* var_class_name308;
short int var309 /* : Bool */;
short int var_310 /* var : Bool */;
val* var311 /* : nullable Object */;
short int var312 /* : Bool */;
int cltype313;
int idtype314;
long var315 /* : Int */;
short int var317 /* : Bool */;
int cltype318;
int idtype319;
const char* var_class_name320;
long var321 /* : Int */;
short int var323 /* : Bool */;
short int var325 /* : Bool */;
int cltype326;
int idtype327;
const char* var_class_name328;
short int var329 /* : Bool */;
val* var330 /* : MType */;
val* var332 /* : MType */;
short int var333 /* : Bool */;
int cltype334;
int idtype335;
short int var336 /* : Bool */;
long var337 /* : Int */;
short int var339 /* : Bool */;
int cltype340;
int idtype341;
const char* var_class_name342;
long var343 /* : Int */;
long var344 /* : Int */;
short int var346 /* : Bool */;
int cltype347;
int idtype348;
const char* var_class_name349;
long var350 /* : Int */;
val* var351 /* : nullable Object */;
val* var_arg /* var arg: AExpr */;
val* var352 /* : ArrayMap[Int, Int] */;
val* var354 /* : ArrayMap[Int, Int] */;
val* var355 /* : nullable Object */;
val* var356 /* : nullable Object */;
long var357 /* : Int */;
short int var359 /* : Bool */;
int cltype360;
int idtype361;
const char* var_class_name362;
long var363 /* : Int */;
short int var364 /* : Bool */;
short int var366 /* : Bool */;
long var367 /* : Int */;
short int var369 /* : Bool */;
int cltype370;
int idtype371;
const char* var_class_name372;
long var373 /* : Int */;
short int var374 /* : Bool */;
short int var376 /* : Bool */;
short int var377 /* : Bool */;
val* var378 /* : MType */;
val* var380 /* : MType */;
val* var_paramtype /* var paramtype: MType */;
val* var381 /* : nullable MType */;
short int var382 /* : Bool */;
long var383 /* : Int */;
short int var384 /* : Bool */;
short int var386 /* : Bool */;
int cltype387;
int idtype388;
const char* var_class_name389;
short int var390 /* : Bool */;
long var391 /* : Int */;
short int var393 /* : Bool */;
int cltype394;
int idtype395;
const char* var_class_name396;
long var397 /* : Int */;
long var398 /* : Int */;
short int var399 /* : Bool */;
short int var401 /* : Bool */;
int cltype402;
int idtype403;
const char* var_class_name404;
short int var405 /* : Bool */;
val* var406 /* : ModelBuilder */;
val* var408 /* : ModelBuilder */;
val* var410 /* : NativeArray[String] */;
static val* varonce409;
static val* varonce411;
val* var412 /* : String */;
char* var413 /* : NativeString */;
val* var414 /* : String */;
static val* varonce415;
val* var416 /* : String */;
char* var417 /* : NativeString */;
val* var418 /* : String */;
static val* varonce419;
val* var420 /* : String */;
char* var421 /* : NativeString */;
val* var422 /* : String */;
static val* varonce423;
val* var424 /* : String */;
char* var425 /* : NativeString */;
val* var426 /* : String */;
static val* varonce427;
val* var428 /* : String */;
char* var429 /* : NativeString */;
val* var430 /* : String */;
val* var431 /* : String */;
val* var432 /* : String */;
val* var433 /* : String */;
long var434 /* : Int */;
long var436 /* : Int */;
val* var437 /* : String */;
val* var438 /* : String */;
val* var439 /* : String */;
val* var440 /* : ModelBuilder */;
val* var442 /* : ModelBuilder */;
val* var444 /* : NativeArray[String] */;
static val* varonce443;
static val* varonce445;
val* var446 /* : String */;
char* var447 /* : NativeString */;
val* var448 /* : String */;
static val* varonce449;
val* var450 /* : String */;
char* var451 /* : NativeString */;
val* var452 /* : String */;
static val* varonce453;
val* var454 /* : String */;
char* var455 /* : NativeString */;
val* var456 /* : String */;
static val* varonce457;
val* var458 /* : String */;
char* var459 /* : NativeString */;
val* var460 /* : String */;
static val* varonce461;
val* var462 /* : String */;
char* var463 /* : NativeString */;
val* var464 /* : String */;
val* var465 /* : String */;
val* var466 /* : String */;
val* var467 /* : String */;
long var468 /* : Int */;
long var470 /* : Int */;
val* var471 /* : String */;
val* var472 /* : String */;
val* var473 /* : String */;
short int var474 /* : Bool */;
short int var476 /* : Bool */;
int cltype477;
int idtype478;
const char* var_class_name479;
short int var480 /* : Bool */;
val* var481 /* : Array[MParameter] */;
val* var483 /* : Array[MParameter] */;
val* var484 /* : nullable Object */;
val* var485 /* : MType */;
val* var487 /* : MType */;
val* var_paramtype488 /* var paramtype: MType */;
val* var489 /* : nullable Object */;
val* var_first /* var first: AExpr */;
short int var490 /* : Bool */;
short int var492 /* : Bool */;
val* var493 /* : Array[MParameter] */;
val* var495 /* : Array[MParameter] */;
val* var496 /* : nullable Object */;
short int var497 /* : Bool */;
short int var498 /* : Bool */;
long var499 /* : Int */;
short int var501 /* : Bool */;
int cltype502;
int idtype503;
const char* var_class_name504;
long var505 /* : Int */;
long var_i507 /* var i: Int */;
long var508 /* : Int */;
short int var510 /* : Bool */;
int cltype511;
int idtype512;
const char* var_class_name513;
long var514 /* : Int */;
long var_515 /* var : Int */;
short int var516 /* : Bool */;
short int var518 /* : Bool */;
int cltype519;
int idtype520;
const char* var_class_name521;
short int var522 /* : Bool */;
val* var524 /* : nullable Object */;
val* var525 /* : nullable MType */;
long var526 /* : Int */;
var_node = p0;
var_args = p1;
var_mproperty = p2;
var_msignature = p3;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var3 = var_msignature->attrs[COLOR_nitc__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
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
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
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
var10 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#< (var8,var11) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
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
var21 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var22 = NEW_core__NativeArray(10l, &type_core__NativeArray__core__String);
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "Error: expected at least ";
var26 = core__flat___NativeString___to_s_full(var25, 25l, 25l);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var22)->values[0]=var24;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = " argument(s) for `";
var30 = core__flat___NativeString___to_s_full(var29, 18l, 18l);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var22)->values[2]=var28;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "`; got ";
var34 = core__flat___NativeString___to_s_full(var33, 7l, 7l);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var22)->values[5]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = ". See introduction at `";
var38 = core__flat___NativeString___to_s_full(var37, 23l, 23l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var22)->values[7]=var36;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "`.";
var42 = core__flat___NativeString___to_s_full(var41, 2l, 2l);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var22)->values[9]=var40;
} else {
var22 = varonce;
varonce = NULL;
}
{
var43 = nitc___nitc__MSignature___arity(var_msignature);
}
var44 = core__flat___Int___core__abstract_text__Object__to_s(var43);
((struct instance_core__NativeArray*)var22)->values[1]=var44;
{
var45 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_core__NativeArray*)var22)->values[3]=var45;
{
var46 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_core__NativeArray*)var22)->values[4]=var46;
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var49 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
var50 = core__flat___Int___core__abstract_text__Object__to_s(var47);
((struct instance_core__NativeArray*)var22)->values[6]=var50;
{
var51 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mproperty);
}
((struct instance_core__NativeArray*)var22)->values[8]=var51;
{
var52 = ((val*(*)(val* self))(var22->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var22); /* native_to_s on <var22:NativeArray[String]>*/
}
varonce = var22;
{
nitc___nitc__ModelBuilder___error(var19, var_node, var52); /* Direct call modelbuilder_base#ModelBuilder#error on <var19:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var55 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
var56 = nitc___nitc__MSignature___arity(var_msignature);
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
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var63 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
var64 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#> (var61,var64) on <var61:Int> */
/* Covariant cast for argument 0 (i) <var64:Int> isa OTHER */
/* <var64:Int> isa OTHER */
var67 = 1; /* easy <var64:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var71 = var61 > var64;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
if (var65){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var74 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
if (unlikely(varonce75==NULL)) {
var76 = NEW_core__NativeArray(10l, &type_core__NativeArray__core__String);
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "Error: expected ";
var80 = core__flat___NativeString___to_s_full(var79, 16l, 16l);
var78 = var80;
varonce77 = var78;
}
((struct instance_core__NativeArray*)var76)->values[0]=var78;
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = " argument(s) for `";
var84 = core__flat___NativeString___to_s_full(var83, 18l, 18l);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var76)->values[2]=var82;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "`; got ";
var88 = core__flat___NativeString___to_s_full(var87, 7l, 7l);
var86 = var88;
varonce85 = var86;
}
((struct instance_core__NativeArray*)var76)->values[5]=var86;
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = ". See introduction at `";
var92 = core__flat___NativeString___to_s_full(var91, 23l, 23l);
var90 = var92;
varonce89 = var90;
}
((struct instance_core__NativeArray*)var76)->values[7]=var90;
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "`.";
var96 = core__flat___NativeString___to_s_full(var95, 2l, 2l);
var94 = var96;
varonce93 = var94;
}
((struct instance_core__NativeArray*)var76)->values[9]=var94;
} else {
var76 = varonce75;
varonce75 = NULL;
}
{
var97 = nitc___nitc__MSignature___arity(var_msignature);
}
var98 = core__flat___Int___core__abstract_text__Object__to_s(var97);
((struct instance_core__NativeArray*)var76)->values[1]=var98;
{
var99 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_core__NativeArray*)var76)->values[3]=var99;
{
var100 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_core__NativeArray*)var76)->values[4]=var100;
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var103 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var101 = var103;
RET_LABEL102:(void)0;
}
}
var104 = core__flat___Int___core__abstract_text__Object__to_s(var101);
((struct instance_core__NativeArray*)var76)->values[6]=var104;
{
var105 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mproperty);
}
((struct instance_core__NativeArray*)var76)->values[8]=var105;
{
var106 = ((val*(*)(val* self))(var76->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var76); /* native_to_s on <var76:NativeArray[String]>*/
}
varonce75 = var76;
{
nitc___nitc__ModelBuilder___error(var72, var_node, var106); /* Direct call modelbuilder_base#ModelBuilder#error on <var72:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
} else {
}
}
var107 = NEW_nitc__SignatureMap(&type_nitc__SignatureMap);
{
{ /* Inline kernel#Object#init (var107) on <var107:SignatureMap> */
RET_LABEL108:(void)0;
}
}
var_map = var107;
{
{ /* Inline model#MProperty#name (var_mproperty) on <var_mproperty:MProperty> */
var111 = var_mproperty->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mproperty:MProperty> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1951);
fatal_exit(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
var112 = ((val*(*)(val* self))(var109->class->vft[COLOR_core__abstract_text__Text__chars]))(var109); /* chars on <var109:String>*/
}
{
var113 = ((val*(*)(val* self))((((long)var112&3)?class_info[((long)var112&3)]:var112->class)->vft[COLOR_core__abstract_collection__SequenceRead__last]))(var112); /* last on <var112:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var113,'=') on <var113:nullable Object(Char)> */
var117 = (uint32_t)((long)(var113)>>2);
var116 = var117 == '=';
var114 = var116;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
}
var_last_is_padded = var114;
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var120 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var118 = var120;
RET_LABEL119:(void)0;
}
}
var_nbargs = var118;
if (var_last_is_padded){
{
{ /* Inline kernel#Int#- (var_nbargs,1l) on <var_nbargs:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var123 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var123)) {
var_class_name126 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name126);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var127 = var_nbargs - 1l;
var121 = var127;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
var_nbargs = var121;
{
var128 = core___core__SequenceRead___last(var_args);
}
/* <var128:nullable Object(AExpr)> isa ANamedargExpr */
cltype130 = type_nitc__ANamedargExpr.color;
idtype131 = type_nitc__ANamedargExpr.id;
if(cltype130 >= var128->type->table_size) {
var129 = 0;
} else {
var129 = var128->type->type_table[cltype130] == idtype131;
}
var132 = !var129;
if (unlikely(!var132)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 438);
fatal_exit(1);
}
{
{ /* Inline typing#SignatureMap#map (var_map) on <var_map:SignatureMap> */
var135 = var_map->attrs[COLOR_nitc__typing__SignatureMap___map].val; /* _map on <var_map:SignatureMap> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 628);
fatal_exit(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
var136 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#- (var136,1l) on <var136:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var139 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var139)) {
var_class_name142 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name142);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var143 = var136 - 1l;
var137 = var143;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var146 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var144,1l) on <var144:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var149 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var149)) {
var_class_name152 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name152);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var153 = var144 - 1l;
var147 = var153;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
}
{
var154 = (val*)(var137<<2|1);
var155 = (val*)(var147<<2|1);
core___core__ArrayMap___core__abstract_collection__Map___91d_93d_61d(var133, var154, var155); /* Direct call array#ArrayMap#[]= on <var133:ArrayMap[Int, Int]>*/
}
{
var156 = core___core__SequenceRead___last(var_args);
}
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var159 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
var160 = core___core__SequenceRead___last(var157);
}
{
{ /* Inline model#MParameter#mtype (var160) on <var160:nullable Object(MParameter)> */
var163 = var160->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var160:nullable Object(MParameter)> */
if (unlikely(var163 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1900);
fatal_exit(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
{
var164 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(self, var156, var161);
}
} else {
}
var_i = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var167 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var165 = var167;
RET_LABEL166:(void)0;
}
}
var_ = var165;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var170 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var170)) {
var_class_name173 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name173);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var174 = var_i < var_;
var168 = var174;
goto RET_LABEL169;
RET_LABEL169:(void)0;
}
}
if (var168){
} else {
goto BREAK_label;
}
{
var175 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var_i);
}
var_e = var175;
/* <var_e:AExpr> isa ANamedargExpr */
cltype177 = type_nitc__ANamedargExpr.color;
idtype178 = type_nitc__ANamedargExpr.id;
if(cltype177 >= var_e->type->table_size) {
var176 = 0;
} else {
var176 = var_e->type->type_table[cltype177] == idtype178;
}
var179 = !var176;
if (var179){
goto BREAK_label180;
} else {
}
{
{ /* Inline parser_nodes#ANamedargExpr#n_id (var_e) on <var_e:AExpr(ANamedargExpr)> */
var183 = var_e->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_id].val; /* _n_id on <var_e:AExpr(ANamedargExpr)> */
if (unlikely(var183 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2641);
fatal_exit(1);
}
var181 = var183;
RET_LABEL182:(void)0;
}
}
{
var184 = nitc__lexer_work___Token___text(var181);
}
var_name = var184;
{
var185 = nitc___nitc__MSignature___mparameter_by_name(var_msignature, var_name);
}
var_param = var185;
if (var_param == NULL) {
var186 = 1; /* is null */
} else {
var186 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_param,((val*)NULL)) on <var_param:nullable MParameter> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_param,var_other) on <var_param:nullable MParameter(MParameter)> */
var191 = var_param == var_other;
var189 = var191;
goto RET_LABEL190;
RET_LABEL190:(void)0;
}
}
var187 = var189;
goto RET_LABEL188;
RET_LABEL188:(void)0;
}
var186 = var187;
}
if (var186){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var194 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var194 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var192 = var194;
RET_LABEL193:(void)0;
}
}
{
{ /* Inline parser_nodes#ANamedargExpr#n_id (var_e) on <var_e:AExpr(ANamedargExpr)> */
var197 = var_e->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_id].val; /* _n_id on <var_e:AExpr(ANamedargExpr)> */
if (unlikely(var197 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2641);
fatal_exit(1);
}
var195 = var197;
RET_LABEL196:(void)0;
}
}
if (unlikely(varonce198==NULL)) {
var199 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce200!=NULL)) {
var201 = varonce200;
} else {
var202 = "Error: no parameter `";
var203 = core__flat___NativeString___to_s_full(var202, 21l, 21l);
var201 = var203;
varonce200 = var201;
}
((struct instance_core__NativeArray*)var199)->values[0]=var201;
if (likely(varonce204!=NULL)) {
var205 = varonce204;
} else {
var206 = "` for `";
var207 = core__flat___NativeString___to_s_full(var206, 7l, 7l);
var205 = var207;
varonce204 = var205;
}
((struct instance_core__NativeArray*)var199)->values[2]=var205;
if (likely(varonce208!=NULL)) {
var209 = varonce208;
} else {
var210 = "`.";
var211 = core__flat___NativeString___to_s_full(var210, 2l, 2l);
var209 = var211;
varonce208 = var209;
}
((struct instance_core__NativeArray*)var199)->values[5]=var209;
} else {
var199 = varonce198;
varonce198 = NULL;
}
((struct instance_core__NativeArray*)var199)->values[1]=var_name;
{
var212 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_core__NativeArray*)var199)->values[3]=var212;
{
var213 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_core__NativeArray*)var199)->values[4]=var213;
{
var214 = ((val*(*)(val* self))(var199->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var199); /* native_to_s on <var199:NativeArray[String]>*/
}
varonce198 = var199;
{
nitc___nitc__ModelBuilder___error(var192, var195, var214); /* Direct call modelbuilder_base#ModelBuilder#error on <var192:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var217 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var217 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var215 = var217;
RET_LABEL216:(void)0;
}
}
{
var218 = core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__index_of(var215, var_param);
}
var_idx = var218;
{
{ /* Inline typing#SignatureMap#map (var_map) on <var_map:SignatureMap> */
var221 = var_map->attrs[COLOR_nitc__typing__SignatureMap___map].val; /* _map on <var_map:SignatureMap> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 628);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
var223 = (val*)(var_idx<<2|1);
var222 = core___core__MapRead___get_or_null(var219, var223);
}
var_prev = var222;
if (var_prev == NULL) {
var224 = 0; /* is null */
} else {
var224 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Int#!= (var_prev,((val*)NULL)) on <var_prev:nullable Int> */
var227 = 0; /* incompatible types Int vs. null; cannot be NULL */
var228 = !var227;
var225 = var228;
goto RET_LABEL226;
RET_LABEL226:(void)0;
}
var224 = var225;
}
if (var224){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var231 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var231 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var229 = var231;
RET_LABEL230:(void)0;
}
}
if (unlikely(varonce232==NULL)) {
var233 = NEW_core__NativeArray(8l, &type_core__NativeArray__core__String);
if (likely(varonce234!=NULL)) {
var235 = varonce234;
} else {
var236 = "Error: parameter `";
var237 = core__flat___NativeString___to_s_full(var236, 18l, 18l);
var235 = var237;
varonce234 = var235;
}
((struct instance_core__NativeArray*)var233)->values[0]=var235;
if (likely(varonce238!=NULL)) {
var239 = varonce238;
} else {
var240 = "` already associated with argument #";
var241 = core__flat___NativeString___to_s_full(var240, 36l, 36l);
var239 = var241;
varonce238 = var239;
}
((struct instance_core__NativeArray*)var233)->values[2]=var239;
if (likely(varonce242!=NULL)) {
var243 = varonce242;
} else {
var244 = " for `";
var245 = core__flat___NativeString___to_s_full(var244, 6l, 6l);
var243 = var245;
varonce242 = var243;
}
((struct instance_core__NativeArray*)var233)->values[4]=var243;
if (likely(varonce246!=NULL)) {
var247 = varonce246;
} else {
var248 = "`.";
var249 = core__flat___NativeString___to_s_full(var248, 2l, 2l);
var247 = var249;
varonce246 = var247;
}
((struct instance_core__NativeArray*)var233)->values[7]=var247;
} else {
var233 = varonce232;
varonce232 = NULL;
}
((struct instance_core__NativeArray*)var233)->values[1]=var_name;
var251 = (long)(var_prev)>>2;
var250 = core__flat___Int___core__abstract_text__Object__to_s(var251);
((struct instance_core__NativeArray*)var233)->values[3]=var250;
{
var252 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_core__NativeArray*)var233)->values[5]=var252;
{
var253 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_core__NativeArray*)var233)->values[6]=var253;
{
var254 = ((val*(*)(val* self))(var233->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var233); /* native_to_s on <var233:NativeArray[String]>*/
}
varonce232 = var233;
{
nitc___nitc__ModelBuilder___error(var229, var_e, var254); /* Direct call modelbuilder_base#ModelBuilder#error on <var229:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#SignatureMap#map (var_map) on <var_map:SignatureMap> */
var257 = var_map->attrs[COLOR_nitc__typing__SignatureMap___map].val; /* _map on <var_map:SignatureMap> */
if (unlikely(var257 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 628);
fatal_exit(1);
}
var255 = var257;
RET_LABEL256:(void)0;
}
}
{
var258 = (val*)(var_idx<<2|1);
var259 = (val*)(var_i<<2|1);
core___core__ArrayMap___core__abstract_collection__Map___91d_93d_61d(var255, var258, var259); /* Direct call array#ArrayMap#[]= on <var255:ArrayMap[Int, Int]>*/
}
{
{ /* Inline parser_nodes#ANamedargExpr#n_expr (var_e) on <var_e:AExpr(ANamedargExpr)> */
var262 = var_e->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_expr].val; /* _n_expr on <var_e:AExpr(ANamedargExpr)> */
if (unlikely(var262 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2647);
fatal_exit(1);
}
var260 = var262;
RET_LABEL261:(void)0;
}
}
{
{ /* Inline model#MParameter#mtype (var_param) on <var_param:nullable MParameter(MParameter)> */
var265 = var_param->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_param:nullable MParameter(MParameter)> */
if (unlikely(var265 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1900);
fatal_exit(1);
}
var263 = var265;
RET_LABEL264:(void)0;
}
}
{
var266 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(self, var260, var263);
}
{
{ /* Inline typing#AExpr#mtype= (var_e,var266) on <var_e:AExpr(ANamedargExpr)> */
var_e->attrs[COLOR_nitc__typing__AExpr___mtype].val = var266; /* _mtype on <var_e:AExpr(ANamedargExpr)> */
RET_LABEL267:(void)0;
}
}
BREAK_label180: (void)0;
{
var268 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var268;
}
BREAK_label: (void)0;
var_min_arity = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var271 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var269 = var271;
RET_LABEL270:(void)0;
}
}
{
var272 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#- (var269,var272) on <var269:Int> */
/* Covariant cast for argument 0 (i) <var272:Int> isa OTHER */
/* <var272:Int> isa OTHER */
var275 = 1; /* easy <var272:Int> isa OTHER*/
if (unlikely(!var275)) {
var_class_name278 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name278);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 734);
fatal_exit(1);
}
var279 = var269 - var272;
var273 = var279;
goto RET_LABEL274;
RET_LABEL274:(void)0;
}
}
var_vararg_decl = var273;
var_j = 0l;
var_i280 = 0l;
{
var281 = nitc___nitc__MSignature___arity(var_msignature);
}
var_282 = var281;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i280,var_282) on <var_i280:Int> */
/* Covariant cast for argument 0 (i) <var_282:Int> isa OTHER */
/* <var_282:Int> isa OTHER */
var285 = 1; /* easy <var_282:Int> isa OTHER*/
if (unlikely(!var285)) {
var_class_name288 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name288);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var289 = var_i280 < var_282;
var283 = var289;
goto RET_LABEL284;
RET_LABEL284:(void)0;
}
}
if (var283){
} else {
goto BREAK_label290;
}
{
{ /* Inline typing#SignatureMap#map (var_map) on <var_map:SignatureMap> */
var293 = var_map->attrs[COLOR_nitc__typing__SignatureMap___map].val; /* _map on <var_map:SignatureMap> */
if (unlikely(var293 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 628);
fatal_exit(1);
}
var291 = var293;
RET_LABEL292:(void)0;
}
}
{
var295 = (val*)(var_i280<<2|1);
var294 = core___core__CoupleMap___MapRead__has_key(var291, var295);
}
if (var294){
goto BREAK_label296;
} else {
}
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var299 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var299 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var297 = var299;
RET_LABEL298:(void)0;
}
}
{
var300 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var297, var_i280);
}
var_param301 = var300;
for(;;) {
{
{ /* Inline kernel#Int#< (var_j,var_nbargs) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_nbargs:Int> isa OTHER */
/* <var_nbargs:Int> isa OTHER */
var305 = 1; /* easy <var_nbargs:Int> isa OTHER*/
if (unlikely(!var305)) {
var_class_name308 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name308);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var309 = var_j < var_nbargs;
var303 = var309;
goto RET_LABEL304;
RET_LABEL304:(void)0;
}
}
var_310 = var303;
if (var303){
{
var311 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var_j);
}
/* <var311:nullable Object(AExpr)> isa ANamedargExpr */
cltype313 = type_nitc__ANamedargExpr.color;
idtype314 = type_nitc__ANamedargExpr.id;
if(cltype313 >= var311->type->table_size) {
var312 = 0;
} else {
var312 = var311->type->type_table[cltype313] == idtype314;
}
var302 = var312;
} else {
var302 = var_310;
}
if (var302){
{
{ /* Inline kernel#Int#+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var317 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var317)) {
var_class_name320 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name320);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var321 = var_j + 1l;
var315 = var321;
goto RET_LABEL316;
RET_LABEL316:(void)0;
}
}
var_j = var315;
} else {
goto BREAK_label322;
}
}
BREAK_label322: (void)0;
{
{ /* Inline kernel#Int#>= (var_j,var_nbargs) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_nbargs:Int> isa OTHER */
/* <var_nbargs:Int> isa OTHER */
var325 = 1; /* easy <var_nbargs:Int> isa OTHER*/
if (unlikely(!var325)) {
var_class_name328 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name328);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var329 = var_j >= var_nbargs;
var323 = var329;
goto RET_LABEL324;
RET_LABEL324:(void)0;
}
}
if (var323){
{
{ /* Inline model#MParameter#mtype (var_param301) on <var_param301:MParameter> */
var332 = var_param301->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_param301:MParameter> */
if (unlikely(var332 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1900);
fatal_exit(1);
}
var330 = var332;
RET_LABEL331:(void)0;
}
}
/* <var330:MType> isa MNullableType */
cltype334 = type_nitc__MNullableType.color;
idtype335 = type_nitc__MNullableType.id;
if(cltype334 >= var330->type->table_size) {
var333 = 0;
} else {
var333 = var330->type->type_table[cltype334] == idtype335;
}
var336 = !var333;
if (var336){
{
{ /* Inline kernel#Int#+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var339 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var339)) {
var_class_name342 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name342);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var343 = var_j + 1l;
var337 = var343;
goto RET_LABEL338;
RET_LABEL338:(void)0;
}
}
var_min_arity = var337;
} else {
}
{
{ /* Inline kernel#Int#+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var346 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var346)) {
var_class_name349 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name349);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var350 = var_j + 1l;
var344 = var350;
goto RET_LABEL345;
RET_LABEL345:(void)0;
}
}
var_j = var344;
goto BREAK_label296;
} else {
}
{
var351 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var_j);
}
var_arg = var351;
{
{ /* Inline typing#SignatureMap#map (var_map) on <var_map:SignatureMap> */
var354 = var_map->attrs[COLOR_nitc__typing__SignatureMap___map].val; /* _map on <var_map:SignatureMap> */
if (unlikely(var354 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 628);
fatal_exit(1);
}
var352 = var354;
RET_LABEL353:(void)0;
}
}
{
var355 = (val*)(var_i280<<2|1);
var356 = (val*)(var_j<<2|1);
core___core__ArrayMap___core__abstract_collection__Map___91d_93d_61d(var352, var355, var356); /* Direct call array#ArrayMap#[]= on <var352:ArrayMap[Int, Int]>*/
}
{
{ /* Inline kernel#Int#+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var359 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var359)) {
var_class_name362 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name362);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var363 = var_j + 1l;
var357 = var363;
goto RET_LABEL358;
RET_LABEL358:(void)0;
}
}
var_j = var357;
{
{ /* Inline kernel#Int#== (var_i280,var_vararg_rank) on <var_i280:Int> */
var366 = var_i280 == var_vararg_rank;
var364 = var366;
goto RET_LABEL365;
RET_LABEL365:(void)0;
}
}
if (var364){
{
{ /* Inline kernel#Int#+ (var_j,var_vararg_decl) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_decl:Int> isa OTHER */
/* <var_vararg_decl:Int> isa OTHER */
var369 = 1; /* easy <var_vararg_decl:Int> isa OTHER*/
if (unlikely(!var369)) {
var_class_name372 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name372);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var373 = var_j + var_vararg_decl;
var367 = var373;
goto RET_LABEL368;
RET_LABEL368:(void)0;
}
}
var_j = var367;
goto BREAK_label296;
} else {
}
{
{ /* Inline model#MParameter#is_vararg (var_param301) on <var_param301:MParameter> */
var376 = var_param301->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_param301:MParameter> */
var374 = var376;
RET_LABEL375:(void)0;
}
}
var377 = !var374;
if (var377){
{
{ /* Inline model#MParameter#mtype (var_param301) on <var_param301:MParameter> */
var380 = var_param301->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_param301:MParameter> */
if (unlikely(var380 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1900);
fatal_exit(1);
}
var378 = var380;
RET_LABEL379:(void)0;
}
}
var_paramtype = var378;
{
var381 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(self, var_arg, var_paramtype);
}
} else {
{
var382 = nitc__typing___nitc__typing__TypeVisitor___check_one_vararg(self, var_arg, var_param301);
}
}
BREAK_label296: (void)0;
{
var383 = core___core__Int___Discrete__successor(var_i280, 1l);
}
var_i280 = var383;
}
BREAK_label290: (void)0;
{
{ /* Inline kernel#Int#> (var_min_arity,0l) on <var_min_arity:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var386 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var386)) {
var_class_name389 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name389);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var390 = var_min_arity > 0l;
var384 = var390;
goto RET_LABEL385;
RET_LABEL385:(void)0;
}
}
if (var384){
if (var_last_is_padded){
{
{ /* Inline kernel#Int#+ (var_min_arity,1l) on <var_min_arity:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var393 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var393)) {
var_class_name396 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name396);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var397 = var_min_arity + 1l;
var391 = var397;
goto RET_LABEL392;
RET_LABEL392:(void)0;
}
}
var_min_arity = var391;
} else {
}
{
var398 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#< (var_min_arity,var398) on <var_min_arity:Int> */
/* Covariant cast for argument 0 (i) <var398:Int> isa OTHER */
/* <var398:Int> isa OTHER */
var401 = 1; /* easy <var398:Int> isa OTHER*/
if (unlikely(!var401)) {
var_class_name404 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name404);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var405 = var_min_arity < var398;
var399 = var405;
goto RET_LABEL400;
RET_LABEL400:(void)0;
}
}
if (var399){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var408 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var408 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var406 = var408;
RET_LABEL407:(void)0;
}
}
if (unlikely(varonce409==NULL)) {
var410 = NEW_core__NativeArray(10l, &type_core__NativeArray__core__String);
if (likely(varonce411!=NULL)) {
var412 = varonce411;
} else {
var413 = "Error: expected at least ";
var414 = core__flat___NativeString___to_s_full(var413, 25l, 25l);
var412 = var414;
varonce411 = var412;
}
((struct instance_core__NativeArray*)var410)->values[0]=var412;
if (likely(varonce415!=NULL)) {
var416 = varonce415;
} else {
var417 = " argument(s) for `";
var418 = core__flat___NativeString___to_s_full(var417, 18l, 18l);
var416 = var418;
varonce415 = var416;
}
((struct instance_core__NativeArray*)var410)->values[2]=var416;
if (likely(varonce419!=NULL)) {
var420 = varonce419;
} else {
var421 = "`; got ";
var422 = core__flat___NativeString___to_s_full(var421, 7l, 7l);
var420 = var422;
varonce419 = var420;
}
((struct instance_core__NativeArray*)var410)->values[5]=var420;
if (likely(varonce423!=NULL)) {
var424 = varonce423;
} else {
var425 = ". See introduction at `";
var426 = core__flat___NativeString___to_s_full(var425, 23l, 23l);
var424 = var426;
varonce423 = var424;
}
((struct instance_core__NativeArray*)var410)->values[7]=var424;
if (likely(varonce427!=NULL)) {
var428 = varonce427;
} else {
var429 = "`.";
var430 = core__flat___NativeString___to_s_full(var429, 2l, 2l);
var428 = var430;
varonce427 = var428;
}
((struct instance_core__NativeArray*)var410)->values[9]=var428;
} else {
var410 = varonce409;
varonce409 = NULL;
}
var431 = core__flat___Int___core__abstract_text__Object__to_s(var_min_arity);
((struct instance_core__NativeArray*)var410)->values[1]=var431;
{
var432 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_core__NativeArray*)var410)->values[3]=var432;
{
var433 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_core__NativeArray*)var410)->values[4]=var433;
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var436 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var434 = var436;
RET_LABEL435:(void)0;
}
}
var437 = core__flat___Int___core__abstract_text__Object__to_s(var434);
((struct instance_core__NativeArray*)var410)->values[6]=var437;
{
var438 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mproperty);
}
((struct instance_core__NativeArray*)var410)->values[8]=var438;
{
var439 = ((val*(*)(val* self))(var410->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var410); /* native_to_s on <var410:NativeArray[String]>*/
}
varonce409 = var410;
{
nitc___nitc__ModelBuilder___error(var406, var_node, var439); /* Direct call modelbuilder_base#ModelBuilder#error on <var406:ModelBuilder>*/
}
} else {
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var442 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var442 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var440 = var442;
RET_LABEL441:(void)0;
}
}
if (unlikely(varonce443==NULL)) {
var444 = NEW_core__NativeArray(10l, &type_core__NativeArray__core__String);
if (likely(varonce445!=NULL)) {
var446 = varonce445;
} else {
var447 = "Error: expected ";
var448 = core__flat___NativeString___to_s_full(var447, 16l, 16l);
var446 = var448;
varonce445 = var446;
}
((struct instance_core__NativeArray*)var444)->values[0]=var446;
if (likely(varonce449!=NULL)) {
var450 = varonce449;
} else {
var451 = " argument(s) for `";
var452 = core__flat___NativeString___to_s_full(var451, 18l, 18l);
var450 = var452;
varonce449 = var450;
}
((struct instance_core__NativeArray*)var444)->values[2]=var450;
if (likely(varonce453!=NULL)) {
var454 = varonce453;
} else {
var455 = "`; got ";
var456 = core__flat___NativeString___to_s_full(var455, 7l, 7l);
var454 = var456;
varonce453 = var454;
}
((struct instance_core__NativeArray*)var444)->values[5]=var454;
if (likely(varonce457!=NULL)) {
var458 = varonce457;
} else {
var459 = ". See introduction at `";
var460 = core__flat___NativeString___to_s_full(var459, 23l, 23l);
var458 = var460;
varonce457 = var458;
}
((struct instance_core__NativeArray*)var444)->values[7]=var458;
if (likely(varonce461!=NULL)) {
var462 = varonce461;
} else {
var463 = "`.";
var464 = core__flat___NativeString___to_s_full(var463, 2l, 2l);
var462 = var464;
varonce461 = var462;
}
((struct instance_core__NativeArray*)var444)->values[9]=var462;
} else {
var444 = varonce443;
varonce443 = NULL;
}
var465 = core__flat___Int___core__abstract_text__Object__to_s(var_min_arity);
((struct instance_core__NativeArray*)var444)->values[1]=var465;
{
var466 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_core__NativeArray*)var444)->values[3]=var466;
{
var467 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_core__NativeArray*)var444)->values[4]=var467;
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var470 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var468 = var470;
RET_LABEL469:(void)0;
}
}
var471 = core__flat___Int___core__abstract_text__Object__to_s(var468);
((struct instance_core__NativeArray*)var444)->values[6]=var471;
{
var472 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mproperty);
}
((struct instance_core__NativeArray*)var444)->values[8]=var472;
{
var473 = ((val*(*)(val* self))(var444->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var444); /* native_to_s on <var444:NativeArray[String]>*/
}
varonce443 = var444;
{
nitc___nitc__ModelBuilder___error(var440, var_node, var473); /* Direct call modelbuilder_base#ModelBuilder#error on <var440:ModelBuilder>*/
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#>= (var_vararg_rank,0l) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var476 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var476)) {
var_class_name479 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name479);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 729);
fatal_exit(1);
}
var480 = var_vararg_rank >= 0l;
var474 = var480;
goto RET_LABEL475;
RET_LABEL475:(void)0;
}
}
if (var474){
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var483 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var483 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var481 = var483;
RET_LABEL482:(void)0;
}
}
{
var484 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var481, var_vararg_rank);
}
{
{ /* Inline model#MParameter#mtype (var484) on <var484:nullable Object(MParameter)> */
var487 = var484->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var484:nullable Object(MParameter)> */
if (unlikely(var487 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1900);
fatal_exit(1);
}
var485 = var487;
RET_LABEL486:(void)0;
}
}
var_paramtype488 = var485;
{
var489 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var_vararg_rank);
}
var_first = var489;
{
{ /* Inline kernel#Int#== (var_vararg_decl,0l) on <var_vararg_decl:Int> */
var492 = var_vararg_decl == 0l;
var490 = var492;
goto RET_LABEL491;
RET_LABEL491:(void)0;
}
}
if (var490){
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var495 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var495 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var493 = var495;
RET_LABEL494:(void)0;
}
}
{
var496 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var493, var_vararg_rank);
}
{
var497 = nitc__typing___nitc__typing__TypeVisitor___check_one_vararg(self, var_first, var496);
}
var498 = !var497;
if (var498){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline kernel#Int#+ (var_vararg_decl,1l) on <var_vararg_decl:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var501 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var501)) {
var_class_name504 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name504);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var505 = var_vararg_decl + 1l;
var499 = var505;
goto RET_LABEL500;
RET_LABEL500:(void)0;
}
}
{
{ /* Inline typing#AExpr#vararg_decl= (var_first,var499) on <var_first:AExpr> */
var_first->attrs[COLOR_nitc__typing__AExpr___vararg_decl].l = var499; /* _vararg_decl on <var_first:AExpr> */
RET_LABEL506:(void)0;
}
}
var_i507 = var_vararg_rank;
{
{ /* Inline kernel#Int#+ (var_vararg_rank,var_vararg_decl) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_decl:Int> isa OTHER */
/* <var_vararg_decl:Int> isa OTHER */
var510 = 1; /* easy <var_vararg_decl:Int> isa OTHER*/
if (unlikely(!var510)) {
var_class_name513 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name513);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var514 = var_vararg_rank + var_vararg_decl;
var508 = var514;
goto RET_LABEL509;
RET_LABEL509:(void)0;
}
}
var_515 = var508;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i507,var_515) on <var_i507:Int> */
/* Covariant cast for argument 0 (i) <var_515:Int> isa OTHER */
/* <var_515:Int> isa OTHER */
var518 = 1; /* easy <var_515:Int> isa OTHER*/
if (unlikely(!var518)) {
var_class_name521 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name521);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var522 = var_i507 <= var_515;
var516 = var522;
goto RET_LABEL517;
RET_LABEL517:(void)0;
}
}
if (var516){
} else {
goto BREAK_label523;
}
{
var524 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var_i507);
}
{
var525 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(self, var524, var_paramtype488);
}
{
var526 = core___core__Int___Discrete__successor(var_i507, 1l);
}
var_i507 = var526;
}
BREAK_label523: (void)0;
}
} else {
}
var = var_map;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#check_one_vararg for (self: TypeVisitor, AExpr, MParameter): Bool */
short int nitc__typing___nitc__typing__TypeVisitor___check_one_vararg(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_arg /* var arg: AExpr */;
val* var_param /* var param: MParameter */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var_paramtype /* var paramtype: MType */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : String */;
val* var7 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var15 /* : MClassType */;
val* var_array_mtype /* var array_mtype: MClassType */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var17 /* : AExpr */;
val* var19 /* : AExpr */;
val* var20 /* : nullable MType */;
val* var21 /* : AExpr */;
val* var23 /* : AExpr */;
val* var24 /* : nullable MType */;
val* var26 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var_36 /* var : Bool */;
short int var37 /* : Bool */;
val* var39 /* : NativeArray[String] */;
static val* varonce38;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : String */;
val* var54 /* : String */;
val* var56 /* : nullable MType */;
var_arg = p0;
var_param = p1;
{
{ /* Inline model#MParameter#mtype (var_param) on <var_param:MParameter> */
var3 = var_param->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_param:MParameter> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1900);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_paramtype = var1;
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "Array";
var6 = core__flat___NativeString___to_s_full(var5, 5l, 5l);
var4 = var6;
varonce = var4;
}
{
var7 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(self, var_arg, var4);
}
var_mclass = var7;
if (var_mclass == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var13 = var_mclass == var_other;
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
var = 0;
goto RET_LABEL;
} else {
}
var14 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var14, 1l); /* Direct call array#Array#with_capacity on <var14:Array[MType]>*/
}
var_ = var14;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_paramtype); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
{
var15 = nitc___nitc__MClass___get_mtype(var_mclass, var_);
}
var_array_mtype = var15;
/* <var_arg:AExpr> isa AVarargExpr */
cltype = type_nitc__AVarargExpr.color;
idtype = type_nitc__AVarargExpr.id;
if(cltype >= var_arg->type->table_size) {
var16 = 0;
} else {
var16 = var_arg->type->type_table[cltype] == idtype;
}
if (var16){
{
{ /* Inline parser_nodes#AVarargExpr#n_expr (var_arg) on <var_arg:AExpr(AVarargExpr)> */
var19 = var_arg->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <var_arg:AExpr(AVarargExpr)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2630);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(self, var17, var_array_mtype);
}
{
{ /* Inline parser_nodes#AVarargExpr#n_expr (var_arg) on <var_arg:AExpr(AVarargExpr)> */
var23 = var_arg->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <var_arg:AExpr(AVarargExpr)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2630);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = ((val*(*)(val* self))(var21->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var21); /* mtype on <var21:AExpr>*/
}
{
{ /* Inline typing#AExpr#mtype= (var_arg,var24) on <var_arg:AExpr(AVarargExpr)> */
var_arg->attrs[COLOR_nitc__typing__AExpr___mtype].val = var24; /* _mtype on <var_arg:AExpr(AVarargExpr)> */
RET_LABEL25:(void)0;
}
}
} else {
{
var26 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(self, var_arg);
}
var_t = var26;
if (var_t == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,((val*)NULL)) on <var_t:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other) on <var_t:nullable MType(MType)> */
var32 = var_t == var_other;
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
var = 0;
goto RET_LABEL;
} else {
}
{
var34 = nitc__typing___nitc__typing__TypeVisitor___is_subtype(self, var_t, var_paramtype);
}
var35 = !var34;
var_36 = var35;
if (var35){
{
var37 = nitc__typing___nitc__typing__TypeVisitor___is_subtype(self, var_t, var_array_mtype);
}
var33 = var37;
} else {
var33 = var_36;
}
if (var33){
if (unlikely(varonce38==NULL)) {
var39 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "Type Error: expected `";
var43 = core__flat___NativeString___to_s_full(var42, 22l, 22l);
var41 = var43;
varonce40 = var41;
}
((struct instance_core__NativeArray*)var39)->values[0]=var41;
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "`, got `";
var47 = core__flat___NativeString___to_s_full(var46, 8l, 8l);
var45 = var47;
varonce44 = var45;
}
((struct instance_core__NativeArray*)var39)->values[2]=var45;
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "`. Is an ellipsis `...` missing on the argument?";
var51 = core__flat___NativeString___to_s_full(var50, 48l, 48l);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var39)->values[4]=var49;
} else {
var39 = varonce38;
varonce38 = NULL;
}
{
var52 = ((val*(*)(val* self))(var_paramtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_paramtype); /* to_s on <var_paramtype:MType>*/
}
((struct instance_core__NativeArray*)var39)->values[1]=var52;
{
var53 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t); /* to_s on <var_t:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var39)->values[3]=var53;
{
var54 = ((val*(*)(val* self))(var39->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var39); /* native_to_s on <var39:NativeArray[String]>*/
}
varonce38 = var39;
{
nitc__typing___nitc__typing__TypeVisitor___error(self, var_arg, var54); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AExpr#vararg_decl= (var_arg,1l) on <var_arg:AExpr> */
var_arg->attrs[COLOR_nitc__typing__AExpr___vararg_decl].l = 1l; /* _vararg_decl on <var_arg:AExpr> */
RET_LABEL55:(void)0;
}
}
{
var56 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(self, var_arg, var_paramtype);
}
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#error for (self: TypeVisitor, ANode, String) */
void nitc__typing___nitc__typing__TypeVisitor___error(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_message /* var message: String */;
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
var_node = p0;
var_message = p1;
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var2 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__ModelBuilder___error(var, var_node, var_message); /* Direct call modelbuilder_base#ModelBuilder#error on <var:ModelBuilder>*/
}
RET_LABEL:;
}
/* method typing#TypeVisitor#get_variable for (self: TypeVisitor, AExpr, Variable): nullable MType */
val* nitc__typing___nitc__typing__TypeVisitor___get_variable(val* self, val* p0, val* p1) {
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
var3 = var_variable->attrs[COLOR_nitc__typing__Variable___is_adapted].s; /* _is_adapted on <var_variable:Variable> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = !var1;
if (var4){
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var7 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
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
var10 = var_node->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_node:AExpr> */
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
var19 = var_flow->attrs[COLOR_nitc__typing__FlowContext___vars].val; /* _vars on <var_flow:nullable FlowContext(FlowContext)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 689);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var17, var_variable);
}
if (var20){
{
{ /* Inline typing#FlowContext#vars (var_flow) on <var_flow:nullable FlowContext(FlowContext)> */
var23 = var_flow->attrs[COLOR_nitc__typing__FlowContext___vars].val; /* _vars on <var_flow:nullable FlowContext(FlowContext)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 689);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var21, var_variable);
}
var = var24;
goto RET_LABEL;
} else {
{
var25 = nitc__typing___FlowContext___collect_types(var_flow, var_variable);
}
var_mtypes = var25;
{
{ /* Inline array#AbstractArrayRead#length (var_mtypes) on <var_mtypes:Array[nullable MType]> */
var28 = var_mtypes->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_mtypes:Array[nullable MType]> */
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
var34 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var = var32;
goto RET_LABEL;
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_mtypes) on <var_mtypes:Array[nullable MType]> */
var37 = var_mtypes->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_mtypes:Array[nullable MType]> */
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
var41 = core___core__SequenceRead___Collection__first(var_mtypes);
}
var = var41;
goto RET_LABEL;
} else {
{
var42 = nitc__typing___nitc__typing__TypeVisitor___merge_types(self, var_node, var_mtypes);
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
var51 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
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
short int nitc__typing___nitc__typing__TypeVisitor___dirty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__typing__TypeVisitor___dirty].s; /* _dirty on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#dirty= for (self: TypeVisitor, Bool) */
void nitc__typing___nitc__typing__TypeVisitor___dirty_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__typing__TypeVisitor___dirty].s = p0; /* _dirty on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#has_loop for (self: TypeVisitor): Bool */
short int nitc__typing___nitc__typing__TypeVisitor___has_loop(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__typing__TypeVisitor___has_loop].s; /* _has_loop on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#has_loop= for (self: TypeVisitor, Bool) */
void nitc__typing___nitc__typing__TypeVisitor___has_loop_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__typing__TypeVisitor___has_loop].s = p0; /* _has_loop on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#set_variable for (self: TypeVisitor, AExpr, Variable, nullable MType) */
void nitc__typing___nitc__typing__TypeVisitor___set_variable(val* self, val* p0, val* p1, val* p2) {
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
var2 = var_node->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_node:AExpr> */
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
var6 = ((short int(*)(val* self, val* p0))(var_flow->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_flow, var_other); /* == on <var_flow:nullable FlowContext(FlowContext)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 594);
fatal_exit(1);
}
{
nitc__typing___FlowContext___set_var(var_flow, self, var_variable, var_mtype); /* Direct call typing#FlowContext#set_var on <var_flow:nullable FlowContext(FlowContext)>*/
}
RET_LABEL:;
}
/* method typing#TypeVisitor#merge_types for (self: TypeVisitor, ANode, Array[nullable MType]): nullable MType */
val* nitc__typing___nitc__typing__TypeVisitor___merge_types(val* self, val* p0, val* p1) {
val* var /* : nullable MType */;
val* var_node /* var node: ANode */;
val* var_col /* var col: Array[nullable MType] */;
long var1 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_ /* var : Array[nullable MType] */;
val* var8 /* : IndexedIterator[nullable Object] */;
val* var_9 /* var : IndexedIterator[nullable MType] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_t1 /* var t1: nullable MType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var_found /* var found: Bool */;
val* var_19 /* var : Array[nullable MType] */;
val* var20 /* : IndexedIterator[nullable Object] */;
val* var_21 /* var : IndexedIterator[nullable MType] */;
short int var22 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_t2 /* var t2: nullable MType */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var_34 /* var : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
val* var37 /* : MType */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
var_node = p0;
var_col = p1;
{
{ /* Inline array#AbstractArrayRead#length (var_col) on <var_col:Array[nullable MType]> */
var3 = var_col->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_col:Array[nullable MType]> */
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
var7 = core___core__SequenceRead___Collection__first(var_col);
}
var = var7;
goto RET_LABEL;
} else {
}
var_ = var_col;
{
var8 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:IndexedIterator[nullable MType]>*/
}
if (var10){
} else {
goto BREAK_label;
}
{
var11 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:IndexedIterator[nullable MType]>*/
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
goto BREAK_label18;
} else {
}
var_found = 1;
var_19 = var_col;
{
var20 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_19);
}
var_21 = var20;
for(;;) {
{
var22 = ((short int(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_21); /* is_ok on <var_21:IndexedIterator[nullable MType]>*/
}
if (var22){
} else {
goto BREAK_label23;
}
{
var24 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_21); /* item on <var_21:IndexedIterator[nullable MType]>*/
}
var_t2 = var24;
if (var_t2 == NULL) {
var25 = 1; /* is null */
} else {
var25 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t2,((val*)NULL)) on <var_t2:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_t2,var_other) on <var_t2:nullable MType(MType)> */
var30 = var_t2 == var_other;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (var25){
goto BREAK_label31;
} else {
}
{
var33 = nitc__typing___nitc__typing__TypeVisitor___can_be_null(self, var_t2);
}
var_34 = var33;
if (var33){
{
var35 = nitc__typing___nitc__typing__TypeVisitor___can_be_null(self, var_t1);
}
var36 = !var35;
var32 = var36;
} else {
var32 = var_34;
}
if (var32){
{
var37 = ((val*(*)(val* self))(var_t1->class->vft[COLOR_nitc__model__MType__as_nullable]))(var_t1); /* as_nullable on <var_t1:nullable MType(MType)>*/
}
var_t1 = var37;
} else {
}
{
var38 = nitc__typing___nitc__typing__TypeVisitor___is_subtype(self, var_t2, var_t1);
}
var39 = !var38;
if (var39){
var_found = 0;
} else {
}
BREAK_label31: (void)0;
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_21); /* next on <var_21:IndexedIterator[nullable MType]>*/
}
}
BREAK_label23: (void)0;
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_21); /* finish on <var_21:IndexedIterator[nullable MType]>*/
}
if (var_found){
var = var_t1;
goto RET_LABEL;
} else {
}
BREAK_label18: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:IndexedIterator[nullable MType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:IndexedIterator[nullable MType]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#SignatureMap#map for (self: SignatureMap): ArrayMap[Int, Int] */
val* nitc___nitc__SignatureMap___map(val* self) {
val* var /* : ArrayMap[Int, Int] */;
val* var1 /* : ArrayMap[Int, Int] */;
var1 = self->attrs[COLOR_nitc__typing__SignatureMap___map].val; /* _map on <self:SignatureMap> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 628);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#location= for (self: CallSite, Location) */
void nitc___nitc__CallSite___location_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__CallSite___location].val = p0; /* _location on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#recv for (self: CallSite): MType */
val* nitc___nitc__CallSite___recv(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nitc__typing__CallSite___recv].val; /* _recv on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 639);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#recv= for (self: CallSite, MType) */
void nitc___nitc__CallSite___recv_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__CallSite___recv].val = p0; /* _recv on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#mmodule for (self: CallSite): MModule */
val* nitc___nitc__CallSite___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nitc__typing__CallSite___mmodule].val; /* _mmodule on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 642);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mmodule= for (self: CallSite, MModule) */
void nitc___nitc__CallSite___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__CallSite___mmodule].val = p0; /* _mmodule on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#anchor for (self: CallSite): nullable MClassType */
val* nitc___nitc__CallSite___anchor(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_nitc__typing__CallSite___anchor].val; /* _anchor on <self:CallSite> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#anchor= for (self: CallSite, nullable MClassType) */
void nitc___nitc__CallSite___anchor_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__CallSite___anchor].val = p0; /* _anchor on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#recv_is_self= for (self: CallSite, Bool) */
void nitc___nitc__CallSite___recv_is_self_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__typing__CallSite___recv_is_self].s = p0; /* _recv_is_self on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#mproperty for (self: CallSite): MMethod */
val* nitc___nitc__CallSite___mproperty(val* self) {
val* var /* : MMethod */;
val* var1 /* : MMethod */;
var1 = self->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 653);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mproperty= for (self: CallSite, MMethod) */
void nitc___nitc__CallSite___mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__CallSite___mproperty].val = p0; /* _mproperty on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#mpropdef for (self: CallSite): MMethodDef */
val* nitc___nitc__CallSite___mpropdef(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
var1 = self->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mpropdef= for (self: CallSite, MMethodDef) */
void nitc___nitc__CallSite___mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__CallSite___mpropdef].val = p0; /* _mpropdef on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#msignature for (self: CallSite): MSignature */
val* nitc___nitc__CallSite___msignature(val* self) {
val* var /* : MSignature */;
val* var1 /* : MSignature */;
var1 = self->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 660);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#msignature= for (self: CallSite, MSignature) */
void nitc___nitc__CallSite___msignature_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__CallSite___msignature].val = p0; /* _msignature on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#erasure_cast for (self: CallSite): Bool */
short int nitc___nitc__CallSite___erasure_cast(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__typing__CallSite___erasure_cast].s; /* _erasure_cast on <self:CallSite> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#erasure_cast= for (self: CallSite, Bool) */
void nitc___nitc__CallSite___erasure_cast_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__typing__CallSite___erasure_cast].s = p0; /* _erasure_cast on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#signaturemap for (self: CallSite): nullable SignatureMap */
val* nitc___nitc__CallSite___signaturemap(val* self) {
val* var /* : nullable SignatureMap */;
val* var1 /* : nullable SignatureMap */;
var1 = self->attrs[COLOR_nitc__typing__CallSite___signaturemap].val; /* _signaturemap on <self:CallSite> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#signaturemap= for (self: CallSite, nullable SignatureMap) */
void nitc___nitc__CallSite___signaturemap_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__CallSite___signaturemap].val = p0; /* _signaturemap on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#check_signature for (self: CallSite, TypeVisitor, ANode, Array[AExpr]): Bool */
short int nitc___nitc__CallSite___check_signature(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_v /* var v: TypeVisitor */;
val* var_node /* var node: ANode */;
val* var_args /* var args: Array[AExpr] */;
val* var1 /* : MMethod */;
val* var3 /* : MMethod */;
val* var4 /* : MSignature */;
val* var6 /* : MSignature */;
val* var7 /* : nullable SignatureMap */;
val* var_map /* var map: nullable SignatureMap */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
var_v = p0;
var_node = p1;
var_args = p2;
{
{ /* Inline typing#CallSite#mproperty (self) on <self:CallSite> */
var3 = self->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <self:CallSite> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 653);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#CallSite#msignature (self) on <self:CallSite> */
var6 = self->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <self:CallSite> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 660);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__typing___nitc__typing__TypeVisitor___check_signature(var_v, var_node, var_args, var1, var4);
}
var_map = var7;
{
{ /* Inline typing#CallSite#signaturemap= (self,var_map) on <self:CallSite> */
self->attrs[COLOR_nitc__typing__CallSite___signaturemap].val = var_map; /* _signaturemap on <self:CallSite> */
RET_LABEL8:(void)0;
}
}
if (var_map == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_map,((val*)NULL)) on <var_map:nullable SignatureMap> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_map,var_other) on <var_map:nullable SignatureMap(SignatureMap)> */
var14 = var_map == var_other;
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
{
{ /* Inline model_base#MEntity#is_broken= (self,1) on <self:CallSite> */
self->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <self:CallSite> */
RET_LABEL15:(void)0;
}
}
} else {
}
if (var_map == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_map,((val*)NULL)) on <var_map:nullable SignatureMap> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_map,var_other) on <var_map:nullable SignatureMap(SignatureMap)> */
var21 = var_map == var_other;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#CallSite#init for (self: CallSite) */
void nitc___nitc__CallSite___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__CallSite___core__kernel__Object__init]))(self); /* init on <self:CallSite>*/
}
RET_LABEL:;
}
/* method typing#Variable#declared_type for (self: Variable): nullable MType */
val* nitc__typing___Variable___declared_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <self:Variable> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#Variable#declared_type= for (self: Variable, nullable MType) */
void nitc__typing___Variable___declared_type_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__Variable___declared_type].val = p0; /* _declared_type on <self:Variable> */
RET_LABEL:;
}
/* method typing#Variable#is_adapted for (self: Variable): Bool */
short int nitc__typing___Variable___is_adapted(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__typing__Variable___is_adapted].s; /* _is_adapted on <self:Variable> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#Variable#is_adapted= for (self: Variable, Bool) */
void nitc__typing___Variable___is_adapted_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__typing__Variable___is_adapted].s = p0; /* _is_adapted on <self:Variable> */
RET_LABEL:;
}
/* method typing#FlowContext#vars for (self: FlowContext): HashMap[Variable, nullable MType] */
val* nitc__typing___FlowContext___vars(val* self) {
val* var /* : HashMap[Variable, nullable MType] */;
val* var1 /* : HashMap[Variable, nullable MType] */;
var1 = self->attrs[COLOR_nitc__typing__FlowContext___vars].val; /* _vars on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 689);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#FlowContext#set_var for (self: FlowContext, TypeVisitor, Variable, nullable MType) */
void nitc__typing___FlowContext___set_var(val* self, val* p0, val* p1, val* p2) {
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
var3 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
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
var12 = var_variable->attrs[COLOR_nitc__typing__Variable___is_adapted].s; /* _is_adapted on <var_variable:Variable> */
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
var17 = self->attrs[COLOR_nitc__typing__FlowContext___vars].val; /* _vars on <self:FlowContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 689);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var15, var_variable);
}
var_19 = var18;
if (var18){
{
{ /* Inline typing#FlowContext#vars (self) on <self:FlowContext> */
var22 = self->attrs[COLOR_nitc__typing__FlowContext___vars].val; /* _vars on <self:FlowContext> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 689);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var20, var_variable);
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
var32 = self->attrs[COLOR_nitc__typing__FlowContext___vars].val; /* _vars on <self:FlowContext> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 689);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var30, var_variable, var_mtype); /* Direct call hash_collection#HashMap#[]= on <var30:HashMap[Variable, nullable MType]>*/
}
{
{ /* Inline typing#TypeVisitor#dirty= (var_v,1) on <var_v:TypeVisitor> */
var_v->attrs[COLOR_nitc__typing__TypeVisitor___dirty].s = 1; /* _dirty on <var_v:TypeVisitor> */
RET_LABEL33:(void)0;
}
}
{
{ /* Inline typing#Variable#is_adapted= (var_variable,1) on <var_variable:Variable> */
var_variable->attrs[COLOR_nitc__typing__Variable___is_adapted].s = 1; /* _is_adapted on <var_variable:Variable> */
RET_LABEL34:(void)0;
}
}
RET_LABEL:;
}
/* method typing#FlowContext#collect_types for (self: FlowContext, Variable): Array[nullable MType] */
val* nitc__typing___FlowContext___collect_types(val* self, val* p0) {
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
var1 = NEW_core__Array(&type_core__Array__nullable__nitc__MType);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[nullable MType]>*/
}
var_res = var1;
var2 = NEW_core__Array(&type_core__Array__nitc__FlowContext);
{
core___core__Array___with_capacity(var2, 1l); /* Direct call array#Array#with_capacity on <var2:Array[FlowContext]>*/
}
var_ = var2;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, self); /* Direct call array#AbstractArray#push on <var_:Array[FlowContext]>*/
}
var_todo = var_;
var3 = NEW_core__HashSet(&type_core__HashSet__nitc__FlowContext);
{
core___core__HashSet___core__kernel__Object__init(var3); /* Direct call hash_collection#HashSet#init on <var3:HashSet[FlowContext]>*/
}
var_seen = var3;
for(;;) {
{
var4 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_todo);
}
var5 = !var4;
if (var5){
{
var6 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_todo);
}
var_f = var6;
{
var7 = nitc___nitc__FlowContext___is_unreachable(var_f);
}
if (var7){
goto BREAK_label;
} else {
}
{
var8 = core___core__HashSet___core__abstract_collection__Collection__has(var_seen, var_f);
}
if (var8){
goto BREAK_label;
} else {
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var_seen, var_f); /* Direct call hash_collection#HashSet#add on <var_seen:HashSet[FlowContext]>*/
}
{
{ /* Inline typing#FlowContext#vars (var_f) on <var_f:FlowContext> */
var11 = var_f->attrs[COLOR_nitc__typing__FlowContext___vars].val; /* _vars on <var_f:FlowContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 689);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var9, var_variable);
}
if (var12){
{
{ /* Inline typing#FlowContext#vars (var_f) on <var_f:FlowContext> */
var15 = var_f->attrs[COLOR_nitc__typing__FlowContext___vars].val; /* _vars on <var_f:FlowContext> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 689);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var13, var_variable);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var16); /* Direct call array#Array#add on <var_res:Array[nullable MType]>*/
}
} else {
{
{ /* Inline flow#FlowContext#previous (var_f) on <var_f:FlowContext> */
var19 = var_f->attrs[COLOR_nitc__flow__FlowContext___previous].val; /* _previous on <var_f:FlowContext> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 189);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_todo, var17); /* Direct call array#Array#add_all on <var_todo:Array[FlowContext]>*/
}
{
{ /* Inline flow#FlowContext#loops (var_f) on <var_f:FlowContext> */
var22 = var_f->attrs[COLOR_nitc__flow__FlowContext___loops].val; /* _loops on <var_f:FlowContext> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _loops");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 192);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_todo, var20); /* Direct call array#Array#add_all on <var_todo:Array[FlowContext]>*/
}
{
{ /* Inline flow#FlowContext#previous (var_f) on <var_f:FlowContext> */
var25 = var_f->attrs[COLOR_nitc__flow__FlowContext___previous].val; /* _previous on <var_f:FlowContext> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 189);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var23);
}
if (var26){
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var29 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var27); /* Direct call array#Array#add on <var_res:Array[nullable MType]>*/
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
void nitc__typing___APropdef___do_typing(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_modelbuilder = p0;
RET_LABEL:;
}
/* method typing#APropdef#selfvariable= for (self: APropdef, nullable Variable) */
void nitc__typing___APropdef___selfvariable_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__APropdef___selfvariable].val = p0; /* _selfvariable on <self:APropdef> */
RET_LABEL:;
}
/* method typing#AMethPropdef#do_typing for (self: AMethPropdef, ModelBuilder) */
void nitc__typing___AMethPropdef___APropdef__do_typing(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : TypeVisitor */;
val* var10 /* : MClassDef */;
val* var12 /* : MClassDef */;
val* var13 /* : MModule */;
val* var15 /* : MModule */;
val* var_v /* var v: TypeVisitor */;
val* var16 /* : Variable */;
val* var18 /* : Variable */;
val* var20 /* : nullable MPropDef */;
val* var22 /* : nullable MPropDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var23 /* : nullable MSignature */;
val* var25 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
long var_i /* var i: Int */;
long var32 /* : Int */;
long var_ /* var : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var36 /* : Bool */;
val* var37 /* : Array[MParameter] */;
val* var39 /* : Array[MParameter] */;
val* var40 /* : nullable Object */;
val* var41 /* : MType */;
val* var43 /* : MType */;
val* var_mtype /* var mtype: MType */;
long var44 /* : Int */;
long var46 /* : Int */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
val* var50 /* : nullable ASignature */;
val* var52 /* : nullable ASignature */;
val* var53 /* : ANodes[AParam] */;
val* var55 /* : ANodes[AParam] */;
val* var56 /* : ANode */;
static val* varonce;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : String */;
val* var60 /* : nullable MClass */;
val* var_arrayclass /* var arrayclass: nullable MClass */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
val* var67 /* : Array[MType] */;
val* var_68 /* var : Array[MType] */;
val* var69 /* : MClassType */;
val* var70 /* : nullable ASignature */;
val* var72 /* : nullable ASignature */;
val* var73 /* : ANodes[AParam] */;
val* var75 /* : ANodes[AParam] */;
val* var76 /* : ANode */;
val* var77 /* : nullable Variable */;
val* var79 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
val* var_other83 /* var other: nullable Object */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
long var87 /* : Int */;
val* var88 /* : nullable AExpr */;
val* var90 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
short int var_103 /* var : Bool */;
short int var104 /* : Bool */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
val* var109 /* : PostTypingVisitor */;
val* var_post_visitor /* var post_visitor: PostTypingVisitor */;
short int var110 /* : Bool */;
val* var111 /* : nullable FlowContext */;
val* var113 /* : nullable FlowContext */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var_116 /* var : Bool */;
val* var117 /* : nullable MType */;
val* var119 /* : nullable MType */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
val* var128 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
if (var_mpropdef == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var8 = var_mpropdef == var_other;
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
var9 = NEW_nitc__typing__TypeVisitor(&type_nitc__typing__TypeVisitor);
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var12 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var10) on <var10:MClassDef> */
var15 = var10->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var10:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__typing__TypeVisitor__modelbuilder_61d]))(var9, var_modelbuilder); /* modelbuilder= on <var9:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__typing__TypeVisitor__mmodule_61d]))(var9, var13); /* mmodule= on <var9:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__typing__TypeVisitor__mpropdef_61d]))(var9, var_mpropdef); /* mpropdef= on <var9:TypeVisitor>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:TypeVisitor>*/
}
var_v = var9;
{
{ /* Inline typing#TypeVisitor#selfvariable (var_v) on <var_v:TypeVisitor> */
var18 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___selfvariable].val; /* _selfvariable on <var_v:TypeVisitor> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 51);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline typing#APropdef#selfvariable= (self,var16) on <self:AMethPropdef> */
self->attrs[COLOR_nitc__typing__APropdef___selfvariable].val = var16; /* _selfvariable on <self:AMethPropdef> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var22 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 757);
fatal_exit(1);
}
var_mmethoddef = var20;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var25 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_msignature = var23;
if (var_msignature == NULL) {
var26 = 1; /* is null */
} else {
var26 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var31 = var_msignature == var_other;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var26 = var27;
}
if (var26){
goto RET_LABEL;
} else {
}
var_i = 0l;
{
var32 = nitc___nitc__MSignature___arity(var_msignature);
}
var_ = var32;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var35 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var36 = var_i < var_;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
} else {
goto BREAK_label;
}
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var39 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1783);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var37, var_i);
}
{
{ /* Inline model#MParameter#mtype (var40) on <var40:nullable Object(MParameter)> */
var43 = var40->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var40:nullable Object(MParameter)> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1900);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
var_mtype = var41;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var46 = var_msignature->attrs[COLOR_nitc__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:nullable MSignature(MSignature)> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var44,var_i) on <var44:Int> */
var49 = var44 == var_i;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
if (var47){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var52 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
if (var50 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 763);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var50) on <var50:nullable ASignature> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1679);
fatal_exit(1);
}
var55 = var50->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var50:nullable ASignature> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1679);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
var56 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var53, var_i);
}
if (likely(varonce!=NULL)) {
var57 = varonce;
} else {
var58 = "Array";
var59 = core__flat___NativeString___to_s_full(var58, 5l, 5l);
var57 = var59;
varonce = var57;
}
{
var60 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, var56, var57);
}
var_arrayclass = var60;
if (var_arrayclass == NULL) {
var61 = 1; /* is null */
} else {
var61 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_arrayclass,((val*)NULL)) on <var_arrayclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_arrayclass,var_other) on <var_arrayclass:nullable MClass(MClass)> */
var66 = var_arrayclass == var_other;
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
if (var61){
goto RET_LABEL;
} else {
}
var67 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var67, 1l); /* Direct call array#Array#with_capacity on <var67:Array[MType]>*/
}
var_68 = var67;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_68, var_mtype); /* Direct call array#AbstractArray#push on <var_68:Array[MType]>*/
}
{
var69 = nitc___nitc__MClass___get_mtype(var_arrayclass, var_68);
}
var_mtype = var69;
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var72 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var70 = var72;
RET_LABEL71:(void)0;
}
}
if (var70 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 767);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var70) on <var70:nullable ASignature> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1679);
fatal_exit(1);
}
var75 = var70->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var70:nullable ASignature> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1679);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var73, var_i);
}
{
{ /* Inline scope#AParam#variable (var76) on <var76:ANode(AParam)> */
var79 = var76->attrs[COLOR_nitc__scope__AParam___variable].val; /* _variable on <var76:ANode(AParam)> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
var_variable = var77;
if (var_variable == NULL) {
var80 = 0; /* is null */
} else {
var80 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other83 = ((val*)NULL);
{
var84 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_variable, var_other83); /* == on <var_variable:nullable Variable(Variable)>*/
}
var85 = !var84;
var81 = var85;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
var80 = var81;
}
if (unlikely(!var80)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 768);
fatal_exit(1);
}
{
{ /* Inline typing#Variable#declared_type= (var_variable,var_mtype) on <var_variable:nullable Variable(Variable)> */
var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val = var_mtype; /* _declared_type on <var_variable:nullable Variable(Variable)> */
RET_LABEL86:(void)0;
}
}
{
var87 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var87;
}
BREAK_label: (void)0;
{
{ /* Inline parser_nodes#AMethPropdef#n_block (self) on <self:AMethPropdef> */
var90 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var88 = var90;
RET_LABEL89:(void)0;
}
}
var_nblock = var88;
if (var_nblock == NULL) {
var91 = 1; /* is null */
} else {
var91 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nblock,((val*)NULL)) on <var_nblock:nullable AExpr> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nblock,var_other) on <var_nblock:nullable AExpr(AExpr)> */
var96 = var_nblock == var_other;
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
for(;;) {
{
{ /* Inline typing#TypeVisitor#dirty= (var_v,0) on <var_v:TypeVisitor> */
var_v->attrs[COLOR_nitc__typing__TypeVisitor___dirty].s = 0; /* _dirty on <var_v:TypeVisitor> */
RET_LABEL97:(void)0;
}
}
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var_nblock); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline typing#TypeVisitor#has_loop (var_v) on <var_v:TypeVisitor> */
var101 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___has_loop].s; /* _has_loop on <var_v:TypeVisitor> */
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
var106 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___dirty].s; /* _dirty on <var_v:TypeVisitor> */
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
var109 = NEW_nitc__typing__PostTypingVisitor(&type_nitc__typing__PostTypingVisitor);
{
((void(*)(val* self, val* p0))(var109->class->vft[COLOR_nitc__typing__PostTypingVisitor__type_visitor_61d]))(var109, var_v); /* type_visitor= on <var109:PostTypingVisitor>*/
}
{
((void(*)(val* self))(var109->class->vft[COLOR_core__kernel__Object__init]))(var109); /* init on <var109:PostTypingVisitor>*/
}
var_post_visitor = var109;
{
nitc___nitc__Visitor___enter_visit(var_post_visitor, self); /* Direct call parser_nodes#Visitor#enter_visit on <var_post_visitor:PostTypingVisitor>*/
}
{
{ /* Inline flow#AExpr#after_flow_context (var_nblock) on <var_nblock:nullable AExpr(AExpr)> */
var113 = var_nblock->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_nblock:nullable AExpr(AExpr)> */
var111 = var113;
RET_LABEL112:(void)0;
}
}
if (var111 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 784);
fatal_exit(1);
} else {
var114 = nitc___nitc__FlowContext___is_unreachable(var111);
}
var115 = !var114;
var_116 = var115;
if (var115){
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var119 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var117 = var119;
RET_LABEL118:(void)0;
}
}
if (var117 == NULL) {
var120 = 0; /* is null */
} else {
var120 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var117,((val*)NULL)) on <var117:nullable MType> */
var_other83 = ((val*)NULL);
{
var123 = ((short int(*)(val* self, val* p0))(var117->class->vft[COLOR_core__kernel__Object___61d_61d]))(var117, var_other83); /* == on <var117:nullable MType(MType)>*/
}
var124 = !var123;
var121 = var124;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
var120 = var121;
}
var110 = var120;
} else {
var110 = var_116;
}
if (var110){
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "Error: reached end of function; expected `return` with a value.";
var128 = core__flat___NativeString___to_s_full(var127, 63l, 63l);
var126 = var128;
varonce125 = var126;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var126); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method typing#PostTypingVisitor#type_visitor for (self: PostTypingVisitor): TypeVisitor */
val* nitc__typing___nitc__typing__PostTypingVisitor___type_visitor(val* self) {
val* var /* : TypeVisitor */;
val* var1 /* : TypeVisitor */;
var1 = self->attrs[COLOR_nitc__typing__PostTypingVisitor___type_visitor].val; /* _type_visitor on <self:PostTypingVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_visitor");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 793);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#PostTypingVisitor#type_visitor= for (self: PostTypingVisitor, TypeVisitor) */
void nitc__typing___nitc__typing__PostTypingVisitor___type_visitor_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__PostTypingVisitor___type_visitor].val = p0; /* _type_visitor on <self:PostTypingVisitor> */
RET_LABEL:;
}
/* method typing#PostTypingVisitor#visit for (self: PostTypingVisitor, ANode) */
void nitc__typing___nitc__typing__PostTypingVisitor___nitc__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
val* var /* : TypeVisitor */;
val* var2 /* : TypeVisitor */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var6 /* : nullable MType */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var_13 /* var : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
var_n = p0;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode>*/
}
{
{ /* Inline typing#PostTypingVisitor#type_visitor (self) on <self:PostTypingVisitor> */
var2 = self->attrs[COLOR_nitc__typing__PostTypingVisitor___type_visitor].val; /* _type_visitor on <self:PostTypingVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _type_visitor");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 793);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__typing__ANode__accept_post_typing]))(var_n, var); /* accept_post_typing on <var_n:ANode>*/
}
/* <var_n:ANode> isa AExpr */
cltype = type_nitc__AExpr.color;
idtype = type_nitc__AExpr.id;
if(cltype >= var_n->type->table_size) {
var5 = 0;
} else {
var5 = var_n->type->type_table[cltype] == idtype;
}
var_ = var5;
if (var5){
{
var6 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var_n); /* mtype on <var_n:ANode(AExpr)>*/
}
if (var6 == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var6,((val*)NULL)) on <var6:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var6,var_other) on <var6:nullable MType(MType)> */
var12 = var6 == var_other;
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
var4 = var7;
} else {
var4 = var_;
}
var_13 = var4;
if (var4){
{
{ /* Inline typing#AExpr#is_typed (var_n) on <var_n:ANode(AExpr)> */
var16 = var_n->attrs[COLOR_nitc__typing__AExpr___is_typed].s; /* _is_typed on <var_n:ANode(AExpr)> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var17 = !var14;
var3 = var17;
} else {
var3 = var_13;
}
if (var3){
{
{ /* Inline modelbuilder_base#ANode#is_broken= (var_n,1) on <var_n:ANode(AExpr)> */
var_n->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = 1; /* _is_broken on <var_n:ANode(AExpr)> */
RET_LABEL18:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method typing#PostTypingVisitor#init for (self: PostTypingVisitor) */
void nitc__typing___nitc__typing__PostTypingVisitor___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__typing___nitc__typing__PostTypingVisitor___core__kernel__Object__init]))(self); /* init on <self:PostTypingVisitor>*/
}
RET_LABEL:;
}
/* method typing#ANode#accept_post_typing for (self: ANode, TypeVisitor) */
void nitc__typing___ANode___accept_post_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method typing#AAttrPropdef#do_typing for (self: AAttrPropdef, ModelBuilder) */
void nitc__typing___AAttrPropdef___APropdef__do_typing(val* self, val* p0) {
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
val* var62 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
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
var6 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
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
var16 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
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
var23 = NEW_nitc__typing__TypeVisitor(&type_nitc__typing__TypeVisitor);
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var26 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2227);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var24) on <var24:MClassDef> */
var29 = var24->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var24:MClassDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 573);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__typing__TypeVisitor__modelbuilder_61d]))(var23, var_modelbuilder); /* modelbuilder= on <var23:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__typing__TypeVisitor__mmodule_61d]))(var23, var27); /* mmodule= on <var23:TypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__typing__TypeVisitor__mpropdef_61d]))(var23, var_mpropdef); /* mpropdef= on <var23:TypeVisitor>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_core__kernel__Object__init]))(var23); /* init on <var23:TypeVisitor>*/
}
var_v = var23;
{
{ /* Inline typing#TypeVisitor#selfvariable (var_v) on <var_v:TypeVisitor> */
var32 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___selfvariable].val; /* _selfvariable on <var_v:TypeVisitor> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 51);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline typing#APropdef#selfvariable= (self,var30) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__typing__APropdef___selfvariable].val = var30; /* _selfvariable on <self:AAttrPropdef> */
RET_LABEL33:(void)0;
}
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var36 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
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
var41 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nexpr, var_other40); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
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
var45 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <self:AAttrPropdef> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_mtype = var43;
{
var46 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(var_v, var_nexpr, var_mtype);
}
} else {
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_block (self) on <self:AAttrPropdef> */
var49 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
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
var53 = ((short int(*)(val* self, val* p0))(var_nblock->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nblock, var_other40); /* == on <var_nblock:nullable AExpr(AExpr)>*/
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
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var_nblock); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline flow#AExpr#after_flow_context (var_nblock) on <var_nblock:nullable AExpr(AExpr)> */
var57 = var_nblock->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_nblock:nullable AExpr(AExpr)> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (var55 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 826);
fatal_exit(1);
} else {
var58 = nitc___nitc__FlowContext___is_unreachable(var55);
}
var59 = !var58;
if (var59){
if (likely(varonce!=NULL)) {
var60 = varonce;
} else {
var61 = "Error: reached end of block; expected `return`.";
var62 = core__flat___NativeString___to_s_full(var61, 47l, 47l);
var60 = var62;
varonce = var60;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var60); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method typing#AExpr#mtype for (self: AExpr): nullable MType */
val* nitc__typing___AExpr___mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#mtype= for (self: AExpr, nullable MType) */
void nitc__typing___AExpr___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = p0; /* _mtype on <self:AExpr> */
RET_LABEL:;
}
/* method typing#AExpr#is_typed for (self: AExpr): Bool */
short int nitc__typing___AExpr___is_typed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__typing__AExpr___is_typed].s; /* _is_typed on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#is_typed= for (self: AExpr, Bool) */
void nitc__typing___AExpr___is_typed_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = p0; /* _is_typed on <self:AExpr> */
RET_LABEL:;
}
/* method typing#AExpr#implicit_cast_to for (self: AExpr): nullable MType */
val* nitc__typing___AExpr___implicit_cast_to(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__typing__AExpr___implicit_cast_to].val; /* _implicit_cast_to on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#implicit_cast_to= for (self: AExpr, nullable MType) */
void nitc__typing___AExpr___implicit_cast_to_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AExpr___implicit_cast_to].val = p0; /* _implicit_cast_to on <self:AExpr> */
RET_LABEL:;
}
/* method typing#AExpr#its_variable for (self: AExpr): nullable Variable */
val* nitc__typing___AExpr___its_variable(val* self) {
val* var /* : nullable Variable */;
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AExpr#accept_typing for (self: AExpr, TypeVisitor) */
void nitc__typing___AExpr___accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : String */;
val* var5 /* : String */;
val* var6 /* : String */;
var_v = p0;
if (unlikely(varonce==NULL)) {
var = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "no implemented accept_typing for ";
var4 = core__flat___NativeString___to_s_full(var3, 33l, 33l);
var2 = var4;
varonce1 = var2;
}
((struct instance_core__NativeArray*)var)->values[0]=var2;
} else {
var = varonce;
varonce = NULL;
}
{
var5 = core__abstract_text___Object___class_name(self);
}
((struct instance_core__NativeArray*)var)->values[1]=var5;
{
var6 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var6); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
RET_LABEL:;
}
/* method typing#AExpr#comprehension for (self: AExpr): nullable AArrayExpr */
val* nitc__typing___AExpr___comprehension(val* self) {
val* var /* : nullable AArrayExpr */;
val* var1 /* : nullable AArrayExpr */;
var1 = self->attrs[COLOR_nitc__typing__AExpr___comprehension].val; /* _comprehension on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#comprehension= for (self: AExpr, nullable AArrayExpr) */
void nitc__typing___AExpr___comprehension_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__AExpr___comprehension].val = p0; /* _comprehension on <self:AExpr> */
RET_LABEL:;
}
/* method typing#AExpr#vararg_decl for (self: AExpr): Int */
long nitc__typing___AExpr___vararg_decl(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__typing__AExpr___vararg_decl].l; /* _vararg_decl on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#vararg_decl= for (self: AExpr, Int) */
void nitc__typing___AExpr___vararg_decl_61d(val* self, long p0) {
self->attrs[COLOR_nitc__typing__AExpr___vararg_decl].l = p0; /* _vararg_decl on <self:AExpr> */
RET_LABEL:;
}
/* method typing#ABlockExpr#accept_typing for (self: ABlockExpr, TypeVisitor) */
void nitc__typing___ABlockExpr___AExpr__accept_typing(val* self, val* p0) {
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
var2 = self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1744);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:Iterator[AExpr]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:Iterator[AExpr]>*/
}
var_e = var6;
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var_e); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:Iterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:Iterator[AExpr]>*/
}
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:ABlockExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:ABlockExpr> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ABlockExpr#mtype for (self: ABlockExpr): nullable MType */
val* nitc__typing___ABlockExpr___AExpr__mtype(val* self) {
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
var3 = self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1744);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var1);
}
if (var4){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var7 = self->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1744);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core___core__SequenceRead___last(var5);
}
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var8); /* mtype on <var8:nullable Object(AExpr)>*/
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AVardeclExpr#accept_typing for (self: AVardeclExpr, TypeVisitor) */
void nitc__typing___AVardeclExpr___AExpr__accept_typing(val* self, val* p0) {
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
val* var56 /* : String */;
val* var58 /* : NativeArray[String] */;
static val* varonce57;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : String */;
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
val* var89 /* : String */;
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
var2 = self->attrs[COLOR_nitc__scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
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
var11 = self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:AVardeclExpr> */
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
var18 = nitc__typing___nitc__typing__TypeVisitor___resolve_mtype(var_v, var_ntype);
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
var27 = self->attrs[COLOR_nitc__parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
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
var32 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nexpr, var_other31); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
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
var37 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other31); /* == on <var_mtype:nullable MType(MType)>*/
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
var39 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(var_v, var_nexpr, var_mtype);
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
var49 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype, var_other31); /* == on <var_ntype:nullable AType(AType)>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 911);
fatal_exit(1);
}
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var53 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
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
var56 = core__flat___NativeString___to_s_full(var55, 12l, 12l);
var54 = var56;
varonce = var54;
}
if (unlikely(varonce57==NULL)) {
var58 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "Warning: useless type definition for variable `";
var62 = core__flat___NativeString___to_s_full(var61, 47l, 47l);
var60 = var62;
varonce59 = var60;
}
((struct instance_core__NativeArray*)var58)->values[0]=var60;
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "`";
var66 = core__flat___NativeString___to_s_full(var65, 1l, 1l);
var64 = var66;
varonce63 = var64;
}
((struct instance_core__NativeArray*)var58)->values[2]=var64;
} else {
var58 = varonce57;
varonce57 = NULL;
}
{
{ /* Inline scope#Variable#name (var_variable) on <var_variable:nullable Variable(Variable)> */
var69 = var_variable->attrs[COLOR_nitc__scope__Variable___name].val; /* _name on <var_variable:nullable Variable(Variable)> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 36);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
((struct instance_core__NativeArray*)var58)->values[1]=var67;
{
var70 = ((val*(*)(val* self))(var58->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var58); /* native_to_s on <var58:NativeArray[String]>*/
}
varonce57 = var58;
{
nitc___nitc__ModelBuilder___advice(var51, var_ntype, var54, var70); /* Direct call modelbuilder_base#ModelBuilder#advice on <var51:ModelBuilder>*/
}
} else {
}
} else {
{
var71 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(var_v, var_nexpr);
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
cltype = type_nitc__MNullType.color;
idtype = type_nitc__MNullType.id;
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
var89 = core__flat___NativeString___to_s_full(var88, 6l, 6l);
var87 = var89;
varonce86 = var87;
}
{
var90 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, self, var87);
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
var99 = var_objclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_objclass:nullable MClass(MClass)> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 507);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
var100 = nitc___nitc__MType___as_nullable(var97);
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
var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val = var_decltype; /* _declared_type on <var_variable:nullable Variable(Variable)> */
RET_LABEL107:(void)0;
}
}
{
nitc__typing___nitc__typing__TypeVisitor___set_variable(var_v, self, var_variable, var_mtype); /* Direct call typing#TypeVisitor#set_variable on <var_v:TypeVisitor>*/
}
{
{ /* Inline typing#AExpr#mtype= (self,var_mtype) on <self:AVardeclExpr> */
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:AVardeclExpr> */
RET_LABEL108:(void)0;
}
}
{
{ /* Inline typing#AExpr#is_typed= (self,1) on <self:AVardeclExpr> */
self->attrs[COLOR_nitc__typing__AExpr___is_typed].s = 1; /* _is_typed on <self:AVardeclExpr> */
RET_LABEL109:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AVarExpr#its_variable for (self: AVarExpr): nullable Variable */
val* nitc__typing___AVarExpr___AExpr__its_variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
val* var3 /* : nullable Variable */;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarExpr> */
var3 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarExpr> */
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
void nitc__typing___AVarExpr___AExpr__accept_typing(val* self, val* p0) {
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
var2 = self->attrs[COLOR_nitc__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarExpr> */
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
var9 = nitc__typing___nitc__typing__TypeVisitor___get_variable(var_v, self, var_variable);
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
var14 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other13); /* == on <var_mtype:nullable MType(MType)>*/
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
self->attrs[COLOR_nitc__typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:AVarExpr> */
RET_LABEL16:(void)0;
}
}
RET_LABEL:;
}
