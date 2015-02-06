#include "nit__typing.sep.0.h"
/* method typing#ToolContext#typing_phase for (self: ToolContext): Phase */
val* nit__typing___ToolContext___typing_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_nit__typing__ToolContext___typing_phase].val; /* _typing_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _typing_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 25);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__phase, 201);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__modelbuilder_base___ToolContext___modelbuilder(var);
}
{
((void (*)(val* self, val* p0))(var_npropdef->class->vft[COLOR_nit__typing__APropdef__do_typing]))(var_npropdef, var3) /* do_typing on <var_npropdef:APropdef>*/;
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
show_backtrace(1);
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
show_backtrace(1);
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
show_backtrace(1);
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
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
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
{
{ /* Inline typing#TypeVisitor#mpropdef (self) on <self:TypeVisitor> */
var2 = self->attrs[COLOR_nit__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <self:TypeVisitor> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
var3 = NULL;
if (var_mpropdef == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mpropdef,var3) on <var_mpropdef:nullable MPropDef> */
var_other = var3;
{
var7 = ((short int (*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mpropdef, var_other) /* == on <var_mpropdef:nullable MPropDef(MPropDef)>*/;
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
{ /* Inline typing#TypeVisitor#mpropdef= (self,var_mpropdef) on <self:TypeVisitor> */
self->attrs[COLOR_nit__typing__TypeVisitor___mpropdef].val = var_mpropdef; /* _mpropdef on <self:TypeVisitor> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var12 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MPropDef(MPropDef)> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_mclassdef = var10;
{
{ /* Inline typing#TypeVisitor#mclassdef= (self,var_mclassdef) on <self:TypeVisitor> */
self->attrs[COLOR_nit__typing__TypeVisitor___mclassdef].val = var_mclassdef; /* _mclassdef on <self:TypeVisitor> */
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var16 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 495);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#anchor= (self,var14) on <self:TypeVisitor> */
self->attrs[COLOR_nit__typing__TypeVisitor___anchor].val = var14; /* _anchor on <self:TypeVisitor> */
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var20 = var_mclassdef->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_mclass = var18;
var21 = NEW_nit__Variable(&type_nit__Variable);
if (varonce) {
var22 = varonce;
} else {
var23 = "self";
var24 = 4;
var25 = standard___standard__NativeString___to_s_with_length(var23, var24);
var22 = var25;
varonce = var22;
}
{
((void (*)(val* self, val* p0))(var21->class->vft[COLOR_nit__scope__Variable__name_61d]))(var21, var22) /* name= on <var21:Variable>*/;
}
{
((void (*)(val* self))(var21->class->vft[COLOR_standard__kernel__Object__init]))(var21) /* init on <var21:Variable>*/;
}
var_selfvariable = var21;
{
{ /* Inline typing#TypeVisitor#selfvariable= (self,var_selfvariable) on <self:TypeVisitor> */
self->attrs[COLOR_nit__typing__TypeVisitor___selfvariable].val = var_selfvariable; /* _selfvariable on <self:TypeVisitor> */
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:MClass> */
var29 = var_mclass->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:MClass> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type= (var_selfvariable,var27) on <var_selfvariable:Variable> */
var_selfvariable->attrs[COLOR_nit__typing__Variable___declared_type].val = var27; /* _declared_type on <var_selfvariable:Variable> */
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MPropDef(MPropDef)> */
var33 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MPropDef(MPropDef)> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
var_mprop = var31;
/* <var_mprop:MProperty> isa MMethod */
cltype = type_nit__MMethod.color;
idtype = type_nit__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var35 = 0;
} else {
var35 = var_mprop->type->type_table[cltype] == idtype;
}
var_ = var35;
if (var35){
{
{ /* Inline model#MMethod#is_toplevel (var_mprop) on <var_mprop:MProperty(MMethod)> */
var39 = var_mprop->attrs[COLOR_nit__model__MMethod___is_toplevel].s; /* _is_toplevel on <var_mprop:MProperty(MMethod)> */
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
var43 = var_mprop->attrs[COLOR_nit__model__MMethod___is_new].s; /* _is_new on <var_mprop:MProperty(MMethod)> */
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
self->attrs[COLOR_nit__typing__TypeVisitor___is_toplevel_context].s = var44; /* _is_toplevel_context on <self:TypeVisitor> */
RET_LABEL45:(void)0;
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
var3 = self->attrs[COLOR_nit__typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
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
var11 = ((short int (*)(val* self))(var_mtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var12 = !var11;
if (unlikely(!var12)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 84);
show_backtrace(1);
}
var = var_mtype;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var15 = self->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((val* (*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nit__model__MType__anchor_to]))(var_mtype, var13, var_anchor) /* anchor_to on <var_mtype:MType>*/;
}
var = var16;
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
show_backtrace(1);
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
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = !var_for_self;
{
var8 = ((val* (*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nit__model__MType__resolve_for]))(var_mtype, var_subtype, var1, var4, var7) /* resolve_for on <var_mtype:MType>*/;
}
var_res = var8;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#check_subtype for (self: TypeVisitor, ANode, MType, MType): nullable MType */
val* nit__typing___nit__typing__TypeVisitor___check_subtype(val* self, val* p0, val* p1, val* p2) {
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
var1 = nit__typing___nit__typing__TypeVisitor___is_subtype(self, var_sub, var_sup);
}
if (var1){
var = var_sub;
goto RET_LABEL;
} else {
}
{
var2 = nit__typing___nit__typing__TypeVisitor___anchor_to(self, var_sup);
}
{
var3 = nit__typing___nit__typing__TypeVisitor___is_subtype(self, var_sub, var2);
}
if (var3){
var = var_sup;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var6 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
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
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = ", got ";
var14 = 6;
var15 = standard___standard__NativeString___to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 4;
var18 = NEW_standard__NativeArray(var17, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var18)->values[0] = (val*) var7;
((struct instance_standard__NativeArray*)var18)->values[1] = (val*) var_sup;
((struct instance_standard__NativeArray*)var18)->values[2] = (val*) var12;
((struct instance_standard__NativeArray*)var18)->values[3] = (val*) var_sub;
{
((void (*)(val* self, val* p0, long p1))(var16->class->vft[COLOR_standard__array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
}
{
var19 = ((val* (*)(val* self))(var16->class->vft[COLOR_standard__string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var4, var_node, var19); /* Direct call modelbuilder_base#ModelBuilder#error on <var4:ModelBuilder>*/
}
var20 = NULL;
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#visit_stmt for (self: TypeVisitor, nullable AExpr) */
void nit__typing___nit__typing__TypeVisitor___visit_stmt(val* self, val* p0) {
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
((void (*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_nit__typing__AExpr__accept_typing]))(var_nexpr, self) /* accept_typing on <var_nexpr:nullable AExpr(AExpr)>*/;
}
RET_LABEL:;
}
/* method typing#TypeVisitor#visit_expr for (self: TypeVisitor, AExpr): nullable MType */
val* nit__typing___nit__typing__TypeVisitor___visit_expr(val* self, val* p0) {
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
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : ModelBuilder */;
val* var14 /* : ModelBuilder */;
val* var15 /* : ToolContext */;
val* var17 /* : ToolContext */;
long var18 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : ModelBuilder */;
val* var29 /* : ModelBuilder */;
val* var30 /* : ToolContext */;
val* var32 /* : ToolContext */;
long var33 /* : Int */;
long var35 /* : Int */;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
short int var43 /* : Bool */;
static val* varonce;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : FlatString */;
val* var48 /* : null */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : FlatString */;
val* var54 /* : null */;
var_nexpr = p0;
{
((void (*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_nit__typing__AExpr__accept_typing]))(var_nexpr, self) /* accept_typing on <var_nexpr:AExpr>*/;
}
{
var1 = ((val* (*)(val* self))(var_nexpr->class->vft[COLOR_nit__typing__AExpr__mtype]))(var_nexpr) /* mtype on <var_nexpr:AExpr>*/;
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
var6 = ((short int (*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other) /* == on <var_mtype:nullable MType(MType)>*/;
}
var7 = !var6;
var4 = var7;
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
var10 = var_nexpr->attrs[COLOR_nit__typing__AExpr___is_typed].s; /* _is_typed on <var_nexpr:AExpr> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = !var8;
if (var11){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var14 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var12) on <var12:ModelBuilder> */
var17 = var12->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var12:ModelBuilder> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var15) on <var15:ToolContext> */
var20 = var15->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <var15:ToolContext> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = 0;
{
{ /* Inline kernel#Int#> (var18,var21) on <var18:Int> */
/* Covariant cast for argument 0 (i) <var21:Int> isa OTHER */
/* <var21:Int> isa OTHER */
var24 = 1; /* easy <var21:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var25 = var18 > var21;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var26 = !var22;
if (var26){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var29 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var27) on <var27:ModelBuilder> */
var32 = var27->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var27:ModelBuilder> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#verbose_level (var30) on <var30:ToolContext> */
var35 = var30->attrs[COLOR_nit__toolcontext__ToolContext___verbose_level].l; /* _verbose_level on <var30:ToolContext> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
var36 = 1;
{
{ /* Inline kernel#Int#> (var33,var36) on <var33:Int> */
/* Covariant cast for argument 0 (i) <var36:Int> isa OTHER */
/* <var36:Int> isa OTHER */
var39 = 1; /* easy <var36:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var43 = var33 > var36;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
if (varonce) {
var44 = varonce;
} else {
var45 = "No return type but no error.";
var46 = 28;
var47 = standard___standard__NativeString___to_s_with_length(var45, var46);
var44 = var47;
varonce = var44;
}
{
nit___nit__ANode___debug(var_nexpr, var44); /* Direct call parser_nodes#ANode#debug on <var_nexpr:AExpr>*/
}
} else {
}
} else {
}
var48 = NULL;
var = var48;
goto RET_LABEL;
} else {
}
if (varonce49) {
var50 = varonce49;
} else {
var51 = "Type error: expected expression.";
var52 = 32;
var53 = standard___standard__NativeString___to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
{
nit__typing___nit__typing__TypeVisitor___error(self, var_nexpr, var50); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
var54 = NULL;
var = var54;
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
var_nexpr = p0;
var_sup = p1;
{
var1 = nit__typing___nit__typing__TypeVisitor___visit_expr(self, var_nexpr);
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
var18 = nit__typing___nit__typing__TypeVisitor___check_subtype(self, var_nexpr, var_sub, var_sup);
}
var_res = var18;
if (var_res == NULL) {
var19 = 1; /* <var_sub:nullable MType(MType)> cannot be null */
} else {
{ /* Inline kernel#Object#!= (var_res,var_sub) on <var_res:nullable MType> */
var_other22 = var_sub;
{
var23 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other22) /* == on <var_res:nullable MType(MType)>*/;
}
var24 = !var23;
var20 = var24;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
{
{ /* Inline typing#AExpr#implicit_cast_to= (var_nexpr,var_res) on <var_nexpr:AExpr> */
var_nexpr->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val = var_res; /* _implicit_cast_to on <var_nexpr:AExpr> */
RET_LABEL25:(void)0;
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
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : ModelBuilder */;
val* var26 /* : ModelBuilder */;
static val* varonce;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
static val* varonce31;
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
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
val* var69 /* : Array[Object] */;
long var70 /* : Int */;
val* var71 /* : NativeArray[Object] */;
val* var72 /* : String */;
var_node = p0;
var_nexpr = p1;
var_ntype = p2;
{
var1 = nit__typing___nit__typing__TypeVisitor___visit_expr(self, var_nexpr);
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
var10 = nit__typing___nit__typing__TypeVisitor___resolve_mtype(self, var_ntype);
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
var23 = var_sup == var_other;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
if (var19){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var26 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (varonce) {
var27 = varonce;
} else {
var28 = "useless-type-test";
var29 = 17;
var30 = standard___standard__NativeString___to_s_with_length(var28, var29);
var27 = var30;
varonce = var27;
}
if (varonce31) {
var32 = varonce31;
} else {
var33 = "Warning: Expression is already a ";
var34 = 33;
var35 = standard___standard__NativeString___to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = ".";
var39 = 1;
var40 = standard___standard__NativeString___to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
var41 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var41 = array_instance Array[Object] */
var42 = 3;
var43 = NEW_standard__NativeArray(var42, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var43)->values[0] = (val*) var32;
((struct instance_standard__NativeArray*)var43)->values[1] = (val*) var_sup;
((struct instance_standard__NativeArray*)var43)->values[2] = (val*) var37;
{
((void (*)(val* self, val* p0, long p1))(var41->class->vft[COLOR_standard__array__Array__with_native]))(var41, var43, var42) /* with_native on <var41:Array[Object]>*/;
}
}
{
var44 = ((val* (*)(val* self))(var41->class->vft[COLOR_standard__string__Object__to_s]))(var41) /* to_s on <var41:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___warning(var24, var_node, var27, var44); /* Direct call modelbuilder_base#ModelBuilder#warning on <var24:ModelBuilder>*/
}
} else {
{
var45 = nit__typing___nit__typing__TypeVisitor___is_subtype(self, var_sub, var_sup);
}
if (var45){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var48 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (varonce49) {
var50 = varonce49;
} else {
var51 = "useless-type-test";
var52 = 17;
var53 = standard___standard__NativeString___to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
if (varonce54) {
var55 = varonce54;
} else {
var56 = "Warning: Expression is already a ";
var57 = 33;
var58 = standard___standard__NativeString___to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = " since it is a ";
var62 = 15;
var63 = standard___standard__NativeString___to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = ".";
var67 = 1;
var68 = standard___standard__NativeString___to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var69 = array_instance Array[Object] */
var70 = 5;
var71 = NEW_standard__NativeArray(var70, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var71)->values[0] = (val*) var55;
((struct instance_standard__NativeArray*)var71)->values[1] = (val*) var_sup;
((struct instance_standard__NativeArray*)var71)->values[2] = (val*) var60;
((struct instance_standard__NativeArray*)var71)->values[3] = (val*) var_sub;
((struct instance_standard__NativeArray*)var71)->values[4] = (val*) var65;
{
((void (*)(val* self, val* p0, long p1))(var69->class->vft[COLOR_standard__array__Array__with_native]))(var69, var71, var70) /* with_native on <var69:Array[Object]>*/;
}
}
{
var72 = ((val* (*)(val* self))(var69->class->vft[COLOR_standard__string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___warning(var46, var_node, var50, var72); /* Direct call modelbuilder_base#ModelBuilder#warning on <var46:ModelBuilder>*/
}
} else {
}
}
var = var_sup;
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
var2 = var_anode->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <var_anode:ABinopExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1802);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val* (*)(val* self))(var->class->vft[COLOR_nit__typing__AExpr__mtype]))(var) /* mtype on <var:AExpr>*/;
}
var_mtype = var3;
{
{ /* Inline parser_nodes#ABinopExpr#n_expr2 (var_anode) on <var_anode:ABinopExpr> */
var6 = var_anode->attrs[COLOR_nit__parser_nodes__ABinopExpr___n_expr2].val; /* _n_expr2 on <var_anode:ABinopExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr2");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1809);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((val* (*)(val* self))(var4->class->vft[COLOR_nit__typing__AExpr__mtype]))(var4) /* mtype on <var4:AExpr>*/;
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
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
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
cltype26 = type_nit__MNullableType.color;
idtype27 = type_nit__MNullableType.id;
if(cltype26 >= var_mtype->type->table_size) {
var25 = 0;
} else {
var25 = var_mtype->type->type_table[cltype26] == idtype27;
}
var28 = !var25;
if (var28){
{
var29 = nit__typing___nit__typing__TypeVisitor___anchor_to(self, var_mtype);
}
/* <var29:MType> isa MNullableType */
cltype31 = type_nit__MNullableType.color;
idtype32 = type_nit__MNullableType.id;
if(cltype31 >= var29->type->table_size) {
var30 = 0;
} else {
var30 = var29->type->type_table[cltype31] == idtype32;
}
var33 = !var30;
if (var33){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var36 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
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
var40 = standard___standard__NativeString___to_s_with_length(var38, var39);
var37 = var40;
varonce = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = "Warning: expression is not null, since it is a `";
var44 = 48;
var45 = standard___standard__NativeString___to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "`.";
var49 = 2;
var50 = standard___standard__NativeString___to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var51 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var51 = array_instance Array[Object] */
var52 = 3;
var53 = NEW_standard__NativeArray(var52, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var53)->values[0] = (val*) var42;
((struct instance_standard__NativeArray*)var53)->values[1] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var53)->values[2] = (val*) var47;
{
((void (*)(val* self, val* p0, long p1))(var51->class->vft[COLOR_standard__array__Array__with_native]))(var51, var53, var52) /* with_native on <var51:Array[Object]>*/;
}
}
{
var54 = ((val* (*)(val* self))(var51->class->vft[COLOR_standard__string__Object__to_s]))(var51) /* to_s on <var51:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___warning(var34, var_anode, var37, var54); /* Direct call modelbuilder_base#ModelBuilder#warning on <var34:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ASendExpr#n_expr (var_anode) on <var_anode:ABinopExpr> */
var57 = var_anode->attrs[COLOR_nit__parser_nodes__ASendExpr___n_expr].val; /* _n_expr on <var_anode:ABinopExpr> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1802);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = ((val* (*)(val* self))(var55->class->vft[COLOR_nit__typing__AExpr__its_variable]))(var55) /* its_variable on <var55:AExpr>*/;
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
cltype67 = type_nit__AEqExpr.color;
idtype68 = type_nit__AEqExpr.id;
if(cltype67 >= var_anode->type->table_size) {
var66 = 0;
} else {
var66 = var_anode->type->type_table[cltype67] == idtype68;
}
if (var66){
{
{ /* Inline flow#AExpr#after_flow_context (var_anode) on <var_anode:ABinopExpr(AEqExpr)> */
var71 = var_anode->attrs[COLOR_nit__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_anode:ABinopExpr(AEqExpr)> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (var69 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 221);
show_backtrace(1);
} else {
{ /* Inline flow#FlowContext#when_true (var69) on <var69:nullable FlowContext> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 224);
show_backtrace(1);
}
var74 = var69->attrs[COLOR_nit__flow__FlowContext___when_true].val; /* _when_true on <var69:nullable FlowContext> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 224);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
nit__typing___FlowContext___set_var(var72, var_variable, var_mtype2); /* Direct call typing#FlowContext#set_var on <var72:FlowContext>*/
}
{
{ /* Inline flow#AExpr#after_flow_context (var_anode) on <var_anode:ABinopExpr(AEqExpr)> */
var77 = var_anode->attrs[COLOR_nit__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_anode:ABinopExpr(AEqExpr)> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (var75 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 222);
show_backtrace(1);
} else {
{ /* Inline flow#FlowContext#when_false (var75) on <var75:nullable FlowContext> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 227);
show_backtrace(1);
}
var80 = var75->attrs[COLOR_nit__flow__FlowContext___when_false].val; /* _when_false on <var75:nullable FlowContext> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 227);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline model#MNullableType#mtype (var_mtype) on <var_mtype:nullable MType(MNullableType)> */
var83 = var_mtype->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <var_mtype:nullable MType(MNullableType)> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
nit__typing___FlowContext___set_var(var78, var_variable, var81); /* Direct call typing#FlowContext#set_var on <var78:FlowContext>*/
}
} else {
/* <var_anode:ABinopExpr> isa ANeExpr */
cltype85 = type_nit__ANeExpr.color;
idtype86 = type_nit__ANeExpr.id;
if(cltype85 >= var_anode->type->table_size) {
var84 = 0;
} else {
var84 = var_anode->type->type_table[cltype85] == idtype86;
}
if (var84){
{
{ /* Inline flow#AExpr#after_flow_context (var_anode) on <var_anode:ABinopExpr(ANeExpr)> */
var89 = var_anode->attrs[COLOR_nit__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_anode:ABinopExpr(ANeExpr)> */
var87 = var89;
RET_LABEL88:(void)0;
}
}
if (var87 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 224);
show_backtrace(1);
} else {
{ /* Inline flow#FlowContext#when_false (var87) on <var87:nullable FlowContext> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 227);
show_backtrace(1);
}
var92 = var87->attrs[COLOR_nit__flow__FlowContext___when_false].val; /* _when_false on <var87:nullable FlowContext> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 227);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
nit__typing___FlowContext___set_var(var90, var_variable, var_mtype2); /* Direct call typing#FlowContext#set_var on <var90:FlowContext>*/
}
{
{ /* Inline flow#AExpr#after_flow_context (var_anode) on <var_anode:ABinopExpr(ANeExpr)> */
var95 = var_anode->attrs[COLOR_nit__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_anode:ABinopExpr(ANeExpr)> */
var93 = var95;
RET_LABEL94:(void)0;
}
}
if (var93 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 225);
show_backtrace(1);
} else {
{ /* Inline flow#FlowContext#when_true (var93) on <var93:nullable FlowContext> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 224);
show_backtrace(1);
}
var98 = var93->attrs[COLOR_nit__flow__FlowContext___when_true].val; /* _when_true on <var93:nullable FlowContext> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 224);
show_backtrace(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline model#MNullableType#mtype (var_mtype) on <var_mtype:nullable MType(MNullableType)> */
var101 = var_mtype->attrs[COLOR_nit__model__MNullableType___mtype].val; /* _mtype on <var_mtype:nullable MType(MNullableType)> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1506);
show_backtrace(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
nit__typing___FlowContext___set_var(var96, var_variable, var99); /* Direct call typing#FlowContext#set_var on <var96:FlowContext>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 227);
show_backtrace(1);
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
show_backtrace(1);
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
show_backtrace(1);
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
show_backtrace(1);
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
show_backtrace(1);
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
var10 = nit__modelize_class___ModelBuilder___resolve_mtype(var1, var4, var7, var_node);
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
show_backtrace(1);
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
show_backtrace(1);
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
var3 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
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
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit___nit__ModelBuilder___try_get_mclass_by_name(var1, var_node, var4, var_name);
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
var17 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
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
var21 = standard___standard__NativeString___to_s_with_length(var19, var20);
var18 = var21;
varonce = var18;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "\'.";
var25 = 2;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
var27 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 3;
var29 = NEW_standard__NativeArray(var28, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var29)->values[0] = (val*) var18;
((struct instance_standard__NativeArray*)var29)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var29)->values[2] = (val*) var23;
{
((void (*)(val* self, val* p0, long p1))(var27->class->vft[COLOR_standard__array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val* self))(var27->class->vft[COLOR_standard__string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var15, var_node, var30); /* Direct call modelbuilder_base#ModelBuilder#error on <var15:ModelBuilder>*/
}
} else {
}
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
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = nit__typing___nit__typing__TypeVisitor___get_mclass(self, var_node, var1);
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
var16 = var_mclass->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
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
short int var3 /* : Bool */;
short int var4 /* : Bool */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
short int var22 /* : Bool */;
val* var23 /* : MModule */;
val* var25 /* : MModule */;
val* var26 /* : MClassType */;
val* var27 /* : MType */;
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
val* var38 /* : Array[Object] */;
long var39 /* : Int */;
val* var40 /* : NativeArray[Object] */;
val* var41 /* : String */;
val* var42 /* : null */;
val* var43 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
short int var44 /* : Bool */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
short int var50 /* : Bool */;
short int var_51 /* var : Bool */;
val* var52 /* : null */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
val* var64 /* : nullable MProperty */;
val* var65 /* : null */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
val* var72 /* : ModelBuilder */;
val* var74 /* : ModelBuilder */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : FlatString */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : FlatString */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
val* var90 /* : Array[Object] */;
long var91 /* : Int */;
val* var92 /* : NativeArray[Object] */;
val* var93 /* : String */;
val* var94 /* : ModelBuilder */;
val* var96 /* : ModelBuilder */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
long var100 /* : Int */;
val* var101 /* : FlatString */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : FlatString */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
val* var112 /* : Array[Object] */;
long var113 /* : Int */;
val* var114 /* : NativeArray[Object] */;
val* var115 /* : String */;
val* var116 /* : null */;
short int var117 /* : Bool */;
int cltype118;
int idtype119;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
short int var_125 /* var : Bool */;
short int var_126 /* var : Bool */;
short int var127 /* : Bool */;
short int var129 /* : Bool */;
short int var130 /* : Bool */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : FlatString */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : FlatString */;
val* var141 /* : Array[Object] */;
long var142 /* : Int */;
val* var143 /* : NativeArray[Object] */;
val* var144 /* : String */;
short int var145 /* : Bool */;
short int var146 /* : Bool */;
short int var_147 /* var : Bool */;
short int var148 /* : Bool */;
short int var150 /* : Bool */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : NativeString */;
long var154 /* : Int */;
val* var155 /* : FlatString */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : NativeString */;
long var159 /* : Int */;
val* var160 /* : FlatString */;
val* var161 /* : Array[Object] */;
long var162 /* : Int */;
val* var163 /* : NativeArray[Object] */;
val* var164 /* : String */;
short int var165 /* : Bool */;
short int var166 /* : Bool */;
short int var167 /* : Bool */;
val* var168 /* : MVisibility */;
val* var170 /* : MVisibility */;
val* var171 /* : MVisibility */;
short int var172 /* : Bool */;
short int var174 /* : Bool */;
short int var176 /* : Bool */;
short int var_177 /* var : Bool */;
short int var178 /* : Bool */;
short int var_179 /* var : Bool */;
val* var180 /* : MModule */;
val* var182 /* : MModule */;
val* var183 /* : MClassDef */;
val* var185 /* : MClassDef */;
val* var186 /* : MModule */;
val* var188 /* : MModule */;
val* var189 /* : MVisibility */;
val* var190 /* : MVisibility */;
short int var191 /* : Bool */;
short int var_192 /* var : Bool */;
val* var193 /* : ModelBuilder */;
val* var195 /* : ModelBuilder */;
val* var196 /* : ToolContext */;
val* var198 /* : ToolContext */;
val* var199 /* : OptionBool */;
val* var201 /* : OptionBool */;
val* var202 /* : nullable Object */;
val* var204 /* : nullable Object */;
short int var205 /* : Bool */;
short int var206 /* : Bool */;
val* var207 /* : ModelBuilder */;
val* var209 /* : ModelBuilder */;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : NativeString */;
long var213 /* : Int */;
val* var214 /* : FlatString */;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : NativeString */;
long var218 /* : Int */;
val* var219 /* : FlatString */;
val* var220 /* : Array[Object] */;
long var221 /* : Int */;
val* var222 /* : NativeArray[Object] */;
val* var223 /* : String */;
val* var224 /* : null */;
val* var225 /* : nullable MDeprecationInfo */;
val* var227 /* : nullable MDeprecationInfo */;
val* var_info /* var info: nullable MDeprecationInfo */;
short int var228 /* : Bool */;
val* var229 /* : null */;
short int var230 /* : Bool */;
short int var231 /* : Bool */;
val* var_other233 /* var other: nullable Object */;
short int var234 /* : Bool */;
short int var235 /* : Bool */;
short int var_236 /* var : Bool */;
val* var237 /* : nullable MPropDef */;
val* var239 /* : nullable MPropDef */;
val* var240 /* : MProperty */;
val* var242 /* : MProperty */;
val* var243 /* : nullable MDeprecationInfo */;
val* var245 /* : nullable MDeprecationInfo */;
val* var246 /* : null */;
short int var247 /* : Bool */;
short int var248 /* : Bool */;
short int var250 /* : Bool */;
short int var252 /* : Bool */;
val* var253 /* : nullable MDoc */;
val* var255 /* : nullable MDoc */;
val* var_mdoc /* var mdoc: nullable MDoc */;
val* var256 /* : null */;
short int var257 /* : Bool */;
short int var258 /* : Bool */;
short int var260 /* : Bool */;
short int var261 /* : Bool */;
val* var262 /* : ModelBuilder */;
val* var264 /* : ModelBuilder */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : NativeString */;
long var268 /* : Int */;
val* var269 /* : FlatString */;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : NativeString */;
long var273 /* : Int */;
val* var274 /* : FlatString */;
static val* varonce275;
val* var276 /* : String */;
char* var277 /* : NativeString */;
long var278 /* : Int */;
val* var279 /* : FlatString */;
val* var280 /* : Array[String] */;
val* var282 /* : Array[String] */;
val* var283 /* : nullable Object */;
val* var284 /* : Array[Object] */;
long var285 /* : Int */;
val* var286 /* : NativeArray[Object] */;
val* var287 /* : String */;
val* var288 /* : ModelBuilder */;
val* var290 /* : ModelBuilder */;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : NativeString */;
long var294 /* : Int */;
val* var295 /* : FlatString */;
static val* varonce296;
val* var297 /* : String */;
char* var298 /* : NativeString */;
long var299 /* : Int */;
val* var300 /* : FlatString */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : NativeString */;
long var304 /* : Int */;
val* var305 /* : FlatString */;
val* var306 /* : Array[Object] */;
long var307 /* : Int */;
val* var308 /* : NativeArray[Object] */;
val* var309 /* : String */;
val* var310 /* : MModule */;
val* var312 /* : MModule */;
val* var313 /* : Array[MPropDef] */;
val* var_propdefs /* var propdefs: Array[MMethodDef] */;
long var314 /* : Int */;
long var316 /* : Int */;
long var317 /* : Int */;
short int var318 /* : Bool */;
short int var320 /* : Bool */;
val* var321 /* : ModelBuilder */;
val* var323 /* : ModelBuilder */;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : NativeString */;
long var327 /* : Int */;
val* var328 /* : FlatString */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : NativeString */;
long var332 /* : Int */;
val* var333 /* : FlatString */;
val* var334 /* : Array[Object] */;
long var335 /* : Int */;
val* var336 /* : NativeArray[Object] */;
val* var337 /* : String */;
val* var338 /* : null */;
long var339 /* : Int */;
long var341 /* : Int */;
long var342 /* : Int */;
short int var343 /* : Bool */;
short int var345 /* : Bool */;
val* var346 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: nullable Object */;
val* var347 /* : ModelBuilder */;
val* var349 /* : ModelBuilder */;
static val* varonce350;
val* var351 /* : String */;
char* var352 /* : NativeString */;
long var353 /* : Int */;
val* var354 /* : FlatString */;
static val* varonce355;
val* var356 /* : String */;
char* var357 /* : NativeString */;
long var358 /* : Int */;
val* var359 /* : FlatString */;
static val* varonce360;
val* var361 /* : String */;
char* var362 /* : NativeString */;
long var363 /* : Int */;
val* var364 /* : FlatString */;
static val* varonce365;
val* var366 /* : String */;
char* var367 /* : NativeString */;
long var368 /* : Int */;
val* var369 /* : FlatString */;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : NativeString */;
long var373 /* : Int */;
val* var374 /* : FlatString */;
val* var375 /* : String */;
val* var376 /* : Array[Object] */;
long var377 /* : Int */;
val* var378 /* : NativeArray[Object] */;
val* var379 /* : String */;
val* var380 /* : MPropDef */;
val* var382 /* : MPropDef */;
val* var383 /* : MSignature */;
val* var384 /* : nullable MSignature */;
val* var386 /* : nullable MSignature */;
val* var387 /* : nullable MSignature */;
val* var389 /* : nullable MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var390 /* : MType */;
short int var391 /* : Bool */;
int cltype392;
int idtype393;
const char* var_class_name;
short int var394 /* : Bool */;
short int var_erasure_cast /* var erasure_cast: Bool */;
val* var395 /* : nullable MSignature */;
val* var397 /* : nullable MSignature */;
val* var398 /* : nullable MType */;
val* var400 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var401 /* : Bool */;
short int var402 /* : Bool */;
short int var_403 /* var : Bool */;
val* var404 /* : null */;
short int var405 /* : Bool */;
short int var406 /* : Bool */;
short int var408 /* : Bool */;
short int var409 /* : Bool */;
val* var410 /* : MType */;
short int var411 /* : Bool */;
int cltype412;
int idtype413;
val* var414 /* : nullable MType */;
val* var416 /* : nullable MType */;
val* var_erased_rettype /* var erased_rettype: nullable MType */;
val* var417 /* : null */;
short int var418 /* : Bool */;
short int var419 /* : Bool */;
short int var421 /* : Bool */;
short int var422 /* : Bool */;
short int var423 /* : Bool */;
val* var424 /* : CallSite */;
val* var425 /* : MModule */;
val* var427 /* : MModule */;
val* var428 /* : nullable MClassType */;
val* var430 /* : nullable MClassType */;
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
if (varonce) {
var5 = varonce;
} else {
var6 = "==";
var7 = 2;
var8 = standard___standard__NativeString___to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
{
var9 = ((short int (*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var5) /* == on <var_name:String>*/;
}
var_ = var9;
if (var9){
var4 = var_;
} else {
if (varonce10) {
var11 = varonce10;
} else {
var12 = "!=";
var13 = 2;
var14 = standard___standard__NativeString___to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
{
var15 = ((short int (*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var11) /* == on <var_name:String>*/;
}
var4 = var15;
}
var_16 = var4;
if (var4){
var3 = var_16;
} else {
if (varonce17) {
var18 = varonce17;
} else {
var19 = "is_same_instance";
var20 = 16;
var21 = standard___standard__NativeString___to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
{
var22 = ((short int (*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var18) /* == on <var_name:String>*/;
}
var3 = var22;
}
if (var3){
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var25 = self->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nit__model___MModule___object_type(var23);
}
{
var27 = nit___nit__MType___as_nullable(var26);
}
var_unsafe_type = var27;
} else {
if (varonce28) {
var29 = varonce28;
} else {
var30 = "Error: Method \'";
var31 = 15;
var32 = standard___standard__NativeString___to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = "\' call on \'null\'.";
var36 = 17;
var37 = standard___standard__NativeString___to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 3;
var40 = NEW_standard__NativeArray(var39, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var40)->values[0] = (val*) var29;
((struct instance_standard__NativeArray*)var40)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var40)->values[2] = (val*) var34;
{
((void (*)(val* self, val* p0, long p1))(var38->class->vft[COLOR_standard__array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
}
{
var41 = ((val* (*)(val* self))(var38->class->vft[COLOR_standard__string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(self, var_node, var41); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
var42 = NULL;
var = var42;
goto RET_LABEL;
}
} else {
}
{
var43 = nit__typing___nit__typing__TypeVisitor___try_get_mproperty_by_name2(self, var_node, var_unsafe_type, var_name);
}
var_mproperty = var43;
if (varonce45) {
var46 = varonce45;
} else {
var47 = "new";
var48 = 3;
var49 = standard___standard__NativeString___to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
{
var50 = ((short int (*)(val* self, val* p0))(var_name->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_name, var46) /* == on <var_name:String>*/;
}
var_51 = var50;
if (var50){
var52 = NULL;
if (var_mproperty == NULL) {
var53 = 1; /* is null */
} else {
var53 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mproperty,var52) on <var_mproperty:nullable MProperty> */
var_other = var52;
{
{ /* Inline kernel#Object#is_same_instance (var_mproperty,var_other) on <var_mproperty:nullable MProperty(MProperty)> */
var58 = var_mproperty == var_other;
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
}
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
var44 = var53;
} else {
var44 = var_51;
}
if (var44){
if (varonce59) {
var60 = varonce59;
} else {
var61 = "init";
var62 = 4;
var63 = standard___standard__NativeString___to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
var_name = var60;
{
var64 = nit__typing___nit__typing__TypeVisitor___try_get_mproperty_by_name2(self, var_node, var_unsafe_type, var_name);
}
var_mproperty = var64;
} else {
}
var65 = NULL;
if (var_mproperty == NULL) {
var66 = 1; /* is null */
} else {
var66 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mproperty,var65) on <var_mproperty:nullable MProperty> */
var_other = var65;
{
{ /* Inline kernel#Object#is_same_instance (var_mproperty,var_other) on <var_mproperty:nullable MProperty(MProperty)> */
var71 = var_mproperty == var_other;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
var66 = var67;
}
if (var66){
if (var_recv_is_self){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var74 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
if (varonce75) {
var76 = varonce75;
} else {
var77 = "Error: Method or variable \'";
var78 = 27;
var79 = standard___standard__NativeString___to_s_with_length(var77, var78);
var76 = var79;
varonce75 = var76;
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = "\' unknown in ";
var83 = 13;
var84 = standard___standard__NativeString___to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = ".";
var88 = 1;
var89 = standard___standard__NativeString___to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var90 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var90 = array_instance Array[Object] */
var91 = 5;
var92 = NEW_standard__NativeArray(var91, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var92)->values[0] = (val*) var76;
((struct instance_standard__NativeArray*)var92)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var92)->values[2] = (val*) var81;
((struct instance_standard__NativeArray*)var92)->values[3] = (val*) var_recvtype;
((struct instance_standard__NativeArray*)var92)->values[4] = (val*) var86;
{
((void (*)(val* self, val* p0, long p1))(var90->class->vft[COLOR_standard__array__Array__with_native]))(var90, var92, var91) /* with_native on <var90:Array[Object]>*/;
}
}
{
var93 = ((val* (*)(val* self))(var90->class->vft[COLOR_standard__string__Object__to_s]))(var90) /* to_s on <var90:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var72, var_node, var93); /* Direct call modelbuilder_base#ModelBuilder#error on <var72:ModelBuilder>*/
}
} else {
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var96 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
if (varonce97) {
var98 = varonce97;
} else {
var99 = "Error: Method \'";
var100 = 15;
var101 = standard___standard__NativeString___to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
if (varonce102) {
var103 = varonce102;
} else {
var104 = "\' doesn\'t exists in ";
var105 = 20;
var106 = standard___standard__NativeString___to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = ".";
var110 = 1;
var111 = standard___standard__NativeString___to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
var112 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var112 = array_instance Array[Object] */
var113 = 5;
var114 = NEW_standard__NativeArray(var113, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var114)->values[0] = (val*) var98;
((struct instance_standard__NativeArray*)var114)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var114)->values[2] = (val*) var103;
((struct instance_standard__NativeArray*)var114)->values[3] = (val*) var_recvtype;
((struct instance_standard__NativeArray*)var114)->values[4] = (val*) var108;
{
((void (*)(val* self, val* p0, long p1))(var112->class->vft[COLOR_standard__array__Array__with_native]))(var112, var114, var113) /* with_native on <var112:Array[Object]>*/;
}
}
{
var115 = ((val* (*)(val* self))(var112->class->vft[COLOR_standard__string__Object__to_s]))(var112) /* to_s on <var112:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var94, var_node, var115); /* Direct call modelbuilder_base#ModelBuilder#error on <var94:ModelBuilder>*/
}
}
var116 = NULL;
var = var116;
goto RET_LABEL;
} else {
}
/* <var_mproperty:nullable MProperty(MProperty)> isa MMethod */
cltype118 = type_nit__MMethod.color;
idtype119 = type_nit__MMethod.id;
if(cltype118 >= var_mproperty->type->table_size) {
var117 = 0;
} else {
var117 = var_mproperty->type->type_table[cltype118] == idtype119;
}
if (unlikely(!var117)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 294);
show_backtrace(1);
}
{
{ /* Inline typing#TypeVisitor#is_toplevel_context (self) on <self:TypeVisitor> */
var124 = self->attrs[COLOR_nit__typing__TypeVisitor___is_toplevel_context].s; /* _is_toplevel_context on <self:TypeVisitor> */
var122 = var124;
RET_LABEL123:(void)0;
}
}
var_125 = var122;
if (var122){
var121 = var_recv_is_self;
} else {
var121 = var_125;
}
var_126 = var121;
if (var121){
{
{ /* Inline model#MMethod#is_toplevel (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var129 = var_mproperty->attrs[COLOR_nit__model__MMethod___is_toplevel].s; /* _is_toplevel on <var_mproperty:nullable MProperty(MMethod)> */
var127 = var129;
RET_LABEL128:(void)0;
}
}
var130 = !var127;
var120 = var130;
} else {
var120 = var_126;
}
if (var120){
if (varonce131) {
var132 = varonce131;
} else {
var133 = "Error: \'";
var134 = 8;
var135 = standard___standard__NativeString___to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
if (varonce136) {
var137 = varonce136;
} else {
var138 = "\' is not a top-level method, thus need a receiver.";
var139 = 50;
var140 = standard___standard__NativeString___to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
var141 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var141 = array_instance Array[Object] */
var142 = 3;
var143 = NEW_standard__NativeArray(var142, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var143)->values[0] = (val*) var132;
((struct instance_standard__NativeArray*)var143)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var143)->values[2] = (val*) var137;
{
((void (*)(val* self, val* p0, long p1))(var141->class->vft[COLOR_standard__array__Array__with_native]))(var141, var143, var142) /* with_native on <var141:Array[Object]>*/;
}
}
{
var144 = ((val* (*)(val* self))(var141->class->vft[COLOR_standard__string__Object__to_s]))(var141) /* to_s on <var141:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(self, var_node, var144); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
} else {
}
var146 = !var_recv_is_self;
var_147 = var146;
if (var146){
{
{ /* Inline model#MMethod#is_toplevel (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var150 = var_mproperty->attrs[COLOR_nit__model__MMethod___is_toplevel].s; /* _is_toplevel on <var_mproperty:nullable MProperty(MMethod)> */
var148 = var150;
RET_LABEL149:(void)0;
}
}
var145 = var148;
} else {
var145 = var_147;
}
if (var145){
if (varonce151) {
var152 = varonce151;
} else {
var153 = "Error: cannot call \'";
var154 = 20;
var155 = standard___standard__NativeString___to_s_with_length(var153, var154);
var152 = var155;
varonce151 = var152;
}
if (varonce156) {
var157 = varonce156;
} else {
var158 = "\', a top-level method, with a receiver.";
var159 = 39;
var160 = standard___standard__NativeString___to_s_with_length(var158, var159);
var157 = var160;
varonce156 = var157;
}
var161 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var161 = array_instance Array[Object] */
var162 = 3;
var163 = NEW_standard__NativeArray(var162, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var163)->values[0] = (val*) var152;
((struct instance_standard__NativeArray*)var163)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var163)->values[2] = (val*) var157;
{
((void (*)(val* self, val* p0, long p1))(var161->class->vft[COLOR_standard__array__Array__with_native]))(var161, var163, var162) /* with_native on <var161:Array[Object]>*/;
}
}
{
var164 = ((val* (*)(val* self))(var161->class->vft[COLOR_standard__string__Object__to_s]))(var161) /* to_s on <var161:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(self, var_node, var164); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
} else {
}
{
{ /* Inline model#MProperty#visibility (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var170 = var_mproperty->attrs[COLOR_nit__model__MProperty___visibility].val; /* _visibility on <var_mproperty:nullable MProperty(MMethod)> */
if (unlikely(var170 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1757);
show_backtrace(1);
}
var168 = var170;
RET_LABEL169:(void)0;
}
}
{
var171 = nit__model_base___standard__Object___protected_visibility(self);
}
{
{ /* Inline kernel#Object#== (var168,var171) on <var168:MVisibility> */
var_other = var171;
{
{ /* Inline kernel#Object#is_same_instance (var168,var_other) on <var168:MVisibility> */
var176 = var168 == var_other;
var174 = var176;
goto RET_LABEL175;
RET_LABEL175:(void)0;
}
}
var172 = var174;
goto RET_LABEL173;
RET_LABEL173:(void)0;
}
}
var_177 = var172;
if (var172){
var178 = !var_recv_is_self;
var167 = var178;
} else {
var167 = var_177;
}
var_179 = var167;
if (var167){
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var182 = self->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var182 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
show_backtrace(1);
}
var180 = var182;
RET_LABEL181:(void)0;
}
}
{
{ /* Inline model#MProperty#intro_mclassdef (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var185 = var_mproperty->attrs[COLOR_nit__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mproperty:nullable MProperty(MMethod)> */
if (unlikely(var185 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1736);
show_backtrace(1);
}
var183 = var185;
RET_LABEL184:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var183) on <var183:MClassDef> */
var188 = var183->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var183:MClassDef> */
if (unlikely(var188 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var186 = var188;
RET_LABEL187:(void)0;
}
}
{
var189 = nit___nit__MModule___visibility_for(var180, var186);
}
{
var190 = nit__model_base___standard__Object___intrude_visibility(self);
}
{
var191 = nit___nit__MVisibility___standard__kernel__Comparable___60d(var189, var190);
}
var166 = var191;
} else {
var166 = var_179;
}
var_192 = var166;
if (var166){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var195 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var195 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var193) on <var193:ModelBuilder> */
var198 = var193->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var193:ModelBuilder> */
if (unlikely(var198 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var196 = var198;
RET_LABEL197:(void)0;
}
}
{
{ /* Inline modelbuilder#ToolContext#opt_ignore_visibility (var196) on <var196:ToolContext> */
var201 = var196->attrs[COLOR_nit__modelbuilder__ToolContext___opt_ignore_visibility].val; /* _opt_ignore_visibility on <var196:ToolContext> */
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_ignore_visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder, 27);
show_backtrace(1);
}
var199 = var201;
RET_LABEL200:(void)0;
}
}
{
{ /* Inline opts#Option#value (var199) on <var199:OptionBool> */
var204 = var199->attrs[COLOR_opts__Option___value].val; /* _value on <var199:OptionBool> */
var202 = var204;
RET_LABEL203:(void)0;
}
}
var205 = ((struct instance_standard__Bool*)var202)->value; /* autounbox from nullable Object to Bool */;
var206 = !var205;
var165 = var206;
} else {
var165 = var_192;
}
if (var165){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var209 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var209 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
}
var207 = var209;
RET_LABEL208:(void)0;
}
}
if (varonce210) {
var211 = varonce210;
} else {
var212 = "Error: Method \'";
var213 = 15;
var214 = standard___standard__NativeString___to_s_with_length(var212, var213);
var211 = var214;
varonce210 = var211;
}
if (varonce215) {
var216 = varonce215;
} else {
var217 = "\' is protected and can only acceded by self.";
var218 = 44;
var219 = standard___standard__NativeString___to_s_with_length(var217, var218);
var216 = var219;
varonce215 = var216;
}
var220 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var220 = array_instance Array[Object] */
var221 = 3;
var222 = NEW_standard__NativeArray(var221, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var222)->values[0] = (val*) var211;
((struct instance_standard__NativeArray*)var222)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var222)->values[2] = (val*) var216;
{
((void (*)(val* self, val* p0, long p1))(var220->class->vft[COLOR_standard__array__Array__with_native]))(var220, var222, var221) /* with_native on <var220:Array[Object]>*/;
}
}
{
var223 = ((val* (*)(val* self))(var220->class->vft[COLOR_standard__string__Object__to_s]))(var220) /* to_s on <var220:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var207, var_node, var223); /* Direct call modelbuilder_base#ModelBuilder#error on <var207:ModelBuilder>*/
}
var224 = NULL;
var = var224;
goto RET_LABEL;
} else {
}
{
{ /* Inline mdoc#MEntity#deprecation (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var227 = var_mproperty->attrs[COLOR_nit__mdoc__MEntity___deprecation].val; /* _deprecation on <var_mproperty:nullable MProperty(MMethod)> */
var225 = var227;
RET_LABEL226:(void)0;
}
}
var_info = var225;
var229 = NULL;
if (var_info == NULL) {
var230 = 0; /* is null */
} else {
var230 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_info,var229) on <var_info:nullable MDeprecationInfo> */
var_other233 = var229;
{
var234 = ((short int (*)(val* self, val* p0))(var_info->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_info, var_other233) /* == on <var_info:nullable MDeprecationInfo(MDeprecationInfo)>*/;
}
var235 = !var234;
var231 = var235;
goto RET_LABEL232;
RET_LABEL232:(void)0;
}
var230 = var231;
}
var_236 = var230;
if (var230){
{
{ /* Inline typing#TypeVisitor#mpropdef (self) on <self:TypeVisitor> */
var239 = self->attrs[COLOR_nit__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <self:TypeVisitor> */
var237 = var239;
RET_LABEL238:(void)0;
}
}
if (var237 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 309);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var237) on <var237:nullable MPropDef> */
if (unlikely(var237 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var242 = var237->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var237:nullable MPropDef> */
if (unlikely(var242 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var240 = var242;
RET_LABEL241:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#deprecation (var240) on <var240:MProperty> */
var245 = var240->attrs[COLOR_nit__mdoc__MEntity___deprecation].val; /* _deprecation on <var240:MProperty> */
var243 = var245;
RET_LABEL244:(void)0;
}
}
var246 = NULL;
if (var243 == NULL) {
var247 = 1; /* is null */
} else {
var247 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var243,var246) on <var243:nullable MDeprecationInfo> */
var_other = var246;
{
{ /* Inline kernel#Object#is_same_instance (var243,var_other) on <var243:nullable MDeprecationInfo(MDeprecationInfo)> */
var252 = var243 == var_other;
var250 = var252;
goto RET_LABEL251;
RET_LABEL251:(void)0;
}
}
var248 = var250;
goto RET_LABEL249;
RET_LABEL249:(void)0;
}
var247 = var248;
}
var228 = var247;
} else {
var228 = var_236;
}
if (var228){
{
{ /* Inline mdoc#MDeprecationInfo#mdoc (var_info) on <var_info:nullable MDeprecationInfo(MDeprecationInfo)> */
var255 = var_info->attrs[COLOR_nit__mdoc__MDeprecationInfo___mdoc].val; /* _mdoc on <var_info:nullable MDeprecationInfo(MDeprecationInfo)> */
var253 = var255;
RET_LABEL254:(void)0;
}
}
var_mdoc = var253;
var256 = NULL;
if (var_mdoc == NULL) {
var257 = 0; /* is null */
} else {
var257 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mdoc,var256) on <var_mdoc:nullable MDoc> */
var_other233 = var256;
{
var260 = ((short int (*)(val* self, val* p0))(var_mdoc->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mdoc, var_other233) /* == on <var_mdoc:nullable MDoc(MDoc)>*/;
}
var261 = !var260;
var258 = var261;
goto RET_LABEL259;
RET_LABEL259:(void)0;
}
var257 = var258;
}
if (var257){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var264 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var264 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
}
var262 = var264;
RET_LABEL263:(void)0;
}
}
if (varonce265) {
var266 = varonce265;
} else {
var267 = "deprecated-method";
var268 = 17;
var269 = standard___standard__NativeString___to_s_with_length(var267, var268);
var266 = var269;
varonce265 = var266;
}
if (varonce270) {
var271 = varonce270;
} else {
var272 = "Deprecation Warning: Method \'";
var273 = 29;
var274 = standard___standard__NativeString___to_s_with_length(var272, var273);
var271 = var274;
varonce270 = var271;
}
if (varonce275) {
var276 = varonce275;
} else {
var277 = "\' is deprecated: ";
var278 = 17;
var279 = standard___standard__NativeString___to_s_with_length(var277, var278);
var276 = var279;
varonce275 = var276;
}
{
{ /* Inline mdoc#MDoc#content (var_mdoc) on <var_mdoc:nullable MDoc(MDoc)> */
var282 = var_mdoc->attrs[COLOR_nit__mdoc__MDoc___content].val; /* _content on <var_mdoc:nullable MDoc(MDoc)> */
if (unlikely(var282 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mdoc, 22);
show_backtrace(1);
}
var280 = var282;
RET_LABEL281:(void)0;
}
}
{
var283 = standard___standard__SequenceRead___Collection__first(var280);
}
var284 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var284 = array_instance Array[Object] */
var285 = 4;
var286 = NEW_standard__NativeArray(var285, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var286)->values[0] = (val*) var271;
((struct instance_standard__NativeArray*)var286)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var286)->values[2] = (val*) var276;
((struct instance_standard__NativeArray*)var286)->values[3] = (val*) var283;
{
((void (*)(val* self, val* p0, long p1))(var284->class->vft[COLOR_standard__array__Array__with_native]))(var284, var286, var285) /* with_native on <var284:Array[Object]>*/;
}
}
{
var287 = ((val* (*)(val* self))(var284->class->vft[COLOR_standard__string__Object__to_s]))(var284) /* to_s on <var284:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___warning(var262, var_node, var266, var287); /* Direct call modelbuilder_base#ModelBuilder#warning on <var262:ModelBuilder>*/
}
} else {
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var290 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var290 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
}
var288 = var290;
RET_LABEL289:(void)0;
}
}
if (varonce291) {
var292 = varonce291;
} else {
var293 = "deprecated-method";
var294 = 17;
var295 = standard___standard__NativeString___to_s_with_length(var293, var294);
var292 = var295;
varonce291 = var292;
}
if (varonce296) {
var297 = varonce296;
} else {
var298 = "Deprecation Warning: Method \'";
var299 = 29;
var300 = standard___standard__NativeString___to_s_with_length(var298, var299);
var297 = var300;
varonce296 = var297;
}
if (varonce301) {
var302 = varonce301;
} else {
var303 = "\' is deprecated.";
var304 = 16;
var305 = standard___standard__NativeString___to_s_with_length(var303, var304);
var302 = var305;
varonce301 = var302;
}
var306 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var306 = array_instance Array[Object] */
var307 = 3;
var308 = NEW_standard__NativeArray(var307, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var308)->values[0] = (val*) var297;
((struct instance_standard__NativeArray*)var308)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var308)->values[2] = (val*) var302;
{
((void (*)(val* self, val* p0, long p1))(var306->class->vft[COLOR_standard__array__Array__with_native]))(var306, var308, var307) /* with_native on <var306:Array[Object]>*/;
}
}
{
var309 = ((val* (*)(val* self))(var306->class->vft[COLOR_standard__string__Object__to_s]))(var306) /* to_s on <var306:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___warning(var288, var_node, var292, var309); /* Direct call modelbuilder_base#ModelBuilder#warning on <var288:ModelBuilder>*/
}
}
} else {
}
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var312 = self->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var312 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
show_backtrace(1);
}
var310 = var312;
RET_LABEL311:(void)0;
}
}
{
var313 = nit___nit__MProperty___lookup_definitions(var_mproperty, var310, var_unsafe_type);
}
var_propdefs = var313;
{
{ /* Inline array#AbstractArrayRead#length (var_propdefs) on <var_propdefs:Array[MMethodDef]> */
var316 = var_propdefs->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_propdefs:Array[MMethodDef]> */
var314 = var316;
RET_LABEL315:(void)0;
}
}
var317 = 0;
{
{ /* Inline kernel#Int#== (var314,var317) on <var314:Int> */
var320 = var314 == var317;
var318 = var320;
goto RET_LABEL319;
RET_LABEL319:(void)0;
}
}
if (var318){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var323 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var323 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
}
var321 = var323;
RET_LABEL322:(void)0;
}
}
if (varonce324) {
var325 = varonce324;
} else {
var326 = "Type error: no definition found for property ";
var327 = 45;
var328 = standard___standard__NativeString___to_s_with_length(var326, var327);
var325 = var328;
varonce324 = var325;
}
if (varonce329) {
var330 = varonce329;
} else {
var331 = " in ";
var332 = 4;
var333 = standard___standard__NativeString___to_s_with_length(var331, var332);
var330 = var333;
varonce329 = var330;
}
var334 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var334 = array_instance Array[Object] */
var335 = 4;
var336 = NEW_standard__NativeArray(var335, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var336)->values[0] = (val*) var325;
((struct instance_standard__NativeArray*)var336)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var336)->values[2] = (val*) var330;
((struct instance_standard__NativeArray*)var336)->values[3] = (val*) var_unsafe_type;
{
((void (*)(val* self, val* p0, long p1))(var334->class->vft[COLOR_standard__array__Array__with_native]))(var334, var336, var335) /* with_native on <var334:Array[Object]>*/;
}
}
{
var337 = ((val* (*)(val* self))(var334->class->vft[COLOR_standard__string__Object__to_s]))(var334) /* to_s on <var334:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var321, var_node, var337); /* Direct call modelbuilder_base#ModelBuilder#error on <var321:ModelBuilder>*/
}
var338 = NULL;
var = var338;
goto RET_LABEL;
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_propdefs) on <var_propdefs:Array[MMethodDef]> */
var341 = var_propdefs->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_propdefs:Array[MMethodDef]> */
var339 = var341;
RET_LABEL340:(void)0;
}
}
var342 = 1;
{
{ /* Inline kernel#Int#== (var339,var342) on <var339:Int> */
var345 = var339 == var342;
var343 = var345;
goto RET_LABEL344;
RET_LABEL344:(void)0;
}
}
if (var343){
{
var346 = standard___standard__SequenceRead___Collection__first(var_propdefs);
}
var_mpropdef = var346;
} else {
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var349 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var349 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
}
var347 = var349;
RET_LABEL348:(void)0;
}
}
if (varonce350) {
var351 = varonce350;
} else {
var352 = "property-conflict";
var353 = 17;
var354 = standard___standard__NativeString___to_s_with_length(var352, var353);
var351 = var354;
varonce350 = var351;
}
if (varonce355) {
var356 = varonce355;
} else {
var357 = "Warning: conflicting property definitions for property ";
var358 = 55;
var359 = standard___standard__NativeString___to_s_with_length(var357, var358);
var356 = var359;
varonce355 = var356;
}
if (varonce360) {
var361 = varonce360;
} else {
var362 = " in ";
var363 = 4;
var364 = standard___standard__NativeString___to_s_with_length(var362, var363);
var361 = var364;
varonce360 = var361;
}
if (varonce365) {
var366 = varonce365;
} else {
var367 = ": ";
var368 = 2;
var369 = standard___standard__NativeString___to_s_with_length(var367, var368);
var366 = var369;
varonce365 = var366;
}
if (varonce370) {
var371 = varonce370;
} else {
var372 = " ";
var373 = 1;
var374 = standard___standard__NativeString___to_s_with_length(var372, var373);
var371 = var374;
varonce370 = var371;
}
{
var375 = standard__string___Collection___join(var_propdefs, var371);
}
var376 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var376 = array_instance Array[Object] */
var377 = 6;
var378 = NEW_standard__NativeArray(var377, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var378)->values[0] = (val*) var356;
((struct instance_standard__NativeArray*)var378)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var378)->values[2] = (val*) var361;
((struct instance_standard__NativeArray*)var378)->values[3] = (val*) var_unsafe_type;
((struct instance_standard__NativeArray*)var378)->values[4] = (val*) var366;
((struct instance_standard__NativeArray*)var378)->values[5] = (val*) var375;
{
((void (*)(val* self, val* p0, long p1))(var376->class->vft[COLOR_standard__array__Array__with_native]))(var376, var378, var377) /* with_native on <var376:Array[Object]>*/;
}
}
{
var379 = ((val* (*)(val* self))(var376->class->vft[COLOR_standard__string__Object__to_s]))(var376) /* to_s on <var376:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___warning(var347, var_node, var351, var379); /* Direct call modelbuilder_base#ModelBuilder#warning on <var347:ModelBuilder>*/
}
{
{ /* Inline model#MProperty#intro (var_mproperty) on <var_mproperty:nullable MProperty(MMethod)> */
var382 = var_mproperty->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var_mproperty:nullable MProperty(MMethod)> */
if (unlikely(var382 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var380 = var382;
RET_LABEL381:(void)0;
}
}
var_mpropdef = var380;
}
}
{
{ /* Inline model#MMethodDef#new_msignature (var_mpropdef) on <var_mpropdef:nullable Object(MMethodDef)> */
var386 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_mpropdef:nullable Object(MMethodDef)> */
var384 = var386;
RET_LABEL385:(void)0;
}
}
if (var384!=NULL) {
var383 = var384;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable Object(MMethodDef)> */
var389 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable Object(MMethodDef)> */
var387 = var389;
RET_LABEL388:(void)0;
}
}
if (unlikely(var387 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 331);
show_backtrace(1);
}
var383 = var387;
}
var_msignature = var383;
{
var390 = nit__typing___nit__typing__TypeVisitor___resolve_for(self, var_msignature, var_recvtype, var_recv_is_self);
}
/* <var390:MType> isa MSignature */
cltype392 = type_nit__MSignature.color;
idtype393 = type_nit__MSignature.id;
if(cltype392 >= var390->type->table_size) {
var391 = 0;
} else {
var391 = var390->type->type_table[cltype392] == idtype393;
}
if (unlikely(!var391)) {
var_class_name = var390 == NULL ? "null" : var390->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MSignature", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 332);
show_backtrace(1);
}
var_msignature = var390;
var394 = 0;
var_erasure_cast = var394;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable Object(MMethodDef)> */
var397 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable Object(MMethodDef)> */
var395 = var397;
RET_LABEL396:(void)0;
}
}
if (var395 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 335);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var395) on <var395:nullable MSignature> */
if (unlikely(var395 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1595);
show_backtrace(1);
}
var400 = var395->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var395:nullable MSignature> */
var398 = var400;
RET_LABEL399:(void)0;
}
}
var_rettype = var398;
var402 = !var_recv_is_self;
var_403 = var402;
if (var402){
var404 = NULL;
if (var_rettype == NULL) {
var405 = 0; /* is null */
} else {
var405 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rettype,var404) on <var_rettype:nullable MType> */
var_other233 = var404;
{
var408 = ((short int (*)(val* self, val* p0))(var_rettype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_rettype, var_other233) /* == on <var_rettype:nullable MType(MType)>*/;
}
var409 = !var408;
var406 = var409;
goto RET_LABEL407;
RET_LABEL407:(void)0;
}
var405 = var406;
}
var401 = var405;
} else {
var401 = var_403;
}
if (var401){
{
var410 = ((val* (*)(val* self))(var_rettype->class->vft[COLOR_nit__model__MType__as_notnullable]))(var_rettype) /* as_notnullable on <var_rettype:nullable MType(MType)>*/;
}
var_rettype = var410;
/* <var_rettype:nullable MType(MType)> isa MParameterType */
cltype412 = type_nit__MParameterType.color;
idtype413 = type_nit__MParameterType.id;
if(cltype412 >= var_rettype->type->table_size) {
var411 = 0;
} else {
var411 = var_rettype->type->type_table[cltype412] == idtype413;
}
if (var411){
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var416 = var_msignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var414 = var416;
RET_LABEL415:(void)0;
}
}
var_erased_rettype = var414;
var417 = NULL;
if (var_erased_rettype == NULL) {
var418 = 0; /* is null */
} else {
var418 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_erased_rettype,var417) on <var_erased_rettype:nullable MType> */
var_other233 = var417;
{
var421 = ((short int (*)(val* self, val* p0))(var_erased_rettype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_erased_rettype, var_other233) /* == on <var_erased_rettype:nullable MType(MType)>*/;
}
var422 = !var421;
var419 = var422;
goto RET_LABEL420;
RET_LABEL420:(void)0;
}
var418 = var419;
}
if (unlikely(!var418)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 340);
show_backtrace(1);
}
var423 = 1;
var_erasure_cast = var423;
} else {
}
} else {
}
var424 = NEW_nit__CallSite(&type_nit__CallSite);
{
{ /* Inline typing#TypeVisitor#mmodule (self) on <self:TypeVisitor> */
var427 = self->attrs[COLOR_nit__typing__TypeVisitor___mmodule].val; /* _mmodule on <self:TypeVisitor> */
if (unlikely(var427 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 36);
show_backtrace(1);
}
var425 = var427;
RET_LABEL426:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#anchor (self) on <self:TypeVisitor> */
var430 = self->attrs[COLOR_nit__typing__TypeVisitor___anchor].val; /* _anchor on <self:TypeVisitor> */
var428 = var430;
RET_LABEL429:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var424->class->vft[COLOR_nit__typing__CallSite__node_61d]))(var424, var_node) /* node= on <var424:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var424->class->vft[COLOR_nit__typing__CallSite__recv_61d]))(var424, var_recvtype) /* recv= on <var424:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var424->class->vft[COLOR_nit__typing__CallSite__mmodule_61d]))(var424, var425) /* mmodule= on <var424:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var424->class->vft[COLOR_nit__typing__CallSite__anchor_61d]))(var424, var428) /* anchor= on <var424:CallSite>*/;
}
{
((void (*)(val* self, short int p0))(var424->class->vft[COLOR_nit__typing__CallSite__recv_is_self_61d]))(var424, var_recv_is_self) /* recv_is_self= on <var424:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var424->class->vft[COLOR_nit__typing__CallSite__mproperty_61d]))(var424, var_mproperty) /* mproperty= on <var424:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var424->class->vft[COLOR_nit__typing__CallSite__mpropdef_61d]))(var424, var_mpropdef) /* mpropdef= on <var424:CallSite>*/;
}
{
((void (*)(val* self, val* p0))(var424->class->vft[COLOR_nit__typing__CallSite__msignature_61d]))(var424, var_msignature) /* msignature= on <var424:CallSite>*/;
}
{
((void (*)(val* self, short int p0))(var424->class->vft[COLOR_nit__typing__CallSite__erasure_cast_61d]))(var424, var_erasure_cast) /* erasure_cast= on <var424:CallSite>*/;
}
{
((void (*)(val* self))(var424->class->vft[COLOR_standard__kernel__Object__init]))(var424) /* init on <var424:CallSite>*/;
}
var_callsite = var424;
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
var1 = nit__typing___nit__typing__TypeVisitor___anchor_to(self, var_recvtype);
}
var_unsafe_type = var1;
{
var2 = nit__typing___nit__typing__TypeVisitor___try_get_mproperty_by_name2(self, var_node, var_unsafe_type, var_name);
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
var11 = nit__typing___nit__typing__TypeVisitor___get_method(self, var_node, var_recvtype, var_name, var_recv_is_self);
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#TypeVisitor#check_signature for (self: TypeVisitor, ANode, Array[AExpr], String, MSignature): Bool */
short int nit__typing___nit__typing__TypeVisitor___check_signature(val* self, val* p0, val* p1, val* p2, val* p3) {
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
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var45 /* : ModelBuilder */;
val* var47 /* : ModelBuilder */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
long var53 /* : Int */;
long var55 /* : Int */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
long var61 /* : Int */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : FlatString */;
val* var67 /* : Array[Object] */;
long var68 /* : Int */;
val* var69 /* : NativeArray[Object] */;
val* var70 /* : Object */;
val* var71 /* : Object */;
val* var72 /* : String */;
short int var73 /* : Bool */;
long var74 /* : Int */;
long var76 /* : Int */;
long var77 /* : Int */;
long var78 /* : Int */;
short int var80 /* : Bool */;
int cltype81;
int idtype82;
const char* var_class_name83;
long var84 /* : Int */;
long var_vararg_decl /* var vararg_decl: Int */;
long var85 /* : Int */;
long var_i /* var i: Int */;
long var86 /* : Int */;
long var_ /* var : Int */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
int cltype90;
int idtype91;
const char* var_class_name92;
short int var93 /* : Bool */;
long var_j /* var j: Int */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
int cltype100;
int idtype101;
const char* var_class_name102;
short int var103 /* : Bool */;
long var104 /* : Int */;
short int var106 /* : Bool */;
int cltype107;
int idtype108;
const char* var_class_name109;
long var110 /* : Int */;
val* var111 /* : Array[MParameter] */;
val* var113 /* : Array[MParameter] */;
val* var114 /* : nullable Object */;
val* var115 /* : MType */;
val* var117 /* : MType */;
val* var_paramtype /* var paramtype: MType */;
val* var118 /* : nullable Object */;
val* var119 /* : nullable MType */;
long var120 /* : Int */;
long var121 /* : Int */;
long var123 /* : Int */;
short int var124 /* : Bool */;
short int var126 /* : Bool */;
int cltype127;
int idtype128;
const char* var_class_name129;
short int var130 /* : Bool */;
val* var131 /* : Array[MParameter] */;
val* var133 /* : Array[MParameter] */;
val* var134 /* : nullable Object */;
val* var135 /* : MType */;
val* var137 /* : MType */;
val* var_paramtype138 /* var paramtype: MType */;
val* var139 /* : nullable Object */;
val* var_first /* var first: AExpr */;
short int var140 /* : Bool */;
long var141 /* : Int */;
short int var142 /* : Bool */;
short int var144 /* : Bool */;
short int var_145 /* var : Bool */;
short int var146 /* : Bool */;
int cltype147;
int idtype148;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : NativeString */;
long var152 /* : Int */;
val* var153 /* : FlatString */;
val* var154 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var155 /* : null */;
short int var156 /* : Bool */;
short int var157 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var159 /* : Bool */;
short int var161 /* : Bool */;
short int var162 /* : Bool */;
val* var163 /* : Array[MType] */;
long var164 /* : Int */;
val* var_165 /* var : Array[MType] */;
val* var166 /* : MClassType */;
val* var_array_mtype /* var array_mtype: MClassType */;
val* var167 /* : AExpr */;
val* var169 /* : AExpr */;
val* var170 /* : nullable MType */;
val* var171 /* : AExpr */;
val* var173 /* : AExpr */;
val* var174 /* : nullable MType */;
long var_j176 /* var j: Int */;
long var177 /* : Int */;
short int var179 /* : Bool */;
int cltype180;
int idtype181;
const char* var_class_name182;
long var183 /* : Int */;
long var_184 /* var : Int */;
short int var185 /* : Bool */;
short int var187 /* : Bool */;
int cltype188;
int idtype189;
const char* var_class_name190;
short int var191 /* : Bool */;
val* var192 /* : nullable Object */;
val* var193 /* : nullable MType */;
long var194 /* : Int */;
long var195 /* : Int */;
short int var197 /* : Bool */;
var_node = p0;
var_args = p1;
var_name = p2;
var_msignature = p3;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:MSignature> */
var3 = var_msignature->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:MSignature> */
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
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
var11 = var_args->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nit___nit__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#< (var9,var12) on <var9:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
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
var22 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
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
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = "\'";
var30 = 1;
var31 = standard___standard__NativeString___to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 4;
var34 = NEW_standard__NativeArray(var33, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var34)->values[0] = (val*) var23;
((struct instance_standard__NativeArray*)var34)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var34)->values[2] = (val*) var_msignature;
((struct instance_standard__NativeArray*)var34)->values[3] = (val*) var28;
{
((void (*)(val* self, val* p0, long p1))(var32->class->vft[COLOR_standard__array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
}
{
var35 = ((val* (*)(val* self))(var32->class->vft[COLOR_standard__string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var20, var_node, var35); /* Direct call modelbuilder_base#ModelBuilder#error on <var20:ModelBuilder>*/
}
var36 = 0;
var = var36;
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var39 = var_args->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = nit___nit__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#!= (var37,var40) on <var37:Int> */
var43 = var37 == var40;
var44 = !var43;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var47 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
if (varonce48) {
var49 = varonce48;
} else {
var50 = "Error: Incorrect number of parameters. Got ";
var51 = 43;
var52 = standard___standard__NativeString___to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var55 = var_args->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = ", expected ";
var59 = 11;
var60 = standard___standard__NativeString___to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
{
var61 = nit___nit__MSignature___arity(var_msignature);
}
if (varonce62) {
var63 = varonce62;
} else {
var64 = ". Signature is ";
var65 = 15;
var66 = standard___standard__NativeString___to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
var67 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var67 = array_instance Array[Object] */
var68 = 6;
var69 = NEW_standard__NativeArray(var68, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var69)->values[0] = (val*) var49;
var70 = BOX_standard__Int(var53); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var69)->values[1] = (val*) var70;
((struct instance_standard__NativeArray*)var69)->values[2] = (val*) var57;
var71 = BOX_standard__Int(var61); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var69)->values[3] = (val*) var71;
((struct instance_standard__NativeArray*)var69)->values[4] = (val*) var63;
((struct instance_standard__NativeArray*)var69)->values[5] = (val*) var_msignature;
{
((void (*)(val* self, val* p0, long p1))(var67->class->vft[COLOR_standard__array__Array__with_native]))(var67, var69, var68) /* with_native on <var67:Array[Object]>*/;
}
}
{
var72 = ((val* (*)(val* self))(var67->class->vft[COLOR_standard__string__Object__to_s]))(var67) /* to_s on <var67:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___error(var45, var_node, var72); /* Direct call modelbuilder_base#ModelBuilder#error on <var45:ModelBuilder>*/
}
var73 = 0;
var = var73;
goto RET_LABEL;
} else {
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_args) on <var_args:Array[AExpr]> */
var76 = var_args->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_args:Array[AExpr]> */
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
var77 = nit___nit__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#- (var74,var77) on <var74:Int> */
/* Covariant cast for argument 0 (i) <var77:Int> isa OTHER */
/* <var77:Int> isa OTHER */
var80 = 1; /* easy <var77:Int> isa OTHER*/
if (unlikely(!var80)) {
var_class_name83 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name83);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 416);
show_backtrace(1);
}
var84 = var74 - var77;
var78 = var84;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var_vararg_decl = var78;
var85 = 0;
var_i = var85;
{
var86 = nit___nit__MSignature___arity(var_msignature);
}
var_ = var86;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var89 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var89)) {
var_class_name92 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name92);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var93 = var_i < var_;
var87 = var93;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
if (var87){
var_j = var_i;
{
{ /* Inline kernel#Int#== (var_i,var_vararg_rank) on <var_i:Int> */
var96 = var_i == var_vararg_rank;
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
if (var94){
goto BREAK_label;
} else {
}
{
{ /* Inline kernel#Int#> (var_i,var_vararg_rank) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_rank:Int> isa OTHER */
/* <var_vararg_rank:Int> isa OTHER */
var99 = 1; /* easy <var_vararg_rank:Int> isa OTHER*/
if (unlikely(!var99)) {
var_class_name102 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name102);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var103 = var_i > var_vararg_rank;
var97 = var103;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
if (var97){
{
{ /* Inline kernel#Int#+ (var_i,var_vararg_decl) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_decl:Int> isa OTHER */
/* <var_vararg_decl:Int> isa OTHER */
var106 = 1; /* easy <var_vararg_decl:Int> isa OTHER*/
if (unlikely(!var106)) {
var_class_name109 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name109);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var110 = var_i + var_vararg_decl;
var104 = var110;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
}
var_j = var104;
} else {
}
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var113 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
var114 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var111, var_i);
}
{
{ /* Inline model#MParameter#mtype (var114) on <var114:nullable Object(MParameter)> */
var117 = var114->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var114:nullable Object(MParameter)> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
var_paramtype = var115;
{
var118 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_args, var_j);
}
{
var119 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(self, var118, var_paramtype);
}
BREAK_label: (void)0;
var120 = 1;
{
var121 = standard___standard__Int___Discrete__successor(var_i, var120);
}
var_i = var121;
} else {
goto BREAK_label122;
}
}
BREAK_label122: (void)0;
var123 = 0;
{
{ /* Inline kernel#Int#>= (var_vararg_rank,var123) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <var123:Int> isa OTHER */
/* <var123:Int> isa OTHER */
var126 = 1; /* easy <var123:Int> isa OTHER*/
if (unlikely(!var126)) {
var_class_name129 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name129);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 411);
show_backtrace(1);
}
var130 = var_vararg_rank >= var123;
var124 = var130;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
if (var124){
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var133 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var133 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var131 = var133;
RET_LABEL132:(void)0;
}
}
{
var134 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var131, var_vararg_rank);
}
{
{ /* Inline model#MParameter#mtype (var134) on <var134:nullable Object(MParameter)> */
var137 = var134->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var134:nullable Object(MParameter)> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
var_paramtype138 = var135;
{
var139 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_args, var_vararg_rank);
}
var_first = var139;
var141 = 0;
{
{ /* Inline kernel#Int#== (var_vararg_decl,var141) on <var_vararg_decl:Int> */
var144 = var_vararg_decl == var141;
var142 = var144;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
}
var_145 = var142;
if (var142){
/* <var_first:AExpr> isa AVarargExpr */
cltype147 = type_nit__AVarargExpr.color;
idtype148 = type_nit__AVarargExpr.id;
if(cltype147 >= var_first->type->table_size) {
var146 = 0;
} else {
var146 = var_first->type->type_table[cltype147] == idtype148;
}
var140 = var146;
} else {
var140 = var_145;
}
if (var140){
if (varonce149) {
var150 = varonce149;
} else {
var151 = "Array";
var152 = 5;
var153 = standard___standard__NativeString___to_s_with_length(var151, var152);
var150 = var153;
varonce149 = var150;
}
{
var154 = nit__typing___nit__typing__TypeVisitor___get_mclass(self, var_node, var150);
}
var_mclass = var154;
var155 = NULL;
if (var_mclass == NULL) {
var156 = 1; /* is null */
} else {
var156 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var155) on <var_mclass:nullable MClass> */
var_other = var155;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var161 = var_mclass == var_other;
var159 = var161;
goto RET_LABEL160;
RET_LABEL160:(void)0;
}
}
var157 = var159;
goto RET_LABEL158;
RET_LABEL158:(void)0;
}
var156 = var157;
}
if (var156){
var162 = 0;
var = var162;
goto RET_LABEL;
} else {
}
var163 = NEW_standard__Array(&type_standard__Array__nit__MType);
var164 = 1;
{
standard___standard__Array___with_capacity(var163, var164); /* Direct call array#Array#with_capacity on <var163:Array[MType]>*/
}
var_165 = var163;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_165, var_paramtype138); /* Direct call array#AbstractArray#push on <var_165:Array[MType]>*/
}
{
var166 = nit___nit__MClass___get_mtype(var_mclass, var_165);
}
var_array_mtype = var166;
{
{ /* Inline parser_nodes#AVarargExpr#n_expr (var_first) on <var_first:AExpr(AVarargExpr)> */
var169 = var_first->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <var_first:AExpr(AVarargExpr)> */
if (unlikely(var169 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2343);
show_backtrace(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
{
var170 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(self, var167, var_array_mtype);
}
{
{ /* Inline parser_nodes#AVarargExpr#n_expr (var_first) on <var_first:AExpr(AVarargExpr)> */
var173 = var_first->attrs[COLOR_nit__parser_nodes__AVarargExpr___n_expr].val; /* _n_expr on <var_first:AExpr(AVarargExpr)> */
if (unlikely(var173 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 2343);
show_backtrace(1);
}
var171 = var173;
RET_LABEL172:(void)0;
}
}
{
var174 = ((val* (*)(val* self))(var171->class->vft[COLOR_nit__typing__AExpr__mtype]))(var171) /* mtype on <var171:AExpr>*/;
}
{
{ /* Inline typing#AExpr#mtype= (var_first,var174) on <var_first:AExpr(AVarargExpr)> */
var_first->attrs[COLOR_nit__typing__AExpr___mtype].val = var174; /* _mtype on <var_first:AExpr(AVarargExpr)> */
RET_LABEL175:(void)0;
}
}
} else {
var_j176 = var_vararg_rank;
{
{ /* Inline kernel#Int#+ (var_vararg_rank,var_vararg_decl) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <var_vararg_decl:Int> isa OTHER */
/* <var_vararg_decl:Int> isa OTHER */
var179 = 1; /* easy <var_vararg_decl:Int> isa OTHER*/
if (unlikely(!var179)) {
var_class_name182 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name182);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var183 = var_vararg_rank + var_vararg_decl;
var177 = var183;
goto RET_LABEL178;
RET_LABEL178:(void)0;
}
}
var_184 = var177;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_j176,var_184) on <var_j176:Int> */
/* Covariant cast for argument 0 (i) <var_184:Int> isa OTHER */
/* <var_184:Int> isa OTHER */
var187 = 1; /* easy <var_184:Int> isa OTHER*/
if (unlikely(!var187)) {
var_class_name190 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name190);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var191 = var_j176 <= var_184;
var185 = var191;
goto RET_LABEL186;
RET_LABEL186:(void)0;
}
}
if (var185){
{
var192 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_args, var_j176);
}
{
var193 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(self, var192, var_paramtype138);
}
var194 = 1;
{
var195 = standard___standard__Int___Discrete__successor(var_j176, var194);
}
var_j176 = var195;
} else {
goto BREAK_label196;
}
}
BREAK_label196: (void)0;
}
} else {
}
var197 = 1;
var = var197;
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
var_node = p0;
var_message = p1;
{
{ /* Inline typing#TypeVisitor#modelbuilder (self) on <self:TypeVisitor> */
var2 = self->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <self:TypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
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
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val* (*)(val* self))(var_node->class->vft[COLOR_nit__parser_nodes__ANode__hot_location]))(var_node) /* hot_location on <var_node:ANode>*/;
}
{
nit___nit__ToolContext___error(var3, var6, var_message); /* Direct call toolcontext#ToolContext#error on <var3:ToolContext>*/
}
RET_LABEL:;
}
/* method typing#TypeVisitor#get_variable for (self: TypeVisitor, AExpr, Variable): nullable MType */
val* nit__typing___nit__typing__TypeVisitor___get_variable(val* self, val* p0, val* p1) {
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
short int var35 /* : Bool */;
val* var36 /* : nullable MType */;
val* var38 /* : nullable MType */;
long var39 /* : Int */;
long var41 /* : Int */;
long var42 /* : Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : nullable Object */;
val* var47 /* : nullable MType */;
val* var_res /* var res: nullable MType */;
val* var48 /* : null */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : nullable MType */;
val* var57 /* : nullable MType */;
var_node = p0;
var_variable = p1;
{
{ /* Inline flow#AExpr#after_flow_context (var_node) on <var_node:AExpr> */
var3 = var_node->attrs[COLOR_nit__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_node:AExpr> */
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
var14 = standard___standard__NativeString___to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
{
nit__typing___nit__typing__TypeVisitor___error(self, var_node, var11); /* Direct call typing#TypeVisitor#error on <self:TypeVisitor>*/
}
var15 = NULL;
var = var15;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#FlowContext#vars (var_flow) on <var_flow:nullable FlowContext(FlowContext)> */
var18 = var_flow->attrs[COLOR_nit__typing__FlowContext___vars].val; /* _vars on <var_flow:nullable FlowContext(FlowContext)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 512);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = standard___standard__MapRead___has_key(var16, var_variable);
}
if (var19){
{
{ /* Inline typing#FlowContext#vars (var_flow) on <var_flow:nullable FlowContext(FlowContext)> */
var22 = var_flow->attrs[COLOR_nit__typing__FlowContext___vars].val; /* _vars on <var_flow:nullable FlowContext(FlowContext)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 512);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var20, var_variable);
}
var = var23;
goto RET_LABEL;
} else {
{
var24 = nit__typing___FlowContext___collect_types(var_flow, var_variable);
}
var_mtypes = var24;
var26 = NULL;
if (var_mtypes == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
var28 = standard___standard__Array___standard__kernel__Object___61d_61d(var_mtypes, var26);
var27 = var28;
}
var_ = var27;
if (var27){
var25 = var_;
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_mtypes) on <var_mtypes:nullable Array[nullable MType](Array[nullable MType])> */
var31 = var_mtypes->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_mtypes:nullable Array[nullable MType](Array[nullable MType])> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
var32 = 0;
{
{ /* Inline kernel#Int#== (var29,var32) on <var29:Int> */
var35 = var29 == var32;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var25 = var33;
}
if (var25){
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var38 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
var = var36;
goto RET_LABEL;
} else {
{
{ /* Inline array#AbstractArrayRead#length (var_mtypes) on <var_mtypes:nullable Array[nullable MType](Array[nullable MType])> */
var41 = var_mtypes->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_mtypes:nullable Array[nullable MType](Array[nullable MType])> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
var42 = 1;
{
{ /* Inline kernel#Int#== (var39,var42) on <var39:Int> */
var45 = var39 == var42;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
{
var46 = standard___standard__SequenceRead___Collection__first(var_mtypes);
}
var = var46;
goto RET_LABEL;
} else {
{
var47 = nit__typing___nit__typing__TypeVisitor___merge_types(self, var_node, var_mtypes);
}
var_res = var47;
var48 = NULL;
if (var_res == NULL) {
var49 = 1; /* is null */
} else {
var49 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_res,var48) on <var_res:nullable MType> */
var_other = var48;
{
{ /* Inline kernel#Object#is_same_instance (var_res,var_other) on <var_res:nullable MType(MType)> */
var54 = var_res == var_other;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var49 = var50;
}
if (var49){
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var57 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
var_res = var55;
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
/* method typing#TypeVisitor#set_variable for (self: TypeVisitor, AExpr, Variable, nullable MType) */
void nit__typing___nit__typing__TypeVisitor___set_variable(val* self, val* p0, val* p1, val* p2) {
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
var7 = ((short int (*)(val* self, val* p0))(var_flow->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_flow, var_other) /* == on <var_flow:nullable FlowContext(FlowContext)>*/;
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 440);
show_backtrace(1);
}
{
nit__typing___FlowContext___set_var(var_flow, var_variable, var_mtype); /* Direct call typing#FlowContext#set_var on <var_flow:nullable FlowContext(FlowContext)>*/
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
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_ /* var : Array[nullable MType] */;
val* var9 /* : ArrayIterator[nullable Object] */;
val* var_10 /* var : ArrayIterator[nullable MType] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_t1 /* var t1: nullable MType */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var_found /* var found: Bool */;
val* var_21 /* var : Array[nullable MType] */;
val* var22 /* : ArrayIterator[nullable Object] */;
val* var_23 /* var : ArrayIterator[nullable MType] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_t2 /* var t2: nullable MType */;
val* var26 /* : null */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
int cltype;
int idtype;
short int var_36 /* var : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
val* var40 /* : MType */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var48 /* : null */;
var_node = p0;
var_col = p1;
{
{ /* Inline array#AbstractArrayRead#length (var_col) on <var_col:Array[nullable MType]> */
var3 = var_col->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var_col:Array[nullable MType]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = 1;
{
{ /* Inline kernel#Int#== (var1,var4) on <var1:Int> */
var7 = var1 == var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
var8 = standard___standard__SequenceRead___Collection__first(var_col);
}
var = var8;
goto RET_LABEL;
} else {
}
var_ = var_col;
{
var9 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_10 = var9;
for(;;) {
{
var11 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_10);
}
if (var11){
{
var12 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_10);
}
var_t1 = var12;
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
if (var14){
goto BREAK_label;
} else {
}
var20 = 1;
var_found = var20;
var_21 = var_col;
{
var22 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_21);
}
var_23 = var22;
for(;;) {
{
var24 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_23);
}
if (var24){
{
var25 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_23);
}
var_t2 = var25;
var26 = NULL;
if (var_t2 == NULL) {
var27 = 1; /* is null */
} else {
var27 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t2,var26) on <var_t2:nullable MType> */
var_other = var26;
{
{ /* Inline kernel#Object#is_same_instance (var_t2,var_other) on <var_t2:nullable MType(MType)> */
var32 = var_t2 == var_other;
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
goto BREAK_label33;
} else {
}
/* <var_t2:nullable MType(MType)> isa MNullableType */
cltype = type_nit__MNullableType.color;
idtype = type_nit__MNullableType.id;
if(cltype >= var_t2->type->table_size) {
var35 = 0;
} else {
var35 = var_t2->type->type_table[cltype] == idtype;
}
var_36 = var35;
if (var35){
var34 = var_36;
} else {
/* <var_t2:nullable MType(MType)> isa MNullType */
cltype38 = type_nit__MNullType.color;
idtype39 = type_nit__MNullType.id;
if(cltype38 >= var_t2->type->table_size) {
var37 = 0;
} else {
var37 = var_t2->type->type_table[cltype38] == idtype39;
}
var34 = var37;
}
if (var34){
{
var40 = ((val* (*)(val* self))(var_t1->class->vft[COLOR_nit__model__MType__as_nullable]))(var_t1) /* as_nullable on <var_t1:nullable MType(MType)>*/;
}
var_t1 = var40;
} else {
}
{
var41 = nit__typing___nit__typing__TypeVisitor___is_subtype(self, var_t2, var_t1);
}
var42 = !var41;
if (var42){
var43 = 0;
var_found = var43;
} else {
}
BREAK_label33: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_23); /* Direct call array#ArrayIterator#next on <var_23:ArrayIterator[nullable MType]>*/
}
} else {
goto BREAK_label44;
}
}
BREAK_label44: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_23) on <var_23:ArrayIterator[nullable MType]> */
RET_LABEL45:(void)0;
}
}
if (var_found){
var = var_t1;
goto RET_LABEL;
} else {
}
BREAK_label: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_10); /* Direct call array#ArrayIterator#next on <var_10:ArrayIterator[nullable MType]>*/
}
} else {
goto BREAK_label46;
}
}
BREAK_label46: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_10) on <var_10:ArrayIterator[nullable MType]> */
RET_LABEL47:(void)0;
}
}
var48 = NULL;
var = var48;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#CallSite#node for (self: CallSite): ANode */
val* nit___nit__CallSite___node(val* self) {
val* var /* : ANode */;
val* var1 /* : ANode */;
var1 = self->attrs[COLOR_nit__typing__CallSite___node].val; /* _node on <self:CallSite> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 470);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 473);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 476);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 487);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 490);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 494);
show_backtrace(1);
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
/* method typing#CallSite#check_signature for (self: CallSite, TypeVisitor, Array[AExpr]): Bool */
short int nit___nit__CallSite___check_signature(val* self, val* p0, val* p1) {
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
var3 = self->attrs[COLOR_nit__typing__CallSite___node].val; /* _node on <self:CallSite> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _node");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 470);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 487);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var4) on <var4:MMethod> */
var9 = var4->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var4:MMethod> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline typing#CallSite#msignature (self) on <self:CallSite> */
var12 = self->attrs[COLOR_nit__typing__CallSite___msignature].val; /* _msignature on <self:CallSite> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 494);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = nit__typing___nit__typing__TypeVisitor___check_signature(var_v, var1, var_args, var7, var10);
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#CallSite#init for (self: CallSite) */
void nit___nit__CallSite___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__CallSite___standard__kernel__Object__init]))(self) /* init on <self:CallSite>*/;
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
/* method typing#FlowContext#vars for (self: FlowContext): HashMap[Variable, nullable MType] */
val* nit__typing___FlowContext___vars(val* self) {
val* var /* : HashMap[Variable, nullable MType] */;
val* var1 /* : HashMap[Variable, nullable MType] */;
var1 = self->attrs[COLOR_nit__typing__FlowContext___vars].val; /* _vars on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 512);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#FlowContext#cache for (self: FlowContext): HashMap[Variable, nullable Array[nullable MType]] */
val* nit__typing___FlowContext___cache(val* self) {
val* var /* : HashMap[Variable, nullable Array[nullable MType]] */;
val* var1 /* : HashMap[Variable, nullable Array[nullable MType]] */;
var1 = self->attrs[COLOR_nit__typing__FlowContext___cache].val; /* _cache on <self:FlowContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 514);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#FlowContext#set_var for (self: FlowContext, Variable, nullable MType) */
void nit__typing___FlowContext___set_var(val* self, val* p0, val* p1) {
val* var_variable /* var variable: Variable */;
val* var_mtype /* var mtype: nullable MType */;
val* var /* : HashMap[Variable, nullable MType] */;
val* var2 /* : HashMap[Variable, nullable MType] */;
val* var3 /* : HashMap[Variable, nullable Array[nullable MType]] */;
val* var5 /* : HashMap[Variable, nullable Array[nullable MType]] */;
val* var6 /* : RemovableCollection[nullable Object] */;
val* var8 /* : RemovableCollection[nullable Object] */;
var_variable = p0;
var_mtype = p1;
{
{ /* Inline typing#FlowContext#vars (self) on <self:FlowContext> */
var2 = self->attrs[COLOR_nit__typing__FlowContext___vars].val; /* _vars on <self:FlowContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 512);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var, var_variable, var_mtype); /* Direct call hash_collection#HashMap#[]= on <var:HashMap[Variable, nullable MType]>*/
}
{
{ /* Inline typing#FlowContext#cache (self) on <self:FlowContext> */
var5 = self->attrs[COLOR_nit__typing__FlowContext___cache].val; /* _cache on <self:FlowContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 514);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline hash_collection#HashMap#keys (var3) on <var3:HashMap[Variable, nullable Array[nullable MType]]> */
var8 = var3->attrs[COLOR_standard__hash_collection__HashMap___keys].val; /* _keys on <var3:HashMap[Variable, nullable Array[nullable MType]]> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _keys");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__hash_collection, 275);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var6->class->vft[COLOR_standard__abstract_collection__RemovableCollection__remove]))(var6, var_variable) /* remove on <var6:RemovableCollection[nullable Object](RemovableCollection[Variable])>*/;
}
RET_LABEL:;
}
/* method typing#FlowContext#collect_types for (self: FlowContext, Variable): nullable Array[nullable MType] */
val* nit__typing___FlowContext___collect_types(val* self, val* p0) {
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
var3 = self->attrs[COLOR_nit__typing__FlowContext___cache].val; /* _cache on <self:FlowContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 514);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = standard___standard__MapRead___has_key(var1, var_variable);
}
if (var4){
{
{ /* Inline typing#FlowContext#cache (self) on <self:FlowContext> */
var7 = self->attrs[COLOR_nit__typing__FlowContext___cache].val; /* _cache on <self:FlowContext> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 514);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var5, var_variable);
}
var = var8;
goto RET_LABEL;
} else {
}
var9 = NULL;
var_res = var9;
{
{ /* Inline typing#FlowContext#vars (self) on <self:FlowContext> */
var12 = self->attrs[COLOR_nit__typing__FlowContext___vars].val; /* _vars on <self:FlowContext> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 512);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = standard___standard__MapRead___has_key(var10, var_variable);
}
if (var13){
{
{ /* Inline typing#FlowContext#vars (self) on <self:FlowContext> */
var16 = self->attrs[COLOR_nit__typing__FlowContext___vars].val; /* _vars on <self:FlowContext> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _vars");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 512);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = standard___standard__HashMap___standard__abstract_collection__MapRead___91d_93d(var14, var_variable);
}
var_mtype = var17;
var18 = NEW_standard__Array(&type_standard__Array__nullable__nit__MType);
var19 = 1;
{
standard___standard__Array___with_capacity(var18, var19); /* Direct call array#Array#with_capacity on <var18:Array[nullable MType]>*/
}
var_ = var18;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_mtype); /* Direct call array#AbstractArray#push on <var_:Array[nullable MType]>*/
}
var_res = var_;
} else {
{
{ /* Inline flow#FlowContext#previous (self) on <self:FlowContext> */
var22 = self->attrs[COLOR_nit__flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 188);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var20);
}
if (var23){
var24 = NEW_standard__Array(&type_standard__Array__nullable__nit__MType);
var25 = 1;
{
standard___standard__Array___with_capacity(var24, var25); /* Direct call array#Array#with_capacity on <var24:Array[nullable MType]>*/
}
var_26 = var24;
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var29 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_26, var27); /* Direct call array#AbstractArray#push on <var_26:Array[nullable MType]>*/
}
var_res = var_26;
} else {
{
{ /* Inline flow#FlowContext#previous (self) on <self:FlowContext> */
var32 = self->attrs[COLOR_nit__flow__FlowContext___previous].val; /* _previous on <self:FlowContext> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _previous");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__flow, 188);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_33 = var30;
{
var34 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_33);
}
var_35 = var34;
for(;;) {
{
var36 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_35);
}
if (var36){
{
var37 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_35);
}
var_flow = var37;
{
var38 = nit___nit__FlowContext___is_unreachable(var_flow);
}
if (var38){
goto BREAK_label;
} else {
}
{
var39 = nit__typing___FlowContext___collect_types(var_flow, var_variable);
}
var_r2 = var39;
var40 = NULL;
if (var_r2 == NULL) {
var41 = 1; /* is null */
} else {
var41 = 0; /* arg is null but recv is not */
}
if (0) {
var42 = standard___standard__Array___standard__kernel__Object___61d_61d(var_r2, var40);
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
var45 = standard___standard__Array___standard__kernel__Object___61d_61d(var_res, var43);
var44 = var45;
}
if (var44){
{
var46 = standard__array___Collection___to_a(var_r2);
}
var_res = var46;
} else {
var_47 = var_r2;
{
var48 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_47);
}
var_49 = var48;
for(;;) {
{
var50 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_49);
}
if (var50){
{
var51 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_49);
}
var_t = var51;
{
var52 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var_res, var_t);
}
var53 = !var52;
if (var53){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_res, var_t); /* Direct call array#Array#add on <var_res:nullable Array[nullable MType](Array[nullable MType])>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_49); /* Direct call array#ArrayIterator#next on <var_49:ArrayIterator[nullable MType]>*/
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
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_35); /* Direct call array#ArrayIterator#next on <var_35:ArrayIterator[FlowContext]>*/
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
var60 = self->attrs[COLOR_nit__typing__FlowContext___cache].val; /* _cache on <self:FlowContext> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 514);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var58, var_variable, var_res); /* Direct call hash_collection#HashMap#[]= on <var58:HashMap[Variable, nullable Array[nullable MType]]>*/
}
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
short int var54 /* : Bool */;
val* var55 /* : nullable ASignature */;
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
val* var_76 /* var : Array[MType] */;
val* var77 /* : MClassType */;
val* var78 /* : nullable ASignature */;
val* var80 /* : nullable ASignature */;
val* var81 /* : ANodes[AParam] */;
val* var83 /* : ANodes[AParam] */;
val* var84 /* : ANode */;
val* var85 /* : nullable Variable */;
val* var87 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var88 /* : null */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
val* var_other92 /* var other: nullable Object */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
long var96 /* : Int */;
long var97 /* : Int */;
short int var98 /* : Bool */;
val* var99 /* : nullable FlowContext */;
val* var101 /* : nullable FlowContext */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
short int var_104 /* var : Bool */;
val* var105 /* : nullable MSignature */;
val* var107 /* : nullable MSignature */;
val* var108 /* : nullable MType */;
val* var110 /* : nullable MType */;
val* var111 /* : null */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
long var120 /* : Int */;
val* var121 /* : FlatString */;
var_modelbuilder = p0;
{
{ /* Inline parser_nodes#AMethPropdef#n_block (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
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
var12 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 572);
show_backtrace(1);
}
var_mpropdef = var10;
var13 = NEW_nit__typing__TypeVisitor(&type_nit__typing__TypeVisitor);
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var16 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var14) on <var14:MClassDef> */
var19 = var14->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var14:MClassDef> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var13->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder_61d]))(var13, var_modelbuilder) /* modelbuilder= on <var13:TypeVisitor>*/;
}
{
((void (*)(val* self, val* p0))(var13->class->vft[COLOR_nit__typing__TypeVisitor__mmodule_61d]))(var13, var17) /* mmodule= on <var13:TypeVisitor>*/;
}
{
((void (*)(val* self, val* p0))(var13->class->vft[COLOR_nit__typing__TypeVisitor__mpropdef_61d]))(var13, var_mpropdef) /* mpropdef= on <var13:TypeVisitor>*/;
}
{
((void (*)(val* self))(var13->class->vft[COLOR_standard__kernel__Object__init]))(var13) /* init on <var13:TypeVisitor>*/;
}
var_v = var13;
{
{ /* Inline typing#TypeVisitor#selfvariable (var_v) on <var_v:TypeVisitor> */
var22 = var_v->attrs[COLOR_nit__typing__TypeVisitor___selfvariable].val; /* _selfvariable on <var_v:TypeVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 50);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline typing#APropdef#selfvariable= (self,var20) on <self:AMethPropdef> */
self->attrs[COLOR_nit__typing__APropdef___selfvariable].val = var20; /* _selfvariable on <self:AMethPropdef> */
RET_LABEL23:(void)0;
}
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var26 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 576);
show_backtrace(1);
}
var_mmethoddef = var24;
var27 = 0;
var_i = var27;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var30 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (var28 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 577);
show_backtrace(1);
} else {
var31 = nit___nit__MSignature___arity(var28);
}
var_ = var31;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var34 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
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
var38 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
if (var36 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 578);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#mparameters (var36) on <var36:nullable MSignature> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var41 = var36->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var36:nullable MSignature> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var39, var_i);
}
{
{ /* Inline model#MParameter#mtype (var42) on <var42:nullable Object(MParameter)> */
var45 = var42->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var42:nullable Object(MParameter)> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_mtype = var43;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var48 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (var46 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 579);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#vararg_rank (var46) on <var46:nullable MSignature> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1635);
show_backtrace(1);
}
var51 = var46->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <var46:nullable MSignature> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var49,var_i) on <var49:Int> */
var54 = var49 == var_i;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
if (var52){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var57 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (var55 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 580);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var55) on <var55:nullable ASignature> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
show_backtrace(1);
}
var60 = var55->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <var55:nullable ASignature> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(var58, var_i);
}
if (varonce) {
var62 = varonce;
} else {
var63 = "Array";
var64 = 5;
var65 = standard___standard__NativeString___to_s_with_length(var63, var64);
var62 = var65;
varonce = var62;
}
{
var66 = nit__typing___nit__typing__TypeVisitor___get_mclass(var_v, var61, var62);
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
var74 = NEW_standard__Array(&type_standard__Array__nit__MType);
var75 = 1;
{
standard___standard__Array___with_capacity(var74, var75); /* Direct call array#Array#with_capacity on <var74:Array[MType]>*/
}
var_76 = var74;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_76, var_mtype); /* Direct call array#AbstractArray#push on <var_76:Array[MType]>*/
}
{
var77 = nit___nit__MClass___get_mtype(var_arrayclass, var_76);
}
var_mtype = var77;
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var80 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
if (var78 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 584);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var78) on <var78:nullable ASignature> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
show_backtrace(1);
}
var83 = var78->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <var78:nullable ASignature> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
var84 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(var81, var_i);
}
{
{ /* Inline scope#AParam#variable (var84) on <var84:ANode(AParam)> */
var87 = var84->attrs[COLOR_nit__scope__AParam___variable].val; /* _variable on <var84:ANode(AParam)> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
var_variable = var85;
var88 = NULL;
if (var_variable == NULL) {
var89 = 0; /* is null */
} else {
var89 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_variable,var88) on <var_variable:nullable Variable> */
var_other92 = var88;
{
var93 = ((short int (*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_variable, var_other92) /* == on <var_variable:nullable Variable(Variable)>*/;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 585);
show_backtrace(1);
}
{
{ /* Inline typing#Variable#declared_type= (var_variable,var_mtype) on <var_variable:nullable Variable(Variable)> */
var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val = var_mtype; /* _declared_type on <var_variable:nullable Variable(Variable)> */
RET_LABEL95:(void)0;
}
}
var96 = 1;
{
var97 = standard___standard__Int___Discrete__successor(var_i, var96);
}
var_i = var97;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
nit__typing___nit__typing__TypeVisitor___visit_stmt(var_v, var_nblock); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline flow#AExpr#after_flow_context (var_nblock) on <var_nblock:nullable AExpr(AExpr)> */
var101 = var_nblock->attrs[COLOR_nit__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_nblock:nullable AExpr(AExpr)> */
var99 = var101;
RET_LABEL100:(void)0;
}
}
if (var99 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 590);
show_backtrace(1);
} else {
var102 = nit___nit__FlowContext___is_unreachable(var99);
}
var103 = !var102;
var_104 = var103;
if (var103){
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var107 = var_mmethoddef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var105 = var107;
RET_LABEL106:(void)0;
}
}
if (var105 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 590);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var105) on <var105:nullable MSignature> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1595);
show_backtrace(1);
}
var110 = var105->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var105:nullable MSignature> */
var108 = var110;
RET_LABEL109:(void)0;
}
}
var111 = NULL;
if (var108 == NULL) {
var112 = 0; /* is null */
} else {
var112 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var108,var111) on <var108:nullable MType> */
var_other92 = var111;
{
var115 = ((short int (*)(val* self, val* p0))(var108->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var108, var_other92) /* == on <var108:nullable MType(MType)>*/;
}
var116 = !var115;
var113 = var116;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
var112 = var113;
}
var98 = var112;
} else {
var98 = var_104;
}
if (var98){
if (varonce117) {
var118 = varonce117;
} else {
var119 = "Control error: Reached end of function (a \'return\' with a value was expected).";
var120 = 78;
var121 = standard___standard__NativeString___to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var118); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method typing#AAttrPropdef#do_typing for (self: AAttrPropdef, ModelBuilder) */
void nit__typing___AAttrPropdef___APropdef__do_typing(val* self, val* p0) {
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
val* var23 /* : nullable MPropDef */;
val* var25 /* : nullable MPropDef */;
val* var26 /* : nullable MType */;
val* var28 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var29 /* : nullable MType */;
val* var30 /* : nullable AExpr */;
val* var32 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
val* var33 /* : null */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : nullable FlowContext */;
val* var41 /* : nullable FlowContext */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
static val* varonce;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : FlatString */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 600);
show_backtrace(1);
}
var_mpropdef = var;
var3 = NEW_nit__typing__TypeVisitor(&type_nit__typing__TypeVisitor);
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MAttributeDef> */
var6 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MAttributeDef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var4) on <var4:MClassDef> */
var9 = var4->attrs[COLOR_nit__model__MClassDef___mmodule].val; /* _mmodule on <var4:MClassDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 489);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var3->class->vft[COLOR_nit__typing__TypeVisitor__modelbuilder_61d]))(var3, var_modelbuilder) /* modelbuilder= on <var3:TypeVisitor>*/;
}
{
((void (*)(val* self, val* p0))(var3->class->vft[COLOR_nit__typing__TypeVisitor__mmodule_61d]))(var3, var7) /* mmodule= on <var3:TypeVisitor>*/;
}
{
((void (*)(val* self, val* p0))(var3->class->vft[COLOR_nit__typing__TypeVisitor__mpropdef_61d]))(var3, var_mpropdef) /* mpropdef= on <var3:TypeVisitor>*/;
}
{
((void (*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3) /* init on <var3:TypeVisitor>*/;
}
var_v = var3;
{
{ /* Inline typing#TypeVisitor#selfvariable (var_v) on <var_v:TypeVisitor> */
var12 = var_v->attrs[COLOR_nit__typing__TypeVisitor___selfvariable].val; /* _selfvariable on <var_v:TypeVisitor> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _selfvariable");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 50);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline typing#APropdef#selfvariable= (self,var10) on <self:AAttrPropdef> */
self->attrs[COLOR_nit__typing__APropdef___selfvariable].val = var10; /* _selfvariable on <self:AAttrPropdef> */
RET_LABEL13:(void)0;
}
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var16 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
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
var21 = ((short int (*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nexpr, var_other) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
}
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var25 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 606);
show_backtrace(1);
} else {
{ /* Inline model#MAttributeDef#static_mtype (var23) on <var23:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2180);
show_backtrace(1);
}
var28 = var23->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var23:nullable MPropDef(nullable MAttributeDef)> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_mtype = var26;
{
var29 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(var_v, var_nexpr, var_mtype);
}
} else {
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_block (self) on <self:AAttrPropdef> */
var32 = self->attrs[COLOR_nit__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_nblock = var30;
var33 = NULL;
if (var_nblock == NULL) {
var34 = 0; /* is null */
} else {
var34 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nblock,var33) on <var_nblock:nullable AExpr> */
var_other = var33;
{
var37 = ((short int (*)(val* self, val* p0))(var_nblock->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nblock, var_other) /* == on <var_nblock:nullable AExpr(AExpr)>*/;
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
nit__typing___nit__typing__TypeVisitor___visit_stmt(var_v, var_nblock); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline flow#AExpr#after_flow_context (var_nblock) on <var_nblock:nullable AExpr(AExpr)> */
var41 = var_nblock->attrs[COLOR_nit__flow__AExpr___after_flow_context].val; /* _after_flow_context on <var_nblock:nullable AExpr(AExpr)> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (var39 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 612);
show_backtrace(1);
} else {
var42 = nit___nit__FlowContext___is_unreachable(var39);
}
var43 = !var42;
if (var43){
if (varonce) {
var44 = varonce;
} else {
var45 = "Control error: Reached end of block (a \'return\' with a value was expected).";
var46 = 75;
var47 = standard___standard__NativeString___to_s_with_length(var45, var46);
var44 = var47;
varonce = var44;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var44); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
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
val* var1 /* : null */;
var1 = NULL;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AExpr#accept_typing for (self: AExpr, TypeVisitor) */
void nit__typing___AExpr___accept_typing(val* self, val* p0) {
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
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = standard__string___Object___class_name(self);
}
var5 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var5 = array_instance Array[Object] */
var6 = 2;
var7 = NEW_standard__NativeArray(var6, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var7)->values[0] = (val*) var;
((struct instance_standard__NativeArray*)var7)->values[1] = (val*) var4;
{
((void (*)(val* self, val* p0, long p1))(var5->class->vft[COLOR_standard__array__Array__with_native]))(var5, var7, var6) /* with_native on <var5:Array[Object]>*/;
}
}
{
var8 = ((val* (*)(val* self))(var5->class->vft[COLOR_standard__string__Object__to_s]))(var5) /* to_s on <var5:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var8); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
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
short int var8 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1565);
show_backtrace(1);
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
var5 = ((short int (*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__is_ok]))(var_4) /* is_ok on <var_4:Iterator[AExpr]>*/;
}
if (var5){
{
var6 = ((val* (*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__item]))(var_4) /* item on <var_4:Iterator[AExpr]>*/;
}
var_e = var6;
{
nit__typing___nit__typing__TypeVisitor___visit_stmt(var_v, var_e); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
((void (*)(val* self))(var_4->class->vft[COLOR_standard__abstract_collection__Iterator__next]))(var_4) /* next on <var_4:Iterator[AExpr]>*/;
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
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var8; /* _is_typed on <self:ABlockExpr> */
RET_LABEL9:(void)0;
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
val* var5 /* : null */;
val* var6 /* : ANodes[AExpr] */;
val* var8 /* : ANodes[AExpr] */;
val* var9 /* : nullable Object */;
val* var10 /* : nullable MType */;
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1565);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nit___nit__ANodes___standard__abstract_collection__Collection__is_empty(var1);
}
if (var4){
var5 = NULL;
var = var5;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (self) on <self:ABlockExpr> */
var8 = self->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <self:ABlockExpr> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1565);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = standard___standard__SequenceRead___last(var6);
}
{
var10 = ((val* (*)(val* self))(var9->class->vft[COLOR_nit__typing__AExpr__mtype]))(var9) /* mtype on <var9:nullable Object(AExpr)>*/;
}
var = var10;
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
val* var39 /* : null */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var45 /* : nullable MType */;
val* var_etype /* var etype: nullable MType */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : null */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : ModelBuilder */;
val* var60 /* : ModelBuilder */;
static val* varonce;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
val* var70 /* : String */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
val* var78 /* : Array[Object] */;
long var79 /* : Int */;
val* var80 /* : NativeArray[Object] */;
val* var81 /* : String */;
val* var82 /* : nullable MType */;
val* var83 /* : null */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
val* var_decltype /* var decltype: nullable MType */;
short int var90 /* : Bool */;
val* var91 /* : null */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
short int var_ /* var : Bool */;
short int var98 /* : Bool */;
int cltype;
int idtype;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : FlatString */;
val* var104 /* : nullable MClass */;
val* var105 /* : MClassType */;
val* var107 /* : MClassType */;
val* var108 /* : MType */;
val* var109 /* : null */;
short int var110 /* : Bool */;
short int var111 /* : Bool */;
short int var113 /* : Bool */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
var_v = p0;
{
{ /* Inline scope#AVardeclExpr#variable (self) on <self:AVardeclExpr> */
var2 = self->attrs[COLOR_nit__scope__AVardeclExpr___variable].val; /* _variable on <self:AVardeclExpr> */
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
var12 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_type].val; /* _n_type on <self:AVardeclExpr> */
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
var21 = nit__typing___nit__typing__TypeVisitor___resolve_mtype(var_v, var_ntype);
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
var31 = self->attrs[COLOR_nit__parser_nodes__AVardeclExpr___n_expr].val; /* _n_expr on <self:AVardeclExpr> */
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
var37 = ((short int (*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nexpr, var_other36) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
}
var38 = !var37;
var34 = var38;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
var39 = NULL;
if (var_mtype == NULL) {
var40 = 0; /* is null */
} else {
var40 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,var39) on <var_mtype:nullable MType> */
var_other36 = var39;
{
var43 = ((short int (*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other36) /* == on <var_mtype:nullable MType(MType)>*/;
}
var44 = !var43;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
if (var40){
{
var45 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(var_v, var_nexpr, var_mtype);
}
var_etype = var45;
if (var_etype == NULL) {
var46 = 0; /* <var_mtype:nullable MType(MType)> cannot be null */
} else {
{ /* Inline kernel#Object#== (var_etype,var_mtype) on <var_etype:nullable MType> */
var_other = var_mtype;
{
{ /* Inline kernel#Object#is_same_instance (var_etype,var_other) on <var_etype:nullable MType(MType)> */
var51 = var_etype == var_other;
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
var52 = NULL;
if (var_ntype == NULL) {
var53 = 0; /* is null */
} else {
var53 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,var52) on <var_ntype:nullable AType> */
var_other36 = var52;
{
var56 = ((short int (*)(val* self, val* p0))(var_ntype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ntype, var_other36) /* == on <var_ntype:nullable AType(AType)>*/;
}
var57 = !var56;
var54 = var57;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
var53 = var54;
}
if (unlikely(!var53)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 688);
show_backtrace(1);
}
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var60 = var_v->attrs[COLOR_nit__typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 34);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (varonce) {
var61 = varonce;
} else {
var62 = "useless-type";
var63 = 12;
var64 = standard___standard__NativeString___to_s_with_length(var62, var63);
var61 = var64;
varonce = var61;
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = "Warning: useless type definition for variable `";
var68 = 47;
var69 = standard___standard__NativeString___to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
{
{ /* Inline scope#Variable#name (var_variable) on <var_variable:nullable Variable(Variable)> */
var72 = var_variable->attrs[COLOR_nit__scope__Variable___name].val; /* _name on <var_variable:nullable Variable(Variable)> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__scope, 35);
show_backtrace(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = "`";
var76 = 1;
var77 = standard___standard__NativeString___to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
var78 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var78 = array_instance Array[Object] */
var79 = 3;
var80 = NEW_standard__NativeArray(var79, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var80)->values[0] = (val*) var66;
((struct instance_standard__NativeArray*)var80)->values[1] = (val*) var70;
((struct instance_standard__NativeArray*)var80)->values[2] = (val*) var74;
{
((void (*)(val* self, val* p0, long p1))(var78->class->vft[COLOR_standard__array__Array__with_native]))(var78, var80, var79) /* with_native on <var78:Array[Object]>*/;
}
}
{
var81 = ((val* (*)(val* self))(var78->class->vft[COLOR_standard__string__Object__to_s]))(var78) /* to_s on <var78:Array[Object]>*/;
}
{
nit___nit__ModelBuilder___advice(var58, var_ntype, var61, var81); /* Direct call modelbuilder_base#ModelBuilder#advice on <var58:ModelBuilder>*/
}
} else {
}
} else {
{
var82 = nit__typing___nit__typing__TypeVisitor___visit_expr(var_v, var_nexpr);
}
var_mtype = var82;
var83 = NULL;
if (var_mtype == NULL) {
var84 = 1; /* is null */
} else {
var84 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var83) on <var_mtype:nullable MType> */
var_other = var83;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var89 = var_mtype == var_other;
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
}
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var84 = var85;
}
if (var84){
goto RET_LABEL;
} else {
}
}
} else {
}
var_decltype = var_mtype;
var91 = NULL;
if (var_mtype == NULL) {
var92 = 1; /* is null */
} else {
var92 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var91) on <var_mtype:nullable MType> */
var_other = var91;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var97 = var_mtype == var_other;
var95 = var97;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
}
var93 = var95;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
var92 = var93;
}
var_ = var92;
if (var92){
var90 = var_;
} else {
/* <var_mtype:nullable MType(MType)> isa MNullType */
cltype = type_nit__MNullType.color;
idtype = type_nit__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var98 = 0;
} else {
var98 = var_mtype->type->type_table[cltype] == idtype;
}
var90 = var98;
}
if (var90){
if (varonce99) {
var100 = varonce99;
} else {
var101 = "Object";
var102 = 6;
var103 = standard___standard__NativeString___to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
{
var104 = nit__typing___nit__typing__TypeVisitor___get_mclass(var_v, self, var100);
}
if (var104 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 699);
show_backtrace(1);
} else {
{ /* Inline model#MClass#mclass_type (var104) on <var104:nullable MClass> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var107 = var104->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var104:nullable MClass> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
var108 = nit___nit__MType___as_nullable(var105);
}
var_decltype = var108;
var109 = NULL;
if (var_mtype == NULL) {
var110 = 1; /* is null */
} else {
var110 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var109) on <var_mtype:nullable MType(nullable MNullType)> */
var_other = var109;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MNullType(MNullType)> */
var115 = var_mtype == var_other;
var113 = var115;
goto RET_LABEL114;
RET_LABEL114:(void)0;
}
}
var111 = var113;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
var110 = var111;
}
if (var110){
var_mtype = var_decltype;
} else {
}
} else {
}
{
{ /* Inline typing#Variable#declared_type= (var_variable,var_decltype) on <var_variable:nullable Variable(Variable)> */
var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val = var_decltype; /* _declared_type on <var_variable:nullable Variable(Variable)> */
RET_LABEL116:(void)0;
}
}
{
nit__typing___nit__typing__TypeVisitor___set_variable(var_v, self, var_variable, var_mtype); /* Direct call typing#TypeVisitor#set_variable on <var_v:TypeVisitor>*/
}
var117 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var117) on <self:AVardeclExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var117; /* _is_typed on <self:AVardeclExpr> */
RET_LABEL118:(void)0;
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
var_v = p0;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarExpr> */
var2 = self->attrs[COLOR_nit__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarExpr> */
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
var10 = nit__typing___nit__typing__TypeVisitor___get_variable(var_v, self, var_variable);
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
var16 = ((short int (*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other15) /* == on <var_mtype:nullable MType(MType)>*/;
}
var17 = !var16;
var13 = var17;
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
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:AVarExpr> */
RET_LABEL18:(void)0;
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
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : AExpr */;
val* var11 /* : AExpr */;
val* var12 /* : nullable MType */;
val* var14 /* : nullable MType */;
val* var15 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var16 /* : Bool */;
var_v = p0;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarAssignExpr> */
var2 = self->attrs[COLOR_nit__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarAssignExpr> */
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
var7 = ((short int (*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_variable, var_other) /* == on <var_variable:nullable Variable(Variable)>*/;
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 734);
show_backtrace(1);
}
{
{ /* Inline parser_nodes#AAssignFormExpr#n_value (self) on <self:AVarAssignExpr> */
var11 = self->attrs[COLOR_nit__parser_nodes__AAssignFormExpr___n_value].val; /* _n_value on <self:AVarAssignExpr> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1772);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:nullable Variable(Variable)> */
var14 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:nullable Variable(Variable)> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(var_v, var9, var12);
}
var_mtype = var15;
{
nit__typing___nit__typing__TypeVisitor___set_variable(var_v, self, var_variable, var_mtype); /* Direct call typing#TypeVisitor#set_variable on <var_v:TypeVisitor>*/
}
var16 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var16) on <self:AVarAssignExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var16; /* _is_typed on <self:AVarAssignExpr> */
RET_LABEL17:(void)0;
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
val* var22 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var23 /* : null */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : null */;
val* var32 /* : MSignature */;
val* var34 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var35 /* : nullable MType */;
val* var37 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var38 /* : Bool */;
long var39 /* : Int */;
long var40 /* : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var_ /* var : Bool */;
val* var44 /* : null */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
val* var_other48 /* var other: nullable Object */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : AExpr */;
val* var53 /* : AExpr */;
val* var54 /* : Array[MParameter] */;
val* var56 /* : Array[MParameter] */;
val* var57 /* : nullable Object */;
val* var58 /* : MType */;
val* var60 /* : MType */;
val* var61 /* : nullable MType */;
val* var_value_type /* var value_type: nullable MType */;
val* var62 /* : null */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
val* var69 /* : null */;
val* var70 /* : nullable MType */;
var_v = p0;
var_readtype = p1;
var_writetype = p2;
{
{ /* Inline parser_nodes#AReassignFormExpr#n_assign_op (self) on <self:AReassignFormExpr> */
var3 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AReassignFormExpr> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1780);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
/* <var1:AAssignOp> isa APlusAssignOp */
cltype = type_nit__APlusAssignOp.color;
idtype = type_nit__APlusAssignOp.id;
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
var8 = standard___standard__NativeString___to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var_reassign_name = var5;
} else {
{
{ /* Inline parser_nodes#AReassignFormExpr#n_assign_op (self) on <self:AReassignFormExpr> */
var11 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_assign_op].val; /* _n_assign_op on <self:AReassignFormExpr> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_assign_op");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1780);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
/* <var9:AAssignOp> isa AMinusAssignOp */
cltype13 = type_nit__AMinusAssignOp.color;
idtype14 = type_nit__AMinusAssignOp.id;
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
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var_reassign_name = var16;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 763);
show_backtrace(1);
}
}
{
{ /* Inline typing#AReassignFormExpr#read_type= (self,var_readtype) on <self:AReassignFormExpr> */
self->attrs[COLOR_nit__typing__AReassignFormExpr___read_type].val = var_readtype; /* _read_type on <self:AReassignFormExpr> */
RET_LABEL20:(void)0;
}
}
var21 = 0;
{
var22 = nit__typing___nit__typing__TypeVisitor___get_method(var_v, self, var_readtype, var_reassign_name, var21);
}
var_callsite = var22;
var23 = NULL;
if (var_callsite == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,var23) on <var_callsite:nullable CallSite> */
var_other = var23;
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var29 = var_callsite == var_other;
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
var30 = NULL;
var = var30;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite= (self,var_callsite) on <self:AReassignFormExpr> */
self->attrs[COLOR_nit__typing__AReassignFormExpr___reassign_callsite].val = var_callsite; /* _reassign_callsite on <self:AReassignFormExpr> */
RET_LABEL31:(void)0;
}
}
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var34 = var_callsite->attrs[COLOR_nit__typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 494);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_msignature = var32;
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var37 = var_msignature->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
var_rettype = var35;
{
var39 = nit___nit__MSignature___arity(var_msignature);
}
var40 = 1;
{
{ /* Inline kernel#Int#== (var39,var40) on <var39:Int> */
var43 = var39 == var40;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var_ = var41;
if (var41){
var44 = NULL;
if (var_rettype == NULL) {
var45 = 0; /* is null */
} else {
var45 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rettype,var44) on <var_rettype:nullable MType> */
var_other48 = var44;
{
var49 = ((short int (*)(val* self, val* p0))(var_rettype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_rettype, var_other48) /* == on <var_rettype:nullable MType(MType)>*/;
}
var50 = !var49;
var46 = var50;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
var38 = var45;
} else {
var38 = var_;
}
if (unlikely(!var38)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 774);
show_backtrace(1);
}
{
{ /* Inline parser_nodes#AReassignFormExpr#n_value (self) on <self:AReassignFormExpr> */
var53 = self->attrs[COLOR_nit__parser_nodes__AReassignFormExpr___n_value].val; /* _n_value on <self:AReassignFormExpr> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_value");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1783);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var56 = var_msignature->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = standard___standard__SequenceRead___Collection__first(var54);
}
{
{ /* Inline model#MParameter#mtype (var57) on <var57:nullable Object(MParameter)> */
var60 = var57->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var57:nullable Object(MParameter)> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(var_v, var51, var58);
}
var_value_type = var61;
var62 = NULL;
if (var_value_type == NULL) {
var63 = 1; /* is null */
} else {
var63 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_value_type,var62) on <var_value_type:nullable MType> */
var_other = var62;
{
{ /* Inline kernel#Object#is_same_instance (var_value_type,var_other) on <var_value_type:nullable MType(MType)> */
var68 = var_value_type == var_other;
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var63 = var64;
}
if (var63){
var69 = NULL;
var = var69;
goto RET_LABEL;
} else {
}
{
var70 = nit__typing___nit__typing__TypeVisitor___check_subtype(var_v, self, var_rettype, var_writetype);
}
var = var_rettype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AVarReassignExpr#accept_typing for (self: AVarReassignExpr, TypeVisitor) */
void nit__typing___AVarReassignExpr___AExpr__accept_typing(val* self, val* p0) {
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
val* var9 /* : nullable MType */;
val* var_readtype /* var readtype: nullable MType */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other14 /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var19 /* : nullable MType */;
val* var21 /* : nullable MType */;
val* var_writetype /* var writetype: nullable MType */;
val* var22 /* : null */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : nullable MType */;
val* var_rettype /* var rettype: nullable MType */;
short int var30 /* : Bool */;
var_v = p0;
{
{ /* Inline scope#AVarFormExpr#variable (self) on <self:AVarReassignExpr> */
var2 = self->attrs[COLOR_nit__scope__AVarFormExpr___variable].val; /* _variable on <self:AVarReassignExpr> */
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
var7 = ((short int (*)(val* self, val* p0))(var_variable->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_variable, var_other) /* == on <var_variable:nullable Variable(Variable)>*/;
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 788);
show_backtrace(1);
}
{
var9 = nit__typing___nit__typing__TypeVisitor___get_variable(var_v, self, var_variable);
}
var_readtype = var9;
var10 = NULL;
if (var_readtype == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_readtype,var10) on <var_readtype:nullable MType> */
var_other14 = var10;
{
{ /* Inline kernel#Object#is_same_instance (var_readtype,var_other14) on <var_readtype:nullable MType(MType)> */
var17 = var_readtype == var_other14;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AReassignFormExpr#read_type= (self,var_readtype) on <self:AVarReassignExpr> */
self->attrs[COLOR_nit__typing__AReassignFormExpr___read_type].val = var_readtype; /* _read_type on <self:AVarReassignExpr> */
RET_LABEL18:(void)0;
}
}
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:nullable Variable(Variable)> */
var21 = var_variable->attrs[COLOR_nit__typing__Variable___declared_type].val; /* _declared_type on <var_variable:nullable Variable(Variable)> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_writetype = var19;
var22 = NULL;
if (var_writetype == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_writetype,var22) on <var_writetype:nullable MType> */
var_other14 = var22;
{
{ /* Inline kernel#Object#is_same_instance (var_writetype,var_other14) on <var_writetype:nullable MType(MType)> */
var28 = var_writetype == var_other14;
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
{
var29 = nit__typing___AReassignFormExpr___resolve_reassignment(self, var_v, var_readtype, var_writetype);
}
var_rettype = var29;
{
nit__typing___nit__typing__TypeVisitor___set_variable(var_v, self, var_variable, var_rettype); /* Direct call typing#TypeVisitor#set_variable on <var_v:TypeVisitor>*/
}
var30 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var30) on <self:AVarReassignExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var30; /* _is_typed on <self:AVarReassignExpr> */
RET_LABEL31:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AContinueExpr#accept_typing for (self: AContinueExpr, TypeVisitor) */
void nit__typing___AContinueExpr___AExpr__accept_typing(val* self, val* p0) {
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
val* var9 /* : nullable MType */;
short int var10 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#AEscapeExpr#n_expr (self) on <self:AContinueExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AEscapeExpr___n_expr].val; /* _n_expr on <self:AContinueExpr> */
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
var7 = ((short int (*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nexpr, var_other) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
var9 = nit__typing___nit__typing__TypeVisitor___visit_expr(var_v, var_nexpr);
}
} else {
}
var10 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var10) on <self:AContinueExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var10; /* _is_typed on <self:AContinueExpr> */
RET_LABEL11:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ABreakExpr#accept_typing for (self: ABreakExpr, TypeVisitor) */
void nit__typing___ABreakExpr___AExpr__accept_typing(val* self, val* p0) {
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
val* var9 /* : nullable MType */;
short int var10 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#AEscapeExpr#n_expr (self) on <self:ABreakExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AEscapeExpr___n_expr].val; /* _n_expr on <self:ABreakExpr> */
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
var7 = ((short int (*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nexpr, var_other) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
{
var9 = nit__typing___nit__typing__TypeVisitor___visit_expr(var_v, var_nexpr);
}
} else {
}
var10 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var10) on <self:ABreakExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var10; /* _is_typed on <self:ABreakExpr> */
RET_LABEL11:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AReturnExpr#accept_typing for (self: AReturnExpr, TypeVisitor) */
void nit__typing___AReturnExpr___AExpr__accept_typing(val* self, val* p0) {
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
val* var25 /* : null */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
val* var31 /* : nullable MType */;
val* var32 /* : nullable MType */;
static val* varonce;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : FlatString */;
val* var37 /* : null */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : FlatString */;
short int var48 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#AReturnExpr#n_expr (self) on <self:AReturnExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AReturnExpr___n_expr].val; /* _n_expr on <self:AReturnExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_nexpr = var;
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var5 = var_v->attrs[COLOR_nit__typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mpropdef = var3;
/* <var_mpropdef:nullable MPropDef> isa MMethodDef */
cltype = type_nit__MMethodDef.color;
idtype = type_nit__MMethodDef.id;
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
var9 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 836);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#return_mtype (var7) on <var7:nullable MSignature> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1595);
show_backtrace(1);
}
var12 = var7->attrs[COLOR_nit__model__MSignature___return_mtype].val; /* _return_mtype on <var7:nullable MSignature> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ret_type = var10;
} else {
/* <var_mpropdef:nullable MPropDef> isa MAttributeDef */
cltype14 = type_nit__MAttributeDef.color;
idtype15 = type_nit__MAttributeDef.id;
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
var18 = var_mpropdef->attrs[COLOR_nit__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var_mpropdef:nullable MPropDef(MAttributeDef)> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_ret_type = var16;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 840);
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
var23 = ((short int (*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_nexpr, var_other) /* == on <var_nexpr:nullable AExpr(AExpr)>*/;
}
var24 = !var23;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
var25 = NULL;
if (var_ret_type == NULL) {
var26 = 0; /* is null */
} else {
var26 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_type,var25) on <var_ret_type:nullable Object(nullable MType)> */
var_other = var25;
{
var29 = ((short int (*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret_type, var_other) /* == on <var_ret_type:nullable MType(MType)>*/;
}
var30 = !var29;
var27 = var30;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var26 = var27;
}
if (var26){
{
var31 = nit__typing___nit__typing__TypeVisitor___visit_expr_subtype(var_v, var_nexpr, var_ret_type);
}
} else {
{
var32 = nit__typing___nit__typing__TypeVisitor___visit_expr(var_v, var_nexpr);
}
if (varonce) {
var33 = varonce;
} else {
var34 = "Error: Return with value in a procedure.";
var35 = 40;
var36 = standard___standard__NativeString___to_s_with_length(var34, var35);
var33 = var36;
varonce = var33;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var33); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
}
} else {
var37 = NULL;
if (var_ret_type == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_type,var37) on <var_ret_type:nullable Object(nullable MType)> */
var_other = var37;
{
var41 = ((short int (*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_ret_type, var_other) /* == on <var_ret_type:nullable MType(MType)>*/;
}
var42 = !var41;
var39 = var42;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
if (varonce43) {
var44 = varonce43;
} else {
var45 = "Error: Return without value in a function.";
var46 = 42;
var47 = standard___standard__NativeString___to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var44); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
}
var48 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var48) on <self:AReturnExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var48; /* _is_typed on <self:AReturnExpr> */
RET_LABEL49:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAbortExpr#accept_typing for (self: AAbortExpr, TypeVisitor) */
void nit__typing___AAbortExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
short int var /* : Bool */;
var_v = p0;
var = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var) on <self:AAbortExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var; /* _is_typed on <self:AAbortExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AIfExpr#accept_typing for (self: AIfExpr, TypeVisitor) */
void nit__typing___AIfExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var4 /* : nullable AExpr */;
val* var6 /* : nullable AExpr */;
val* var7 /* : nullable AExpr */;
val* var9 /* : nullable AExpr */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : nullable AExpr */;
val* var15 /* : nullable AExpr */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var_ /* var : Bool */;
val* var22 /* : nullable AExpr */;
val* var24 /* : nullable AExpr */;
val* var25 /* : null */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
val* var_other29 /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : nullable AExpr */;
val* var35 /* : nullable AExpr */;
val* var36 /* : nullable MType */;
var_v = p0;
{
{ /* Inline parser_nodes#AIfExpr#n_expr (self) on <self:AIfExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_expr].val; /* _n_expr on <self:AIfExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1664);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__typing___nit__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (self) on <self:AIfExpr> */
var6 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
nit__typing___nit__typing__TypeVisitor___visit_stmt(var_v, var4); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
{
{ /* Inline parser_nodes#AIfExpr#n_else (self) on <self:AIfExpr> */
var9 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nit__typing___nit__typing__TypeVisitor___visit_stmt(var_v, var7); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
var10 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var10) on <self:AIfExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var10; /* _is_typed on <self:AIfExpr> */
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes#AIfExpr#n_then (self) on <self:AIfExpr> */
var15 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
var16 = NULL;
if (var13 == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var13,var16) on <var13:nullable AExpr> */
var_other = var16;
{
var20 = ((short int (*)(val* self, val* p0))(var13->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var13, var_other) /* == on <var13:nullable AExpr(AExpr)>*/;
}
var21 = !var20;
var18 = var21;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
var_ = var17;
if (var17){
{
{ /* Inline parser_nodes#AIfExpr#n_else (self) on <self:AIfExpr> */
var24 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_else].val; /* _n_else on <self:AIfExpr> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var25 = NULL;
if (var22 == NULL) {
var26 = 1; /* is null */
} else {
var26 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var22,var25) on <var22:nullable AExpr> */
var_other29 = var25;
{
{ /* Inline kernel#Object#is_same_instance (var22,var_other29) on <var22:nullable AExpr(AExpr)> */
var32 = var22 == var_other29;
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var27 = var30;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
var26 = var27;
}
var12 = var26;
} else {
var12 = var_;
}
if (var12){
{
{ /* Inline parser_nodes#AIfExpr#n_then (self) on <self:AIfExpr> */
var35 = self->attrs[COLOR_nit__parser_nodes__AIfExpr___n_then].val; /* _n_then on <self:AIfExpr> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (var33 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 874);
show_backtrace(1);
} else {
var36 = ((val* (*)(val* self))(var33->class->vft[COLOR_nit__typing__AExpr__mtype]))(var33) /* mtype on <var33:nullable AExpr>*/;
}
{
{ /* Inline typing#AExpr#mtype= (self,var36) on <self:AIfExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var36; /* _mtype on <self:AIfExpr> */
RET_LABEL37:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method typing#AIfexprExpr#accept_typing for (self: AIfexprExpr, TypeVisitor) */
void nit__typing___AIfexprExpr___AExpr__accept_typing(val* self, val* p0) {
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
var2 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_expr].val; /* _n_expr on <self:AIfexprExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1681);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__typing___nit__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes#AIfexprExpr#n_then (self) on <self:AIfexprExpr> */
var6 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_then].val; /* _n_then on <self:AIfexprExpr> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_then");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1687);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit__typing___nit__typing__TypeVisitor___visit_expr(var_v, var4);
}
var_t1 = var7;
{
{ /* Inline parser_nodes#AIfexprExpr#n_else (self) on <self:AIfexprExpr> */
var10 = self->attrs[COLOR_nit__parser_nodes__AIfexprExpr___n_else].val; /* _n_else on <self:AIfexprExpr> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_else");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nit__typing___nit__typing__TypeVisitor___visit_expr(var_v, var8);
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
var27 = NEW_standard__Array(&type_standard__Array__nit__MType);
var28 = 2;
{
standard___standard__Array___with_capacity(var27, var28); /* Direct call array#Array#with_capacity on <var27:Array[MType]>*/
}
var_29 = var27;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_29, var_t1); /* Direct call array#AbstractArray#push on <var_29:Array[MType]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_29, var_t2); /* Direct call array#AbstractArray#push on <var_29:Array[MType]>*/
}
{
var30 = nit__typing___nit__typing__TypeVisitor___merge_types(var_v, self, var_29);
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
var41 = standard___standard__NativeString___to_s_with_length(var39, var40);
var38 = var41;
varonce = var38;
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = " vs ";
var45 = 4;
var46 = standard___standard__NativeString___to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
var47 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var47 = array_instance Array[Object] */
var48 = 4;
var49 = NEW_standard__NativeArray(var48, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var49)->values[0] = (val*) var38;
((struct instance_standard__NativeArray*)var49)->values[1] = (val*) var_t1;
((struct instance_standard__NativeArray*)var49)->values[2] = (val*) var43;
((struct instance_standard__NativeArray*)var49)->values[3] = (val*) var_t2;
{
((void (*)(val* self, val* p0, long p1))(var47->class->vft[COLOR_standard__array__Array__with_native]))(var47, var49, var48) /* with_native on <var47:Array[Object]>*/;
}
}
{
var50 = ((val* (*)(val* self))(var47->class->vft[COLOR_standard__string__Object__to_s]))(var47) /* to_s on <var47:Array[Object]>*/;
}
{
nit__typing___nit__typing__TypeVisitor___error(var_v, self, var50); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
{
{ /* Inline typing#AExpr#mtype= (self,var_t) on <self:AIfexprExpr> */
self->attrs[COLOR_nit__typing__AExpr___mtype].val = var_t; /* _mtype on <self:AIfexprExpr> */
RET_LABEL51:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ADoExpr#accept_typing for (self: ADoExpr, TypeVisitor) */
void nit__typing___ADoExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
short int var3 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#ADoExpr#n_block (self) on <self:ADoExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ADoExpr___n_block].val; /* _n_block on <self:ADoExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit__typing___nit__typing__TypeVisitor___visit_stmt(var_v, var); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
var3 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var3) on <self:ADoExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ADoExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AWhileExpr#accept_typing for (self: AWhileExpr, TypeVisitor) */
void nit__typing___AWhileExpr___AExpr__accept_typing(val* self, val* p0) {
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
var2 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_expr].val; /* _n_expr on <self:AWhileExpr> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1705);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit__typing___nit__typing__TypeVisitor___visit_expr_bool(var_v, var);
}
{
{ /* Inline parser_nodes#AWhileExpr#n_block (self) on <self:AWhileExpr> */
var6 = self->attrs[COLOR_nit__parser_nodes__AWhileExpr___n_block].val; /* _n_block on <self:AWhileExpr> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
nit__typing___nit__typing__TypeVisitor___visit_stmt(var_v, var4); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
var7 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var7) on <self:AWhileExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var7; /* _is_typed on <self:AWhileExpr> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ALoopExpr#accept_typing for (self: ALoopExpr, TypeVisitor) */
void nit__typing___ALoopExpr___AExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable AExpr */;
val* var2 /* : nullable AExpr */;
short int var3 /* : Bool */;
var_v = p0;
{
{ /* Inline parser_nodes#ALoopExpr#n_block (self) on <self:ALoopExpr> */
var2 = self->attrs[COLOR_nit__parser_nodes__ALoopExpr___n_block].val; /* _n_block on <self:ALoopExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit__typing___nit__typing__TypeVisitor___visit_stmt(var_v, var); /* Direct call typing#TypeVisitor#visit_stmt on <var_v:TypeVisitor>*/
}
var3 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var3) on <self:ALoopExpr> */
self->attrs[COLOR_nit__typing__AExpr___is_typed].s = var3; /* _is_typed on <self:ALoopExpr> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AForExpr#coltype= for (self: AForExpr, nullable MClassType) */
void nit__typing___AForExpr___coltype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AForExpr___coltype].val = p0; /* _coltype on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_iterator for (self: AForExpr): nullable CallSite */
val* nit__typing___AForExpr___method_iterator(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AForExpr___method_iterator].val; /* _method_iterator on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_iterator= for (self: AForExpr, nullable CallSite) */
void nit__typing___AForExpr___method_iterator_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AForExpr___method_iterator].val = p0; /* _method_iterator on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_is_ok for (self: AForExpr): nullable CallSite */
val* nit__typing___AForExpr___method_is_ok(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AForExpr___method_is_ok].val; /* _method_is_ok on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_is_ok= for (self: AForExpr, nullable CallSite) */
void nit__typing___AForExpr___method_is_ok_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AForExpr___method_is_ok].val = p0; /* _method_is_ok on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_item for (self: AForExpr): nullable CallSite */
val* nit__typing___AForExpr___method_item(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AForExpr___method_item].val; /* _method_item on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_item= for (self: AForExpr, nullable CallSite) */
void nit__typing___AForExpr___method_item_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AForExpr___method_item].val = p0; /* _method_item on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_next for (self: AForExpr): nullable CallSite */
val* nit__typing___AForExpr___method_next(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AForExpr___method_next].val; /* _method_next on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_next= for (self: AForExpr, nullable CallSite) */
void nit__typing___AForExpr___method_next_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AForExpr___method_next].val = p0; /* _method_next on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_key for (self: AForExpr): nullable CallSite */
val* nit__typing___AForExpr___method_key(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AForExpr___method_key].val; /* _method_key on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_key= for (self: AForExpr, nullable CallSite) */
void nit__typing___AForExpr___method_key_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AForExpr___method_key].val = p0; /* _method_key on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_finish for (self: AForExpr): nullable CallSite */
val* nit__typing___AForExpr___method_finish(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AForExpr___method_finish].val; /* _method_finish on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_finish= for (self: AForExpr, nullable CallSite) */
void nit__typing___AForExpr___method_finish_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AForExpr___method_finish].val = p0; /* _method_finish on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_lt for (self: AForExpr): nullable CallSite */
val* nit__typing___AForExpr___method_lt(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AForExpr___method_lt].val; /* _method_lt on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_lt= for (self: AForExpr, nullable CallSite) */
void nit__typing___AForExpr___method_lt_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AForExpr___method_lt].val = p0; /* _method_lt on <self:AForExpr> */
RET_LABEL:;
}
/* method typing#AForExpr#method_successor for (self: AForExpr): nullable CallSite */
val* nit__typing___AForExpr___method_successor(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_nit__typing__AForExpr___method_successor].val; /* _method_successor on <self:AForExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AForExpr#method_successor= for (self: AForExpr, nullable CallSite) */
void nit__typing___AForExpr___method_successor_61d(val* self, val* p0) {
self->attrs[COLOR_nit__typing__AForExpr___method_successor].val = p0; /* _method_successor on <self:AForExpr> */
RET_LABEL:;
}
