#include "nitc__typing.sep.0.h"
/* method typing$ToolContext$typing_phase for (self: ToolContext): Phase */
val* nitc__typing___ToolContext___typing_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nitc__typing__ToolContext___typing_phase].val; /* _typing_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _typing_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 26);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing$TypingPhase$process_npropdef for (self: TypingPhase, APropdef) */
void nitc__typing___nitc__typing__TypingPhase___nitc__phase__Phase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : ModelBuilder */;
var_npropdef = p0;
{
{ /* Inline phase$Phase$toolcontext (self) on <self:TypingPhase> */
var2 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:TypingPhase> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 210);
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
/* method typing$TypeVisitor$modelbuilder for (self: TypeVisitor): ModelBuilder */
val* nitc__typing___nitc__typing__TypeVisitor___modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
var1 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing$TypeVisitor$modelbuilder= for (self: TypeVisitor, ModelBuilder) */
void nitc__typing___nitc__typing__TypeVisitor___modelbuilder_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val = p0; /* _modelbuilder on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing$TypeVisitor$mmodule for (self: TypeVisitor): MModule */
val* nitc__typing___nitc__typing__TypeVisitor___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing$TypeVisitor$mmodule= for (self: TypeVisitor, MModule) */
void nitc__typing___nitc__typing__TypeVisitor___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val = p0; /* _mmodule on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing$TypeVisitor$anchor for (self: TypeVisitor): nullable MClassType */
val* nitc__typing___nitc__typing__TypeVisitor___anchor(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$TypeVisitor$anchor= for (self: TypeVisitor, nullable MClassType) */
void nitc__typing___nitc__typing__TypeVisitor___anchor_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val = p0; /* _anchor on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing$TypeVisitor$mclassdef for (self: TypeVisitor): nullable MClassDef */
val* nitc__typing___nitc__typing__TypeVisitor___mclassdef(val* self) {
val* var /* : nullable MClassDef */;
val* var1 /* : nullable MClassDef */;
var1 = self->attrs[COLOR_nitc__typing__TypeVisitor___mclassdef].val; /* _mclassdef on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$TypeVisitor$mclassdef= for (self: TypeVisitor, nullable MClassDef) */
void nitc__typing___nitc__typing__TypeVisitor___mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__TypeVisitor___mclassdef].val = p0; /* _mclassdef on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing$TypeVisitor$mpropdef for (self: TypeVisitor): nullable MPropDef */
val* nitc__typing___nitc__typing__TypeVisitor___mpropdef(val* self) {
val* var /* : nullable MPropDef */;
val* var1 /* : nullable MPropDef */;
var1 = self->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$TypeVisitor$mpropdef= for (self: TypeVisitor, nullable MPropDef) */
void nitc__typing___nitc__typing__TypeVisitor___mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val = p0; /* _mpropdef on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing$TypeVisitor$selfvariable for (self: TypeVisitor): Variable */
val* nitc__typing___nitc__typing__TypeVisitor___selfvariable(val* self) {
val* var /* : Variable */;
val* var1 /* : Variable */;
var1 = self->attrs[COLOR_nitc__typing__TypeVisitor___selfvariable].val; /* _selfvariable on <self:TypeVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 51);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing$TypeVisitor$selfvariable= for (self: TypeVisitor, Variable) */
void nitc__typing___nitc__typing__TypeVisitor___selfvariable_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__TypeVisitor___selfvariable].val = p0; /* _selfvariable on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing$TypeVisitor$is_toplevel_context for (self: TypeVisitor): Bool */
short int nitc__typing___nitc__typing__TypeVisitor___is_toplevel_context(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__typing__TypeVisitor___is_toplevel_context].s; /* _is_toplevel_context on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$TypeVisitor$is_toplevel_context= for (self: TypeVisitor, Bool) */
void nitc__typing___nitc__typing__TypeVisitor___is_toplevel_context_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__typing__TypeVisitor___is_toplevel_context].s = p0; /* _is_toplevel_context on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing$TypeVisitor$init for (self: TypeVisitor) */
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
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Bool */;
val* var27 /* : nullable Bool */;
val* var_selfvariable /* var selfvariable: Variable */;
val* var29 /* : MClassType */;
val* var31 /* : MClassType */;
val* var33 /* : MProperty */;
val* var35 /* : MProperty */;
val* var_mprop /* var mprop: MProperty */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__typing___nitc__typing__TypeVisitor___core__kernel__Object__init]))(self); /* init on <self:TypeVisitor>*/
}
{
{ /* Inline typing$TypeVisitor$mpropdef (self) on <self:TypeVisitor> */
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
{ /* Inline kernel$Object$!= (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MPropDef> */
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
{ /* Inline typing$TypeVisitor$mpropdef= (self,var_mpropdef) on <self:TypeVisitor> */
self->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val = var_mpropdef; /* _mpropdef on <self:TypeVisitor> */
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var11 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MPropDef(MPropDef)> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_mclassdef = var9;
{
{ /* Inline typing$TypeVisitor$mclassdef= (self,var_mclassdef) on <self:TypeVisitor> */
self->attrs[COLOR_nitc__typing__TypeVisitor___mclassdef].val = var_mclassdef; /* _mclassdef on <self:TypeVisitor> */
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var15 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline typing$TypeVisitor$anchor= (self,var13) on <self:TypeVisitor> */
self->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val = var13; /* _anchor on <self:TypeVisitor> */
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var19 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
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
var24 = (val*)(4l<<2|1);
var25 = (val*)(4l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
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
{ /* Inline typing$TypeVisitor$selfvariable= (self,var_selfvariable) on <self:TypeVisitor> */
self->attrs[COLOR_nitc__typing__TypeVisitor___selfvariable].val = var_selfvariable; /* _selfvariable on <self:TypeVisitor> */
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model$MClass$mclass_type (var_mclass) on <var_mclass:MClass> */
var31 = var_mclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:MClass> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline typing$Variable$declared_type= (var_selfvariable,var29) on <var_selfvariable:Variable> */
var_selfvariable->attrs[COLOR_nitc__typing__Variable___declared_type].val = var29; /* _declared_type on <var_selfvariable:Variable> */
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model$MPropDef$mproperty (var_mpropdef) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var35 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MPropDef(MPropDef)> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
var_mprop = var33;
/* <var_mprop:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var37 = 0;
} else {
var37 = var_mprop->type->type_table[cltype] == idtype;
}
var_ = var37;
if (var37){
{
{ /* Inline model$MMethod$is_new (var_mprop) on <var_mprop:MProperty(MMethod)> */
var40 = var_mprop->attrs[COLOR_nitc__model__MMethod___is_new].s; /* _is_new on <var_mprop:MProperty(MMethod)> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
var36 = var38;
} else {
var36 = var_;
}
if (var36){
{
{ /* Inline typing$TypeVisitor$is_toplevel_context= (self,1) on <self:TypeVisitor> */
self->attrs[COLOR_nitc__typing__TypeVisitor___is_toplevel_context].s = 1; /* _is_toplevel_context on <self:TypeVisitor> */
RET_LABEL41:(void)0;
}
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method typing$TypeVisitor$anchor_to for (self: TypeVisitor, MType): MType */
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
{ /* Inline typing$TypeVisitor$anchor (self) on <self:TypeVisitor> */
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
{ /* Inline kernel$Object$== (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_anchor,var_other) on <var_anchor:nullable MClassType(MClassType)> */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 86);
fatal_exit(1);
}
var = var_mtype;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$TypeVisitor$mmodule (self) on <self:TypeVisitor> */
var14 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
/* method typing$TypeVisitor$is_subtype for (self: TypeVisitor, MType, MType): Bool */
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
{ /* Inline typing$TypeVisitor$mmodule (self) on <self:TypeVisitor> */
var3 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing$TypeVisitor$anchor (self) on <self:TypeVisitor> */
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
/* method typing$TypeVisitor$resolve_for for (self: TypeVisitor, MType, MType, Bool): MType */
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
{ /* Inline typing$TypeVisitor$anchor (self) on <self:TypeVisitor> */
var3 = self->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing$TypeVisitor$mmodule (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
/* method typing$TypeVisitor$check_subtype for (self: TypeVisitor, ANode, MType, MType, Bool): nullable MType */
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
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : ModelBuilder */;
val* var50 /* : ModelBuilder */;
val* var52 /* : NativeArray[String] */;
static val* varonce51;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : CString */;
val* var56 /* : String */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Bool */;
val* var60 /* : nullable Bool */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : CString */;
val* var64 /* : String */;
val* var65 /* : nullable Int */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Bool */;
val* var68 /* : nullable Bool */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Bool */;
val* var76 /* : nullable Bool */;
val* var77 /* : String */;
val* var78 /* : String */;
val* var79 /* : String */;
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
/* <var_sup:MType> isa MErrorType */
cltype = type_nitc__MErrorType.color;
idtype = type_nitc__MErrorType.id;
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
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var10 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var11 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Type Error: expected `";
var16 = (val*)(22l<<2|1);
var17 = (val*)(22l<<2|1);
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
var22 = "`, got `";
var24 = (val*)(8l<<2|1);
var25 = (val*)(8l<<2|1);
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
var30 = ": ";
var32 = (val*)(2l<<2|1);
var33 = (val*)(2l<<2|1);
var34 = (val*)((long)(0)<<2|3);
var35 = (val*)((long)(0)<<2|3);
var31 = core__flat___CString___to_s_unsafe(var30, var32, var33, var34, var35);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var11)->values[4]=var29;
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "`.";
var40 = (val*)(2l<<2|1);
var41 = (val*)(2l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var11)->values[6]=var37;
} else {
var11 = varonce;
varonce = NULL;
}
{
var44 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sup); /* to_s on <var_sup:MType>*/
}
((struct instance_core__NativeArray*)var11)->values[1]=var44;
{
var45 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sub); /* to_s on <var_sub:MType>*/
}
((struct instance_core__NativeArray*)var11)->values[3]=var45;
{
var46 = ((val*(*)(val* self))(var_u->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_u); /* to_s on <var_u:MType>*/
}
((struct instance_core__NativeArray*)var11)->values[5]=var46;
{
var47 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
nitc___nitc__ModelBuilder___error(var8, var_node, var47); /* Direct call modelbuilder_base$ModelBuilder$error on <var8:ModelBuilder>*/
}
} else {
{
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var50 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (unlikely(varonce51==NULL)) {
var52 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "Type Error: expected `";
var57 = (val*)(22l<<2|1);
var58 = (val*)(22l<<2|1);
var59 = (val*)((long)(0)<<2|3);
var60 = (val*)((long)(0)<<2|3);
var56 = core__flat___CString___to_s_unsafe(var55, var57, var58, var59, var60);
var54 = var56;
varonce53 = var54;
}
((struct instance_core__NativeArray*)var52)->values[0]=var54;
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "`, got `";
var65 = (val*)(8l<<2|1);
var66 = (val*)(8l<<2|1);
var67 = (val*)((long)(0)<<2|3);
var68 = (val*)((long)(0)<<2|3);
var64 = core__flat___CString___to_s_unsafe(var63, var65, var66, var67, var68);
var62 = var64;
varonce61 = var62;
}
((struct instance_core__NativeArray*)var52)->values[2]=var62;
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "`.";
var73 = (val*)(2l<<2|1);
var74 = (val*)(2l<<2|1);
var75 = (val*)((long)(0)<<2|3);
var76 = (val*)((long)(0)<<2|3);
var72 = core__flat___CString___to_s_unsafe(var71, var73, var74, var75, var76);
var70 = var72;
varonce69 = var70;
}
((struct instance_core__NativeArray*)var52)->values[4]=var70;
} else {
var52 = varonce51;
varonce51 = NULL;
}
{
var77 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sup); /* to_s on <var_sup:MType>*/
}
((struct instance_core__NativeArray*)var52)->values[1]=var77;
{
var78 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sub); /* to_s on <var_sub:MType>*/
}
((struct instance_core__NativeArray*)var52)->values[3]=var78;
{
var79 = ((val*(*)(val* self))(var52->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var52); /* native_to_s on <var52:NativeArray[String]>*/
}
varonce51 = var52;
{
nitc___nitc__ModelBuilder___error(var48, var_node, var79); /* Direct call modelbuilder_base$ModelBuilder$error on <var48:ModelBuilder>*/
}
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$TypeVisitor$visit_stmt for (self: TypeVisitor, nullable AExpr) */
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
{ /* Inline kernel$Object$== (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_nexpr,var_other) on <var_nexpr:nullable AExpr(AExpr)> */
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
/* method typing$TypeVisitor$visit_expr for (self: TypeVisitor, AExpr): nullable MType */
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
char* var42 /* : CString */;
val* var43 /* : String */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Bool */;
val* var47 /* : nullable Bool */;
val* var_more_message /* var more_message: nullable Object */;
val* var48 /* : nullable ANode */;
val* var50 /* : nullable ANode */;
val* var_p /* var p: nullable ANode */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
val* var56 /* : nullable String */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : CString */;
val* var62 /* : String */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Bool */;
val* var66 /* : nullable Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Bool */;
val* var74 /* : nullable Bool */;
val* var75 /* : Text */;
val* var77 /* : NativeArray[String] */;
static val* varonce76;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Bool */;
val* var85 /* : nullable Bool */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : CString */;
val* var89 /* : String */;
val* var90 /* : nullable Int */;
val* var91 /* : nullable Int */;
val* var92 /* : nullable Bool */;
val* var93 /* : nullable Bool */;
val* var94 /* : String */;
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
{ /* Inline kernel$Object$!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
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
{ /* Inline typing$AExpr$is_typed (var_nexpr) on <var_nexpr:AExpr> */
var9 = var_nexpr->attrs[COLOR_nitc__typing__AExpr___is_typed].s; /* _is_typed on <var_nexpr:AExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var10 = !var7;
if (var10){
{
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var13 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var11) on <var11:ModelBuilder> */
var16 = var11->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var11:ModelBuilder> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$error_count (var14) on <var14:ToolContext> */
var19 = var14->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <var14:ToolContext> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var17,0l) on <var17:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var22 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
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
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var27 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var25) on <var25:ModelBuilder> */
var30 = var25->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var25:ModelBuilder> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$verbose_level (var28) on <var28:ToolContext> */
var33 = var28->attrs[COLOR_nitc__toolcontext__ToolContext___verbose_level].l; /* _verbose_level on <var28:ToolContext> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var31,1l) on <var31:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var36 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
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
var44 = (val*)(28l<<2|1);
var45 = (val*)(28l<<2|1);
var46 = (val*)((long)(0)<<2|3);
var47 = (val*)((long)(0)<<2|3);
var43 = core__flat___CString___to_s_unsafe(var42, var44, var45, var46, var47);
var41 = var43;
varonce = var41;
}
{
nitc___nitc__ANode___debug(var_nexpr, var41); /* Direct call parser_nodes$ANode$debug on <var_nexpr:AExpr>*/
}
} else {
}
} else {
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var_more_message = ((val*)NULL);
{
{ /* Inline parser_nodes$ANode$parent (var_nexpr) on <var_nexpr:AExpr> */
var50 = var_nexpr->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var_nexpr:AExpr> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
var_p = var48;
if (var_p == NULL) {
var51 = 0; /* is null */
} else {
var51 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_p,((val*)NULL)) on <var_p:nullable ANode> */
var_other = ((val*)NULL);
{
var54 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_p, var_other); /* == on <var_p:nullable ANode(ANode)>*/
}
var55 = !var54;
var52 = var55;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var51 = var52;
}
if (var51){
{
var56 = ((val*(*)(val* self, val* p0))(var_p->class->vft[COLOR_nitc__typing__ANode__bad_expr_message]))(var_p, var_nexpr); /* bad_expr_message on <var_p:nullable ANode(ANode)>*/
}
var_more_message = var56;
} else {
}
if (var_more_message == NULL) {
var57 = 1; /* is null */
} else {
var57 = 0; /* arg is null but recv is not */
}
if (0) {
var58 = ((short int(*)(val* self, val* p0))(var_more_message->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_more_message, ((val*)NULL)); /* == on <var_more_message:nullable Object(nullable String)>*/
var57 = var58;
}
if (var57){
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "";
var63 = (val*)(0l<<2|1);
var64 = (val*)(0l<<2|1);
var65 = (val*)((long)(0)<<2|3);
var66 = (val*)((long)(0)<<2|3);
var62 = core__flat___CString___to_s_unsafe(var61, var63, var64, var65, var66);
var60 = var62;
varonce59 = var60;
}
var_more_message = var60;
} else {
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = " ";
var71 = (val*)(1l<<2|1);
var72 = (val*)(1l<<2|1);
var73 = (val*)((long)(0)<<2|3);
var74 = (val*)((long)(0)<<2|3);
var70 = core__flat___CString___to_s_unsafe(var69, var71, var72, var73, var74);
var68 = var70;
varonce67 = var68;
}
{
var75 = ((val*(*)(val* self, val* p0))(var68->class->vft[COLOR_core__abstract_text__Text___43d]))(var68, var_more_message); /* + on <var68:String>*/
}
var_more_message = var75;
}
if (unlikely(varonce76==NULL)) {
var77 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "Error: expected an expression";
var82 = (val*)(29l<<2|1);
var83 = (val*)(29l<<2|1);
var84 = (val*)((long)(0)<<2|3);
var85 = (val*)((long)(0)<<2|3);
var81 = core__flat___CString___to_s_unsafe(var80, var82, var83, var84, var85);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var77)->values[0]=var79;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = ".";
var90 = (val*)(1l<<2|1);
var91 = (val*)(1l<<2|1);
var92 = (val*)((long)(0)<<2|3);
var93 = (val*)((long)(0)<<2|3);
var89 = core__flat___CString___to_s_unsafe(var88, var90, var91, var92, var93);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var77)->values[2]=var87;
} else {
var77 = varonce76;
varonce76 = NULL;
}
((struct instance_core__NativeArray*)var77)->values[1]=var_more_message;
{
var94 = ((val*(*)(val* self))(var77->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var77); /* native_to_s on <var77:NativeArray[String]>*/
}
varonce76 = var77;
{
nitc__typing___nitc__typing__TypeVisitor___error(self, var_nexpr, var94); /* Direct call typing$TypeVisitor$error on <self:TypeVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$TypeVisitor$visit_expr_subtype for (self: TypeVisitor, AExpr, nullable MType): nullable MType */
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
{ /* Inline kernel$Object$== (var_sub,((val*)NULL)) on <var_sub:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_sub,var_other) on <var_sub:nullable MType(MType)> */
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
{ /* Inline kernel$Object$== (var_sup,((val*)NULL)) on <var_sup:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_sup,var_other) on <var_sup:nullable MType(MType)> */
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
{ /* Inline kernel$Object$!= (var_res,var_sub) on <var_res:nullable MType> */
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
{ /* Inline typing$AExpr$implicit_cast_to= (var_nexpr,var_res) on <var_nexpr:AExpr> */
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
/* method typing$TypeVisitor$visit_expr_bool for (self: TypeVisitor, AExpr): nullable MType */
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
/* method typing$TypeVisitor$check_expr_cast for (self: TypeVisitor, ANode, AExpr, AType): nullable MType */
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
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
val* var33 /* : NativeArray[String] */;
static val* varonce32;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Bool */;
val* var41 /* : nullable Bool */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Bool */;
val* var50 /* : String */;
val* var51 /* : String */;
short int var52 /* : Bool */;
val* var53 /* : ModelBuilder */;
val* var55 /* : ModelBuilder */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : CString */;
val* var59 /* : String */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Bool */;
val* var63 /* : nullable Bool */;
val* var65 /* : NativeArray[String] */;
static val* varonce64;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : nullable Int */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Bool */;
val* var73 /* : nullable Bool */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : CString */;
val* var77 /* : String */;
val* var78 /* : nullable Int */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Bool */;
val* var81 /* : nullable Bool */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
val* var86 /* : nullable Int */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Bool */;
val* var89 /* : nullable Bool */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var92 /* : String */;
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
{ /* Inline kernel$Object$== (var_sub,((val*)NULL)) on <var_sub:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_sub,var_other) on <var_sub:nullable MType(MType)> */
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
{ /* Inline modelbuilder_base$AType$mtype (var_ntype) on <var_ntype:AType> */
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
{ /* Inline kernel$Object$== (var_sup,((val*)NULL)) on <var_sup:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_sup,var_other) on <var_sup:nullable MType(MType)> */
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
{ /* Inline kernel$Object$== (var_sup,var_sub) on <var_sup:nullable MType(MType)> */
var_other = var_sub;
{
{ /* Inline kernel$Object$is_same_instance (var_sup,var_other) on <var_sup:nullable MType(MType)> */
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
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var24 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
var28 = (val*)(17l<<2|1);
var29 = (val*)(17l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce = var25;
}
if (unlikely(varonce32==NULL)) {
var33 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Warning: expression is already a `";
var38 = (val*)(34l<<2|1);
var39 = (val*)(34l<<2|1);
var40 = (val*)((long)(0)<<2|3);
var41 = (val*)((long)(0)<<2|3);
var37 = core__flat___CString___to_s_unsafe(var36, var38, var39, var40, var41);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var33)->values[0]=var35;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "`.";
var46 = (val*)(2l<<2|1);
var47 = (val*)(2l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var33)->values[2]=var43;
} else {
var33 = varonce32;
varonce32 = NULL;
}
{
var50 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sup); /* to_s on <var_sup:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var33)->values[1]=var50;
{
var51 = ((val*(*)(val* self))(var33->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce32 = var33;
{
nitc___nitc__ModelBuilder___warning(var22, var_node, var25, var51); /* Direct call modelbuilder_base$ModelBuilder$warning on <var22:ModelBuilder>*/
}
} else {
{
var52 = nitc__typing___nitc__typing__TypeVisitor___is_subtype(self, var_sub, var_sup);
}
if (var52){
{
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var55 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var55 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "useless-type-test";
var60 = (val*)(17l<<2|1);
var61 = (val*)(17l<<2|1);
var62 = (val*)((long)(0)<<2|3);
var63 = (val*)((long)(0)<<2|3);
var59 = core__flat___CString___to_s_unsafe(var58, var60, var61, var62, var63);
var57 = var59;
varonce56 = var57;
}
if (unlikely(varonce64==NULL)) {
var65 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "Warning: expression is already a `";
var70 = (val*)(34l<<2|1);
var71 = (val*)(34l<<2|1);
var72 = (val*)((long)(0)<<2|3);
var73 = (val*)((long)(0)<<2|3);
var69 = core__flat___CString___to_s_unsafe(var68, var70, var71, var72, var73);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var65)->values[0]=var67;
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "` since it is a `";
var78 = (val*)(17l<<2|1);
var79 = (val*)(17l<<2|1);
var80 = (val*)((long)(0)<<2|3);
var81 = (val*)((long)(0)<<2|3);
var77 = core__flat___CString___to_s_unsafe(var76, var78, var79, var80, var81);
var75 = var77;
varonce74 = var75;
}
((struct instance_core__NativeArray*)var65)->values[2]=var75;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "`.";
var86 = (val*)(2l<<2|1);
var87 = (val*)(2l<<2|1);
var88 = (val*)((long)(0)<<2|3);
var89 = (val*)((long)(0)<<2|3);
var85 = core__flat___CString___to_s_unsafe(var84, var86, var87, var88, var89);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var65)->values[4]=var83;
} else {
var65 = varonce64;
varonce64 = NULL;
}
{
var90 = ((val*(*)(val* self))(var_sup->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sup); /* to_s on <var_sup:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var65)->values[1]=var90;
{
var91 = ((val*(*)(val* self))(var_sub->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_sub); /* to_s on <var_sub:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var65)->values[3]=var91;
{
var92 = ((val*(*)(val* self))(var65->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var65); /* native_to_s on <var65:NativeArray[String]>*/
}
varonce64 = var65;
{
nitc___nitc__ModelBuilder___warning(var53, var_node, var57, var92); /* Direct call modelbuilder_base$ModelBuilder$warning on <var53:ModelBuilder>*/
}
} else {
}
}
var = var_sup;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$TypeVisitor$can_be_null for (self: TypeVisitor, MType): Bool */
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
/* method typing$TypeVisitor$check_can_be_null for (self: TypeVisitor, ANode, MType): Bool */
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
char* var6 /* : CString */;
val* var7 /* : String */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Bool */;
val* var11 /* : nullable Bool */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Bool */;
val* var19 /* : nullable Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
val* var24 /* : MType */;
val* var_res /* var res: MType */;
val* var25 /* : ModelBuilder */;
val* var27 /* : ModelBuilder */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Bool */;
val* var35 /* : nullable Bool */;
val* var37 /* : NativeArray[String] */;
static val* varonce36;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Bool */;
val* var45 /* : nullable Bool */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Bool */;
val* var53 /* : nullable Bool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Bool */;
val* var61 /* : nullable Bool */;
val* var62 /* : String */;
val* var63 /* : String */;
val* var64 /* : String */;
val* var65 /* : ModelBuilder */;
val* var67 /* : ModelBuilder */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : CString */;
val* var71 /* : String */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Bool */;
val* var75 /* : nullable Bool */;
val* var77 /* : NativeArray[String] */;
static val* varonce76;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Bool */;
val* var85 /* : nullable Bool */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : CString */;
val* var89 /* : String */;
val* var90 /* : nullable Int */;
val* var91 /* : nullable Int */;
val* var92 /* : nullable Bool */;
val* var93 /* : nullable Bool */;
val* var94 /* : String */;
val* var95 /* : String */;
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
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var4 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
var8 = (val*)(17l<<2|1);
var9 = (val*)(17l<<2|1);
var10 = (val*)((long)(0)<<2|3);
var11 = (val*)((long)(0)<<2|3);
var7 = core__flat___CString___to_s_unsafe(var6, var8, var9, var10, var11);
var5 = var7;
varonce = var5;
}
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Warning: expression is always `null`.";
var16 = (val*)(37l<<2|1);
var17 = (val*)(37l<<2|1);
var18 = (val*)((long)(0)<<2|3);
var19 = (val*)((long)(0)<<2|3);
var15 = core__flat___CString___to_s_unsafe(var14, var16, var17, var18, var19);
var13 = var15;
varonce12 = var13;
}
{
nitc___nitc__ModelBuilder___warning(var2, var_anode, var5, var13); /* Direct call modelbuilder_base$ModelBuilder$warning on <var2:ModelBuilder>*/
}
var = 1;
goto RET_LABEL;
} else {
}
{
var20 = nitc__typing___nitc__typing__TypeVisitor___can_be_null(self, var_mtype);
}
if (var20){
var = 1;
goto RET_LABEL;
} else {
}
/* <var_mtype:MType> isa MFormalType */
cltype22 = type_nitc__MFormalType.color;
idtype23 = type_nitc__MFormalType.id;
if(cltype22 >= var_mtype->type->table_size) {
var21 = 0;
} else {
var21 = var_mtype->type->type_table[cltype22] == idtype23;
}
if (var21){
{
var24 = nitc__typing___nitc__typing__TypeVisitor___anchor_to(self, var_mtype);
}
var_res = var24;
{
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var27 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "useless-null-test";
var32 = (val*)(17l<<2|1);
var33 = (val*)(17l<<2|1);
var34 = (val*)((long)(0)<<2|3);
var35 = (val*)((long)(0)<<2|3);
var31 = core__flat___CString___to_s_unsafe(var30, var32, var33, var34, var35);
var29 = var31;
varonce28 = var29;
}
if (unlikely(varonce36==NULL)) {
var37 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "Warning: expression is not null, since it is a `";
var42 = (val*)(48l<<2|1);
var43 = (val*)(48l<<2|1);
var44 = (val*)((long)(0)<<2|3);
var45 = (val*)((long)(0)<<2|3);
var41 = core__flat___CString___to_s_unsafe(var40, var42, var43, var44, var45);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var37)->values[0]=var39;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = ": ";
var50 = (val*)(2l<<2|1);
var51 = (val*)(2l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var37)->values[2]=var47;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "`.";
var58 = (val*)(2l<<2|1);
var59 = (val*)(2l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var37)->values[4]=var55;
} else {
var37 = varonce36;
varonce36 = NULL;
}
{
var62 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType(MFormalType)>*/
}
((struct instance_core__NativeArray*)var37)->values[1]=var62;
{
var63 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:MType>*/
}
((struct instance_core__NativeArray*)var37)->values[3]=var63;
{
var64 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
nitc___nitc__ModelBuilder___warning(var25, var_anode, var29, var64); /* Direct call modelbuilder_base$ModelBuilder$warning on <var25:ModelBuilder>*/
}
} else {
{
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var67 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var67 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "useless-null-test";
var72 = (val*)(17l<<2|1);
var73 = (val*)(17l<<2|1);
var74 = (val*)((long)(0)<<2|3);
var75 = (val*)((long)(0)<<2|3);
var71 = core__flat___CString___to_s_unsafe(var70, var72, var73, var74, var75);
var69 = var71;
varonce68 = var69;
}
if (unlikely(varonce76==NULL)) {
var77 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "Warning: expression is not null, since it is a `";
var82 = (val*)(48l<<2|1);
var83 = (val*)(48l<<2|1);
var84 = (val*)((long)(0)<<2|3);
var85 = (val*)((long)(0)<<2|3);
var81 = core__flat___CString___to_s_unsafe(var80, var82, var83, var84, var85);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var77)->values[0]=var79;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "`.";
var90 = (val*)(2l<<2|1);
var91 = (val*)(2l<<2|1);
var92 = (val*)((long)(0)<<2|3);
var93 = (val*)((long)(0)<<2|3);
var89 = core__flat___CString___to_s_unsafe(var88, var90, var91, var92, var93);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var77)->values[2]=var87;
} else {
var77 = varonce76;
varonce76 = NULL;
}
{
var94 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var77)->values[1]=var94;
{
var95 = ((val*(*)(val* self))(var77->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var77); /* native_to_s on <var77:NativeArray[String]>*/
}
varonce76 = var77;
{
nitc___nitc__ModelBuilder___warning(var65, var_anode, var69, var95); /* Direct call modelbuilder_base$ModelBuilder$warning on <var65:ModelBuilder>*/
}
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$TypeVisitor$null_test for (self: TypeVisitor, ABinopExpr) */
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
{ /* Inline parser_nodes$ASendExpr$n_expr (var_anode) on <var_anode:ABinopExpr> */
var2 = var_anode->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <var_anode:ABinopExpr> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2103);
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
{ /* Inline parser_nodes$ABinopExpr$n_expr2 (var_anode) on <var_anode:ABinopExpr> */
var6 = var_anode->attrs[COLOR_nitc__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <var_anode:ABinopExpr> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2114);
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
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
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
{ /* Inline kernel$Object$== (var_mtype2,((val*)NULL)) on <var_mtype2:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype2,var_other) on <var_mtype2:nullable MType(MType)> */
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
{ /* Inline parser_nodes$ASendExpr$n_expr (var_anode) on <var_anode:ABinopExpr> */
var31 = var_anode->attrs[COLOR_nitc__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <var_anode:ABinopExpr> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2103);
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
{ /* Inline kernel$Object$== (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_variable,var_other) on <var_variable:nullable Variable(Variable)> */
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
{ /* Inline flow$AExpr$after_flow_context (var_anode) on <var_anode:ABinopExpr(AEqExpr)> */
var44 = var_anode->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_anode:ABinopExpr(AEqExpr)> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (var42 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 269);
fatal_exit(1);
} else {
{ /* Inline flow$FlowContext$when_true (var42) on <var42:nullable FlowContext> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var47 = var42->attrs[COLOR_nitc__flow__FlowContext___when_true].val; /* _when_true on <var42:nullable FlowContext> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
nitc__typing___FlowContext___set_var(var45, self, var_variable, var_mtype2); /* Direct call typing$FlowContext$set_var on <var45:FlowContext>*/
}
{
{ /* Inline flow$AExpr$after_flow_context (var_anode) on <var_anode:ABinopExpr(AEqExpr)> */
var50 = var_anode->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_anode:ABinopExpr(AEqExpr)> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (var48 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 270);
fatal_exit(1);
} else {
{ /* Inline flow$FlowContext$when_false (var48) on <var48:nullable FlowContext> */
if (unlikely(var48 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 228);
fatal_exit(1);
}
var53 = var48->attrs[COLOR_nitc__flow__FlowContext___when_false].val; /* _when_false on <var48:nullable FlowContext> */
if (unlikely(var53 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 228);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
nitc__typing___FlowContext___set_var(var51, self, var_variable, var_mtype); /* Direct call typing$FlowContext$set_var on <var51:FlowContext>*/
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
{ /* Inline flow$AExpr$after_flow_context (var_anode) on <var_anode:ABinopExpr(ANeExpr)> */
var59 = var_anode->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_anode:ABinopExpr(ANeExpr)> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (var57 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 272);
fatal_exit(1);
} else {
{ /* Inline flow$FlowContext$when_false (var57) on <var57:nullable FlowContext> */
if (unlikely(var57 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 228);
fatal_exit(1);
}
var62 = var57->attrs[COLOR_nitc__flow__FlowContext___when_false].val; /* _when_false on <var57:nullable FlowContext> */
if (unlikely(var62 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 228);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
nitc__typing___FlowContext___set_var(var60, self, var_variable, var_mtype2); /* Direct call typing$FlowContext$set_var on <var60:FlowContext>*/
}
{
{ /* Inline flow$AExpr$after_flow_context (var_anode) on <var_anode:ABinopExpr(ANeExpr)> */
var65 = var_anode->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_anode:ABinopExpr(ANeExpr)> */
var63 = var65;
RET_LABEL64:(void)0;
}
}
if (var63 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 273);
fatal_exit(1);
} else {
{ /* Inline flow$FlowContext$when_true (var63) on <var63:nullable FlowContext> */
if (unlikely(var63 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var68 = var63->attrs[COLOR_nitc__flow__FlowContext___when_true].val; /* _when_true on <var63:nullable FlowContext> */
if (unlikely(var68 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 225);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
nitc__typing___FlowContext___set_var(var66, self, var_variable, var_mtype); /* Direct call typing$FlowContext$set_var on <var66:FlowContext>*/
}
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 275);
fatal_exit(1);
}
}
RET_LABEL:;
}
/* method typing$TypeVisitor$try_get_mproperty_by_name2 for (self: TypeVisitor, ANode, MType, String): nullable MProperty */
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
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var3 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing$TypeVisitor$mmodule (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
/* method typing$TypeVisitor$resolve_mtype for (self: TypeVisitor, AType): nullable MType */
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
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var3 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing$TypeVisitor$mmodule (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing$TypeVisitor$mclassdef (self) on <self:TypeVisitor> */
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
/* method typing$TypeVisitor$try_get_mclass for (self: TypeVisitor, ANode, String): nullable MClass */
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
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var3 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing$TypeVisitor$mmodule (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
/* method typing$TypeVisitor$get_mclass for (self: TypeVisitor, ANode, String): nullable MClass */
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
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var3 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing$TypeVisitor$mmodule (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
/* method typing$TypeVisitor$type_bool for (self: TypeVisitor, ANode): nullable MType */
val* nitc__typing___nitc__typing__TypeVisitor___type_bool(val* self, val* p0) {
val* var /* : nullable MType */;
val* var_node /* var node: ANode */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : MClassType */;
val* var17 /* : MClassType */;
var_node = p0;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "Bool";
var4 = (val*)(4l<<2|1);
var5 = (val*)(4l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
var8 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(self, var_node, var1);
}
var_mclass = var8;
if (var_mclass == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var14 = var_mclass == var_other;
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
{ /* Inline model$MClass$mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var17 = var_mclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$TypeVisitor$get_method for (self: TypeVisitor, ANode, MType, String, Bool): nullable CallSite */
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
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable MClass */;
val* var_objclass /* var objclass: nullable MClass */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : MClassType */;
val* var19 /* : MClassType */;
val* var20 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
short int var21 /* : Bool */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Bool */;
val* var29 /* : nullable Bool */;
short int var30 /* : Bool */;
short int var_ /* var : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Bool */;
val* var44 /* : nullable Bool */;
val* var45 /* : nullable MProperty */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : ModelBuilder */;
val* var54 /* : ModelBuilder */;
val* var56 /* : NativeArray[String] */;
static val* varonce55;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : CString */;
val* var60 /* : String */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Int */;
val* var63 /* : nullable Bool */;
val* var64 /* : nullable Bool */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : CString */;
val* var68 /* : String */;
val* var69 /* : nullable Int */;
val* var70 /* : nullable Int */;
val* var71 /* : nullable Bool */;
val* var72 /* : nullable Bool */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : CString */;
val* var76 /* : String */;
val* var77 /* : nullable Int */;
val* var78 /* : nullable Int */;
val* var79 /* : nullable Bool */;
val* var80 /* : nullable Bool */;
val* var81 /* : String */;
val* var82 /* : String */;
short int var83 /* : Bool */;
val* var84 /* : ModelBuilder */;
val* var86 /* : ModelBuilder */;
val* var88 /* : NativeArray[String] */;
static val* varonce87;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : CString */;
val* var92 /* : String */;
val* var93 /* : nullable Int */;
val* var94 /* : nullable Int */;
val* var95 /* : nullable Bool */;
val* var96 /* : nullable Bool */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : CString */;
val* var100 /* : String */;
val* var101 /* : nullable Int */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Bool */;
val* var104 /* : nullable Bool */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
val* var109 /* : nullable Int */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Bool */;
val* var112 /* : nullable Bool */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : CString */;
val* var116 /* : String */;
val* var117 /* : nullable Int */;
val* var118 /* : nullable Int */;
val* var119 /* : nullable Bool */;
val* var120 /* : nullable Bool */;
val* var121 /* : String */;
val* var122 /* : String */;
val* var123 /* : String */;
val* var124 /* : ModelBuilder */;
val* var126 /* : ModelBuilder */;
val* var128 /* : NativeArray[String] */;
static val* varonce127;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : CString */;
val* var132 /* : String */;
val* var133 /* : nullable Int */;
val* var134 /* : nullable Int */;
val* var135 /* : nullable Bool */;
val* var136 /* : nullable Bool */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : CString */;
val* var140 /* : String */;
val* var141 /* : nullable Int */;
val* var142 /* : nullable Int */;
val* var143 /* : nullable Bool */;
val* var144 /* : nullable Bool */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : CString */;
val* var148 /* : String */;
val* var149 /* : nullable Int */;
val* var150 /* : nullable Int */;
val* var151 /* : nullable Bool */;
val* var152 /* : nullable Bool */;
val* var153 /* : String */;
val* var154 /* : String */;
short int var155 /* : Bool */;
int cltype156;
int idtype157;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
int cltype160;
int idtype161;
short int var_162 /* var : Bool */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
val* var166 /* : NativeArray[String] */;
static val* varonce165;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : CString */;
val* var170 /* : String */;
val* var171 /* : nullable Int */;
val* var172 /* : nullable Int */;
val* var173 /* : nullable Bool */;
val* var174 /* : nullable Bool */;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : CString */;
val* var178 /* : String */;
val* var179 /* : nullable Int */;
val* var180 /* : nullable Int */;
val* var181 /* : nullable Bool */;
val* var182 /* : nullable Bool */;
val* var183 /* : String */;
short int var184 /* : Bool */;
short int var185 /* : Bool */;
int cltype186;
int idtype187;
short int var_188 /* var : Bool */;
short int var189 /* : Bool */;
short int var190 /* : Bool */;
val* var191 /* : ModelBuilder */;
val* var193 /* : ModelBuilder */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : CString */;
val* var197 /* : String */;
val* var198 /* : nullable Int */;
val* var199 /* : nullable Int */;
val* var200 /* : nullable Bool */;
val* var201 /* : nullable Bool */;
val* var203 /* : NativeArray[String] */;
static val* varonce202;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : CString */;
val* var207 /* : String */;
val* var208 /* : nullable Int */;
val* var209 /* : nullable Int */;
val* var210 /* : nullable Bool */;
val* var211 /* : nullable Bool */;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : CString */;
val* var215 /* : String */;
val* var216 /* : nullable Int */;
val* var217 /* : nullable Int */;
val* var218 /* : nullable Bool */;
val* var219 /* : nullable Bool */;
val* var220 /* : String */;
val* var221 /* : String */;
short int var222 /* : Bool */;
short int var223 /* : Bool */;
short int var224 /* : Bool */;
short int var226 /* : Bool */;
short int var_227 /* var : Bool */;
short int var_228 /* var : Bool */;
short int var229 /* : Bool */;
short int var231 /* : Bool */;
short int var232 /* : Bool */;
val* var234 /* : NativeArray[String] */;
static val* varonce233;
static val* varonce235;
val* var236 /* : String */;
char* var237 /* : CString */;
val* var238 /* : String */;
val* var239 /* : nullable Int */;
val* var240 /* : nullable Int */;
val* var241 /* : nullable Bool */;
val* var242 /* : nullable Bool */;
static val* varonce243;
val* var244 /* : String */;
char* var245 /* : CString */;
val* var246 /* : String */;
val* var247 /* : nullable Int */;
val* var248 /* : nullable Int */;
val* var249 /* : nullable Bool */;
val* var250 /* : nullable Bool */;
val* var251 /* : String */;
short int var252 /* : Bool */;
short int var253 /* : Bool */;
short int var_254 /* var : Bool */;
short int var255 /* : Bool */;
short int var257 /* : Bool */;
val* var259 /* : NativeArray[String] */;
static val* varonce258;
static val* varonce260;
val* var261 /* : String */;
char* var262 /* : CString */;
val* var263 /* : String */;
val* var264 /* : nullable Int */;
val* var265 /* : nullable Int */;
val* var266 /* : nullable Bool */;
val* var267 /* : nullable Bool */;
static val* varonce268;
val* var269 /* : String */;
char* var270 /* : CString */;
val* var271 /* : String */;
val* var272 /* : nullable Int */;
val* var273 /* : nullable Int */;
val* var274 /* : nullable Bool */;
val* var275 /* : nullable Bool */;
val* var276 /* : String */;
short int var277 /* : Bool */;
short int var278 /* : Bool */;
short int var279 /* : Bool */;
val* var280 /* : MVisibility */;
val* var282 /* : MVisibility */;
val* var283 /* : Sys */;
val* var284 /* : MVisibility */;
short int var285 /* : Bool */;
short int var287 /* : Bool */;
short int var289 /* : Bool */;
short int var_290 /* var : Bool */;
short int var291 /* : Bool */;
short int var_292 /* var : Bool */;
val* var293 /* : MModule */;
val* var295 /* : MModule */;
val* var296 /* : MClassDef */;
val* var298 /* : MClassDef */;
val* var299 /* : MModule */;
val* var301 /* : MModule */;
val* var302 /* : MVisibility */;
val* var303 /* : Sys */;
val* var304 /* : MVisibility */;
short int var305 /* : Bool */;
short int var_306 /* var : Bool */;
val* var307 /* : ModelBuilder */;
val* var309 /* : ModelBuilder */;
val* var310 /* : ToolContext */;
val* var312 /* : ToolContext */;
val* var313 /* : OptionBool */;
val* var315 /* : OptionBool */;
val* var316 /* : nullable Object */;
val* var318 /* : nullable Object */;
short int var319 /* : Bool */;
short int var320 /* : Bool */;
val* var321 /* : ModelBuilder */;
val* var323 /* : ModelBuilder */;
val* var325 /* : NativeArray[String] */;
static val* varonce324;
static val* varonce326;
val* var327 /* : String */;
char* var328 /* : CString */;
val* var329 /* : String */;
val* var330 /* : nullable Int */;
val* var331 /* : nullable Int */;
val* var332 /* : nullable Bool */;
val* var333 /* : nullable Bool */;
static val* varonce334;
val* var335 /* : String */;
char* var336 /* : CString */;
val* var337 /* : String */;
val* var338 /* : nullable Int */;
val* var339 /* : nullable Int */;
val* var340 /* : nullable Bool */;
val* var341 /* : nullable Bool */;
val* var342 /* : String */;
val* var343 /* : nullable MDeprecationInfo */;
val* var345 /* : nullable MDeprecationInfo */;
val* var_info /* var info: nullable MDeprecationInfo */;
short int var346 /* : Bool */;
short int var347 /* : Bool */;
short int var348 /* : Bool */;
val* var_other350 /* var other: nullable Object */;
short int var351 /* : Bool */;
short int var352 /* : Bool */;
short int var_353 /* var : Bool */;
val* var354 /* : nullable MPropDef */;
val* var356 /* : nullable MPropDef */;
val* var357 /* : MProperty */;
val* var359 /* : MProperty */;
val* var360 /* : nullable MDeprecationInfo */;
val* var362 /* : nullable MDeprecationInfo */;
short int var363 /* : Bool */;
short int var364 /* : Bool */;
short int var366 /* : Bool */;
short int var368 /* : Bool */;
val* var369 /* : nullable MDoc */;
val* var371 /* : nullable MDoc */;
val* var_mdoc /* var mdoc: nullable MDoc */;
short int var372 /* : Bool */;
short int var373 /* : Bool */;
short int var375 /* : Bool */;
short int var376 /* : Bool */;
val* var377 /* : ModelBuilder */;
val* var379 /* : ModelBuilder */;
static val* varonce380;
val* var381 /* : String */;
char* var382 /* : CString */;
val* var383 /* : String */;
val* var384 /* : nullable Int */;
val* var385 /* : nullable Int */;
val* var386 /* : nullable Bool */;
val* var387 /* : nullable Bool */;
val* var389 /* : NativeArray[String] */;
static val* varonce388;
static val* varonce390;
val* var391 /* : String */;
char* var392 /* : CString */;
val* var393 /* : String */;
val* var394 /* : nullable Int */;
val* var395 /* : nullable Int */;
val* var396 /* : nullable Bool */;
val* var397 /* : nullable Bool */;
static val* varonce398;
val* var399 /* : String */;
char* var400 /* : CString */;
val* var401 /* : String */;
val* var402 /* : nullable Int */;
val* var403 /* : nullable Int */;
val* var404 /* : nullable Bool */;
val* var405 /* : nullable Bool */;
val* var406 /* : Array[String] */;
val* var408 /* : Array[String] */;
val* var409 /* : nullable Object */;
val* var410 /* : String */;
val* var411 /* : ModelBuilder */;
val* var413 /* : ModelBuilder */;
static val* varonce414;
val* var415 /* : String */;
char* var416 /* : CString */;
val* var417 /* : String */;
val* var418 /* : nullable Int */;
val* var419 /* : nullable Int */;
val* var420 /* : nullable Bool */;
val* var421 /* : nullable Bool */;
val* var423 /* : NativeArray[String] */;
static val* varonce422;
static val* varonce424;
val* var425 /* : String */;
char* var426 /* : CString */;
val* var427 /* : String */;
val* var428 /* : nullable Int */;
val* var429 /* : nullable Int */;
val* var430 /* : nullable Bool */;
val* var431 /* : nullable Bool */;
static val* varonce432;
val* var433 /* : String */;
char* var434 /* : CString */;
val* var435 /* : String */;
val* var436 /* : nullable Int */;
val* var437 /* : nullable Int */;
val* var438 /* : nullable Bool */;
val* var439 /* : nullable Bool */;
val* var440 /* : String */;
val* var441 /* : MModule */;
val* var443 /* : MModule */;
val* var444 /* : Array[MPropDef] */;
val* var_propdefs /* var propdefs: Array[MMethodDef] */;
long var445 /* : Int */;
long var447 /* : Int */;
short int var448 /* : Bool */;
short int var450 /* : Bool */;
val* var451 /* : ModelBuilder */;
val* var453 /* : ModelBuilder */;
val* var455 /* : NativeArray[String] */;
static val* varonce454;
static val* varonce456;
val* var457 /* : String */;
char* var458 /* : CString */;
val* var459 /* : String */;
val* var460 /* : nullable Int */;
val* var461 /* : nullable Int */;
val* var462 /* : nullable Bool */;
val* var463 /* : nullable Bool */;
static val* varonce464;
val* var465 /* : String */;
char* var466 /* : CString */;
val* var467 /* : String */;
val* var468 /* : nullable Int */;
val* var469 /* : nullable Int */;
val* var470 /* : nullable Bool */;
val* var471 /* : nullable Bool */;
static val* varonce472;
val* var473 /* : String */;
char* var474 /* : CString */;
val* var475 /* : String */;
val* var476 /* : nullable Int */;
val* var477 /* : nullable Int */;
val* var478 /* : nullable Bool */;
val* var479 /* : nullable Bool */;
val* var480 /* : String */;
val* var481 /* : String */;
long var482 /* : Int */;
long var484 /* : Int */;
short int var485 /* : Bool */;
short int var487 /* : Bool */;
val* var488 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable Object */;
val* var489 /* : ModelBuilder */;
val* var491 /* : ModelBuilder */;
static val* varonce492;
val* var493 /* : String */;
char* var494 /* : CString */;
val* var495 /* : String */;
val* var496 /* : nullable Int */;
val* var497 /* : nullable Int */;
val* var498 /* : nullable Bool */;
val* var499 /* : nullable Bool */;
val* var501 /* : NativeArray[String] */;
static val* varonce500;
static val* varonce502;
val* var503 /* : String */;
char* var504 /* : CString */;
val* var505 /* : String */;
val* var506 /* : nullable Int */;
val* var507 /* : nullable Int */;
val* var508 /* : nullable Bool */;
val* var509 /* : nullable Bool */;
static val* varonce510;
val* var511 /* : String */;
char* var512 /* : CString */;
val* var513 /* : String */;
val* var514 /* : nullable Int */;
val* var515 /* : nullable Int */;
val* var516 /* : nullable Bool */;
val* var517 /* : nullable Bool */;
static val* varonce518;
val* var519 /* : String */;
char* var520 /* : CString */;
val* var521 /* : String */;
val* var522 /* : nullable Int */;
val* var523 /* : nullable Int */;
val* var524 /* : nullable Bool */;
val* var525 /* : nullable Bool */;
val* var526 /* : String */;
static val* varonce527;
val* var528 /* : String */;
char* var529 /* : CString */;
val* var530 /* : String */;
val* var531 /* : nullable Int */;
val* var532 /* : nullable Int */;
val* var533 /* : nullable Bool */;
val* var534 /* : nullable Bool */;
val* var535 /* : String */;
val* var536 /* : String */;
val* var537 /* : MPropDef */;
val* var539 /* : MPropDef */;
val* var540 /* : nullable MSignature */;
val* var541 /* : nullable MSignature */;
val* var543 /* : nullable MSignature */;
val* var544 /* : nullable MSignature */;
val* var546 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var547 /* : Bool */;
short int var548 /* : Bool */;
short int var550 /* : Bool */;
short int var552 /* : Bool */;
val* var553 /* : MType */;
short int var554 /* : Bool */;
int cltype555;
int idtype556;
const char* var_class_name;
short int var_erasure_cast /* var erasure_cast: Bool */;
val* var557 /* : nullable MSignature */;
val* var559 /* : nullable MSignature */;
val* var560 /* : nullable MType */;
val* var562 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var563 /* : Bool */;
short int var564 /* : Bool */;
short int var_565 /* var : Bool */;
short int var566 /* : Bool */;
short int var567 /* : Bool */;
short int var569 /* : Bool */;
short int var570 /* : Bool */;
val* var571 /* : MType */;
short int var572 /* : Bool */;
int cltype573;
int idtype574;
val* var575 /* : nullable MType */;
val* var577 /* : nullable MType */;
val* var_erased_rettype /* var erased_rettype: nullable MType */;
short int var578 /* : Bool */;
short int var579 /* : Bool */;
short int var581 /* : Bool */;
short int var582 /* : Bool */;
val* var583 /* : CallSite */;
val* var584 /* : Location */;
val* var585 /* : MModule */;
val* var587 /* : MModule */;
val* var588 /* : nullable MClassType */;
val* var590 /* : nullable MClassType */;
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
var6 = (val*)(6l<<2|1);
var7 = (val*)(6l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
var10 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(self, var_node, var3);
}
var_objclass = var10;
if (var_objclass == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_objclass,((val*)NULL)) on <var_objclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_objclass,var_other) on <var_objclass:nullable MClass(MClass)> */
var16 = var_objclass == var_other;
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
{ /* Inline model$MClass$mclass_type (var_objclass) on <var_objclass:nullable MClass(MClass)> */
var19 = var_objclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_objclass:nullable MClass(MClass)> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_unsafe_type = var17;
} else {
}
{
var20 = nitc__typing___nitc__typing__TypeVisitor___try_get_mproperty_by_name2(self, var_node, var_unsafe_type, var_name);
}
var_mproperty = var20;
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "new";
var26 = (val*)(3l<<2|1);
var27 = (val*)(3l<<2|1);
var28 = (val*)((long)(0)<<2|3);
var29 = (val*)((long)(0)<<2|3);
var25 = core__flat___CString___to_s_unsafe(var24, var26, var27, var28, var29);
var23 = var25;
varonce22 = var23;
}
{
var30 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var23); /* == on <var_name:String>*/
}
var_ = var30;
if (var30){
if (var_mproperty == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mproperty,((val*)NULL)) on <var_mproperty:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mproperty,var_other) on <var_mproperty:nullable MProperty(MProperty)> */
var36 = var_mproperty == var_other;
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
var21 = var31;
} else {
var21 = var_;
}
if (var21){
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "init";
var41 = (val*)(4l<<2|1);
var42 = (val*)(4l<<2|1);
var43 = (val*)((long)(0)<<2|3);
var44 = (val*)((long)(0)<<2|3);
var40 = core__flat___CString___to_s_unsafe(var39, var41, var42, var43, var44);
var38 = var40;
varonce37 = var38;
}
var_name = var38;
{
var45 = nitc__typing___nitc__typing__TypeVisitor___try_get_mproperty_by_name2(self, var_node, var_unsafe_type, var_name);
}
var_mproperty = var45;
} else {
}
if (var_mproperty == NULL) {
var46 = 1; /* is null */
} else {
var46 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mproperty,((val*)NULL)) on <var_mproperty:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mproperty,var_other) on <var_mproperty:nullable MProperty(MProperty)> */
var51 = var_mproperty == var_other;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
if (var46){
if (var_recv_is_self){
{
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var54 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var54 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
if (unlikely(varonce55==NULL)) {
var56 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "Error: method or variable `";
var61 = (val*)(27l<<2|1);
var62 = (val*)(27l<<2|1);
var63 = (val*)((long)(0)<<2|3);
var64 = (val*)((long)(0)<<2|3);
var60 = core__flat___CString___to_s_unsafe(var59, var61, var62, var63, var64);
var58 = var60;
varonce57 = var58;
}
((struct instance_core__NativeArray*)var56)->values[0]=var58;
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "` unknown in `";
var69 = (val*)(14l<<2|1);
var70 = (val*)(14l<<2|1);
var71 = (val*)((long)(0)<<2|3);
var72 = (val*)((long)(0)<<2|3);
var68 = core__flat___CString___to_s_unsafe(var67, var69, var70, var71, var72);
var66 = var68;
varonce65 = var66;
}
((struct instance_core__NativeArray*)var56)->values[2]=var66;
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "`.";
var77 = (val*)(2l<<2|1);
var78 = (val*)(2l<<2|1);
var79 = (val*)((long)(0)<<2|3);
var80 = (val*)((long)(0)<<2|3);
var76 = core__flat___CString___to_s_unsafe(var75, var77, var78, var79, var80);
var74 = var76;
varonce73 = var74;
}
((struct instance_core__NativeArray*)var56)->values[4]=var74;
} else {
var56 = varonce55;
varonce55 = NULL;
}
((struct instance_core__NativeArray*)var56)->values[1]=var_name;
{
var81 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:MType>*/
}
((struct instance_core__NativeArray*)var56)->values[3]=var81;
{
var82 = ((val*(*)(val* self))(var56->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var56); /* native_to_s on <var56:NativeArray[String]>*/
}
varonce55 = var56;
{
nitc___nitc__ModelBuilder___error(var52, var_node, var82); /* Direct call modelbuilder_base$ModelBuilder$error on <var52:ModelBuilder>*/
}
} else {
{
var83 = ((short int(*)(val* self))(var_recvtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_recvtype); /* need_anchor on <var_recvtype:MType>*/
}
if (var83){
{
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var86 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var86 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
if (unlikely(varonce87==NULL)) {
var88 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "Error: method `";
var93 = (val*)(15l<<2|1);
var94 = (val*)(15l<<2|1);
var95 = (val*)((long)(0)<<2|3);
var96 = (val*)((long)(0)<<2|3);
var92 = core__flat___CString___to_s_unsafe(var91, var93, var94, var95, var96);
var90 = var92;
varonce89 = var90;
}
((struct instance_core__NativeArray*)var88)->values[0]=var90;
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "` does not exists in `";
var101 = (val*)(22l<<2|1);
var102 = (val*)(22l<<2|1);
var103 = (val*)((long)(0)<<2|3);
var104 = (val*)((long)(0)<<2|3);
var100 = core__flat___CString___to_s_unsafe(var99, var101, var102, var103, var104);
var98 = var100;
varonce97 = var98;
}
((struct instance_core__NativeArray*)var88)->values[2]=var98;
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = ": ";
var109 = (val*)(2l<<2|1);
var110 = (val*)(2l<<2|1);
var111 = (val*)((long)(0)<<2|3);
var112 = (val*)((long)(0)<<2|3);
var108 = core__flat___CString___to_s_unsafe(var107, var109, var110, var111, var112);
var106 = var108;
varonce105 = var106;
}
((struct instance_core__NativeArray*)var88)->values[4]=var106;
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = "`.";
var117 = (val*)(2l<<2|1);
var118 = (val*)(2l<<2|1);
var119 = (val*)((long)(0)<<2|3);
var120 = (val*)((long)(0)<<2|3);
var116 = core__flat___CString___to_s_unsafe(var115, var117, var118, var119, var120);
var114 = var116;
varonce113 = var114;
}
((struct instance_core__NativeArray*)var88)->values[6]=var114;
} else {
var88 = varonce87;
varonce87 = NULL;
}
((struct instance_core__NativeArray*)var88)->values[1]=var_name;
{
var121 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:MType>*/
}
((struct instance_core__NativeArray*)var88)->values[3]=var121;
{
var122 = ((val*(*)(val* self))(var_unsafe_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_unsafe_type); /* to_s on <var_unsafe_type:MType>*/
}
((struct instance_core__NativeArray*)var88)->values[5]=var122;
{
var123 = ((val*(*)(val* self))(var88->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var88); /* native_to_s on <var88:NativeArray[String]>*/
}
varonce87 = var88;
{
nitc___nitc__ModelBuilder___error(var84, var_node, var123); /* Direct call modelbuilder_base$ModelBuilder$error on <var84:ModelBuilder>*/
}
} else {
{
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var126 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var126 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
if (unlikely(varonce127==NULL)) {
var128 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "Error: method `";
var133 = (val*)(15l<<2|1);
var134 = (val*)(15l<<2|1);
var135 = (val*)((long)(0)<<2|3);
var136 = (val*)((long)(0)<<2|3);
var132 = core__flat___CString___to_s_unsafe(var131, var133, var134, var135, var136);
var130 = var132;
varonce129 = var130;
}
((struct instance_core__NativeArray*)var128)->values[0]=var130;
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = "` does not exists in `";
var141 = (val*)(22l<<2|1);
var142 = (val*)(22l<<2|1);
var143 = (val*)((long)(0)<<2|3);
var144 = (val*)((long)(0)<<2|3);
var140 = core__flat___CString___to_s_unsafe(var139, var141, var142, var143, var144);
var138 = var140;
varonce137 = var138;
}
((struct instance_core__NativeArray*)var128)->values[2]=var138;
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "`.";
var149 = (val*)(2l<<2|1);
var150 = (val*)(2l<<2|1);
var151 = (val*)((long)(0)<<2|3);
var152 = (val*)((long)(0)<<2|3);
var148 = core__flat___CString___to_s_unsafe(var147, var149, var150, var151, var152);
var146 = var148;
varonce145 = var146;
}
((struct instance_core__NativeArray*)var128)->values[4]=var146;
} else {
var128 = varonce127;
varonce127 = NULL;
}
((struct instance_core__NativeArray*)var128)->values[1]=var_name;
{
var153 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:MType>*/
}
((struct instance_core__NativeArray*)var128)->values[3]=var153;
{
var154 = ((val*(*)(val* self))(var128->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var128); /* native_to_s on <var128:NativeArray[String]>*/
}
varonce127 = var128;
{
nitc___nitc__ModelBuilder___error(var124, var_node, var154); /* Direct call modelbuilder_base$ModelBuilder$error on <var124:ModelBuilder>*/
}
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
/* <var_mproperty:nullable MProperty(MProperty)> isa MMethod */
cltype156 = type_nitc__MMethod.color;
idtype157 = type_nitc__MMethod.id;
if(cltype156 >= var_mproperty->type->table_size) {
var155 = 0;
} else {
var155 = var_mproperty->type->type_table[cltype156] == idtype157;
}
if (unlikely(!var155)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 336);
fatal_exit(1);
}
/* <var_recvtype:MType> isa MNullType */
cltype160 = type_nitc__MNullType.color;
idtype161 = type_nitc__MNullType.id;
if(cltype160 >= var_recvtype->type->table_size) {
var159 = 0;
} else {
var159 = var_recvtype->type->type_table[cltype160] == idtype161;
}
var_162 = var159;
if (var159){
{
var163 = nitc___nitc__MMethod___is_null_safe(var_mproperty);
}
var164 = !var163;
var158 = var164;
} else {
var158 = var_162;
}
if (var158){
if (unlikely(varonce165==NULL)) {
var166 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = "Error: method `";
var171 = (val*)(15l<<2|1);
var172 = (val*)(15l<<2|1);
var173 = (val*)((long)(0)<<2|3);
var174 = (val*)((long)(0)<<2|3);
var170 = core__flat___CString___to_s_unsafe(var169, var171, var172, var173, var174);
var168 = var170;
varonce167 = var168;
}
((struct instance_core__NativeArray*)var166)->values[0]=var168;
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = "` called on `null`.";
var179 = (val*)(19l<<2|1);
var180 = (val*)(19l<<2|1);
var181 = (val*)((long)(0)<<2|3);
var182 = (val*)((long)(0)<<2|3);
var178 = core__flat___CString___to_s_unsafe(var177, var179, var180, var181, var182);
var176 = var178;
varonce175 = var176;
}
((struct instance_core__NativeArray*)var166)->values[2]=var176;
} else {
var166 = varonce165;
varonce165 = NULL;
}
((struct instance_core__NativeArray*)var166)->values[1]=var_name;
{
var183 = ((val*(*)(val* self))(var166->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var166); /* native_to_s on <var166:NativeArray[String]>*/
}
varonce165 = var166;
{
nitc__typing___nitc__typing__TypeVisitor___error(self, var_node, var183); /* Direct call typing$TypeVisitor$error on <self:TypeVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
/* <var_unsafe_type:MType> isa MNullableType */
cltype186 = type_nitc__MNullableType.color;
idtype187 = type_nitc__MNullableType.id;
if(cltype186 >= var_unsafe_type->type->table_size) {
var185 = 0;
} else {
var185 = var_unsafe_type->type->type_table[cltype186] == idtype187;
}
var_188 = var185;
if (var185){
{
var189 = nitc___nitc__MMethod___is_null_safe(var_mproperty);
}
var190 = !var189;
var184 = var190;
} else {
var184 = var_188;
}
if (var184){
{
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var193 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var193 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var191 = var193;
RET_LABEL192:(void)0;
}
}
if (likely(varonce194!=NULL)) {
var195 = varonce194;
} else {
var196 = "call-on-nullable";
var198 = (val*)(16l<<2|1);
var199 = (val*)(16l<<2|1);
var200 = (val*)((long)(0)<<2|3);
var201 = (val*)((long)(0)<<2|3);
var197 = core__flat___CString___to_s_unsafe(var196, var198, var199, var200, var201);
var195 = var197;
varonce194 = var195;
}
if (unlikely(varonce202==NULL)) {
var203 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce204!=NULL)) {
var205 = varonce204;
} else {
var206 = "Warning: method call on a nullable receiver `";
var208 = (val*)(45l<<2|1);
var209 = (val*)(45l<<2|1);
var210 = (val*)((long)(0)<<2|3);
var211 = (val*)((long)(0)<<2|3);
var207 = core__flat___CString___to_s_unsafe(var206, var208, var209, var210, var211);
var205 = var207;
varonce204 = var205;
}
((struct instance_core__NativeArray*)var203)->values[0]=var205;
if (likely(varonce212!=NULL)) {
var213 = varonce212;
} else {
var214 = "`.";
var216 = (val*)(2l<<2|1);
var217 = (val*)(2l<<2|1);
var218 = (val*)((long)(0)<<2|3);
var219 = (val*)((long)(0)<<2|3);
var215 = core__flat___CString___to_s_unsafe(var214, var216, var217, var218, var219);
var213 = var215;
varonce212 = var213;
}
((struct instance_core__NativeArray*)var203)->values[2]=var213;
} else {
var203 = varonce202;
varonce202 = NULL;
}
{
var220 = ((val*(*)(val* self))(var_recvtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recvtype); /* to_s on <var_recvtype:MType>*/
}
((struct instance_core__NativeArray*)var203)->values[1]=var220;
{
var221 = ((val*(*)(val* self))(var203->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var203); /* native_to_s on <var203:NativeArray[String]>*/
}
varonce202 = var203;
{
nitc___nitc__ModelBuilder___advice(var191, var_node, var195, var221); /* Direct call modelbuilder_base$ModelBuilder$advice on <var191:ModelBuilder>*/
}
} else {
}
}
{
{ /* Inline typing$TypeVisitor$is_toplevel_context (self) on <self:TypeVisitor> */
var226 = self->attrs[COLOR_nitc__typing__TypeVisitor___is_toplevel_context].s; /* _is_toplevel_context on <self:TypeVisitor> */
var224 = var226;
RET_LABEL225:(void)0;
}
}
var_227 = var224;
if (var224){
var223 = var_recv_is_self;
} else {
var223 = var_227;
}
var_228 = var223;
if (var223){
{
{ /* Inline model$MMethod$is_toplevel (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var231 = var_mproperty->attrs[COLOR_nitc__model__MMethod___is_toplevel].s; /* _is_toplevel on <var_mproperty:nullable MProperty(MMethod)> */
var229 = var231;
RET_LABEL230:(void)0;
}
}
var232 = !var229;
var222 = var232;
} else {
var222 = var_228;
}
if (var222){
if (unlikely(varonce233==NULL)) {
var234 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce235!=NULL)) {
var236 = varonce235;
} else {
var237 = "Error: `";
var239 = (val*)(8l<<2|1);
var240 = (val*)(8l<<2|1);
var241 = (val*)((long)(0)<<2|3);
var242 = (val*)((long)(0)<<2|3);
var238 = core__flat___CString___to_s_unsafe(var237, var239, var240, var241, var242);
var236 = var238;
varonce235 = var236;
}
((struct instance_core__NativeArray*)var234)->values[0]=var236;
if (likely(varonce243!=NULL)) {
var244 = varonce243;
} else {
var245 = "` is not a top-level method, thus need a receiver.";
var247 = (val*)(50l<<2|1);
var248 = (val*)(50l<<2|1);
var249 = (val*)((long)(0)<<2|3);
var250 = (val*)((long)(0)<<2|3);
var246 = core__flat___CString___to_s_unsafe(var245, var247, var248, var249, var250);
var244 = var246;
varonce243 = var244;
}
((struct instance_core__NativeArray*)var234)->values[2]=var244;
} else {
var234 = varonce233;
varonce233 = NULL;
}
((struct instance_core__NativeArray*)var234)->values[1]=var_name;
{
var251 = ((val*(*)(val* self))(var234->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var234); /* native_to_s on <var234:NativeArray[String]>*/
}
varonce233 = var234;
{
nitc__typing___nitc__typing__TypeVisitor___error(self, var_node, var251); /* Direct call typing$TypeVisitor$error on <self:TypeVisitor>*/
}
} else {
}
var253 = !var_recv_is_self;
var_254 = var253;
if (var253){
{
{ /* Inline model$MMethod$is_toplevel (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var257 = var_mproperty->attrs[COLOR_nitc__model__MMethod___is_toplevel].s; /* _is_toplevel on <var_mproperty:nullable MProperty(MMethod)> */
var255 = var257;
RET_LABEL256:(void)0;
}
}
var252 = var255;
} else {
var252 = var_254;
}
if (var252){
if (unlikely(varonce258==NULL)) {
var259 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce260!=NULL)) {
var261 = varonce260;
} else {
var262 = "Error: cannot call `";
var264 = (val*)(20l<<2|1);
var265 = (val*)(20l<<2|1);
var266 = (val*)((long)(0)<<2|3);
var267 = (val*)((long)(0)<<2|3);
var263 = core__flat___CString___to_s_unsafe(var262, var264, var265, var266, var267);
var261 = var263;
varonce260 = var261;
}
((struct instance_core__NativeArray*)var259)->values[0]=var261;
if (likely(varonce268!=NULL)) {
var269 = varonce268;
} else {
var270 = "`, a top-level method, with a receiver.";
var272 = (val*)(39l<<2|1);
var273 = (val*)(39l<<2|1);
var274 = (val*)((long)(0)<<2|3);
var275 = (val*)((long)(0)<<2|3);
var271 = core__flat___CString___to_s_unsafe(var270, var272, var273, var274, var275);
var269 = var271;
varonce268 = var269;
}
((struct instance_core__NativeArray*)var259)->values[2]=var269;
} else {
var259 = varonce258;
varonce258 = NULL;
}
((struct instance_core__NativeArray*)var259)->values[1]=var_name;
{
var276 = ((val*(*)(val* self))(var259->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var259); /* native_to_s on <var259:NativeArray[String]>*/
}
varonce258 = var259;
{
nitc__typing___nitc__typing__TypeVisitor___error(self, var_node, var276); /* Direct call typing$TypeVisitor$error on <self:TypeVisitor>*/
}
} else {
}
{
{ /* Inline model$MProperty$visibility (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var282 = var_mproperty->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mproperty:nullable MProperty(MMethod)> */
if (unlikely(var282 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var280 = var282;
RET_LABEL281:(void)0;
}
}
var283 = glob_sys;
{
var284 = nitc__model_base___core__Sys___protected_visibility(var283);
}
{
{ /* Inline kernel$Object$== (var280,var284) on <var280:MVisibility> */
var_other = var284;
{
{ /* Inline kernel$Object$is_same_instance (var280,var_other) on <var280:MVisibility> */
var289 = var280 == var_other;
var287 = var289;
goto RET_LABEL288;
RET_LABEL288:(void)0;
}
}
var285 = var287;
goto RET_LABEL286;
RET_LABEL286:(void)0;
}
}
var_290 = var285;
if (var285){
var291 = !var_recv_is_self;
var279 = var291;
} else {
var279 = var_290;
}
var_292 = var279;
if (var279){
{
{ /* Inline typing$TypeVisitor$mmodule (self) on <self:TypeVisitor> */
var295 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var295 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var293 = var295;
RET_LABEL294:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var298 = var_mproperty->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mproperty:nullable MProperty(MMethod)> */
if (unlikely(var298 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var296 = var298;
RET_LABEL297:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var296) on <var296:MClassDef> */
var301 = var296->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var296:MClassDef> */
if (unlikely(var301 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var299 = var301;
RET_LABEL300:(void)0;
}
}
{
var302 = nitc___nitc__MModule___visibility_for(var293, var299);
}
var303 = glob_sys;
{
var304 = nitc__model_base___core__Sys___intrude_visibility(var303);
}
{
var305 = nitc___nitc__MVisibility___core__kernel__Comparable___60d(var302, var304);
}
var278 = var305;
} else {
var278 = var_292;
}
var_306 = var278;
if (var278){
{
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var309 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var309 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var307 = var309;
RET_LABEL308:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var307) on <var307:ModelBuilder> */
var312 = var307->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var307:ModelBuilder> */
if (unlikely(var312 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var310 = var312;
RET_LABEL311:(void)0;
}
}
{
{ /* Inline modelbuilder$ToolContext$opt_ignore_visibility (var310) on <var310:ToolContext> */
var315 = var310->attrs[COLOR_nitc__modelbuilder__ToolContext___opt_ignore_visibility].val; /* _opt_ignore_visibility on <var310:ToolContext> */
if (unlikely(var315 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_ignore_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder, 27);
fatal_exit(1);
}
var313 = var315;
RET_LABEL314:(void)0;
}
}
{
{ /* Inline opts$Option$value (var313) on <var313:OptionBool> */
var318 = var313->attrs[COLOR_opts__Option___value].val; /* _value on <var313:OptionBool> */
var316 = var318;
RET_LABEL317:(void)0;
}
}
var319 = (short int)((long)(var316)>>2);
var320 = !var319;
var277 = var320;
} else {
var277 = var_306;
}
if (var277){
{
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var323 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var323 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var321 = var323;
RET_LABEL322:(void)0;
}
}
if (unlikely(varonce324==NULL)) {
var325 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce326!=NULL)) {
var327 = varonce326;
} else {
var328 = "Error: method `";
var330 = (val*)(15l<<2|1);
var331 = (val*)(15l<<2|1);
var332 = (val*)((long)(0)<<2|3);
var333 = (val*)((long)(0)<<2|3);
var329 = core__flat___CString___to_s_unsafe(var328, var330, var331, var332, var333);
var327 = var329;
varonce326 = var327;
}
((struct instance_core__NativeArray*)var325)->values[0]=var327;
if (likely(varonce334!=NULL)) {
var335 = varonce334;
} else {
var336 = "` is protected and can only accessed by `self`.";
var338 = (val*)(47l<<2|1);
var339 = (val*)(47l<<2|1);
var340 = (val*)((long)(0)<<2|3);
var341 = (val*)((long)(0)<<2|3);
var337 = core__flat___CString___to_s_unsafe(var336, var338, var339, var340, var341);
var335 = var337;
varonce334 = var335;
}
((struct instance_core__NativeArray*)var325)->values[2]=var335;
} else {
var325 = varonce324;
varonce324 = NULL;
}
((struct instance_core__NativeArray*)var325)->values[1]=var_name;
{
var342 = ((val*(*)(val* self))(var325->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var325); /* native_to_s on <var325:NativeArray[String]>*/
}
varonce324 = var325;
{
nitc___nitc__ModelBuilder___error(var321, var_node, var342); /* Direct call modelbuilder_base$ModelBuilder$error on <var321:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline mdoc$MEntity$deprecation (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var345 = var_mproperty->attrs[COLOR_nitc__mdoc__MEntity___deprecation].val; /* _deprecation on <var_mproperty:nullable MProperty(MMethod)> */
var343 = var345;
RET_LABEL344:(void)0;
}
}
var_info = var343;
if (var_info == NULL) {
var347 = 0; /* is null */
} else {
var347 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_info,((val*)NULL)) on <var_info:nullable MDeprecationInfo> */
var_other350 = ((val*)NULL);
{
var351 = ((short int(*)(val* self, val* p0))(var_info->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_info, var_other350); /* == on <var_info:nullable MDeprecationInfo(MDeprecationInfo)>*/
}
var352 = !var351;
var348 = var352;
goto RET_LABEL349;
RET_LABEL349:(void)0;
}
var347 = var348;
}
var_353 = var347;
if (var347){
{
{ /* Inline typing$TypeVisitor$mpropdef (self) on <self:TypeVisitor> */
var356 = self->attrs[COLOR_nitc__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <self:TypeVisitor> */
var354 = var356;
RET_LABEL355:(void)0;
}
}
if (var354 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 359);
fatal_exit(1);
} else {
{ /* Inline model$MPropDef$mproperty (var354) on <var354:nullable MPropDef> */
if (unlikely(var354 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var359 = var354->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var354:nullable MPropDef> */
if (unlikely(var359 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var357 = var359;
RET_LABEL358:(void)0;
}
}
{
{ /* Inline mdoc$MEntity$deprecation (var357) on <var357:MProperty> */
var362 = var357->attrs[COLOR_nitc__mdoc__MEntity___deprecation].val; /* _deprecation on <var357:MProperty> */
var360 = var362;
RET_LABEL361:(void)0;
}
}
if (var360 == NULL) {
var363 = 1; /* is null */
} else {
var363 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var360,((val*)NULL)) on <var360:nullable MDeprecationInfo> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var360,var_other) on <var360:nullable MDeprecationInfo(MDeprecationInfo)> */
var368 = var360 == var_other;
var366 = var368;
goto RET_LABEL367;
RET_LABEL367:(void)0;
}
}
var364 = var366;
goto RET_LABEL365;
RET_LABEL365:(void)0;
}
var363 = var364;
}
var346 = var363;
} else {
var346 = var_353;
}
if (var346){
{
{ /* Inline mdoc$MDeprecationInfo$mdoc (var_info) on <var_info:nullable MDeprecationInfo(MDeprecationInfo)> */
var371 = var_info->attrs[COLOR_nitc__mdoc__MDeprecationInfo___mdoc].val; /* _mdoc on <var_info:nullable MDeprecationInfo(MDeprecationInfo)> */
var369 = var371;
RET_LABEL370:(void)0;
}
}
var_mdoc = var369;
if (var_mdoc == NULL) {
var372 = 0; /* is null */
} else {
var372 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mdoc,((val*)NULL)) on <var_mdoc:nullable MDoc> */
var_other350 = ((val*)NULL);
{
var375 = ((short int(*)(val* self, val* p0))(var_mdoc->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mdoc, var_other350); /* == on <var_mdoc:nullable MDoc(MDoc)>*/
}
var376 = !var375;
var373 = var376;
goto RET_LABEL374;
RET_LABEL374:(void)0;
}
var372 = var373;
}
if (var372){
{
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var379 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var379 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var377 = var379;
RET_LABEL378:(void)0;
}
}
if (likely(varonce380!=NULL)) {
var381 = varonce380;
} else {
var382 = "deprecated-method";
var384 = (val*)(17l<<2|1);
var385 = (val*)(17l<<2|1);
var386 = (val*)((long)(0)<<2|3);
var387 = (val*)((long)(0)<<2|3);
var383 = core__flat___CString___to_s_unsafe(var382, var384, var385, var386, var387);
var381 = var383;
varonce380 = var381;
}
if (unlikely(varonce388==NULL)) {
var389 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce390!=NULL)) {
var391 = varonce390;
} else {
var392 = "Deprecation Warning: method `";
var394 = (val*)(29l<<2|1);
var395 = (val*)(29l<<2|1);
var396 = (val*)((long)(0)<<2|3);
var397 = (val*)((long)(0)<<2|3);
var393 = core__flat___CString___to_s_unsafe(var392, var394, var395, var396, var397);
var391 = var393;
varonce390 = var391;
}
((struct instance_core__NativeArray*)var389)->values[0]=var391;
if (likely(varonce398!=NULL)) {
var399 = varonce398;
} else {
var400 = "` is deprecated: ";
var402 = (val*)(17l<<2|1);
var403 = (val*)(17l<<2|1);
var404 = (val*)((long)(0)<<2|3);
var405 = (val*)((long)(0)<<2|3);
var401 = core__flat___CString___to_s_unsafe(var400, var402, var403, var404, var405);
var399 = var401;
varonce398 = var399;
}
((struct instance_core__NativeArray*)var389)->values[2]=var399;
} else {
var389 = varonce388;
varonce388 = NULL;
}
((struct instance_core__NativeArray*)var389)->values[1]=var_name;
{
{ /* Inline mdoc$MDoc$content (var_mdoc) on <var_mdoc:nullable MDoc(MDoc)> */
var408 = var_mdoc->attrs[COLOR_nitc__mdoc__MDoc___content].val; /* _content on <var_mdoc:nullable MDoc(MDoc)> */
if (unlikely(var408 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mdoc, 23);
fatal_exit(1);
}
var406 = var408;
RET_LABEL407:(void)0;
}
}
{
var409 = core___core__SequenceRead___Collection__first(var406);
}
((struct instance_core__NativeArray*)var389)->values[3]=var409;
{
var410 = ((val*(*)(val* self))(var389->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var389); /* native_to_s on <var389:NativeArray[String]>*/
}
varonce388 = var389;
{
nitc___nitc__ModelBuilder___warning(var377, var_node, var381, var410); /* Direct call modelbuilder_base$ModelBuilder$warning on <var377:ModelBuilder>*/
}
} else {
{
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var413 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var413 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var411 = var413;
RET_LABEL412:(void)0;
}
}
if (likely(varonce414!=NULL)) {
var415 = varonce414;
} else {
var416 = "deprecated-method";
var418 = (val*)(17l<<2|1);
var419 = (val*)(17l<<2|1);
var420 = (val*)((long)(0)<<2|3);
var421 = (val*)((long)(0)<<2|3);
var417 = core__flat___CString___to_s_unsafe(var416, var418, var419, var420, var421);
var415 = var417;
varonce414 = var415;
}
if (unlikely(varonce422==NULL)) {
var423 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce424!=NULL)) {
var425 = varonce424;
} else {
var426 = "Deprecation Warning: method `";
var428 = (val*)(29l<<2|1);
var429 = (val*)(29l<<2|1);
var430 = (val*)((long)(0)<<2|3);
var431 = (val*)((long)(0)<<2|3);
var427 = core__flat___CString___to_s_unsafe(var426, var428, var429, var430, var431);
var425 = var427;
varonce424 = var425;
}
((struct instance_core__NativeArray*)var423)->values[0]=var425;
if (likely(varonce432!=NULL)) {
var433 = varonce432;
} else {
var434 = "` is deprecated.";
var436 = (val*)(16l<<2|1);
var437 = (val*)(16l<<2|1);
var438 = (val*)((long)(0)<<2|3);
var439 = (val*)((long)(0)<<2|3);
var435 = core__flat___CString___to_s_unsafe(var434, var436, var437, var438, var439);
var433 = var435;
varonce432 = var433;
}
((struct instance_core__NativeArray*)var423)->values[2]=var433;
} else {
var423 = varonce422;
varonce422 = NULL;
}
((struct instance_core__NativeArray*)var423)->values[1]=var_name;
{
var440 = ((val*(*)(val* self))(var423->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var423); /* native_to_s on <var423:NativeArray[String]>*/
}
varonce422 = var423;
{
nitc___nitc__ModelBuilder___warning(var411, var_node, var415, var440); /* Direct call modelbuilder_base$ModelBuilder$warning on <var411:ModelBuilder>*/
}
}
} else {
}
{
{ /* Inline typing$TypeVisitor$mmodule (self) on <self:TypeVisitor> */
var443 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var443 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var441 = var443;
RET_LABEL442:(void)0;
}
}
{
var444 = nitc___nitc__MProperty___lookup_definitions(var_mproperty, var441, var_unsafe_type);
}
var_propdefs = var444;
{
{ /* Inline array$AbstractArrayRead$length (var_propdefs) on <var_propdefs:Array[MMethodDef]> */
var447 = var_propdefs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_propdefs:Array[MMethodDef]> */
var445 = var447;
RET_LABEL446:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var445,0l) on <var445:Int> */
var450 = var445 == 0l;
var448 = var450;
goto RET_LABEL449;
RET_LABEL449:(void)0;
}
}
if (var448){
{
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var453 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var453 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var451 = var453;
RET_LABEL452:(void)0;
}
}
if (unlikely(varonce454==NULL)) {
var455 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce456!=NULL)) {
var457 = varonce456;
} else {
var458 = "Type Error: no definition found for property `";
var460 = (val*)(46l<<2|1);
var461 = (val*)(46l<<2|1);
var462 = (val*)((long)(0)<<2|3);
var463 = (val*)((long)(0)<<2|3);
var459 = core__flat___CString___to_s_unsafe(var458, var460, var461, var462, var463);
var457 = var459;
varonce456 = var457;
}
((struct instance_core__NativeArray*)var455)->values[0]=var457;
if (likely(varonce464!=NULL)) {
var465 = varonce464;
} else {
var466 = "` in `";
var468 = (val*)(6l<<2|1);
var469 = (val*)(6l<<2|1);
var470 = (val*)((long)(0)<<2|3);
var471 = (val*)((long)(0)<<2|3);
var467 = core__flat___CString___to_s_unsafe(var466, var468, var469, var470, var471);
var465 = var467;
varonce464 = var465;
}
((struct instance_core__NativeArray*)var455)->values[2]=var465;
if (likely(varonce472!=NULL)) {
var473 = varonce472;
} else {
var474 = "`.";
var476 = (val*)(2l<<2|1);
var477 = (val*)(2l<<2|1);
var478 = (val*)((long)(0)<<2|3);
var479 = (val*)((long)(0)<<2|3);
var475 = core__flat___CString___to_s_unsafe(var474, var476, var477, var478, var479);
var473 = var475;
varonce472 = var473;
}
((struct instance_core__NativeArray*)var455)->values[4]=var473;
} else {
var455 = varonce454;
varonce454 = NULL;
}
((struct instance_core__NativeArray*)var455)->values[1]=var_name;
{
var480 = ((val*(*)(val* self))(var_unsafe_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_unsafe_type); /* to_s on <var_unsafe_type:MType>*/
}
((struct instance_core__NativeArray*)var455)->values[3]=var480;
{
var481 = ((val*(*)(val* self))(var455->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var455); /* native_to_s on <var455:NativeArray[String]>*/
}
varonce454 = var455;
{
nitc___nitc__ModelBuilder___error(var451, var_node, var481); /* Direct call modelbuilder_base$ModelBuilder$error on <var451:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
{
{ /* Inline array$AbstractArrayRead$length (var_propdefs) on <var_propdefs:Array[MMethodDef]> */
var484 = var_propdefs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_propdefs:Array[MMethodDef]> */
var482 = var484;
RET_LABEL483:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var482,1l) on <var482:Int> */
var487 = var482 == 1l;
var485 = var487;
goto RET_LABEL486;
RET_LABEL486:(void)0;
}
}
if (var485){
{
var488 = core___core__SequenceRead___Collection__first(var_propdefs);
}
var_mpropdef = var488;
} else {
{
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var491 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var491 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var489 = var491;
RET_LABEL490:(void)0;
}
}
if (likely(varonce492!=NULL)) {
var493 = varonce492;
} else {
var494 = "property-conflict";
var496 = (val*)(17l<<2|1);
var497 = (val*)(17l<<2|1);
var498 = (val*)((long)(0)<<2|3);
var499 = (val*)((long)(0)<<2|3);
var495 = core__flat___CString___to_s_unsafe(var494, var496, var497, var498, var499);
var493 = var495;
varonce492 = var493;
}
if (unlikely(varonce500==NULL)) {
var501 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce502!=NULL)) {
var503 = varonce502;
} else {
var504 = "Warning: conflicting property definitions for property `";
var506 = (val*)(56l<<2|1);
var507 = (val*)(56l<<2|1);
var508 = (val*)((long)(0)<<2|3);
var509 = (val*)((long)(0)<<2|3);
var505 = core__flat___CString___to_s_unsafe(var504, var506, var507, var508, var509);
var503 = var505;
varonce502 = var503;
}
((struct instance_core__NativeArray*)var501)->values[0]=var503;
if (likely(varonce510!=NULL)) {
var511 = varonce510;
} else {
var512 = "` in `";
var514 = (val*)(6l<<2|1);
var515 = (val*)(6l<<2|1);
var516 = (val*)((long)(0)<<2|3);
var517 = (val*)((long)(0)<<2|3);
var513 = core__flat___CString___to_s_unsafe(var512, var514, var515, var516, var517);
var511 = var513;
varonce510 = var511;
}
((struct instance_core__NativeArray*)var501)->values[2]=var511;
if (likely(varonce518!=NULL)) {
var519 = varonce518;
} else {
var520 = "`: ";
var522 = (val*)(3l<<2|1);
var523 = (val*)(3l<<2|1);
var524 = (val*)((long)(0)<<2|3);
var525 = (val*)((long)(0)<<2|3);
var521 = core__flat___CString___to_s_unsafe(var520, var522, var523, var524, var525);
var519 = var521;
varonce518 = var519;
}
((struct instance_core__NativeArray*)var501)->values[4]=var519;
} else {
var501 = varonce500;
varonce500 = NULL;
}
((struct instance_core__NativeArray*)var501)->values[1]=var_name;
{
var526 = ((val*(*)(val* self))(var_unsafe_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_unsafe_type); /* to_s on <var_unsafe_type:MType>*/
}
((struct instance_core__NativeArray*)var501)->values[3]=var526;
if (likely(varonce527!=NULL)) {
var528 = varonce527;
} else {
var529 = " ";
var531 = (val*)(1l<<2|1);
var532 = (val*)(1l<<2|1);
var533 = (val*)((long)(0)<<2|3);
var534 = (val*)((long)(0)<<2|3);
var530 = core__flat___CString___to_s_unsafe(var529, var531, var532, var533, var534);
var528 = var530;
varonce527 = var528;
}
{
var535 = core__abstract_text___Collection___join(var_propdefs, var528, ((val*)NULL));
}
((struct instance_core__NativeArray*)var501)->values[5]=var535;
{
var536 = ((val*(*)(val* self))(var501->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var501); /* native_to_s on <var501:NativeArray[String]>*/
}
varonce500 = var501;
{
nitc___nitc__ModelBuilder___warning(var489, var_node, var493, var536); /* Direct call modelbuilder_base$ModelBuilder$warning on <var489:ModelBuilder>*/
}
{
{ /* Inline model$MProperty$intro (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var539 = var_mproperty->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_mproperty:nullable MProperty(MMethod)> */
if (unlikely(var539 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var537 = var539;
RET_LABEL538:(void)0;
}
}
var_mpropdef = var537;
}
}
{
{ /* Inline model$MMethodDef$new_msignature (var_mpropdef) on <var_mpropdef:nullable Object(MMethodDef)> */
var543 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_mpropdef:nullable Object(MMethodDef)> */
var541 = var543;
RET_LABEL542:(void)0;
}
}
if (var541!=NULL) {
var540 = var541;
} else {
{
{ /* Inline model$MMethodDef$msignature (var_mpropdef) on <var_mpropdef:nullable Object(MMethodDef)> */
var546 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable Object(MMethodDef)> */
var544 = var546;
RET_LABEL545:(void)0;
}
}
var540 = var544;
}
var_msignature = var540;
if (var_msignature == NULL) {
var547 = 1; /* is null */
} else {
var547 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var552 = var_msignature == var_other;
var550 = var552;
goto RET_LABEL551;
RET_LABEL551:(void)0;
}
}
var548 = var550;
goto RET_LABEL549;
RET_LABEL549:(void)0;
}
var547 = var548;
}
if (var547){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var553 = nitc__typing___nitc__typing__TypeVisitor___resolve_for(self, var_msignature, var_recvtype, var_recv_is_self);
}
/* <var553:MType> isa MSignature */
cltype555 = type_nitc__MSignature.color;
idtype556 = type_nitc__MSignature.id;
if(cltype555 >= var553->type->table_size) {
var554 = 0;
} else {
var554 = var553->type->type_table[cltype555] == idtype556;
}
if (unlikely(!var554)) {
var_class_name = var553 == NULL ? "null" : var553->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MSignature", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 383);
fatal_exit(1);
}
var_msignature = var553;
var_erasure_cast = 0;
{
{ /* Inline model$MMethodDef$msignature (var_mpropdef) on <var_mpropdef:nullable Object(MMethodDef)> */
var559 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable Object(MMethodDef)> */
var557 = var559;
RET_LABEL558:(void)0;
}
}
if (var557 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 386);
fatal_exit(1);
} else {
{ /* Inline model$MSignature$return_mtype (var557) on <var557:nullable MSignature> */
if (unlikely(var557 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1891);
fatal_exit(1);
}
var562 = var557->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var557:nullable MSignature> */
var560 = var562;
RET_LABEL561:(void)0;
}
}
var_rettype = var560;
var564 = !var_recv_is_self;
var_565 = var564;
if (var564){
if (var_rettype == NULL) {
var566 = 0; /* is null */
} else {
var566 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_rettype,((val*)NULL)) on <var_rettype:nullable MType> */
var_other350 = ((val*)NULL);
{
var569 = ((short int(*)(val* self, val* p0))(var_rettype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rettype, var_other350); /* == on <var_rettype:nullable MType(MType)>*/
}
var570 = !var569;
var567 = var570;
goto RET_LABEL568;
RET_LABEL568:(void)0;
}
var566 = var567;
}
var563 = var566;
} else {
var563 = var_565;
}
if (var563){
{
var571 = ((val*(*)(val* self))(var_rettype->class->vft[COLOR_nitc__model__MType__undecorate]))(var_rettype); /* undecorate on <var_rettype:nullable MType(MType)>*/
}
var_rettype = var571;
/* <var_rettype:nullable MType(MType)> isa MParameterType */
cltype573 = type_nitc__MParameterType.color;
idtype574 = type_nitc__MParameterType.id;
if(cltype573 >= var_rettype->type->table_size) {
var572 = 0;
} else {
var572 = var_rettype->type->type_table[cltype573] == idtype574;
}
if (var572){
{
{ /* Inline model$MSignature$return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var577 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var575 = var577;
RET_LABEL576:(void)0;
}
}
var_erased_rettype = var575;
if (var_erased_rettype == NULL) {
var578 = 0; /* is null */
} else {
var578 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_erased_rettype,((val*)NULL)) on <var_erased_rettype:nullable MType> */
var_other350 = ((val*)NULL);
{
var581 = ((short int(*)(val* self, val* p0))(var_erased_rettype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_erased_rettype, var_other350); /* == on <var_erased_rettype:nullable MType(MType)>*/
}
var582 = !var581;
var579 = var582;
goto RET_LABEL580;
RET_LABEL580:(void)0;
}
var578 = var579;
}
if (unlikely(!var578)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 391);
fatal_exit(1);
}
var_erasure_cast = 1;
} else {
}
} else {
}
var583 = NEW_nitc__CallSite(&type_nitc__CallSite);
{
var584 = ((val*(*)(val* self))(var_node->class->vft[COLOR_nitc__parser_nodes__ANode__hot_location]))(var_node); /* hot_location on <var_node:ANode>*/
}
{
{ /* Inline typing$TypeVisitor$mmodule (self) on <self:TypeVisitor> */
var587 = self->attrs[COLOR_nitc__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var587 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 37);
fatal_exit(1);
}
var585 = var587;
RET_LABEL586:(void)0;
}
}
{
{ /* Inline typing$TypeVisitor$anchor (self) on <self:TypeVisitor> */
var590 = self->attrs[COLOR_nitc__typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
var588 = var590;
RET_LABEL589:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var583->class->vft[COLOR_nitc__typing__CallSite__location_61d]))(var583, var584); /* location= on <var583:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var583->class->vft[COLOR_nitc__typing__CallSite__recv_61d]))(var583, var_recvtype); /* recv= on <var583:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var583->class->vft[COLOR_nitc__typing__CallSite__mmodule_61d]))(var583, var585); /* mmodule= on <var583:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var583->class->vft[COLOR_nitc__typing__CallSite__anchor_61d]))(var583, var588); /* anchor= on <var583:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var583->class->vft[COLOR_nitc__typing__CallSite__recv_is_self_61d]))(var583, var_recv_is_self); /* recv_is_self= on <var583:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var583->class->vft[COLOR_nitc__typing__CallSite__mproperty_61d]))(var583, var_mproperty); /* mproperty= on <var583:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var583->class->vft[COLOR_nitc__typing__CallSite__mpropdef_61d]))(var583, var_mpropdef); /* mpropdef= on <var583:CallSite>*/
}
{
((void(*)(val* self, val* p0))(var583->class->vft[COLOR_nitc__typing__CallSite__msignature_61d]))(var583, var_msignature); /* msignature= on <var583:CallSite>*/
}
{
((void(*)(val* self, short int p0))(var583->class->vft[COLOR_nitc__typing__CallSite__erasure_cast_61d]))(var583, var_erasure_cast); /* erasure_cast= on <var583:CallSite>*/
}
{
((void(*)(val* self))(var583->class->vft[COLOR_core__kernel__Object__init]))(var583); /* init on <var583:CallSite>*/
}
var_callsite = var583;
var = var_callsite;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$TypeVisitor$try_get_method for (self: TypeVisitor, ANode, MType, String, Bool): nullable CallSite */
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
{ /* Inline kernel$Object$== (var_mproperty,((val*)NULL)) on <var_mproperty:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mproperty,var_other) on <var_mproperty:nullable MProperty(MProperty)> */
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
/* method typing$TypeVisitor$check_signature for (self: TypeVisitor, ANode, Array[AExpr], MProperty, MSignature): nullable SignatureMap */
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
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Bool */;
val* var38 /* : nullable Bool */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Bool */;
val* var46 /* : nullable Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Bool */;
val* var54 /* : nullable Bool */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : CString */;
val* var58 /* : String */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Bool */;
val* var62 /* : nullable Bool */;
long var63 /* : Int */;
val* var64 /* : String */;
val* var65 /* : String */;
val* var66 /* : String */;
long var67 /* : Int */;
long var69 /* : Int */;
val* var70 /* : String */;
val* var71 /* : String */;
val* var72 /* : String */;
long var73 /* : Int */;
long var75 /* : Int */;
long var76 /* : Int */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
long var81 /* : Int */;
long var83 /* : Int */;
long var84 /* : Int */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
const char* var_class_name90;
short int var91 /* : Bool */;
val* var92 /* : ModelBuilder */;
val* var94 /* : ModelBuilder */;
val* var96 /* : NativeArray[String] */;
static val* varonce95;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : CString */;
val* var100 /* : String */;
val* var101 /* : nullable Int */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Bool */;
val* var104 /* : nullable Bool */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
val* var109 /* : nullable Int */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Bool */;
val* var112 /* : nullable Bool */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : CString */;
val* var116 /* : String */;
val* var117 /* : nullable Int */;
val* var118 /* : nullable Int */;
val* var119 /* : nullable Bool */;
val* var120 /* : nullable Bool */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : CString */;
val* var124 /* : String */;
val* var125 /* : nullable Int */;
val* var126 /* : nullable Int */;
val* var127 /* : nullable Bool */;
val* var128 /* : nullable Bool */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : CString */;
val* var132 /* : String */;
val* var133 /* : nullable Int */;
val* var134 /* : nullable Int */;
val* var135 /* : nullable Bool */;
val* var136 /* : nullable Bool */;
long var137 /* : Int */;
val* var138 /* : String */;
val* var139 /* : String */;
val* var140 /* : String */;
long var141 /* : Int */;
long var143 /* : Int */;
val* var144 /* : String */;
val* var145 /* : String */;
val* var146 /* : String */;
val* var147 /* : SignatureMap */;
val* var_map /* var map: SignatureMap */;
val* var149 /* : String */;
val* var151 /* : String */;
val* var152 /* : SequenceRead[Char] */;
val* var153 /* : nullable Object */;
short int var154 /* : Bool */;
short int var156 /* : Bool */;
uint32_t var157 /* : Char */;
short int var_last_is_padded /* var last_is_padded: Bool */;
long var158 /* : Int */;
long var160 /* : Int */;
long var_nbargs /* var nbargs: Int */;
long var161 /* : Int */;
short int var163 /* : Bool */;
int cltype164;
int idtype165;
const char* var_class_name166;
long var167 /* : Int */;
val* var168 /* : nullable Object */;
short int var169 /* : Bool */;
int cltype170;
int idtype171;
short int var172 /* : Bool */;
val* var173 /* : ArrayMap[Int, Int] */;
val* var175 /* : ArrayMap[Int, Int] */;
long var176 /* : Int */;
long var177 /* : Int */;
short int var179 /* : Bool */;
int cltype180;
int idtype181;
const char* var_class_name182;
long var183 /* : Int */;
long var184 /* : Int */;
long var186 /* : Int */;
long var187 /* : Int */;
short int var189 /* : Bool */;
int cltype190;
int idtype191;
const char* var_class_name192;
long var193 /* : Int */;
val* var194 /* : nullable Object */;
val* var195 /* : nullable Object */;
val* var196 /* : nullable Object */;
val* var197 /* : Array[MParameter] */;
val* var199 /* : Array[MParameter] */;
val* var200 /* : nullable Object */;
val* var201 /* : MType */;
val* var203 /* : MType */;
val* var204 /* : nullable MType */;
long var_i /* var i: Int */;
long var205 /* : Int */;
long var207 /* : Int */;
long var_ /* var : Int */;
short int var208 /* : Bool */;
short int var210 /* : Bool */;
int cltype211;
int idtype212;
const char* var_class_name213;
short int var214 /* : Bool */;
val* var215 /* : nullable Object */;
val* var_e /* var e: AExpr */;
short int var216 /* : Bool */;
int cltype217;
int idtype218;
short int var219 /* : Bool */;
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
char* var242 /* : CString */;
val* var243 /* : String */;
val* var244 /* : nullable Int */;
val* var245 /* : nullable Int */;
val* var246 /* : nullable Bool */;
val* var247 /* : nullable Bool */;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : CString */;
val* var251 /* : String */;
val* var252 /* : nullable Int */;
val* var253 /* : nullable Int */;
val* var254 /* : nullable Bool */;
val* var255 /* : nullable Bool */;
static val* varonce256;
val* var257 /* : String */;
char* var258 /* : CString */;
val* var259 /* : String */;
val* var260 /* : nullable Int */;
val* var261 /* : nullable Int */;
val* var262 /* : nullable Bool */;
val* var263 /* : nullable Bool */;
val* var264 /* : String */;
val* var265 /* : String */;
val* var266 /* : String */;
val* var267 /* : Array[MParameter] */;
val* var269 /* : Array[MParameter] */;
long var270 /* : Int */;
long var_idx /* var idx: Int */;
val* var271 /* : ArrayMap[Int, Int] */;
val* var273 /* : ArrayMap[Int, Int] */;
val* var274 /* : nullable Object */;
val* var275 /* : nullable Object */;
val* var_prev /* var prev: nullable Int */;
short int var276 /* : Bool */;
short int var277 /* : Bool */;
short int var279 /* : Bool */;
short int var280 /* : Bool */;
val* var281 /* : ModelBuilder */;
val* var283 /* : ModelBuilder */;
val* var285 /* : NativeArray[String] */;
static val* varonce284;
static val* varonce286;
val* var287 /* : String */;
char* var288 /* : CString */;
val* var289 /* : String */;
val* var290 /* : nullable Int */;
val* var291 /* : nullable Int */;
val* var292 /* : nullable Bool */;
val* var293 /* : nullable Bool */;
static val* varonce294;
val* var295 /* : String */;
char* var296 /* : CString */;
val* var297 /* : String */;
val* var298 /* : nullable Int */;
val* var299 /* : nullable Int */;
val* var300 /* : nullable Bool */;
val* var301 /* : nullable Bool */;
static val* varonce302;
val* var303 /* : String */;
char* var304 /* : CString */;
val* var305 /* : String */;
val* var306 /* : nullable Int */;
val* var307 /* : nullable Int */;
val* var308 /* : nullable Bool */;
val* var309 /* : nullable Bool */;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : CString */;
val* var313 /* : String */;
val* var314 /* : nullable Int */;
val* var315 /* : nullable Int */;
val* var316 /* : nullable Bool */;
val* var317 /* : nullable Bool */;
val* var318 /* : String */;
long var319 /* : Int */;
val* var320 /* : String */;
val* var321 /* : String */;
val* var322 /* : String */;
val* var323 /* : ArrayMap[Int, Int] */;
val* var325 /* : ArrayMap[Int, Int] */;
val* var326 /* : nullable Object */;
val* var327 /* : nullable Object */;
val* var328 /* : AExpr */;
val* var330 /* : AExpr */;
val* var331 /* : MType */;
val* var333 /* : MType */;
val* var334 /* : nullable MType */;
long var336 /* : Int */;
long var_min_arity /* var min_arity: Int */;
long var337 /* : Int */;
long var339 /* : Int */;
long var340 /* : Int */;
long var341 /* : Int */;
short int var343 /* : Bool */;
int cltype344;
int idtype345;
const char* var_class_name346;
long var347 /* : Int */;
long var_vararg_decl /* var vararg_decl: Int */;
long var_j /* var j: Int */;
long var_i348 /* var i: Int */;
long var349 /* : Int */;
long var_350 /* var : Int */;
short int var351 /* : Bool */;
short int var353 /* : Bool */;
int cltype354;
int idtype355;
const char* var_class_name356;
short int var357 /* : Bool */;
val* var359 /* : ArrayMap[Int, Int] */;
val* var361 /* : ArrayMap[Int, Int] */;
short int var362 /* : Bool */;
val* var363 /* : nullable Object */;
val* var365 /* : Array[MParameter] */;
val* var367 /* : Array[MParameter] */;
val* var368 /* : nullable Object */;
val* var_param369 /* var param: MParameter */;
short int var370 /* : Bool */;
short int var371 /* : Bool */;
short int var373 /* : Bool */;
int cltype374;
int idtype375;
const char* var_class_name376;
short int var377 /* : Bool */;
short int var_378 /* var : Bool */;
val* var379 /* : nullable Object */;
short int var380 /* : Bool */;
int cltype381;
int idtype382;
long var383 /* : Int */;
short int var385 /* : Bool */;
int cltype386;
int idtype387;
const char* var_class_name388;
long var389 /* : Int */;
short int var391 /* : Bool */;
short int var393 /* : Bool */;
int cltype394;
int idtype395;
const char* var_class_name396;
short int var397 /* : Bool */;
val* var398 /* : MType */;
val* var400 /* : MType */;
short int var401 /* : Bool */;
int cltype402;
int idtype403;
short int var404 /* : Bool */;
long var405 /* : Int */;
short int var407 /* : Bool */;
int cltype408;
int idtype409;
const char* var_class_name410;
long var411 /* : Int */;
long var412 /* : Int */;
short int var414 /* : Bool */;
int cltype415;
int idtype416;
const char* var_class_name417;
long var418 /* : Int */;
val* var419 /* : nullable Object */;
val* var_arg /* var arg: AExpr */;
val* var420 /* : ArrayMap[Int, Int] */;
val* var422 /* : ArrayMap[Int, Int] */;
val* var423 /* : nullable Object */;
val* var424 /* : nullable Object */;
long var425 /* : Int */;
short int var427 /* : Bool */;
int cltype428;
int idtype429;
const char* var_class_name430;
long var431 /* : Int */;
short int var432 /* : Bool */;
short int var434 /* : Bool */;
long var435 /* : Int */;
short int var437 /* : Bool */;
int cltype438;
int idtype439;
const char* var_class_name440;
long var441 /* : Int */;
short int var442 /* : Bool */;
short int var444 /* : Bool */;
short int var445 /* : Bool */;
val* var446 /* : MType */;
val* var448 /* : MType */;
val* var_paramtype /* var paramtype: MType */;
val* var449 /* : nullable MType */;
short int var450 /* : Bool */;
long var451 /* : Int */;
short int var452 /* : Bool */;
short int var454 /* : Bool */;
int cltype455;
int idtype456;
const char* var_class_name457;
short int var458 /* : Bool */;
long var459 /* : Int */;
short int var461 /* : Bool */;
int cltype462;
int idtype463;
const char* var_class_name464;
long var465 /* : Int */;
long var466 /* : Int */;
short int var467 /* : Bool */;
short int var469 /* : Bool */;
int cltype470;
int idtype471;
const char* var_class_name472;
short int var473 /* : Bool */;
val* var474 /* : ModelBuilder */;
val* var476 /* : ModelBuilder */;
val* var478 /* : NativeArray[String] */;
static val* varonce477;
static val* varonce479;
val* var480 /* : String */;
char* var481 /* : CString */;
val* var482 /* : String */;
val* var483 /* : nullable Int */;
val* var484 /* : nullable Int */;
val* var485 /* : nullable Bool */;
val* var486 /* : nullable Bool */;
static val* varonce487;
val* var488 /* : String */;
char* var489 /* : CString */;
val* var490 /* : String */;
val* var491 /* : nullable Int */;
val* var492 /* : nullable Int */;
val* var493 /* : nullable Bool */;
val* var494 /* : nullable Bool */;
static val* varonce495;
val* var496 /* : String */;
char* var497 /* : CString */;
val* var498 /* : String */;
val* var499 /* : nullable Int */;
val* var500 /* : nullable Int */;
val* var501 /* : nullable Bool */;
val* var502 /* : nullable Bool */;
static val* varonce503;
val* var504 /* : String */;
char* var505 /* : CString */;
val* var506 /* : String */;
val* var507 /* : nullable Int */;
val* var508 /* : nullable Int */;
val* var509 /* : nullable Bool */;
val* var510 /* : nullable Bool */;
static val* varonce511;
val* var512 /* : String */;
char* var513 /* : CString */;
val* var514 /* : String */;
val* var515 /* : nullable Int */;
val* var516 /* : nullable Int */;
val* var517 /* : nullable Bool */;
val* var518 /* : nullable Bool */;
val* var519 /* : String */;
val* var520 /* : String */;
val* var521 /* : String */;
long var522 /* : Int */;
long var524 /* : Int */;
val* var525 /* : String */;
val* var526 /* : String */;
val* var527 /* : String */;
val* var528 /* : ModelBuilder */;
val* var530 /* : ModelBuilder */;
val* var532 /* : NativeArray[String] */;
static val* varonce531;
static val* varonce533;
val* var534 /* : String */;
char* var535 /* : CString */;
val* var536 /* : String */;
val* var537 /* : nullable Int */;
val* var538 /* : nullable Int */;
val* var539 /* : nullable Bool */;
val* var540 /* : nullable Bool */;
static val* varonce541;
val* var542 /* : String */;
char* var543 /* : CString */;
val* var544 /* : String */;
val* var545 /* : nullable Int */;
val* var546 /* : nullable Int */;
val* var547 /* : nullable Bool */;
val* var548 /* : nullable Bool */;
static val* varonce549;
val* var550 /* : String */;
char* var551 /* : CString */;
val* var552 /* : String */;
val* var553 /* : nullable Int */;
val* var554 /* : nullable Int */;
val* var555 /* : nullable Bool */;
val* var556 /* : nullable Bool */;
static val* varonce557;
val* var558 /* : String */;
char* var559 /* : CString */;
val* var560 /* : String */;
val* var561 /* : nullable Int */;
val* var562 /* : nullable Int */;
val* var563 /* : nullable Bool */;
val* var564 /* : nullable Bool */;
static val* varonce565;
val* var566 /* : String */;
char* var567 /* : CString */;
val* var568 /* : String */;
val* var569 /* : nullable Int */;
val* var570 /* : nullable Int */;
val* var571 /* : nullable Bool */;
val* var572 /* : nullable Bool */;
val* var573 /* : String */;
val* var574 /* : String */;
val* var575 /* : String */;
long var576 /* : Int */;
long var578 /* : Int */;
val* var579 /* : String */;
val* var580 /* : String */;
val* var581 /* : String */;
short int var582 /* : Bool */;
short int var584 /* : Bool */;
int cltype585;
int idtype586;
const char* var_class_name587;
short int var588 /* : Bool */;
val* var589 /* : Array[MParameter] */;
val* var591 /* : Array[MParameter] */;
val* var592 /* : nullable Object */;
val* var593 /* : MType */;
val* var595 /* : MType */;
val* var_paramtype596 /* var paramtype: MType */;
val* var597 /* : nullable Object */;
val* var_first /* var first: AExpr */;
short int var598 /* : Bool */;
short int var600 /* : Bool */;
val* var601 /* : Array[MParameter] */;
val* var603 /* : Array[MParameter] */;
val* var604 /* : nullable Object */;
short int var605 /* : Bool */;
short int var606 /* : Bool */;
long var607 /* : Int */;
short int var609 /* : Bool */;
int cltype610;
int idtype611;
const char* var_class_name612;
long var613 /* : Int */;
long var_i615 /* var i: Int */;
long var616 /* : Int */;
short int var618 /* : Bool */;
int cltype619;
int idtype620;
const char* var_class_name621;
long var622 /* : Int */;
long var_623 /* var : Int */;
short int var624 /* : Bool */;
short int var626 /* : Bool */;
int cltype627;
int idtype628;
const char* var_class_name629;
short int var630 /* : Bool */;
val* var632 /* : nullable Object */;
val* var633 /* : nullable MType */;
long var634 /* : Int */;
var_node = p0;
var_args = p1;
var_mproperty = p2;
var_msignature = p3;
{
{ /* Inline model$MSignature$vararg_rank (var_msignature) on <var_msignature:MSignature> */
var3 = var_msignature->attrs[COLOR_nitc__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_vararg_rank = var1;
{
{ /* Inline kernel$Int$>= (var_vararg_rank,0l) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
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
{ /* Inline array$AbstractArrayRead$length (var_args) on <var_args:Array[AExpr]> */
var10 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel$Int$< (var8,var11) on <var8:Int> */
/* Covariant cast for argument 0 (i) <var11:Int> isa OTHER */
/* <var11:Int> isa OTHER */
var14 = 1; /* easy <var11:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
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
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var21 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var22 = NEW_core__NativeArray((int)10l, &type_core__NativeArray__core__String);
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "Error: expected at least ";
var27 = (val*)(25l<<2|1);
var28 = (val*)(25l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var22)->values[0]=var24;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = " argument(s) for `";
var35 = (val*)(18l<<2|1);
var36 = (val*)(18l<<2|1);
var37 = (val*)((long)(0)<<2|3);
var38 = (val*)((long)(0)<<2|3);
var34 = core__flat___CString___to_s_unsafe(var33, var35, var36, var37, var38);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var22)->values[2]=var32;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "`; got ";
var43 = (val*)(7l<<2|1);
var44 = (val*)(7l<<2|1);
var45 = (val*)((long)(0)<<2|3);
var46 = (val*)((long)(0)<<2|3);
var42 = core__flat___CString___to_s_unsafe(var41, var43, var44, var45, var46);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var22)->values[5]=var40;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = ". See introduction at `";
var51 = (val*)(23l<<2|1);
var52 = (val*)(23l<<2|1);
var53 = (val*)((long)(0)<<2|3);
var54 = (val*)((long)(0)<<2|3);
var50 = core__flat___CString___to_s_unsafe(var49, var51, var52, var53, var54);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var22)->values[7]=var48;
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "`.";
var59 = (val*)(2l<<2|1);
var60 = (val*)(2l<<2|1);
var61 = (val*)((long)(0)<<2|3);
var62 = (val*)((long)(0)<<2|3);
var58 = core__flat___CString___to_s_unsafe(var57, var59, var60, var61, var62);
var56 = var58;
varonce55 = var56;
}
((struct instance_core__NativeArray*)var22)->values[9]=var56;
} else {
var22 = varonce;
varonce = NULL;
}
{
var63 = nitc___nitc__MSignature___arity(var_msignature);
}
var64 = core__flat___Int___core__abstract_text__Object__to_s(var63);
((struct instance_core__NativeArray*)var22)->values[1]=var64;
{
var65 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_core__NativeArray*)var22)->values[3]=var65;
{
var66 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_core__NativeArray*)var22)->values[4]=var66;
{
{ /* Inline array$AbstractArrayRead$length (var_args) on <var_args:Array[AExpr]> */
var69 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
var70 = core__flat___Int___core__abstract_text__Object__to_s(var67);
((struct instance_core__NativeArray*)var22)->values[6]=var70;
{
var71 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mproperty);
}
((struct instance_core__NativeArray*)var22)->values[8]=var71;
{
var72 = ((val*(*)(val* self))(var22->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var22); /* native_to_s on <var22:NativeArray[String]>*/
}
varonce = var22;
{
nitc___nitc__ModelBuilder___error(var19, var_node, var72); /* Direct call modelbuilder_base$ModelBuilder$error on <var19:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline array$AbstractArrayRead$length (var_args) on <var_args:Array[AExpr]> */
var75 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel$Int$!= (var73,var76) on <var73:Int> */
var79 = var73 == var76;
var80 = !var79;
var77 = var80;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
if (var77){
{
{ /* Inline array$AbstractArrayRead$length (var_args) on <var_args:Array[AExpr]> */
var83 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
var84 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel$Int$> (var81,var84) on <var81:Int> */
/* Covariant cast for argument 0 (i) <var84:Int> isa OTHER */
/* <var84:Int> isa OTHER */
var87 = 1; /* easy <var84:Int> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var91 = var81 > var84;
var85 = var91;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
if (var85){
{
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var94 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var94 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
if (unlikely(varonce95==NULL)) {
var96 = NEW_core__NativeArray((int)10l, &type_core__NativeArray__core__String);
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "Error: expected ";
var101 = (val*)(16l<<2|1);
var102 = (val*)(16l<<2|1);
var103 = (val*)((long)(0)<<2|3);
var104 = (val*)((long)(0)<<2|3);
var100 = core__flat___CString___to_s_unsafe(var99, var101, var102, var103, var104);
var98 = var100;
varonce97 = var98;
}
((struct instance_core__NativeArray*)var96)->values[0]=var98;
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = " argument(s) for `";
var109 = (val*)(18l<<2|1);
var110 = (val*)(18l<<2|1);
var111 = (val*)((long)(0)<<2|3);
var112 = (val*)((long)(0)<<2|3);
var108 = core__flat___CString___to_s_unsafe(var107, var109, var110, var111, var112);
var106 = var108;
varonce105 = var106;
}
((struct instance_core__NativeArray*)var96)->values[2]=var106;
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = "`; got ";
var117 = (val*)(7l<<2|1);
var118 = (val*)(7l<<2|1);
var119 = (val*)((long)(0)<<2|3);
var120 = (val*)((long)(0)<<2|3);
var116 = core__flat___CString___to_s_unsafe(var115, var117, var118, var119, var120);
var114 = var116;
varonce113 = var114;
}
((struct instance_core__NativeArray*)var96)->values[5]=var114;
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = ". See introduction at `";
var125 = (val*)(23l<<2|1);
var126 = (val*)(23l<<2|1);
var127 = (val*)((long)(0)<<2|3);
var128 = (val*)((long)(0)<<2|3);
var124 = core__flat___CString___to_s_unsafe(var123, var125, var126, var127, var128);
var122 = var124;
varonce121 = var122;
}
((struct instance_core__NativeArray*)var96)->values[7]=var122;
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "`.";
var133 = (val*)(2l<<2|1);
var134 = (val*)(2l<<2|1);
var135 = (val*)((long)(0)<<2|3);
var136 = (val*)((long)(0)<<2|3);
var132 = core__flat___CString___to_s_unsafe(var131, var133, var134, var135, var136);
var130 = var132;
varonce129 = var130;
}
((struct instance_core__NativeArray*)var96)->values[9]=var130;
} else {
var96 = varonce95;
varonce95 = NULL;
}
{
var137 = nitc___nitc__MSignature___arity(var_msignature);
}
var138 = core__flat___Int___core__abstract_text__Object__to_s(var137);
((struct instance_core__NativeArray*)var96)->values[1]=var138;
{
var139 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_core__NativeArray*)var96)->values[3]=var139;
{
var140 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_core__NativeArray*)var96)->values[4]=var140;
{
{ /* Inline array$AbstractArrayRead$length (var_args) on <var_args:Array[AExpr]> */
var143 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var141 = var143;
RET_LABEL142:(void)0;
}
}
var144 = core__flat___Int___core__abstract_text__Object__to_s(var141);
((struct instance_core__NativeArray*)var96)->values[6]=var144;
{
var145 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mproperty);
}
((struct instance_core__NativeArray*)var96)->values[8]=var145;
{
var146 = ((val*(*)(val* self))(var96->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var96); /* native_to_s on <var96:NativeArray[String]>*/
}
varonce95 = var96;
{
nitc___nitc__ModelBuilder___error(var92, var_node, var146); /* Direct call modelbuilder_base$ModelBuilder$error on <var92:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
} else {
}
}
var147 = NEW_nitc__SignatureMap(&type_nitc__SignatureMap);
{
{ /* Inline kernel$Object$init (var147) on <var147:SignatureMap> */
RET_LABEL148:(void)0;
}
}
var_map = var147;
{
{ /* Inline model$MProperty$name (var_mproperty) on <var_mproperty:MProperty> */
var151 = var_mproperty->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_mproperty:MProperty> */
if (unlikely(var151 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var149 = var151;
RET_LABEL150:(void)0;
}
}
{
var152 = ((val*(*)(val* self))(var149->class->vft[COLOR_core__abstract_text__Text__chars]))(var149); /* chars on <var149:String>*/
}
{
var153 = ((val*(*)(val* self))((((long)var152&3)?class_info[((long)var152&3)]:var152->class)->vft[COLOR_core__abstract_collection__SequenceRead__last]))(var152); /* last on <var152:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$== (var153,'=') on <var153:nullable Object(Char)> */
var157 = (uint32_t)((long)(var153)>>2);
var156 = var157 == '=';
var154 = var156;
goto RET_LABEL155;
RET_LABEL155:(void)0;
}
}
var_last_is_padded = var154;
{
{ /* Inline array$AbstractArrayRead$length (var_args) on <var_args:Array[AExpr]> */
var160 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var158 = var160;
RET_LABEL159:(void)0;
}
}
var_nbargs = var158;
if (var_last_is_padded){
{
{ /* Inline kernel$Int$- (var_nbargs,1l) on <var_nbargs:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var163 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var163)) {
var_class_name166 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name166);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var167 = var_nbargs - 1l;
var161 = var167;
goto RET_LABEL162;
RET_LABEL162:(void)0;
}
}
var_nbargs = var161;
{
var168 = core___core__SequenceRead___last(var_args);
}
/* <var168:nullable Object(AExpr)> isa ANamedargExpr */
cltype170 = type_nitc__ANamedargExpr.color;
idtype171 = type_nitc__ANamedargExpr.id;
if(cltype170 >= var168->type->table_size) {
var169 = 0;
} else {
var169 = var168->type->type_table[cltype170] == idtype171;
}
var172 = !var169;
if (unlikely(!var172)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 442);
fatal_exit(1);
}
{
{ /* Inline typing$SignatureMap$map (var_map) on <var_map:SignatureMap> */
var175 = var_map->attrs[COLOR_nitc__typing__SignatureMap___map].val; /* _map on <var_map:SignatureMap> */
if (unlikely(var175 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 632);
fatal_exit(1);
}
var173 = var175;
RET_LABEL174:(void)0;
}
}
{
var176 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel$Int$- (var176,1l) on <var176:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var179 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var179)) {
var_class_name182 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name182);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var183 = var176 - 1l;
var177 = var183;
goto RET_LABEL178;
RET_LABEL178:(void)0;
}
}
{
{ /* Inline array$AbstractArrayRead$length (var_args) on <var_args:Array[AExpr]> */
var186 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var184 = var186;
RET_LABEL185:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var184,1l) on <var184:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var189 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var189)) {
var_class_name192 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name192);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var193 = var184 - 1l;
var187 = var193;
goto RET_LABEL188;
RET_LABEL188:(void)0;
}
}
{
var194 = (val*)(var177<<2|1);
var195 = (val*)(var187<<2|1);
core___core__ArrayMap___core__abstract_collection__Map___91d_93d_61d(var173, var194, var195); /* Direct call array$ArrayMap$[]= on <var173:ArrayMap[Int, Int]>*/
}
{
var196 = core___core__SequenceRead___last(var_args);
}
{
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:MSignature> */
var199 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var199 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var197 = var199;
RET_LABEL198:(void)0;
}
}
{
var200 = core___core__SequenceRead___last(var197);
}
{
{ /* Inline model$MParameter$mtype (var200) on <var200:nullable Object(MParameter)> */
var203 = var200->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var200:nullable Object(MParameter)> */
if (unlikely(var203 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var201 = var203;
RET_LABEL202:(void)0;
}
}
{
var204 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(self, var196, var201);
}
} else {
}
var_i = 0l;
{
{ /* Inline array$AbstractArrayRead$length (var_args) on <var_args:Array[AExpr]> */
var207 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var205 = var207;
RET_LABEL206:(void)0;
}
}
var_ = var205;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var210 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var210)) {
var_class_name213 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name213);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var214 = var_i < var_;
var208 = var214;
goto RET_LABEL209;
RET_LABEL209:(void)0;
}
}
if (var208){
} else {
goto BREAK_label;
}
{
var215 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var_i);
}
var_e = var215;
/* <var_e:AExpr> isa ANamedargExpr */
cltype217 = type_nitc__ANamedargExpr.color;
idtype218 = type_nitc__ANamedargExpr.id;
if(cltype217 >= var_e->type->table_size) {
var216 = 0;
} else {
var216 = var_e->type->type_table[cltype217] == idtype218;
}
var219 = !var216;
if (var219){
goto BREAK_label220;
} else {
}
{
{ /* Inline parser_nodes$ANamedargExpr$n_id (var_e) on <var_e:AExpr(ANamedargExpr)> */
var223 = var_e->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_id].val; /* _n_id on <var_e:AExpr(ANamedargExpr)> */
if (unlikely(var223 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2722);
fatal_exit(1);
}
var221 = var223;
RET_LABEL222:(void)0;
}
}
{
var224 = nitc__lexer_work___Token___text(var221);
}
var_name = var224;
{
var225 = nitc___nitc__MSignature___mparameter_by_name(var_msignature, var_name);
}
var_param = var225;
if (var_param == NULL) {
var226 = 1; /* is null */
} else {
var226 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_param,((val*)NULL)) on <var_param:nullable MParameter> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_param,var_other) on <var_param:nullable MParameter(MParameter)> */
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
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var234 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var234 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var232 = var234;
RET_LABEL233:(void)0;
}
}
{
{ /* Inline parser_nodes$ANamedargExpr$n_id (var_e) on <var_e:AExpr(ANamedargExpr)> */
var237 = var_e->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_id].val; /* _n_id on <var_e:AExpr(ANamedargExpr)> */
if (unlikely(var237 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2722);
fatal_exit(1);
}
var235 = var237;
RET_LABEL236:(void)0;
}
}
if (unlikely(varonce238==NULL)) {
var239 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce240!=NULL)) {
var241 = varonce240;
} else {
var242 = "Error: no parameter `";
var244 = (val*)(21l<<2|1);
var245 = (val*)(21l<<2|1);
var246 = (val*)((long)(0)<<2|3);
var247 = (val*)((long)(0)<<2|3);
var243 = core__flat___CString___to_s_unsafe(var242, var244, var245, var246, var247);
var241 = var243;
varonce240 = var241;
}
((struct instance_core__NativeArray*)var239)->values[0]=var241;
if (likely(varonce248!=NULL)) {
var249 = varonce248;
} else {
var250 = "` for `";
var252 = (val*)(7l<<2|1);
var253 = (val*)(7l<<2|1);
var254 = (val*)((long)(0)<<2|3);
var255 = (val*)((long)(0)<<2|3);
var251 = core__flat___CString___to_s_unsafe(var250, var252, var253, var254, var255);
var249 = var251;
varonce248 = var249;
}
((struct instance_core__NativeArray*)var239)->values[2]=var249;
if (likely(varonce256!=NULL)) {
var257 = varonce256;
} else {
var258 = "`.";
var260 = (val*)(2l<<2|1);
var261 = (val*)(2l<<2|1);
var262 = (val*)((long)(0)<<2|3);
var263 = (val*)((long)(0)<<2|3);
var259 = core__flat___CString___to_s_unsafe(var258, var260, var261, var262, var263);
var257 = var259;
varonce256 = var257;
}
((struct instance_core__NativeArray*)var239)->values[5]=var257;
} else {
var239 = varonce238;
varonce238 = NULL;
}
((struct instance_core__NativeArray*)var239)->values[1]=var_name;
{
var264 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_core__NativeArray*)var239)->values[3]=var264;
{
var265 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_core__NativeArray*)var239)->values[4]=var265;
{
var266 = ((val*(*)(val* self))(var239->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var239); /* native_to_s on <var239:NativeArray[String]>*/
}
varonce238 = var239;
{
nitc___nitc__ModelBuilder___error(var232, var235, var266); /* Direct call modelbuilder_base$ModelBuilder$error on <var232:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:MSignature> */
var269 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var269 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var267 = var269;
RET_LABEL268:(void)0;
}
}
{
var270 = core___core__AbstractArrayRead___core__abstract_collection__SequenceRead__index_of(var267, var_param);
}
var_idx = var270;
{
{ /* Inline typing$SignatureMap$map (var_map) on <var_map:SignatureMap> */
var273 = var_map->attrs[COLOR_nitc__typing__SignatureMap___map].val; /* _map on <var_map:SignatureMap> */
if (unlikely(var273 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 632);
fatal_exit(1);
}
var271 = var273;
RET_LABEL272:(void)0;
}
}
{
var275 = (val*)(var_idx<<2|1);
var274 = core___core__MapRead___get_or_null(var271, var275);
}
var_prev = var274;
if (var_prev == NULL) {
var276 = 0; /* is null */
} else {
var276 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Int$!= (var_prev,((val*)NULL)) on <var_prev:nullable Int> */
var279 = 0; /* incompatible types Int vs. null; cannot be NULL */
var280 = !var279;
var277 = var280;
goto RET_LABEL278;
RET_LABEL278:(void)0;
}
var276 = var277;
}
if (var276){
{
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var283 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var283 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var281 = var283;
RET_LABEL282:(void)0;
}
}
if (unlikely(varonce284==NULL)) {
var285 = NEW_core__NativeArray((int)8l, &type_core__NativeArray__core__String);
if (likely(varonce286!=NULL)) {
var287 = varonce286;
} else {
var288 = "Error: parameter `";
var290 = (val*)(18l<<2|1);
var291 = (val*)(18l<<2|1);
var292 = (val*)((long)(0)<<2|3);
var293 = (val*)((long)(0)<<2|3);
var289 = core__flat___CString___to_s_unsafe(var288, var290, var291, var292, var293);
var287 = var289;
varonce286 = var287;
}
((struct instance_core__NativeArray*)var285)->values[0]=var287;
if (likely(varonce294!=NULL)) {
var295 = varonce294;
} else {
var296 = "` already associated with argument #";
var298 = (val*)(36l<<2|1);
var299 = (val*)(36l<<2|1);
var300 = (val*)((long)(0)<<2|3);
var301 = (val*)((long)(0)<<2|3);
var297 = core__flat___CString___to_s_unsafe(var296, var298, var299, var300, var301);
var295 = var297;
varonce294 = var295;
}
((struct instance_core__NativeArray*)var285)->values[2]=var295;
if (likely(varonce302!=NULL)) {
var303 = varonce302;
} else {
var304 = " for `";
var306 = (val*)(6l<<2|1);
var307 = (val*)(6l<<2|1);
var308 = (val*)((long)(0)<<2|3);
var309 = (val*)((long)(0)<<2|3);
var305 = core__flat___CString___to_s_unsafe(var304, var306, var307, var308, var309);
var303 = var305;
varonce302 = var303;
}
((struct instance_core__NativeArray*)var285)->values[4]=var303;
if (likely(varonce310!=NULL)) {
var311 = varonce310;
} else {
var312 = "`.";
var314 = (val*)(2l<<2|1);
var315 = (val*)(2l<<2|1);
var316 = (val*)((long)(0)<<2|3);
var317 = (val*)((long)(0)<<2|3);
var313 = core__flat___CString___to_s_unsafe(var312, var314, var315, var316, var317);
var311 = var313;
varonce310 = var311;
}
((struct instance_core__NativeArray*)var285)->values[7]=var311;
} else {
var285 = varonce284;
varonce284 = NULL;
}
((struct instance_core__NativeArray*)var285)->values[1]=var_name;
var319 = (long)(var_prev)>>2;
var318 = core__flat___Int___core__abstract_text__Object__to_s(var319);
((struct instance_core__NativeArray*)var285)->values[3]=var318;
{
var320 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_core__NativeArray*)var285)->values[5]=var320;
{
var321 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_core__NativeArray*)var285)->values[6]=var321;
{
var322 = ((val*(*)(val* self))(var285->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var285); /* native_to_s on <var285:NativeArray[String]>*/
}
varonce284 = var285;
{
nitc___nitc__ModelBuilder___error(var281, var_e, var322); /* Direct call modelbuilder_base$ModelBuilder$error on <var281:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$SignatureMap$map (var_map) on <var_map:SignatureMap> */
var325 = var_map->attrs[COLOR_nitc__typing__SignatureMap___map].val; /* _map on <var_map:SignatureMap> */
if (unlikely(var325 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 632);
fatal_exit(1);
}
var323 = var325;
RET_LABEL324:(void)0;
}
}
{
var326 = (val*)(var_idx<<2|1);
var327 = (val*)(var_i<<2|1);
core___core__ArrayMap___core__abstract_collection__Map___91d_93d_61d(var323, var326, var327); /* Direct call array$ArrayMap$[]= on <var323:ArrayMap[Int, Int]>*/
}
{
{ /* Inline parser_nodes$ANamedargExpr$n_expr (var_e) on <var_e:AExpr(ANamedargExpr)> */
var330 = var_e->attrs[COLOR_nitc__parser_nodes__ANamedargExpr___n_expr].val; /* _n_expr on <var_e:AExpr(ANamedargExpr)> */
if (unlikely(var330 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2728);
fatal_exit(1);
}
var328 = var330;
RET_LABEL329:(void)0;
}
}
{
{ /* Inline model$MParameter$mtype (var_param) on <var_param:nullable MParameter(MParameter)> */
var333 = var_param->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_param:nullable MParameter(MParameter)> */
if (unlikely(var333 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var331 = var333;
RET_LABEL332:(void)0;
}
}
{
var334 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(self, var328, var331);
}
{
{ /* Inline typing$AExpr$mtype= (var_e,var334) on <var_e:AExpr(ANamedargExpr)> */
var_e->attrs[COLOR_nitc__typing__AExpr___mtype].val = var334; /* _mtype on <var_e:AExpr(ANamedargExpr)> */
RET_LABEL335:(void)0;
}
}
BREAK_label220: (void)0;
{
var336 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var336;
}
BREAK_label: (void)0;
var_min_arity = 0l;
{
{ /* Inline array$AbstractArrayRead$length (var_args) on <var_args:Array[AExpr]> */
var339 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var337 = var339;
RET_LABEL338:(void)0;
}
}
{
var340 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel$Int$- (var337,var340) on <var337:Int> */
/* Covariant cast for argument 0 (i) <var340:Int> isa OTHER */
/* <var340:Int> isa OTHER */
var343 = 1; /* easy <var340:Int> isa OTHER*/
if (unlikely(!var343)) {
var_class_name346 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name346);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var347 = var337 - var340;
var341 = var347;
goto RET_LABEL342;
RET_LABEL342:(void)0;
}
}
var_vararg_decl = var341;
var_j = 0l;
var_i348 = 0l;
{
var349 = nitc___nitc__MSignature___arity(var_msignature);
}
var_350 = var349;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i348,var_350) on <var_i348:Int> */
/* Covariant cast for argument 0 (i) <var_350:Int> isa OTHER */
/* <var_350:Int> isa OTHER */
var353 = 1; /* easy <var_350:Int> isa OTHER*/
if (unlikely(!var353)) {
var_class_name356 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name356);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var357 = var_i348 < var_350;
var351 = var357;
goto RET_LABEL352;
RET_LABEL352:(void)0;
}
}
if (var351){
} else {
goto BREAK_label358;
}
{
{ /* Inline typing$SignatureMap$map (var_map) on <var_map:SignatureMap> */
var361 = var_map->attrs[COLOR_nitc__typing__SignatureMap___map].val; /* _map on <var_map:SignatureMap> */
if (unlikely(var361 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 632);
fatal_exit(1);
}
var359 = var361;
RET_LABEL360:(void)0;
}
}
{
var363 = (val*)(var_i348<<2|1);
var362 = core___core__CoupleMap___MapRead__has_key(var359, var363);
}
if (var362){
goto BREAK_label364;
} else {
}
{
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:MSignature> */
var367 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var367 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var365 = var367;
RET_LABEL366:(void)0;
}
}
{
var368 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var365, var_i348);
}
var_param369 = var368;
for(;;) {
{
{ /* Inline kernel$Int$< (var_j,var_nbargs) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_nbargs:Int> isa OTHER */
/* <var_nbargs:Int> isa OTHER */
var373 = 1; /* easy <var_nbargs:Int> isa OTHER*/
if (unlikely(!var373)) {
var_class_name376 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name376);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var377 = var_j < var_nbargs;
var371 = var377;
goto RET_LABEL372;
RET_LABEL372:(void)0;
}
}
var_378 = var371;
if (var371){
{
var379 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var_j);
}
/* <var379:nullable Object(AExpr)> isa ANamedargExpr */
cltype381 = type_nitc__ANamedargExpr.color;
idtype382 = type_nitc__ANamedargExpr.id;
if(cltype381 >= var379->type->table_size) {
var380 = 0;
} else {
var380 = var379->type->type_table[cltype381] == idtype382;
}
var370 = var380;
} else {
var370 = var_378;
}
if (var370){
{
{ /* Inline kernel$Int$+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var385 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var385)) {
var_class_name388 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name388);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var389 = var_j + 1l;
var383 = var389;
goto RET_LABEL384;
RET_LABEL384:(void)0;
}
}
var_j = var383;
} else {
goto BREAK_label390;
}
}
BREAK_label390: (void)0;
{
{ /* Inline kernel$Int$>= (var_j,var_nbargs) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_nbargs:Int> isa OTHER */
/* <var_nbargs:Int> isa OTHER */
var393 = 1; /* easy <var_nbargs:Int> isa OTHER*/
if (unlikely(!var393)) {
var_class_name396 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name396);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var397 = var_j >= var_nbargs;
var391 = var397;
goto RET_LABEL392;
RET_LABEL392:(void)0;
}
}
if (var391){
{
{ /* Inline model$MParameter$mtype (var_param369) on <var_param369:MParameter> */
var400 = var_param369->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_param369:MParameter> */
if (unlikely(var400 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var398 = var400;
RET_LABEL399:(void)0;
}
}
/* <var398:MType> isa MNullableType */
cltype402 = type_nitc__MNullableType.color;
idtype403 = type_nitc__MNullableType.id;
if(cltype402 >= var398->type->table_size) {
var401 = 0;
} else {
var401 = var398->type->type_table[cltype402] == idtype403;
}
var404 = !var401;
if (var404){
{
{ /* Inline kernel$Int$+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var407 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var407)) {
var_class_name410 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name410);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var411 = var_j + 1l;
var405 = var411;
goto RET_LABEL406;
RET_LABEL406:(void)0;
}
}
var_min_arity = var405;
} else {
}
{
{ /* Inline kernel$Int$+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var414 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var414)) {
var_class_name417 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name417);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var418 = var_j + 1l;
var412 = var418;
goto RET_LABEL413;
RET_LABEL413:(void)0;
}
}
var_j = var412;
goto BREAK_label364;
} else {
}
{
var419 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var_j);
}
var_arg = var419;
{
{ /* Inline typing$SignatureMap$map (var_map) on <var_map:SignatureMap> */
var422 = var_map->attrs[COLOR_nitc__typing__SignatureMap___map].val; /* _map on <var_map:SignatureMap> */
if (unlikely(var422 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 632);
fatal_exit(1);
}
var420 = var422;
RET_LABEL421:(void)0;
}
}
{
var423 = (val*)(var_i348<<2|1);
var424 = (val*)(var_j<<2|1);
core___core__ArrayMap___core__abstract_collection__Map___91d_93d_61d(var420, var423, var424); /* Direct call array$ArrayMap$[]= on <var420:ArrayMap[Int, Int]>*/
}
{
{ /* Inline kernel$Int$+ (var_j,1l) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var427 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var427)) {
var_class_name430 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name430);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var431 = var_j + 1l;
var425 = var431;
goto RET_LABEL426;
RET_LABEL426:(void)0;
}
}
var_j = var425;
{
{ /* Inline kernel$Int$== (var_i348,var_vararg_rank) on <var_i348:Int> */
var434 = var_i348 == var_vararg_rank;
var432 = var434;
goto RET_LABEL433;
RET_LABEL433:(void)0;
}
}
if (var432){
{
{ /* Inline kernel$Int$+ (var_j,var_vararg_decl) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_decl:Int> isa OTHER */
/* <var_vararg_decl:Int> isa OTHER */
var437 = 1; /* easy <var_vararg_decl:Int> isa OTHER*/
if (unlikely(!var437)) {
var_class_name440 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name440);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var441 = var_j + var_vararg_decl;
var435 = var441;
goto RET_LABEL436;
RET_LABEL436:(void)0;
}
}
var_j = var435;
goto BREAK_label364;
} else {
}
{
{ /* Inline model$MParameter$is_vararg (var_param369) on <var_param369:MParameter> */
var444 = var_param369->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_param369:MParameter> */
var442 = var444;
RET_LABEL443:(void)0;
}
}
var445 = !var442;
if (var445){
{
{ /* Inline model$MParameter$mtype (var_param369) on <var_param369:MParameter> */
var448 = var_param369->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_param369:MParameter> */
if (unlikely(var448 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var446 = var448;
RET_LABEL447:(void)0;
}
}
var_paramtype = var446;
{
var449 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(self, var_arg, var_paramtype);
}
} else {
{
var450 = nitc__typing___nitc__typing__TypeVisitor___check_one_vararg(self, var_arg, var_param369);
}
}
BREAK_label364: (void)0;
{
var451 = core___core__Int___Discrete__successor(var_i348, 1l);
}
var_i348 = var451;
}
BREAK_label358: (void)0;
{
{ /* Inline kernel$Int$> (var_min_arity,0l) on <var_min_arity:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var454 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var454)) {
var_class_name457 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name457);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var458 = var_min_arity > 0l;
var452 = var458;
goto RET_LABEL453;
RET_LABEL453:(void)0;
}
}
if (var452){
if (var_last_is_padded){
{
{ /* Inline kernel$Int$+ (var_min_arity,1l) on <var_min_arity:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var461 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var461)) {
var_class_name464 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name464);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var465 = var_min_arity + 1l;
var459 = var465;
goto RET_LABEL460;
RET_LABEL460:(void)0;
}
}
var_min_arity = var459;
} else {
}
{
var466 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel$Int$< (var_min_arity,var466) on <var_min_arity:Int> */
/* Covariant cast for argument 0 (i) <var466:Int> isa OTHER */
/* <var466:Int> isa OTHER */
var469 = 1; /* easy <var466:Int> isa OTHER*/
if (unlikely(!var469)) {
var_class_name472 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name472);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var473 = var_min_arity < var466;
var467 = var473;
goto RET_LABEL468;
RET_LABEL468:(void)0;
}
}
if (var467){
{
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var476 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var476 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var474 = var476;
RET_LABEL475:(void)0;
}
}
if (unlikely(varonce477==NULL)) {
var478 = NEW_core__NativeArray((int)10l, &type_core__NativeArray__core__String);
if (likely(varonce479!=NULL)) {
var480 = varonce479;
} else {
var481 = "Error: expected at least ";
var483 = (val*)(25l<<2|1);
var484 = (val*)(25l<<2|1);
var485 = (val*)((long)(0)<<2|3);
var486 = (val*)((long)(0)<<2|3);
var482 = core__flat___CString___to_s_unsafe(var481, var483, var484, var485, var486);
var480 = var482;
varonce479 = var480;
}
((struct instance_core__NativeArray*)var478)->values[0]=var480;
if (likely(varonce487!=NULL)) {
var488 = varonce487;
} else {
var489 = " argument(s) for `";
var491 = (val*)(18l<<2|1);
var492 = (val*)(18l<<2|1);
var493 = (val*)((long)(0)<<2|3);
var494 = (val*)((long)(0)<<2|3);
var490 = core__flat___CString___to_s_unsafe(var489, var491, var492, var493, var494);
var488 = var490;
varonce487 = var488;
}
((struct instance_core__NativeArray*)var478)->values[2]=var488;
if (likely(varonce495!=NULL)) {
var496 = varonce495;
} else {
var497 = "`; got ";
var499 = (val*)(7l<<2|1);
var500 = (val*)(7l<<2|1);
var501 = (val*)((long)(0)<<2|3);
var502 = (val*)((long)(0)<<2|3);
var498 = core__flat___CString___to_s_unsafe(var497, var499, var500, var501, var502);
var496 = var498;
varonce495 = var496;
}
((struct instance_core__NativeArray*)var478)->values[5]=var496;
if (likely(varonce503!=NULL)) {
var504 = varonce503;
} else {
var505 = ". See introduction at `";
var507 = (val*)(23l<<2|1);
var508 = (val*)(23l<<2|1);
var509 = (val*)((long)(0)<<2|3);
var510 = (val*)((long)(0)<<2|3);
var506 = core__flat___CString___to_s_unsafe(var505, var507, var508, var509, var510);
var504 = var506;
varonce503 = var504;
}
((struct instance_core__NativeArray*)var478)->values[7]=var504;
if (likely(varonce511!=NULL)) {
var512 = varonce511;
} else {
var513 = "`.";
var515 = (val*)(2l<<2|1);
var516 = (val*)(2l<<2|1);
var517 = (val*)((long)(0)<<2|3);
var518 = (val*)((long)(0)<<2|3);
var514 = core__flat___CString___to_s_unsafe(var513, var515, var516, var517, var518);
var512 = var514;
varonce511 = var512;
}
((struct instance_core__NativeArray*)var478)->values[9]=var512;
} else {
var478 = varonce477;
varonce477 = NULL;
}
var519 = core__flat___Int___core__abstract_text__Object__to_s(var_min_arity);
((struct instance_core__NativeArray*)var478)->values[1]=var519;
{
var520 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_core__NativeArray*)var478)->values[3]=var520;
{
var521 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_core__NativeArray*)var478)->values[4]=var521;
{
{ /* Inline array$AbstractArrayRead$length (var_args) on <var_args:Array[AExpr]> */
var524 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var522 = var524;
RET_LABEL523:(void)0;
}
}
var525 = core__flat___Int___core__abstract_text__Object__to_s(var522);
((struct instance_core__NativeArray*)var478)->values[6]=var525;
{
var526 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mproperty);
}
((struct instance_core__NativeArray*)var478)->values[8]=var526;
{
var527 = ((val*(*)(val* self))(var478->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var478); /* native_to_s on <var478:NativeArray[String]>*/
}
varonce477 = var478;
{
nitc___nitc__ModelBuilder___error(var474, var_node, var527); /* Direct call modelbuilder_base$ModelBuilder$error on <var474:ModelBuilder>*/
}
} else {
{
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var530 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var530 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var528 = var530;
RET_LABEL529:(void)0;
}
}
if (unlikely(varonce531==NULL)) {
var532 = NEW_core__NativeArray((int)10l, &type_core__NativeArray__core__String);
if (likely(varonce533!=NULL)) {
var534 = varonce533;
} else {
var535 = "Error: expected ";
var537 = (val*)(16l<<2|1);
var538 = (val*)(16l<<2|1);
var539 = (val*)((long)(0)<<2|3);
var540 = (val*)((long)(0)<<2|3);
var536 = core__flat___CString___to_s_unsafe(var535, var537, var538, var539, var540);
var534 = var536;
varonce533 = var534;
}
((struct instance_core__NativeArray*)var532)->values[0]=var534;
if (likely(varonce541!=NULL)) {
var542 = varonce541;
} else {
var543 = " argument(s) for `";
var545 = (val*)(18l<<2|1);
var546 = (val*)(18l<<2|1);
var547 = (val*)((long)(0)<<2|3);
var548 = (val*)((long)(0)<<2|3);
var544 = core__flat___CString___to_s_unsafe(var543, var545, var546, var547, var548);
var542 = var544;
varonce541 = var542;
}
((struct instance_core__NativeArray*)var532)->values[2]=var542;
if (likely(varonce549!=NULL)) {
var550 = varonce549;
} else {
var551 = "`; got ";
var553 = (val*)(7l<<2|1);
var554 = (val*)(7l<<2|1);
var555 = (val*)((long)(0)<<2|3);
var556 = (val*)((long)(0)<<2|3);
var552 = core__flat___CString___to_s_unsafe(var551, var553, var554, var555, var556);
var550 = var552;
varonce549 = var550;
}
((struct instance_core__NativeArray*)var532)->values[5]=var550;
if (likely(varonce557!=NULL)) {
var558 = varonce557;
} else {
var559 = ". See introduction at `";
var561 = (val*)(23l<<2|1);
var562 = (val*)(23l<<2|1);
var563 = (val*)((long)(0)<<2|3);
var564 = (val*)((long)(0)<<2|3);
var560 = core__flat___CString___to_s_unsafe(var559, var561, var562, var563, var564);
var558 = var560;
varonce557 = var558;
}
((struct instance_core__NativeArray*)var532)->values[7]=var558;
if (likely(varonce565!=NULL)) {
var566 = varonce565;
} else {
var567 = "`.";
var569 = (val*)(2l<<2|1);
var570 = (val*)(2l<<2|1);
var571 = (val*)((long)(0)<<2|3);
var572 = (val*)((long)(0)<<2|3);
var568 = core__flat___CString___to_s_unsafe(var567, var569, var570, var571, var572);
var566 = var568;
varonce565 = var566;
}
((struct instance_core__NativeArray*)var532)->values[9]=var566;
} else {
var532 = varonce531;
varonce531 = NULL;
}
var573 = core__flat___Int___core__abstract_text__Object__to_s(var_min_arity);
((struct instance_core__NativeArray*)var532)->values[1]=var573;
{
var574 = ((val*(*)(val* self))(var_mproperty->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mproperty); /* to_s on <var_mproperty:MProperty>*/
}
((struct instance_core__NativeArray*)var532)->values[3]=var574;
{
var575 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:MSignature>*/
}
((struct instance_core__NativeArray*)var532)->values[4]=var575;
{
{ /* Inline array$AbstractArrayRead$length (var_args) on <var_args:Array[AExpr]> */
var578 = var_args->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var576 = var578;
RET_LABEL577:(void)0;
}
}
var579 = core__flat___Int___core__abstract_text__Object__to_s(var576);
((struct instance_core__NativeArray*)var532)->values[6]=var579;
{
var580 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mproperty);
}
((struct instance_core__NativeArray*)var532)->values[8]=var580;
{
var581 = ((val*(*)(val* self))(var532->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var532); /* native_to_s on <var532:NativeArray[String]>*/
}
varonce531 = var532;
{
nitc___nitc__ModelBuilder___error(var528, var_node, var581); /* Direct call modelbuilder_base$ModelBuilder$error on <var528:ModelBuilder>*/
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$>= (var_vararg_rank,0l) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var584 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var584)) {
var_class_name587 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name587);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var588 = var_vararg_rank >= 0l;
var582 = var588;
goto RET_LABEL583;
RET_LABEL583:(void)0;
}
}
if (var582){
{
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:MSignature> */
var591 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var591 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var589 = var591;
RET_LABEL590:(void)0;
}
}
{
var592 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var589, var_vararg_rank);
}
{
{ /* Inline model$MParameter$mtype (var592) on <var592:nullable Object(MParameter)> */
var595 = var592->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var592:nullable Object(MParameter)> */
if (unlikely(var595 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var593 = var595;
RET_LABEL594:(void)0;
}
}
var_paramtype596 = var593;
{
var597 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var_vararg_rank);
}
var_first = var597;
{
{ /* Inline kernel$Int$== (var_vararg_decl,0l) on <var_vararg_decl:Int> */
var600 = var_vararg_decl == 0l;
var598 = var600;
goto RET_LABEL599;
RET_LABEL599:(void)0;
}
}
if (var598){
{
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:MSignature> */
var603 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var603 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var601 = var603;
RET_LABEL602:(void)0;
}
}
{
var604 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var601, var_vararg_rank);
}
{
var605 = nitc__typing___nitc__typing__TypeVisitor___check_one_vararg(self, var_first, var604);
}
var606 = !var605;
if (var606){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline kernel$Int$+ (var_vararg_decl,1l) on <var_vararg_decl:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var609 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var609)) {
var_class_name612 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name612);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var613 = var_vararg_decl + 1l;
var607 = var613;
goto RET_LABEL608;
RET_LABEL608:(void)0;
}
}
{
{ /* Inline typing$AExpr$vararg_decl= (var_first,var607) on <var_first:AExpr> */
var_first->attrs[COLOR_nitc__typing__AExpr___vararg_decl].l = var607; /* _vararg_decl on <var_first:AExpr> */
RET_LABEL614:(void)0;
}
}
var_i615 = var_vararg_rank;
{
{ /* Inline kernel$Int$+ (var_vararg_rank,var_vararg_decl) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_decl:Int> isa OTHER */
/* <var_vararg_decl:Int> isa OTHER */
var618 = 1; /* easy <var_vararg_decl:Int> isa OTHER*/
if (unlikely(!var618)) {
var_class_name621 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name621);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var622 = var_vararg_rank + var_vararg_decl;
var616 = var622;
goto RET_LABEL617;
RET_LABEL617:(void)0;
}
}
var_623 = var616;
for(;;) {
{
{ /* Inline kernel$Int$<= (var_i615,var_623) on <var_i615:Int> */
/* Covariant cast for argument 0 (i) <var_623:Int> isa OTHER */
/* <var_623:Int> isa OTHER */
var626 = 1; /* easy <var_623:Int> isa OTHER*/
if (unlikely(!var626)) {
var_class_name629 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name629);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var630 = var_i615 <= var_623;
var624 = var630;
goto RET_LABEL625;
RET_LABEL625:(void)0;
}
}
if (var624){
} else {
goto BREAK_label631;
}
{
var632 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_args, var_i615);
}
{
var633 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(self, var632, var_paramtype596);
}
{
var634 = core___core__Int___Discrete__successor(var_i615, 1l);
}
var_i615 = var634;
}
BREAK_label631: (void)0;
}
} else {
}
var = var_map;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$TypeVisitor$check_one_vararg for (self: TypeVisitor, AExpr, MParameter): Bool */
short int nitc__typing___nitc__typing__TypeVisitor___check_one_vararg(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_arg /* var arg: AExpr */;
val* var_param /* var param: MParameter */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var_paramtype /* var paramtype: MType */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
val* var11 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var19 /* : MClassType */;
val* var_array_mtype /* var array_mtype: MClassType */;
short int var20 /* : Bool */;
int cltype;
int idtype;
val* var21 /* : AExpr */;
val* var23 /* : AExpr */;
val* var24 /* : nullable MType */;
val* var25 /* : AExpr */;
val* var27 /* : AExpr */;
val* var28 /* : nullable MType */;
val* var30 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var_40 /* var : Bool */;
short int var41 /* : Bool */;
val* var43 /* : NativeArray[String] */;
static val* varonce42;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : CString */;
val* var47 /* : String */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Int */;
val* var50 /* : nullable Bool */;
val* var51 /* : nullable Bool */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Bool */;
val* var59 /* : nullable Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : CString */;
val* var63 /* : String */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Int */;
val* var66 /* : nullable Bool */;
val* var67 /* : nullable Bool */;
val* var68 /* : String */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var72 /* : nullable MType */;
var_arg = p0;
var_param = p1;
{
{ /* Inline model$MParameter$mtype (var_param) on <var_param:MParameter> */
var3 = var_param->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_param:MParameter> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
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
var7 = (val*)(5l<<2|1);
var8 = (val*)(5l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce = var4;
}
{
var11 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(self, var_arg, var4);
}
var_mclass = var11;
if (var_mclass == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var17 = var_mclass == var_other;
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
var = 0;
goto RET_LABEL;
} else {
}
var18 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var18, 1l); /* Direct call array$Array$with_capacity on <var18:Array[MType]>*/
}
var_ = var18;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_paramtype); /* Direct call array$AbstractArray$push on <var_:Array[MType]>*/
}
{
var19 = nitc___nitc__MClass___get_mtype(var_mclass, var_);
}
var_array_mtype = var19;
/* <var_arg:AExpr> isa AVarargExpr */
cltype = type_nitc__AVarargExpr.color;
idtype = type_nitc__AVarargExpr.id;
if(cltype >= var_arg->type->table_size) {
var20 = 0;
} else {
var20 = var_arg->type->type_table[cltype] == idtype;
}
if (var20){
{
{ /* Inline parser_nodes$AVarargExpr$n_expr (var_arg) on <var_arg:AExpr(AVarargExpr)> */
var23 = var_arg->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <var_arg:AExpr(AVarargExpr)> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2711);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(self, var21, var_array_mtype);
}
{
{ /* Inline parser_nodes$AVarargExpr$n_expr (var_arg) on <var_arg:AExpr(AVarargExpr)> */
var27 = var_arg->attrs[COLOR_nitc__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <var_arg:AExpr(AVarargExpr)> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2711);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = ((val*(*)(val* self))(var25->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var25); /* mtype on <var25:AExpr>*/
}
{
{ /* Inline typing$AExpr$mtype= (var_arg,var28) on <var_arg:AExpr(AVarargExpr)> */
var_arg->attrs[COLOR_nitc__typing__AExpr___mtype].val = var28; /* _mtype on <var_arg:AExpr(AVarargExpr)> */
RET_LABEL29:(void)0;
}
}
} else {
{
var30 = nitc__typing___nitc__typing__TypeVisitor___visit_expr(self, var_arg);
}
var_t = var30;
if (var_t == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_t,((val*)NULL)) on <var_t:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_t,var_other) on <var_t:nullable MType(MType)> */
var36 = var_t == var_other;
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
var = 0;
goto RET_LABEL;
} else {
}
{
var38 = nitc__typing___nitc__typing__TypeVisitor___is_subtype(self, var_t, var_paramtype);
}
var39 = !var38;
var_40 = var39;
if (var39){
{
var41 = nitc__typing___nitc__typing__TypeVisitor___is_subtype(self, var_t, var_array_mtype);
}
var37 = var41;
} else {
var37 = var_40;
}
if (var37){
if (unlikely(varonce42==NULL)) {
var43 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "Type Error: expected `";
var48 = (val*)(22l<<2|1);
var49 = (val*)(22l<<2|1);
var50 = (val*)((long)(0)<<2|3);
var51 = (val*)((long)(0)<<2|3);
var47 = core__flat___CString___to_s_unsafe(var46, var48, var49, var50, var51);
var45 = var47;
varonce44 = var45;
}
((struct instance_core__NativeArray*)var43)->values[0]=var45;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "`, got `";
var56 = (val*)(8l<<2|1);
var57 = (val*)(8l<<2|1);
var58 = (val*)((long)(0)<<2|3);
var59 = (val*)((long)(0)<<2|3);
var55 = core__flat___CString___to_s_unsafe(var54, var56, var57, var58, var59);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var43)->values[2]=var53;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "`. Is an ellipsis `...` missing on the argument?";
var64 = (val*)(48l<<2|1);
var65 = (val*)(48l<<2|1);
var66 = (val*)((long)(0)<<2|3);
var67 = (val*)((long)(0)<<2|3);
var63 = core__flat___CString___to_s_unsafe(var62, var64, var65, var66, var67);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var43)->values[4]=var61;
} else {
var43 = varonce42;
varonce42 = NULL;
}
{
var68 = ((val*(*)(val* self))(var_paramtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_paramtype); /* to_s on <var_paramtype:MType>*/
}
((struct instance_core__NativeArray*)var43)->values[1]=var68;
{
var69 = ((val*(*)(val* self))(var_t->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t); /* to_s on <var_t:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var43)->values[3]=var69;
{
var70 = ((val*(*)(val* self))(var43->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var43); /* native_to_s on <var43:NativeArray[String]>*/
}
varonce42 = var43;
{
nitc__typing___nitc__typing__TypeVisitor___error(self, var_arg, var70); /* Direct call typing$TypeVisitor$error on <self:TypeVisitor>*/
}
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$AExpr$vararg_decl= (var_arg,1l) on <var_arg:AExpr> */
var_arg->attrs[COLOR_nitc__typing__AExpr___vararg_decl].l = 1l; /* _vararg_decl on <var_arg:AExpr> */
RET_LABEL71:(void)0;
}
}
{
var72 = nitc__typing___nitc__typing__TypeVisitor___visit_expr_subtype(self, var_arg, var_paramtype);
}
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing$TypeVisitor$error for (self: TypeVisitor, ANode, String) */
void nitc__typing___nitc__typing__TypeVisitor___error(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_message /* var message: String */;
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
var_node = p0;
var_message = p1;
{
{ /* Inline typing$TypeVisitor$modelbuilder (self) on <self:TypeVisitor> */
var2 = self->attrs[COLOR_nitc__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 35);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__ModelBuilder___error(var, var_node, var_message); /* Direct call modelbuilder_base$ModelBuilder$error on <var:ModelBuilder>*/
}
RET_LABEL:;
}
/* method typing$TypeVisitor$get_variable for (self: TypeVisitor, AExpr, Variable): nullable MType */
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
{ /* Inline typing$Variable$is_adapted (var_variable) on <var_variable:Variable> */
var3 = var_variable->attrs[COLOR_nitc__typing__Variable___is_adapted].s; /* _is_adapted on <var_variable:Variable> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = !var1;
if (var4){
{
{ /* Inline typing$Variable$declared_type (var_variable) on <var_variable:Variable> */
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
{ /* Inline flow$AExpr$after_flow_context (var_node) on <var_node:AExpr> */
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
{ /* Inline kernel$Object$== (var_flow,((val*)NULL)) on <var_flow:nullable FlowContext> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_flow,var_other) on <var_flow:nullable FlowContext(FlowContext)> */
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
{ /* Inline typing$FlowContext$vars (var_flow) on <var_flow:nullable FlowContext(FlowContext)> */
var19 = var_flow->attrs[COLOR_nitc__typing__FlowContext___vars].val; /* _vars on <var_flow:nullable FlowContext(FlowContext)> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 697);
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
{ /* Inline typing$FlowContext$vars (var_flow) on <var_flow:nullable FlowContext(FlowContext)> */
var23 = var_flow->attrs[COLOR_nitc__typing__FlowContext___vars].val; /* _vars on <var_flow:nullable FlowContext(FlowContext)> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 697);
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
{ /* Inline array$AbstractArrayRead$length (var_mtypes) on <var_mtypes:Array[nullable MType]> */
var28 = var_mtypes->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_mtypes:Array[nullable MType]> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var26,0l) on <var26:Int> */
var31 = var26 == 0l;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
{ /* Inline typing$Variable$declared_type (var_variable) on <var_variable:Variable> */
var34 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var = var32;
goto RET_LABEL;
} else {
{
{ /* Inline array$AbstractArrayRead$length (var_mtypes) on <var_mtypes:Array[nullable MType]> */
var37 = var_mtypes->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_mtypes:Array[nullable MType]> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var35,1l) on <var35:Int> */
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
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other) on <var_res:nullable MType(MType)> */
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
{ /* Inline typing$Variable$declared_type (var_variable) on <var_variable:Variable> */
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
/* method typing$TypeVisitor$dirty for (self: TypeVisitor): Bool */
short int nitc__typing___nitc__typing__TypeVisitor___dirty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__typing__TypeVisitor___dirty].s; /* _dirty on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$TypeVisitor$dirty= for (self: TypeVisitor, Bool) */
void nitc__typing___nitc__typing__TypeVisitor___dirty_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__typing__TypeVisitor___dirty].s = p0; /* _dirty on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing$TypeVisitor$has_loop for (self: TypeVisitor): Bool */
short int nitc__typing___nitc__typing__TypeVisitor___has_loop(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__typing__TypeVisitor___has_loop].s; /* _has_loop on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$TypeVisitor$has_loop= for (self: TypeVisitor, Bool) */
void nitc__typing___nitc__typing__TypeVisitor___has_loop_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__typing__TypeVisitor___has_loop].s = p0; /* _has_loop on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing$TypeVisitor$set_variable for (self: TypeVisitor, AExpr, Variable, nullable MType) */
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
{ /* Inline flow$AExpr$after_flow_context (var_node) on <var_node:AExpr> */
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
{ /* Inline kernel$Object$!= (var_flow,((val*)NULL)) on <var_flow:nullable FlowContext> */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 598);
fatal_exit(1);
}
{
nitc__typing___FlowContext___set_var(var_flow, self, var_variable, var_mtype); /* Direct call typing$FlowContext$set_var on <var_flow:nullable FlowContext(FlowContext)>*/
}
RET_LABEL:;
}
/* method typing$TypeVisitor$merge_types for (self: TypeVisitor, ANode, Array[nullable MType]): nullable MType */
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
{ /* Inline array$AbstractArrayRead$length (var_col) on <var_col:Array[nullable MType]> */
var3 = var_col->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_col:Array[nullable MType]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var1,1l) on <var1:Int> */
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
{ /* Inline kernel$Object$== (var_t1,((val*)NULL)) on <var_t1:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_t1,var_other) on <var_t1:nullable MType(MType)> */
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
{ /* Inline kernel$Object$== (var_t2,((val*)NULL)) on <var_t2:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_t2,var_other) on <var_t2:nullable MType(MType)> */
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
/* method typing$SignatureMap$map for (self: SignatureMap): ArrayMap[Int, Int] */
val* nitc___nitc__SignatureMap___map(val* self) {
val* var /* : ArrayMap[Int, Int] */;
val* var1 /* : ArrayMap[Int, Int] */;
var1 = self->attrs[COLOR_nitc__typing__SignatureMap___map].val; /* _map on <self:SignatureMap> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 632);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing$CallSite$location for (self: CallSite): Location */
val* nitc___nitc__CallSite___nitc__model_base__MEntity__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_nitc__typing__CallSite___location].val; /* _location on <self:CallSite> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 640);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing$CallSite$location= for (self: CallSite, Location) */
void nitc___nitc__CallSite___location_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__CallSite___location].val = p0; /* _location on <self:CallSite> */
RET_LABEL:;
}
/* method typing$CallSite$recv for (self: CallSite): MType */
val* nitc___nitc__CallSite___recv(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nitc__typing__CallSite___recv].val; /* _recv on <self:CallSite> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 642);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing$CallSite$recv= for (self: CallSite, MType) */
void nitc___nitc__CallSite___recv_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__CallSite___recv].val = p0; /* _recv on <self:CallSite> */
RET_LABEL:;
}
/* method typing$CallSite$mmodule for (self: CallSite): MModule */
val* nitc___nitc__CallSite___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nitc__typing__CallSite___mmodule].val; /* _mmodule on <self:CallSite> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 645);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing$CallSite$mmodule= for (self: CallSite, MModule) */
void nitc___nitc__CallSite___mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__CallSite___mmodule].val = p0; /* _mmodule on <self:CallSite> */
RET_LABEL:;
}
/* method typing$CallSite$anchor for (self: CallSite): nullable MClassType */
val* nitc___nitc__CallSite___anchor(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_nitc__typing__CallSite___anchor].val; /* _anchor on <self:CallSite> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$CallSite$anchor= for (self: CallSite, nullable MClassType) */
void nitc___nitc__CallSite___anchor_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__CallSite___anchor].val = p0; /* _anchor on <self:CallSite> */
RET_LABEL:;
}
/* method typing$CallSite$recv_is_self= for (self: CallSite, Bool) */
void nitc___nitc__CallSite___recv_is_self_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__typing__CallSite___recv_is_self].s = p0; /* _recv_is_self on <self:CallSite> */
RET_LABEL:;
}
/* method typing$CallSite$mproperty for (self: CallSite): MMethod */
val* nitc___nitc__CallSite___mproperty(val* self) {
val* var /* : MMethod */;
val* var1 /* : MMethod */;
var1 = self->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <self:CallSite> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing$CallSite$mproperty= for (self: CallSite, MMethod) */
void nitc___nitc__CallSite___mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__CallSite___mproperty].val = p0; /* _mproperty on <self:CallSite> */
RET_LABEL:;
}
/* method typing$CallSite$mpropdef for (self: CallSite): MMethodDef */
val* nitc___nitc__CallSite___mpropdef(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
var1 = self->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <self:CallSite> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 659);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing$CallSite$mpropdef= for (self: CallSite, MMethodDef) */
void nitc___nitc__CallSite___mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__CallSite___mpropdef].val = p0; /* _mpropdef on <self:CallSite> */
RET_LABEL:;
}
/* method typing$CallSite$msignature for (self: CallSite): MSignature */
val* nitc___nitc__CallSite___msignature(val* self) {
val* var /* : MSignature */;
val* var1 /* : MSignature */;
var1 = self->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <self:CallSite> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 663);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing$CallSite$msignature= for (self: CallSite, MSignature) */
void nitc___nitc__CallSite___msignature_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__CallSite___msignature].val = p0; /* _msignature on <self:CallSite> */
RET_LABEL:;
}
/* method typing$CallSite$erasure_cast for (self: CallSite): Bool */
short int nitc___nitc__CallSite___erasure_cast(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__typing__CallSite___erasure_cast].s; /* _erasure_cast on <self:CallSite> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$CallSite$erasure_cast= for (self: CallSite, Bool) */
void nitc___nitc__CallSite___erasure_cast_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__typing__CallSite___erasure_cast].s = p0; /* _erasure_cast on <self:CallSite> */
RET_LABEL:;
}
/* method typing$CallSite$signaturemap for (self: CallSite): nullable SignatureMap */
val* nitc___nitc__CallSite___signaturemap(val* self) {
val* var /* : nullable SignatureMap */;
val* var1 /* : nullable SignatureMap */;
var1 = self->attrs[COLOR_nitc__typing__CallSite___signaturemap].val; /* _signaturemap on <self:CallSite> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$CallSite$signaturemap= for (self: CallSite, nullable SignatureMap) */
void nitc___nitc__CallSite___signaturemap_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__CallSite___signaturemap].val = p0; /* _signaturemap on <self:CallSite> */
RET_LABEL:;
}
/* method typing$CallSite$check_signature for (self: CallSite, TypeVisitor, ANode, Array[AExpr]): Bool */
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
{ /* Inline typing$CallSite$mproperty (self) on <self:CallSite> */
var3 = self->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <self:CallSite> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing$CallSite$msignature (self) on <self:CallSite> */
var6 = self->attrs[COLOR_nitc__typing__CallSite___msignature].val; /* _msignature on <self:CallSite> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 663);
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
{ /* Inline typing$CallSite$signaturemap= (self,var_map) on <self:CallSite> */
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
{ /* Inline kernel$Object$== (var_map,((val*)NULL)) on <var_map:nullable SignatureMap> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_map,var_other) on <var_map:nullable SignatureMap(SignatureMap)> */
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
{ /* Inline model_base$MEntity$is_broken= (self,1) on <self:CallSite> */
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
{ /* Inline kernel$Object$== (var_map,((val*)NULL)) on <var_map:nullable SignatureMap> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_map,var_other) on <var_map:nullable SignatureMap(SignatureMap)> */
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
/* method typing$CallSite$init for (self: CallSite) */
void nitc___nitc__CallSite___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__CallSite___core__kernel__Object__init]))(self); /* init on <self:CallSite>*/
}
RET_LABEL:;
}
/* method typing$Variable$declared_type for (self: Variable): nullable MType */
val* nitc__typing___Variable___declared_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <self:Variable> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$Variable$declared_type= for (self: Variable, nullable MType) */
void nitc__typing___Variable___declared_type_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__Variable___declared_type].val = p0; /* _declared_type on <self:Variable> */
RET_LABEL:;
}
/* method typing$Variable$is_adapted for (self: Variable): Bool */
short int nitc__typing___Variable___is_adapted(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__typing__Variable___is_adapted].s; /* _is_adapted on <self:Variable> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing$Variable$is_adapted= for (self: Variable, Bool) */
void nitc__typing___Variable___is_adapted_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__typing__Variable___is_adapted].s = p0; /* _is_adapted on <self:Variable> */
RET_LABEL:;
}
/* method typing$FlowContext$vars for (self: FlowContext): HashMap[Variable, nullable MType] */
val* nitc__typing___FlowContext___vars(val* self) {
val* var /* : HashMap[Variable, nullable MType] */;
val* var1 /* : HashMap[Variable, nullable MType] */;
var1 = self->attrs[COLOR_nitc__typing__FlowContext___vars].val; /* _vars on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 697);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing$FlowContext$set_var for (self: FlowContext, TypeVisitor, Variable, nullable MType) */
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
{ /* Inline typing$Variable$declared_type (var_variable) on <var_variable:Variable> */
var3 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = (var_mtype == NULL);
} else {
{ /* Inline kernel$Object$== (var1,var_mtype) on <var1:nullable MType> */
var_other = var_mtype;
{
{ /* Inline kernel$Object$is_same_instance (var1,var_other) on <var1:nullable MType(MType)> */
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
{ /* Inline typing$Variable$is_adapted (var_variable) on <var_variable:Variable> */
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
{ /* Inline typing$FlowContext$vars (self) on <self:FlowContext> */
var17 = self->attrs[COLOR_nitc__typing__FlowContext___vars].val; /* _vars on <self:FlowContext> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 697);
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
{ /* Inline typing$FlowContext$vars (self) on <self:FlowContext> */
var22 = self->attrs[COLOR_nitc__typing__FlowContext___vars].val; /* _vars on <self:FlowContext> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 697);
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
{ /* Inline kernel$Object$== (var23,var_mtype) on <var23:nullable Object(nullable MType)> */
var_other = var_mtype;
{
{ /* Inline kernel$Object$is_same_instance (var23,var_other) on <var23:nullable Object(MType)> */
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
{ /* Inline typing$FlowContext$vars (self) on <self:FlowContext> */
var32 = self->attrs[COLOR_nitc__typing__FlowContext___vars].val; /* _vars on <self:FlowContext> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 697);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var30, var_variable, var_mtype); /* Direct call hash_collection$HashMap$[]= on <var30:HashMap[Variable, nullable MType]>*/
}
{
{ /* Inline typing$TypeVisitor$dirty= (var_v,1) on <var_v:TypeVisitor> */
var_v->attrs[COLOR_nitc__typing__TypeVisitor___dirty].s = 1; /* _dirty on <var_v:TypeVisitor> */
RET_LABEL33:(void)0;
}
}
{
{ /* Inline typing$Variable$is_adapted= (var_variable,1) on <var_variable:Variable> */
var_variable->attrs[COLOR_nitc__typing__Variable___is_adapted].s = 1; /* _is_adapted on <var_variable:Variable> */
RET_LABEL34:(void)0;
}
}
RET_LABEL:;
}
/* method typing$FlowContext$collect_types for (self: FlowContext, Variable): Array[nullable MType] */
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
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[nullable MType]>*/
}
var_res = var1;
var2 = NEW_core__Array(&type_core__Array__nitc__FlowContext);
{
core___core__Array___with_capacity(var2, 1l); /* Direct call array$Array$with_capacity on <var2:Array[FlowContext]>*/
}
var_ = var2;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, self); /* Direct call array$AbstractArray$push on <var_:Array[FlowContext]>*/
}
var_todo = var_;
var3 = NEW_core__HashSet(&type_core__HashSet__nitc__FlowContext);
{
core___core__HashSet___core__kernel__Object__init(var3); /* Direct call hash_collection$HashSet$init on <var3:HashSet[FlowContext]>*/
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
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var_seen, var_f); /* Direct call hash_collection$HashSet$add on <var_seen:HashSet[FlowContext]>*/
}
{
{ /* Inline typing$FlowContext$vars (var_f) on <var_f:FlowContext> */
var11 = var_f->attrs[COLOR_nitc__typing__FlowContext___vars].val; /* _vars on <var_f:FlowContext> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 697);
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
{ /* Inline typing$FlowContext$vars (var_f) on <var_f:FlowContext> */
var15 = var_f->attrs[COLOR_nitc__typing__FlowContext___vars].val; /* _vars on <var_f:FlowContext> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 697);
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
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var16); /* Direct call array$Array$add on <var_res:Array[nullable MType]>*/
}
} else {
{
{ /* Inline flow$FlowContext$previous (var_f) on <var_f:FlowContext> */
var19 = var_f->attrs[COLOR_nitc__flow__FlowContext___previous].val; /* _previous on <var_f:FlowContext> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 189);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_todo, var17); /* Direct call array$Array$add_all on <var_todo:Array[FlowContext]>*/
}
{
{ /* Inline flow$FlowContext$loops (var_f) on <var_f:FlowContext> */
var22 = var_f->attrs[COLOR_nitc__flow__FlowContext___loops].val; /* _loops on <var_f:FlowContext> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _loops");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__flow, 192);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_todo, var20); /* Direct call array$Array$add_all on <var_todo:Array[FlowContext]>*/
}
{
{ /* Inline flow$FlowContext$previous (var_f) on <var_f:FlowContext> */
var25 = var_f->attrs[COLOR_nitc__flow__FlowContext___previous].val; /* _previous on <var_f:FlowContext> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
{ /* Inline typing$Variable$declared_type (var_variable) on <var_variable:Variable> */
var29 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var27); /* Direct call array$Array$add on <var_res:Array[nullable MType]>*/
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
/* method typing$APropdef$do_typing for (self: APropdef, ModelBuilder) */
void nitc__typing___APropdef___do_typing(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_modelbuilder = p0;
RET_LABEL:;
}
/* method typing$APropdef$selfvariable= for (self: APropdef, nullable Variable) */
void nitc__typing___APropdef___selfvariable_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__typing__APropdef___selfvariable].val = p0; /* _selfvariable on <self:APropdef> */
RET_LABEL:;
}
/* method typing$AMethPropdef$do_typing for (self: AMethPropdef, ModelBuilder) */
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
char* var58 /* : CString */;
val* var59 /* : String */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Int */;
val* var62 /* : nullable Bool */;
val* var63 /* : nullable Bool */;
val* var64 /* : nullable MClass */;
val* var_arrayclass /* var arrayclass: nullable MClass */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
val* var71 /* : Array[MType] */;
val* var_72 /* var : Array[MType] */;
val* var73 /* : MClassType */;
val* var74 /* : nullable ASignature */;
val* var76 /* : nullable ASignature */;
val* var77 /* : ANodes[AParam] */;
val* var79 /* : ANodes[AParam] */;
val* var80 /* : ANode */;
val* var81 /* : nullable Variable */;
val* var83 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
val* var_other87 /* var other: nullable Object */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
long var91 /* : Int */;
val* var92 /* : nullable AExpr */;
val* var94 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
short int var_107 /* var : Bool */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
val* var113 /* : PostTypingVisitor */;
val* var_post_visitor /* var post_visitor: PostTypingVisitor */;
short int var114 /* : Bool */;
val* var115 /* : nullable FlowContext */;
val* var117 /* : nullable FlowContext */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
short int var_120 /* var : Bool */;
val* var121 /* : nullable MType */;
val* var123 /* : nullable MType */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : CString */;
val* var132 /* : String */;
val* var133 /* : nullable Int */;
val* var134 /* : nullable Int */;
val* var135 /* : nullable Bool */;
val* var136 /* : nullable Bool */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AMethPropdef> */
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
{ /* Inline kernel$Object$== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
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
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var12 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var10) on <var10:MClassDef> */
var15 = var10->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var10:MClassDef> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
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
{ /* Inline typing$TypeVisitor$selfvariable (var_v) on <var_v:TypeVisitor> */
var18 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___selfvariable].val; /* _selfvariable on <var_v:TypeVisitor> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 51);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline typing$APropdef$selfvariable= (self,var16) on <self:AMethPropdef> */
self->attrs[COLOR_nitc__typing__APropdef___selfvariable].val = var16; /* _selfvariable on <self:AMethPropdef> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline modelize_property$APropdef$mpropdef (self) on <self:AMethPropdef> */
var22 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 765);
fatal_exit(1);
}
var_mmethoddef = var20;
{
{ /* Inline model$MMethodDef$msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
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
{ /* Inline kernel$Object$== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
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
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var35 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var35)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
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
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var39 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
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
{ /* Inline model$MParameter$mtype (var40) on <var40:nullable Object(MParameter)> */
var43 = var40->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var40:nullable Object(MParameter)> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
var_mtype = var41;
{
{ /* Inline model$MSignature$vararg_rank (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var46 = var_msignature->attrs[COLOR_nitc__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:nullable MSignature(MSignature)> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var44,var_i) on <var44:Int> */
var49 = var44 == var_i;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
if (var47){
{
{ /* Inline parser_nodes$AMethPropdef$n_signature (self) on <self:AMethPropdef> */
var52 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
if (var50 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 771);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ASignature$n_params (var50) on <var50:nullable ASignature> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var55 = var50->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var50:nullable ASignature> */
if (unlikely(var55 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
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
var60 = (val*)(5l<<2|1);
var61 = (val*)(5l<<2|1);
var62 = (val*)((long)(0)<<2|3);
var63 = (val*)((long)(0)<<2|3);
var59 = core__flat___CString___to_s_unsafe(var58, var60, var61, var62, var63);
var57 = var59;
varonce = var57;
}
{
var64 = nitc__typing___nitc__typing__TypeVisitor___get_mclass(var_v, var56, var57);
}
var_arrayclass = var64;
if (var_arrayclass == NULL) {
var65 = 1; /* is null */
} else {
var65 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_arrayclass,((val*)NULL)) on <var_arrayclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_arrayclass,var_other) on <var_arrayclass:nullable MClass(MClass)> */
var70 = var_arrayclass == var_other;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
if (var65){
goto RET_LABEL;
} else {
}
var71 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___with_capacity(var71, 1l); /* Direct call array$Array$with_capacity on <var71:Array[MType]>*/
}
var_72 = var71;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_72, var_mtype); /* Direct call array$AbstractArray$push on <var_72:Array[MType]>*/
}
{
var73 = nitc___nitc__MClass___get_mtype(var_arrayclass, var_72);
}
var_mtype = var73;
} else {
}
{
{ /* Inline parser_nodes$AMethPropdef$n_signature (self) on <self:AMethPropdef> */
var76 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var74 = var76;
RET_LABEL75:(void)0;
}
}
if (var74 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 775);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ASignature$n_params (var74) on <var74:nullable ASignature> */
if (unlikely(var74 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var79 = var74->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var74:nullable ASignature> */
if (unlikely(var79 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
var80 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var77, var_i);
}
{
{ /* Inline scope$AParam$variable (var80) on <var80:ANode(AParam)> */
var83 = var80->attrs[COLOR_nitc__scope__AParam___variable].val; /* _variable on <var80:ANode(AParam)> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
var_variable = var81;
if (var_variable == NULL) {
var84 = 0; /* is null */
} else {
var84 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_variable,((val*)NULL)) on <var_variable:nullable Variable> */
var_other87 = ((val*)NULL);
{
var88 = ((short int(*)(val* self, val* p0))(var_variable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_variable, var_other87); /* == on <var_variable:nullable Variable(Variable)>*/
}
var89 = !var88;
var85 = var89;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var84 = var85;
}
if (unlikely(!var84)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 776);
fatal_exit(1);
}
{
{ /* Inline typing$Variable$declared_type= (var_variable,var_mtype) on <var_variable:nullable Variable(Variable)> */
var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val = var_mtype; /* _declared_type on <var_variable:nullable Variable(Variable)> */
RET_LABEL90:(void)0;
}
}
{
var91 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var91;
}
BREAK_label: (void)0;
{
{ /* Inline parser_nodes$AMethPropdef$n_block (self) on <self:AMethPropdef> */
var94 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var92 = var94;
RET_LABEL93:(void)0;
}
}
var_nblock = var92;
if (var_nblock == NULL) {
var95 = 1; /* is null */
} else {
var95 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_nblock,((val*)NULL)) on <var_nblock:nullable AExpr> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_nblock,var_other) on <var_nblock:nullable AExpr(AExpr)> */
var100 = var_nblock == var_other;
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
var95 = var96;
}
if (var95){
goto RET_LABEL;
} else {
}
for(;;) {
{
{ /* Inline typing$TypeVisitor$dirty= (var_v,0) on <var_v:TypeVisitor> */
var_v->attrs[COLOR_nitc__typing__TypeVisitor___dirty].s = 0; /* _dirty on <var_v:TypeVisitor> */
RET_LABEL101:(void)0;
}
}
{
nitc__typing___nitc__typing__TypeVisitor___visit_stmt(var_v, var_nblock); /* Direct call typing$TypeVisitor$visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline typing$TypeVisitor$has_loop (var_v) on <var_v:TypeVisitor> */
var105 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___has_loop].s; /* _has_loop on <var_v:TypeVisitor> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
var106 = !var103;
var_107 = var106;
if (var106){
var102 = var_107;
} else {
{
{ /* Inline typing$TypeVisitor$dirty (var_v) on <var_v:TypeVisitor> */
var110 = var_v->attrs[COLOR_nitc__typing__TypeVisitor___dirty].s; /* _dirty on <var_v:TypeVisitor> */
var108 = var110;
RET_LABEL109:(void)0;
}
}
var111 = !var108;
var102 = var111;
}
if (var102){
goto BREAK_label112;
} else {
}
}
BREAK_label112: (void)0;
var113 = NEW_nitc__typing__PostTypingVisitor(&type_nitc__typing__PostTypingVisitor);
{
((void(*)(val* self, val* p0))(var113->class->vft[COLOR_nitc__typing__PostTypingVisitor__type_visitor_61d]))(var113, var_v); /* type_visitor= on <var113:PostTypingVisitor>*/
}
{
((void(*)(val* self))(var113->class->vft[COLOR_core__kernel__Object__init]))(var113); /* init on <var113:PostTypingVisitor>*/
}
var_post_visitor = var113;
{
nitc___nitc__Visitor___enter_visit(var_post_visitor, self); /* Direct call parser_nodes$Visitor$enter_visit on <var_post_visitor:PostTypingVisitor>*/
}
{
{ /* Inline flow$AExpr$after_flow_context (var_nblock) on <var_nblock:nullable AExpr(AExpr)> */
var117 = var_nblock->attrs[COLOR_nitc__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_nblock:nullable AExpr(AExpr)> */
var115 = var117;
RET_LABEL116:(void)0;
}
}
if (var115 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 792);
fatal_exit(1);
} else {
var118 = nitc___nitc__FlowContext___is_unreachable(var115);
}
var119 = !var118;
var_120 = var119;
if (var119){
{
{ /* Inline model$MSignature$return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var123 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var121 = var123;
RET_LABEL122:(void)0;
}
}
if (var121 == NULL) {
var124 = 0; /* is null */
} else {
var124 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var121,((val*)NULL)) on <var121:nullable MType> */
var_other87 = ((val*)NULL);
{
var127 = ((short int(*)(val* self, val* p0))(var121->class->vft[COLOR_core__kernel__Object___61d_61d]))(var121, var_other87); /* == on <var121:nullable MType(MType)>*/
}
var128 = !var127;
var125 = var128;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
var124 = var125;
}
var114 = var124;
} else {
var114 = var_120;
}
if (var114){
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "Error: reached end of function; expected `return` with a value.";
var133 = (val*)(63l<<2|1);
var134 = (val*)(63l<<2|1);
var135 = (val*)((long)(0)<<2|3);
var136 = (val*)((long)(0)<<2|3);
var132 = core__flat___CString___to_s_unsafe(var131, var133, var134, var135, var136);
var130 = var132;
varonce129 = var130;
}
{
nitc__typing___nitc__typing__TypeVisitor___error(var_v, self, var130); /* Direct call typing$TypeVisitor$error on <var_v:TypeVisitor>*/
}
} else {
}
RET_LABEL:;
}
