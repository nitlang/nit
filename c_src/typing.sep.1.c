#include "typing.sep.0.h"
/* method typing#ToolContext#typing_phase for (self: ToolContext): Phase */
val* typing__ToolContext__typing_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_typing__ToolContext___typing_phase].val; /* _typing_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _typing_phase");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 25);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 25);
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
PRINT_ERROR(" (%s:%d)\n", "phase.nit", 162);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 36);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 36);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 50);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 50);
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
val* var27 /* : MClassType */;
val* var29 /* : MClassType */;
val* var31 /* : MProperty */;
val* var33 /* : MProperty */;
val* var_mprop /* var mprop: MProperty */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var_40 /* var : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 495);
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 492);
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
((void (*)(val*, val*))(var21->class->vft[COLOR_scope__Variable__name_61d]))(var21, var22) /* name= on <var21:Variable>*/;
}
{
((void (*)(val*))(var21->class->vft[COLOR_kernel__Object__init]))(var21) /* init on <var21:Variable>*/;
}
var_selfvariable = var21;
{
{ /* Inline typing#TypeVisitor#selfvariable= (self,var_selfvariable) on <self:TypeVisitor> */
self->attrs[COLOR_typing__TypeVisitor___selfvariable].val = var_selfvariable; /* _selfvariable on <self:TypeVisitor> */
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:MClass> */
var29 = var_mclass->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:MClass> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type= (var_selfvariable,var27) on <var_selfvariable:Variable> */
var_selfvariable->attrs[COLOR_typing__Variable___declared_type].val = var27; /* _declared_type on <var_selfvariable:Variable> */
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var33 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MPropDef(MPropDef)> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
var_mprop = var31;
/* <var_mprop:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var35 = 0;
} else {
var35 = var_mprop->type->type_table[cltype] == idtype;
}
var_ = var35;
if (var35){
{
{ /* Inline model#MMethod#is_toplevel (var_mprop) on <var_mprop:MProperty(MMethod)> */
var39 = var_mprop->attrs[COLOR_model__MMethod___is_toplevel].s; /* _is_toplevel on <var_mprop:MProperty(MMethod)> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_40 = var37;
if (var37){
var36 = var_40;
} else {
{
{ /* Inline model#MMethod#is_new (var_mprop) on <var_mprop:MProperty(MMethod)> */
var43 = var_mprop->attrs[COLOR_model__MMethod___is_new].s; /* _is_new on <var_mprop:MProperty(MMethod)> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
var36 = var41;
}
var34 = var36;
} else {
var34 = var_;
}
if (var34){
var44 = 1;
{
{ /* Inline typing#TypeVisitor#is_toplevel_context= (self,var44) on <self:TypeVisitor> */
self->attrs[COLOR_typing__TypeVisitor___is_toplevel_context].s = var44; /* _is_toplevel_context on <self:TypeVisitor> */
RET_LABEL45:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 85);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 36);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 36);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 36);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
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
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : FlatString */;
val* var42 /* : Array[Object] */;
long var43 /* : Int */;
val* var44 /* : NativeArray[Object] */;
val* var45 /* : String */;
short int var46 /* : Bool */;
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
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
val* var70 /* : Array[Object] */;
long var71 /* : Int */;
val* var72 /* : NativeArray[Object] */;
val* var73 /* : String */;
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (varonce) {
var28 = varonce;
} else {
var29 = "useless-type-test";
var30 = 17;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce = var28;
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = "Warning: Expression is already a ";
var35 = 33;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = ".";
var40 = 1;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var42 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var42 = array_instance Array[Object] */
var43 = 3;
var44 = NEW_array__NativeArray(var43, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var44)->values[0] = (val*) var33;
((struct instance_array__NativeArray*)var44)->values[1] = (val*) var_sup;
((struct instance_array__NativeArray*)var44)->values[2] = (val*) var38;
{
((void (*)(val*, val*, long))(var42->class->vft[COLOR_array__Array__with_native]))(var42, var44, var43) /* with_native on <var42:Array[Object]>*/;
}
}
{
var45 = ((val* (*)(val*))(var42->class->vft[COLOR_string__Object__to_s]))(var42) /* to_s on <var42:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(var25, var_node, var28, var45); /* Direct call modelbuilder#ModelBuilder#warning on <var25:ModelBuilder>*/
}
} else {
{
var46 = typing__TypeVisitor__is_subtype(self, var_sub, var_sup);
}
if (var46){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var49 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "useless-type-test";
var53 = 17;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = "Warning: Expression is already a ";
var58 = 33;
var59 = string__NativeString__to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
if (varonce60) {
var61 = varonce60;
} else {
var62 = " since it is a ";
var63 = 15;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = ".";
var68 = 1;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var70 = array_instance Array[Object] */
var71 = 5;
var72 = NEW_array__NativeArray(var71, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var72)->values[0] = (val*) var56;
((struct instance_array__NativeArray*)var72)->values[1] = (val*) var_sup;
((struct instance_array__NativeArray*)var72)->values[2] = (val*) var61;
((struct instance_array__NativeArray*)var72)->values[3] = (val*) var_sub;
((struct instance_array__NativeArray*)var72)->values[4] = (val*) var66;
{
((void (*)(val*, val*, long))(var70->class->vft[COLOR_array__Array__with_native]))(var70, var72, var71) /* with_native on <var70:Array[Object]>*/;
}
}
{
var73 = ((val* (*)(val*))(var70->class->vft[COLOR_string__Object__to_s]))(var70) /* to_s on <var70:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(var47, var_node, var51, var73); /* Direct call modelbuilder#ModelBuilder#warning on <var47:ModelBuilder>*/
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
/* method typing#TypeVisitor#null_test for (self: TypeVisitor, ABinopExpr) */
void typing__TypeVisitor__null_test(val* self, val* p0) {
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
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var_ /* var : Bool */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
int cltype;
int idtype;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
short int var28 /* : Bool */;
val* var29 /* : MType */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
short int var33 /* : Bool */;
val* var34 /* : ModelBuilder */;
val* var36 /* : ModelBuilder */;
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
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
val* var51 /* : Array[Object] */;
long var52 /* : Int */;
val* var53 /* : NativeArray[Object] */;
val* var54 /* : String */;
val* var55 /* : AExpr */;
val* var57 /* : AExpr */;
val* var58 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var59 /* : null */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
val* var69 /* : nullable FlowContext */;
val* var71 /* : nullable FlowContext */;
val* var72 /* : FlowContext */;
val* var74 /* : FlowContext */;
val* var75 /* : nullable FlowContext */;
val* var77 /* : nullable FlowContext */;
val* var78 /* : FlowContext */;
val* var80 /* : FlowContext */;
val* var81 /* : MType */;
val* var83 /* : MType */;
short int var84 /* : Bool */;
int cltype85;
int idtype86;
val* var87 /* : nullable FlowContext */;
val* var89 /* : nullable FlowContext */;
val* var90 /* : FlowContext */;
val* var92 /* : FlowContext */;
val* var93 /* : nullable FlowContext */;
val* var95 /* : nullable FlowContext */;
val* var96 /* : FlowContext */;
val* var98 /* : FlowContext */;
val* var99 /* : MType */;
val* var101 /* : MType */;
var_anode = p0;
{
{ /* Inline parser_nodes#ASendExpr#n_expr (var_anode) on <var_anode:ABinopExpr> */
var2 = var_anode->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <var_anode:ABinopExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1466);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val* (*)(val*))(var->class->vft[COLOR_typing__AExpr__mtype]))(var) /* mtype on <var:AExpr>*/;
}
var_mtype = var3;
{
{ /* Inline parser_nodes#ABinopExpr#n_expr2 (var_anode) on <var_anode:ABinopExpr> */
var6 = var_anode->attrs[COLOR_parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <var_anode:ABinopExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1473);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((val* (*)(val*))(var4->class->vft[COLOR_typing__AExpr__mtype]))(var4) /* mtype on <var4:AExpr>*/;
}
var_mtype2 = var7;
var9 = NULL;
if (var_mtype == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var9) on <var_mtype:nullable MType> */
var_other = var9;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var15 = var_mtype == var_other;
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
var_ = var10;
if (var10){
var8 = var_;
} else {
var16 = NULL;
if (var_mtype2 == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype2,var16) on <var_mtype2:nullable MType> */
var_other = var16;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype2,var_other) on <var_mtype2:nullable MType(MType)> */
var22 = var_mtype2 == var_other;
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
var8 = var17;
}
if (var8){
goto RET_LABEL;
} else {
}
/* <var_mtype2:nullable MType(MType)> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(cltype >= var_mtype2->type->table_size) {
var23 = 0;
} else {
var23 = var_mtype2->type->type_table[cltype] == idtype;
}
var24 = !var23;
if (var24){
goto RET_LABEL;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MNullableType */
cltype26 = type_model__MNullableType.color;
idtype27 = type_model__MNullableType.id;
if(cltype26 >= var_mtype->type->table_size) {
var25 = 0;
} else {
var25 = var_mtype->type->type_table[cltype26] == idtype27;
}
var28 = !var25;
if (var28){
{
var29 = typing__TypeVisitor__anchor_to(self, var_mtype);
}
/* <var29:MType> isa MNullableType */
cltype31 = type_model__MNullableType.color;
idtype32 = type_model__MNullableType.id;
if(cltype31 >= var29->type->table_size) {
var30 = 0;
} else {
var30 = var29->type->type_table[cltype31] == idtype32;
}
var33 = !var30;
if (var33){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var36 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (varonce) {
var37 = varonce;
} else {
var38 = "useless-null-test";
var39 = 17;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = "Warning: expression is not null, since it is a `";
var44 = 48;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "`.";
var49 = 2;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var51 = array_instance Array[Object] */
var52 = 3;
var53 = NEW_array__NativeArray(var52, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var53)->values[0] = (val*) var42;
((struct instance_array__NativeArray*)var53)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var53)->values[2] = (val*) var47;
{
((void (*)(val*, val*, long))(var51->class->vft[COLOR_array__Array__with_native]))(var51, var53, var52) /* with_native on <var51:Array[Object]>*/;
}
}
{
var54 = ((val* (*)(val*))(var51->class->vft[COLOR_string__Object__to_s]))(var51) /* to_s on <var51:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(var34, var_anode, var37, var54); /* Direct call modelbuilder#ModelBuilder#warning on <var34:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ASendExpr#n_expr (var_anode) on <var_anode:ABinopExpr> */
var57 = var_anode->attrs[COLOR_parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <var_anode:ABinopExpr> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1466);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = ((val* (*)(val*))(var55->class->vft[COLOR_typing__AExpr__its_variable]))(var55) /* its_variable on <var55:AExpr>*/;
}
var_variable = var58;
var59 = NULL;
if (var_variable == NULL) {
var60 = 1; /* is null */
} else {
var60 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_variable,var59) on <var_variable:nullable Variable> */
var_other = var59;
{
{ /* Inline kernel#Object#is_same_instance (var_variable,var_other) on <var_variable:nullable Variable(Variable)> */
var65 = var_variable == var_other;
var63 = var65;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
var60 = var61;
}
if (var60){
goto RET_LABEL;
} else {
}
/* <var_anode:ABinopExpr> isa AEqExpr */
cltype67 = type_parser_nodes__AEqExpr.color;
idtype68 = type_parser_nodes__AEqExpr.id;
if(cltype67 >= var_anode->type->table_size) {
var66 = 0;
} else {
var66 = var_anode->type->type_table[cltype67] == idtype68;
}
if (var66){
{
{ /* Inline flow#AExpr#after_flow_context (var_anode) on <var_anode:ABinopExpr(AEqExpr)> */
var71 = var_anode->attrs[COLOR_flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_anode:ABinopExpr(AEqExpr)> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (var69 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 222);
show_backtrace(1);
} else {
{ /* Inline flow#FlowContext#when_true (var69) on <var69:nullable FlowContext> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/flow.nit", 225);
show_backtrace(1);
}
var74 = var69->attrs[COLOR_flow__FlowContext___when_true].val; /* _when_true on <var69:nullable FlowContext> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", "semantize/flow.nit", 225);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
typing__FlowContext__set_var(var72, var_variable, var_mtype2); /* Direct call typing#FlowContext#set_var on <var72:FlowContext>*/
}
{
{ /* Inline flow#AExpr#after_flow_context (var_anode) on <var_anode:ABinopExpr(AEqExpr)> */
var77 = var_anode->attrs[COLOR_flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_anode:ABinopExpr(AEqExpr)> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (var75 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 223);
show_backtrace(1);
} else {
{ /* Inline flow#FlowContext#when_false (var75) on <var75:nullable FlowContext> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/flow.nit", 228);
show_backtrace(1);
}
var80 = var75->attrs[COLOR_flow__FlowContext___when_false].val; /* _when_false on <var75:nullable FlowContext> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", "semantize/flow.nit", 228);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline model#MNullableType#mtype (var_mtype) on <var_mtype:nullable MType(MNullableType)> */
var83 = var_mtype->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_mtype:nullable MType(MNullableType)> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
typing__FlowContext__set_var(var78, var_variable, var81); /* Direct call typing#FlowContext#set_var on <var78:FlowContext>*/
}
} else {
/* <var_anode:ABinopExpr> isa ANeExpr */
cltype85 = type_parser_nodes__ANeExpr.color;
idtype86 = type_parser_nodes__ANeExpr.id;
if(cltype85 >= var_anode->type->table_size) {
var84 = 0;
} else {
var84 = var_anode->type->type_table[cltype85] == idtype86;
}
if (var84){
{
{ /* Inline flow#AExpr#after_flow_context (var_anode) on <var_anode:ABinopExpr(ANeExpr)> */
var89 = var_anode->attrs[COLOR_flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_anode:ABinopExpr(ANeExpr)> */
var87 = var89;
RET_LABEL88:(void)0;
}
}
if (var87 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 225);
show_backtrace(1);
} else {
{ /* Inline flow#FlowContext#when_false (var87) on <var87:nullable FlowContext> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/flow.nit", 228);
show_backtrace(1);
}
var92 = var87->attrs[COLOR_flow__FlowContext___when_false].val; /* _when_false on <var87:nullable FlowContext> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", "semantize/flow.nit", 228);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
typing__FlowContext__set_var(var90, var_variable, var_mtype2); /* Direct call typing#FlowContext#set_var on <var90:FlowContext>*/
}
{
{ /* Inline flow#AExpr#after_flow_context (var_anode) on <var_anode:ABinopExpr(ANeExpr)> */
var95 = var_anode->attrs[COLOR_flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_anode:ABinopExpr(ANeExpr)> */
var93 = var95;
RET_LABEL94:(void)0;
}
}
if (var93 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 226);
show_backtrace(1);
} else {
{ /* Inline flow#FlowContext#when_true (var93) on <var93:nullable FlowContext> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/flow.nit", 225);
show_backtrace(1);
}
var98 = var93->attrs[COLOR_flow__FlowContext___when_true].val; /* _when_true on <var93:nullable FlowContext> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", "semantize/flow.nit", 225);
show_backtrace(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline model#MNullableType#mtype (var_mtype) on <var_mtype:nullable MType(MNullableType)> */
var101 = var_mtype->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_mtype:nullable MType(MNullableType)> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1388);
show_backtrace(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
typing__FlowContext__set_var(var96, var_variable, var99); /* Direct call typing#FlowContext#set_var on <var96:FlowContext>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 228);
show_backtrace(1);
}
}
RET_LABEL:;
}
/* method typing#TypeVisitor#null_test for (self: Object, ABinopExpr) */
void VIRTUAL_typing__TypeVisitor__null_test(val* self, val* p0) {
typing__TypeVisitor__null_test(self, p0); /* Direct call typing#TypeVisitor#null_test on <self:Object(TypeVisitor)>*/
RET_LABEL:;
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 36);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 36);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 36);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 36);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
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
short int var18 /* : Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var_ /* var : Bool */;
val* var26 /* : null */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
val* var38 /* : nullable MProperty */;
val* var39 /* : null */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : ModelBuilder */;
val* var48 /* : ModelBuilder */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : FlatString */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
val* var64 /* : Array[Object] */;
long var65 /* : Int */;
val* var66 /* : NativeArray[Object] */;
val* var67 /* : String */;
val* var68 /* : ModelBuilder */;
val* var70 /* : ModelBuilder */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : FlatString */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
long var84 /* : Int */;
val* var85 /* : FlatString */;
val* var86 /* : Array[Object] */;
long var87 /* : Int */;
val* var88 /* : NativeArray[Object] */;
val* var89 /* : String */;
val* var90 /* : null */;
short int var91 /* : Bool */;
int cltype92;
int idtype93;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var_99 /* var : Bool */;
short int var_100 /* var : Bool */;
short int var101 /* : Bool */;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : FlatString */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : FlatString */;
val* var115 /* : Array[Object] */;
long var116 /* : Int */;
val* var117 /* : NativeArray[Object] */;
val* var118 /* : String */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
short int var_121 /* var : Bool */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
long var128 /* : Int */;
val* var129 /* : FlatString */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : NativeString */;
long var133 /* : Int */;
val* var134 /* : FlatString */;
val* var135 /* : Array[Object] */;
long var136 /* : Int */;
val* var137 /* : NativeArray[Object] */;
val* var138 /* : String */;
short int var139 /* : Bool */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
val* var142 /* : MVisibility */;
val* var144 /* : MVisibility */;
val* var145 /* : MVisibility */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
short int var149 /* : Bool */;
short int var151 /* : Bool */;
short int var_152 /* var : Bool */;
short int var153 /* : Bool */;
short int var_154 /* var : Bool */;
val* var155 /* : MModule */;
val* var157 /* : MModule */;
val* var158 /* : MClassDef */;
val* var160 /* : MClassDef */;
val* var161 /* : MModule */;
val* var163 /* : MModule */;
val* var164 /* : MVisibility */;
val* var165 /* : MVisibility */;
short int var166 /* : Bool */;
short int var_167 /* var : Bool */;
val* var168 /* : ModelBuilder */;
val* var170 /* : ModelBuilder */;
val* var171 /* : ToolContext */;
val* var173 /* : ToolContext */;
val* var174 /* : OptionBool */;
val* var176 /* : OptionBool */;
val* var177 /* : nullable Object */;
val* var179 /* : nullable Object */;
short int var180 /* : Bool */;
short int var181 /* : Bool */;
val* var182 /* : ModelBuilder */;
val* var184 /* : ModelBuilder */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
long var188 /* : Int */;
val* var189 /* : FlatString */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : FlatString */;
val* var195 /* : Array[Object] */;
long var196 /* : Int */;
val* var197 /* : NativeArray[Object] */;
val* var198 /* : String */;
val* var199 /* : null */;
val* var200 /* : nullable MDeprecationInfo */;
val* var202 /* : nullable MDeprecationInfo */;
val* var_info /* var info: nullable MDeprecationInfo */;
short int var203 /* : Bool */;
val* var204 /* : null */;
short int var205 /* : Bool */;
short int var206 /* : Bool */;
val* var_other208 /* var other: nullable Object */;
short int var209 /* : Bool */;
short int var210 /* : Bool */;
short int var211 /* : Bool */;
short int var_212 /* var : Bool */;
val* var213 /* : nullable MPropDef */;
val* var215 /* : nullable MPropDef */;
val* var216 /* : MProperty */;
val* var218 /* : MProperty */;
val* var219 /* : nullable MDeprecationInfo */;
val* var221 /* : nullable MDeprecationInfo */;
val* var222 /* : null */;
short int var223 /* : Bool */;
short int var224 /* : Bool */;
short int var226 /* : Bool */;
short int var228 /* : Bool */;
val* var229 /* : nullable MDoc */;
val* var231 /* : nullable MDoc */;
val* var_mdoc /* var mdoc: nullable MDoc */;
val* var232 /* : null */;
short int var233 /* : Bool */;
short int var234 /* : Bool */;
short int var236 /* : Bool */;
short int var237 /* : Bool */;
short int var238 /* : Bool */;
val* var239 /* : ModelBuilder */;
val* var241 /* : ModelBuilder */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
long var245 /* : Int */;
val* var246 /* : FlatString */;
static val* varonce247;
val* var248 /* : String */;
char* var249 /* : NativeString */;
long var250 /* : Int */;
val* var251 /* : FlatString */;
static val* varonce252;
val* var253 /* : String */;
char* var254 /* : NativeString */;
long var255 /* : Int */;
val* var256 /* : FlatString */;
val* var257 /* : Array[String] */;
val* var259 /* : Array[String] */;
val* var260 /* : nullable Object */;
val* var261 /* : Array[Object] */;
long var262 /* : Int */;
val* var263 /* : NativeArray[Object] */;
val* var264 /* : String */;
val* var265 /* : ModelBuilder */;
val* var267 /* : ModelBuilder */;
static val* varonce268;
val* var269 /* : String */;
char* var270 /* : NativeString */;
long var271 /* : Int */;
val* var272 /* : FlatString */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : NativeString */;
long var276 /* : Int */;
val* var277 /* : FlatString */;
static val* varonce278;
val* var279 /* : String */;
char* var280 /* : NativeString */;
long var281 /* : Int */;
val* var282 /* : FlatString */;
val* var283 /* : Array[Object] */;
long var284 /* : Int */;
val* var285 /* : NativeArray[Object] */;
val* var286 /* : String */;
val* var287 /* : MModule */;
val* var289 /* : MModule */;
val* var290 /* : Array[MPropDef] */;
val* var_propdefs /* var propdefs: Array[MMethodDef] */;
long var291 /* : Int */;
long var293 /* : Int */;
long var294 /* : Int */;
short int var295 /* : Bool */;
short int var296 /* : Bool */;
short int var298 /* : Bool */;
val* var299 /* : ModelBuilder */;
val* var301 /* : ModelBuilder */;
static val* varonce302;
val* var303 /* : String */;
char* var304 /* : NativeString */;
long var305 /* : Int */;
val* var306 /* : FlatString */;
static val* varonce307;
val* var308 /* : String */;
char* var309 /* : NativeString */;
long var310 /* : Int */;
val* var311 /* : FlatString */;
val* var312 /* : Array[Object] */;
long var313 /* : Int */;
val* var314 /* : NativeArray[Object] */;
val* var315 /* : String */;
val* var316 /* : null */;
long var317 /* : Int */;
long var319 /* : Int */;
long var320 /* : Int */;
short int var321 /* : Bool */;
short int var322 /* : Bool */;
short int var324 /* : Bool */;
val* var325 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable Object */;
val* var326 /* : ModelBuilder */;
val* var328 /* : ModelBuilder */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
long var332 /* : Int */;
val* var333 /* : FlatString */;
static val* varonce334;
val* var335 /* : String */;
char* var336 /* : NativeString */;
long var337 /* : Int */;
val* var338 /* : FlatString */;
static val* varonce339;
val* var340 /* : String */;
char* var341 /* : NativeString */;
long var342 /* : Int */;
val* var343 /* : FlatString */;
static val* varonce344;
val* var345 /* : String */;
char* var346 /* : NativeString */;
long var347 /* : Int */;
val* var348 /* : FlatString */;
static val* varonce349;
val* var350 /* : String */;
char* var351 /* : NativeString */;
long var352 /* : Int */;
val* var353 /* : FlatString */;
val* var354 /* : String */;
val* var355 /* : Array[Object] */;
long var356 /* : Int */;
val* var357 /* : NativeArray[Object] */;
val* var358 /* : String */;
val* var359 /* : MPropDef */;
val* var361 /* : MPropDef */;
val* var362 /* : MSignature */;
val* var363 /* : nullable MSignature */;
val* var365 /* : nullable MSignature */;
val* var366 /* : nullable MSignature */;
val* var368 /* : nullable MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var369 /* : MType */;
short int var370 /* : Bool */;
int cltype371;
int idtype372;
const char* var_class_name;
short int var373 /* : Bool */;
short int var_erasure_cast /* var erasure_cast: Bool */;
val* var374 /* : nullable MSignature */;
val* var376 /* : nullable MSignature */;
val* var377 /* : nullable MType */;
val* var379 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var380 /* : Bool */;
short int var381 /* : Bool */;
short int var_382 /* var : Bool */;
val* var383 /* : null */;
short int var384 /* : Bool */;
short int var385 /* : Bool */;
short int var387 /* : Bool */;
short int var388 /* : Bool */;
short int var389 /* : Bool */;
val* var390 /* : MType */;
short int var391 /* : Bool */;
int cltype392;
int idtype393;
val* var394 /* : nullable MType */;
val* var396 /* : nullable MType */;
val* var_erased_rettype /* var erased_rettype: nullable MType */;
val* var397 /* : null */;
short int var398 /* : Bool */;
short int var399 /* : Bool */;
short int var401 /* : Bool */;
short int var402 /* : Bool */;
short int var403 /* : Bool */;
short int var404 /* : Bool */;
val* var405 /* : CallSite */;
val* var406 /* : MModule */;
val* var408 /* : MModule */;
val* var409 /* : nullable MClassType */;
val* var411 /* : nullable MClassType */;
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
if (varonce19) {
var20 = varonce19;
} else {
var21 = "new";
var22 = 3;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
{
var25 = string__FlatString___61d_61d(var_name, var20);
var24 = var25;
}
var_ = var24;
if (var24){
var26 = NULL;
if (var_mproperty == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mproperty,var26) on <var_mproperty:nullable MProperty> */
var_other = var26;
{
{ /* Inline kernel#Object#is_same_instance (var_mproperty,var_other) on <var_mproperty:nullable MProperty(MProperty)> */
var32 = var_mproperty == var_other;
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
var18 = var27;
} else {
var18 = var_;
}
if (var18){
if (varonce33) {
var34 = varonce33;
} else {
var35 = "init";
var36 = 4;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var_name = var34;
{
var38 = typing__TypeVisitor__try_get_mproperty_by_name2(self, var_node, var_unsafe_type, var_name);
}
var_mproperty = var38;
} else {
}
var39 = NULL;
if (var_mproperty == NULL) {
var40 = 1; /* is null */
} else {
var40 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mproperty,var39) on <var_mproperty:nullable MProperty> */
var_other = var39;
{
{ /* Inline kernel#Object#is_same_instance (var_mproperty,var_other) on <var_mproperty:nullable MProperty(MProperty)> */
var45 = var_mproperty == var_other;
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
if (var_recv_is_self){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var48 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (varonce49) {
var50 = varonce49;
} else {
var51 = "Error: Method or variable \'";
var52 = 27;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = "\' unknown in ";
var57 = 13;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = ".";
var62 = 1;
var63 = string__NativeString__to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var64 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var64 = array_instance Array[Object] */
var65 = 5;
var66 = NEW_array__NativeArray(var65, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var66)->values[0] = (val*) var50;
((struct instance_array__NativeArray*)var66)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var66)->values[2] = (val*) var55;
((struct instance_array__NativeArray*)var66)->values[3] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var66)->values[4] = (val*) var60;
{
((void (*)(val*, val*, long))(var64->class->vft[COLOR_array__Array__with_native]))(var64, var66, var65) /* with_native on <var64:Array[Object]>*/;
}
}
{
var67 = ((val* (*)(val*))(var64->class->vft[COLOR_string__Object__to_s]))(var64) /* to_s on <var64:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var46, var_node, var67); /* Direct call modelbuilder#ModelBuilder#error on <var46:ModelBuilder>*/
}
} else {
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var70 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
if (varonce71) {
var72 = varonce71;
} else {
var73 = "Error: Method \'";
var74 = 15;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
if (varonce76) {
var77 = varonce76;
} else {
var78 = "\' doesn\'t exists in ";
var79 = 20;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
if (varonce81) {
var82 = varonce81;
} else {
var83 = ".";
var84 = 1;
var85 = string__NativeString__to_s_with_length(var83, var84);
var82 = var85;
varonce81 = var82;
}
var86 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var86 = array_instance Array[Object] */
var87 = 5;
var88 = NEW_array__NativeArray(var87, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var88)->values[0] = (val*) var72;
((struct instance_array__NativeArray*)var88)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var88)->values[2] = (val*) var77;
((struct instance_array__NativeArray*)var88)->values[3] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var88)->values[4] = (val*) var82;
{
((void (*)(val*, val*, long))(var86->class->vft[COLOR_array__Array__with_native]))(var86, var88, var87) /* with_native on <var86:Array[Object]>*/;
}
}
{
var89 = ((val* (*)(val*))(var86->class->vft[COLOR_string__Object__to_s]))(var86) /* to_s on <var86:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var68, var_node, var89); /* Direct call modelbuilder#ModelBuilder#error on <var68:ModelBuilder>*/
}
}
var90 = NULL;
var = var90;
goto RET_LABEL;
} else {
}
/* <var_mproperty:nullable MProperty(MProperty)> isa MMethod */
cltype92 = type_model__MMethod.color;
idtype93 = type_model__MMethod.id;
if(cltype92 >= var_mproperty->type->table_size) {
var91 = 0;
} else {
var91 = var_mproperty->type->type_table[cltype92] == idtype93;
}
if (unlikely(!var91)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 290);
show_backtrace(1);
}
{
{ /* Inline typing#TypeVisitor#is_toplevel_context (self) on <self:TypeVisitor> */
var98 = self->attrs[COLOR_typing__TypeVisitor___is_toplevel_context].s; /* _is_toplevel_context on <self:TypeVisitor> */
var96 = var98;
RET_LABEL97:(void)0;
}
}
var_99 = var96;
if (var96){
var95 = var_recv_is_self;
} else {
var95 = var_99;
}
var_100 = var95;
if (var95){
{
{ /* Inline model#MMethod#is_toplevel (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var103 = var_mproperty->attrs[COLOR_model__MMethod___is_toplevel].s; /* _is_toplevel on <var_mproperty:nullable MProperty(MMethod)> */
var101 = var103;
RET_LABEL102:(void)0;
}
}
var104 = !var101;
var94 = var104;
} else {
var94 = var_100;
}
if (var94){
if (varonce105) {
var106 = varonce105;
} else {
var107 = "Error: \'";
var108 = 8;
var109 = string__NativeString__to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
if (varonce110) {
var111 = varonce110;
} else {
var112 = "\' is not a top-level method, thus need a receiver.";
var113 = 50;
var114 = string__NativeString__to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
var115 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var115 = array_instance Array[Object] */
var116 = 3;
var117 = NEW_array__NativeArray(var116, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var117)->values[0] = (val*) var106;
((struct instance_array__NativeArray*)var117)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var117)->values[2] = (val*) var111;
{
((void (*)(val*, val*, long))(var115->class->vft[COLOR_array__Array__with_native]))(var115, var117, var116) /* with_native on <var115:Array[Object]>*/;
}
}
{
var118 = ((val* (*)(val*))(var115->class->vft[COLOR_string__Object__to_s]))(var115) /* to_s on <var115:Array[Object]>*/;
}
{
typing__TypeVisitor__error(self, var_node, var118); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
} else {
}
var120 = !var_recv_is_self;
var_121 = var120;
if (var120){
{
{ /* Inline model#MMethod#is_toplevel (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var124 = var_mproperty->attrs[COLOR_model__MMethod___is_toplevel].s; /* _is_toplevel on <var_mproperty:nullable MProperty(MMethod)> */
var122 = var124;
RET_LABEL123:(void)0;
}
}
var119 = var122;
} else {
var119 = var_121;
}
if (var119){
if (varonce125) {
var126 = varonce125;
} else {
var127 = "Error: cannot call \'";
var128 = 20;
var129 = string__NativeString__to_s_with_length(var127, var128);
var126 = var129;
varonce125 = var126;
}
if (varonce130) {
var131 = varonce130;
} else {
var132 = "\', a top-level method, with a receiver.";
var133 = 39;
var134 = string__NativeString__to_s_with_length(var132, var133);
var131 = var134;
varonce130 = var131;
}
var135 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var135 = array_instance Array[Object] */
var136 = 3;
var137 = NEW_array__NativeArray(var136, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var137)->values[0] = (val*) var126;
((struct instance_array__NativeArray*)var137)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var137)->values[2] = (val*) var131;
{
((void (*)(val*, val*, long))(var135->class->vft[COLOR_array__Array__with_native]))(var135, var137, var136) /* with_native on <var135:Array[Object]>*/;
}
}
{
var138 = ((val* (*)(val*))(var135->class->vft[COLOR_string__Object__to_s]))(var135) /* to_s on <var135:Array[Object]>*/;
}
{
typing__TypeVisitor__error(self, var_node, var138); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
} else {
}
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var144 = var_mproperty->attrs[COLOR_model__MProperty___visibility].val; /* _visibility on <var_mproperty:nullable MProperty(MMethod)> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1630);
show_backtrace(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
{
var145 = model_base__Object__protected_visibility(self);
}
{
{ /* Inline kernel#Object#== (var142,var145) on <var142:MVisibility> */
var_other = var145;
{
{ /* Inline kernel#Object#is_same_instance (var142,var_other) on <var142:MVisibility> */
var151 = var142 == var_other;
var149 = var151;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
}
var147 = var149;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
var146 = var147;
}
var_152 = var146;
if (var146){
var153 = !var_recv_is_self;
var141 = var153;
} else {
var141 = var_152;
}
var_154 = var141;
if (var141){
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var157 = self->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var157 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 36);
show_backtrace(1);
}
var155 = var157;
RET_LABEL156:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var160 = var_mproperty->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mproperty:nullable MProperty(MMethod)> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1615);
show_backtrace(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var158) on <var158:MClassDef> */
var163 = var158->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var158:MClassDef> */
if (unlikely(var163 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
{
var164 = mmodule__MModule__visibility_for(var155, var161);
}
{
var165 = model_base__Object__intrude_visibility(self);
}
{
var166 = model_base__MVisibility___60d(var164, var165);
}
var140 = var166;
} else {
var140 = var_154;
}
var_167 = var140;
if (var140){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var170 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var170 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
show_backtrace(1);
}
var168 = var170;
RET_LABEL169:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var168) on <var168:ModelBuilder> */
var173 = var168->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var168:ModelBuilder> */
if (unlikely(var173 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
show_backtrace(1);
}
var171 = var173;
RET_LABEL172:(void)0;
}
}
{
{ /* Inline modelbuilder#ToolContext#opt_ignore_visibility (var171) on <var171:ToolContext> */
var176 = var171->attrs[COLOR_modelbuilder__ToolContext___opt_ignore_visibility].val; /* _opt_ignore_visibility on <var171:ToolContext> */
if (unlikely(var176 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_ignore_visibility");
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 42);
show_backtrace(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
{
{ /* Inline opts#Option#value (var174) on <var174:OptionBool> */
var179 = var174->attrs[COLOR_opts__Option___value].val; /* _value on <var174:OptionBool> */
var177 = var179;
RET_LABEL178:(void)0;
}
}
var180 = ((struct instance_kernel__Bool*)var177)->value; /* autounbox from nullable Object to Bool */;
var181 = !var180;
var139 = var181;
} else {
var139 = var_167;
}
if (var139){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var184 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var184 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
show_backtrace(1);
}
var182 = var184;
RET_LABEL183:(void)0;
}
}
if (varonce185) {
var186 = varonce185;
} else {
var187 = "Error: Method \'";
var188 = 15;
var189 = string__NativeString__to_s_with_length(var187, var188);
var186 = var189;
varonce185 = var186;
}
if (varonce190) {
var191 = varonce190;
} else {
var192 = "\' is protected and can only acceded by self.";
var193 = 44;
var194 = string__NativeString__to_s_with_length(var192, var193);
var191 = var194;
varonce190 = var191;
}
var195 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var195 = array_instance Array[Object] */
var196 = 3;
var197 = NEW_array__NativeArray(var196, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var197)->values[0] = (val*) var186;
((struct instance_array__NativeArray*)var197)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var197)->values[2] = (val*) var191;
{
((void (*)(val*, val*, long))(var195->class->vft[COLOR_array__Array__with_native]))(var195, var197, var196) /* with_native on <var195:Array[Object]>*/;
}
}
{
var198 = ((val* (*)(val*))(var195->class->vft[COLOR_string__Object__to_s]))(var195) /* to_s on <var195:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var182, var_node, var198); /* Direct call modelbuilder#ModelBuilder#error on <var182:ModelBuilder>*/
}
var199 = NULL;
var = var199;
goto RET_LABEL;
} else {
}
{
{ /* Inline mdoc#MEntity#deprecation (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var202 = var_mproperty->attrs[COLOR_mdoc__MEntity___deprecation].val; /* _deprecation on <var_mproperty:nullable MProperty(MMethod)> */
var200 = var202;
RET_LABEL201:(void)0;
}
}
var_info = var200;
var204 = NULL;
if (var_info == NULL) {
var205 = 0; /* is null */
} else {
var205 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_info,var204) on <var_info:nullable MDeprecationInfo> */
var_other208 = var204;
{
var210 = ((short int (*)(val*, val*))(var_info->class->vft[COLOR_kernel__Object___61d_61d]))(var_info, var_other208) /* == on <var_info:nullable MDeprecationInfo(MDeprecationInfo)>*/;
var209 = var210;
}
var211 = !var209;
var206 = var211;
goto RET_LABEL207;
RET_LABEL207:(void)0;
}
var205 = var206;
}
var_212 = var205;
if (var205){
{
{ /* Inline typing#TypeVisitor#mpropdef (self) on <self:TypeVisitor> */
var215 = self->attrs[COLOR_typing__TypeVisitor___mpropdef].val; /* _mpropdef on <self:TypeVisitor> */
var213 = var215;
RET_LABEL214:(void)0;
}
}
if (var213 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 305);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var213) on <var213:nullable MPropDef> */
if (unlikely(var213 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var218 = var213->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var213:nullable MPropDef> */
if (unlikely(var218 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1898);
show_backtrace(1);
}
var216 = var218;
RET_LABEL217:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#deprecation (var216) on <var216:MProperty> */
var221 = var216->attrs[COLOR_mdoc__MEntity___deprecation].val; /* _deprecation on <var216:MProperty> */
var219 = var221;
RET_LABEL220:(void)0;
}
}
var222 = NULL;
if (var219 == NULL) {
var223 = 1; /* is null */
} else {
var223 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var219,var222) on <var219:nullable MDeprecationInfo> */
var_other = var222;
{
{ /* Inline kernel#Object#is_same_instance (var219,var_other) on <var219:nullable MDeprecationInfo(MDeprecationInfo)> */
var228 = var219 == var_other;
var226 = var228;
goto RET_LABEL227;
RET_LABEL227:(void)0;
}
}
var224 = var226;
goto RET_LABEL225;
RET_LABEL225:(void)0;
}
var223 = var224;
}
var203 = var223;
} else {
var203 = var_212;
}
if (var203){
{
{ /* Inline mdoc#MDeprecationInfo#mdoc (var_info) on <var_info:nullable MDeprecationInfo(MDeprecationInfo)> */
var231 = var_info->attrs[COLOR_mdoc__MDeprecationInfo___mdoc].val; /* _mdoc on <var_info:nullable MDeprecationInfo(MDeprecationInfo)> */
var229 = var231;
RET_LABEL230:(void)0;
}
}
var_mdoc = var229;
var232 = NULL;
if (var_mdoc == NULL) {
var233 = 0; /* is null */
} else {
var233 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mdoc,var232) on <var_mdoc:nullable MDoc> */
var_other208 = var232;
{
var237 = ((short int (*)(val*, val*))(var_mdoc->class->vft[COLOR_kernel__Object___61d_61d]))(var_mdoc, var_other208) /* == on <var_mdoc:nullable MDoc(MDoc)>*/;
var236 = var237;
}
var238 = !var236;
var234 = var238;
goto RET_LABEL235;
RET_LABEL235:(void)0;
}
var233 = var234;
}
if (var233){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var241 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var241 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
show_backtrace(1);
}
var239 = var241;
RET_LABEL240:(void)0;
}
}
if (varonce242) {
var243 = varonce242;
} else {
var244 = "deprecated-method";
var245 = 17;
var246 = string__NativeString__to_s_with_length(var244, var245);
var243 = var246;
varonce242 = var243;
}
if (varonce247) {
var248 = varonce247;
} else {
var249 = "Deprecation Warning: Method \'";
var250 = 29;
var251 = string__NativeString__to_s_with_length(var249, var250);
var248 = var251;
varonce247 = var248;
}
if (varonce252) {
var253 = varonce252;
} else {
var254 = "\' is deprecated: ";
var255 = 17;
var256 = string__NativeString__to_s_with_length(var254, var255);
var253 = var256;
varonce252 = var253;
}
{
{ /* Inline mdoc#MDoc#content (var_mdoc) on <var_mdoc:nullable MDoc(MDoc)> */
var259 = var_mdoc->attrs[COLOR_mdoc__MDoc___content].val; /* _content on <var_mdoc:nullable MDoc(MDoc)> */
if (unlikely(var259 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", "model/mdoc.nit", 22);
show_backtrace(1);
}
var257 = var259;
RET_LABEL258:(void)0;
}
}
{
var260 = abstract_collection__SequenceRead__first(var257);
}
var261 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var261 = array_instance Array[Object] */
var262 = 4;
var263 = NEW_array__NativeArray(var262, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var263)->values[0] = (val*) var248;
((struct instance_array__NativeArray*)var263)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var263)->values[2] = (val*) var253;
((struct instance_array__NativeArray*)var263)->values[3] = (val*) var260;
{
((void (*)(val*, val*, long))(var261->class->vft[COLOR_array__Array__with_native]))(var261, var263, var262) /* with_native on <var261:Array[Object]>*/;
}
}
{
var264 = ((val* (*)(val*))(var261->class->vft[COLOR_string__Object__to_s]))(var261) /* to_s on <var261:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(var239, var_node, var243, var264); /* Direct call modelbuilder#ModelBuilder#warning on <var239:ModelBuilder>*/
}
} else {
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var267 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var267 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
show_backtrace(1);
}
var265 = var267;
RET_LABEL266:(void)0;
}
}
if (varonce268) {
var269 = varonce268;
} else {
var270 = "deprecated-method";
var271 = 17;
var272 = string__NativeString__to_s_with_length(var270, var271);
var269 = var272;
varonce268 = var269;
}
if (varonce273) {
var274 = varonce273;
} else {
var275 = "Deprecation Warning: Method \'";
var276 = 29;
var277 = string__NativeString__to_s_with_length(var275, var276);
var274 = var277;
varonce273 = var274;
}
if (varonce278) {
var279 = varonce278;
} else {
var280 = "\' is deprecated.";
var281 = 16;
var282 = string__NativeString__to_s_with_length(var280, var281);
var279 = var282;
varonce278 = var279;
}
var283 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var283 = array_instance Array[Object] */
var284 = 3;
var285 = NEW_array__NativeArray(var284, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var285)->values[0] = (val*) var274;
((struct instance_array__NativeArray*)var285)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var285)->values[2] = (val*) var279;
{
((void (*)(val*, val*, long))(var283->class->vft[COLOR_array__Array__with_native]))(var283, var285, var284) /* with_native on <var283:Array[Object]>*/;
}
}
{
var286 = ((val* (*)(val*))(var283->class->vft[COLOR_string__Object__to_s]))(var283) /* to_s on <var283:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(var265, var_node, var269, var286); /* Direct call modelbuilder#ModelBuilder#warning on <var265:ModelBuilder>*/
}
}
} else {
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var289 = self->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var289 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 36);
show_backtrace(1);
}
var287 = var289;
RET_LABEL288:(void)0;
}
}
{
var290 = model__MProperty__lookup_definitions(var_mproperty, var287, var_unsafe_type);
}
var_propdefs = var290;
{
{ /* Inline array#AbstractArrayRead#length (var_propdefs) on <var_propdefs:Array[MMethodDef]> */
var293 = var_propdefs->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_propdefs:Array[MMethodDef]> */
var291 = var293;
RET_LABEL292:(void)0;
}
}
var294 = 0;
{
{ /* Inline kernel#Int#== (var291,var294) on <var291:Int> */
var298 = var291 == var294;
var296 = var298;
goto RET_LABEL297;
RET_LABEL297:(void)0;
}
var295 = var296;
}
if (var295){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var301 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var301 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
show_backtrace(1);
}
var299 = var301;
RET_LABEL300:(void)0;
}
}
if (varonce302) {
var303 = varonce302;
} else {
var304 = "Type error: no definition found for property ";
var305 = 45;
var306 = string__NativeString__to_s_with_length(var304, var305);
var303 = var306;
varonce302 = var303;
}
if (varonce307) {
var308 = varonce307;
} else {
var309 = " in ";
var310 = 4;
var311 = string__NativeString__to_s_with_length(var309, var310);
var308 = var311;
varonce307 = var308;
}
var312 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var312 = array_instance Array[Object] */
var313 = 4;
var314 = NEW_array__NativeArray(var313, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var314)->values[0] = (val*) var303;
((struct instance_array__NativeArray*)var314)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var314)->values[2] = (val*) var308;
((struct instance_array__NativeArray*)var314)->values[3] = (val*) var_unsafe_type;
{
((void (*)(val*, val*, long))(var312->class->vft[COLOR_array__Array__with_native]))(var312, var314, var313) /* with_native on <var312:Array[Object]>*/;
}
}
{
var315 = ((val* (*)(val*))(var312->class->vft[COLOR_string__Object__to_s]))(var312) /* to_s on <var312:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var299, var_node, var315); /* Direct call modelbuilder#ModelBuilder#error on <var299:ModelBuilder>*/
}
var316 = NULL;
var = var316;
goto RET_LABEL;
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_propdefs) on <var_propdefs:Array[MMethodDef]> */
var319 = var_propdefs->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_propdefs:Array[MMethodDef]> */
var317 = var319;
RET_LABEL318:(void)0;
}
}
var320 = 1;
{
{ /* Inline kernel#Int#== (var317,var320) on <var317:Int> */
var324 = var317 == var320;
var322 = var324;
goto RET_LABEL323;
RET_LABEL323:(void)0;
}
var321 = var322;
}
if (var321){
{
var325 = abstract_collection__SequenceRead__first(var_propdefs);
}
var_mpropdef = var325;
} else {
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var328 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var328 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
show_backtrace(1);
}
var326 = var328;
RET_LABEL327:(void)0;
}
}
if (varonce329) {
var330 = varonce329;
} else {
var331 = "property-conflict";
var332 = 17;
var333 = string__NativeString__to_s_with_length(var331, var332);
var330 = var333;
varonce329 = var330;
}
if (varonce334) {
var335 = varonce334;
} else {
var336 = "Warning: conflicting property definitions for property ";
var337 = 55;
var338 = string__NativeString__to_s_with_length(var336, var337);
var335 = var338;
varonce334 = var335;
}
if (varonce339) {
var340 = varonce339;
} else {
var341 = " in ";
var342 = 4;
var343 = string__NativeString__to_s_with_length(var341, var342);
var340 = var343;
varonce339 = var340;
}
if (varonce344) {
var345 = varonce344;
} else {
var346 = ": ";
var347 = 2;
var348 = string__NativeString__to_s_with_length(var346, var347);
var345 = var348;
varonce344 = var345;
}
if (varonce349) {
var350 = varonce349;
} else {
var351 = " ";
var352 = 1;
var353 = string__NativeString__to_s_with_length(var351, var352);
var350 = var353;
varonce349 = var350;
}
{
var354 = string__Collection__join(var_propdefs, var350);
}
var355 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var355 = array_instance Array[Object] */
var356 = 6;
var357 = NEW_array__NativeArray(var356, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var357)->values[0] = (val*) var335;
((struct instance_array__NativeArray*)var357)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var357)->values[2] = (val*) var340;
((struct instance_array__NativeArray*)var357)->values[3] = (val*) var_unsafe_type;
((struct instance_array__NativeArray*)var357)->values[4] = (val*) var345;
((struct instance_array__NativeArray*)var357)->values[5] = (val*) var354;
{
((void (*)(val*, val*, long))(var355->class->vft[COLOR_array__Array__with_native]))(var355, var357, var356) /* with_native on <var355:Array[Object]>*/;
}
}
{
var358 = ((val* (*)(val*))(var355->class->vft[COLOR_string__Object__to_s]))(var355) /* to_s on <var355:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(var326, var_node, var330, var358); /* Direct call modelbuilder#ModelBuilder#warning on <var326:ModelBuilder>*/
}
{
{ /* Inline model#MProperty#intro (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var361 = var_mproperty->attrs[COLOR_model__MProperty___intro].val; /* _intro on <var_mproperty:nullable MProperty(MMethod)> */
if (unlikely(var361 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1649);
show_backtrace(1);
}
var359 = var361;
RET_LABEL360:(void)0;
}
}
var_mpropdef = var359;
}
}
{
{ /* Inline model#MMethodDef#new_msignature (var_mpropdef) on <var_mpropdef:nullable Object(MMethodDef)> */
var365 = var_mpropdef->attrs[COLOR_model__MMethodDef___new_msignature].val; /* _new_msignature on <var_mpropdef:nullable Object(MMethodDef)> */
var363 = var365;
RET_LABEL364:(void)0;
}
}
if (var363!=NULL) {
var362 = var363;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable Object(MMethodDef)> */
var368 = var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable Object(MMethodDef)> */
var366 = var368;
RET_LABEL367:(void)0;
}
}
if (unlikely(var366 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 327);
show_backtrace(1);
}
var362 = var366;
}
var_msignature = var362;
{
var369 = typing__TypeVisitor__resolve_for(self, var_msignature, var_recvtype, var_recv_is_self);
}
/* <var369:MType> isa MSignature */
cltype371 = type_model__MSignature.color;
idtype372 = type_model__MSignature.id;
if(cltype371 >= var369->type->table_size) {
var370 = 0;
} else {
var370 = var369->type->type_table[cltype371] == idtype372;
}
if (unlikely(!var370)) {
var_class_name = var369 == NULL ? "null" : var369->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MSignature", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 328);
show_backtrace(1);
}
var_msignature = var369;
var373 = 0;
var_erasure_cast = var373;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable Object(MMethodDef)> */
var376 = var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable Object(MMethodDef)> */
var374 = var376;
RET_LABEL375:(void)0;
}
}
if (var374 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 331);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var374) on <var374:nullable MSignature> */
if (unlikely(var374 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1468);
show_backtrace(1);
}
var379 = var374->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var374:nullable MSignature> */
var377 = var379;
RET_LABEL378:(void)0;
}
}
var_rettype = var377;
var381 = !var_recv_is_self;
var_382 = var381;
if (var381){
var383 = NULL;
if (var_rettype == NULL) {
var384 = 0; /* is null */
} else {
var384 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rettype,var383) on <var_rettype:nullable MType> */
var_other208 = var383;
{
var388 = ((short int (*)(val*, val*))(var_rettype->class->vft[COLOR_kernel__Object___61d_61d]))(var_rettype, var_other208) /* == on <var_rettype:nullable MType(MType)>*/;
var387 = var388;
}
var389 = !var387;
var385 = var389;
goto RET_LABEL386;
RET_LABEL386:(void)0;
}
var384 = var385;
}
var380 = var384;
} else {
var380 = var_382;
}
if (var380){
{
var390 = ((val* (*)(val*))(var_rettype->class->vft[COLOR_model__MType__as_notnullable]))(var_rettype) /* as_notnullable on <var_rettype:nullable MType(MType)>*/;
}
var_rettype = var390;
/* <var_rettype:nullable MType(MType)> isa MParameterType */
cltype392 = type_model__MParameterType.color;
idtype393 = type_model__MParameterType.id;
if(cltype392 >= var_rettype->type->table_size) {
var391 = 0;
} else {
var391 = var_rettype->type->type_table[cltype392] == idtype393;
}
if (var391){
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var396 = var_msignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var394 = var396;
RET_LABEL395:(void)0;
}
}
var_erased_rettype = var394;
var397 = NULL;
if (var_erased_rettype == NULL) {
var398 = 0; /* is null */
} else {
var398 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_erased_rettype,var397) on <var_erased_rettype:nullable MType> */
var_other208 = var397;
{
var402 = ((short int (*)(val*, val*))(var_erased_rettype->class->vft[COLOR_kernel__Object___61d_61d]))(var_erased_rettype, var_other208) /* == on <var_erased_rettype:nullable MType(MType)>*/;
var401 = var402;
}
var403 = !var401;
var399 = var403;
goto RET_LABEL400;
RET_LABEL400:(void)0;
}
var398 = var399;
}
if (unlikely(!var398)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 336);
show_backtrace(1);
}
var404 = 1;
var_erasure_cast = var404;
} else {
}
} else {
}
var405 = NEW_typing__CallSite(&type_typing__CallSite);
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var408 = self->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var408 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 36);
show_backtrace(1);
}
var406 = var408;
RET_LABEL407:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#anchor (self) on <self:TypeVisitor> */
var411 = self->attrs[COLOR_typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
var409 = var411;
RET_LABEL410:(void)0;
}
}
{
((void (*)(val*, val*))(var405->class->vft[COLOR_typing__CallSite__node_61d]))(var405, var_node) /* node= on <var405:CallSite>*/;
}
{
((void (*)(val*, val*))(var405->class->vft[COLOR_typing__CallSite__recv_61d]))(var405, var_recvtype) /* recv= on <var405:CallSite>*/;
}
{
((void (*)(val*, val*))(var405->class->vft[COLOR_typing__CallSite__mmodule_61d]))(var405, var406) /* mmodule= on <var405:CallSite>*/;
}
{
((void (*)(val*, val*))(var405->class->vft[COLOR_typing__CallSite__anchor_61d]))(var405, var409) /* anchor= on <var405:CallSite>*/;
}
{
((void (*)(val*, short int))(var405->class->vft[COLOR_typing__CallSite__recv_is_self_61d]))(var405, var_recv_is_self) /* recv_is_self= on <var405:CallSite>*/;
}
{
((void (*)(val*, val*))(var405->class->vft[COLOR_typing__CallSite__mproperty_61d]))(var405, var_mproperty) /* mproperty= on <var405:CallSite>*/;
}
{
((void (*)(val*, val*))(var405->class->vft[COLOR_typing__CallSite__mpropdef_61d]))(var405, var_mpropdef) /* mpropdef= on <var405:CallSite>*/;
}
{
((void (*)(val*, val*))(var405->class->vft[COLOR_typing__CallSite__msignature_61d]))(var405, var_msignature) /* msignature= on <var405:CallSite>*/;
}
{
((void (*)(val*, short int))(var405->class->vft[COLOR_typing__CallSite__erasure_cast_61d]))(var405, var_erasure_cast) /* erasure_cast= on <var405:CallSite>*/;
}
{
((void (*)(val*))(var405->class->vft[COLOR_kernel__Object__init]))(var405) /* init on <var405:CallSite>*/;
}
var_callsite = var405;
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
/* method typing#TypeVisitor#try_get_method for (self: TypeVisitor, ANode, MType, String, Bool): nullable CallSite */
val* typing__TypeVisitor__try_get_method(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : nullable CallSite */;
val* var_node /* var node: ANode */;
val* var_recvtype /* var recvtype: MType */;
val* var_name /* var name: String */;
short int var_recv_is_self /* var recv_is_self: Bool */;
val* var1 /* : MType */;
val* var_unsafe_type /* var unsafe_type: MType */;
val* var2 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : null */;
val* var11 /* : nullable CallSite */;
var_node = p0;
var_recvtype = p1;
var_name = p2;
var_recv_is_self = p3;
{
var1 = typing__TypeVisitor__anchor_to(self, var_recvtype);
}
var_unsafe_type = var1;
{
var2 = typing__TypeVisitor__try_get_mproperty_by_name2(self, var_node, var_unsafe_type, var_name);
}
var_mproperty = var2;
var3 = NULL;
if (var_mproperty == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mproperty,var3) on <var_mproperty:nullable MProperty> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_mproperty,var_other) on <var_mproperty:nullable MProperty(MProperty)> */
var9 = var_mproperty == var_other;
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
var10 = NULL;
var = var10;
goto RET_LABEL;
} else {
}
{
var11 = typing__TypeVisitor__get_method(self, var_node, var_recvtype, var_name, var_recv_is_self);
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#try_get_method for (self: Object, ANode, MType, String, Bool): nullable CallSite */
val* VIRTUAL_typing__TypeVisitor__try_get_method(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = typing__TypeVisitor__try_get_method(self, p0, p1, p2, p3);
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
long var11 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
short int var19 /* : Bool */;
val* var20 /* : ModelBuilder */;
val* var22 /* : ModelBuilder */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
short int var36 /* : Bool */;
long var37 /* : Int */;
long var39 /* : Int */;
long var40 /* : Int */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : ModelBuilder */;
val* var48 /* : ModelBuilder */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : FlatString */;
long var54 /* : Int */;
long var56 /* : Int */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : FlatString */;
long var62 /* : Int */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : FlatString */;
val* var68 /* : Array[Object] */;
long var69 /* : Int */;
val* var70 /* : NativeArray[Object] */;
val* var71 /* : Object */;
val* var72 /* : Object */;
val* var73 /* : String */;
short int var74 /* : Bool */;
long var75 /* : Int */;
long var77 /* : Int */;
long var78 /* : Int */;
long var79 /* : Int */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
long var85 /* : Int */;
long var_vararg_decl /* var vararg_decl: Int */;
long var86 /* : Int */;
long var_i /* var i: Int */;
long var87 /* : Int */;
long var_ /* var : Int */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
int cltype91;
int idtype92;
const char* var_class_name93;
short int var94 /* : Bool */;
long var_j /* var j: Int */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
const char* var_class_name104;
short int var105 /* : Bool */;
long var106 /* : Int */;
short int var108 /* : Bool */;
int cltype109;
int idtype110;
const char* var_class_name111;
long var112 /* : Int */;
val* var113 /* : Array[MParameter] */;
val* var115 /* : Array[MParameter] */;
val* var116 /* : nullable Object */;
val* var117 /* : MType */;
val* var119 /* : MType */;
val* var_paramtype /* var paramtype: MType */;
val* var120 /* : nullable Object */;
val* var121 /* : nullable MType */;
long var122 /* : Int */;
long var123 /* : Int */;
long var125 /* : Int */;
short int var126 /* : Bool */;
short int var128 /* : Bool */;
int cltype129;
int idtype130;
const char* var_class_name131;
short int var132 /* : Bool */;
val* var133 /* : Array[MParameter] */;
val* var135 /* : Array[MParameter] */;
val* var136 /* : nullable Object */;
val* var137 /* : MType */;
val* var139 /* : MType */;
val* var_paramtype140 /* var paramtype: MType */;
val* var141 /* : nullable Object */;
val* var_first /* var first: AExpr */;
short int var142 /* : Bool */;
long var143 /* : Int */;
short int var144 /* : Bool */;
short int var145 /* : Bool */;
short int var147 /* : Bool */;
short int var_148 /* var : Bool */;
short int var149 /* : Bool */;
int cltype150;
int idtype151;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : FlatString */;
val* var157 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var158 /* : null */;
short int var159 /* : Bool */;
short int var160 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var162 /* : Bool */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
val* var166 /* : Array[MType] */;
long var167 /* : Int */;
val* var_168 /* var : Array[MType] */;
val* var169 /* : MClassType */;
val* var_array_mtype /* var array_mtype: MClassType */;
val* var170 /* : AExpr */;
val* var172 /* : AExpr */;
val* var173 /* : nullable MType */;
val* var174 /* : AExpr */;
val* var176 /* : AExpr */;
val* var177 /* : nullable MType */;
long var_j179 /* var j: Int */;
long var180 /* : Int */;
short int var182 /* : Bool */;
int cltype183;
int idtype184;
const char* var_class_name185;
long var186 /* : Int */;
long var_187 /* var : Int */;
short int var188 /* : Bool */;
short int var190 /* : Bool */;
int cltype191;
int idtype192;
const char* var_class_name193;
short int var194 /* : Bool */;
val* var195 /* : nullable Object */;
val* var196 /* : nullable MType */;
long var197 /* : Int */;
long var198 /* : Int */;
short int var200 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
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
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var11 = var_args->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = model__MSignature__arity(var_msignature);
}
{
{ /* Inline kernel#Int#< (var9,var12) on <var9:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var19 = var9 < var12;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var22 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (varonce) {
var23 = varonce;
} else {
var24 = "Error: arity mismatch; prototype is \'";
var25 = 37;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = "\'";
var30 = 1;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 4;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var23;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var_msignature;
((struct instance_array__NativeArray*)var34)->values[3] = (val*) var28;
{
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
}
{
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var20, var_node, var35); /* Direct call modelbuilder#ModelBuilder#error on <var20:ModelBuilder>*/
}
var36 = 0;
var = var36;
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var39 = var_args->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = model__MSignature__arity(var_msignature);
}
{
{ /* Inline kernel#Int#!= (var37,var40) on <var37:Int> */
var44 = var37 == var40;
var45 = !var44;
var42 = var45;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var41 = var42;
}
if (var41){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var48 = self->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (varonce49) {
var50 = varonce49;
} else {
var51 = "Error: Incorrect number of parameters. Got ";
var52 = 43;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var56 = var_args->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
if (varonce57) {
var58 = varonce57;
} else {
var59 = ", expected ";
var60 = 11;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
{
var62 = model__MSignature__arity(var_msignature);
}
if (varonce63) {
var64 = varonce63;
} else {
var65 = ". Signature is ";
var66 = 15;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
var68 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var68 = array_instance Array[Object] */
var69 = 6;
var70 = NEW_array__NativeArray(var69, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var70)->values[0] = (val*) var50;
var71 = BOX_kernel__Int(var54); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var70)->values[1] = (val*) var71;
((struct instance_array__NativeArray*)var70)->values[2] = (val*) var58;
var72 = BOX_kernel__Int(var62); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var70)->values[3] = (val*) var72;
((struct instance_array__NativeArray*)var70)->values[4] = (val*) var64;
((struct instance_array__NativeArray*)var70)->values[5] = (val*) var_msignature;
{
((void (*)(val*, val*, long))(var68->class->vft[COLOR_array__Array__with_native]))(var68, var70, var69) /* with_native on <var68:Array[Object]>*/;
}
}
{
var73 = ((val* (*)(val*))(var68->class->vft[COLOR_string__Object__to_s]))(var68) /* to_s on <var68:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var46, var_node, var73); /* Direct call modelbuilder#ModelBuilder#error on <var46:ModelBuilder>*/
}
var74 = 0;
var = var74;
goto RET_LABEL;
} else {
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var77 = var_args->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
var78 = model__MSignature__arity(var_msignature);
}
{
{ /* Inline kernel#Int#- (var75,var78) on <var75:Int> */
/* Covariant cast for argument 0 (i) <var78:Int> isa OTHER */
/* <var78:Int> isa OTHER */
var81 = 1; /* easy <var78:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 377);
show_backtrace(1);
}
var85 = var75 - var78;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
var_vararg_decl = var79;
var86 = 0;
var_i = var86;
{
var87 = model__MSignature__arity(var_msignature);
}
var_ = var87;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var90 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var90)) {
var_class_name93 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name93);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var94 = var_i < var_;
var88 = var94;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
if (var88){
var_j = var_i;
{
{ /* Inline kernel#Int#== (var_i,var_vararg_rank) on <var_i:Int> */
var98 = var_i == var_vararg_rank;
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
var95 = var96;
}
if (var95){
goto BREAK_label;
} else {
}
{
{ /* Inline kernel#Int#> (var_i,var_vararg_rank) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_rank:Int> isa OTHER */
/* <var_vararg_rank:Int> isa OTHER */
var101 = 1; /* easy <var_vararg_rank:Int> isa OTHER*/
if (unlikely(!var101)) {
var_class_name104 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name104);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var105 = var_i > var_vararg_rank;
var99 = var105;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
if (var99){
{
{ /* Inline kernel#Int#+ (var_i,var_vararg_decl) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_decl:Int> isa OTHER */
/* <var_vararg_decl:Int> isa OTHER */
var108 = 1; /* easy <var_vararg_decl:Int> isa OTHER*/
if (unlikely(!var108)) {
var_class_name111 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name111);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var112 = var_i + var_vararg_decl;
var106 = var112;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
var_j = var106;
} else {
}
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var115 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
var116 = array__Array___91d_93d(var113, var_i);
}
{
{ /* Inline model#MParameter#mtype (var116) on <var116:nullable Object(MParameter)> */
var119 = var116->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var116:nullable Object(MParameter)> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
var_paramtype = var117;
{
var120 = array__Array___91d_93d(var_args, var_j);
}
{
var121 = typing__TypeVisitor__visit_expr_subtype(self, var120, var_paramtype);
}
BREAK_label: (void)0;
var122 = 1;
{
var123 = kernel__Int__successor(var_i, var122);
}
var_i = var123;
} else {
goto BREAK_label124;
}
}
BREAK_label124: (void)0;
var125 = 0;
{
{ /* Inline kernel#Int#>= (var_vararg_rank,var125) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <var125:Int> isa OTHER */
/* <var125:Int> isa OTHER */
var128 = 1; /* easy <var125:Int> isa OTHER*/
if (unlikely(!var128)) {
var_class_name131 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name131);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 372);
show_backtrace(1);
}
var132 = var_vararg_rank >= var125;
var126 = var132;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
}
if (var126){
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var135 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
var136 = array__Array___91d_93d(var133, var_vararg_rank);
}
{
{ /* Inline model#MParameter#mtype (var136) on <var136:nullable Object(MParameter)> */
var139 = var136->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var136:nullable Object(MParameter)> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
var_paramtype140 = var137;
{
var141 = array__Array___91d_93d(var_args, var_vararg_rank);
}
var_first = var141;
var143 = 0;
{
{ /* Inline kernel#Int#== (var_vararg_decl,var143) on <var_vararg_decl:Int> */
var147 = var_vararg_decl == var143;
var145 = var147;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
var144 = var145;
}
var_148 = var144;
if (var144){
/* <var_first:AExpr> isa AVarargExpr */
cltype150 = type_parser_nodes__AVarargExpr.color;
idtype151 = type_parser_nodes__AVarargExpr.id;
if(cltype150 >= var_first->type->table_size) {
var149 = 0;
} else {
var149 = var_first->type->type_table[cltype150] == idtype151;
}
var142 = var149;
} else {
var142 = var_148;
}
if (var142){
if (varonce152) {
var153 = varonce152;
} else {
var154 = "Array";
var155 = 5;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
{
var157 = typing__TypeVisitor__get_mclass(self, var_node, var153);
}
var_mclass = var157;
var158 = NULL;
if (var_mclass == NULL) {
var159 = 1; /* is null */
} else {
var159 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var158) on <var_mclass:nullable MClass> */
var_other = var158;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var164 = var_mclass == var_other;
var162 = var164;
goto RET_LABEL163;
RET_LABEL163:(void)0;
}
}
var160 = var162;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
var159 = var160;
}
if (var159){
var165 = 0;
var = var165;
goto RET_LABEL;
} else {
}
var166 = NEW_array__Array(&type_array__Arraymodel__MType);
var167 = 1;
{
array__Array__with_capacity(var166, var167); /* Direct call array#Array#with_capacity on <var166:Array[MType]>*/
}
var_168 = var166;
{
array__AbstractArray__push(var_168, var_paramtype140); /* Direct call array#AbstractArray#push on <var_168:Array[MType]>*/
}
{
var169 = model__MClass__get_mtype(var_mclass, var_168);
}
var_array_mtype = var169;
{
{ /* Inline parser_nodes#AVarargExpr#n_expr (var_first) on <var_first:AExpr(AVarargExpr)> */
var172 = var_first->attrs[COLOR_parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <var_first:AExpr(AVarargExpr)> */
if (unlikely(var172 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1902);
show_backtrace(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
{
var173 = typing__TypeVisitor__visit_expr_subtype(self, var170, var_array_mtype);
}
{
{ /* Inline parser_nodes#AVarargExpr#n_expr (var_first) on <var_first:AExpr(AVarargExpr)> */
var176 = var_first->attrs[COLOR_parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <var_first:AExpr(AVarargExpr)> */
if (unlikely(var176 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1902);
show_backtrace(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
{
var177 = ((val* (*)(val*))(var174->class->vft[COLOR_typing__AExpr__mtype]))(var174) /* mtype on <var174:AExpr>*/;
}
{
{ /* Inline typing#AExpr#mtype= (var_first,var177) on <var_first:AExpr(AVarargExpr)> */
var_first->attrs[COLOR_typing__AExpr___mtype].val = var177; /* _mtype on <var_first:AExpr(AVarargExpr)> */
RET_LABEL178:(void)0;
}
}
} else {
var_j179 = var_vararg_rank;
{
{ /* Inline kernel#Int#+ (var_vararg_rank,var_vararg_decl) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_decl:Int> isa OTHER */
/* <var_vararg_decl:Int> isa OTHER */
var182 = 1; /* easy <var_vararg_decl:Int> isa OTHER*/
if (unlikely(!var182)) {
var_class_name185 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name185);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var186 = var_vararg_rank + var_vararg_decl;
var180 = var186;
goto RET_LABEL181;
RET_LABEL181:(void)0;
}
}
var_187 = var180;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_j179,var_187) on <var_j179:Int> */
/* Covariant cast for argument 0 (i) <var_187:Int> isa OTHER */
/* <var_187:Int> isa OTHER */
var190 = 1; /* easy <var_187:Int> isa OTHER*/
if (unlikely(!var190)) {
var_class_name193 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name193);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var194 = var_j179 <= var_187;
var188 = var194;
goto RET_LABEL189;
RET_LABEL189:(void)0;
}
}
if (var188){
{
var195 = array__Array___91d_93d(var_args, var_j179);
}
{
var196 = typing__TypeVisitor__visit_expr_subtype(self, var195, var_paramtype140);
}
var197 = 1;
{
var198 = kernel__Int__successor(var_j179, var197);
}
var_j179 = var198;
} else {
goto BREAK_label199;
}
}
BREAK_label199: (void)0;
}
} else {
}
var200 = 1;
var = var200;
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 34);
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
PRINT_ERROR(" (%s:%d)\n", "modelbuilder.nit", 106);
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
long var31 /* : Int */;
long var32 /* : Int */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
val* var37 /* : nullable MType */;
val* var39 /* : nullable MType */;
long var40 /* : Int */;
long var42 /* : Int */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : nullable Object */;
val* var49 /* : nullable MType */;
val* var_res /* var res: nullable MType */;
val* var50 /* : null */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : nullable MType */;
val* var59 /* : nullable MType */;
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 508);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 508);
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
var28 = array__Array___61d_61d(var_mtypes, var26);
var27 = var28;
}
var_ = var27;
if (var27){
var25 = var_;
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_mtypes) on <var_mtypes:nullable Array[nullable MType](Array[nullable MType])> */
var31 = var_mtypes->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_mtypes:nullable Array[nullable MType](Array[nullable MType])> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
var32 = 0;
{
{ /* Inline kernel#Int#== (var29,var32) on <var29:Int> */
var36 = var29 == var32;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
var25 = var33;
}
if (var25){
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var39 = var_variable->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var = var37;
goto RET_LABEL;
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_mtypes) on <var_mtypes:nullable Array[nullable MType](Array[nullable MType])> */
var42 = var_mtypes->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_mtypes:nullable Array[nullable MType](Array[nullable MType])> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var43 = 1;
{
{ /* Inline kernel#Int#== (var40,var43) on <var40:Int> */
var47 = var40 == var43;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var44 = var45;
}
if (var44){
{
var48 = abstract_collection__SequenceRead__first(var_mtypes);
}
var = var48;
goto RET_LABEL;
} else {
{
var49 = typing__TypeVisitor__merge_types(self, var_node, var_mtypes);
}
var_res = var49;
var50 = NULL;
if (var_res == NULL) {
var51 = 1; /* is null */
} else {
var51 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var50) on <var_res:nullable MType> */
var_other = var50;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable MType(MType)> */
var56 = var_res == var_other;
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var51 = var52;
}
if (var51){
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var59 = var_variable->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
var_res = var57;
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 436);
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
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_ /* var : Array[nullable MType] */;
val* var10 /* : ArrayIterator[nullable Object] */;
val* var_11 /* var : ArrayIterator[nullable MType] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_t1 /* var t1: nullable MType */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var_found /* var found: Bool */;
val* var_22 /* var : Array[nullable MType] */;
val* var23 /* : ArrayIterator[nullable Object] */;
val* var_24 /* var : ArrayIterator[nullable MType] */;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
val* var_t2 /* var t2: nullable MType */;
val* var27 /* : null */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
int cltype;
int idtype;
short int var_37 /* var : Bool */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
val* var41 /* : MType */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var49 /* : null */;
var_node = p0;
var_col = p1;
{
{ /* Inline array#AbstractArrayRead#length (var_col) on <var_col:Array[nullable MType]> */
var3 = var_col->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var_col:Array[nullable MType]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = 1;
{
{ /* Inline kernel#Int#== (var1,var4) on <var1:Int> */
var8 = var1 == var4;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
{
var9 = abstract_collection__SequenceRead__first(var_col);
}
var = var9;
goto RET_LABEL;
} else {
}
var_ = var_col;
{
var10 = array__AbstractArrayRead__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = array__ArrayIterator__is_ok(var_11);
}
if (var12){
{
var13 = array__ArrayIterator__item(var_11);
}
var_t1 = var13;
var14 = NULL;
if (var_t1 == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t1,var14) on <var_t1:nullable MType> */
var_other = var14;
{
{ /* Inline kernel#Object#is_same_instance (var_t1,var_other) on <var_t1:nullable MType(MType)> */
var20 = var_t1 == var_other;
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
if (var15){
goto BREAK_label;
} else {
}
var21 = 1;
var_found = var21;
var_22 = var_col;
{
var23 = array__AbstractArrayRead__iterator(var_22);
}
var_24 = var23;
for(;;) {
{
var25 = array__ArrayIterator__is_ok(var_24);
}
if (var25){
{
var26 = array__ArrayIterator__item(var_24);
}
var_t2 = var26;
var27 = NULL;
if (var_t2 == NULL) {
var28 = 1; /* is null */
} else {
var28 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t2,var27) on <var_t2:nullable MType> */
var_other = var27;
{
{ /* Inline kernel#Object#is_same_instance (var_t2,var_other) on <var_t2:nullable MType(MType)> */
var33 = var_t2 == var_other;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
goto BREAK_label34;
} else {
}
/* <var_t2:nullable MType(MType)> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_t2->type->table_size) {
var36 = 0;
} else {
var36 = var_t2->type->type_table[cltype] == idtype;
}
var_37 = var36;
if (var36){
var35 = var_37;
} else {
/* <var_t2:nullable MType(MType)> isa MNullType */
cltype39 = type_model__MNullType.color;
idtype40 = type_model__MNullType.id;
if(cltype39 >= var_t2->type->table_size) {
var38 = 0;
} else {
var38 = var_t2->type->type_table[cltype39] == idtype40;
}
var35 = var38;
}
if (var35){
{
var41 = ((val* (*)(val*))(var_t1->class->vft[COLOR_model__MType__as_nullable]))(var_t1) /* as_nullable on <var_t1:nullable MType(MType)>*/;
}
var_t1 = var41;
} else {
}
{
var42 = typing__TypeVisitor__is_subtype(self, var_t2, var_t1);
}
var43 = !var42;
if (var43){
var44 = 0;
var_found = var44;
} else {
}
BREAK_label34: (void)0;
{
array__ArrayIterator__next(var_24); /* Direct call array#ArrayIterator#next on <var_24:ArrayIterator[nullable MType]>*/
}
} else {
goto BREAK_label45;
}
}
BREAK_label45: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_24) on <var_24:ArrayIterator[nullable MType]> */
RET_LABEL46:(void)0;
}
}
if (var_found){
var = var_t1;
goto RET_LABEL;
} else {
}
BREAK_label: (void)0;
{
array__ArrayIterator__next(var_11); /* Direct call array#ArrayIterator#next on <var_11:ArrayIterator[nullable MType]>*/
}
} else {
goto BREAK_label47;
}
}
BREAK_label47: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_11) on <var_11:ArrayIterator[nullable MType]> */
RET_LABEL48:(void)0;
}
}
var49 = NULL;
var = var49;
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 466);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 466);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#node= for (self: CallSite, ANode) */
void typing__CallSite__node_61d(val* self, val* p0) {
self->attrs[COLOR_typing__CallSite___node].val = p0; /* _node on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#node= for (self: Object, ANode) */
void VIRTUAL_typing__CallSite__node_61d(val* self, val* p0) {
{ /* Inline typing#CallSite#node= (self,p0) on <self:Object(CallSite)> */
self->attrs[COLOR_typing__CallSite___node].val = p0; /* _node on <self:Object(CallSite)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#CallSite#recv for (self: CallSite): MType */
val* typing__CallSite__recv(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_typing__CallSite___recv].val; /* _recv on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 469);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 469);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#recv= for (self: CallSite, MType) */
void typing__CallSite__recv_61d(val* self, val* p0) {
self->attrs[COLOR_typing__CallSite___recv].val = p0; /* _recv on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#recv= for (self: Object, MType) */
void VIRTUAL_typing__CallSite__recv_61d(val* self, val* p0) {
{ /* Inline typing#CallSite#recv= (self,p0) on <self:Object(CallSite)> */
self->attrs[COLOR_typing__CallSite___recv].val = p0; /* _recv on <self:Object(CallSite)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#CallSite#mmodule for (self: CallSite): MModule */
val* typing__CallSite__mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_typing__CallSite___mmodule].val; /* _mmodule on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 472);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 472);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mmodule= for (self: CallSite, MModule) */
void typing__CallSite__mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_typing__CallSite___mmodule].val = p0; /* _mmodule on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#mmodule= for (self: Object, MModule) */
void VIRTUAL_typing__CallSite__mmodule_61d(val* self, val* p0) {
{ /* Inline typing#CallSite#mmodule= (self,p0) on <self:Object(CallSite)> */
self->attrs[COLOR_typing__CallSite___mmodule].val = p0; /* _mmodule on <self:Object(CallSite)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
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
/* method typing#CallSite#anchor= for (self: CallSite, nullable MClassType) */
void typing__CallSite__anchor_61d(val* self, val* p0) {
self->attrs[COLOR_typing__CallSite___anchor].val = p0; /* _anchor on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#anchor= for (self: Object, nullable MClassType) */
void VIRTUAL_typing__CallSite__anchor_61d(val* self, val* p0) {
{ /* Inline typing#CallSite#anchor= (self,p0) on <self:Object(CallSite)> */
self->attrs[COLOR_typing__CallSite___anchor].val = p0; /* _anchor on <self:Object(CallSite)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#CallSite#recv_is_self= for (self: CallSite, Bool) */
void typing__CallSite__recv_is_self_61d(val* self, short int p0) {
self->attrs[COLOR_typing__CallSite___recv_is_self].s = p0; /* _recv_is_self on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#recv_is_self= for (self: Object, Bool) */
void VIRTUAL_typing__CallSite__recv_is_self_61d(val* self, short int p0) {
{ /* Inline typing#CallSite#recv_is_self= (self,p0) on <self:Object(CallSite)> */
self->attrs[COLOR_typing__CallSite___recv_is_self].s = p0; /* _recv_is_self on <self:Object(CallSite)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#CallSite#mproperty for (self: CallSite): MMethod */
val* typing__CallSite__mproperty(val* self) {
val* var /* : MMethod */;
val* var1 /* : MMethod */;
var1 = self->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 483);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 483);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mproperty= for (self: CallSite, MMethod) */
void typing__CallSite__mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_typing__CallSite___mproperty].val = p0; /* _mproperty on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#mproperty= for (self: Object, MMethod) */
void VIRTUAL_typing__CallSite__mproperty_61d(val* self, val* p0) {
{ /* Inline typing#CallSite#mproperty= (self,p0) on <self:Object(CallSite)> */
self->attrs[COLOR_typing__CallSite___mproperty].val = p0; /* _mproperty on <self:Object(CallSite)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#CallSite#mpropdef for (self: CallSite): MMethodDef */
val* typing__CallSite__mpropdef(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
var1 = self->attrs[COLOR_typing__CallSite___mpropdef].val; /* _mpropdef on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 486);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 486);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#mpropdef= for (self: CallSite, MMethodDef) */
void typing__CallSite__mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_typing__CallSite___mpropdef].val = p0; /* _mpropdef on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#mpropdef= for (self: Object, MMethodDef) */
void VIRTUAL_typing__CallSite__mpropdef_61d(val* self, val* p0) {
{ /* Inline typing#CallSite#mpropdef= (self,p0) on <self:Object(CallSite)> */
self->attrs[COLOR_typing__CallSite___mpropdef].val = p0; /* _mpropdef on <self:Object(CallSite)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#CallSite#msignature for (self: CallSite): MSignature */
val* typing__CallSite__msignature(val* self) {
val* var /* : MSignature */;
val* var1 /* : MSignature */;
var1 = self->attrs[COLOR_typing__CallSite___msignature].val; /* _msignature on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 490);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 490);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#CallSite#msignature= for (self: CallSite, MSignature) */
void typing__CallSite__msignature_61d(val* self, val* p0) {
self->attrs[COLOR_typing__CallSite___msignature].val = p0; /* _msignature on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#msignature= for (self: Object, MSignature) */
void VIRTUAL_typing__CallSite__msignature_61d(val* self, val* p0) {
{ /* Inline typing#CallSite#msignature= (self,p0) on <self:Object(CallSite)> */
self->attrs[COLOR_typing__CallSite___msignature].val = p0; /* _msignature on <self:Object(CallSite)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
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
/* method typing#CallSite#erasure_cast= for (self: CallSite, Bool) */
void typing__CallSite__erasure_cast_61d(val* self, short int p0) {
self->attrs[COLOR_typing__CallSite___erasure_cast].s = p0; /* _erasure_cast on <self:CallSite> */
RET_LABEL:;
}
/* method typing#CallSite#erasure_cast= for (self: Object, Bool) */
void VIRTUAL_typing__CallSite__erasure_cast_61d(val* self, short int p0) {
{ /* Inline typing#CallSite#erasure_cast= (self,p0) on <self:Object(CallSite)> */
self->attrs[COLOR_typing__CallSite___erasure_cast].s = p0; /* _erasure_cast on <self:Object(CallSite)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 466);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 483);
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1620);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 490);
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
/* method typing#CallSite#init for (self: CallSite) */
void typing__CallSite__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_typing__CallSite__init]))(self) /* init on <self:CallSite>*/;
}
RET_LABEL:;
}
/* method typing#CallSite#init for (self: Object) */
void VIRTUAL_typing__CallSite__init(val* self) {
{ /* Inline typing#CallSite#init (self) on <self:Object(CallSite)> */
{
((void (*)(val*))(self->class->vft[COLOR_typing__CallSite__init]))(self) /* init on <self:Object(CallSite)>*/;
}
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 508);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 508);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 510);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 510);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 508);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 510);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/collection/hash_collection.nit", 249);
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
val* var_33 /* var : Array[FlowContext] */;
val* var34 /* : ArrayIterator[nullable Object] */;
val* var_35 /* var : ArrayIterator[FlowContext] */;
short int var36 /* : Bool */;
val* var37 /* : nullable Object */;
val* var_flow /* var flow: FlowContext */;
short int var38 /* : Bool */;
val* var39 /* : nullable Array[nullable MType] */;
val* var_r2 /* var r2: nullable Array[nullable MType] */;
val* var40 /* : null */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : null */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : Array[nullable Object] */;
val* var_47 /* var : Array[nullable MType] */;
val* var48 /* : ArrayIterator[nullable Object] */;
val* var_49 /* var : ArrayIterator[nullable MType] */;
short int var50 /* : Bool */;
val* var51 /* : nullable Object */;
val* var_t /* var t: nullable MType */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var58 /* : HashMap[Variable, nullable Array[nullable MType]] */;
val* var60 /* : HashMap[Variable, nullable Array[nullable MType]] */;
var_variable = p0;
{
{ /* Inline typing#FlowContext#cache (self) on <self:FlowContext> */
var3 = self->attrs[COLOR_typing__FlowContext___cache].val; /* _cache on <self:FlowContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 510);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 510);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 508);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 508);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/flow.nit", 189);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/flow.nit", 189);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_33 = var30;
{
var34 = array__AbstractArrayRead__iterator(var_33);
}
var_35 = var34;
for(;;) {
{
var36 = array__ArrayIterator__is_ok(var_35);
}
if (var36){
{
var37 = array__ArrayIterator__item(var_35);
}
var_flow = var37;
{
var38 = flow__FlowContext__is_unreachable(var_flow);
}
if (var38){
goto BREAK_label;
} else {
}
{
var39 = typing__FlowContext__collect_types(var_flow, var_variable);
}
var_r2 = var39;
var40 = NULL;
if (var_r2 == NULL) {
var41 = 1; /* is null */
} else {
var41 = 0; /* arg is null but recv is not */
}
if (0) {
var42 = array__Array___61d_61d(var_r2, var40);
var41 = var42;
}
if (var41){
goto BREAK_label;
} else {
}
var43 = NULL;
if (var_res == NULL) {
var44 = 1; /* is null */
} else {
var44 = 0; /* arg is null but recv is not */
}
if (0) {
var45 = array__Array___61d_61d(var_res, var43);
var44 = var45;
}
if (var44){
{
var46 = array__Collection__to_a(var_r2);
}
var_res = var46;
} else {
var_47 = var_r2;
{
var48 = array__AbstractArrayRead__iterator(var_47);
}
var_49 = var48;
for(;;) {
{
var50 = array__ArrayIterator__is_ok(var_49);
}
if (var50){
{
var51 = array__ArrayIterator__item(var_49);
}
var_t = var51;
{
var52 = array__AbstractArrayRead__has(var_res, var_t);
}
var53 = !var52;
if (var53){
{
array__Array__add(var_res, var_t); /* Direct call array#Array#add on <var_res:nullable Array[nullable MType](Array[nullable MType])>*/
}
} else {
}
{
array__ArrayIterator__next(var_49); /* Direct call array#ArrayIterator#next on <var_49:ArrayIterator[nullable MType]>*/
}
} else {
goto BREAK_label54;
}
}
BREAK_label54: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_49) on <var_49:ArrayIterator[nullable MType]> */
RET_LABEL55:(void)0;
}
}
}
BREAK_label: (void)0;
{
array__ArrayIterator__next(var_35); /* Direct call array#ArrayIterator#next on <var_35:ArrayIterator[FlowContext]>*/
}
} else {
goto BREAK_label56;
}
}
BREAK_label56: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_35) on <var_35:ArrayIterator[FlowContext]> */
RET_LABEL57:(void)0;
}
}
}
}
{
{ /* Inline typing#FlowContext#cache (self) on <self:FlowContext> */
var60 = self->attrs[COLOR_typing__FlowContext___cache].val; /* _cache on <self:FlowContext> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 510);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
hash_collection__HashMap___91d_93d_61d(var58, var_variable, var_res); /* Direct call hash_collection#HashMap#[]= on <var58:HashMap[Variable, nullable Array[nullable MType]]>*/
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
val* var2 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable MPropDef */;
val* var12 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var13 /* : TypeVisitor */;
val* var14 /* : MClassDef */;
val* var16 /* : MClassDef */;
val* var17 /* : MModule */;
val* var19 /* : MModule */;
val* var_v /* var v: TypeVisitor */;
val* var20 /* : Variable */;
val* var22 /* : Variable */;
val* var24 /* : nullable MPropDef */;
val* var26 /* : nullable MPropDef */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
long var27 /* : Int */;
long var_i /* var i: Int */;
val* var28 /* : nullable MSignature */;
val* var30 /* : nullable MSignature */;
long var31 /* : Int */;
long var_ /* var : Int */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var35 /* : Bool */;
val* var36 /* : nullable MSignature */;
val* var38 /* : nullable MSignature */;
val* var39 /* : Array[MParameter] */;
val* var41 /* : Array[MParameter] */;
val* var42 /* : nullable Object */;
val* var43 /* : MType */;
val* var45 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var46 /* : nullable MSignature */;
val* var48 /* : nullable MSignature */;
long var49 /* : Int */;
long var51 /* : Int */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
val* var56 /* : nullable ASignature */;
val* var58 /* : nullable ASignature */;
val* var59 /* : ANodes[AParam] */;
val* var61 /* : ANodes[AParam] */;
val* var62 /* : ANode */;
static val* varonce;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : FlatString */;
val* var67 /* : nullable MClass */;
val* var_arrayclass /* var arrayclass: nullable MClass */;
val* var68 /* : null */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
val* var75 /* : Array[MType] */;
long var76 /* : Int */;
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
val* var89 /* : null */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
val* var_other93 /* var other: nullable Object */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
long var98 /* : Int */;
long var99 /* : Int */;
short int var100 /* : Bool */;
val* var101 /* : nullable FlowContext */;
val* var103 /* : nullable FlowContext */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
short int var_106 /* var : Bool */;
val* var107 /* : nullable MSignature */;
val* var109 /* : nullable MSignature */;
val* var110 /* : nullable MType */;
val* var112 /* : nullable MType */;
val* var113 /* : null */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : NativeString */;
long var123 /* : Int */;
val* var124 /* : FlatString */;
var_modelbuilder = p0;
{
{ /* Inline parser_nodes#AMethPropdef#n_block (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_nblock = var;
var3 = NULL;
if (var_nblock == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nblock,var3) on <var_nblock:nullable AExpr> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_nblock,var_other) on <var_nblock:nullable AExpr(AExpr)> */
var9 = var_nblock == var_other;
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
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var12 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 568);
show_backtrace(1);
}
var_mpropdef = var10;
var13 = NEW_typing__TypeVisitor(&type_typing__TypeVisitor);
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var16 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var14) on <var14:MClassDef> */
var19 = var14->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var14:MClassDef> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
typing__TypeVisitor__init(var13, var_modelbuilder, var17, var_mpropdef); /* Direct call typing#TypeVisitor#init on <var13:TypeVisitor>*/
}
var_v = var13;
{
{ /* Inline typing#TypeVisitor#selfvariable (var_v) on <var_v:TypeVisitor> */
var22 = var_v->attrs[COLOR_typing__TypeVisitor___selfvariable].val; /* _selfvariable on <var_v:TypeVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 50);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline typing#APropdef#selfvariable= (self,var20) on <self:AMethPropdef> */
self->attrs[COLOR_typing__APropdef___selfvariable].val = var20; /* _selfvariable on <self:AMethPropdef> */
RET_LABEL23:(void)0;
}
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var26 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 572);
show_backtrace(1);
}
var_mmethoddef = var24;
var27 = 0;
var_i = var27;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var30 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (var28 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 573);
show_backtrace(1);
} else {
var31 = model__MSignature__arity(var28);
}
var_ = var31;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var34 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 371);
show_backtrace(1);
}
var35 = var_i < var_;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var38 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
if (var36 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 574);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#mparameters (var36) on <var36:nullable MSignature> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var41 = var36->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var36:nullable MSignature> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = array__Array___91d_93d(var39, var_i);
}
{
{ /* Inline model#MParameter#mtype (var42) on <var42:nullable Object(MParameter)> */
var45 = var42->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var42:nullable Object(MParameter)> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_mtype = var43;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var48 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (var46 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 575);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#vararg_rank (var46) on <var46:nullable MSignature> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1510);
show_backtrace(1);
}
var51 = var46->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <var46:nullable MSignature> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var49,var_i) on <var49:Int> */
var55 = var49 == var_i;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
if (var52){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var58 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
if (var56 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 576);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var56) on <var56:nullable ASignature> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var61 = var56->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <var56:nullable ASignature> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = parser_nodes__ANodes___91d_93d(var59, var_i);
}
if (varonce) {
var63 = varonce;
} else {
var64 = "Array";
var65 = 5;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce = var63;
}
{
var67 = typing__TypeVisitor__get_mclass(var_v, var62, var63);
}
var_arrayclass = var67;
var68 = NULL;
if (var_arrayclass == NULL) {
var69 = 1; /* is null */
} else {
var69 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_arrayclass,var68) on <var_arrayclass:nullable MClass> */
var_other = var68;
{
{ /* Inline kernel#Object#is_same_instance (var_arrayclass,var_other) on <var_arrayclass:nullable MClass(MClass)> */
var74 = var_arrayclass == var_other;
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
var70 = var72;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
var69 = var70;
}
if (var69){
goto RET_LABEL;
} else {
}
var75 = NEW_array__Array(&type_array__Arraymodel__MType);
var76 = 1;
{
array__Array__with_capacity(var75, var76); /* Direct call array#Array#with_capacity on <var75:Array[MType]>*/
}
var_77 = var75;
{
array__AbstractArray__push(var_77, var_mtype); /* Direct call array#AbstractArray#push on <var_77:Array[MType]>*/
}
{
var78 = model__MClass__get_mtype(var_arrayclass, var_77);
}
var_mtype = var78;
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var81 = self->attrs[COLOR_parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
if (var79 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 580);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var79) on <var79:nullable ASignature> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var84 = var79->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <var79:nullable ASignature> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1279);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
var85 = parser_nodes__ANodes___91d_93d(var82, var_i);
}
{
{ /* Inline scope#AParam#variable (var85) on <var85:ANode(AParam)> */
var88 = var85->attrs[COLOR_scope__AParam___variable].val; /* _variable on <var85:ANode(AParam)> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
var_variable = var86;
var89 = NULL;
if (var_variable == NULL) {
var90 = 0; /* is null */
} else {
var90 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_variable,var89) on <var_variable:nullable Variable> */
var_other93 = var89;
{
var95 = ((short int (*)(val*, val*))(var_variable->class->vft[COLOR_kernel__Object___61d_61d]))(var_variable, var_other93) /* == on <var_variable:nullable Variable(Variable)>*/;
var94 = var95;
}
var96 = !var94;
var91 = var96;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
var90 = var91;
}
if (unlikely(!var90)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 581);
show_backtrace(1);
}
{
{ /* Inline typing#Variable#declared_type= (var_variable,var_mtype) on <var_variable:nullable Variable(Variable)> */
var_variable->attrs[COLOR_typing__Variable___declared_type].val = var_mtype; /* _declared_type on <var_variable:nullable Variable(Variable)> */
RET_LABEL97:(void)0;
}
}
var98 = 1;
{
var99 = kernel__Int__successor(var_i, var98);
}
var_i = var99;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
typing__TypeVisitor__visit_stmt(var_v, var_nblock); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline flow#AExpr#after_flow_context (var_nblock) on <var_nblock:nullable AExpr(AExpr)> */
var103 = var_nblock->attrs[COLOR_flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_nblock:nullable AExpr(AExpr)> */
var101 = var103;
RET_LABEL102:(void)0;
}
}
if (var101 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 586);
show_backtrace(1);
} else {
var104 = flow__FlowContext__is_unreachable(var101);
}
var105 = !var104;
var_106 = var105;
if (var105){
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var109 = var_mmethoddef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var107 = var109;
RET_LABEL108:(void)0;
}
}
if (var107 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 586);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var107) on <var107:nullable MSignature> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1468);
show_backtrace(1);
}
var112 = var107->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var107:nullable MSignature> */
var110 = var112;
RET_LABEL111:(void)0;
}
}
var113 = NULL;
if (var110 == NULL) {
var114 = 0; /* is null */
} else {
var114 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var110,var113) on <var110:nullable MType> */
var_other93 = var113;
{
var118 = ((short int (*)(val*, val*))(var110->class->vft[COLOR_kernel__Object___61d_61d]))(var110, var_other93) /* == on <var110:nullable MType(MType)>*/;
var117 = var118;
}
var119 = !var117;
var115 = var119;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
var114 = var115;
}
var100 = var114;
} else {
var100 = var_106;
}
if (var100){
if (varonce120) {
var121 = varonce120;
} else {
var122 = "Control error: Reached end of function (a \'return\' with a value was expected).";
var123 = 78;
var124 = string__NativeString__to_s_with_length(var122, var123);
var121 = var124;
varonce120 = var121;
}
{
typing__TypeVisitor__error(var_v, self, var121); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
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
val* var16 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : nullable MPropDef */;
val* var26 /* : nullable MPropDef */;
val* var27 /* : nullable MType */;
val* var29 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var30 /* : nullable MType */;
val* var31 /* : nullable AExpr */;
val* var33 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
val* var34 /* : null */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 596);
show_backtrace(1);
}
var_mpropdef = var;
var3 = NEW_typing__TypeVisitor(&type_typing__TypeVisitor);
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MAttributeDef> */
var6 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MAttributeDef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1895);
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
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 489);
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 50);
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
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var16 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_nexpr = var14;
var17 = NULL;
if (var_nexpr == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,var17) on <var_nexpr:nullable AExpr> */
var_other = var17;
{
var22 = ((short int (*)(val*, val*))(var_nexpr->class->vft[COLOR_kernel__Object___61d_61d]))(var_nexpr, var_other) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
var21 = var22;
}
var23 = !var21;
var19 = var23;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var26 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (var24 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 602);
show_backtrace(1);
} else {
{ /* Inline model#MAttributeDef#static_mtype (var24) on <var24:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 2006);
show_backtrace(1);
}
var29 = var24->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var24:nullable MPropDef(nullable MAttributeDef)> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_mtype = var27;
{
var30 = typing__TypeVisitor__visit_expr_subtype(var_v, var_nexpr, var_mtype);
}
} else {
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_block (self) on <self:AAttrPropdef> */
var33 = self->attrs[COLOR_parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
var_nblock = var31;
var34 = NULL;
if (var_nblock == NULL) {
var35 = 0; /* is null */
} else {
var35 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nblock,var34) on <var_nblock:nullable AExpr> */
var_other = var34;
{
var39 = ((short int (*)(val*, val*))(var_nblock->class->vft[COLOR_kernel__Object___61d_61d]))(var_nblock, var_other) /* == on <var_nblock:nullable AExpr(AExpr)>*/;
var38 = var39;
}
var40 = !var38;
var36 = var40;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
{
typing__TypeVisitor__visit_stmt(var_v, var_nblock); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
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
val* var_ /* var : ANodes[AExpr] */;
val* var3 /* : Iterator[ANode] */;
val* var_4 /* var : Iterator[AExpr] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_e /* var e: AExpr */;
short int var8 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1321);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_ = var;
{
var3 = parser_nodes__ANodes__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int (*)(val*))(var_4->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var_4) /* is_ok on <var_4:Iterator[AExpr]>*/;
}
if (var5){
{
var6 = ((val* (*)(val*))(var_4->class->vft[COLOR_abstract_collection__Iterator__item]))(var_4) /* item on <var_4:Iterator[AExpr]>*/;
}
var_e = var6;
{
typing__TypeVisitor__visit_stmt(var_v, var_e); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
((void (*)(val*))(var_4->class->vft[COLOR_abstract_collection__Iterator__next]))(var_4) /* next on <var_4:Iterator[AExpr]>*/;
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_4) on <var_4:Iterator[AExpr]> */
RET_LABEL7:(void)0;
}
}
var8 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var8) on <self:ABlockExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var8; /* _is_typed on <self:ABlockExpr> */
RET_LABEL9:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1321);
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
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1321);
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
val* var12 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : null */;
val* var_mtype /* var mtype: nullable MType */;
val* var21 /* : nullable MType */;
val* var22 /* : null */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : nullable AExpr */;
val* var31 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var32 /* : null */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var_other36 /* var other: nullable Object */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : null */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
val* var47 /* : nullable MType */;
val* var48 /* : nullable MType */;
val* var49 /* : null */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
val* var_decltype /* var decltype: nullable MType */;
short int var56 /* : Bool */;
val* var57 /* : null */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
short int var_ /* var : Bool */;
short int var64 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
val* var69 /* : nullable MClass */;
val* var70 /* : MClassType */;
val* var72 /* : MClassType */;
val* var73 /* : MType */;
val* var74 /* : null */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
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
{ /* Inline parser_nodes#AVardeclExpr#n_type (self) on <self:AVardeclExpr> */
var12 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:AVardeclExpr> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ntype = var10;
var13 = NULL;
if (var_ntype == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ntype,var13) on <var_ntype:nullable AType> */
var_other = var13;
{
{ /* Inline kernel#Object#is_same_instance (var_ntype,var_other) on <var_ntype:nullable AType(AType)> */
var19 = var_ntype == var_other;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
var20 = NULL;
var_mtype = var20;
} else {
{
var21 = typing__TypeVisitor__resolve_mtype(var_v, var_ntype);
}
var_mtype = var21;
var22 = NULL;
if (var_mtype == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var22) on <var_mtype:nullable MType> */
var_other = var22;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var28 = var_mtype == var_other;
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
goto RET_LABEL;
} else {
}
}
{
{ /* Inline parser_nodes#AVardeclExpr#n_expr (self) on <self:AVardeclExpr> */
var31 = self->attrs[COLOR_parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_nexpr = var29;
var32 = NULL;
if (var_nexpr == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,var32) on <var_nexpr:nullable AExpr> */
var_other36 = var32;
{
var38 = ((short int (*)(val*, val*))(var_nexpr->class->vft[COLOR_kernel__Object___61d_61d]))(var_nexpr, var_other36) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
var37 = var38;
}
var39 = !var37;
var34 = var39;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
var40 = NULL;
if (var_mtype == NULL) {
var41 = 0; /* is null */
} else {
var41 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,var40) on <var_mtype:nullable MType> */
var_other36 = var40;
{
var45 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_mtype, var_other36) /* == on <var_mtype:nullable MType(MType)>*/;
var44 = var45;
}
var46 = !var44;
var42 = var46;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var41 = var42;
}
if (var41){
{
var47 = typing__TypeVisitor__visit_expr_subtype(var_v, var_nexpr, var_mtype);
}
} else {
{
var48 = typing__TypeVisitor__visit_expr(var_v, var_nexpr);
}
var_mtype = var48;
var49 = NULL;
if (var_mtype == NULL) {
var50 = 1; /* is null */
} else {
var50 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var49) on <var_mtype:nullable MType> */
var_other = var49;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var55 = var_mtype == var_other;
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
goto RET_LABEL;
} else {
}
}
} else {
}
var_decltype = var_mtype;
var57 = NULL;
if (var_mtype == NULL) {
var58 = 1; /* is null */
} else {
var58 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var57) on <var_mtype:nullable MType> */
var_other = var57;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var63 = var_mtype == var_other;
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var58 = var59;
}
var_ = var58;
if (var58){
var56 = var_;
} else {
/* <var_mtype:nullable MType(MType)> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var64 = 0;
} else {
var64 = var_mtype->type->type_table[cltype] == idtype;
}
var56 = var64;
}
if (var56){
if (varonce) {
var65 = varonce;
} else {
var66 = "Object";
var67 = 6;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce = var65;
}
{
var69 = typing__TypeVisitor__get_mclass(var_v, self, var65);
}
if (var69 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 681);
show_backtrace(1);
} else {
{ /* Inline model#MClass#mclass_type (var69) on <var69:nullable MClass> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var72 = var69->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var69:nullable MClass> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 435);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = model__MType__as_nullable(var70);
}
var_decltype = var73;
var74 = NULL;
if (var_mtype == NULL) {
var75 = 1; /* is null */
} else {
var75 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var74) on <var_mtype:nullable MType(nullable MNullType)> */
var_other = var74;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MNullType(MNullType)> */
var80 = var_mtype == var_other;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
var75 = var76;
}
if (var75){
var_mtype = var_decltype;
} else {
}
} else {
}
{
{ /* Inline typing#Variable#declared_type= (var_variable,var_decltype) on <var_variable:nullable Variable(Variable)> */
var_variable->attrs[COLOR_typing__Variable___declared_type].val = var_decltype; /* _declared_type on <var_variable:nullable Variable(Variable)> */
RET_LABEL81:(void)0;
}
}
{
typing__TypeVisitor__set_variable(var_v, self, var_variable, var_mtype); /* Direct call typing#TypeVisitor#set_variable on <var_v:TypeVisitor>*/
}
var82 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var82) on <self:AVardeclExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var82; /* _is_typed on <self:AVardeclExpr> */
RET_LABEL83:(void)0;
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
val* var12 /* : AExpr */;
val* var13 /* : nullable MType */;
val* var15 /* : nullable MType */;
val* var16 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var17 /* : Bool */;
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 716);
show_backtrace(1);
}
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:AVarAssignExpr> */
var12 = self->attrs[COLOR_parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1445);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:nullable Variable(Variable)> */
var15 = var_variable->attrs[COLOR_typing__Variable___declared_type].val; /* _declared_type on <var_variable:nullable Variable(Variable)> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = typing__TypeVisitor__visit_expr_subtype(var_v, var10, var13);
}
var_mtype = var16;
{
typing__TypeVisitor__set_variable(var_v, self, var_variable, var_mtype); /* Direct call typing#TypeVisitor#set_variable on <var_v:TypeVisitor>*/
}
var17 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var17) on <self:AVarAssignExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var17; /* _is_typed on <self:AVarAssignExpr> */
RET_LABEL18:(void)0;
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
val* var3 /* : AAssignOp */;
short int var4 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
val* var_reassign_name /* var reassign_name: String */;
val* var9 /* : AAssignOp */;
val* var11 /* : AAssignOp */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : Array[Object] */;
long var35 /* : Int */;
val* var36 /* : NativeArray[Object] */;
val* var37 /* : String */;
val* var38 /* : null */;
short int var39 /* : Bool */;
val* var40 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var41 /* : null */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : null */;
val* var50 /* : MSignature */;
val* var52 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var53 /* : nullable MType */;
val* var55 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var56 /* : Bool */;
long var57 /* : Int */;
long var58 /* : Int */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
short int var_ /* var : Bool */;
val* var63 /* : null */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
val* var_other67 /* var other: nullable Object */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
val* var71 /* : AExpr */;
val* var73 /* : AExpr */;
val* var74 /* : Array[MParameter] */;
val* var76 /* : Array[MParameter] */;
val* var77 /* : nullable Object */;
val* var78 /* : MType */;
val* var80 /* : MType */;
val* var81 /* : nullable MType */;
val* var_value_type /* var value_type: nullable MType */;
val* var82 /* : null */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
val* var89 /* : null */;
val* var90 /* : nullable MType */;
var_v = p0;
var_readtype = p1;
var_writetype = p2;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_assign_op (self) on <self:AReassignFormExpr> */
var3 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AReassignFormExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1451);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
/* <var1:AAssignOp> isa APlusAssignOp */
cltype = type_parser_nodes__APlusAssignOp.color;
idtype = type_parser_nodes__APlusAssignOp.id;
if(cltype >= var1->type->table_size) {
var4 = 0;
} else {
var4 = var1->type->type_table[cltype] == idtype;
}
if (var4){
if (varonce) {
var5 = varonce;
} else {
var6 = "+";
var7 = 1;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var_reassign_name = var5;
} else {
{
{ /* Inline parser_nodes#AReassignFormExpr#n_assign_op (self) on <self:AReassignFormExpr> */
var11 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AReassignFormExpr> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1451);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
/* <var9:AAssignOp> isa AMinusAssignOp */
cltype13 = type_parser_nodes__AMinusAssignOp.color;
idtype14 = type_parser_nodes__AMinusAssignOp.id;
if(cltype13 >= var9->type->table_size) {
var12 = 0;
} else {
var12 = var9->type->type_table[cltype13] == idtype14;
}
if (var12){
if (varonce15) {
var16 = varonce15;
} else {
var17 = "-";
var18 = 1;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var_reassign_name = var16;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 745);
show_backtrace(1);
}
}
{
{ /* Inline typing#AReassignFormExpr#read_type= (self,var_readtype) on <self:AReassignFormExpr> */
self->attrs[COLOR_typing__AReassignFormExpr___read_type].val = var_readtype; /* _read_type on <self:AReassignFormExpr> */
RET_LABEL20:(void)0;
}
}
/* <var_readtype:MType> isa MNullType */
cltype22 = type_model__MNullType.color;
idtype23 = type_model__MNullType.id;
if(cltype22 >= var_readtype->type->table_size) {
var21 = 0;
} else {
var21 = var_readtype->type->type_table[cltype22] == idtype23;
}
if (var21){
if (varonce24) {
var25 = varonce24;
} else {
var26 = "Error: Method \'";
var27 = 15;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
if (varonce29) {
var30 = varonce29;
} else {
var31 = "\' call on \'null\'.";
var32 = 17;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
var34 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var34 = array_instance Array[Object] */
var35 = 3;
var36 = NEW_array__NativeArray(var35, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var36)->values[0] = (val*) var25;
((struct instance_array__NativeArray*)var36)->values[1] = (val*) var_reassign_name;
((struct instance_array__NativeArray*)var36)->values[2] = (val*) var30;
{
((void (*)(val*, val*, long))(var34->class->vft[COLOR_array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[Object]>*/;
}
}
{
var37 = ((val* (*)(val*))(var34->class->vft[COLOR_string__Object__to_s]))(var34) /* to_s on <var34:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var37); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
var38 = NULL;
var = var38;
goto RET_LABEL;
} else {
}
var39 = 0;
{
var40 = typing__TypeVisitor__get_method(var_v, self, var_readtype, var_reassign_name, var39);
}
var_callsite = var40;
var41 = NULL;
if (var_callsite == NULL) {
var42 = 1; /* is null */
} else {
var42 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,var41) on <var_callsite:nullable CallSite> */
var_other = var41;
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var47 = var_callsite == var_other;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
var42 = var43;
}
if (var42){
var48 = NULL;
var = var48;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite= (self,var_callsite) on <self:AReassignFormExpr> */
self->attrs[COLOR_typing__AReassignFormExpr___reassign_callsite].val = var_callsite; /* _reassign_callsite on <self:AReassignFormExpr> */
RET_LABEL49:(void)0;
}
}
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var52 = var_callsite->attrs[COLOR_typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 490);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
var_msignature = var50;
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var55 = var_msignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
var_rettype = var53;
{
var57 = model__MSignature__arity(var_msignature);
}
var58 = 1;
{
{ /* Inline kernel#Int#== (var57,var58) on <var57:Int> */
var62 = var57 == var58;
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
var59 = var60;
}
var_ = var59;
if (var59){
var63 = NULL;
if (var_rettype == NULL) {
var64 = 0; /* is null */
} else {
var64 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rettype,var63) on <var_rettype:nullable MType> */
var_other67 = var63;
{
var69 = ((short int (*)(val*, val*))(var_rettype->class->vft[COLOR_kernel__Object___61d_61d]))(var_rettype, var_other67) /* == on <var_rettype:nullable MType(MType)>*/;
var68 = var69;
}
var70 = !var68;
var65 = var70;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
var64 = var65;
}
var56 = var64;
} else {
var56 = var_;
}
if (unlikely(!var56)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 761);
show_backtrace(1);
}
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:AReassignFormExpr> */
var73 = self->attrs[COLOR_parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AReassignFormExpr> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1452);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var76 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1465);
show_backtrace(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
var77 = abstract_collection__SequenceRead__first(var74);
}
{
{ /* Inline model#MParameter#mtype (var77) on <var77:nullable Object(MParameter)> */
var80 = var77->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var77:nullable Object(MParameter)> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1565);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var81 = typing__TypeVisitor__visit_expr_subtype(var_v, var71, var78);
}
var_value_type = var81;
var82 = NULL;
if (var_value_type == NULL) {
var83 = 1; /* is null */
} else {
var83 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_value_type,var82) on <var_value_type:nullable MType> */
var_other = var82;
{
{ /* Inline kernel#Object#is_same_instance (var_value_type,var_other) on <var_value_type:nullable MType(MType)> */
var88 = var_value_type == var_other;
var86 = var88;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
var84 = var86;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
var83 = var84;
}
if (var83){
var89 = NULL;
var = var89;
goto RET_LABEL;
} else {
}
{
var90 = typing__TypeVisitor__check_subtype(var_v, self, var_rettype, var_writetype);
}
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
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 775);
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
val* var2 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable MType */;
short int var11 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#AEscapeExpr#n_expr (self) on <self:AContinueExpr> */
var2 = self->attrs[COLOR_parser_nodes__AEscapeExpr___n_expr].val; /* _n_expr on <self:AContinueExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_nexpr = var;
var3 = NULL;
if (var_nexpr == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,var3) on <var_nexpr:nullable AExpr> */
var_other = var3;
{
var8 = ((short int (*)(val*, val*))(var_nexpr->class->vft[COLOR_kernel__Object___61d_61d]))(var_nexpr, var_other) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
var7 = var8;
}
var9 = !var7;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
var10 = typing__TypeVisitor__visit_expr(var_v, var_nexpr);
}
} else {
}
var11 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var11) on <self:AContinueExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var11; /* _is_typed on <self:AContinueExpr> */
RET_LABEL12:(void)0;
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
val* var2 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable MType */;
short int var11 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#AEscapeExpr#n_expr (self) on <self:ABreakExpr> */
var2 = self->attrs[COLOR_parser_nodes__AEscapeExpr___n_expr].val; /* _n_expr on <self:ABreakExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_nexpr = var;
var3 = NULL;
if (var_nexpr == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,var3) on <var_nexpr:nullable AExpr> */
var_other = var3;
{
var8 = ((short int (*)(val*, val*))(var_nexpr->class->vft[COLOR_kernel__Object___61d_61d]))(var_nexpr, var_other) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
var7 = var8;
}
var9 = !var7;
var5 = var9;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
var10 = typing__TypeVisitor__visit_expr(var_v, var_nexpr);
}
} else {
}
var11 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var11) on <self:ABreakExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var11; /* _is_typed on <self:ABreakExpr> */
RET_LABEL12:(void)0;
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
val* var2 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var3 /* : nullable MPropDef */;
val* var5 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : nullable MSignature */;
val* var9 /* : nullable MSignature */;
val* var10 /* : nullable MType */;
val* var12 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable Object */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
val* var16 /* : nullable MType */;
val* var18 /* : nullable MType */;
val* var19 /* : null */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : null */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : nullable MType */;
val* var34 /* : nullable MType */;
static val* varonce;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
val* var39 /* : null */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
short int var51 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#AReturnExpr#n_expr (self) on <self:AReturnExpr> */
var2 = self->attrs[COLOR_parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_nexpr = var;
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var5 = var_v->attrs[COLOR_typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mpropdef = var3;
/* <var_mpropdef:nullable MPropDef> isa MMethodDef */
cltype = type_model__MMethodDef.color;
idtype = type_model__MMethodDef.id;
if(var_mpropdef == NULL) {
var6 = 0;
} else {
if(cltype >= var_mpropdef->type->table_size) {
var6 = 0;
} else {
var6 = var_mpropdef->type->type_table[cltype] == idtype;
}
}
if (var6){
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var9 = var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 823);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var7) on <var7:nullable MSignature> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "model/model.nit", 1468);
show_backtrace(1);
}
var12 = var7->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var7:nullable MSignature> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ret_type = var10;
} else {
/* <var_mpropdef:nullable MPropDef> isa MAttributeDef */
cltype14 = type_model__MAttributeDef.color;
idtype15 = type_model__MAttributeDef.id;
if(var_mpropdef == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_mpropdef->type->table_size) {
var13 = 0;
} else {
var13 = var_mpropdef->type->type_table[cltype14] == idtype15;
}
}
if (var13){
{
{ /* Inline model#MAttributeDef#static_mtype (var_mpropdef) on <var_mpropdef:nullable MPropDef(MAttributeDef)> */
var18 = var_mpropdef->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var_mpropdef:nullable MPropDef(MAttributeDef)> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_ret_type = var16;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "semantize/typing.nit", 827);
show_backtrace(1);
}
}
var19 = NULL;
if (var_nexpr == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,var19) on <var_nexpr:nullable AExpr> */
var_other = var19;
{
var24 = ((short int (*)(val*, val*))(var_nexpr->class->vft[COLOR_kernel__Object___61d_61d]))(var_nexpr, var_other) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
var23 = var24;
}
var25 = !var23;
var21 = var25;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
var26 = NULL;
if (var_ret_type == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_type,var26) on <var_ret_type:nullable Object(nullable MType)> */
var_other = var26;
{
var31 = ((short int (*)(val*, val*))(var_ret_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret_type, var_other) /* == on <var_ret_type:nullable MType(MType)>*/;
var30 = var31;
}
var32 = !var30;
var28 = var32;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
{
var33 = typing__TypeVisitor__visit_expr_subtype(var_v, var_nexpr, var_ret_type);
}
} else {
{
var34 = typing__TypeVisitor__visit_expr(var_v, var_nexpr);
}
if (varonce) {
var35 = varonce;
} else {
var36 = "Error: Return with value in a procedure.";
var37 = 40;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce = var35;
}
{
typing__TypeVisitor__error(var_v, self, var35); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
}
} else {
var39 = NULL;
if (var_ret_type == NULL) {
var40 = 0; /* is null */
} else {
var40 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_type,var39) on <var_ret_type:nullable Object(nullable MType)> */
var_other = var39;
{
var44 = ((short int (*)(val*, val*))(var_ret_type->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret_type, var_other) /* == on <var_ret_type:nullable MType(MType)>*/;
var43 = var44;
}
var45 = !var43;
var41 = var45;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
if (var40){
if (varonce46) {
var47 = varonce46;
} else {
var48 = "Error: Return without value in a function.";
var49 = 42;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
{
typing__TypeVisitor__error(var_v, self, var47); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
}
var51 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var51) on <self:AReturnExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var51; /* _is_typed on <self:AReturnExpr> */
RET_LABEL52:(void)0;
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
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable AExpr */;
val* var6 /* : nullable AExpr */;
val* var7 /* : nullable AExpr */;
val* var9 /* : nullable AExpr */;
short int var10 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#AIfExpr#n_expr (self) on <self:AIfExpr> */
var2 = self->attrs[COLOR_parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1387);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = typing__TypeVisitor__visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (self) on <self:AIfExpr> */
var6 = self->attrs[COLOR_parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
typing__TypeVisitor__visit_stmt(var_v, var4); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (self) on <self:AIfExpr> */
var9 = self->attrs[COLOR_parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
typing__TypeVisitor__visit_stmt(var_v, var7); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
var10 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var10) on <self:AIfExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var10; /* _is_typed on <self:AIfExpr> */
RET_LABEL11:(void)0;
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
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : AExpr */;
val* var6 /* : AExpr */;
val* var7 /* : nullable MType */;
val* var_t1 /* var t1: nullable MType */;
val* var8 /* : AExpr */;
val* var10 /* : AExpr */;
val* var11 /* : nullable MType */;
val* var_t2 /* var t2: nullable MType */;
short int var12 /* : Bool */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var_ /* var : Bool */;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : Array[MType] */;
long var28 /* : Int */;
val* var_29 /* var : Array[MType] */;
val* var30 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
val* var31 /* : null */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
static val* varonce;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : FlatString */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
val* var47 /* : Array[Object] */;
long var48 /* : Int */;
val* var49 /* : NativeArray[Object] */;
val* var50 /* : String */;
var_v = p0;
{
{ /* Inline parser_nodes#AIfexprExpr#n_expr (self) on <self:AIfexprExpr> */
var2 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1396);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = typing__TypeVisitor__visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes#AIfexprExpr#n_then (self) on <self:AIfexprExpr> */
var6 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1398);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = typing__TypeVisitor__visit_expr(var_v, var4);
}
var_t1 = var7;
{
{ /* Inline parser_nodes#AIfexprExpr#n_else (self) on <self:AIfexprExpr> */
var10 = self->attrs[COLOR_parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1400);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = typing__TypeVisitor__visit_expr(var_v, var8);
}
var_t2 = var11;
var13 = NULL;
if (var_t1 == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t1,var13) on <var_t1:nullable MType> */
var_other = var13;
{
{ /* Inline kernel#Object#is_same_instance (var_t1,var_other) on <var_t1:nullable MType(MType)> */
var19 = var_t1 == var_other;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
var_ = var14;
if (var14){
var12 = var_;
} else {
var20 = NULL;
if (var_t2 == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t2,var20) on <var_t2:nullable MType> */
var_other = var20;
{
{ /* Inline kernel#Object#is_same_instance (var_t2,var_other) on <var_t2:nullable MType(MType)> */
var26 = var_t2 == var_other;
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
var12 = var21;
}
if (var12){
goto RET_LABEL;
} else {
}
var27 = NEW_array__Array(&type_array__Arraymodel__MType);
var28 = 2;
{
array__Array__with_capacity(var27, var28); /* Direct call array#Array#with_capacity on <var27:Array[MType]>*/
}
var_29 = var27;
{
array__AbstractArray__push(var_29, var_t1); /* Direct call array#AbstractArray#push on <var_29:Array[MType]>*/
}
{
array__AbstractArray__push(var_29, var_t2); /* Direct call array#AbstractArray#push on <var_29:Array[MType]>*/
}
{
var30 = typing__TypeVisitor__merge_types(var_v, self, var_29);
}
var_t = var30;
var31 = NULL;
if (var_t == NULL) {
var32 = 1; /* is null */
} else {
var32 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,var31) on <var_t:nullable MType> */
var_other = var31;
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other) on <var_t:nullable MType(MType)> */
var37 = var_t == var_other;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var32 = var33;
}
if (var32){
if (varonce) {
var38 = varonce;
} else {
var39 = "Type Error: ambiguous type ";
var40 = 27;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce = var38;
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = " vs ";
var45 = 4;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
var47 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var47 = array_instance Array[Object] */
var48 = 4;
var49 = NEW_array__NativeArray(var48, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var49)->values[0] = (val*) var38;
((struct instance_array__NativeArray*)var49)->values[1] = (val*) var_t1;
((struct instance_array__NativeArray*)var49)->values[2] = (val*) var43;
((struct instance_array__NativeArray*)var49)->values[3] = (val*) var_t2;
{
((void (*)(val*, val*, long))(var47->class->vft[COLOR_array__Array__with_native]))(var47, var49, var48) /* with_native on <var47:Array[Object]>*/;
}
}
{
var50 = ((val* (*)(val*))(var47->class->vft[COLOR_string__Object__to_s]))(var47) /* to_s on <var47:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var50); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
{
{ /* Inline typing#AExpr#mtype= (self,var_t) on <self:AIfexprExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var_t; /* _mtype on <self:AIfexprExpr> */
RET_LABEL51:(void)0;
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
val* var2 /* : nullable AExpr */;
short int var3 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#ADoExpr#n_block (self) on <self:ADoExpr> */
var2 = self->attrs[COLOR_parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
typing__TypeVisitor__visit_stmt(var_v, var); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
var3 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var3) on <self:ADoExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ADoExpr> */
RET_LABEL4:(void)0;
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
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable AExpr */;
val* var6 /* : nullable AExpr */;
short int var7 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#AWhileExpr#n_expr (self) on <self:AWhileExpr> */
var2 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "parser/parser_nodes.nit", 1408);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = typing__TypeVisitor__visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes#AWhileExpr#n_block (self) on <self:AWhileExpr> */
var6 = self->attrs[COLOR_parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
typing__TypeVisitor__visit_stmt(var_v, var4); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
var7 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var7) on <self:AWhileExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var7; /* _is_typed on <self:AWhileExpr> */
RET_LABEL8:(void)0;
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
val* var2 /* : nullable AExpr */;
short int var3 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#ALoopExpr#n_block (self) on <self:ALoopExpr> */
var2 = self->attrs[COLOR_parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
typing__TypeVisitor__visit_stmt(var_v, var); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
var3 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var3) on <self:ALoopExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ALoopExpr> */
RET_LABEL4:(void)0;
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
