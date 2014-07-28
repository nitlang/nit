#include "typing.sep.0.h"
/* method typing#ToolContext#typing_phase for (self: ToolContext): Phase */
val* typing__ToolContext__typing_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_typing__ToolContext___typing_phase].val; /* _typing_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _typing_phase");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 27);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ToolContext#typing_phase for (self: Object): Phase */
val* VIRTUAL_typing__ToolContext__typing_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
val* var3 /* : Phase */;
{ /* Inline typing#ToolContext#typing_phase (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_typing__ToolContext___typing_phase].val; /* _typing_phase on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _typing_phase");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 27);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypingPhase#process_npropdef for (self: TypingPhase, APropdef) */
void typing__TypingPhase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : ModelBuilder */;
var_npropdef = p0;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:TypingPhase> */
var2 = self->attrs[COLOR_phase__Phase___toolcontext].val; /* _toolcontext on <self:TypingPhase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/phase.nit", 145);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = modelbuilder__ToolContext__modelbuilder(var);
}
{
((void (*)(val*, val*))(var_npropdef->class->vft[COLOR_typing__APropdef__do_typing]))(var_npropdef, var3) /* do_typing on <var_npropdef:APropdef>*/;
}
RET_LABEL:;
}
/* method typing#TypingPhase#process_npropdef for (self: Object, APropdef) */
void VIRTUAL_typing__TypingPhase__process_npropdef(val* self, val* p0) {
typing__TypingPhase__process_npropdef(self, p0); /* Direct call typing#TypingPhase#process_npropdef on <self:Object(TypingPhase)>*/
RET_LABEL:;
}
/* method typing#TypeVisitor#modelbuilder for (self: TypeVisitor): ModelBuilder */
val* typing__TypeVisitor__modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
var1 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#modelbuilder for (self: Object): ModelBuilder */
val* VIRTUAL_typing__TypeVisitor__modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
val* var3 /* : ModelBuilder */;
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:Object(TypeVisitor)> */
var3 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:Object(TypeVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#modelbuilder= for (self: TypeVisitor, ModelBuilder) */
void typing__TypeVisitor__modelbuilder_61d(val* self, val* p0) {
self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val = p0; /* _modelbuilder on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#modelbuilder= for (self: Object, ModelBuilder) */
void VIRTUAL_typing__TypeVisitor__modelbuilder_61d(val* self, val* p0) {
{ /* Inline typing#TypeVisitor#modelbuilder= (self,p0) on <self:Object(TypeVisitor)> */
self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val = p0; /* _modelbuilder on <self:Object(TypeVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#TypeVisitor#mmodule for (self: TypeVisitor): MModule */
val* typing__TypeVisitor__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#mmodule for (self: Object): MModule */
val* VIRTUAL_typing__TypeVisitor__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:Object(TypeVisitor)> */
var3 = self->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <self:Object(TypeVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#mmodule= for (self: TypeVisitor, MModule) */
void typing__TypeVisitor__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_typing__TypeVisitor___mmodule].val = p0; /* _mmodule on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#mmodule= for (self: Object, MModule) */
void VIRTUAL_typing__TypeVisitor__mmodule_61d(val* self, val* p0) {
{ /* Inline typing#TypeVisitor#mmodule= (self,p0) on <self:Object(TypeVisitor)> */
self->attrs[COLOR_typing__TypeVisitor___mmodule].val = p0; /* _mmodule on <self:Object(TypeVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#TypeVisitor#anchor for (self: TypeVisitor): nullable MClassType */
val* typing__TypeVisitor__anchor(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#anchor for (self: Object): nullable MClassType */
val* VIRTUAL_typing__TypeVisitor__anchor(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
val* var3 /* : nullable MClassType */;
{ /* Inline typing#TypeVisitor#anchor (self) on <self:Object(TypeVisitor)> */
var3 = self->attrs[COLOR_typing__TypeVisitor___anchor].val; /* _anchor on <self:Object(TypeVisitor)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#anchor= for (self: TypeVisitor, nullable MClassType) */
void typing__TypeVisitor__anchor_61d(val* self, val* p0) {
self->attrs[COLOR_typing__TypeVisitor___anchor].val = p0; /* _anchor on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#anchor= for (self: Object, nullable MClassType) */
void VIRTUAL_typing__TypeVisitor__anchor_61d(val* self, val* p0) {
{ /* Inline typing#TypeVisitor#anchor= (self,p0) on <self:Object(TypeVisitor)> */
self->attrs[COLOR_typing__TypeVisitor___anchor].val = p0; /* _anchor on <self:Object(TypeVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#TypeVisitor#mclassdef for (self: TypeVisitor): nullable MClassDef */
val* typing__TypeVisitor__mclassdef(val* self) {
val* var /* : nullable MClassDef */;
val* var1 /* : nullable MClassDef */;
var1 = self->attrs[COLOR_typing__TypeVisitor___mclassdef].val; /* _mclassdef on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#mclassdef for (self: Object): nullable MClassDef */
val* VIRTUAL_typing__TypeVisitor__mclassdef(val* self) {
val* var /* : nullable MClassDef */;
val* var1 /* : nullable MClassDef */;
val* var3 /* : nullable MClassDef */;
{ /* Inline typing#TypeVisitor#mclassdef (self) on <self:Object(TypeVisitor)> */
var3 = self->attrs[COLOR_typing__TypeVisitor___mclassdef].val; /* _mclassdef on <self:Object(TypeVisitor)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#mclassdef= for (self: TypeVisitor, nullable MClassDef) */
void typing__TypeVisitor__mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_typing__TypeVisitor___mclassdef].val = p0; /* _mclassdef on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#mclassdef= for (self: Object, nullable MClassDef) */
void VIRTUAL_typing__TypeVisitor__mclassdef_61d(val* self, val* p0) {
{ /* Inline typing#TypeVisitor#mclassdef= (self,p0) on <self:Object(TypeVisitor)> */
self->attrs[COLOR_typing__TypeVisitor___mclassdef].val = p0; /* _mclassdef on <self:Object(TypeVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#TypeVisitor#mpropdef for (self: TypeVisitor): nullable MPropDef */
val* typing__TypeVisitor__mpropdef(val* self) {
val* var /* : nullable MPropDef */;
val* var1 /* : nullable MPropDef */;
var1 = self->attrs[COLOR_typing__TypeVisitor___mpropdef].val; /* _mpropdef on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#mpropdef for (self: Object): nullable MPropDef */
val* VIRTUAL_typing__TypeVisitor__mpropdef(val* self) {
val* var /* : nullable MPropDef */;
val* var1 /* : nullable MPropDef */;
val* var3 /* : nullable MPropDef */;
{ /* Inline typing#TypeVisitor#mpropdef (self) on <self:Object(TypeVisitor)> */
var3 = self->attrs[COLOR_typing__TypeVisitor___mpropdef].val; /* _mpropdef on <self:Object(TypeVisitor)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#mpropdef= for (self: TypeVisitor, nullable MPropDef) */
void typing__TypeVisitor__mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_typing__TypeVisitor___mpropdef].val = p0; /* _mpropdef on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#mpropdef= for (self: Object, nullable MPropDef) */
void VIRTUAL_typing__TypeVisitor__mpropdef_61d(val* self, val* p0) {
{ /* Inline typing#TypeVisitor#mpropdef= (self,p0) on <self:Object(TypeVisitor)> */
self->attrs[COLOR_typing__TypeVisitor___mpropdef].val = p0; /* _mpropdef on <self:Object(TypeVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#TypeVisitor#selfvariable for (self: TypeVisitor): Variable */
val* typing__TypeVisitor__selfvariable(val* self) {
val* var /* : Variable */;
val* var1 /* : Variable */;
var1 = self->attrs[COLOR_typing__TypeVisitor___selfvariable].val; /* _selfvariable on <self:TypeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 52);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#selfvariable for (self: Object): Variable */
val* VIRTUAL_typing__TypeVisitor__selfvariable(val* self) {
val* var /* : Variable */;
val* var1 /* : Variable */;
val* var3 /* : Variable */;
{ /* Inline typing#TypeVisitor#selfvariable (self) on <self:Object(TypeVisitor)> */
var3 = self->attrs[COLOR_typing__TypeVisitor___selfvariable].val; /* _selfvariable on <self:Object(TypeVisitor)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 52);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#selfvariable= for (self: TypeVisitor, Variable) */
void typing__TypeVisitor__selfvariable_61d(val* self, val* p0) {
self->attrs[COLOR_typing__TypeVisitor___selfvariable].val = p0; /* _selfvariable on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#selfvariable= for (self: Object, Variable) */
void VIRTUAL_typing__TypeVisitor__selfvariable_61d(val* self, val* p0) {
{ /* Inline typing#TypeVisitor#selfvariable= (self,p0) on <self:Object(TypeVisitor)> */
self->attrs[COLOR_typing__TypeVisitor___selfvariable].val = p0; /* _selfvariable on <self:Object(TypeVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#TypeVisitor#is_toplevel_context for (self: TypeVisitor): Bool */
short int typing__TypeVisitor__is_toplevel_context(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_typing__TypeVisitor___is_toplevel_context].s; /* _is_toplevel_context on <self:TypeVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#is_toplevel_context for (self: Object): Bool */
short int VIRTUAL_typing__TypeVisitor__is_toplevel_context(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline typing#TypeVisitor#is_toplevel_context (self) on <self:Object(TypeVisitor)> */
var3 = self->attrs[COLOR_typing__TypeVisitor___is_toplevel_context].s; /* _is_toplevel_context on <self:Object(TypeVisitor)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#is_toplevel_context= for (self: TypeVisitor, Bool) */
void typing__TypeVisitor__is_toplevel_context_61d(val* self, short int p0) {
self->attrs[COLOR_typing__TypeVisitor___is_toplevel_context].s = p0; /* _is_toplevel_context on <self:TypeVisitor> */
RET_LABEL:;
}
/* method typing#TypeVisitor#is_toplevel_context= for (self: Object, Bool) */
void VIRTUAL_typing__TypeVisitor__is_toplevel_context_61d(val* self, short int p0) {
{ /* Inline typing#TypeVisitor#is_toplevel_context= (self,p0) on <self:Object(TypeVisitor)> */
self->attrs[COLOR_typing__TypeVisitor___is_toplevel_context].s = p0; /* _is_toplevel_context on <self:Object(TypeVisitor)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#TypeVisitor#init for (self: TypeVisitor, ModelBuilder, MModule, nullable MPropDef) */
void typing__TypeVisitor__init(val* self, val* p0, val* p1, val* p2) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
val* var /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var10 /* : MClassDef */;
val* var12 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var14 /* : MClassType */;
val* var16 /* : MClassType */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
val* var21 /* : Variable */;
static val* varonce;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
val* var_selfvariable /* var selfvariable: Variable */;
val* var28 /* : MClassType */;
val* var30 /* : MClassType */;
val* var32 /* : MProperty */;
val* var34 /* : MProperty */;
val* var_mprop /* var mprop: MProperty */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
var_modelbuilder = p0;
var_mmodule = p1;
var_mpropdef = p2;
{
{ /* Inline typing#TypeVisitor#modelbuilder= (self,var_modelbuilder) on <self:TypeVisitor> */
self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val = var_modelbuilder; /* _modelbuilder on <self:TypeVisitor> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mmodule= (self,var_mmodule) on <self:TypeVisitor> */
self->attrs[COLOR_typing__TypeVisitor___mmodule].val = var_mmodule; /* _mmodule on <self:TypeVisitor> */
RET_LABEL2:(void)0;
}
}
var = NULL;
if (var_mpropdef == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mpropdef,var) on <var_mpropdef:nullable MPropDef> */
var_other = var;
{
var7 = ((short int (*)(val*, val*))(var_mpropdef->class->vft[COLOR_kernel__Object___61d_61d]))(var_mpropdef, var_other) /* == on <var_mpropdef:nullable MPropDef(MPropDef)>*/;
var6 = var7;
}
var8 = !var6;
var4 = var8;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
{ /* Inline typing#TypeVisitor#mpropdef= (self,var_mpropdef) on <self:TypeVisitor> */
self->attrs[COLOR_typing__TypeVisitor___mpropdef].val = var_mpropdef; /* _mpropdef on <self:TypeVisitor> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var12 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MPropDef(MPropDef)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_mclassdef = var10;
{
{ /* Inline typing#TypeVisitor#mclassdef= (self,var_mclassdef) on <self:TypeVisitor> */
self->attrs[COLOR_typing__TypeVisitor___mclassdef].val = var_mclassdef; /* _mclassdef on <self:TypeVisitor> */
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var16 = var_mclassdef->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#anchor= (self,var14) on <self:TypeVisitor> */
self->attrs[COLOR_typing__TypeVisitor___anchor].val = var14; /* _anchor on <self:TypeVisitor> */
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var20 = var_mclassdef->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_mclass = var18;
var21 = NEW_scope__Variable(&type_scope__Variable);
if (varonce) {
var22 = varonce;
} else {
var23 = "self";
var24 = 4;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce = var22;
}
{
{ /* Inline scope#Variable#init (var21,var22) on <var21:Variable> */
var21->attrs[COLOR_scope__Variable___name].val = var22; /* _name on <var21:Variable> */
RET_LABEL26:(void)0;
}
}
var_selfvariable = var21;
{
{ /* Inline typing#TypeVisitor#selfvariable= (self,var_selfvariable) on <self:TypeVisitor> */
self->attrs[COLOR_typing__TypeVisitor___selfvariable].val = var_selfvariable; /* _selfvariable on <self:TypeVisitor> */
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:MClass> */
var30 = var_mclass->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:MClass> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type= (var_selfvariable,var28) on <var_selfvariable:Variable> */
var_selfvariable->attrs[COLOR_typing__Variable___declared_type].val = var28; /* _declared_type on <var_selfvariable:Variable> */
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var34 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MPropDef(MPropDef)> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_mprop = var32;
/* <var_mprop:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var36 = 0;
} else {
var36 = var_mprop->type->type_table[cltype] == idtype;
}
var_ = var36;
if (var36){
{
{ /* Inline model#MMethod#is_toplevel (var_mprop) on <var_mprop:MProperty(MMethod)> */
var39 = var_mprop->attrs[COLOR_model__MMethod___is_toplevel].s; /* _is_toplevel on <var_mprop:MProperty(MMethod)> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var35 = var37;
} else {
var35 = var_;
}
if (var35){
var40 = 1;
{
{ /* Inline typing#TypeVisitor#is_toplevel_context= (self,var40) on <self:TypeVisitor> */
self->attrs[COLOR_typing__TypeVisitor___is_toplevel_context].s = var40; /* _is_toplevel_context on <self:TypeVisitor> */
RET_LABEL41:(void)0;
}
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method typing#TypeVisitor#init for (self: Object, ModelBuilder, MModule, nullable MPropDef) */
void VIRTUAL_typing__TypeVisitor__init(val* self, val* p0, val* p1, val* p2) {
typing__TypeVisitor__init(self, p0, p1, p2); /* Direct call typing#TypeVisitor#init on <self:Object(TypeVisitor)>*/
RET_LABEL:;
}
/* method typing#TypeVisitor#anchor_to for (self: TypeVisitor, MType): MType */
val* typing__TypeVisitor__anchor_to(val* self, val* p0) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : nullable MClassType */;
val* var3 /* : nullable MClassType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : MModule */;
val* var15 /* : MModule */;
val* var16 /* : MType */;
var_mtype = p0;
{
{ /* Inline typing#TypeVisitor#anchor (self) on <self:TypeVisitor> */
var3 = self->attrs[COLOR_typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_anchor = var1;
var4 = NULL;
if (var_anchor == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_anchor,var4) on <var_anchor:nullable MClassType> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_anchor,var_other) on <var_anchor:nullable MClassType(MClassType)> */
var10 = var_anchor == var_other;
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
{
var11 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var12 = !var11;
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 87);
show_backtrace(1);
}
var = var_mtype;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var15 = self->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((val* (*)(val*, val*, val*))(var_mtype->class->vft[COLOR_model__MType__anchor_to]))(var_mtype, var13, var_anchor) /* anchor_to on <var_mtype:MType>*/;
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#anchor_to for (self: Object, MType): MType */
val* VIRTUAL_typing__TypeVisitor__anchor_to(val* self, val* p0) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = typing__TypeVisitor__anchor_to(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#is_subtype for (self: TypeVisitor, MType, MType): Bool */
short int typing__TypeVisitor__is_subtype(val* self, val* p0, val* p1) {
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
var3 = self->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#anchor (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = model__MType__is_subtype(var_sub, var1, var4, var_sup);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#is_subtype for (self: Object, MType, MType): Bool */
short int VIRTUAL_typing__TypeVisitor__is_subtype(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = typing__TypeVisitor__is_subtype(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#resolve_for for (self: TypeVisitor, MType, MType, Bool): MType */
val* typing__TypeVisitor__resolve_for(val* self, val* p0, val* p1, short int p2) {
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
var3 = self->attrs[COLOR_typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = !var_for_self;
{
var8 = ((val* (*)(val*, val*, val*, val*, short int))(var_mtype->class->vft[COLOR_model__MType__resolve_for]))(var_mtype, var_subtype, var1, var4, var7) /* resolve_for on <var_mtype:MType>*/;
}
var_res = var8;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#resolve_for for (self: Object, MType, MType, Bool): MType */
val* VIRTUAL_typing__TypeVisitor__resolve_for(val* self, val* p0, val* p1, short int p2) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = typing__TypeVisitor__resolve_for(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#check_subtype for (self: TypeVisitor, ANode, MType, MType): nullable MType */
val* typing__TypeVisitor__check_subtype(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var_node /* var node: ANode */;
val* var_sub /* var sub: MType */;
val* var_sup /* var sup: MType */;
short int var1 /* : Bool */;
val* var2 /* : MType */;
short int var3 /* : Bool */;
val* var4 /* : ModelBuilder */;
val* var6 /* : ModelBuilder */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
val* var20 /* : null */;
var_node = p0;
var_sub = p1;
var_sup = p2;
{
var1 = typing__TypeVisitor__is_subtype(self, var_sub, var_sup);
}
if (var1){
var = var_sub;
goto RET_LABEL;
} else {
}
{
var2 = typing__TypeVisitor__anchor_to(self, var_sup);
}
{
var3 = typing__TypeVisitor__is_subtype(self, var_sub, var2);
}
if (var3){
var = var_sup;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (varonce) {
var7 = varonce;
} else {
var8 = "Type error: expected ";
var9 = 21;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = ", got ";
var14 = 6;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 4;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var7;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var_sup;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var12;
((struct instance_array__NativeArray*)var18)->values[3] = (val*) var_sub;
{
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var4, var_node, var19); /* Direct call modelbuilder#ModelBuilder#error on <var4:ModelBuilder>*/
}
var20 = NULL;
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#check_subtype for (self: Object, ANode, MType, MType): nullable MType */
val* VIRTUAL_typing__TypeVisitor__check_subtype(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__TypeVisitor__check_subtype(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_stmt for (self: TypeVisitor, nullable AExpr) */
void typing__TypeVisitor__visit_stmt(val* self, val* p0) {
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
var_nexpr = p0;
var = NULL;
if (var_nexpr == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nexpr,var) on <var_nexpr:nullable AExpr> */
var_other = var;
{
{ /* Inline kernel#Object#is_same_instance (var_nexpr,var_other) on <var_nexpr:nullable AExpr(AExpr)> */
var6 = var_nexpr == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
((void (*)(val*, val*))(var_nexpr->class->vft[COLOR_typing__AExpr__accept_typing]))(var_nexpr, self) /* accept_typing on <var_nexpr:nullable AExpr(AExpr)>*/;
}
RET_LABEL:;
}
/* method typing#TypeVisitor#visit_stmt for (self: Object, nullable AExpr) */
void VIRTUAL_typing__TypeVisitor__visit_stmt(val* self, val* p0) {
typing__TypeVisitor__visit_stmt(self, p0); /* Direct call typing#TypeVisitor#visit_stmt on <self:Object(TypeVisitor)>*/
RET_LABEL:;
}
/* method typing#TypeVisitor#visit_expr for (self: TypeVisitor, AExpr): nullable MType */
val* typing__TypeVisitor__visit_expr(val* self, val* p0) {
val* var /* : nullable MType */;
val* var_nexpr /* var nexpr: AExpr */;
val* var1 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : ModelBuilder */;
val* var15 /* : ModelBuilder */;
val* var16 /* : ToolContext */;
val* var18 /* : ToolContext */;
long var19 /* : Int */;
long var21 /* : Int */;
long var22 /* : Int */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var28 /* : ModelBuilder */;
val* var30 /* : ModelBuilder */;
val* var31 /* : ToolContext */;
val* var33 /* : ToolContext */;
long var34 /* : Int */;
long var36 /* : Int */;
long var37 /* : Int */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
int cltype41;
int idtype42;
const char* var_class_name43;
short int var44 /* : Bool */;
static val* varonce;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
val* var49 /* : null */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
val* var55 /* : null */;
var_nexpr = p0;
{
((void (*)(val*, val*))(var_nexpr->class->vft[COLOR_typing__AExpr__accept_typing]))(var_nexpr, self) /* accept_typing on <var_nexpr:AExpr>*/;
}
{
var1 = ((val* (*)(val*))(var_nexpr->class->vft[COLOR_typing__AExpr__mtype]))(var_nexpr) /* mtype on <var_nexpr:AExpr>*/;
}
var_mtype = var1;
var2 = NULL;
if (var_mtype == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,var2) on <var_mtype:nullable MType> */
var_other = var2;
{
var7 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_mtype, var_other) /* == on <var_mtype:nullable MType(MType)>*/;
var6 = var7;
}
var8 = !var6;
var4 = var8;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
var = var_mtype;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AExpr#is_typed (var_nexpr) on <var_nexpr:AExpr> */
var11 = var_nexpr->attrs[COLOR_typing__AExpr___is_typed].s; /* _is_typed on <var_nexpr:AExpr> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = !var9;
if (var12){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var15 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var13) on <var13:ModelBuilder> */
var18 = var13->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var13:ModelBuilder> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var16) on <var16:ToolContext> */
var21 = var16->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <var16:ToolContext> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var22 = 0;
{
{ /* Inline kernel#Int#> (var19,var22) on <var19:Int> */
/* Covariant cast for argument 0 (i) <var22:Int> isa OTHER */
/* <var22:Int> isa OTHER */
var25 = 1; /* easy <var22:Int> isa OTHER*/
if (unlikely(!var25)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var26 = var19 > var22;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var27 = !var23;
if (var27){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var30 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var28) on <var28:ModelBuilder> */
var33 = var28->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var28:ModelBuilder> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#verbose_level (var31) on <var31:ToolContext> */
var36 = var31->attrs[COLOR_toolcontext__ToolContext___verbose_level].l; /* _verbose_level on <var31:ToolContext> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var37 = 1;
{
{ /* Inline kernel#Int#> (var34,var37) on <var34:Int> */
/* Covariant cast for argument 0 (i) <var37:Int> isa OTHER */
/* <var37:Int> isa OTHER */
var40 = 1; /* easy <var37:Int> isa OTHER*/
if (unlikely(!var40)) {
var_class_name43 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name43);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var44 = var34 > var37;
var38 = var44;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
if (varonce) {
var45 = varonce;
} else {
var46 = "No return type but no error.";
var47 = 28;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce = var45;
}
{
parser_nodes__ANode__debug(var_nexpr, var45); /* Direct call parser_nodes#ANode#debug on <var_nexpr:AExpr>*/
}
} else {
}
} else {
}
var49 = NULL;
var = var49;
goto RET_LABEL;
} else {
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "Type error: expected expression.";
var53 = 32;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
typing__TypeVisitor__error(self, var_nexpr, var51); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
var55 = NULL;
var = var55;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_expr for (self: Object, AExpr): nullable MType */
val* VIRTUAL_typing__TypeVisitor__visit_expr(val* self, val* p0) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__TypeVisitor__visit_expr(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_expr_subtype for (self: TypeVisitor, AExpr, nullable MType): nullable MType */
val* typing__TypeVisitor__visit_expr_subtype(val* self, val* p0, val* p1) {
val* var /* : nullable MType */;
val* var_nexpr /* var nexpr: AExpr */;
val* var_sup /* var sup: nullable MType */;
val* var1 /* : nullable MType */;
val* var_sub /* var sub: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : null */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : null */;
val* var18 /* : nullable MType */;
val* var_res /* var res: nullable MType */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other22 /* var other: nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
var_nexpr = p0;
var_sup = p1;
{
var1 = typing__TypeVisitor__visit_expr(self, var_nexpr);
}
var_sub = var1;
var2 = NULL;
if (var_sub == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sub,var2) on <var_sub:nullable MType> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var_sub,var_other) on <var_sub:nullable MType(MType)> */
var8 = var_sub == var_other;
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
var = var9;
goto RET_LABEL;
} else {
}
var10 = NULL;
if (var_sup == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sup,var10) on <var_sup:nullable MType> */
var_other = var10;
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
var17 = NULL;
var = var17;
goto RET_LABEL;
} else {
}
{
var18 = typing__TypeVisitor__check_subtype(self, var_nexpr, var_sub, var_sup);
}
var_res = var18;
if (var_res == NULL) {
var19 = 1; /* <var_sub:nullable MType(MType)> cannot be null */
} else {
{ /* Inline kernel#Object#!= (var_res,var_sub) on <var_res:nullable MType> */
var_other22 = var_sub;
{
var24 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other22) /* == on <var_res:nullable MType(MType)>*/;
var23 = var24;
}
var25 = !var23;
var20 = var25;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
{
{ /* Inline typing#AExpr#implicit_cast_to= (var_nexpr,var_res) on <var_nexpr:AExpr> */
var_nexpr->attrs[COLOR_typing__AExpr___implicit_cast_to].val = var_res; /* _implicit_cast_to on <var_nexpr:AExpr> */
RET_LABEL26:(void)0;
}
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_expr_subtype for (self: Object, AExpr, nullable MType): nullable MType */
val* VIRTUAL_typing__TypeVisitor__visit_expr_subtype(val* self, val* p0, val* p1) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__TypeVisitor__visit_expr_subtype(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_expr_bool for (self: TypeVisitor, AExpr): nullable MType */
val* typing__TypeVisitor__visit_expr_bool(val* self, val* p0) {
val* var /* : nullable MType */;
val* var_nexpr /* var nexpr: AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : nullable MType */;
var_nexpr = p0;
{
var1 = typing__TypeVisitor__type_bool(self, var_nexpr);
}
{
var2 = typing__TypeVisitor__visit_expr_subtype(self, var_nexpr, var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_expr_bool for (self: Object, AExpr): nullable MType */
val* VIRTUAL_typing__TypeVisitor__visit_expr_bool(val* self, val* p0) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__TypeVisitor__visit_expr_bool(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_expr_cast for (self: TypeVisitor, ANode, AExpr, AType): nullable MType */
val* typing__TypeVisitor__visit_expr_cast(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var_node /* var node: ANode */;
val* var_nexpr /* var nexpr: AExpr */;
val* var_ntype /* var ntype: AType */;
val* var1 /* : nullable MType */;
val* var_sub /* var sub: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : null */;
val* var10 /* : nullable MType */;
val* var_sup /* var sup: nullable MType */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : ModelBuilder */;
val* var27 /* : ModelBuilder */;
static val* varonce;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : FlatString */;
val* var37 /* : Array[Object] */;
long var38 /* : Int */;
val* var39 /* : NativeArray[Object] */;
val* var40 /* : String */;
short int var41 /* : Bool */;
val* var42 /* : ModelBuilder */;
val* var44 /* : ModelBuilder */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
val* var60 /* : Array[Object] */;
long var61 /* : Int */;
val* var62 /* : NativeArray[Object] */;
val* var63 /* : String */;
var_node = p0;
var_nexpr = p1;
var_ntype = p2;
{
var1 = typing__TypeVisitor__visit_expr(self, var_nexpr);
}
var_sub = var1;
var2 = NULL;
if (var_sub == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sub,var2) on <var_sub:nullable MType> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var_sub,var_other) on <var_sub:nullable MType(MType)> */
var8 = var_sub == var_other;
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
var = var9;
goto RET_LABEL;
} else {
}
{
var10 = typing__TypeVisitor__resolve_mtype(self, var_ntype);
}
var_sup = var10;
var11 = NULL;
if (var_sup == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_sup,var11) on <var_sup:nullable MType> */
var_other = var11;
{
{ /* Inline kernel#Object#is_same_instance (var_sup,var_other) on <var_sup:nullable MType(MType)> */
var17 = var_sup == var_other;
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
var18 = NULL;
var = var18;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#== (var_sup,var_sub) on <var_sup:nullable MType(MType)> */
var_other = var_sub;
{
{ /* Inline kernel#Object#is_same_instance (var_sup,var_other) on <var_sup:nullable MType(MType)> */
var24 = var_sup == var_other;
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
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var27 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (varonce) {
var28 = varonce;
} else {
var29 = "Warning: Expression is already a ";
var30 = 33;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce = var28;
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = ".";
var35 = 1;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var37 = array_instance Array[Object] */
var38 = 3;
var39 = NEW_array__NativeArray(var38, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var39)->values[0] = (val*) var28;
((struct instance_array__NativeArray*)var39)->values[1] = (val*) var_sup;
((struct instance_array__NativeArray*)var39)->values[2] = (val*) var33;
{
((void (*)(val*, val*, long))(var37->class->vft[COLOR_array__Array__with_native]))(var37, var39, var38) /* with_native on <var37:Array[Object]>*/;
}
}
{
var40 = ((val* (*)(val*))(var37->class->vft[COLOR_string__Object__to_s]))(var37) /* to_s on <var37:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(var25, var_node, var40); /* Direct call modelbuilder#ModelBuilder#warning on <var25:ModelBuilder>*/
}
} else {
{
var41 = typing__TypeVisitor__is_subtype(self, var_sub, var_sup);
}
if (var41){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var44 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = "Warning: Expression is already a ";
var48 = 33;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = " since it is a ";
var53 = 15;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = ".";
var58 = 1;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
var60 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var60 = array_instance Array[Object] */
var61 = 5;
var62 = NEW_array__NativeArray(var61, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var62)->values[0] = (val*) var46;
((struct instance_array__NativeArray*)var62)->values[1] = (val*) var_sup;
((struct instance_array__NativeArray*)var62)->values[2] = (val*) var51;
((struct instance_array__NativeArray*)var62)->values[3] = (val*) var_sub;
((struct instance_array__NativeArray*)var62)->values[4] = (val*) var56;
{
((void (*)(val*, val*, long))(var60->class->vft[COLOR_array__Array__with_native]))(var60, var62, var61) /* with_native on <var60:Array[Object]>*/;
}
}
{
var63 = ((val* (*)(val*))(var60->class->vft[COLOR_string__Object__to_s]))(var60) /* to_s on <var60:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(var42, var_node, var63); /* Direct call modelbuilder#ModelBuilder#warning on <var42:ModelBuilder>*/
}
} else {
}
}
var = var_sup;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_expr_cast for (self: Object, ANode, AExpr, AType): nullable MType */
val* VIRTUAL_typing__TypeVisitor__visit_expr_cast(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__TypeVisitor__visit_expr_cast(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#try_get_mproperty_by_name2 for (self: TypeVisitor, ANode, MType, String): nullable MProperty */
val* typing__TypeVisitor__try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2) {
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
var3 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = modelbuilder__ModelBuilder__try_get_mproperty_by_name2(var1, var_anode, var4, var_mtype, var_name);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#try_get_mproperty_by_name2 for (self: Object, ANode, MType, String): nullable MProperty */
val* VIRTUAL_typing__TypeVisitor__try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MProperty */;
val* var1 /* : nullable MProperty */;
var1 = typing__TypeVisitor__try_get_mproperty_by_name2(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#resolve_mtype for (self: TypeVisitor, AType): nullable MType */
val* typing__TypeVisitor__resolve_mtype(val* self, val* p0) {
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
var3 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mclassdef (self) on <self:TypeVisitor> */
var9 = self->attrs[COLOR_typing__TypeVisitor___mclassdef].val; /* _mclassdef on <self:TypeVisitor> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = modelize_class__ModelBuilder__resolve_mtype(var1, var4, var7, var_node);
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#resolve_mtype for (self: Object, AType): nullable MType */
val* VIRTUAL_typing__TypeVisitor__resolve_mtype(val* self, val* p0) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__TypeVisitor__resolve_mtype(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#try_get_mclass for (self: TypeVisitor, ANode, String): nullable MClass */
val* typing__TypeVisitor__try_get_mclass(val* self, val* p0, val* p1) {
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
var3 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = modelbuilder__ModelBuilder__try_get_mclass_by_name(var1, var_node, var4, var_name);
}
var_mclass = var7;
var = var_mclass;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#try_get_mclass for (self: Object, ANode, String): nullable MClass */
val* VIRTUAL_typing__TypeVisitor__try_get_mclass(val* self, val* p0, val* p1) {
val* var /* : nullable MClass */;
val* var1 /* : nullable MClass */;
var1 = typing__TypeVisitor__try_get_mclass(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#get_mclass for (self: TypeVisitor, ANode, String): nullable MClass */
val* typing__TypeVisitor__get_mclass(val* self, val* p0, val* p1) {
val* var /* : nullable MClass */;
val* var_node /* var node: ANode */;
val* var_name /* var name: String */;
val* var1 /* : ModelBuilder */;
val* var3 /* : ModelBuilder */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : ModelBuilder */;
val* var17 /* : ModelBuilder */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : String */;
var_node = p0;
var_name = p1;
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var3 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = modelbuilder__ModelBuilder__try_get_mclass_by_name(var1, var_node, var4, var_name);
}
var_mclass = var7;
var8 = NULL;
if (var_mclass == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var8) on <var_mclass:nullable MClass> */
var_other = var8;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
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
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var17 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (varonce) {
var18 = varonce;
} else {
var19 = "Type Error: missing primitive class `";
var20 = 37;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce = var18;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "\'.";
var25 = 2;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 3;
var29 = NEW_array__NativeArray(var28, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var29)->values[0] = (val*) var18;
((struct instance_array__NativeArray*)var29)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var29)->values[2] = (val*) var23;
{
((void (*)(val*, val*, long))(var27->class->vft[COLOR_array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val*))(var27->class->vft[COLOR_string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var15, var_node, var30); /* Direct call modelbuilder#ModelBuilder#error on <var15:ModelBuilder>*/
}
} else {
}
var = var_mclass;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#get_mclass for (self: Object, ANode, String): nullable MClass */
val* VIRTUAL_typing__TypeVisitor__get_mclass(val* self, val* p0, val* p1) {
val* var /* : nullable MClass */;
val* var1 /* : nullable MClass */;
var1 = typing__TypeVisitor__get_mclass(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#type_bool for (self: TypeVisitor, ANode): nullable MType */
val* typing__TypeVisitor__type_bool(val* self, val* p0) {
val* var /* : nullable MType */;
val* var_node /* var node: ANode */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : null */;
val* var14 /* : MClassType */;
val* var16 /* : MClassType */;
var_node = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "Bool";
var3 = 4;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = typing__TypeVisitor__get_mclass(self, var_node, var1);
}
var_mclass = var5;
var6 = NULL;
if (var_mclass == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var6) on <var_mclass:nullable MClass> */
var_other = var6;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var12 = var_mclass == var_other;
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
var13 = NULL;
var = var13;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var16 = var_mclass->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#type_bool for (self: Object, ANode): nullable MType */
val* VIRTUAL_typing__TypeVisitor__type_bool(val* self, val* p0) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__TypeVisitor__type_bool(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#get_method for (self: TypeVisitor, ANode, MType, String, Bool): nullable CallSite */
val* typing__TypeVisitor__get_method(val* self, val* p0, val* p1, val* p2, short int p3) {
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
long var5 /* : Int */;
val* var6 /* : FlatString */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : FlatString */;
val* var12 /* : Array[Object] */;
long var13 /* : Int */;
val* var14 /* : NativeArray[Object] */;
val* var15 /* : String */;
val* var16 /* : null */;
val* var17 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : ModelBuilder */;
val* var27 /* : ModelBuilder */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : FlatString */;
val* var43 /* : Array[Object] */;
long var44 /* : Int */;
val* var45 /* : NativeArray[Object] */;
val* var46 /* : String */;
val* var47 /* : ModelBuilder */;
val* var49 /* : ModelBuilder */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
val* var65 /* : Array[Object] */;
long var66 /* : Int */;
val* var67 /* : NativeArray[Object] */;
val* var68 /* : String */;
val* var69 /* : null */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
short int var_ /* var : Bool */;
short int var_80 /* var : Bool */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
short int var_85 /* var : Bool */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
long var89 /* : Int */;
val* var90 /* : FlatString */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
val* var_other94 /* var other: nullable Object */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var_98 /* var : Bool */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : FlatString */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : FlatString */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : FlatString */;
val* var120 /* : Array[Object] */;
long var121 /* : Int */;
val* var122 /* : NativeArray[Object] */;
val* var123 /* : String */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
short int var_126 /* var : Bool */;
short int var127 /* : Bool */;
short int var129 /* : Bool */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : FlatString */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
long var138 /* : Int */;
val* var139 /* : FlatString */;
val* var140 /* : Array[Object] */;
long var141 /* : Int */;
val* var142 /* : NativeArray[Object] */;
val* var143 /* : String */;
short int var144 /* : Bool */;
short int var145 /* : Bool */;
short int var146 /* : Bool */;
val* var147 /* : MVisibility */;
val* var149 /* : MVisibility */;
val* var150 /* : MVisibility */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
short int var154 /* : Bool */;
short int var156 /* : Bool */;
short int var_157 /* var : Bool */;
short int var158 /* : Bool */;
short int var_159 /* var : Bool */;
val* var160 /* : MModule */;
val* var162 /* : MModule */;
val* var163 /* : MClassDef */;
val* var165 /* : MClassDef */;
val* var166 /* : MModule */;
val* var168 /* : MModule */;
val* var169 /* : MVisibility */;
val* var170 /* : MVisibility */;
short int var171 /* : Bool */;
short int var_172 /* var : Bool */;
val* var173 /* : ModelBuilder */;
val* var175 /* : ModelBuilder */;
val* var176 /* : ToolContext */;
val* var178 /* : ToolContext */;
val* var179 /* : OptionBool */;
val* var181 /* : OptionBool */;
val* var182 /* : nullable Object */;
val* var184 /* : nullable Object */;
short int var185 /* : Bool */;
short int var186 /* : Bool */;
val* var187 /* : ModelBuilder */;
val* var189 /* : ModelBuilder */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : FlatString */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
long var198 /* : Int */;
val* var199 /* : FlatString */;
val* var200 /* : Array[Object] */;
long var201 /* : Int */;
val* var202 /* : NativeArray[Object] */;
val* var203 /* : String */;
val* var204 /* : null */;
val* var205 /* : MModule */;
val* var207 /* : MModule */;
val* var208 /* : Array[MPropDef] */;
val* var_propdefs /* var propdefs: Array[MMethodDef] */;
long var209 /* : Int */;
long var210 /* : Int */;
short int var211 /* : Bool */;
short int var212 /* : Bool */;
short int var214 /* : Bool */;
val* var215 /* : ModelBuilder */;
val* var217 /* : ModelBuilder */;
static val* varonce218;
val* var219 /* : String */;
char* var220 /* : NativeString */;
long var221 /* : Int */;
val* var222 /* : FlatString */;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : NativeString */;
long var226 /* : Int */;
val* var227 /* : FlatString */;
val* var228 /* : Array[Object] */;
long var229 /* : Int */;
val* var230 /* : NativeArray[Object] */;
val* var231 /* : String */;
val* var232 /* : null */;
long var233 /* : Int */;
long var234 /* : Int */;
short int var235 /* : Bool */;
short int var236 /* : Bool */;
short int var238 /* : Bool */;
val* var239 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable Object */;
val* var240 /* : ModelBuilder */;
val* var242 /* : ModelBuilder */;
static val* varonce243;
val* var244 /* : String */;
char* var245 /* : NativeString */;
long var246 /* : Int */;
val* var247 /* : FlatString */;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : NativeString */;
long var251 /* : Int */;
val* var252 /* : FlatString */;
static val* varonce253;
val* var254 /* : String */;
char* var255 /* : NativeString */;
long var256 /* : Int */;
val* var257 /* : FlatString */;
static val* varonce258;
val* var259 /* : String */;
char* var260 /* : NativeString */;
long var261 /* : Int */;
val* var262 /* : FlatString */;
val* var263 /* : String */;
val* var264 /* : Array[Object] */;
long var265 /* : Int */;
val* var266 /* : NativeArray[Object] */;
val* var267 /* : String */;
val* var268 /* : MPropDef */;
val* var269 /* : nullable MSignature */;
val* var271 /* : nullable MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var272 /* : MType */;
short int var273 /* : Bool */;
int cltype274;
int idtype275;
const char* var_class_name;
short int var276 /* : Bool */;
short int var_erasure_cast /* var erasure_cast: Bool */;
val* var277 /* : nullable MSignature */;
val* var279 /* : nullable MSignature */;
val* var280 /* : nullable MType */;
val* var282 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var283 /* : Bool */;
short int var284 /* : Bool */;
short int var_285 /* var : Bool */;
val* var286 /* : null */;
short int var287 /* : Bool */;
short int var288 /* : Bool */;
short int var290 /* : Bool */;
short int var291 /* : Bool */;
short int var292 /* : Bool */;
val* var293 /* : MType */;
short int var294 /* : Bool */;
int cltype295;
int idtype296;
val* var297 /* : nullable MType */;
val* var299 /* : nullable MType */;
val* var_erased_rettype /* var erased_rettype: nullable MType */;
val* var300 /* : null */;
short int var301 /* : Bool */;
short int var302 /* : Bool */;
short int var304 /* : Bool */;
short int var305 /* : Bool */;
short int var306 /* : Bool */;
short int var307 /* : Bool */;
val* var308 /* : CallSite */;
val* var309 /* : MModule */;
val* var311 /* : MModule */;
val* var312 /* : nullable MClassType */;
val* var314 /* : nullable MClassType */;
val* var_callsite /* var callsite: CallSite */;
var_node = p0;
var_recvtype = p1;
var_name = p2;
var_recv_is_self = p3;
{
var1 = typing__TypeVisitor__anchor_to(self, var_recvtype);
}
var_unsafe_type = var1;
/* <var_recvtype:MType> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(cltype >= var_recvtype->type->table_size) {
var2 = 0;
} else {
var2 = var_recvtype->type->type_table[cltype] == idtype;
}
if (var2){
if (varonce) {
var3 = varonce;
} else {
var4 = "Error: Method \'";
var5 = 15;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
if (varonce7) {
var8 = varonce7;
} else {
var9 = "\' call on \'null\'.";
var10 = 17;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce7 = var8;
}
var12 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var12 = array_instance Array[Object] */
var13 = 3;
var14 = NEW_array__NativeArray(var13, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var14)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var14)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var14)->values[2] = (val*) var8;
{
((void (*)(val*, val*, long))(var12->class->vft[COLOR_array__Array__with_native]))(var12, var14, var13) /* with_native on <var12:Array[Object]>*/;
}
}
{
var15 = ((val* (*)(val*))(var12->class->vft[COLOR_string__Object__to_s]))(var12) /* to_s on <var12:Array[Object]>*/;
}
{
typing__TypeVisitor__error(self, var_node, var15); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
var16 = NULL;
var = var16;
goto RET_LABEL;
} else {
}
{
var17 = typing__TypeVisitor__try_get_mproperty_by_name2(self, var_node, var_unsafe_type, var_name);
}
var_mproperty = var17;
var18 = NULL;
if (var_mproperty == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mproperty,var18) on <var_mproperty:nullable MProperty> */
var_other = var18;
{
{ /* Inline kernel#Object#is_same_instance (var_mproperty,var_other) on <var_mproperty:nullable MProperty(MProperty)> */
var24 = var_mproperty == var_other;
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
if (var_recv_is_self){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var27 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = "Error: Method or variable \'";
var31 = 27;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = "\' unknown in ";
var36 = 13;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
if (varonce38) {
var39 = varonce38;
} else {
var40 = ".";
var41 = 1;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var43 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var43 = array_instance Array[Object] */
var44 = 5;
var45 = NEW_array__NativeArray(var44, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var45)->values[0] = (val*) var29;
((struct instance_array__NativeArray*)var45)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var45)->values[2] = (val*) var34;
((struct instance_array__NativeArray*)var45)->values[3] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var45)->values[4] = (val*) var39;
{
((void (*)(val*, val*, long))(var43->class->vft[COLOR_array__Array__with_native]))(var43, var45, var44) /* with_native on <var43:Array[Object]>*/;
}
}
{
var46 = ((val* (*)(val*))(var43->class->vft[COLOR_string__Object__to_s]))(var43) /* to_s on <var43:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var25, var_node, var46); /* Direct call modelbuilder#ModelBuilder#error on <var25:ModelBuilder>*/
}
} else {
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var49 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "Error: Method \'";
var53 = 15;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = "\' doesn\'t exists in ";
var58 = 20;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
if (varonce60) {
var61 = varonce60;
} else {
var62 = ".";
var63 = 1;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
var65 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var65 = array_instance Array[Object] */
var66 = 5;
var67 = NEW_array__NativeArray(var66, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var67)->values[0] = (val*) var51;
((struct instance_array__NativeArray*)var67)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var67)->values[2] = (val*) var56;
((struct instance_array__NativeArray*)var67)->values[3] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var67)->values[4] = (val*) var61;
{
((void (*)(val*, val*, long))(var65->class->vft[COLOR_array__Array__with_native]))(var65, var67, var66) /* with_native on <var65:Array[Object]>*/;
}
}
{
var68 = ((val* (*)(val*))(var65->class->vft[COLOR_string__Object__to_s]))(var65) /* to_s on <var65:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var47, var_node, var68); /* Direct call modelbuilder#ModelBuilder#error on <var47:ModelBuilder>*/
}
}
var69 = NULL;
var = var69;
goto RET_LABEL;
} else {
}
/* <var_mproperty:nullable MProperty(MProperty)> isa MMethod */
cltype71 = type_model__MMethod.color;
idtype72 = type_model__MMethod.id;
if(cltype71 >= var_mproperty->type->table_size) {
var70 = 0;
} else {
var70 = var_mproperty->type->type_table[cltype71] == idtype72;
}
if (unlikely(!var70)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 253);
show_backtrace(1);
}
{
{ /* Inline typing#TypeVisitor#is_toplevel_context (self) on <self:TypeVisitor> */
var79 = self->attrs[COLOR_typing__TypeVisitor___is_toplevel_context].s; /* _is_toplevel_context on <self:TypeVisitor> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
var_ = var77;
if (var77){
var76 = var_recv_is_self;
} else {
var76 = var_;
}
var_80 = var76;
if (var76){
{
{ /* Inline model#MMethod#is_toplevel (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var83 = var_mproperty->attrs[COLOR_model__MMethod___is_toplevel].s; /* _is_toplevel on <var_mproperty:nullable MProperty(MMethod)> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
var84 = !var81;
var75 = var84;
} else {
var75 = var_80;
}
var_85 = var75;
if (var75){
if (varonce86) {
var87 = varonce86;
} else {
var88 = "sys";
var89 = 3;
var90 = string__NativeString__to_s_with_length(var88, var89);
var87 = var90;
varonce86 = var87;
}
{
{ /* Inline kernel#Object#!= (var_name,var87) on <var_name:String> */
var_other94 = var87;
{
var96 = ((short int (*)(val*, val*))(var_name->class->vft[COLOR_kernel__Object___61d_61d]))(var_name, var_other94) /* == on <var_name:String>*/;
var95 = var96;
}
var97 = !var95;
var92 = var97;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
var91 = var92;
}
var74 = var91;
} else {
var74 = var_85;
}
var_98 = var74;
if (var74){
if (varonce99) {
var100 = varonce99;
} else {
var101 = "exit";
var102 = 4;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
{
{ /* Inline kernel#Object#!= (var_name,var100) on <var_name:String> */
var_other94 = var100;
{
var108 = ((short int (*)(val*, val*))(var_name->class->vft[COLOR_kernel__Object___61d_61d]))(var_name, var_other94) /* == on <var_name:String>*/;
var107 = var108;
}
var109 = !var107;
var105 = var109;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
var104 = var105;
}
var73 = var104;
} else {
var73 = var_98;
}
if (var73){
if (varonce110) {
var111 = varonce110;
} else {
var112 = "Error: \'";
var113 = 8;
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
if (varonce115) {
var116 = varonce115;
} else {
var117 = "\' is not a top-level method, thus need a receiver.";
var118 = 50;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
var120 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var120 = array_instance Array[Object] */
var121 = 3;
var122 = NEW_array__NativeArray(var121, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var122)->values[0] = (val*) var111;
((struct instance_array__NativeArray*)var122)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var122)->values[2] = (val*) var116;
{
((void (*)(val*, val*, long))(var120->class->vft[COLOR_array__Array__with_native]))(var120, var122, var121) /* with_native on <var120:Array[Object]>*/;
}
}
{
var123 = ((val* (*)(val*))(var120->class->vft[COLOR_string__Object__to_s]))(var120) /* to_s on <var120:Array[Object]>*/;
}
{
typing__TypeVisitor__error(self, var_node, var123); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
} else {
}
var125 = !var_recv_is_self;
var_126 = var125;
if (var125){
{
{ /* Inline model#MMethod#is_toplevel (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var129 = var_mproperty->attrs[COLOR_model__MMethod___is_toplevel].s; /* _is_toplevel on <var_mproperty:nullable MProperty(MMethod)> */
var127 = var129;
RET_LABEL128:(void)0;
}
}
var124 = var127;
} else {
var124 = var_126;
}
if (var124){
if (varonce130) {
var131 = varonce130;
} else {
var132 = "Error: cannot call \'";
var133 = 20;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
if (varonce135) {
var136 = varonce135;
} else {
var137 = "\', a top-level method, with a receiver.";
var138 = 39;
var139 = string__NativeString__to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
var140 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var140 = array_instance Array[Object] */
var141 = 3;
var142 = NEW_array__NativeArray(var141, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var142)->values[0] = (val*) var131;
((struct instance_array__NativeArray*)var142)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var142)->values[2] = (val*) var136;
{
((void (*)(val*, val*, long))(var140->class->vft[COLOR_array__Array__with_native]))(var140, var142, var141) /* with_native on <var140:Array[Object]>*/;
}
}
{
var143 = ((val* (*)(val*))(var140->class->vft[COLOR_string__Object__to_s]))(var140) /* to_s on <var140:Array[Object]>*/;
}
{
typing__TypeVisitor__error(self, var_node, var143); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
} else {
}
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var149 = var_mproperty->attrs[COLOR_model__MProperty___visibility].val; /* _visibility on <var_mproperty:nullable MProperty(MMethod)> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1617);
show_backtrace(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
{
var150 = model_base__Object__protected_visibility(self);
}
{
{ /* Inline kernel#Object#== (var147,var150) on <var147:MVisibility> */
var_other = var150;
{
{ /* Inline kernel#Object#is_same_instance (var147,var_other) on <var147:MVisibility> */
var156 = var147 == var_other;
var154 = var156;
goto RET_LABEL155;
RET_LABEL155:(void)0;
}
}
var152 = var154;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
var151 = var152;
}
var_157 = var151;
if (var151){
var158 = !var_recv_is_self;
var146 = var158;
} else {
var146 = var_157;
}
var_159 = var146;
if (var146){
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var162 = self->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var162 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var160 = var162;
RET_LABEL161:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var165 = var_mproperty->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mproperty:nullable MProperty(MMethod)> */
if (unlikely(var165 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1602);
show_backtrace(1);
}
var163 = var165;
RET_LABEL164:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var163) on <var163:MClassDef> */
var168 = var163->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var163:MClassDef> */
if (unlikely(var168 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var166 = var168;
RET_LABEL167:(void)0;
}
}
{
var169 = mmodule__MModule__visibility_for(var160, var166);
}
{
var170 = model_base__Object__intrude_visibility(self);
}
{
var171 = model_base__MVisibility___60d(var169, var170);
}
var145 = var171;
} else {
var145 = var_159;
}
var_172 = var145;
if (var145){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var175 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var175 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var173 = var175;
RET_LABEL174:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var173) on <var173:ModelBuilder> */
var178 = var173->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var173:ModelBuilder> */
if (unlikely(var178 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var176 = var178;
RET_LABEL177:(void)0;
}
}
{
{ /* Inline modelbuilder#ToolContext#opt_ignore_visibility (var176) on <var176:ToolContext> */
var181 = var176->attrs[COLOR_modelbuilder__ToolContext___opt_ignore_visibility].val; /* _opt_ignore_visibility on <var176:ToolContext> */
if (unlikely(var181 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_ignore_visibility");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 46);
show_backtrace(1);
}
var179 = var181;
RET_LABEL180:(void)0;
}
}
{
{ /* Inline opts#Option#value (var179) on <var179:OptionBool> */
var184 = var179->attrs[COLOR_opts__Option___value].val; /* _value on <var179:OptionBool> */
var182 = var184;
RET_LABEL183:(void)0;
}
}
var185 = ((struct instance_kernel__Bool*)var182)->value; /* autounbox from nullable Object to Bool */;
var186 = !var185;
var144 = var186;
} else {
var144 = var_172;
}
if (var144){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var189 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var189 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var187 = var189;
RET_LABEL188:(void)0;
}
}
if (varonce190) {
var191 = varonce190;
} else {
var192 = "Error: Method \'";
var193 = 15;
var194 = string__NativeString__to_s_with_length(var192, var193);
var191 = var194;
varonce190 = var191;
}
if (varonce195) {
var196 = varonce195;
} else {
var197 = "\' is protected and can only acceded by self.";
var198 = 44;
var199 = string__NativeString__to_s_with_length(var197, var198);
var196 = var199;
varonce195 = var196;
}
var200 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var200 = array_instance Array[Object] */
var201 = 3;
var202 = NEW_array__NativeArray(var201, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var202)->values[0] = (val*) var191;
((struct instance_array__NativeArray*)var202)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var202)->values[2] = (val*) var196;
{
((void (*)(val*, val*, long))(var200->class->vft[COLOR_array__Array__with_native]))(var200, var202, var201) /* with_native on <var200:Array[Object]>*/;
}
}
{
var203 = ((val* (*)(val*))(var200->class->vft[COLOR_string__Object__to_s]))(var200) /* to_s on <var200:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var187, var_node, var203); /* Direct call modelbuilder#ModelBuilder#error on <var187:ModelBuilder>*/
}
var204 = NULL;
var = var204;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var207 = self->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var207 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var205 = var207;
RET_LABEL206:(void)0;
}
}
{
var208 = model__MProperty__lookup_definitions(var_mproperty, var205, var_unsafe_type);
}
var_propdefs = var208;
{
var209 = array__AbstractArrayRead__length(var_propdefs);
}
var210 = 0;
{
{ /* Inline kernel#Int#== (var209,var210) on <var209:Int> */
var214 = var209 == var210;
var212 = var214;
goto RET_LABEL213;
RET_LABEL213:(void)0;
}
var211 = var212;
}
if (var211){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var217 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var217 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var215 = var217;
RET_LABEL216:(void)0;
}
}
if (varonce218) {
var219 = varonce218;
} else {
var220 = "Type error: no definition found for property ";
var221 = 45;
var222 = string__NativeString__to_s_with_length(var220, var221);
var219 = var222;
varonce218 = var219;
}
if (varonce223) {
var224 = varonce223;
} else {
var225 = " in ";
var226 = 4;
var227 = string__NativeString__to_s_with_length(var225, var226);
var224 = var227;
varonce223 = var224;
}
var228 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var228 = array_instance Array[Object] */
var229 = 4;
var230 = NEW_array__NativeArray(var229, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var230)->values[0] = (val*) var219;
((struct instance_array__NativeArray*)var230)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var230)->values[2] = (val*) var224;
((struct instance_array__NativeArray*)var230)->values[3] = (val*) var_unsafe_type;
{
((void (*)(val*, val*, long))(var228->class->vft[COLOR_array__Array__with_native]))(var228, var230, var229) /* with_native on <var228:Array[Object]>*/;
}
}
{
var231 = ((val* (*)(val*))(var228->class->vft[COLOR_string__Object__to_s]))(var228) /* to_s on <var228:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var215, var_node, var231); /* Direct call modelbuilder#ModelBuilder#error on <var215:ModelBuilder>*/
}
var232 = NULL;
var = var232;
goto RET_LABEL;
} else {
{
var233 = array__AbstractArrayRead__length(var_propdefs);
}
var234 = 1;
{
{ /* Inline kernel#Int#== (var233,var234) on <var233:Int> */
var238 = var233 == var234;
var236 = var238;
goto RET_LABEL237;
RET_LABEL237:(void)0;
}
var235 = var236;
}
if (var235){
{
var239 = abstract_collection__SequenceRead__first(var_propdefs);
}
var_mpropdef = var239;
} else {
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var242 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var242 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var240 = var242;
RET_LABEL241:(void)0;
}
}
if (varonce243) {
var244 = varonce243;
} else {
var245 = "Warning: confliting property definitions for property ";
var246 = 54;
var247 = string__NativeString__to_s_with_length(var245, var246);
var244 = var247;
varonce243 = var244;
}
if (varonce248) {
var249 = varonce248;
} else {
var250 = " in ";
var251 = 4;
var252 = string__NativeString__to_s_with_length(var250, var251);
var249 = var252;
varonce248 = var249;
}
if (varonce253) {
var254 = varonce253;
} else {
var255 = ": ";
var256 = 2;
var257 = string__NativeString__to_s_with_length(var255, var256);
var254 = var257;
varonce253 = var254;
}
if (varonce258) {
var259 = varonce258;
} else {
var260 = " ";
var261 = 1;
var262 = string__NativeString__to_s_with_length(var260, var261);
var259 = var262;
varonce258 = var259;
}
{
var263 = string__Collection__join(var_propdefs, var259);
}
var264 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var264 = array_instance Array[Object] */
var265 = 6;
var266 = NEW_array__NativeArray(var265, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var266)->values[0] = (val*) var244;
((struct instance_array__NativeArray*)var266)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var266)->values[2] = (val*) var249;
((struct instance_array__NativeArray*)var266)->values[3] = (val*) var_unsafe_type;
((struct instance_array__NativeArray*)var266)->values[4] = (val*) var254;
((struct instance_array__NativeArray*)var266)->values[5] = (val*) var263;
{
((void (*)(val*, val*, long))(var264->class->vft[COLOR_array__Array__with_native]))(var264, var266, var265) /* with_native on <var264:Array[Object]>*/;
}
}
{
var267 = ((val* (*)(val*))(var264->class->vft[COLOR_string__Object__to_s]))(var264) /* to_s on <var264:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(var240, var_node, var267); /* Direct call modelbuilder#ModelBuilder#warning on <var240:ModelBuilder>*/
}
{
var268 = model__MProperty__intro(var_mproperty);
}
var_mpropdef = var268;
}
}
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable Object(MMethodDef)> */
var271 = var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable Object(MMethodDef)> */
var269 = var271;
RET_LABEL270:(void)0;
}
}
if (unlikely(var269 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 281);
show_backtrace(1);
}
var_msignature = var269;
{
var272 = typing__TypeVisitor__resolve_for(self, var_msignature, var_recvtype, var_recv_is_self);
}
/* <var272:MType> isa MSignature */
cltype274 = type_model__MSignature.color;
idtype275 = type_model__MSignature.id;
if(cltype274 >= var272->type->table_size) {
var273 = 0;
} else {
var273 = var272->type->type_table[cltype274] == idtype275;
}
if (unlikely(!var273)) {
var_class_name = var272 == NULL ? "null" : var272->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MSignature", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 282);
show_backtrace(1);
}
var_msignature = var272;
var276 = 0;
var_erasure_cast = var276;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable Object(MMethodDef)> */
var279 = var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable Object(MMethodDef)> */
var277 = var279;
RET_LABEL278:(void)0;
}
}
if (var277 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 285);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var277) on <var277:nullable MSignature> */
if (unlikely(var277 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1455);
show_backtrace(1);
}
var282 = var277->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var277:nullable MSignature> */
var280 = var282;
RET_LABEL281:(void)0;
}
}
var_rettype = var280;
var284 = !var_recv_is_self;
var_285 = var284;
if (var284){
var286 = NULL;
if (var_rettype == NULL) {
var287 = 0; /* is null */
} else {
var287 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rettype,var286) on <var_rettype:nullable MType> */
var_other94 = var286;
{
var291 = ((short int (*)(val*, val*))(var_rettype->class->vft[COLOR_kernel__Object___61d_61d]))(var_rettype, var_other94) /* == on <var_rettype:nullable MType(MType)>*/;
var290 = var291;
}
var292 = !var290;
var288 = var292;
goto RET_LABEL289;
RET_LABEL289:(void)0;
}
var287 = var288;
}
var283 = var287;
} else {
var283 = var_285;
}
if (var283){
{
var293 = ((val* (*)(val*))(var_rettype->class->vft[COLOR_model__MType__as_notnullable]))(var_rettype) /* as_notnullable on <var_rettype:nullable MType(MType)>*/;
}
var_rettype = var293;
/* <var_rettype:nullable MType(MType)> isa MParameterType */
cltype295 = type_model__MParameterType.color;
idtype296 = type_model__MParameterType.id;
if(cltype295 >= var_rettype->type->table_size) {
var294 = 0;
} else {
var294 = var_rettype->type->type_table[cltype295] == idtype296;
}
if (var294){
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var299 = var_msignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var297 = var299;
RET_LABEL298:(void)0;
}
}
var_erased_rettype = var297;
var300 = NULL;
if (var_erased_rettype == NULL) {
var301 = 0; /* is null */
} else {
var301 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_erased_rettype,var300) on <var_erased_rettype:nullable MType> */
var_other94 = var300;
{
var305 = ((short int (*)(val*, val*))(var_erased_rettype->class->vft[COLOR_kernel__Object___61d_61d]))(var_erased_rettype, var_other94) /* == on <var_erased_rettype:nullable MType(MType)>*/;
var304 = var305;
}
var306 = !var304;
var302 = var306;
goto RET_LABEL303;
RET_LABEL303:(void)0;
}
var301 = var302;
}
if (unlikely(!var301)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 290);
show_backtrace(1);
}
var307 = 1;
var_erasure_cast = var307;
} else {
}
} else {
}
var308 = NEW_typing__CallSite(&type_typing__CallSite);
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var311 = self->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var311 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var309 = var311;
RET_LABEL310:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#anchor (self) on <self:TypeVisitor> */
var314 = self->attrs[COLOR_typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
var312 = var314;
RET_LABEL313:(void)0;
}
}
{
{ /* Inline typing#CallSite#init (var308,var_node,var_recvtype,var309,var312,var_recv_is_self,var_mproperty,var_mpropdef,var_msignature,var_erasure_cast) on <var308:CallSite> */
var308->attrs[COLOR_typing__CallSite___node].val = var_node; /* _node on <var308:CallSite> */
var308->attrs[COLOR_typing__CallSite___recv].val = var_recvtype; /* _recv on <var308:CallSite> */
var308->attrs[COLOR_typing__CallSite___mmodule].val = var309; /* _mmodule on <var308:CallSite> */
var308->attrs[COLOR_typing__CallSite___anchor].val = var312; /* _anchor on <var308:CallSite> */
var308->attrs[COLOR_typing__CallSite___recv_is_self].s = var_recv_is_self; /* _recv_is_self on <var308:CallSite> */
var308->attrs[COLOR_typing__CallSite___mproperty].val = var_mproperty; /* _mproperty on <var308:CallSite> */
var308->attrs[COLOR_typing__CallSite___mpropdef].val = var_mpropdef; /* _mpropdef on <var308:CallSite> */
var308->attrs[COLOR_typing__CallSite___msignature].val = var_msignature; /* _msignature on <var308:CallSite> */
var308->attrs[COLOR_typing__CallSite___erasure_cast].s = var_erasure_cast; /* _erasure_cast on <var308:CallSite> */
RET_LABEL315:(void)0;
}
}
var_callsite = var308;
var = var_callsite;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#get_method for (self: Object, ANode, MType, String, Bool): nullable CallSite */
val* VIRTUAL_typing__TypeVisitor__get_method(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = typing__TypeVisitor__get_method(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#check_signature for (self: TypeVisitor, ANode, Array[AExpr], String, MSignature): Bool */
short int typing__TypeVisitor__check_signature(val* self, val* p0, val* p1, val* p2, val* p3) {
short int var /* : Bool */;
val* var_node /* var node: ANode */;
val* var_args /* var args: Array[AExpr] */;
val* var_name /* var name: String */;
val* var_msignature /* var msignature: MSignature */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
val* var18 /* : ModelBuilder */;
val* var20 /* : ModelBuilder */;
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
val* var30 /* : Array[Object] */;
long var31 /* : Int */;
val* var32 /* : NativeArray[Object] */;
val* var33 /* : String */;
short int var34 /* : Bool */;
long var35 /* : Int */;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : ModelBuilder */;
val* var44 /* : ModelBuilder */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
long var50 /* : Int */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
long var56 /* : Int */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : FlatString */;
val* var62 /* : Array[Object] */;
long var63 /* : Int */;
val* var64 /* : NativeArray[Object] */;
val* var65 /* : Object */;
val* var66 /* : Object */;
val* var67 /* : String */;
short int var68 /* : Bool */;
long var69 /* : Int */;
long var70 /* : Int */;
long var71 /* : Int */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
const char* var_class_name76;
long var77 /* : Int */;
long var_vararg_decl /* var vararg_decl: Int */;
val* var78 /* : Range[Int] */;
long var79 /* : Int */;
long var80 /* : Int */;
val* var81 /* : Discrete */;
val* var82 /* : Discrete */;
val* var83 /* : Iterator[Discrete] */;
short int var84 /* : Bool */;
val* var85 /* : nullable Object */;
long var_i /* var i: Int */;
long var86 /* : Int */;
long var_j /* var j: Int */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
short int var97 /* : Bool */;
long var98 /* : Int */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
long var104 /* : Int */;
val* var105 /* : Array[MParameter] */;
val* var107 /* : Array[MParameter] */;
val* var108 /* : nullable Object */;
val* var109 /* : MType */;
val* var111 /* : MType */;
val* var_paramtype /* var paramtype: MType */;
val* var112 /* : nullable Object */;
val* var113 /* : nullable MType */;
long var114 /* : Int */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
int cltype118;
int idtype119;
const char* var_class_name120;
short int var121 /* : Bool */;
val* var122 /* : Array[AExpr] */;
val* var_varargs /* var varargs: Array[AExpr] */;
val* var123 /* : Array[MParameter] */;
val* var125 /* : Array[MParameter] */;
val* var126 /* : nullable Object */;
val* var127 /* : MType */;
val* var129 /* : MType */;
val* var_paramtype130 /* var paramtype: MType */;
val* var131 /* : Range[Int] */;
long var132 /* : Int */;
short int var134 /* : Bool */;
int cltype135;
int idtype136;
const char* var_class_name137;
long var138 /* : Int */;
val* var139 /* : Discrete */;
val* var140 /* : Discrete */;
val* var141 /* : Iterator[Discrete] */;
short int var142 /* : Bool */;
val* var143 /* : nullable Object */;
long var_j144 /* var j: Int */;
long var145 /* : Int */;
val* var146 /* : nullable Object */;
val* var147 /* : nullable Object */;
val* var148 /* : nullable MType */;
short int var150 /* : Bool */;
var_node = p0;
var_args = p1;
var_name = p2;
var_msignature = p3;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var3 = var_msignature->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_vararg_rank = var1;
var4 = 0;
{
{ /* Inline kernel#Int#>= (var_vararg_rank,var4) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var8 = var_vararg_rank >= var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var9 = array__AbstractArrayRead__length(var_args);
}
{
var10 = model__MSignature__arity(var_msignature);
}
{
{ /* Inline kernel#Int#< (var9,var10) on <var9:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var13 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var17 = var9 < var10;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var20 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (varonce) {
var21 = varonce;
} else {
var22 = "Error: arity mismatch; prototype is \'";
var23 = 37;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce = var21;
}
if (varonce25) {
var26 = varonce25;
} else {
var27 = "\'";
var28 = 1;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var30 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var30 = array_instance Array[Object] */
var31 = 4;
var32 = NEW_array__NativeArray(var31, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var32)->values[0] = (val*) var21;
((struct instance_array__NativeArray*)var32)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var32)->values[2] = (val*) var_msignature;
((struct instance_array__NativeArray*)var32)->values[3] = (val*) var26;
{
((void (*)(val*, val*, long))(var30->class->vft[COLOR_array__Array__with_native]))(var30, var32, var31) /* with_native on <var30:Array[Object]>*/;
}
}
{
var33 = ((val* (*)(val*))(var30->class->vft[COLOR_string__Object__to_s]))(var30) /* to_s on <var30:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var18, var_node, var33); /* Direct call modelbuilder#ModelBuilder#error on <var18:ModelBuilder>*/
}
var34 = 0;
var = var34;
goto RET_LABEL;
} else {
}
} else {
{
var35 = array__AbstractArrayRead__length(var_args);
}
{
var36 = model__MSignature__arity(var_msignature);
}
{
{ /* Inline kernel#Int#!= (var35,var36) on <var35:Int> */
var40 = var35 == var36;
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (var37){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var44 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = "Error: Incorrect number of parameters. Got ";
var48 = 43;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
{
var50 = array__AbstractArrayRead__length(var_args);
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = ", expected ";
var54 = 11;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
{
var56 = model__MSignature__arity(var_msignature);
}
if (varonce57) {
var58 = varonce57;
} else {
var59 = ". Signature is ";
var60 = 15;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
var62 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var62 = array_instance Array[Object] */
var63 = 6;
var64 = NEW_array__NativeArray(var63, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var64)->values[0] = (val*) var46;
var65 = BOX_kernel__Int(var50); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var64)->values[1] = (val*) var65;
((struct instance_array__NativeArray*)var64)->values[2] = (val*) var52;
var66 = BOX_kernel__Int(var56); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var64)->values[3] = (val*) var66;
((struct instance_array__NativeArray*)var64)->values[4] = (val*) var58;
((struct instance_array__NativeArray*)var64)->values[5] = (val*) var_msignature;
{
((void (*)(val*, val*, long))(var62->class->vft[COLOR_array__Array__with_native]))(var62, var64, var63) /* with_native on <var62:Array[Object]>*/;
}
}
{
var67 = ((val* (*)(val*))(var62->class->vft[COLOR_string__Object__to_s]))(var62) /* to_s on <var62:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var42, var_node, var67); /* Direct call modelbuilder#ModelBuilder#error on <var42:ModelBuilder>*/
}
var68 = 0;
var = var68;
goto RET_LABEL;
} else {
}
}
{
var69 = array__AbstractArrayRead__length(var_args);
}
{
var70 = model__MSignature__arity(var_msignature);
}
{
{ /* Inline kernel#Int#- (var69,var70) on <var69:Int> */
/* Covariant cast for argument 0 (i) <var70:Int> isa OTHER */
/* <var70:Int> isa OTHER */
var73 = 1; /* easy <var70:Int> isa OTHER*/
if (unlikely(!var73)) {
var_class_name76 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name76);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 331);
show_backtrace(1);
}
var77 = var69 - var70;
var71 = var77;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var_vararg_decl = var71;
var78 = NEW_range__Range(&type_range__Rangekernel__Int);
var79 = 0;
{
var80 = model__MSignature__arity(var_msignature);
}
{
var81 = BOX_kernel__Int(var79); /* autobox from Int to Discrete */
var82 = BOX_kernel__Int(var80); /* autobox from Int to Discrete */
range__Range__without_last(var78, var81, var82); /* Direct call range#Range#without_last on <var78:Range[Int]>*/
}
{
var83 = range__Range__iterator(var78);
}
for(;;) {
{
var84 = ((short int (*)(val*))(var83->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var83) /* is_ok on <var83:Iterator[Discrete]>*/;
}
if(!var84) break;
{
var85 = ((val* (*)(val*))(var83->class->vft[COLOR_abstract_collection__Iterator__item]))(var83) /* item on <var83:Iterator[Discrete]>*/;
}
var86 = ((struct instance_kernel__Int*)var85)->value; /* autounbox from nullable Object to Int */;
var_i = var86;
var_j = var_i;
{
{ /* Inline kernel#Int#== (var_i,var_vararg_rank) on <var_i:Int> */
var90 = var_i == var_vararg_rank;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
var87 = var88;
}
if (var87){
goto CONTINUE_label;
} else {
}
{
{ /* Inline kernel#Int#> (var_i,var_vararg_rank) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_rank:Int> isa OTHER */
/* <var_vararg_rank:Int> isa OTHER */
var93 = 1; /* easy <var_vararg_rank:Int> isa OTHER*/
if (unlikely(!var93)) {
var_class_name96 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var97 = var_i > var_vararg_rank;
var91 = var97;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
if (var91){
{
{ /* Inline kernel#Int#+ (var_i,var_vararg_decl) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_decl:Int> isa OTHER */
/* <var_vararg_decl:Int> isa OTHER */
var100 = 1; /* easy <var_vararg_decl:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name103 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name103);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var104 = var_i + var_vararg_decl;
var98 = var104;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var_j = var98;
} else {
}
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var107 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
var108 = array__Array___91d_93d(var105, var_i);
}
{
{ /* Inline model#MParameter#mtype (var108) on <var108:nullable Object(MParameter)> */
var111 = var108->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var108:nullable Object(MParameter)> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
var_paramtype = var109;
{
var112 = array__Array___91d_93d(var_args, var_j);
}
{
var113 = typing__TypeVisitor__visit_expr_subtype(self, var112, var_paramtype);
}
var113;
CONTINUE_label: (void)0;
{
((void (*)(val*))(var83->class->vft[COLOR_abstract_collection__Iterator__next]))(var83) /* next on <var83:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
var114 = 0;
{
{ /* Inline kernel#Int#>= (var_vararg_rank,var114) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <var114:Int> isa OTHER */
/* <var114:Int> isa OTHER */
var117 = 1; /* easy <var114:Int> isa OTHER*/
if (unlikely(!var117)) {
var_class_name120 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name120);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 326);
show_backtrace(1);
}
var121 = var_vararg_rank >= var114;
var115 = var121;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
}
if (var115){
var122 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
{
array__Array__init(var122); /* Direct call array#Array#init on <var122:Array[AExpr]>*/
}
var_varargs = var122;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var125 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
var126 = array__Array___91d_93d(var123, var_vararg_rank);
}
{
{ /* Inline model#MParameter#mtype (var126) on <var126:nullable Object(MParameter)> */
var129 = var126->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var126:nullable Object(MParameter)> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
var_paramtype130 = var127;
var131 = NEW_range__Range(&type_range__Rangekernel__Int);
{
{ /* Inline kernel#Int#+ (var_vararg_rank,var_vararg_decl) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_decl:Int> isa OTHER */
/* <var_vararg_decl:Int> isa OTHER */
var134 = 1; /* easy <var_vararg_decl:Int> isa OTHER*/
if (unlikely(!var134)) {
var_class_name137 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name137);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var138 = var_vararg_rank + var_vararg_decl;
var132 = var138;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
}
{
var139 = BOX_kernel__Int(var_vararg_rank); /* autobox from Int to Discrete */
var140 = BOX_kernel__Int(var132); /* autobox from Int to Discrete */
range__Range__init(var131, var139, var140); /* Direct call range#Range#init on <var131:Range[Int]>*/
}
{
var141 = range__Range__iterator(var131);
}
for(;;) {
{
var142 = ((short int (*)(val*))(var141->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var141) /* is_ok on <var141:Iterator[Discrete]>*/;
}
if(!var142) break;
{
var143 = ((val* (*)(val*))(var141->class->vft[COLOR_abstract_collection__Iterator__item]))(var141) /* item on <var141:Iterator[Discrete]>*/;
}
var145 = ((struct instance_kernel__Int*)var143)->value; /* autounbox from nullable Object to Int */;
var_j144 = var145;
{
var146 = array__Array___91d_93d(var_args, var_j144);
}
{
array__Array__add(var_varargs, var146); /* Direct call array#Array#add on <var_varargs:Array[AExpr]>*/
}
{
var147 = array__Array___91d_93d(var_args, var_j144);
}
{
var148 = typing__TypeVisitor__visit_expr_subtype(self, var147, var_paramtype130);
}
var148;
CONTINUE_label149: (void)0;
{
((void (*)(val*))(var141->class->vft[COLOR_abstract_collection__Iterator__next]))(var141) /* next on <var141:Iterator[Discrete]>*/;
}
}
BREAK_label149: (void)0;
} else {
}
var150 = 1;
var = var150;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#check_signature for (self: Object, ANode, Array[AExpr], String, MSignature): Bool */
short int VIRTUAL_typing__TypeVisitor__check_signature(val* self, val* p0, val* p1, val* p2, val* p3) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = typing__TypeVisitor__check_signature(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#error for (self: TypeVisitor, ANode, String) */
void typing__TypeVisitor__error(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_message /* var message: String */;
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
val* var6 /* : Location */;
var_node = p0;
var_message = p1;
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var2 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val* (*)(val*))(var_node->class->vft[COLOR_parser_nodes__ANode__hot_location]))(var_node) /* hot_location on <var_node:ANode>*/;
}
{
toolcontext__ToolContext__error(var3, var6, var_message); /* Direct call toolcontext#ToolContext#error on <var3:ToolContext>*/
}
RET_LABEL:;
}
/* method typing#TypeVisitor#error for (self: Object, ANode, String) */
void VIRTUAL_typing__TypeVisitor__error(val* self, val* p0, val* p1) {
typing__TypeVisitor__error(self, p0, p1); /* Direct call typing#TypeVisitor#error on <self:Object(TypeVisitor)>*/
RET_LABEL:;
}
/* method typing#TypeVisitor#get_variable for (self: TypeVisitor, AExpr, Variable): nullable MType */
val* typing__TypeVisitor__get_variable(val* self, val* p0, val* p1) {
val* var /* : nullable MType */;
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: Variable */;
val* var1 /* : nullable FlowContext */;
val* var3 /* : nullable FlowContext */;
val* var_flow /* var flow: nullable FlowContext */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
val* var15 /* : null */;
val* var16 /* : HashMap[Variable, nullable MType] */;
val* var18 /* : HashMap[Variable, nullable MType] */;
short int var19 /* : Bool */;
val* var20 /* : HashMap[Variable, nullable MType] */;
val* var22 /* : HashMap[Variable, nullable MType] */;
val* var23 /* : nullable Object */;
val* var24 /* : nullable Array[nullable MType] */;
val* var_mtypes /* var mtypes: nullable Array[nullable MType] */;
short int var25 /* : Bool */;
val* var26 /* : null */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var_ /* var : Bool */;
long var29 /* : Int */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : nullable MType */;
val* var37 /* : nullable MType */;
long var38 /* : Int */;
long var39 /* : Int */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : nullable Object */;
val* var45 /* : nullable MType */;
val* var_res /* var res: nullable MType */;
val* var46 /* : null */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : nullable MType */;
val* var55 /* : nullable MType */;
var_node = p0;
var_variable = p1;
{
{ /* Inline flow#AExpr#after_flow_context (var_node) on <var_node:AExpr> */
var3 = var_node->attrs[COLOR_flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_node:AExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_flow = var1;
var4 = NULL;
if (var_flow == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_flow,var4) on <var_flow:nullable FlowContext> */
var_other = var4;
{
{ /* Inline kernel#Object#is_same_instance (var_flow,var_other) on <var_flow:nullable FlowContext(FlowContext)> */
var10 = var_flow == var_other;
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
if (varonce) {
var11 = varonce;
} else {
var12 = "No context!";
var13 = 11;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
{
typing__TypeVisitor__error(self, var_node, var11); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
var15 = NULL;
var = var15;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#FlowContext#vars (var_flow) on <var_flow:nullable FlowContext(FlowContext)> */
var18 = var_flow->attrs[COLOR_typing__FlowContext___vars].val; /* _vars on <var_flow:nullable FlowContext(FlowContext)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 447);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = abstract_collection__MapRead__has_key(var16, var_variable);
}
if (var19){
{
{ /* Inline typing#FlowContext#vars (var_flow) on <var_flow:nullable FlowContext(FlowContext)> */
var22 = var_flow->attrs[COLOR_typing__FlowContext___vars].val; /* _vars on <var_flow:nullable FlowContext(FlowContext)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 447);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = hash_collection__HashMap___91d_93d(var20, var_variable);
}
var = var23;
goto RET_LABEL;
} else {
{
var24 = typing__FlowContext__collect_types(var_flow, var_variable);
}
var_mtypes = var24;
var26 = NULL;
if (var_mtypes == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
var28 = abstract_collection__SequenceRead___61d_61d(var_mtypes, var26);
var27 = var28;
}
var_ = var27;
if (var27){
var25 = var_;
} else {
{
var29 = array__AbstractArrayRead__length(var_mtypes);
}
var30 = 0;
{
{ /* Inline kernel#Int#== (var29,var30) on <var29:Int> */
var34 = var29 == var30;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
var25 = var31;
}
if (var25){
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var37 = var_variable->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
var = var35;
goto RET_LABEL;
} else {
{
var38 = array__AbstractArrayRead__length(var_mtypes);
}
var39 = 1;
{
{ /* Inline kernel#Int#== (var38,var39) on <var38:Int> */
var43 = var38 == var39;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
if (var40){
{
var44 = abstract_collection__SequenceRead__first(var_mtypes);
}
var = var44;
goto RET_LABEL;
} else {
{
var45 = typing__TypeVisitor__merge_types(self, var_node, var_mtypes);
}
var_res = var45;
var46 = NULL;
if (var_res == NULL) {
var47 = 1; /* is null */
} else {
var47 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var46) on <var_res:nullable MType> */
var_other = var46;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable MType(MType)> */
var52 = var_res == var_other;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
var47 = var48;
}
if (var47){
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var55 = var_variable->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
var_res = var53;
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
/* method typing#TypeVisitor#get_variable for (self: Object, AExpr, Variable): nullable MType */
val* VIRTUAL_typing__TypeVisitor__get_variable(val* self, val* p0, val* p1) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__TypeVisitor__get_variable(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#set_variable for (self: TypeVisitor, AExpr, Variable, nullable MType) */
void typing__TypeVisitor__set_variable(val* self, val* p0, val* p1, val* p2) {
val* var_node /* var node: AExpr */;
val* var_variable /* var variable: Variable */;
val* var_mtype /* var mtype: nullable MType */;
val* var /* : nullable FlowContext */;
val* var2 /* : nullable FlowContext */;
val* var_flow /* var flow: nullable FlowContext */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
var_node = p0;
var_variable = p1;
var_mtype = p2;
{
{ /* Inline flow#AExpr#after_flow_context (var_node) on <var_node:AExpr> */
var2 = var_node->attrs[COLOR_flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_node:AExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_flow = var;
var3 = NULL;
if (var_flow == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_flow,var3) on <var_flow:nullable FlowContext> */
var_other = var3;
{
var8 = ((short int (*)(val*, val*))(var_flow->class->vft[COLOR_kernel__Object___61d_61d]))(var_flow, var_other) /* == on <var_flow:nullable FlowContext(FlowContext)>*/;
var7 = var8;
}
var9 = !var7;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 374);
show_backtrace(1);
}
{
typing__FlowContext__set_var(var_flow, var_variable, var_mtype); /* Direct call typing#FlowContext#set_var on <var_flow:nullable FlowContext(FlowContext)>*/
}
RET_LABEL:;
}
/* method typing#TypeVisitor#set_variable for (self: Object, AExpr, Variable, nullable MType) */
void VIRTUAL_typing__TypeVisitor__set_variable(val* self, val* p0, val* p1, val* p2) {
typing__TypeVisitor__set_variable(self, p0, p1, p2); /* Direct call typing#TypeVisitor#set_variable on <self:Object(TypeVisitor)>*/
RET_LABEL:;
}
/* method typing#TypeVisitor#merge_types for (self: TypeVisitor, ANode, Array[nullable MType]): nullable MType */
val* typing__TypeVisitor__merge_types(val* self, val* p0, val* p1) {
val* var /* : nullable MType */;
val* var_node /* var node: ANode */;
val* var_col /* var col: Array[nullable MType] */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var8 /* : Array[nullable MType] */;
val* var_res /* var res: Array[nullable MType] */;
val* var9 /* : ArrayIterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_t1 /* var t1: nullable MType */;
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var_found /* var found: Bool */;
val* var20 /* : ArrayIterator[nullable Object] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_t2 /* var t2: nullable MType */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
val* var36 /* : MType */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : null */;
var_node = p0;
var_col = p1;
{
var1 = array__AbstractArrayRead__length(var_col);
}
var2 = 1;
{
{ /* Inline kernel#Int#== (var1,var2) on <var1:Int> */
var6 = var1 == var2;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
var7 = abstract_collection__SequenceRead__first(var_col);
}
var = var7;
goto RET_LABEL;
} else {
}
var8 = NEW_array__Array(&type_array__Arraynullable_model__MType);
{
array__Array__init(var8); /* Direct call array#Array#init on <var8:Array[nullable MType]>*/
}
var_res = var8;
{
var9 = array__AbstractArrayRead__iterator(var_col);
}
for(;;) {
{
var10 = array__ArrayIterator__is_ok(var9);
}
if(!var10) break;
{
var11 = array__ArrayIterator__item(var9);
}
var_t1 = var11;
var12 = NULL;
if (var_t1 == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t1,var12) on <var_t1:nullable MType> */
var_other = var12;
{
{ /* Inline kernel#Object#is_same_instance (var_t1,var_other) on <var_t1:nullable MType(MType)> */
var18 = var_t1 == var_other;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
goto CONTINUE_label;
} else {
}
var19 = 1;
var_found = var19;
{
var20 = array__AbstractArrayRead__iterator(var_col);
}
for(;;) {
{
var21 = array__ArrayIterator__is_ok(var20);
}
if(!var21) break;
{
var22 = array__ArrayIterator__item(var20);
}
var_t2 = var22;
var23 = NULL;
if (var_t2 == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t2,var23) on <var_t2:nullable MType> */
var_other = var23;
{
{ /* Inline kernel#Object#is_same_instance (var_t2,var_other) on <var_t2:nullable MType(MType)> */
var29 = var_t2 == var_other;
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
if (var24){
goto CONTINUE_label30;
} else {
}
/* <var_t2:nullable MType(MType)> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_t2->type->table_size) {
var32 = 0;
} else {
var32 = var_t2->type->type_table[cltype] == idtype;
}
var_ = var32;
if (var32){
var31 = var_;
} else {
/* <var_t2:nullable MType(MType)> isa MNullType */
cltype34 = type_model__MNullType.color;
idtype35 = type_model__MNullType.id;
if(cltype34 >= var_t2->type->table_size) {
var33 = 0;
} else {
var33 = var_t2->type->type_table[cltype34] == idtype35;
}
var31 = var33;
}
if (var31){
{
var36 = ((val* (*)(val*))(var_t1->class->vft[COLOR_model__MType__as_nullable]))(var_t1) /* as_nullable on <var_t1:nullable MType(MType)>*/;
}
var_t1 = var36;
} else {
}
{
var37 = typing__TypeVisitor__is_subtype(self, var_t2, var_t1);
}
var38 = !var37;
if (var38){
var39 = 0;
var_found = var39;
} else {
}
CONTINUE_label30: (void)0;
{
array__ArrayIterator__next(var20); /* Direct call array#ArrayIterator#next on <var20:ArrayIterator[nullable Object]>*/
}
}
BREAK_label30: (void)0;
if (var_found){
var = var_t1;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var9); /* Direct call array#ArrayIterator#next on <var9:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
var40 = NULL;
var = var40;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#merge_types for (self: Object, ANode, Array[nullable MType]): nullable MType */
val* VIRTUAL_typing__TypeVisitor__merge_types(val* self, val* p0, val* p1) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__TypeVisitor__merge_types(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#node for (self: CallSite): ANode */
val* typing__CallSite__node(val* self) {
val* var /* : ANode */;
val* var1 /* : ANode */;
var1 = self->attrs[COLOR_typing__CallSite___node].val; /* _node on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 405);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#node for (self: Object): ANode */
val* VIRTUAL_typing__CallSite__node(val* self) {
val* var /* : ANode */;
val* var1 /* : ANode */;
val* var3 /* : ANode */;
{ /* Inline typing#CallSite#node (self) on <self:Object(CallSite)> */
var3 = self->attrs[COLOR_typing__CallSite___node].val; /* _node on <self:Object(CallSite)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 405);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#recv for (self: CallSite): MType */
val* typing__CallSite__recv(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_typing__CallSite___recv].val; /* _recv on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 408);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#recv for (self: Object): MType */
val* VIRTUAL_typing__CallSite__recv(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
{ /* Inline typing#CallSite#recv (self) on <self:Object(CallSite)> */
var3 = self->attrs[COLOR_typing__CallSite___recv].val; /* _recv on <self:Object(CallSite)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 408);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mmodule for (self: CallSite): MModule */
val* typing__CallSite__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_typing__CallSite___mmodule].val; /* _mmodule on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 411);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mmodule for (self: Object): MModule */
val* VIRTUAL_typing__CallSite__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
{ /* Inline typing#CallSite#mmodule (self) on <self:Object(CallSite)> */
var3 = self->attrs[COLOR_typing__CallSite___mmodule].val; /* _mmodule on <self:Object(CallSite)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 411);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#anchor for (self: CallSite): nullable MClassType */
val* typing__CallSite__anchor(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
var1 = self->attrs[COLOR_typing__CallSite___anchor].val; /* _anchor on <self:CallSite> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#anchor for (self: Object): nullable MClassType */
val* VIRTUAL_typing__CallSite__anchor(val* self) {
val* var /* : nullable MClassType */;
val* var1 /* : nullable MClassType */;
val* var3 /* : nullable MClassType */;
{ /* Inline typing#CallSite#anchor (self) on <self:Object(CallSite)> */
var3 = self->attrs[COLOR_typing__CallSite___anchor].val; /* _anchor on <self:Object(CallSite)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mproperty for (self: CallSite): MMethod */
val* typing__CallSite__mproperty(val* self) {
val* var /* : MMethod */;
val* var1 /* : MMethod */;
var1 = self->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 422);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mproperty for (self: Object): MMethod */
val* VIRTUAL_typing__CallSite__mproperty(val* self) {
val* var /* : MMethod */;
val* var1 /* : MMethod */;
val* var3 /* : MMethod */;
{ /* Inline typing#CallSite#mproperty (self) on <self:Object(CallSite)> */
var3 = self->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <self:Object(CallSite)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 422);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mpropdef for (self: CallSite): MMethodDef */
val* typing__CallSite__mpropdef(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
var1 = self->attrs[COLOR_typing__CallSite___mpropdef].val; /* _mpropdef on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 425);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mpropdef for (self: Object): MMethodDef */
val* VIRTUAL_typing__CallSite__mpropdef(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
{ /* Inline typing#CallSite#mpropdef (self) on <self:Object(CallSite)> */
var3 = self->attrs[COLOR_typing__CallSite___mpropdef].val; /* _mpropdef on <self:Object(CallSite)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 425);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#msignature for (self: CallSite): MSignature */
val* typing__CallSite__msignature(val* self) {
val* var /* : MSignature */;
val* var1 /* : MSignature */;
var1 = self->attrs[COLOR_typing__CallSite___msignature].val; /* _msignature on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 429);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#msignature for (self: Object): MSignature */
val* VIRTUAL_typing__CallSite__msignature(val* self) {
val* var /* : MSignature */;
val* var1 /* : MSignature */;
val* var3 /* : MSignature */;
{ /* Inline typing#CallSite#msignature (self) on <self:Object(CallSite)> */
var3 = self->attrs[COLOR_typing__CallSite___msignature].val; /* _msignature on <self:Object(CallSite)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 429);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#erasure_cast for (self: CallSite): Bool */
short int typing__CallSite__erasure_cast(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_typing__CallSite___erasure_cast].s; /* _erasure_cast on <self:CallSite> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#erasure_cast for (self: Object): Bool */
short int VIRTUAL_typing__CallSite__erasure_cast(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline typing#CallSite#erasure_cast (self) on <self:Object(CallSite)> */
var3 = self->attrs[COLOR_typing__CallSite___erasure_cast].s; /* _erasure_cast on <self:Object(CallSite)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#check_signature for (self: CallSite, TypeVisitor, Array[AExpr]): Bool */
short int typing__CallSite__check_signature(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_v /* var v: TypeVisitor */;
val* var_args /* var args: Array[AExpr] */;
val* var1 /* : ANode */;
val* var3 /* : ANode */;
val* var4 /* : MMethod */;
val* var6 /* : MMethod */;
val* var7 /* : String */;
val* var9 /* : String */;
val* var10 /* : MSignature */;
val* var12 /* : MSignature */;
short int var13 /* : Bool */;
var_v = p0;
var_args = p1;
{
{ /* Inline typing#CallSite#node (self) on <self:CallSite> */
var3 = self->attrs[COLOR_typing__CallSite___node].val; /* _node on <self:CallSite> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 405);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline typing#CallSite#mproperty (self) on <self:CallSite> */
var6 = self->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <self:CallSite> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 422);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var4) on <var4:MMethod> */
var9 = var4->attrs[COLOR_model__MProperty___name].val; /* _name on <var4:MMethod> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline typing#CallSite#msignature (self) on <self:CallSite> */
var12 = self->attrs[COLOR_typing__CallSite___msignature].val; /* _msignature on <self:CallSite> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 429);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = typing__TypeVisitor__check_signature(var_v, var1, var_args, var7, var10);
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#CallSite#check_signature for (self: Object, TypeVisitor, Array[AExpr]): Bool */
short int VIRTUAL_typing__CallSite__check_signature(val* self, val* p0, val* p1) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = typing__CallSite__check_signature(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#init for (self: CallSite, ANode, MType, MModule, nullable MClassType, Bool, MMethod, MMethodDef, MSignature, Bool) */
void typing__CallSite__init(val* self, val* p0, val* p1, val* p2, val* p3, short int p4, val* p5, val* p6, val* p7, short int p8) {
self->attrs[COLOR_typing__CallSite___node].val = p0; /* _node on <self:CallSite> */
self->attrs[COLOR_typing__CallSite___recv].val = p1; /* _recv on <self:CallSite> */
self->attrs[COLOR_typing__CallSite___mmodule].val = p2; /* _mmodule on <self:CallSite> */
self->attrs[COLOR_typing__CallSite___anchor].val = p3; /* _anchor on <self:CallSite> */
self->attrs[COLOR_typing__CallSite___recv_is_self].s = p4; /* _recv_is_self on <self:CallSite> */
self->attrs[COLOR_typing__CallSite___mproperty].val = p5; /* _mproperty on <self:CallSite> */
self->attrs[COLOR_typing__CallSite___mpropdef].val = p6; /* _mpropdef on <self:CallSite> */
self->attrs[COLOR_typing__CallSite___msignature].val = p7; /* _msignature on <self:CallSite> */
self->attrs[COLOR_typing__CallSite___erasure_cast].s = p8; /* _erasure_cast on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#init for (self: Object, ANode, MType, MModule, nullable MClassType, Bool, MMethod, MMethodDef, MSignature, Bool) */
void VIRTUAL_typing__CallSite__init(val* self, val* p0, val* p1, val* p2, val* p3, short int p4, val* p5, val* p6, val* p7, short int p8) {
{ /* Inline typing#CallSite#init (self,p0,p1,p2,p3,p4,p5,p6,p7,p8) on <self:Object(CallSite)> */
self->attrs[COLOR_typing__CallSite___node].val = p0; /* _node on <self:Object(CallSite)> */
self->attrs[COLOR_typing__CallSite___recv].val = p1; /* _recv on <self:Object(CallSite)> */
self->attrs[COLOR_typing__CallSite___mmodule].val = p2; /* _mmodule on <self:Object(CallSite)> */
self->attrs[COLOR_typing__CallSite___anchor].val = p3; /* _anchor on <self:Object(CallSite)> */
self->attrs[COLOR_typing__CallSite___recv_is_self].s = p4; /* _recv_is_self on <self:Object(CallSite)> */
self->attrs[COLOR_typing__CallSite___mproperty].val = p5; /* _mproperty on <self:Object(CallSite)> */
self->attrs[COLOR_typing__CallSite___mpropdef].val = p6; /* _mpropdef on <self:Object(CallSite)> */
self->attrs[COLOR_typing__CallSite___msignature].val = p7; /* _msignature on <self:Object(CallSite)> */
self->attrs[COLOR_typing__CallSite___erasure_cast].s = p8; /* _erasure_cast on <self:Object(CallSite)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#Variable#declared_type for (self: Variable): nullable MType */
val* typing__Variable__declared_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <self:Variable> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#Variable#declared_type for (self: Object): nullable MType */
val* VIRTUAL_typing__Variable__declared_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
{ /* Inline typing#Variable#declared_type (self) on <self:Object(Variable)> */
var3 = self->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <self:Object(Variable)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#Variable#declared_type= for (self: Variable, nullable MType) */
void typing__Variable__declared_type_61d(val* self, val* p0) {
self->attrs[COLOR_typing__Variable___declared_type].val = p0; /* _declared_type on <self:Variable> */
RET_LABEL:;
}
/* method typing#Variable#declared_type= for (self: Object, nullable MType) */
void VIRTUAL_typing__Variable__declared_type_61d(val* self, val* p0) {
{ /* Inline typing#Variable#declared_type= (self,p0) on <self:Object(Variable)> */
self->attrs[COLOR_typing__Variable___declared_type].val = p0; /* _declared_type on <self:Object(Variable)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#FlowContext#vars for (self: FlowContext): HashMap[Variable, nullable MType] */
val* typing__FlowContext__vars(val* self) {
val* var /* : HashMap[Variable, nullable MType] */;
val* var1 /* : HashMap[Variable, nullable MType] */;
var1 = self->attrs[COLOR_typing__FlowContext___vars].val; /* _vars on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 447);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#FlowContext#vars for (self: Object): HashMap[Variable, nullable MType] */
val* VIRTUAL_typing__FlowContext__vars(val* self) {
val* var /* : HashMap[Variable, nullable MType] */;
val* var1 /* : HashMap[Variable, nullable MType] */;
val* var3 /* : HashMap[Variable, nullable MType] */;
{ /* Inline typing#FlowContext#vars (self) on <self:Object(FlowContext)> */
var3 = self->attrs[COLOR_typing__FlowContext___vars].val; /* _vars on <self:Object(FlowContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 447);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#FlowContext#cache for (self: FlowContext): HashMap[Variable, nullable Array[nullable MType]] */
val* typing__FlowContext__cache(val* self) {
val* var /* : HashMap[Variable, nullable Array[nullable MType]] */;
val* var1 /* : HashMap[Variable, nullable Array[nullable MType]] */;
var1 = self->attrs[COLOR_typing__FlowContext___cache].val; /* _cache on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 449);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#FlowContext#cache for (self: Object): HashMap[Variable, nullable Array[nullable MType]] */
val* VIRTUAL_typing__FlowContext__cache(val* self) {
val* var /* : HashMap[Variable, nullable Array[nullable MType]] */;
val* var1 /* : HashMap[Variable, nullable Array[nullable MType]] */;
val* var3 /* : HashMap[Variable, nullable Array[nullable MType]] */;
{ /* Inline typing#FlowContext#cache (self) on <self:Object(FlowContext)> */
var3 = self->attrs[COLOR_typing__FlowContext___cache].val; /* _cache on <self:Object(FlowContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 449);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#FlowContext#set_var for (self: FlowContext, Variable, nullable MType) */
void typing__FlowContext__set_var(val* self, val* p0, val* p1) {
val* var_variable /* var variable: Variable */;
val* var_mtype /* var mtype: nullable MType */;
val* var /* : HashMap[Variable, nullable MType] */;
val* var2 /* : HashMap[Variable, nullable MType] */;
val* var3 /* : HashMap[Variable, nullable Array[nullable MType]] */;
val* var5 /* : HashMap[Variable, nullable Array[nullable MType]] */;
val* var6 /* : RemovableCollection[Object] */;
val* var8 /* : RemovableCollection[Object] */;
var_variable = p0;
var_mtype = p1;
{
{ /* Inline typing#FlowContext#vars (self) on <self:FlowContext> */
var2 = self->attrs[COLOR_typing__FlowContext___vars].val; /* _vars on <self:FlowContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 447);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var, var_variable, var_mtype); /* Direct call hash_collection#HashMap#[]= on <var:HashMap[Variable, nullable MType]>*/
}
{
{ /* Inline typing#FlowContext#cache (self) on <self:FlowContext> */
var5 = self->attrs[COLOR_typing__FlowContext___cache].val; /* _cache on <self:FlowContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 449);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline hash_collection#HashMap#keys (var3) on <var3:HashMap[Variable, nullable Array[nullable MType]]> */
var8 = var3->attrs[COLOR_hash_collection__HashMap___keys].val; /* _keys on <var3:HashMap[Variable, nullable Array[nullable MType]]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/collection/hash_collection.nit", 245);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
((void (*)(val*, val*))(var6->class->vft[COLOR_abstract_collection__RemovableCollection__remove]))(var6, var_variable) /* remove on <var6:RemovableCollection[Object](RemovableCollection[Variable])>*/;
}
RET_LABEL:;
}
/* method typing#FlowContext#set_var for (self: Object, Variable, nullable MType) */
void VIRTUAL_typing__FlowContext__set_var(val* self, val* p0, val* p1) {
typing__FlowContext__set_var(self, p0, p1); /* Direct call typing#FlowContext#set_var on <self:Object(FlowContext)>*/
RET_LABEL:;
}
/* method typing#FlowContext#collect_types for (self: FlowContext, Variable): nullable Array[nullable MType] */
val* typing__FlowContext__collect_types(val* self, val* p0) {
val* var /* : nullable Array[nullable MType] */;
val* var_variable /* var variable: Variable */;
val* var1 /* : HashMap[Variable, nullable Array[nullable MType]] */;
val* var3 /* : HashMap[Variable, nullable Array[nullable MType]] */;
short int var4 /* : Bool */;
val* var5 /* : HashMap[Variable, nullable Array[nullable MType]] */;
val* var7 /* : HashMap[Variable, nullable Array[nullable MType]] */;
val* var8 /* : nullable Object */;
val* var9 /* : null */;
val* var_res /* var res: nullable Array[nullable MType] */;
val* var10 /* : HashMap[Variable, nullable MType] */;
val* var12 /* : HashMap[Variable, nullable MType] */;
short int var13 /* : Bool */;
val* var14 /* : HashMap[Variable, nullable MType] */;
val* var16 /* : HashMap[Variable, nullable MType] */;
val* var17 /* : nullable Object */;
val* var_mtype /* var mtype: nullable MType */;
val* var18 /* : Array[nullable MType] */;
long var19 /* : Int */;
val* var_ /* var : Array[nullable MType] */;
val* var20 /* : Array[FlowContext] */;
val* var22 /* : Array[FlowContext] */;
short int var23 /* : Bool */;
val* var24 /* : Array[nullable MType] */;
long var25 /* : Int */;
val* var_26 /* var : Array[nullable MType] */;
val* var27 /* : nullable MType */;
val* var29 /* : nullable MType */;
val* var30 /* : Array[FlowContext] */;
val* var32 /* : Array[FlowContext] */;
val* var33 /* : ArrayIterator[nullable Object] */;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
val* var_flow /* var flow: FlowContext */;
short int var36 /* : Bool */;
val* var37 /* : nullable Array[nullable MType] */;
val* var_r2 /* var r2: nullable Array[nullable MType] */;
val* var38 /* : null */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : null */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : Array[nullable Object] */;
val* var45 /* : ArrayIterator[nullable Object] */;
short int var46 /* : Bool */;
val* var47 /* : nullable Object */;
val* var_t /* var t: nullable MType */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var51 /* : HashMap[Variable, nullable Array[nullable MType]] */;
val* var53 /* : HashMap[Variable, nullable Array[nullable MType]] */;
var_variable = p0;
{
{ /* Inline typing#FlowContext#cache (self) on <self:FlowContext> */
var3 = self->attrs[COLOR_typing__FlowContext___cache].val; /* _cache on <self:FlowContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 449);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = abstract_collection__MapRead__has_key(var1, var_variable);
}
if (var4){
{
{ /* Inline typing#FlowContext#cache (self) on <self:FlowContext> */
var7 = self->attrs[COLOR_typing__FlowContext___cache].val; /* _cache on <self:FlowContext> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 449);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = hash_collection__HashMap___91d_93d(var5, var_variable);
}
var = var8;
goto RET_LABEL;
} else {
}
var9 = NULL;
var_res = var9;
{
{ /* Inline typing#FlowContext#vars (self) on <self:FlowContext> */
var12 = self->attrs[COLOR_typing__FlowContext___vars].val; /* _vars on <self:FlowContext> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 447);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = abstract_collection__MapRead__has_key(var10, var_variable);
}
if (var13){
{
{ /* Inline typing#FlowContext#vars (self) on <self:FlowContext> */
var16 = self->attrs[COLOR_typing__FlowContext___vars].val; /* _vars on <self:FlowContext> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 447);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = hash_collection__HashMap___91d_93d(var14, var_variable);
}
var_mtype = var17;
var18 = NEW_array__Array(&type_array__Arraynullable_model__MType);
var19 = 1;
{
array__Array__with_capacity(var18, var19); /* Direct call array#Array#with_capacity on <var18:Array[nullable MType]>*/
}
var_ = var18;
{
array__AbstractArray__push(var_, var_mtype); /* Direct call array#AbstractArray#push on <var_:Array[nullable MType]>*/
}
var_res = var_;
} else {
{
{ /* Inline flow#FlowContext#previous (self) on <self:FlowContext> */
var22 = self->attrs[COLOR_flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 192);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = array__AbstractArrayRead__is_empty(var20);
}
if (var23){
var24 = NEW_array__Array(&type_array__Arraynullable_model__MType);
var25 = 1;
{
array__Array__with_capacity(var24, var25); /* Direct call array#Array#with_capacity on <var24:Array[nullable MType]>*/
}
var_26 = var24;
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var29 = var_variable->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
array__AbstractArray__push(var_26, var27); /* Direct call array#AbstractArray#push on <var_26:Array[nullable MType]>*/
}
var_res = var_26;
} else {
{
{ /* Inline flow#FlowContext#previous (self) on <self:FlowContext> */
var32 = self->attrs[COLOR_flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 192);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = array__AbstractArrayRead__iterator(var30);
}
for(;;) {
{
var34 = array__ArrayIterator__is_ok(var33);
}
if(!var34) break;
{
var35 = array__ArrayIterator__item(var33);
}
var_flow = var35;
{
var36 = flow__FlowContext__is_unreachable(var_flow);
}
if (var36){
goto CONTINUE_label;
} else {
}
{
var37 = typing__FlowContext__collect_types(var_flow, var_variable);
}
var_r2 = var37;
var38 = NULL;
if (var_r2 == NULL) {
var39 = 1; /* is null */
} else {
var39 = 0; /* arg is null but recv is not */
}
if (0) {
var40 = abstract_collection__SequenceRead___61d_61d(var_r2, var38);
var39 = var40;
}
if (var39){
goto CONTINUE_label;
} else {
}
var41 = NULL;
if (var_res == NULL) {
var42 = 1; /* is null */
} else {
var42 = 0; /* arg is null but recv is not */
}
if (0) {
var43 = abstract_collection__SequenceRead___61d_61d(var_res, var41);
var42 = var43;
}
if (var42){
{
var44 = array__Collection__to_a(var_r2);
}
var_res = var44;
} else {
{
var45 = array__AbstractArrayRead__iterator(var_r2);
}
for(;;) {
{
var46 = array__ArrayIterator__is_ok(var45);
}
if(!var46) break;
{
var47 = array__ArrayIterator__item(var45);
}
var_t = var47;
{
var48 = array__AbstractArrayRead__has(var_res, var_t);
}
var49 = !var48;
if (var49){
{
array__Array__add(var_res, var_t); /* Direct call array#Array#add on <var_res:nullable Array[nullable MType](Array[nullable MType])>*/
}
} else {
}
CONTINUE_label50: (void)0;
{
array__ArrayIterator__next(var45); /* Direct call array#ArrayIterator#next on <var45:ArrayIterator[nullable Object]>*/
}
}
BREAK_label50: (void)0;
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var33); /* Direct call array#ArrayIterator#next on <var33:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
}
}
{
{ /* Inline typing#FlowContext#cache (self) on <self:FlowContext> */
var53 = self->attrs[COLOR_typing__FlowContext___cache].val; /* _cache on <self:FlowContext> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 449);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var51, var_variable, var_res); /* Direct call hash_collection#HashMap#[]= on <var51:HashMap[Variable, nullable Array[nullable MType]]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#FlowContext#collect_types for (self: Object, Variable): nullable Array[nullable MType] */
val* VIRTUAL_typing__FlowContext__collect_types(val* self, val* p0) {
val* var /* : nullable Array[nullable MType] */;
val* var1 /* : nullable Array[nullable MType] */;
var1 = typing__FlowContext__collect_types(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#APropdef#do_typing for (self: APropdef, ModelBuilder) */
void typing__APropdef__do_typing(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
var_modelbuilder = p0;
RET_LABEL:;
}
/* method typing#APropdef#do_typing for (self: Object, ModelBuilder) */
void VIRTUAL_typing__APropdef__do_typing(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
{ /* Inline typing#APropdef#do_typing (self,p0) on <self:Object(APropdef)> */
var_modelbuilder = p0;
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#APropdef#selfvariable= for (self: APropdef, nullable Variable) */
void typing__APropdef__selfvariable_61d(val* self, val* p0) {
self->attrs[COLOR_typing__APropdef___selfvariable].val = p0; /* _selfvariable on <self:APropdef> */
RET_LABEL:;
}
/* method typing#APropdef#selfvariable= for (self: Object, nullable Variable) */
void VIRTUAL_typing__APropdef__selfvariable_61d(val* self, val* p0) {
{ /* Inline typing#APropdef#selfvariable= (self,p0) on <self:Object(APropdef)> */
self->attrs[COLOR_typing__APropdef___selfvariable].val = p0; /* _selfvariable on <self:Object(APropdef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#AMethPropdef#do_typing for (self: AMethPropdef, ModelBuilder) */
void typing__AMethPropdef__do_typing(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable MPropDef */;
val* var10 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var11 /* : TypeVisitor */;
val* var12 /* : MClassDef */;
val* var14 /* : MClassDef */;
val* var15 /* : MModule */;
val* var17 /* : MModule */;
val* var_v /* var v: TypeVisitor */;
val* var18 /* : Variable */;
val* var20 /* : Variable */;
val* var22 /* : nullable MPropDef */;
val* var24 /* : nullable MPropDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var25 /* : Range[Int] */;
long var26 /* : Int */;
val* var27 /* : nullable MSignature */;
val* var29 /* : nullable MSignature */;
long var30 /* : Int */;
val* var31 /* : Discrete */;
val* var32 /* : Discrete */;
val* var33 /* : Iterator[Discrete] */;
short int var34 /* : Bool */;
val* var35 /* : nullable Object */;
long var_i /* var i: Int */;
long var36 /* : Int */;
val* var37 /* : nullable MSignature */;
val* var39 /* : nullable MSignature */;
val* var40 /* : Array[MParameter] */;
val* var42 /* : Array[MParameter] */;
val* var43 /* : nullable Object */;
val* var44 /* : MType */;
val* var46 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var47 /* : nullable MSignature */;
val* var49 /* : nullable MSignature */;
long var50 /* : Int */;
long var52 /* : Int */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : nullable ASignature */;
val* var58 /* : ANodes[AParam] */;
val* var60 /* : ANodes[AParam] */;
val* var61 /* : ANode */;
static val* varonce;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : FlatString */;
val* var66 /* : nullable MClass */;
val* var_arrayclass /* var arrayclass: nullable MClass */;
val* var67 /* : null */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
val* var74 /* : Array[MType] */;
long var75 /* : Int */;
val* var_ /* var : Array[MType] */;
val* var76 /* : MClassType */;
val* var77 /* : nullable ASignature */;
val* var78 /* : ANodes[AParam] */;
val* var80 /* : ANodes[AParam] */;
val* var81 /* : ANode */;
val* var82 /* : nullable Variable */;
val* var84 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var85 /* : null */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
val* var_other89 /* var other: nullable Object */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
val* var95 /* : nullable FlowContext */;
val* var97 /* : nullable FlowContext */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
short int var_100 /* var : Bool */;
val* var101 /* : nullable MSignature */;
val* var103 /* : nullable MSignature */;
val* var104 /* : nullable MType */;
val* var106 /* : nullable MType */;
val* var107 /* : null */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : FlatString */;
var_modelbuilder = p0;
{
var = parser_nodes__AMethPropdef__n_block(self);
}
var_nblock = var;
var1 = NULL;
if (var_nblock == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nblock,var1) on <var_nblock:nullable AExpr> */
var_other = var1;
{
{ /* Inline kernel#Object#is_same_instance (var_nblock,var_other) on <var_nblock:nullable AExpr(AExpr)> */
var7 = var_nblock == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var10 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 507);
show_backtrace(1);
}
var_mpropdef = var8;
var11 = NEW_typing__TypeVisitor(&type_typing__TypeVisitor);
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var14 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var12) on <var12:MClassDef> */
var17 = var12->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var12:MClassDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
typing__TypeVisitor__init(var11, var_modelbuilder, var15, var_mpropdef); /* Direct call typing#TypeVisitor#init on <var11:TypeVisitor>*/
}
var_v = var11;
{
{ /* Inline typing#TypeVisitor#selfvariable (var_v) on <var_v:TypeVisitor> */
var20 = var_v->attrs[COLOR_typing__TypeVisitor___selfvariable].val; /* _selfvariable on <var_v:TypeVisitor> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 52);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline typing#APropdef#selfvariable= (self,var18) on <self:AMethPropdef> */
self->attrs[COLOR_typing__APropdef___selfvariable].val = var18; /* _selfvariable on <self:AMethPropdef> */
RET_LABEL21:(void)0;
}
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var24 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 511);
show_backtrace(1);
}
var_mmethoddef = var22;
var25 = NEW_range__Range(&type_range__Rangekernel__Int);
var26 = 0;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var29 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (var27 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 512);
show_backtrace(1);
} else {
var30 = model__MSignature__arity(var27);
}
{
var31 = BOX_kernel__Int(var26); /* autobox from Int to Discrete */
var32 = BOX_kernel__Int(var30); /* autobox from Int to Discrete */
range__Range__without_last(var25, var31, var32); /* Direct call range#Range#without_last on <var25:Range[Int]>*/
}
{
var33 = range__Range__iterator(var25);
}
for(;;) {
{
var34 = ((short int (*)(val*))(var33->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var33) /* is_ok on <var33:Iterator[Discrete]>*/;
}
if(!var34) break;
{
var35 = ((val* (*)(val*))(var33->class->vft[COLOR_abstract_collection__Iterator__item]))(var33) /* item on <var33:Iterator[Discrete]>*/;
}
var36 = ((struct instance_kernel__Int*)var35)->value; /* autounbox from nullable Object to Int */;
var_i = var36;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var39 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (var37 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 513);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#mparameters (var37) on <var37:nullable MSignature> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var42 = var37->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var37:nullable MSignature> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = array__Array___91d_93d(var40, var_i);
}
{
{ /* Inline model#MParameter#mtype (var43) on <var43:nullable Object(MParameter)> */
var46 = var43->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var43:nullable Object(MParameter)> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
var_mtype = var44;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var49 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
if (var47 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 514);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#vararg_rank (var47) on <var47:nullable MSignature> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1497);
show_backtrace(1);
}
var52 = var47->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <var47:nullable MSignature> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var50,var_i) on <var50:Int> */
var56 = var50 == var_i;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (var53){
{
var57 = parser_nodes__AMethPropdef__n_signature(self);
}
if (var57 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 515);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var57) on <var57:nullable ASignature> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1360);
show_backtrace(1);
}
var60 = var57->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <var57:nullable ASignature> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1360);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = parser_nodes__ANodes___91d_93d(var58, var_i);
}
if (varonce) {
var62 = varonce;
} else {
var63 = "Array";
var64 = 5;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce = var62;
}
{
var66 = typing__TypeVisitor__get_mclass(var_v, var61, var62);
}
var_arrayclass = var66;
var67 = NULL;
if (var_arrayclass == NULL) {
var68 = 1; /* is null */
} else {
var68 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_arrayclass,var67) on <var_arrayclass:nullable MClass> */
var_other = var67;
{
{ /* Inline kernel#Object#is_same_instance (var_arrayclass,var_other) on <var_arrayclass:nullable MClass(MClass)> */
var73 = var_arrayclass == var_other;
var71 = var73;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
var68 = var69;
}
if (var68){
goto RET_LABEL;
} else {
}
var74 = NEW_array__Array(&type_array__Arraymodel__MType);
var75 = 1;
{
array__Array__with_capacity(var74, var75); /* Direct call array#Array#with_capacity on <var74:Array[MType]>*/
}
var_ = var74;
{
array__AbstractArray__push(var_, var_mtype); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
{
var76 = model__MClass__get_mtype(var_arrayclass, var_);
}
var_mtype = var76;
} else {
}
{
var77 = parser_nodes__AMethPropdef__n_signature(self);
}
if (var77 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 519);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var77) on <var77:nullable ASignature> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1360);
show_backtrace(1);
}
var80 = var77->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <var77:nullable ASignature> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1360);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var81 = parser_nodes__ANodes___91d_93d(var78, var_i);
}
{
{ /* Inline scope#AParam#variable (var81) on <var81:ANode(AParam)> */
var84 = var81->attrs[COLOR_scope__AParam___variable].val; /* _variable on <var81:ANode(AParam)> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
var_variable = var82;
var85 = NULL;
if (var_variable == NULL) {
var86 = 0; /* is null */
} else {
var86 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_variable,var85) on <var_variable:nullable Variable> */
var_other89 = var85;
{
var91 = ((short int (*)(val*, val*))(var_variable->class->vft[COLOR_kernel__Object___61d_61d]))(var_variable, var_other89) /* == on <var_variable:nullable Variable(Variable)>*/;
var90 = var91;
}
var92 = !var90;
var87 = var92;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
var86 = var87;
}
if (unlikely(!var86)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 520);
show_backtrace(1);
}
{
{ /* Inline typing#Variable#declared_type= (var_variable,var_mtype) on <var_variable:nullable Variable(Variable)> */
var_variable->attrs[COLOR_typing__Variable___declared_type].val = var_mtype; /* _declared_type on <var_variable:nullable Variable(Variable)> */
RET_LABEL93:(void)0;
}
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var33->class->vft[COLOR_abstract_collection__Iterator__next]))(var33) /* next on <var33:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
{
typing__TypeVisitor__visit_stmt(var_v, var_nblock); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline flow#AExpr#after_flow_context (var_nblock) on <var_nblock:nullable AExpr(AExpr)> */
var97 = var_nblock->attrs[COLOR_flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_nblock:nullable AExpr(AExpr)> */
var95 = var97;
RET_LABEL96:(void)0;
}
}
if (var95 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 525);
show_backtrace(1);
} else {
var98 = flow__FlowContext__is_unreachable(var95);
}
var99 = !var98;
var_100 = var99;
if (var99){
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var103 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var101 = var103;
RET_LABEL102:(void)0;
}
}
if (var101 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 525);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var101) on <var101:nullable MSignature> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1455);
show_backtrace(1);
}
var106 = var101->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var101:nullable MSignature> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
var107 = NULL;
if (var104 == NULL) {
var108 = 0; /* is null */
} else {
var108 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var104,var107) on <var104:nullable MType> */
var_other89 = var107;
{
var112 = ((short int (*)(val*, val*))(var104->class->vft[COLOR_kernel__Object___61d_61d]))(var104, var_other89) /* == on <var104:nullable MType(MType)>*/;
var111 = var112;
}
var113 = !var111;
var109 = var113;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
var108 = var109;
}
var94 = var108;
} else {
var94 = var_100;
}
if (var94){
if (varonce114) {
var115 = varonce114;
} else {
var116 = "Control error: Reached end of function (a \'return\' with a value was expected).";
var117 = 78;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
{
typing__TypeVisitor__error(var_v, self, var115); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method typing#AMethPropdef#do_typing for (self: Object, ModelBuilder) */
void VIRTUAL_typing__AMethPropdef__do_typing(val* self, val* p0) {
typing__AMethPropdef__do_typing(self, p0); /* Direct call typing#AMethPropdef#do_typing on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method typing#AAttrPropdef#do_typing for (self: AAttrPropdef, ModelBuilder) */
void typing__AAttrPropdef__do_typing(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
val* var3 /* : TypeVisitor */;
val* var4 /* : MClassDef */;
val* var6 /* : MClassDef */;
val* var7 /* : MModule */;
val* var9 /* : MModule */;
val* var_v /* var v: TypeVisitor */;
val* var10 /* : Variable */;
val* var12 /* : Variable */;
val* var14 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var15 /* : null */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : nullable MPropDef */;
val* var24 /* : nullable MPropDef */;
val* var25 /* : nullable MType */;
val* var27 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var28 /* : nullable MType */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 535);
show_backtrace(1);
}
var_mpropdef = var;
var3 = NEW_typing__TypeVisitor(&type_typing__TypeVisitor);
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MAttributeDef> */
var6 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MAttributeDef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var4) on <var4:MClassDef> */
var9 = var4->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var4:MClassDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
typing__TypeVisitor__init(var3, var_modelbuilder, var7, var_mpropdef); /* Direct call typing#TypeVisitor#init on <var3:TypeVisitor>*/
}
var_v = var3;
{
{ /* Inline typing#TypeVisitor#selfvariable (var_v) on <var_v:TypeVisitor> */
var12 = var_v->attrs[COLOR_typing__TypeVisitor___selfvariable].val; /* _selfvariable on <var_v:TypeVisitor> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 52);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline typing#APropdef#selfvariable= (self,var10) on <self:AAttrPropdef> */
self->attrs[COLOR_typing__APropdef___selfvariable].val = var10; /* _selfvariable on <self:AAttrPropdef> */
RET_LABEL13:(void)0;
}
}
{
var14 = parser_nodes__AAttrPropdef__n_expr(self);
}
var_nexpr = var14;
var15 = NULL;
if (var_nexpr == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,var15) on <var_nexpr:nullable AExpr> */
var_other = var15;
{
var20 = ((short int (*)(val*, val*))(var_nexpr->class->vft[COLOR_kernel__Object___61d_61d]))(var_nexpr, var_other) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
var19 = var20;
}
var21 = !var19;
var17 = var21;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (var16){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var24 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var22 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 541);
show_backtrace(1);
} else {
{ /* Inline model#MAttributeDef#static_mtype (var22) on <var22:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1963);
show_backtrace(1);
}
var27 = var22->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var22:nullable MPropDef(nullable MAttributeDef)> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_mtype = var25;
{
var28 = typing__TypeVisitor__visit_expr_subtype(var_v, var_nexpr, var_mtype);
}
var28;
} else {
}
RET_LABEL:;
}
/* method typing#AAttrPropdef#do_typing for (self: Object, ModelBuilder) */
void VIRTUAL_typing__AAttrPropdef__do_typing(val* self, val* p0) {
typing__AAttrPropdef__do_typing(self, p0); /* Direct call typing#AAttrPropdef#do_typing on <self:Object(AAttrPropdef)>*/
RET_LABEL:;
}
/* method typing#AExpr#mtype for (self: AExpr): nullable MType */
val* typing__AExpr__mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#mtype for (self: Object): nullable MType */
val* VIRTUAL_typing__AExpr__mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
{ /* Inline typing#AExpr#mtype (self) on <self:Object(AExpr)> */
var3 = self->attrs[COLOR_typing__AExpr___mtype].val; /* _mtype on <self:Object(AExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#mtype= for (self: AExpr, nullable MType) */
void typing__AExpr__mtype_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AExpr___mtype].val = p0; /* _mtype on <self:AExpr> */
RET_LABEL:;
}
/* method typing#AExpr#mtype= for (self: Object, nullable MType) */
void VIRTUAL_typing__AExpr__mtype_61d(val* self, val* p0) {
{ /* Inline typing#AExpr#mtype= (self,p0) on <self:Object(AExpr)> */
self->attrs[COLOR_typing__AExpr___mtype].val = p0; /* _mtype on <self:Object(AExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#AExpr#is_typed for (self: AExpr): Bool */
short int typing__AExpr__is_typed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_typing__AExpr___is_typed].s; /* _is_typed on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#is_typed for (self: Object): Bool */
short int VIRTUAL_typing__AExpr__is_typed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline typing#AExpr#is_typed (self) on <self:Object(AExpr)> */
var3 = self->attrs[COLOR_typing__AExpr___is_typed].s; /* _is_typed on <self:Object(AExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#is_typed= for (self: AExpr, Bool) */
void typing__AExpr__is_typed_61d(val* self, short int p0) {
self->attrs[COLOR_typing__AExpr___is_typed].s = p0; /* _is_typed on <self:AExpr> */
RET_LABEL:;
}
/* method typing#AExpr#is_typed= for (self: Object, Bool) */
void VIRTUAL_typing__AExpr__is_typed_61d(val* self, short int p0) {
{ /* Inline typing#AExpr#is_typed= (self,p0) on <self:Object(AExpr)> */
self->attrs[COLOR_typing__AExpr___is_typed].s = p0; /* _is_typed on <self:Object(AExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#AExpr#implicit_cast_to for (self: AExpr): nullable MType */
val* typing__AExpr__implicit_cast_to(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_typing__AExpr___implicit_cast_to].val; /* _implicit_cast_to on <self:AExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#implicit_cast_to for (self: Object): nullable MType */
val* VIRTUAL_typing__AExpr__implicit_cast_to(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
{ /* Inline typing#AExpr#implicit_cast_to (self) on <self:Object(AExpr)> */
var3 = self->attrs[COLOR_typing__AExpr___implicit_cast_to].val; /* _implicit_cast_to on <self:Object(AExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#implicit_cast_to= for (self: AExpr, nullable MType) */
void typing__AExpr__implicit_cast_to_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = p0; /* _implicit_cast_to on <self:AExpr> */
RET_LABEL:;
}
/* method typing#AExpr#implicit_cast_to= for (self: Object, nullable MType) */
void VIRTUAL_typing__AExpr__implicit_cast_to_61d(val* self, val* p0) {
{ /* Inline typing#AExpr#implicit_cast_to= (self,p0) on <self:Object(AExpr)> */
self->attrs[COLOR_typing__AExpr___implicit_cast_to].val = p0; /* _implicit_cast_to on <self:Object(AExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#AExpr#its_variable for (self: AExpr): nullable Variable */
val* typing__AExpr__its_variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : null */;
var1 = NULL;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AExpr#its_variable for (self: Object): nullable Variable */
val* VIRTUAL_typing__AExpr__its_variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = typing__AExpr__its_variable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExpr#accept_typing for (self: AExpr, TypeVisitor) */
void typing__AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : String */;
val* var5 /* : Array[Object] */;
long var6 /* : Int */;
val* var7 /* : NativeArray[Object] */;
val* var8 /* : String */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "no implemented accept_typing for ";
var2 = 33;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = string__Object__class_name(self);
}
var5 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var5 = array_instance Array[Object] */
var6 = 2;
var7 = NEW_array__NativeArray(var6, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var7)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var7)->values[1] = (val*) var4;
{
((void (*)(val*, val*, long))(var5->class->vft[COLOR_array__Array__with_native]))(var5, var7, var6) /* with_native on <var5:Array[Object]>*/;
}
}
{
var8 = ((val* (*)(val*))(var5->class->vft[COLOR_string__Object__to_s]))(var5) /* to_s on <var5:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var8); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
RET_LABEL:;
}
/* method typing#AExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AExpr__accept_typing(val* self, val* p0) {
typing__AExpr__accept_typing(self, p0); /* Direct call typing#AExpr#accept_typing on <self:Object(AExpr)>*/
RET_LABEL:;
}
/* method typing#ABlockExpr#accept_typing for (self: ABlockExpr, TypeVisitor) */
void typing__ABlockExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : ANodes[AExpr] */;
val* var2 /* : ANodes[AExpr] */;
val* var3 /* : Iterator[ANode] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_e /* var e: AExpr */;
short int var6 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1424);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = parser_nodes__ANodes__iterator(var);
}
for(;;) {
{
var4 = ((short int (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var3) /* is_ok on <var3:Iterator[ANode]>*/;
}
if(!var4) break;
{
var5 = ((val* (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__item]))(var3) /* item on <var3:Iterator[ANode]>*/;
}
var_e = var5;
{
typing__TypeVisitor__visit_stmt(var_v, var_e); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var3->class->vft[COLOR_abstract_collection__Iterator__next]))(var3) /* next on <var3:Iterator[ANode]>*/;
}
}
BREAK_label: (void)0;
var6 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var6) on <self:ABlockExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var6; /* _is_typed on <self:ABlockExpr> */
RET_LABEL7:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ABlockExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ABlockExpr__accept_typing(val* self, val* p0) {
typing__ABlockExpr__accept_typing(self, p0); /* Direct call typing#ABlockExpr#accept_typing on <self:Object(ABlockExpr)>*/
RET_LABEL:;
}
/* method typing#ABlockExpr#mtype for (self: ABlockExpr): nullable MType */
val* typing__ABlockExpr__mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
short int var4 /* : Bool */;
val* var5 /* : null */;
val* var6 /* : ANodes[AExpr] */;
val* var8 /* : ANodes[AExpr] */;
val* var9 /* : nullable Object */;
val* var10 /* : nullable MType */;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var3 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1424);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = parser_nodes__ANodes__is_empty(var1);
}
if (var4){
var5 = NULL;
var = var5;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var8 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1424);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = abstract_collection__SequenceRead__last(var6);
}
{
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_typing__AExpr__mtype]))(var9) /* mtype on <var9:nullable Object(AExpr)>*/;
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABlockExpr#mtype for (self: Object): nullable MType */
val* VIRTUAL_typing__ABlockExpr__mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__ABlockExpr__mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AVardeclExpr#accept_typing for (self: AVardeclExpr, TypeVisitor) */
void typing__AVardeclExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : null */;
val* var_mtype /* var mtype: nullable MType */;
val* var19 /* : nullable MType */;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var28 /* : null */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var_other32 /* var other: nullable Object */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : null */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : nullable MType */;
val* var44 /* : nullable MType */;
val* var45 /* : null */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
val* var_decltype /* var decltype: nullable MType */;
short int var52 /* : Bool */;
val* var53 /* : null */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var_ /* var : Bool */;
short int var60 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
val* var65 /* : nullable MClass */;
val* var66 /* : MClassType */;
val* var68 /* : MClassType */;
val* var69 /* : MType */;
val* var70 /* : null */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
var_v = p0;
{
{ /* Inline scope#AVardeclExpr#variable (self) on <self:AVardeclExpr> */
var2 = self->attrs[COLOR_scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_variable = var;
var3 = NULL;
if (var_variable == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_variable,var3) on <var_variable:nullable Variable> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_variable,var_other) on <var_variable:nullable Variable(Variable)> */
var9 = var_variable == var_other;
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
goto RET_LABEL;
} else {
}
{
var10 = parser_nodes__AVardeclExpr__n_type(self);
}
var_ntype = var10;
var11 = NULL;
if (var_ntype == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ntype,var11) on <var_ntype:nullable AType> */
var_other = var11;
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
var18 = NULL;
var_mtype = var18;
} else {
{
var19 = typing__TypeVisitor__resolve_mtype(var_v, var_ntype);
}
var_mtype = var19;
var20 = NULL;
if (var_mtype == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var20) on <var_mtype:nullable MType> */
var_other = var20;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var26 = var_mtype == var_other;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
goto RET_LABEL;
} else {
}
}
{
var27 = parser_nodes__AVardeclExpr__n_expr(self);
}
var_nexpr = var27;
var28 = NULL;
if (var_nexpr == NULL) {
var29 = 0; /* is null */
} else {
var29 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,var28) on <var_nexpr:nullable AExpr> */
var_other32 = var28;
{
var34 = ((short int (*)(val*, val*))(var_nexpr->class->vft[COLOR_kernel__Object___61d_61d]))(var_nexpr, var_other32) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
var33 = var34;
}
var35 = !var33;
var30 = var35;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
if (var29){
var36 = NULL;
if (var_mtype == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,var36) on <var_mtype:nullable MType> */
var_other32 = var36;
{
var41 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_mtype, var_other32) /* == on <var_mtype:nullable MType(MType)>*/;
var40 = var41;
}
var42 = !var40;
var38 = var42;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
if (var37){
{
var43 = typing__TypeVisitor__visit_expr_subtype(var_v, var_nexpr, var_mtype);
}
var43;
} else {
{
var44 = typing__TypeVisitor__visit_expr(var_v, var_nexpr);
}
var_mtype = var44;
var45 = NULL;
if (var_mtype == NULL) {
var46 = 1; /* is null */
} else {
var46 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var45) on <var_mtype:nullable MType> */
var_other = var45;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var51 = var_mtype == var_other;
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
goto RET_LABEL;
} else {
}
}
} else {
}
var_decltype = var_mtype;
var53 = NULL;
if (var_mtype == NULL) {
var54 = 1; /* is null */
} else {
var54 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var53) on <var_mtype:nullable MType> */
var_other = var53;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var59 = var_mtype == var_other;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
var_ = var54;
if (var54){
var52 = var_;
} else {
/* <var_mtype:nullable MType(MType)> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var60 = 0;
} else {
var60 = var_mtype->type->type_table[cltype] == idtype;
}
var52 = var60;
}
if (var52){
if (varonce) {
var61 = varonce;
} else {
var62 = "Object";
var63 = 6;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce = var61;
}
{
var65 = typing__TypeVisitor__get_mclass(var_v, self, var61);
}
if (var65 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 616);
show_backtrace(1);
} else {
{ /* Inline model#MClass#mclass_type (var65) on <var65:nullable MClass> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var68 = var65->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var65:nullable MClass> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = model__MType__as_nullable(var66);
}
var_decltype = var69;
var70 = NULL;
if (var_mtype == NULL) {
var71 = 1; /* is null */
} else {
var71 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var70) on <var_mtype:nullable MType(nullable MNullType)> */
var_other = var70;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MNullType(MNullType)> */
var76 = var_mtype == var_other;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
var71 = var72;
}
if (var71){
var_mtype = var_decltype;
} else {
}
} else {
}
{
{ /* Inline typing#Variable#declared_type= (var_variable,var_decltype) on <var_variable:nullable Variable(Variable)> */
var_variable->attrs[COLOR_typing__Variable___declared_type].val = var_decltype; /* _declared_type on <var_variable:nullable Variable(Variable)> */
RET_LABEL77:(void)0;
}
}
{
typing__TypeVisitor__set_variable(var_v, self, var_variable, var_mtype); /* Direct call typing#TypeVisitor#set_variable on <var_v:TypeVisitor>*/
}
var78 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var78) on <self:AVardeclExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var78; /* _is_typed on <self:AVardeclExpr> */
RET_LABEL79:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AVardeclExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AVardeclExpr__accept_typing(val* self, val* p0) {
typing__AVardeclExpr__accept_typing(self, p0); /* Direct call typing#AVardeclExpr#accept_typing on <self:Object(AVardeclExpr)>*/
RET_LABEL:;
}
/* method typing#AVarExpr#its_variable for (self: AVarExpr): nullable Variable */
val* typing__AVarExpr__its_variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
val* var3 /* : nullable Variable */;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarExpr> */
var3 = self->attrs[COLOR_scope__AVarFormExpr___variable].val; /* _variable on <self:AVarExpr> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AVarExpr#its_variable for (self: Object): nullable Variable */
val* VIRTUAL_typing__AVarExpr__its_variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = typing__AVarExpr__its_variable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AVarExpr#accept_typing for (self: AVarExpr, TypeVisitor) */
void typing__AVarExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other15 /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
var_v = p0;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarExpr> */
var2 = self->attrs[COLOR_scope__AVarFormExpr___variable].val; /* _variable on <self:AVarExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_variable = var;
var3 = NULL;
if (var_variable == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_variable,var3) on <var_variable:nullable Variable> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_variable,var_other) on <var_variable:nullable Variable(Variable)> */
var9 = var_variable == var_other;
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
goto RET_LABEL;
} else {
}
{
var10 = typing__TypeVisitor__get_variable(var_v, self, var_variable);
}
var_mtype = var10;
var11 = NULL;
if (var_mtype == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,var11) on <var_mtype:nullable MType> */
var_other15 = var11;
{
var17 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_mtype, var_other15) /* == on <var_mtype:nullable MType(MType)>*/;
var16 = var17;
}
var18 = !var16;
var13 = var18;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
} else {
}
{
{ /* Inline typing#AExpr#mtype= (self,var_mtype) on <self:AVarExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:AVarExpr> */
RET_LABEL19:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AVarExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AVarExpr__accept_typing(val* self, val* p0) {
typing__AVarExpr__accept_typing(self, p0); /* Direct call typing#AVarExpr#accept_typing on <self:Object(AVarExpr)>*/
RET_LABEL:;
}
/* method typing#AVarAssignExpr#accept_typing for (self: AVarAssignExpr, TypeVisitor) */
void typing__AVarAssignExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : AExpr */;
val* var11 /* : nullable MType */;
val* var13 /* : nullable MType */;
val* var14 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var15 /* : Bool */;
var_v = p0;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarAssignExpr> */
var2 = self->attrs[COLOR_scope__AVarFormExpr___variable].val; /* _variable on <self:AVarAssignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_variable = var;
var3 = NULL;
if (var_variable == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_variable,var3) on <var_variable:nullable Variable> */
var_other = var3;
{
var8 = ((short int (*)(val*, val*))(var_variable->class->vft[COLOR_kernel__Object___61d_61d]))(var_variable, var_other) /* == on <var_variable:nullable Variable(Variable)>*/;
var7 = var8;
}
var9 = !var7;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 651);
show_backtrace(1);
}
{
var10 = parser_nodes__AAssignFormExpr__n_value(self);
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:nullable Variable(Variable)> */
var13 = var_variable->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <var_variable:nullable Variable(Variable)> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = typing__TypeVisitor__visit_expr_subtype(var_v, var10, var11);
}
var_mtype = var14;
{
typing__TypeVisitor__set_variable(var_v, self, var_variable, var_mtype); /* Direct call typing#TypeVisitor#set_variable on <var_v:TypeVisitor>*/
}
var15 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var15) on <self:AVarAssignExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var15; /* _is_typed on <self:AVarAssignExpr> */
RET_LABEL16:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AVarAssignExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AVarAssignExpr__accept_typing(val* self, val* p0) {
typing__AVarAssignExpr__accept_typing(self, p0); /* Direct call typing#AVarAssignExpr#accept_typing on <self:Object(AVarAssignExpr)>*/
RET_LABEL:;
}
/* method typing#AReassignFormExpr#reassign_callsite for (self: AReassignFormExpr): nullable CallSite */
val* typing__AReassignFormExpr__reassign_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AReassignFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AReassignFormExpr#reassign_callsite for (self: Object): nullable CallSite */
val* VIRTUAL_typing__AReassignFormExpr__reassign_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
val* var3 /* : nullable CallSite */;
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:Object(AReassignFormExpr)> */
var3 = self->attrs[COLOR_typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:Object(AReassignFormExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AReassignFormExpr#reassign_callsite= for (self: AReassignFormExpr, nullable CallSite) */
void typing__AReassignFormExpr__reassign_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AReassignFormExpr___reassign_callsite].val = p0; /* _reassign_callsite on <self:AReassignFormExpr> */
RET_LABEL:;
}
/* method typing#AReassignFormExpr#reassign_callsite= for (self: Object, nullable CallSite) */
void VIRTUAL_typing__AReassignFormExpr__reassign_callsite_61d(val* self, val* p0) {
{ /* Inline typing#AReassignFormExpr#reassign_callsite= (self,p0) on <self:Object(AReassignFormExpr)> */
self->attrs[COLOR_typing__AReassignFormExpr___reassign_callsite].val = p0; /* _reassign_callsite on <self:Object(AReassignFormExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#AReassignFormExpr#read_type for (self: AReassignFormExpr): nullable MType */
val* typing__AReassignFormExpr__read_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_typing__AReassignFormExpr___read_type].val; /* _read_type on <self:AReassignFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AReassignFormExpr#read_type for (self: Object): nullable MType */
val* VIRTUAL_typing__AReassignFormExpr__read_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
{ /* Inline typing#AReassignFormExpr#read_type (self) on <self:Object(AReassignFormExpr)> */
var3 = self->attrs[COLOR_typing__AReassignFormExpr___read_type].val; /* _read_type on <self:Object(AReassignFormExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AReassignFormExpr#read_type= for (self: AReassignFormExpr, nullable MType) */
void typing__AReassignFormExpr__read_type_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AReassignFormExpr___read_type].val = p0; /* _read_type on <self:AReassignFormExpr> */
RET_LABEL:;
}
/* method typing#AReassignFormExpr#read_type= for (self: Object, nullable MType) */
void VIRTUAL_typing__AReassignFormExpr__read_type_61d(val* self, val* p0) {
{ /* Inline typing#AReassignFormExpr#read_type= (self,p0) on <self:Object(AReassignFormExpr)> */
self->attrs[COLOR_typing__AReassignFormExpr___read_type].val = p0; /* _read_type on <self:Object(AReassignFormExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#AReassignFormExpr#resolve_reassignment for (self: AReassignFormExpr, TypeVisitor, MType, MType): nullable MType */
val* typing__AReassignFormExpr__resolve_reassignment(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var_v /* var v: TypeVisitor */;
val* var_readtype /* var readtype: MType */;
val* var_writetype /* var writetype: MType */;
val* var1 /* : AAssignOp */;
short int var2 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : FlatString */;
val* var_reassign_name /* var reassign_name: String */;
val* var7 /* : AAssignOp */;
short int var8 /* : Bool */;
int cltype9;
int idtype10;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : FlatString */;
val* var30 /* : Array[Object] */;
long var31 /* : Int */;
val* var32 /* : NativeArray[Object] */;
val* var33 /* : String */;
val* var34 /* : null */;
short int var35 /* : Bool */;
val* var36 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var37 /* : null */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : null */;
val* var46 /* : MSignature */;
val* var48 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var49 /* : nullable MType */;
val* var51 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var52 /* : Bool */;
long var53 /* : Int */;
long var54 /* : Int */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
short int var_ /* var : Bool */;
val* var59 /* : null */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var_other63 /* var other: nullable Object */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
val* var67 /* : AExpr */;
val* var68 /* : Array[MParameter] */;
val* var70 /* : Array[MParameter] */;
val* var71 /* : nullable Object */;
val* var72 /* : MType */;
val* var74 /* : MType */;
val* var75 /* : nullable MType */;
val* var_value_type /* var value_type: nullable MType */;
val* var76 /* : null */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
val* var83 /* : null */;
val* var84 /* : nullable MType */;
var_v = p0;
var_readtype = p1;
var_writetype = p2;
{
var1 = parser_nodes__AReassignFormExpr__n_assign_op(self);
}
/* <var1:AAssignOp> isa APlusAssignOp */
cltype = type_parser_nodes__APlusAssignOp.color;
idtype = type_parser_nodes__APlusAssignOp.id;
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
if (var2){
if (varonce) {
var3 = varonce;
} else {
var4 = "+";
var5 = 1;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var_reassign_name = var3;
} else {
{
var7 = parser_nodes__AReassignFormExpr__n_assign_op(self);
}
/* <var7:AAssignOp> isa AMinusAssignOp */
cltype9 = type_parser_nodes__AMinusAssignOp.color;
idtype10 = type_parser_nodes__AMinusAssignOp.id;
if(cltype9 >= var7->type->table_size) {
var8 = 0;
} else {
var8 = var7->type->type_table[cltype9] == idtype10;
}
if (var8){
if (varonce11) {
var12 = varonce11;
} else {
var13 = "-";
var14 = 1;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var_reassign_name = var12;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 680);
show_backtrace(1);
}
}
{
{ /* Inline typing#AReassignFormExpr#read_type= (self,var_readtype) on <self:AReassignFormExpr> */
self->attrs[COLOR_typing__AReassignFormExpr___read_type].val = var_readtype; /* _read_type on <self:AReassignFormExpr> */
RET_LABEL16:(void)0;
}
}
/* <var_readtype:MType> isa MNullType */
cltype18 = type_model__MNullType.color;
idtype19 = type_model__MNullType.id;
if(cltype18 >= var_readtype->type->table_size) {
var17 = 0;
} else {
var17 = var_readtype->type->type_table[cltype18] == idtype19;
}
if (var17){
if (varonce20) {
var21 = varonce20;
} else {
var22 = "Error: Method \'";
var23 = 15;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
if (varonce25) {
var26 = varonce25;
} else {
var27 = "\' call on \'null\'.";
var28 = 17;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
var30 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var30 = array_instance Array[Object] */
var31 = 3;
var32 = NEW_array__NativeArray(var31, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var32)->values[0] = (val*) var21;
((struct instance_array__NativeArray*)var32)->values[1] = (val*) var_reassign_name;
((struct instance_array__NativeArray*)var32)->values[2] = (val*) var26;
{
((void (*)(val*, val*, long))(var30->class->vft[COLOR_array__Array__with_native]))(var30, var32, var31) /* with_native on <var30:Array[Object]>*/;
}
}
{
var33 = ((val* (*)(val*))(var30->class->vft[COLOR_string__Object__to_s]))(var30) /* to_s on <var30:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var33); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
var34 = NULL;
var = var34;
goto RET_LABEL;
} else {
}
var35 = 0;
{
var36 = typing__TypeVisitor__get_method(var_v, self, var_readtype, var_reassign_name, var35);
}
var_callsite = var36;
var37 = NULL;
if (var_callsite == NULL) {
var38 = 1; /* is null */
} else {
var38 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,var37) on <var_callsite:nullable CallSite> */
var_other = var37;
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var43 = var_callsite == var_other;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
var44 = NULL;
var = var44;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite= (self,var_callsite) on <self:AReassignFormExpr> */
self->attrs[COLOR_typing__AReassignFormExpr___reassign_callsite].val = var_callsite; /* _reassign_callsite on <self:AReassignFormExpr> */
RET_LABEL45:(void)0;
}
}
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var48 = var_callsite->attrs[COLOR_typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 429);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
var_msignature = var46;
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var51 = var_msignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_rettype = var49;
{
var53 = model__MSignature__arity(var_msignature);
}
var54 = 1;
{
{ /* Inline kernel#Int#== (var53,var54) on <var53:Int> */
var58 = var53 == var54;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var55 = var56;
}
var_ = var55;
if (var55){
var59 = NULL;
if (var_rettype == NULL) {
var60 = 0; /* is null */
} else {
var60 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rettype,var59) on <var_rettype:nullable MType> */
var_other63 = var59;
{
var65 = ((short int (*)(val*, val*))(var_rettype->class->vft[COLOR_kernel__Object___61d_61d]))(var_rettype, var_other63) /* == on <var_rettype:nullable MType(MType)>*/;
var64 = var65;
}
var66 = !var64;
var61 = var66;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
var60 = var61;
}
var52 = var60;
} else {
var52 = var_;
}
if (unlikely(!var52)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 696);
show_backtrace(1);
}
{
var67 = parser_nodes__AReassignFormExpr__n_value(self);
}
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var70 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
var71 = abstract_collection__SequenceRead__first(var68);
}
{
{ /* Inline model#MParameter#mtype (var71) on <var71:nullable Object(MParameter)> */
var74 = var71->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var71:nullable Object(MParameter)> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
var75 = typing__TypeVisitor__visit_expr_subtype(var_v, var67, var72);
}
var_value_type = var75;
var76 = NULL;
if (var_value_type == NULL) {
var77 = 1; /* is null */
} else {
var77 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_value_type,var76) on <var_value_type:nullable MType> */
var_other = var76;
{
{ /* Inline kernel#Object#is_same_instance (var_value_type,var_other) on <var_value_type:nullable MType(MType)> */
var82 = var_value_type == var_other;
var80 = var82;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
var77 = var78;
}
if (var77){
var83 = NULL;
var = var83;
goto RET_LABEL;
} else {
}
{
var84 = typing__TypeVisitor__check_subtype(var_v, self, var_rettype, var_writetype);
}
var84;
var = var_rettype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AReassignFormExpr#resolve_reassignment for (self: Object, TypeVisitor, MType, MType): nullable MType */
val* VIRTUAL_typing__AReassignFormExpr__resolve_reassignment(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__AReassignFormExpr__resolve_reassignment(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AVarReassignExpr#accept_typing for (self: AVarReassignExpr, TypeVisitor) */
void typing__AVarReassignExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable Variable */;
val* var2 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable MType */;
val* var_readtype /* var readtype: nullable MType */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other15 /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
val* var20 /* : nullable MType */;
val* var22 /* : nullable MType */;
val* var_writetype /* var writetype: nullable MType */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var31 /* : Bool */;
var_v = p0;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarReassignExpr> */
var2 = self->attrs[COLOR_scope__AVarFormExpr___variable].val; /* _variable on <self:AVarReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_variable = var;
var3 = NULL;
if (var_variable == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_variable,var3) on <var_variable:nullable Variable> */
var_other = var3;
{
var8 = ((short int (*)(val*, val*))(var_variable->class->vft[COLOR_kernel__Object___61d_61d]))(var_variable, var_other) /* == on <var_variable:nullable Variable(Variable)>*/;
var7 = var8;
}
var9 = !var7;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 710);
show_backtrace(1);
}
{
var10 = typing__TypeVisitor__get_variable(var_v, self, var_variable);
}
var_readtype = var10;
var11 = NULL;
if (var_readtype == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_readtype,var11) on <var_readtype:nullable MType> */
var_other15 = var11;
{
{ /* Inline kernel#Object#is_same_instance (var_readtype,var_other15) on <var_readtype:nullable MType(MType)> */
var18 = var_readtype == var_other15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AReassignFormExpr#read_type= (self,var_readtype) on <self:AVarReassignExpr> */
self->attrs[COLOR_typing__AReassignFormExpr___read_type].val = var_readtype; /* _read_type on <self:AVarReassignExpr> */
RET_LABEL19:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:nullable Variable(Variable)> */
var22 = var_variable->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <var_variable:nullable Variable(Variable)> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_writetype = var20;
var23 = NULL;
if (var_writetype == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_writetype,var23) on <var_writetype:nullable MType> */
var_other15 = var23;
{
{ /* Inline kernel#Object#is_same_instance (var_writetype,var_other15) on <var_writetype:nullable MType(MType)> */
var29 = var_writetype == var_other15;
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
if (var24){
goto RET_LABEL;
} else {
}
{
var30 = typing__AReassignFormExpr__resolve_reassignment(self, var_v, var_readtype, var_writetype);
}
var_rettype = var30;
{
typing__TypeVisitor__set_variable(var_v, self, var_variable, var_rettype); /* Direct call typing#TypeVisitor#set_variable on <var_v:TypeVisitor>*/
}
var31 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var31) on <self:AVarReassignExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var31; /* _is_typed on <self:AVarReassignExpr> */
RET_LABEL32:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AVarReassignExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AVarReassignExpr__accept_typing(val* self, val* p0) {
typing__AVarReassignExpr__accept_typing(self, p0); /* Direct call typing#AVarReassignExpr#accept_typing on <self:Object(AVarReassignExpr)>*/
RET_LABEL:;
}
/* method typing#AContinueExpr#accept_typing for (self: AContinueExpr, TypeVisitor) */
void typing__AContinueExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var9 /* : Bool */;
var_v = p0;
{
var = parser_nodes__AContinueExpr__n_expr(self);
}
var_nexpr = var;
var1 = NULL;
if (var_nexpr == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,var1) on <var_nexpr:nullable AExpr> */
var_other = var1;
{
var6 = ((short int (*)(val*, val*))(var_nexpr->class->vft[COLOR_kernel__Object___61d_61d]))(var_nexpr, var_other) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
var5 = var6;
}
var7 = !var5;
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
var8 = typing__TypeVisitor__visit_expr(var_v, var_nexpr);
}
var_mtype = var8;
} else {
}
var9 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var9) on <self:AContinueExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var9; /* _is_typed on <self:AContinueExpr> */
RET_LABEL10:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AContinueExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AContinueExpr__accept_typing(val* self, val* p0) {
typing__AContinueExpr__accept_typing(self, p0); /* Direct call typing#AContinueExpr#accept_typing on <self:Object(AContinueExpr)>*/
RET_LABEL:;
}
/* method typing#ABreakExpr#accept_typing for (self: ABreakExpr, TypeVisitor) */
void typing__ABreakExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var9 /* : Bool */;
var_v = p0;
{
var = parser_nodes__ABreakExpr__n_expr(self);
}
var_nexpr = var;
var1 = NULL;
if (var_nexpr == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,var1) on <var_nexpr:nullable AExpr> */
var_other = var1;
{
var6 = ((short int (*)(val*, val*))(var_nexpr->class->vft[COLOR_kernel__Object___61d_61d]))(var_nexpr, var_other) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
var5 = var6;
}
var7 = !var5;
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
{
var8 = typing__TypeVisitor__visit_expr(var_v, var_nexpr);
}
var_mtype = var8;
} else {
}
var9 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var9) on <self:ABreakExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var9; /* _is_typed on <self:ABreakExpr> */
RET_LABEL10:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ABreakExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ABreakExpr__accept_typing(val* self, val* p0) {
typing__ABreakExpr__accept_typing(self, p0); /* Direct call typing#ABreakExpr#accept_typing on <self:Object(ABreakExpr)>*/
RET_LABEL:;
}
/* method typing#AReturnExpr#accept_typing for (self: AReturnExpr, TypeVisitor) */
void typing__AReturnExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var1 /* : nullable MPropDef */;
val* var3 /* : nullable MPropDef */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var5 /* : nullable MSignature */;
val* var7 /* : nullable MSignature */;
val* var8 /* : nullable MType */;
val* var10 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var26 /* : nullable MType */;
val* var_mtype27 /* var mtype: nullable MType */;
static val* varonce;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
val* var32 /* : null */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : FlatString */;
short int var44 /* : Bool */;
var_v = p0;
{
var = parser_nodes__AReturnExpr__n_expr(self);
}
var_nexpr = var;
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var3 = var_v->attrs[COLOR_typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
/* <var1:nullable MPropDef> isa MMethodDef */
cltype = type_model__MMethodDef.color;
idtype = type_model__MMethodDef.id;
if(var1 == NULL) {
var4 = 0;
} else {
if(cltype >= var1->type->table_size) {
var4 = 0;
} else {
var4 = var1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var4)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 755);
show_backtrace(1);
}
{
{ /* Inline model#MMethodDef#msignature (var1) on <var1:nullable MPropDef(MMethodDef)> */
var7 = var1->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var1:nullable MPropDef(MMethodDef)> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (var5 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 755);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var5) on <var5:nullable MSignature> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1455);
show_backtrace(1);
}
var10 = var5->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var5:nullable MSignature> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_ret_type = var8;
var11 = NULL;
if (var_nexpr == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,var11) on <var_nexpr:nullable AExpr> */
var_other = var11;
{
var16 = ((short int (*)(val*, val*))(var_nexpr->class->vft[COLOR_kernel__Object___61d_61d]))(var_nexpr, var_other) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
var15 = var16;
}
var17 = !var15;
var13 = var17;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
var18 = NULL;
if (var_ret_type == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_type,var18) on <var_ret_type:nullable MType> */
var_other = var18;
{
var23 = ((short int (*)(val*, val*))(var_ret_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret_type, var_other) /* == on <var_ret_type:nullable MType(MType)>*/;
var22 = var23;
}
var24 = !var22;
var20 = var24;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
{
var25 = typing__TypeVisitor__visit_expr_subtype(var_v, var_nexpr, var_ret_type);
}
var_mtype = var25;
} else {
{
var26 = typing__TypeVisitor__visit_expr(var_v, var_nexpr);
}
var_mtype27 = var26;
if (varonce) {
var28 = varonce;
} else {
var29 = "Error: Return with value in a procedure.";
var30 = 40;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce = var28;
}
{
typing__TypeVisitor__error(var_v, self, var28); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
}
} else {
var32 = NULL;
if (var_ret_type == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_type,var32) on <var_ret_type:nullable MType> */
var_other = var32;
{
var37 = ((short int (*)(val*, val*))(var_ret_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret_type, var_other) /* == on <var_ret_type:nullable MType(MType)>*/;
var36 = var37;
}
var38 = !var36;
var34 = var38;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
if (varonce39) {
var40 = varonce39;
} else {
var41 = "Error: Return without value in a function.";
var42 = 42;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
{
typing__TypeVisitor__error(var_v, self, var40); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
}
var44 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var44) on <self:AReturnExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var44; /* _is_typed on <self:AReturnExpr> */
RET_LABEL45:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AReturnExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AReturnExpr__accept_typing(val* self, val* p0) {
typing__AReturnExpr__accept_typing(self, p0); /* Direct call typing#AReturnExpr#accept_typing on <self:Object(AReturnExpr)>*/
RET_LABEL:;
}
/* method typing#AAbortExpr#accept_typing for (self: AAbortExpr, TypeVisitor) */
void typing__AAbortExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
short int var /* : Bool */;
var_v = p0;
var = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var) on <self:AAbortExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var; /* _is_typed on <self:AAbortExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAbortExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAbortExpr__accept_typing(val* self, val* p0) {
typing__AAbortExpr__accept_typing(self, p0); /* Direct call typing#AAbortExpr#accept_typing on <self:Object(AAbortExpr)>*/
RET_LABEL:;
}
/* method typing#AIfExpr#accept_typing for (self: AIfExpr, TypeVisitor) */
void typing__AIfExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : nullable AExpr */;
val* var3 /* : nullable AExpr */;
short int var4 /* : Bool */;
var_v = p0;
{
var = parser_nodes__AIfExpr__n_expr(self);
}
{
var1 = typing__TypeVisitor__visit_expr_bool(var_v, var);
}
var1;
{
var2 = parser_nodes__AIfExpr__n_then(self);
}
{
typing__TypeVisitor__visit_stmt(var_v, var2); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
var3 = parser_nodes__AIfExpr__n_else(self);
}
{
typing__TypeVisitor__visit_stmt(var_v, var3); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
var4 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var4) on <self:AIfExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var4; /* _is_typed on <self:AIfExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AIfExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AIfExpr__accept_typing(val* self, val* p0) {
typing__AIfExpr__accept_typing(self, p0); /* Direct call typing#AIfExpr#accept_typing on <self:Object(AIfExpr)>*/
RET_LABEL:;
}
/* method typing#AIfexprExpr#accept_typing for (self: AIfexprExpr, TypeVisitor) */
void typing__AIfexprExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_t1 /* var t1: nullable MType */;
val* var4 /* : AExpr */;
val* var5 /* : nullable MType */;
val* var_t2 /* var t2: nullable MType */;
short int var6 /* : Bool */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : Array[MType] */;
long var22 /* : Int */;
val* var_23 /* var : Array[MType] */;
val* var24 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
val* var25 /* : null */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
static val* varonce;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
val* var41 /* : Array[Object] */;
long var42 /* : Int */;
val* var43 /* : NativeArray[Object] */;
val* var44 /* : String */;
var_v = p0;
{
var = parser_nodes__AIfexprExpr__n_expr(self);
}
{
var1 = typing__TypeVisitor__visit_expr_bool(var_v, var);
}
var1;
{
var2 = parser_nodes__AIfexprExpr__n_then(self);
}
{
var3 = typing__TypeVisitor__visit_expr(var_v, var2);
}
var_t1 = var3;
{
var4 = parser_nodes__AIfexprExpr__n_else(self);
}
{
var5 = typing__TypeVisitor__visit_expr(var_v, var4);
}
var_t2 = var5;
var7 = NULL;
if (var_t1 == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t1,var7) on <var_t1:nullable MType> */
var_other = var7;
{
{ /* Inline kernel#Object#is_same_instance (var_t1,var_other) on <var_t1:nullable MType(MType)> */
var13 = var_t1 == var_other;
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
var6 = var_;
} else {
var14 = NULL;
if (var_t2 == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t2,var14) on <var_t2:nullable MType> */
var_other = var14;
{
{ /* Inline kernel#Object#is_same_instance (var_t2,var_other) on <var_t2:nullable MType(MType)> */
var20 = var_t2 == var_other;
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
var6 = var15;
}
if (var6){
goto RET_LABEL;
} else {
}
var21 = NEW_array__Array(&type_array__Arraymodel__MType);
var22 = 2;
{
array__Array__with_capacity(var21, var22); /* Direct call array#Array#with_capacity on <var21:Array[MType]>*/
}
var_23 = var21;
{
array__AbstractArray__push(var_23, var_t1); /* Direct call array#AbstractArray#push on <var_23:Array[MType]>*/
}
{
array__AbstractArray__push(var_23, var_t2); /* Direct call array#AbstractArray#push on <var_23:Array[MType]>*/
}
{
var24 = typing__TypeVisitor__merge_types(var_v, self, var_23);
}
var_t = var24;
var25 = NULL;
if (var_t == NULL) {
var26 = 1; /* is null */
} else {
var26 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,var25) on <var_t:nullable MType> */
var_other = var25;
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other) on <var_t:nullable MType(MType)> */
var31 = var_t == var_other;
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
if (varonce) {
var32 = varonce;
} else {
var33 = "Type Error: ambiguous type ";
var34 = 27;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce = var32;
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = " vs ";
var39 = 4;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
var41 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var41 = array_instance Array[Object] */
var42 = 4;
var43 = NEW_array__NativeArray(var42, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var43)->values[0] = (val*) var32;
((struct instance_array__NativeArray*)var43)->values[1] = (val*) var_t1;
((struct instance_array__NativeArray*)var43)->values[2] = (val*) var37;
((struct instance_array__NativeArray*)var43)->values[3] = (val*) var_t2;
{
((void (*)(val*, val*, long))(var41->class->vft[COLOR_array__Array__with_native]))(var41, var43, var42) /* with_native on <var41:Array[Object]>*/;
}
}
{
var44 = ((val* (*)(val*))(var41->class->vft[COLOR_string__Object__to_s]))(var41) /* to_s on <var41:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var44); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
{
{ /* Inline typing#AExpr#mtype= (self,var_t) on <self:AIfexprExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var_t; /* _mtype on <self:AIfexprExpr> */
RET_LABEL45:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AIfexprExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AIfexprExpr__accept_typing(val* self, val* p0) {
typing__AIfexprExpr__accept_typing(self, p0); /* Direct call typing#AIfexprExpr#accept_typing on <self:Object(AIfexprExpr)>*/
RET_LABEL:;
}
/* method typing#ADoExpr#accept_typing for (self: ADoExpr, TypeVisitor) */
void typing__ADoExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
short int var1 /* : Bool */;
var_v = p0;
{
var = parser_nodes__ADoExpr__n_block(self);
}
{
typing__TypeVisitor__visit_stmt(var_v, var); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
var1 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var1) on <self:ADoExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var1; /* _is_typed on <self:ADoExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ADoExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ADoExpr__accept_typing(val* self, val* p0) {
typing__ADoExpr__accept_typing(self, p0); /* Direct call typing#ADoExpr#accept_typing on <self:Object(ADoExpr)>*/
RET_LABEL:;
}
/* method typing#AWhileExpr#accept_typing for (self: AWhileExpr, TypeVisitor) */
void typing__AWhileExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : nullable AExpr */;
short int var3 /* : Bool */;
var_v = p0;
{
var = parser_nodes__AWhileExpr__n_expr(self);
}
{
var1 = typing__TypeVisitor__visit_expr_bool(var_v, var);
}
var1;
{
var2 = parser_nodes__AWhileExpr__n_block(self);
}
{
typing__TypeVisitor__visit_stmt(var_v, var2); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
var3 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var3) on <self:AWhileExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AWhileExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AWhileExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AWhileExpr__accept_typing(val* self, val* p0) {
typing__AWhileExpr__accept_typing(self, p0); /* Direct call typing#AWhileExpr#accept_typing on <self:Object(AWhileExpr)>*/
RET_LABEL:;
}
/* method typing#ALoopExpr#accept_typing for (self: ALoopExpr, TypeVisitor) */
void typing__ALoopExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
short int var1 /* : Bool */;
var_v = p0;
{
var = parser_nodes__ALoopExpr__n_block(self);
}
{
typing__TypeVisitor__visit_stmt(var_v, var); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
var1 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var1) on <self:ALoopExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var1; /* _is_typed on <self:ALoopExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ALoopExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ALoopExpr__accept_typing(val* self, val* p0) {
typing__ALoopExpr__accept_typing(self, p0); /* Direct call typing#ALoopExpr#accept_typing on <self:Object(ALoopExpr)>*/
RET_LABEL:;
}
/* method typing#AForExpr#coltype= for (self: AForExpr, nullable MClassType) */
void typing__AForExpr__coltype_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AForExpr___coltype].val = p0; /* _coltype on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#coltype= for (self: Object, nullable MClassType) */
void VIRTUAL_typing__AForExpr__coltype_61d(val* self, val* p0) {
{ /* Inline typing#AForExpr#coltype= (self,p0) on <self:Object(AForExpr)> */
self->attrs[COLOR_typing__AForExpr___coltype].val = p0; /* _coltype on <self:Object(AForExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#AForExpr#method_iterator for (self: AForExpr): nullable CallSite */
val* typing__AForExpr__method_iterator(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_typing__AForExpr___method_iterator].val; /* _method_iterator on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_iterator for (self: Object): nullable CallSite */
val* VIRTUAL_typing__AForExpr__method_iterator(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
val* var3 /* : nullable CallSite */;
{ /* Inline typing#AForExpr#method_iterator (self) on <self:Object(AForExpr)> */
var3 = self->attrs[COLOR_typing__AForExpr___method_iterator].val; /* _method_iterator on <self:Object(AForExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_iterator= for (self: AForExpr, nullable CallSite) */
void typing__AForExpr__method_iterator_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AForExpr___method_iterator].val = p0; /* _method_iterator on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_iterator= for (self: Object, nullable CallSite) */
void VIRTUAL_typing__AForExpr__method_iterator_61d(val* self, val* p0) {
{ /* Inline typing#AForExpr#method_iterator= (self,p0) on <self:Object(AForExpr)> */
self->attrs[COLOR_typing__AForExpr___method_iterator].val = p0; /* _method_iterator on <self:Object(AForExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#AForExpr#method_is_ok for (self: AForExpr): nullable CallSite */
val* typing__AForExpr__method_is_ok(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_typing__AForExpr___method_is_ok].val; /* _method_is_ok on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_is_ok for (self: Object): nullable CallSite */
val* VIRTUAL_typing__AForExpr__method_is_ok(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
val* var3 /* : nullable CallSite */;
{ /* Inline typing#AForExpr#method_is_ok (self) on <self:Object(AForExpr)> */
var3 = self->attrs[COLOR_typing__AForExpr___method_is_ok].val; /* _method_is_ok on <self:Object(AForExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_is_ok= for (self: AForExpr, nullable CallSite) */
void typing__AForExpr__method_is_ok_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AForExpr___method_is_ok].val = p0; /* _method_is_ok on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_is_ok= for (self: Object, nullable CallSite) */
void VIRTUAL_typing__AForExpr__method_is_ok_61d(val* self, val* p0) {
{ /* Inline typing#AForExpr#method_is_ok= (self,p0) on <self:Object(AForExpr)> */
self->attrs[COLOR_typing__AForExpr___method_is_ok].val = p0; /* _method_is_ok on <self:Object(AForExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#AForExpr#method_item for (self: AForExpr): nullable CallSite */
val* typing__AForExpr__method_item(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_item for (self: Object): nullable CallSite */
val* VIRTUAL_typing__AForExpr__method_item(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
val* var3 /* : nullable CallSite */;
{ /* Inline typing#AForExpr#method_item (self) on <self:Object(AForExpr)> */
var3 = self->attrs[COLOR_typing__AForExpr___method_item].val; /* _method_item on <self:Object(AForExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_item= for (self: AForExpr, nullable CallSite) */
void typing__AForExpr__method_item_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AForExpr___method_item].val = p0; /* _method_item on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_item= for (self: Object, nullable CallSite) */
void VIRTUAL_typing__AForExpr__method_item_61d(val* self, val* p0) {
{ /* Inline typing#AForExpr#method_item= (self,p0) on <self:Object(AForExpr)> */
self->attrs[COLOR_typing__AForExpr___method_item].val = p0; /* _method_item on <self:Object(AForExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#AForExpr#method_next for (self: AForExpr): nullable CallSite */
val* typing__AForExpr__method_next(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_typing__AForExpr___method_next].val; /* _method_next on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_next for (self: Object): nullable CallSite */
val* VIRTUAL_typing__AForExpr__method_next(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
val* var3 /* : nullable CallSite */;
{ /* Inline typing#AForExpr#method_next (self) on <self:Object(AForExpr)> */
var3 = self->attrs[COLOR_typing__AForExpr___method_next].val; /* _method_next on <self:Object(AForExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_next= for (self: AForExpr, nullable CallSite) */
void typing__AForExpr__method_next_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AForExpr___method_next].val = p0; /* _method_next on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_next= for (self: Object, nullable CallSite) */
void VIRTUAL_typing__AForExpr__method_next_61d(val* self, val* p0) {
{ /* Inline typing#AForExpr#method_next= (self,p0) on <self:Object(AForExpr)> */
self->attrs[COLOR_typing__AForExpr___method_next].val = p0; /* _method_next on <self:Object(AForExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#AForExpr#method_key for (self: AForExpr): nullable CallSite */
val* typing__AForExpr__method_key(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_typing__AForExpr___method_key].val; /* _method_key on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_key for (self: Object): nullable CallSite */
val* VIRTUAL_typing__AForExpr__method_key(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
val* var3 /* : nullable CallSite */;
{ /* Inline typing#AForExpr#method_key (self) on <self:Object(AForExpr)> */
var3 = self->attrs[COLOR_typing__AForExpr___method_key].val; /* _method_key on <self:Object(AForExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_key= for (self: AForExpr, nullable CallSite) */
void typing__AForExpr__method_key_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AForExpr___method_key].val = p0; /* _method_key on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_key= for (self: Object, nullable CallSite) */
void VIRTUAL_typing__AForExpr__method_key_61d(val* self, val* p0) {
{ /* Inline typing#AForExpr#method_key= (self,p0) on <self:Object(AForExpr)> */
self->attrs[COLOR_typing__AForExpr___method_key].val = p0; /* _method_key on <self:Object(AForExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#AForExpr#do_type_iterator for (self: AForExpr, TypeVisitor, MType) */
void typing__AForExpr__do_type_iterator(val* self, val* p0, val* p1) {
val* var_v /* var v: TypeVisitor */;
val* var_mtype /* var mtype: MType */;
short int var /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
val* var10 /* : nullable MClass */;
val* var_objcla /* var objcla: nullable MClass */;
val* var11 /* : null */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : FlatString */;
val* var23 /* : AExpr */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
val* var27 /* : nullable CallSite */;
val* var_itdef /* var itdef: nullable CallSite */;
val* var28 /* : null */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
val* var45 /* : Array[Object] */;
long var46 /* : Int */;
val* var47 /* : NativeArray[Object] */;
val* var48 /* : String */;
val* var50 /* : MSignature */;
val* var52 /* : MSignature */;
val* var53 /* : nullable MType */;
val* var55 /* : nullable MType */;
val* var_ittype /* var ittype: nullable MType */;
val* var56 /* : null */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : FlatString */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : FlatString */;
val* var73 /* : nullable MClass */;
val* var_colit_cla /* var colit_cla: nullable MClass */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
val* var79 /* : nullable MClass */;
val* var_mapit_cla /* var mapit_cla: nullable MClass */;
short int var80 /* : Bool */;
short int var_is_col /* var is_col: Bool */;
short int var81 /* : Bool */;
short int var_is_map /* var is_map: Bool */;
short int var82 /* : Bool */;
val* var83 /* : null */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
val* var_other87 /* var other: nullable Object */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var_ /* var : Bool */;
val* var91 /* : Array[MType] */;
long var92 /* : Int */;
val* var_93 /* var : Array[MType] */;
val* var94 /* : MClassType */;
val* var96 /* : MClassType */;
val* var97 /* : MType */;
val* var98 /* : MClassType */;
short int var99 /* : Bool */;
val* var100 /* : MModule */;
val* var102 /* : MModule */;
val* var103 /* : nullable MClassType */;
val* var105 /* : nullable MClassType */;
val* var106 /* : MClassType */;
val* var_coltype /* var coltype: MClassType */;
val* var107 /* : nullable Array[Variable] */;
val* var109 /* : nullable Array[Variable] */;
val* var_variables /* var variables: nullable Array[Variable] */;
long var110 /* : Int */;
long var111 /* : Int */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
long var120 /* : Int */;
val* var121 /* : FlatString */;
val* var122 /* : nullable Object */;
val* var123 /* : Array[MType] */;
val* var125 /* : Array[MType] */;
val* var126 /* : nullable Object */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
val* var130 /* : null */;
short int var131 /* : Bool */;
short int var132 /* : Bool */;
short int var134 /* : Bool */;
short int var135 /* : Bool */;
short int var136 /* : Bool */;
short int var_137 /* var : Bool */;
val* var138 /* : Array[MType] */;
long var139 /* : Int */;
val* var_140 /* var : Array[MType] */;
val* var141 /* : MClassType */;
val* var143 /* : MClassType */;
val* var144 /* : MClassType */;
val* var146 /* : MClassType */;
val* var147 /* : MType */;
val* var148 /* : MClassType */;
short int var149 /* : Bool */;
val* var150 /* : MModule */;
val* var152 /* : MModule */;
val* var153 /* : nullable MClassType */;
val* var155 /* : nullable MClassType */;
val* var156 /* : MClassType */;
val* var_coltype157 /* var coltype: MClassType */;
val* var158 /* : nullable Array[Variable] */;
val* var160 /* : nullable Array[Variable] */;
val* var_variables161 /* var variables: nullable Array[Variable] */;
long var162 /* : Int */;
long var163 /* : Int */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
short int var167 /* : Bool */;
short int var168 /* : Bool */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
long var172 /* : Int */;
val* var173 /* : FlatString */;
long var174 /* : Int */;
val* var175 /* : nullable Object */;
val* var176 /* : Array[MType] */;
val* var178 /* : Array[MType] */;
long var179 /* : Int */;
val* var180 /* : nullable Object */;
long var182 /* : Int */;
val* var183 /* : nullable Object */;
val* var184 /* : Array[MType] */;
val* var186 /* : Array[MType] */;
long var187 /* : Int */;
val* var188 /* : nullable Object */;
short int var190 /* : Bool */;
short int var191 /* : Bool */;
short int var192 /* : Bool */;
short int var_193 /* var : Bool */;
short int var194 /* : Bool */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : NativeString */;
long var198 /* : Int */;
val* var199 /* : FlatString */;
short int var200 /* : Bool */;
val* var201 /* : MType */;
val* var202 /* : MType */;
short int var203 /* : Bool */;
int cltype204;
int idtype205;
const char* var_class_name;
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : NativeString */;
long var210 /* : Int */;
val* var211 /* : FlatString */;
short int var212 /* : Bool */;
val* var213 /* : nullable CallSite */;
val* var_ikdef /* var ikdef: nullable CallSite */;
val* var214 /* : null */;
short int var215 /* : Bool */;
short int var216 /* : Bool */;
short int var218 /* : Bool */;
short int var220 /* : Bool */;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : NativeString */;
long var224 /* : Int */;
val* var225 /* : FlatString */;
static val* varonce226;
val* var227 /* : String */;
char* var228 /* : NativeString */;
long var229 /* : Int */;
val* var230 /* : FlatString */;
val* var231 /* : Array[Object] */;
long var232 /* : Int */;
val* var233 /* : NativeArray[Object] */;
val* var234 /* : String */;
static val* varonce236;
val* var237 /* : String */;
char* var238 /* : NativeString */;
long var239 /* : Int */;
val* var240 /* : FlatString */;
short int var241 /* : Bool */;
val* var242 /* : nullable CallSite */;
val* var_itemdef /* var itemdef: nullable CallSite */;
val* var243 /* : null */;
short int var244 /* : Bool */;
short int var245 /* : Bool */;
short int var247 /* : Bool */;
short int var249 /* : Bool */;
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : NativeString */;
long var253 /* : Int */;
val* var254 /* : FlatString */;
static val* varonce255;
val* var256 /* : String */;
char* var257 /* : NativeString */;
long var258 /* : Int */;
val* var259 /* : FlatString */;
val* var260 /* : Array[Object] */;
long var261 /* : Int */;
val* var262 /* : NativeArray[Object] */;
val* var263 /* : String */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
long var268 /* : Int */;
val* var269 /* : FlatString */;
short int var270 /* : Bool */;
val* var271 /* : nullable CallSite */;
val* var_nextdef /* var nextdef: nullable CallSite */;
val* var272 /* : null */;
short int var273 /* : Bool */;
short int var274 /* : Bool */;
short int var276 /* : Bool */;
short int var278 /* : Bool */;
static val* varonce279;
val* var280 /* : String */;
char* var281 /* : NativeString */;
long var282 /* : Int */;
val* var283 /* : FlatString */;
static val* varonce284;
val* var285 /* : String */;
char* var286 /* : NativeString */;
long var287 /* : Int */;
val* var288 /* : FlatString */;
val* var289 /* : Array[Object] */;
long var290 /* : Int */;
val* var291 /* : NativeArray[Object] */;
val* var292 /* : String */;
static val* varonce294;
val* var295 /* : String */;
char* var296 /* : NativeString */;
long var297 /* : Int */;
val* var298 /* : FlatString */;
short int var299 /* : Bool */;
val* var300 /* : nullable CallSite */;
val* var_keydef /* var keydef: nullable CallSite */;
val* var301 /* : null */;
short int var302 /* : Bool */;
short int var303 /* : Bool */;
short int var305 /* : Bool */;
short int var307 /* : Bool */;
static val* varonce308;
val* var309 /* : String */;
char* var310 /* : NativeString */;
long var311 /* : Int */;
val* var312 /* : FlatString */;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : NativeString */;
long var316 /* : Int */;
val* var317 /* : FlatString */;
val* var318 /* : Array[Object] */;
long var319 /* : Int */;
val* var320 /* : NativeArray[Object] */;
val* var321 /* : String */;
var_v = p0;
var_mtype = p1;
/* <var_mtype:MType> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var = 0;
} else {
var = var_mtype->type->type_table[cltype] == idtype;
}
if (var){
if (varonce) {
var1 = varonce;
} else {
var2 = "Type error: \'for\' cannot iterate over \'null\'";
var3 = 44;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
typing__TypeVisitor__error(var_v, self, var1); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
if (varonce5) {
var6 = varonce5;
} else {
var7 = "Object";
var8 = 6;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
{
var10 = typing__TypeVisitor__get_mclass(var_v, self, var6);
}
var_objcla = var10;
var11 = NULL;
if (var_objcla == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_objcla,var11) on <var_objcla:nullable MClass> */
var_other = var11;
{
{ /* Inline kernel#Object#is_same_instance (var_objcla,var_other) on <var_objcla:nullable MClass(MClass)> */
var17 = var_objcla == var_other;
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
if (varonce18) {
var19 = varonce18;
} else {
var20 = "iterator";
var21 = 8;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
{
var23 = parser_nodes__AForExpr__n_expr(self);
}
/* <var23:AExpr> isa ASelfExpr */
cltype25 = type_parser_nodes__ASelfExpr.color;
idtype26 = type_parser_nodes__ASelfExpr.id;
if(cltype25 >= var23->type->table_size) {
var24 = 0;
} else {
var24 = var23->type->type_table[cltype25] == idtype26;
}
{
var27 = typing__TypeVisitor__get_method(var_v, self, var_mtype, var19, var24);
}
var_itdef = var27;
var28 = NULL;
if (var_itdef == NULL) {
var29 = 1; /* is null */
} else {
var29 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_itdef,var28) on <var_itdef:nullable CallSite> */
var_other = var28;
{
{ /* Inline kernel#Object#is_same_instance (var_itdef,var_other) on <var_itdef:nullable CallSite(CallSite)> */
var34 = var_itdef == var_other;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
if (var29){
if (varonce35) {
var36 = varonce35;
} else {
var37 = "Type Error: \'for\' expects a type providing \'iterator\' method, got \'";
var38 = 67;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "\'.";
var43 = 2;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var45 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var45 = array_instance Array[Object] */
var46 = 3;
var47 = NEW_array__NativeArray(var46, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var47)->values[0] = (val*) var36;
((struct instance_array__NativeArray*)var47)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var47)->values[2] = (val*) var41;
{
((void (*)(val*, val*, long))(var45->class->vft[COLOR_array__Array__with_native]))(var45, var47, var46) /* with_native on <var45:Array[Object]>*/;
}
}
{
var48 = ((val* (*)(val*))(var45->class->vft[COLOR_string__Object__to_s]))(var45) /* to_s on <var45:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var48); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AForExpr#method_iterator= (self,var_itdef) on <self:AForExpr> */
self->attrs[COLOR_typing__AForExpr___method_iterator].val = var_itdef; /* _method_iterator on <self:AForExpr> */
RET_LABEL49:(void)0;
}
}
{
{ /* Inline typing#CallSite#msignature (var_itdef) on <var_itdef:nullable CallSite(CallSite)> */
var52 = var_itdef->attrs[COLOR_typing__CallSite___msignature].val; /* _msignature on <var_itdef:nullable CallSite(CallSite)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 429);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var50) on <var50:MSignature> */
var55 = var50->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var50:MSignature> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
var_ittype = var53;
var56 = NULL;
if (var_ittype == NULL) {
var57 = 1; /* is null */
} else {
var57 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ittype,var56) on <var_ittype:nullable MType> */
var_other = var56;
{
{ /* Inline kernel#Object#is_same_instance (var_ittype,var_other) on <var_ittype:nullable MType(MType)> */
var62 = var_ittype == var_other;
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var57 = var58;
}
if (var57){
if (varonce63) {
var64 = varonce63;
} else {
var65 = "Type Error: \'for\' expects method \'iterator\' to return an \'Iterator\' or \'MapIterator\' type\'.";
var66 = 91;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
{
typing__TypeVisitor__error(var_v, self, var64); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = "Iterator";
var71 = 8;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
{
var73 = typing__TypeVisitor__try_get_mclass(var_v, self, var69);
}
var_colit_cla = var73;
if (varonce74) {
var75 = varonce74;
} else {
var76 = "MapIterator";
var77 = 11;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
{
var79 = typing__TypeVisitor__try_get_mclass(var_v, self, var75);
}
var_mapit_cla = var79;
var80 = 0;
var_is_col = var80;
var81 = 0;
var_is_map = var81;
var83 = NULL;
if (var_colit_cla == NULL) {
var84 = 0; /* is null */
} else {
var84 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_colit_cla,var83) on <var_colit_cla:nullable MClass> */
var_other87 = var83;
{
var89 = ((short int (*)(val*, val*))(var_colit_cla->class->vft[COLOR_kernel__Object___61d_61d]))(var_colit_cla, var_other87) /* == on <var_colit_cla:nullable MClass(MClass)>*/;
var88 = var89;
}
var90 = !var88;
var85 = var90;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var84 = var85;
}
var_ = var84;
if (var84){
var91 = NEW_array__Array(&type_array__Arraymodel__MType);
var92 = 1;
{
array__Array__with_capacity(var91, var92); /* Direct call array#Array#with_capacity on <var91:Array[MType]>*/
}
var_93 = var91;
{
{ /* Inline model#MClass#mclass_type (var_objcla) on <var_objcla:nullable MClass(MClass)> */
var96 = var_objcla->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_objcla:nullable MClass(MClass)> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
var97 = model__MType__as_nullable(var94);
}
{
array__AbstractArray__push(var_93, var97); /* Direct call array#AbstractArray#push on <var_93:Array[MType]>*/
}
{
var98 = model__MClass__get_mtype(var_colit_cla, var_93);
}
{
var99 = typing__TypeVisitor__is_subtype(var_v, var_ittype, var98);
}
var82 = var99;
} else {
var82 = var_;
}
if (var82){
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var102 = var_v->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#anchor (var_v) on <var_v:TypeVisitor> */
var105 = var_v->attrs[COLOR_typing__TypeVisitor___anchor].val; /* _anchor on <var_v:TypeVisitor> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
var106 = model__MType__supertype_to(var_ittype, var100, var103, var_colit_cla);
}
var_coltype = var106;
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var109 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var107 = var109;
RET_LABEL108:(void)0;
}
}
var_variables = var107;
if (var_variables == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 879);
show_backtrace(1);
} else {
var110 = array__AbstractArrayRead__length(var_variables);
}
var111 = 1;
{
{ /* Inline kernel#Int#!= (var110,var111) on <var110:Int> */
var115 = var110 == var111;
var116 = !var115;
var113 = var116;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
var112 = var113;
}
if (var112){
if (varonce117) {
var118 = varonce117;
} else {
var119 = "Type Error: \'for\' expects only one variable when using \'Iterator\'.";
var120 = 66;
var121 = string__NativeString__to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
{
typing__TypeVisitor__error(var_v, self, var118); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
if (var_variables == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 882);
show_backtrace(1);
} else {
var122 = abstract_collection__SequenceRead__first(var_variables);
}
{
{ /* Inline model#MClassType#arguments (var_coltype) on <var_coltype:MClassType> */
var125 = var_coltype->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var_coltype:MClassType> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 979);
show_backtrace(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
var126 = abstract_collection__SequenceRead__first(var123);
}
{
{ /* Inline typing#Variable#declared_type= (var122,var126) on <var122:nullable Object(Variable)> */
var122->attrs[COLOR_typing__Variable___declared_type].val = var126; /* _declared_type on <var122:nullable Object(Variable)> */
RET_LABEL127:(void)0;
}
}
}
var128 = 1;
var_is_col = var128;
} else {
}
var130 = NULL;
if (var_mapit_cla == NULL) {
var131 = 0; /* is null */
} else {
var131 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mapit_cla,var130) on <var_mapit_cla:nullable MClass> */
var_other87 = var130;
{
var135 = ((short int (*)(val*, val*))(var_mapit_cla->class->vft[COLOR_kernel__Object___61d_61d]))(var_mapit_cla, var_other87) /* == on <var_mapit_cla:nullable MClass(MClass)>*/;
var134 = var135;
}
var136 = !var134;
var132 = var136;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
var131 = var132;
}
var_137 = var131;
if (var131){
var138 = NEW_array__Array(&type_array__Arraymodel__MType);
var139 = 2;
{
array__Array__with_capacity(var138, var139); /* Direct call array#Array#with_capacity on <var138:Array[MType]>*/
}
var_140 = var138;
{
{ /* Inline model#MClass#mclass_type (var_objcla) on <var_objcla:nullable MClass(MClass)> */
var143 = var_objcla->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_objcla:nullable MClass(MClass)> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
{
array__AbstractArray__push(var_140, var141); /* Direct call array#AbstractArray#push on <var_140:Array[MType]>*/
}
{
{ /* Inline model#MClass#mclass_type (var_objcla) on <var_objcla:nullable MClass(MClass)> */
var146 = var_objcla->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_objcla:nullable MClass(MClass)> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
var147 = model__MType__as_nullable(var144);
}
{
array__AbstractArray__push(var_140, var147); /* Direct call array#AbstractArray#push on <var_140:Array[MType]>*/
}
{
var148 = model__MClass__get_mtype(var_mapit_cla, var_140);
}
{
var149 = typing__TypeVisitor__is_subtype(var_v, var_ittype, var148);
}
var129 = var149;
} else {
var129 = var_137;
}
if (var129){
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var152 = var_v->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#anchor (var_v) on <var_v:TypeVisitor> */
var155 = var_v->attrs[COLOR_typing__TypeVisitor___anchor].val; /* _anchor on <var_v:TypeVisitor> */
var153 = var155;
RET_LABEL154:(void)0;
}
}
{
var156 = model__MType__supertype_to(var_ittype, var150, var153, var_mapit_cla);
}
var_coltype157 = var156;
{
{ /* Inline scope#AForExpr#variables (self) on <self:AForExpr> */
var160 = self->attrs[COLOR_scope__AForExpr___variables].val; /* _variables on <self:AForExpr> */
var158 = var160;
RET_LABEL159:(void)0;
}
}
var_variables161 = var158;
if (var_variables161 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 891);
show_backtrace(1);
} else {
var162 = array__AbstractArrayRead__length(var_variables161);
}
var163 = 2;
{
{ /* Inline kernel#Int#!= (var162,var163) on <var162:Int> */
var167 = var162 == var163;
var168 = !var167;
var165 = var168;
goto RET_LABEL166;
RET_LABEL166:(void)0;
}
var164 = var165;
}
if (var164){
if (varonce169) {
var170 = varonce169;
} else {
var171 = "Type Error: \'for\' expects two variables when using \'MapIterator\'.";
var172 = 65;
var173 = string__NativeString__to_s_with_length(var171, var172);
var170 = var173;
varonce169 = var170;
}
{
typing__TypeVisitor__error(var_v, self, var170); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
var174 = 0;
if (var_variables161 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 894);
show_backtrace(1);
} else {
var175 = array__Array___91d_93d(var_variables161, var174);
}
{
{ /* Inline model#MClassType#arguments (var_coltype157) on <var_coltype157:MClassType> */
var178 = var_coltype157->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var_coltype157:MClassType> */
if (unlikely(var178 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 979);
show_backtrace(1);
}
var176 = var178;
RET_LABEL177:(void)0;
}
}
var179 = 0;
{
var180 = array__Array___91d_93d(var176, var179);
}
{
{ /* Inline typing#Variable#declared_type= (var175,var180) on <var175:nullable Object(Variable)> */
var175->attrs[COLOR_typing__Variable___declared_type].val = var180; /* _declared_type on <var175:nullable Object(Variable)> */
RET_LABEL181:(void)0;
}
}
var182 = 1;
if (var_variables161 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 895);
show_backtrace(1);
} else {
var183 = array__Array___91d_93d(var_variables161, var182);
}
{
{ /* Inline model#MClassType#arguments (var_coltype157) on <var_coltype157:MClassType> */
var186 = var_coltype157->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <var_coltype157:MClassType> */
if (unlikely(var186 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 979);
show_backtrace(1);
}
var184 = var186;
RET_LABEL185:(void)0;
}
}
var187 = 1;
{
var188 = array__Array___91d_93d(var184, var187);
}
{
{ /* Inline typing#Variable#declared_type= (var183,var188) on <var183:nullable Object(Variable)> */
var183->attrs[COLOR_typing__Variable___declared_type].val = var188; /* _declared_type on <var183:nullable Object(Variable)> */
RET_LABEL189:(void)0;
}
}
}
var190 = 1;
var_is_map = var190;
} else {
}
var192 = !var_is_col;
var_193 = var192;
if (var192){
var194 = !var_is_map;
var191 = var194;
} else {
var191 = var_193;
}
if (var191){
if (varonce195) {
var196 = varonce195;
} else {
var197 = "Type Error: \'for\' expects method \'iterator\' to return an \'Iterator\' or \'MapIterator\' type\'.";
var198 = 91;
var199 = string__NativeString__to_s_with_length(var197, var198);
var196 = var199;
varonce195 = var196;
}
{
typing__TypeVisitor__error(var_v, self, var196); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var200 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
if (var200){
{
var201 = typing__TypeVisitor__anchor_to(var_v, var_mtype);
}
var_mtype = var201;
} else {
}
{
var202 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MType__as_notnullable]))(var_mtype) /* as_notnullable on <var_mtype:MType>*/;
}
var_mtype = var202;
/* <var_mtype:MType> isa MClassType */
cltype204 = type_model__MClassType.color;
idtype205 = type_model__MClassType.id;
if(cltype204 >= var_mtype->type->table_size) {
var203 = 0;
} else {
var203 = var_mtype->type->type_table[cltype204] == idtype205;
}
if (unlikely(!var203)) {
var_class_name = var_mtype == NULL ? "null" : var_mtype->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 909);
show_backtrace(1);
}
{
{ /* Inline typing#AForExpr#coltype= (self,var_mtype) on <self:AForExpr> */
self->attrs[COLOR_typing__AForExpr___coltype].val = var_mtype; /* _coltype on <self:AForExpr> */
RET_LABEL206:(void)0;
}
}
if (varonce207) {
var208 = varonce207;
} else {
var209 = "is_ok";
var210 = 5;
var211 = string__NativeString__to_s_with_length(var209, var210);
var208 = var211;
varonce207 = var208;
}
var212 = 0;
{
var213 = typing__TypeVisitor__get_method(var_v, self, var_ittype, var208, var212);
}
var_ikdef = var213;
var214 = NULL;
if (var_ikdef == NULL) {
var215 = 1; /* is null */
} else {
var215 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ikdef,var214) on <var_ikdef:nullable CallSite> */
var_other = var214;
{
{ /* Inline kernel#Object#is_same_instance (var_ikdef,var_other) on <var_ikdef:nullable CallSite(CallSite)> */
var220 = var_ikdef == var_other;
var218 = var220;
goto RET_LABEL219;
RET_LABEL219:(void)0;
}
}
var216 = var218;
goto RET_LABEL217;
RET_LABEL217:(void)0;
}
var215 = var216;
}
if (var215){
if (varonce221) {
var222 = varonce221;
} else {
var223 = "Type Error: \'for\' expects a method \'is_ok\' in \'Iterator\' type ";
var224 = 62;
var225 = string__NativeString__to_s_with_length(var223, var224);
var222 = var225;
varonce221 = var222;
}
if (varonce226) {
var227 = varonce226;
} else {
var228 = ".";
var229 = 1;
var230 = string__NativeString__to_s_with_length(var228, var229);
var227 = var230;
varonce226 = var227;
}
var231 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var231 = array_instance Array[Object] */
var232 = 3;
var233 = NEW_array__NativeArray(var232, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var233)->values[0] = (val*) var222;
((struct instance_array__NativeArray*)var233)->values[1] = (val*) var_ittype;
((struct instance_array__NativeArray*)var233)->values[2] = (val*) var227;
{
((void (*)(val*, val*, long))(var231->class->vft[COLOR_array__Array__with_native]))(var231, var233, var232) /* with_native on <var231:Array[Object]>*/;
}
}
{
var234 = ((val* (*)(val*))(var231->class->vft[COLOR_string__Object__to_s]))(var231) /* to_s on <var231:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var234); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AForExpr#method_is_ok= (self,var_ikdef) on <self:AForExpr> */
self->attrs[COLOR_typing__AForExpr___method_is_ok].val = var_ikdef; /* _method_is_ok on <self:AForExpr> */
RET_LABEL235:(void)0;
}
}
if (varonce236) {
var237 = varonce236;
} else {
var238 = "item";
var239 = 4;
var240 = string__NativeString__to_s_with_length(var238, var239);
var237 = var240;
varonce236 = var237;
}
var241 = 0;
{
var242 = typing__TypeVisitor__get_method(var_v, self, var_ittype, var237, var241);
}
var_itemdef = var242;
var243 = NULL;
if (var_itemdef == NULL) {
var244 = 1; /* is null */
} else {
var244 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_itemdef,var243) on <var_itemdef:nullable CallSite> */
var_other = var243;
{
{ /* Inline kernel#Object#is_same_instance (var_itemdef,var_other) on <var_itemdef:nullable CallSite(CallSite)> */
var249 = var_itemdef == var_other;
var247 = var249;
goto RET_LABEL248;
RET_LABEL248:(void)0;
}
}
var245 = var247;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
var244 = var245;
}
if (var244){
if (varonce250) {
var251 = varonce250;
} else {
var252 = "Type Error: \'for\' expects a method \'item\' in \'Iterator\' type ";
var253 = 61;
var254 = string__NativeString__to_s_with_length(var252, var253);
var251 = var254;
varonce250 = var251;
}
if (varonce255) {
var256 = varonce255;
} else {
var257 = ".";
var258 = 1;
var259 = string__NativeString__to_s_with_length(var257, var258);
var256 = var259;
varonce255 = var256;
}
var260 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var260 = array_instance Array[Object] */
var261 = 3;
var262 = NEW_array__NativeArray(var261, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var262)->values[0] = (val*) var251;
((struct instance_array__NativeArray*)var262)->values[1] = (val*) var_ittype;
((struct instance_array__NativeArray*)var262)->values[2] = (val*) var256;
{
((void (*)(val*, val*, long))(var260->class->vft[COLOR_array__Array__with_native]))(var260, var262, var261) /* with_native on <var260:Array[Object]>*/;
}
}
{
var263 = ((val* (*)(val*))(var260->class->vft[COLOR_string__Object__to_s]))(var260) /* to_s on <var260:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var263); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AForExpr#method_item= (self,var_itemdef) on <self:AForExpr> */
self->attrs[COLOR_typing__AForExpr___method_item].val = var_itemdef; /* _method_item on <self:AForExpr> */
RET_LABEL264:(void)0;
}
}
if (varonce265) {
var266 = varonce265;
} else {
var267 = "next";
var268 = 4;
var269 = string__NativeString__to_s_with_length(var267, var268);
var266 = var269;
varonce265 = var266;
}
var270 = 0;
{
var271 = typing__TypeVisitor__get_method(var_v, self, var_ittype, var266, var270);
}
var_nextdef = var271;
var272 = NULL;
if (var_nextdef == NULL) {
var273 = 1; /* is null */
} else {
var273 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nextdef,var272) on <var_nextdef:nullable CallSite> */
var_other = var272;
{
{ /* Inline kernel#Object#is_same_instance (var_nextdef,var_other) on <var_nextdef:nullable CallSite(CallSite)> */
var278 = var_nextdef == var_other;
var276 = var278;
goto RET_LABEL277;
RET_LABEL277:(void)0;
}
}
var274 = var276;
goto RET_LABEL275;
RET_LABEL275:(void)0;
}
var273 = var274;
}
if (var273){
if (varonce279) {
var280 = varonce279;
} else {
var281 = "Type Error: \'for\' expects a method \'next\' in \'Iterator\' type ";
var282 = 61;
var283 = string__NativeString__to_s_with_length(var281, var282);
var280 = var283;
varonce279 = var280;
}
if (varonce284) {
var285 = varonce284;
} else {
var286 = ".";
var287 = 1;
var288 = string__NativeString__to_s_with_length(var286, var287);
var285 = var288;
varonce284 = var285;
}
var289 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var289 = array_instance Array[Object] */
var290 = 3;
var291 = NEW_array__NativeArray(var290, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var291)->values[0] = (val*) var280;
((struct instance_array__NativeArray*)var291)->values[1] = (val*) var_ittype;
((struct instance_array__NativeArray*)var291)->values[2] = (val*) var285;
{
((void (*)(val*, val*, long))(var289->class->vft[COLOR_array__Array__with_native]))(var289, var291, var290) /* with_native on <var289:Array[Object]>*/;
}
}
{
var292 = ((val* (*)(val*))(var289->class->vft[COLOR_string__Object__to_s]))(var289) /* to_s on <var289:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var292); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AForExpr#method_next= (self,var_nextdef) on <self:AForExpr> */
self->attrs[COLOR_typing__AForExpr___method_next].val = var_nextdef; /* _method_next on <self:AForExpr> */
RET_LABEL293:(void)0;
}
}
if (var_is_map){
if (varonce294) {
var295 = varonce294;
} else {
var296 = "key";
var297 = 3;
var298 = string__NativeString__to_s_with_length(var296, var297);
var295 = var298;
varonce294 = var295;
}
var299 = 0;
{
var300 = typing__TypeVisitor__get_method(var_v, self, var_ittype, var295, var299);
}
var_keydef = var300;
var301 = NULL;
if (var_keydef == NULL) {
var302 = 1; /* is null */
} else {
var302 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_keydef,var301) on <var_keydef:nullable CallSite> */
var_other = var301;
{
{ /* Inline kernel#Object#is_same_instance (var_keydef,var_other) on <var_keydef:nullable CallSite(CallSite)> */
var307 = var_keydef == var_other;
var305 = var307;
goto RET_LABEL306;
RET_LABEL306:(void)0;
}
}
var303 = var305;
goto RET_LABEL304;
RET_LABEL304:(void)0;
}
var302 = var303;
}
if (var302){
if (varonce308) {
var309 = varonce308;
} else {
var310 = "Type Error: \'for\' expects a method \'key\' in \'Iterator\' type ";
var311 = 60;
var312 = string__NativeString__to_s_with_length(var310, var311);
var309 = var312;
varonce308 = var309;
}
if (varonce313) {
var314 = varonce313;
} else {
var315 = ".";
var316 = 1;
var317 = string__NativeString__to_s_with_length(var315, var316);
var314 = var317;
varonce313 = var314;
}
var318 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var318 = array_instance Array[Object] */
var319 = 3;
var320 = NEW_array__NativeArray(var319, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var320)->values[0] = (val*) var309;
((struct instance_array__NativeArray*)var320)->values[1] = (val*) var_ittype;
((struct instance_array__NativeArray*)var320)->values[2] = (val*) var314;
{
((void (*)(val*, val*, long))(var318->class->vft[COLOR_array__Array__with_native]))(var318, var320, var319) /* with_native on <var318:Array[Object]>*/;
}
}
{
var321 = ((val* (*)(val*))(var318->class->vft[COLOR_string__Object__to_s]))(var318) /* to_s on <var318:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var321); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AForExpr#method_key= (self,var_keydef) on <self:AForExpr> */
self->attrs[COLOR_typing__AForExpr___method_key].val = var_keydef; /* _method_key on <self:AForExpr> */
RET_LABEL322:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method typing#AForExpr#do_type_iterator for (self: Object, TypeVisitor, MType) */
void VIRTUAL_typing__AForExpr__do_type_iterator(val* self, val* p0, val* p1) {
typing__AForExpr__do_type_iterator(self, p0, p1); /* Direct call typing#AForExpr#do_type_iterator on <self:Object(AForExpr)>*/
RET_LABEL:;
}
/* method typing#AForExpr#accept_typing for (self: AForExpr, TypeVisitor) */
void typing__AForExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable AExpr */;
short int var10 /* : Bool */;
var_v = p0;
{
var = parser_nodes__AForExpr__n_expr(self);
}
{
var1 = typing__TypeVisitor__visit_expr(var_v, var);
}
var_mtype = var1;
var2 = NULL;
if (var_mtype == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var2) on <var_mtype:nullable MType> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var8 = var_mtype == var_other;
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
typing__AForExpr__do_type_iterator(self, var_v, var_mtype); /* Direct call typing#AForExpr#do_type_iterator on <self:AForExpr>*/
}
{
var9 = parser_nodes__AForExpr__n_block(self);
}
{
typing__TypeVisitor__visit_stmt(var_v, var9); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
var10 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var10) on <self:AForExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var10; /* _is_typed on <self:AForExpr> */
RET_LABEL11:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AForExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AForExpr__accept_typing(val* self, val* p0) {
typing__AForExpr__accept_typing(self, p0); /* Direct call typing#AForExpr#accept_typing on <self:Object(AForExpr)>*/
RET_LABEL:;
}
/* method typing#AAssertExpr#accept_typing for (self: AAssertExpr, TypeVisitor) */
void typing__AAssertExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : nullable AExpr */;
short int var3 /* : Bool */;
var_v = p0;
{
var = parser_nodes__AAssertExpr__n_expr(self);
}
{
var1 = typing__TypeVisitor__visit_expr_bool(var_v, var);
}
var1;
{
var2 = parser_nodes__AAssertExpr__n_else(self);
}
{
typing__TypeVisitor__visit_stmt(var_v, var2); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
var3 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var3) on <self:AAssertExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:AAssertExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAssertExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAssertExpr__accept_typing(val* self, val* p0) {
typing__AAssertExpr__accept_typing(self, p0); /* Direct call typing#AAssertExpr#accept_typing on <self:Object(AAssertExpr)>*/
RET_LABEL:;
}
/* method typing#AOrExpr#accept_typing for (self: AOrExpr, TypeVisitor) */
void typing__AOrExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable MType */;
var_v = p0;
{
var = parser_nodes__AOrExpr__n_expr(self);
}
{
var1 = typing__TypeVisitor__visit_expr_bool(var_v, var);
}
var1;
{
var2 = parser_nodes__AOrExpr__n_expr2(self);
}
{
var3 = typing__TypeVisitor__visit_expr_bool(var_v, var2);
}
var3;
{
var4 = typing__TypeVisitor__type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var4) on <self:AOrExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var4; /* _mtype on <self:AOrExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AOrExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AOrExpr__accept_typing(val* self, val* p0) {
typing__AOrExpr__accept_typing(self, p0); /* Direct call typing#AOrExpr#accept_typing on <self:Object(AOrExpr)>*/
RET_LABEL:;
}
/* method typing#AImpliesExpr#accept_typing for (self: AImpliesExpr, TypeVisitor) */
void typing__AImpliesExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable MType */;
var_v = p0;
{
var = parser_nodes__AImpliesExpr__n_expr(self);
}
{
var1 = typing__TypeVisitor__visit_expr_bool(var_v, var);
}
var1;
{
var2 = parser_nodes__AImpliesExpr__n_expr2(self);
}
{
var3 = typing__TypeVisitor__visit_expr_bool(var_v, var2);
}
var3;
{
var4 = typing__TypeVisitor__type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var4) on <self:AImpliesExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var4; /* _mtype on <self:AImpliesExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AImpliesExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AImpliesExpr__accept_typing(val* self, val* p0) {
typing__AImpliesExpr__accept_typing(self, p0); /* Direct call typing#AImpliesExpr#accept_typing on <self:Object(AImpliesExpr)>*/
RET_LABEL:;
}
/* method typing#AAndExpr#accept_typing for (self: AAndExpr, TypeVisitor) */
void typing__AAndExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable MType */;
var_v = p0;
{
var = parser_nodes__AAndExpr__n_expr(self);
}
{
var1 = typing__TypeVisitor__visit_expr_bool(var_v, var);
}
var1;
{
var2 = parser_nodes__AAndExpr__n_expr2(self);
}
{
var3 = typing__TypeVisitor__visit_expr_bool(var_v, var2);
}
var3;
{
var4 = typing__TypeVisitor__type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var4) on <self:AAndExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var4; /* _mtype on <self:AAndExpr> */
RET_LABEL5:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAndExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAndExpr__accept_typing(val* self, val* p0) {
typing__AAndExpr__accept_typing(self, p0); /* Direct call typing#AAndExpr#accept_typing on <self:Object(AAndExpr)>*/
RET_LABEL:;
}
