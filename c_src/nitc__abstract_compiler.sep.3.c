#include "nitc__abstract_compiler.sep.0.h"
/* method abstract_compiler$AbstractCompilerVisitor$get_property for (self: AbstractCompilerVisitor, String, MType): MMethod */
val* nitc___nitc__AbstractCompilerVisitor___get_property(val* self, val* p0, val* p1) {
val* var /* : MMethod */;
val* var_name /* var name: String */;
val* var_recv /* var recv: MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AbstractCompiler */;
val* var4 /* : AbstractCompiler */;
val* var5 /* : ModelBuilder */;
val* var7 /* : ModelBuilder */;
val* var8 /* : nullable ANode */;
val* var10 /* : nullable ANode */;
val* var11 /* : MClass */;
val* var13 /* : MClass */;
val* var14 /* : AbstractCompiler */;
val* var16 /* : AbstractCompiler */;
val* var17 /* : MModule */;
val* var19 /* : MModule */;
val* var20 /* : MMethod */;
var_name = p0;
var_recv = p1;
/* <var_recv:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_recv->type->table_size) {
var1 = 0;
} else {
var1 = var_recv->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1239);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (self) on <self:AbstractCompilerVisitor> */
var10 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline model$MClassType$mclass (var_recv) on <var_recv:MType(MClassType)> */
var13 = var_recv->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_recv:MType(MClassType)> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var16 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var14) on <var14:AbstractCompiler> */
var19 = var14->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var14:AbstractCompiler> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nitc___nitc__ModelBuilder___force_get_primitive_method(var5, var8, var_name, var11, var17);
}
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$compile_callsite for (self: AbstractCompilerVisitor, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___compile_callsite(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_callsite /* var callsite: CallSite */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : MMethodDef */;
val* var6 /* : MMethodDef */;
val* var7 /* : Array[MProperty] */;
val* var9 /* : Array[MProperty] */;
val* var_initializers /* var initializers: Array[MProperty] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
long var_i /* var i: Int */;
val* var_ /* var : Array[MProperty] */;
val* var13 /* : IndexedIterator[nullable Object] */;
val* var_14 /* var : IndexedIterator[MProperty] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_p /* var p: MProperty */;
short int var17 /* : Bool */;
int cltype;
int idtype;
val* var18 /* : Array[RuntimeVariable] */;
val* var_19 /* var : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var20 /* : MPropDef */;
val* var22 /* : MPropDef */;
val* var23 /* : nullable MSignature */;
val* var25 /* : nullable MSignature */;
val* var26 /* : Array[MParameter] */;
val* var28 /* : Array[MParameter] */;
val* var_29 /* var : Array[MParameter] */;
val* var30 /* : IndexedIterator[nullable Object] */;
val* var_31 /* var : IndexedIterator[MParameter] */;
short int var32 /* : Bool */;
val* var34 /* : nullable Object */;
val* var_x /* var x: MParameter */;
val* var35 /* : nullable Object */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name;
long var41 /* : Int */;
val* var42 /* : nullable RuntimeVariable */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
val* var46 /* : nullable Object */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
long var53 /* : Int */;
long var54 /* : Int */;
long var56 /* : Int */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
val* var60 /* : MMethod */;
val* var62 /* : MMethod */;
val* var63 /* : Array[RuntimeVariable] */;
val* var_64 /* var : Array[RuntimeVariable] */;
val* var65 /* : nullable RuntimeVariable */;
val* var66 /* : MMethod */;
val* var68 /* : MMethod */;
val* var69 /* : nullable RuntimeVariable */;
var_callsite = p0;
var_arguments = p1;
{
{ /* Inline model_base$MEntity$is_broken (var_callsite) on <var_callsite:CallSite> */
var3 = var_callsite->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_callsite:CallSite> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$CallSite$mpropdef (var_callsite) on <var_callsite:CallSite> */
var6 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 659);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model$MMethodDef$initializers (var4) on <var4:MMethodDef> */
var9 = var4->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var4:MMethodDef> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_initializers = var7;
{
var10 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_initializers);
}
var11 = !var10;
if (var11){
{
var12 = core___core__SequenceRead___Collection__first(var_arguments);
}
var_recv = var12;
var_i = 1l;
var_ = var_initializers;
{
var13 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:IndexedIterator[MProperty]>*/
}
if (var15){
} else {
goto BREAK_label;
}
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:IndexedIterator[MProperty]>*/
}
var_p = var16;
/* <var_p:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var_p->type->table_size) {
var17 = 0;
} else {
var17 = var_p->type->type_table[cltype] == idtype;
}
if (var17){
var18 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var18, 1l); /* Direct call array$Array$with_capacity on <var18:Array[RuntimeVariable]>*/
}
var_19 = var18;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_19, var_recv); /* Direct call array$AbstractArray$push on <var_19:Array[RuntimeVariable]>*/
}
var_args = var_19;
{
{ /* Inline model$MProperty$intro (var_p) on <var_p:MProperty(MMethod)> */
var22 = var_p->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_p:MProperty(MMethod)> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model$MMethodDef$msignature (var20) on <var20:MPropDef(MMethodDef)> */
var25 = var20->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var20:MPropDef(MMethodDef)> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1254);
fatal_exit(1);
} else {
{ /* Inline model$MSignature$mparameters (var23) on <var23:nullable MSignature> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var28 = var23->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var23:nullable MSignature> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_29 = var26;
{
var30 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_29);
}
var_31 = var30;
for(;;) {
{
var32 = ((short int(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_31); /* is_ok on <var_31:IndexedIterator[MParameter]>*/
}
if (var32){
} else {
goto BREAK_label33;
}
{
var34 = ((val*(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_31); /* item on <var_31:IndexedIterator[MParameter]>*/
}
var_x = var34;
{
var35 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, var_i);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_args, var35); /* Direct call array$Array$add on <var_args:Array[RuntimeVariable]>*/
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var38 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var41 = var_i + 1l;
var36 = var41;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_i = var36;
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_31); /* next on <var_31:IndexedIterator[MParameter]>*/
}
}
BREAK_label33: (void)0;
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_31); /* finish on <var_31:IndexedIterator[MParameter]>*/
}
{
var42 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(self, var_p, var_args);
}
} else {
/* <var_p:MProperty> isa MAttribute */
cltype44 = type_nitc__MAttribute.color;
idtype45 = type_nitc__MAttribute.id;
if(cltype44 >= var_p->type->table_size) {
var43 = 0;
} else {
var43 = var_p->type->type_table[cltype44] == idtype45;
}
if (var43){
{
var46 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, var_i);
}
{
nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute(self, var_p, var_recv, var46); /* Direct call separate_compiler$SeparateCompilerVisitor$write_attribute on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var49 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var53 = var_i + 1l;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_i = var47;
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1262);
fatal_exit(1);
}
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:IndexedIterator[MProperty]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:IndexedIterator[MProperty]>*/
}
{
{ /* Inline array$AbstractArrayRead$length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var56 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var_i,var54) on <var_i:Int> */
var59 = var_i == var54;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
if (unlikely(!var57)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1264);
fatal_exit(1);
}
{
{ /* Inline typing$CallSite$mproperty (var_callsite) on <var_callsite:CallSite> */
var62 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var62 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
var63 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var63, 1l); /* Direct call array$Array$with_capacity on <var63:Array[RuntimeVariable]>*/
}
var_64 = var63;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_64, var_recv); /* Direct call array$AbstractArray$push on <var_64:Array[RuntimeVariable]>*/
}
{
var65 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(self, var60, var_64);
}
var = var65;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$CallSite$mproperty (var_callsite) on <var_callsite:CallSite> */
var68 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var68 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(self, var66, var_arguments);
}
var = var69;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$nit_alloc for (self: AbstractCompilerVisitor, String, nullable String): String */
val* nitc___nitc__AbstractCompilerVisitor___nit_alloc(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_size /* var size: String */;
val* var_tag /* var tag: nullable String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
val* var18 /* : String */;
var_size = p0;
var_tag = p1;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "nit_alloc(";
var6 = (val*)(10l<<2|1);
var7 = (val*)(10l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = ")";
var14 = (val*)(1l<<2|1);
var15 = (val*)(1l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[2]=var11;
} else {
var1 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var1)->values[1]=var_size;
{
var18 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$varargize for (self: AbstractCompilerVisitor, MMethodDef, nullable SignatureMap, RuntimeVariable, SequenceRead[AExpr]): Array[RuntimeVariable] */
val* nitc___nitc__AbstractCompilerVisitor___varargize(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : Array[RuntimeVariable] */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_map /* var map: nullable SignatureMap */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_args /* var args: SequenceRead[AExpr] */;
val* var1 /* : MSignature */;
val* var2 /* : nullable MSignature */;
val* var4 /* : nullable MSignature */;
val* var5 /* : nullable MSignature */;
val* var7 /* : nullable MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var8 /* : Array[RuntimeVariable] */;
val* var_res /* var res: Array[RuntimeVariable] */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var_ /* var : SequenceRead[AExpr] */;
val* var24 /* : Iterator[nullable Object] */;
val* var_25 /* var : IndexedIterator[AExpr] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_ne /* var ne: AExpr */;
val* var28 /* : RuntimeVariable */;
val* var29 /* : Array[RuntimeVariable] */;
long var30 /* : Int */;
val* var_exprs /* var exprs: Array[RuntimeVariable] */;
val* var_31 /* var : SequenceRead[AExpr] */;
val* var32 /* : Iterator[nullable Object] */;
val* var_33 /* var : IndexedIterator[AExpr] */;
short int var34 /* : Bool */;
val* var36 /* : nullable Object */;
val* var_ne37 /* var ne: AExpr */;
val* var38 /* : RuntimeVariable */;
long var_i /* var i: Int */;
long var39 /* : Int */;
long var_40 /* var : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var44 /* : Bool */;
val* var46 /* : Array[MParameter] */;
val* var48 /* : Array[MParameter] */;
val* var49 /* : nullable Object */;
val* var_param /* var param: MParameter */;
val* var50 /* : ArrayMap[Int, Int] */;
val* var52 /* : ArrayMap[Int, Int] */;
val* var53 /* : nullable Object */;
val* var54 /* : nullable Object */;
val* var_j /* var j: nullable Int */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : RuntimeVariable */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var_65 /* var : Bool */;
val* var66 /* : nullable Object */;
long var67 /* : Int */;
long var69 /* : Int */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
short int var76 /* : Bool */;
val* var77 /* : nullable Object */;
long var78 /* : Int */;
long var80 /* : Int */;
val* var81 /* : Array[nullable Object] */;
long var82 /* : Int */;
val* var_vararg /* var vararg: Array[RuntimeVariable] */;
val* var83 /* : MType */;
val* var85 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var86 /* : RuntimeVariable */;
val* var_arg /* var arg: RuntimeVariable */;
val* var87 /* : nullable Object */;
long var88 /* : Int */;
long var89 /* : Int */;
var_mpropdef = p0;
var_map = p1;
var_recv = p2;
var_args = p3;
{
{ /* Inline model$MMethodDef$new_msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var4 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_mpropdef:MMethodDef> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (var2!=NULL) {
var1 = var2;
} else {
{
{ /* Inline model$MMethodDef$msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var7 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1299);
fatal_exit(1);
}
var1 = var5;
}
var_msignature = var1;
var8 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___core__kernel__Object__init(var8); /* Direct call array$Array$init on <var8:Array[RuntimeVariable]>*/
}
var_res = var8;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_recv); /* Direct call array$Array$add on <var_res:Array[RuntimeVariable]>*/
}
{
var9 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel$Int$== (var9,0l) on <var9:Int> */
var12 = var9 == 0l;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var = var_res;
goto RET_LABEL;
} else {
}
if (var_map == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_map,((val*)NULL)) on <var_map:nullable SignatureMap> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_map,var_other) on <var_map:nullable SignatureMap(SignatureMap)> */
var18 = var_map == var_other;
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
{
var19 = ((long(*)(val* self))((((long)var_args&3)?class_info[((long)var_args&3)]:var_args->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_args); /* length on <var_args:SequenceRead[AExpr]>*/
}
{
var20 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel$Int$== (var19,var20) on <var19:Int> */
var23 = var19 == var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (unlikely(!var21)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1306);
fatal_exit(1);
}
var_ = var_args;
{
var24 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[AExpr]>*/
}
var_25 = var24;
for(;;) {
{
var26 = ((short int(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_25); /* is_ok on <var_25:IndexedIterator[AExpr]>*/
}
if (var26){
} else {
goto BREAK_label;
}
{
var27 = ((val*(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_25); /* item on <var_25:IndexedIterator[AExpr]>*/
}
var_ne = var27;
{
var28 = nitc___nitc__AbstractCompilerVisitor___expr(self, var_ne, ((val*)NULL));
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var28); /* Direct call array$Array$add on <var_res:Array[RuntimeVariable]>*/
}
{
((void(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_25); /* next on <var_25:IndexedIterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_25); /* finish on <var_25:IndexedIterator[AExpr]>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
var29 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
var30 = ((long(*)(val* self))((((long)var_args&3)?class_info[((long)var_args&3)]:var_args->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_args); /* length on <var_args:SequenceRead[AExpr]>*/
}
{
core___core__Array___with_capacity(var29, var30); /* Direct call array$Array$with_capacity on <var29:Array[RuntimeVariable]>*/
}
var_exprs = var29;
var_31 = var_args;
{
var32 = ((val*(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_31); /* iterator on <var_31:SequenceRead[AExpr]>*/
}
var_33 = var32;
for(;;) {
{
var34 = ((short int(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_33); /* is_ok on <var_33:IndexedIterator[AExpr]>*/
}
if (var34){
} else {
goto BREAK_label35;
}
{
var36 = ((val*(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_33); /* item on <var_33:IndexedIterator[AExpr]>*/
}
var_ne37 = var36;
{
var38 = nitc___nitc__AbstractCompilerVisitor___expr(self, var_ne37, ((val*)NULL));
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_exprs, var38); /* Direct call array$Array$add on <var_exprs:Array[RuntimeVariable]>*/
}
{
((void(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_33); /* next on <var_33:IndexedIterator[AExpr]>*/
}
}
BREAK_label35: (void)0;
{
((void(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_33); /* finish on <var_33:IndexedIterator[AExpr]>*/
}
var_i = 0l;
{
var39 = nitc___nitc__MSignature___arity(var_msignature);
}
var_40 = var39;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_40) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_40:Int> isa OTHER */
/* <var_40:Int> isa OTHER */
var43 = 1; /* easy <var_40:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var44 = var_i < var_40;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
} else {
goto BREAK_label45;
}
{
{ /* Inline model$MSignature$mparameters (var_msignature) on <var_msignature:MSignature> */
var48 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var48 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var46, var_i);
}
var_param = var49;
{
{ /* Inline typing$SignatureMap$map (var_map) on <var_map:nullable SignatureMap(SignatureMap)> */
var52 = var_map->attrs[COLOR_nitc__typing__SignatureMap___map].val; /* _map on <var_map:nullable SignatureMap(SignatureMap)> */
if (unlikely(var52 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 632);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var54 = (val*)(var_i<<2|1);
var53 = core___core__MapRead___get_or_null(var50, var54);
}
var_j = var53;
if (var_j == NULL) {
var55 = 1; /* is null */
} else {
var55 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Int$== (var_j,((val*)NULL)) on <var_j:nullable Int> */
var58 = 0; /* incompatible types Int vs. null; cannot be NULL */
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var55 = var56;
}
if (var55){
{
var59 = nitc___nitc__AbstractCompilerVisitor___null_instance(self);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var59); /* Direct call array$Array$add on <var_res:Array[RuntimeVariable]>*/
}
goto BREAK_label60;
} else {
}
{
{ /* Inline model$MParameter$is_vararg (var_param) on <var_param:MParameter> */
var64 = var_param->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_param:MParameter> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_65 = var62;
if (var62){
{
var66 = ((val*(*)(val* self, long p0))((((long)var_args&3)?class_info[((long)var_args&3)]:var_args->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_args, var_i); /* [] on <var_args:SequenceRead[AExpr]>*/
}
{
{ /* Inline typing$AExpr$vararg_decl (var66) on <var66:nullable Object(AExpr)> */
var69 = var66->attrs[COLOR_nitc__typing__AExpr___vararg_decl].l; /* _vararg_decl on <var66:nullable Object(AExpr)> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var67,0l) on <var67:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var72 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var76 = var67 > 0l;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var61 = var70;
} else {
var61 = var_65;
}
if (var61){
{
var77 = ((val*(*)(val* self, long p0))((((long)var_args&3)?class_info[((long)var_args&3)]:var_args->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_args, var_i); /* [] on <var_args:SequenceRead[AExpr]>*/
}
{
{ /* Inline typing$AExpr$vararg_decl (var77) on <var77:nullable Object(AExpr)> */
var80 = var77->attrs[COLOR_nitc__typing__AExpr___vararg_decl].l; /* _vararg_decl on <var77:nullable Object(AExpr)> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var82 = (long)(var_j)>>2;
var81 = core___core__AbstractArrayRead___sub(var_exprs, var82, var78);
}
var_vararg = var81;
{
{ /* Inline model$MParameter$mtype (var_param) on <var_param:MParameter> */
var85 = var_param->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_param:MParameter> */
if (unlikely(var85 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
var_elttype = var83;
{
var86 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__vararg_instance(self, var_mpropdef, var_recv, var_vararg, var_elttype);
}
var_arg = var86;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_arg); /* Direct call array$Array$add on <var_res:Array[RuntimeVariable]>*/
}
goto BREAK_label60;
} else {
}
{
var88 = (long)(var_j)>>2;
var87 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_exprs, var88);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var87); /* Direct call array$Array$add on <var_res:Array[RuntimeVariable]>*/
}
BREAK_label60: (void)0;
{
var89 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var89;
}
BREAK_label45: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$anchor for (self: AbstractCompilerVisitor, MType): MType */
val* nitc___nitc__AbstractCompilerVisitor___anchor(val* self, val* p0) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : AbstractCompiler */;
val* var5 /* : AbstractCompiler */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var9 /* : nullable StaticFrame */;
val* var11 /* : nullable StaticFrame */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : MType */;
var_mtype = p0;
{
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var2 = !var1;
if (var2){
var = var_mtype;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var5 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var3) on <var3:AbstractCompiler> */
var8 = var3->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var3:AbstractCompiler> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:AbstractCompilerVisitor> */
var11 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (var9 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1346);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$receiver (var9) on <var9:nullable StaticFrame> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2031);
fatal_exit(1);
}
var14 = var9->attrs[COLOR_nitc__abstract_compiler__StaticFrame___receiver].val; /* _receiver on <var9:nullable StaticFrame> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2031);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_mtype, var6, var12); /* anchor_to on <var_mtype:MType>*/
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$resolve_for for (self: AbstractCompilerVisitor, MType, RuntimeVariable): MType */
val* nitc___nitc__AbstractCompilerVisitor___resolve_for(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_recv /* var recv: RuntimeVariable */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var5 /* : MType */;
val* var6 /* : nullable StaticFrame */;
val* var8 /* : nullable StaticFrame */;
val* var9 /* : MClassType */;
val* var11 /* : MClassType */;
val* var12 /* : AbstractCompiler */;
val* var14 /* : AbstractCompiler */;
val* var15 /* : MModule */;
val* var17 /* : MModule */;
val* var18 /* : MType */;
var_mtype = p0;
var_recv = p1;
{
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var2 = !var1;
if (var2){
var = var_mtype;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var5 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:AbstractCompilerVisitor> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1352);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$receiver (var6) on <var6:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2031);
fatal_exit(1);
}
var11 = var6->attrs[COLOR_nitc__abstract_compiler__StaticFrame___receiver].val; /* _receiver on <var6:nullable StaticFrame> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2031);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var14 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var12) on <var12:AbstractCompiler> */
var17 = var12->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var12:AbstractCompiler> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_mtype, var3, var9, var15, 1); /* resolve_for on <var_mtype:MType>*/
}
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$autoadapt for (self: AbstractCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___autoadapt(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
val* var2 /* : MType */;
val* var4 /* : MType */;
val* var_valmtype /* var valmtype: MType */;
val* var5 /* : AbstractCompiler */;
val* var7 /* : AbstractCompiler */;
val* var8 /* : MModule */;
val* var10 /* : MModule */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var14 /* : MType */;
val* var16 /* : MType */;
val* var17 /* : AbstractCompiler */;
val* var19 /* : AbstractCompiler */;
val* var20 /* : MModule */;
val* var22 /* : MModule */;
short int var23 /* : Bool */;
val* var24 /* : MType */;
val* var26 /* : MType */;
val* var27 /* : RuntimeVariable */;
val* var28 /* : String */;
val* var30 /* : String */;
val* var31 /* : MType */;
val* var33 /* : MType */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
var_mtype = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value) on <var_value:RuntimeVariable> */
var4 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_valmtype = var2;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var7 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var5) on <var5:AbstractCompiler> */
var10 = var5->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var5:AbstractCompiler> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc___nitc__MType___is_subtype(var_valmtype, var8, ((val*)NULL), var_mtype);
}
if (var11){
var = var_value;
goto RET_LABEL;
} else {
}
/* <var_valmtype:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var_valmtype->type->table_size) {
var13 = 0;
} else {
var13 = var_valmtype->type->type_table[cltype] == idtype;
}
var_ = var13;
if (var13){
{
{ /* Inline model$MProxyType$mtype (var_valmtype) on <var_valmtype:MType(MNullableType)> */
var16 = var_valmtype->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_valmtype:MType(MNullableType)> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var19 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var17) on <var17:AbstractCompiler> */
var22 = var17->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var17:AbstractCompiler> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nitc___nitc__MType___is_subtype(var14, var20, ((val*)NULL), var_mtype);
}
var12 = var23;
} else {
var12 = var_;
}
if (var12){
{
{ /* Inline model$MProxyType$mtype (var_valmtype) on <var_valmtype:MType(MNullableType)> */
var26 = var_valmtype->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_valmtype:MType(MNullableType)> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_mtype = var24;
} else {
}
var27 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
{ /* Inline abstract_compiler$RuntimeVariable$name (var_value) on <var_value:RuntimeVariable> */
var30 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___name].val; /* _name on <var_value:RuntimeVariable> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1980);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_value) on <var_value:RuntimeVariable> */
var33 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var27, var28); /* name= on <var27:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var27, var31); /* mtype= on <var27:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var27, var_mtype); /* mcasttype= on <var27:RuntimeVariable>*/
}
{
((void(*)(val* self))(var27->class->vft[COLOR_core__kernel__Object__init]))(var27); /* init on <var27:RuntimeVariable>*/
}
var_res = var27;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$monomorphic_send for (self: AbstractCompilerVisitor, MMethod, MType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___monomorphic_send(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethod */;
val* var_t /* var t: MType */;
val* var_args /* var args: Array[RuntimeVariable] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AbstractCompiler */;
val* var4 /* : AbstractCompiler */;
val* var5 /* : MModule */;
val* var7 /* : MModule */;
val* var8 /* : MPropDef */;
val* var_propdef /* var propdef: MMethodDef */;
val* var9 /* : nullable RuntimeVariable */;
var_m = p0;
var_t = p1;
var_args = p2;
/* <var_t:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_t->type->table_size) {
var1 = 0;
} else {
var1 = var_t->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1419);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__MProperty___lookup_first_definition(var_m, var5, var_t);
}
var_propdef = var8;
{
var9 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call(self, var_propdef, var_t, var_args);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$monomorphic_super_send for (self: AbstractCompilerVisitor, MMethodDef, MType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___monomorphic_super_send(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethodDef */;
val* var_t /* var t: MType */;
val* var_args /* var args: Array[RuntimeVariable] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AbstractCompiler */;
val* var4 /* : AbstractCompiler */;
val* var5 /* : MModule */;
val* var7 /* : MModule */;
val* var8 /* : MPropDef */;
val* var9 /* : nullable RuntimeVariable */;
var_m = p0;
var_t = p1;
var_args = p2;
/* <var_t:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_t->type->table_size) {
var1 = 0;
} else {
var1 = var_t->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1427);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__MPropDef___lookup_next_definition(var_m, var5, var_t);
}
var_m = var8;
{
var9 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__call(self, var_m, var_t, var_args);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$maybenull for (self: AbstractCompilerVisitor, RuntimeVariable): Bool */
short int nitc___nitc__AbstractCompilerVisitor___maybenull(val* self, val* p0) {
short int var /* : Bool */;
val* var_value /* var value: RuntimeVariable */;
short int var1 /* : Bool */;
val* var2 /* : MType */;
val* var4 /* : MType */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var6 /* : MType */;
val* var8 /* : MType */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
var_value = p0;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value) on <var_value:RuntimeVariable> */
var4 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
/* <var2:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var2->type->table_size) {
var5 = 0;
} else {
var5 = var2->type->type_table[cltype] == idtype;
}
var_ = var5;
if (var5){
var1 = var_;
} else {
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (var_value) on <var_value:RuntimeVariable> */
var8 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
/* <var6:MType> isa MNullType */
cltype10 = type_nitc__MNullType.color;
idtype11 = type_nitc__MNullType.id;
if(cltype10 >= var6->type->table_size) {
var9 = 0;
} else {
var9 = var6->type->type_table[cltype10] == idtype11;
}
var1 = var9;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$check_recv_notnull for (self: AbstractCompilerVisitor, RuntimeVariable) */
void nitc___nitc__AbstractCompilerVisitor___check_recv_notnull(val* self, val* p0) {
val* var_recv /* var recv: RuntimeVariable */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : ModelBuilder */;
val* var5 /* : ModelBuilder */;
val* var6 /* : ToolContext */;
val* var8 /* : ToolContext */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : nullable Object */;
val* var14 /* : nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : NativeArray[String] */;
static val* varonce;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Bool */;
val* var33 /* : nullable Bool */;
val* var34 /* : String */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : CString */;
val* var47 /* : String */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Int */;
val* var50 /* : nullable Bool */;
val* var51 /* : nullable Bool */;
var_recv = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var) on <var:AbstractCompiler> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var3) on <var3:ModelBuilder> */
var8 = var3->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var3:ModelBuilder> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_null (var6) on <var6:ToolContext> */
var11 = var6->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <var6:ToolContext> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 56);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline opts$Option$value (var9) on <var9:OptionBool> */
var14 = var9->attrs[COLOR_opts__Option___value].val; /* _value on <var9:OptionBool> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = (short int)((long)(var12)>>2);
if (var15){
goto RET_LABEL;
} else {
}
{
var16 = nitc___nitc__AbstractCompilerVisitor___maybenull(self, var_recv);
}
if (var16){
if (unlikely(varonce==NULL)) {
var17 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "if (unlikely(";
var22 = (val*)(13l<<2|1);
var23 = (val*)(13l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var17)->values[0]=var19;
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = " == NULL)) {";
var30 = (val*)(12l<<2|1);
var31 = (val*)(12l<<2|1);
var32 = (val*)((long)(0)<<2|3);
var33 = (val*)((long)(0)<<2|3);
var29 = core__flat___CString___to_s_unsafe(var28, var30, var31, var32, var33);
var27 = var29;
varonce26 = var27;
}
((struct instance_core__NativeArray*)var17)->values[2]=var27;
} else {
var17 = varonce;
varonce = NULL;
}
{
var34 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var17)->values[1]=var34;
{
var35 = ((val*(*)(val* self))(var17->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var17); /* native_to_s on <var17:NativeArray[String]>*/
}
varonce = var17;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var35); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "Receiver is null";
var40 = (val*)(16l<<2|1);
var41 = (val*)(16l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(self, var37); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "}";
var48 = (val*)(1l<<2|1);
var49 = (val*)(1l<<2|1);
var50 = (val*)((long)(0)<<2|3);
var51 = (val*)((long)(0)<<2|3);
var47 = core__flat___CString___to_s_unsafe(var46, var48, var49, var50, var51);
var45 = var47;
varonce44 = var45;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var45); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$names for (self: AbstractCompilerVisitor): HashSet[String] */
val* nitc___nitc__AbstractCompilerVisitor___names(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1465);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$last for (self: AbstractCompilerVisitor): Int */
long nitc___nitc__AbstractCompilerVisitor___last(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___last].l; /* _last on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$last= for (self: AbstractCompilerVisitor, Int) */
void nitc___nitc__AbstractCompilerVisitor___last_61d(val* self, long p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___last].l = p0; /* _last on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$get_name for (self: AbstractCompilerVisitor, String): String */
val* nitc___nitc__AbstractCompilerVisitor___get_name(val* self, val* p0) {
val* var /* : String */;
val* var_s /* var s: String */;
val* var1 /* : HashSet[String] */;
val* var3 /* : HashSet[String] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : HashSet[String] */;
val* var8 /* : HashSet[String] */;
long var9 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var15 /* : Int */;
long var_i /* var i: Int */;
val* var16 /* : String */;
val* var17 /* : Text */;
val* var_s2 /* var s2: String */;
val* var18 /* : HashSet[String] */;
val* var20 /* : HashSet[String] */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var24 /* : HashSet[String] */;
val* var26 /* : HashSet[String] */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
var_s = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$names (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1465);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashSet___core__abstract_collection__Collection__has(var1, var_s);
}
var5 = !var4;
if (var5){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$names (self) on <self:AbstractCompilerVisitor> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1465);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var6, var_s); /* Direct call hash_collection$HashSet$add on <var6:HashSet[String]>*/
}
var = var_s;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$last (self) on <self:AbstractCompilerVisitor> */
var11 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___last].l; /* _last on <self:AbstractCompilerVisitor> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var9,1l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var15 = var9 + 1l;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_i = var12;
for(;;) {
{
var16 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
}
{
var17 = ((val*(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Text___43d]))(var_s, var16); /* + on <var_s:String>*/
}
var_s2 = var17;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$names (self) on <self:AbstractCompilerVisitor> */
var20 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1465);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = core___core__HashSet___core__abstract_collection__Collection__has(var18, var_s2);
}
var22 = !var21;
if (var22){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$last= (self,var_i) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___last].l = var_i; /* _last on <self:AbstractCompilerVisitor> */
RET_LABEL23:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$names (self) on <self:AbstractCompilerVisitor> */
var26 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1465);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var24, var_s2); /* Direct call hash_collection$HashSet$add on <var24:HashSet[String]>*/
}
var = var_s2;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var29 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var33 = var_i + 1l;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_i = var27;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$escapemark_name for (self: AbstractCompilerVisitor, nullable EscapeMark): String */
val* nitc___nitc__AbstractCompilerVisitor___escapemark_name(val* self, val* p0) {
val* var /* : String */;
val* var_e /* var e: nullable EscapeMark */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable StaticFrame */;
val* var8 /* : nullable StaticFrame */;
val* var9 /* : HashMap[EscapeMark, String] */;
val* var11 /* : HashMap[EscapeMark, String] */;
short int var12 /* : Bool */;
val* var13 /* : nullable StaticFrame */;
val* var15 /* : nullable StaticFrame */;
val* var16 /* : HashMap[EscapeMark, String] */;
val* var18 /* : HashMap[EscapeMark, String] */;
val* var19 /* : nullable Object */;
val* var20 /* : nullable String */;
val* var22 /* : nullable String */;
val* var_name /* var name: nullable String */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
val* var32 /* : String */;
val* var33 /* : nullable StaticFrame */;
val* var35 /* : nullable StaticFrame */;
val* var36 /* : HashMap[EscapeMark, String] */;
val* var38 /* : HashMap[EscapeMark, String] */;
var_e = p0;
if (var_e == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_e,((val*)NULL)) on <var_e:nullable EscapeMark> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_e->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_e, var_other); /* == on <var_e:nullable EscapeMark(EscapeMark)>*/
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1490);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:AbstractCompilerVisitor> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1491);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$escapemark_names (var6) on <var6:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2043);
fatal_exit(1);
}
var11 = var6->attrs[COLOR_nitc__abstract_compiler__StaticFrame___escapemark_names].val; /* _escapemark_names on <var6:nullable StaticFrame> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2043);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var9, var_e);
}
if (var12){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:AbstractCompilerVisitor> */
var15 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1491);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$escapemark_names (var13) on <var13:nullable StaticFrame> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2043);
fatal_exit(1);
}
var18 = var13->attrs[COLOR_nitc__abstract_compiler__StaticFrame___escapemark_names].val; /* _escapemark_names on <var13:nullable StaticFrame> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2043);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var16, var_e);
}
var = var19;
goto RET_LABEL;
} else {
}
{
{ /* Inline scope$EscapeMark$name (var_e) on <var_e:nullable EscapeMark(EscapeMark)> */
var22 = var_e->attrs[COLOR_nitc__scope__EscapeMark___name].val; /* _name on <var_e:nullable EscapeMark(EscapeMark)> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_name = var20;
if (var_name == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
var24 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, ((val*)NULL)); /* == on <var_name:nullable String>*/
var23 = var24;
}
if (var23){
if (likely(varonce!=NULL)) {
var25 = varonce;
} else {
var26 = "label";
var28 = (val*)(5l<<2|1);
var29 = (val*)(5l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce = var25;
}
var_name = var25;
} else {
}
{
var32 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var_name);
}
var_name = var32;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:AbstractCompilerVisitor> */
var35 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (var33 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1495);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$escapemark_names (var33) on <var33:nullable StaticFrame> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2043);
fatal_exit(1);
}
var38 = var33->attrs[COLOR_nitc__abstract_compiler__StaticFrame___escapemark_names].val; /* _escapemark_names on <var33:nullable StaticFrame> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2043);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var36, var_e, var_name); /* Direct call hash_collection$HashMap$[]= on <var36:HashMap[EscapeMark, String]>*/
}
var = var_name;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$add_escape_label for (self: AbstractCompilerVisitor, nullable EscapeMark) */
void nitc___nitc__AbstractCompilerVisitor___add_escape_label(val* self, val* p0) {
val* var_e /* var e: nullable EscapeMark */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[AEscapeExpr] */;
val* var8 /* : Array[AEscapeExpr] */;
short int var9 /* : Bool */;
val* var10 /* : NativeArray[String] */;
static val* varonce;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Bool */;
val* var18 /* : nullable Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable Bool */;
val* var27 /* : String */;
val* var28 /* : String */;
var_e = p0;
if (var_e == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_e,((val*)NULL)) on <var_e:nullable EscapeMark> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_e,var_other) on <var_e:nullable EscapeMark(EscapeMark)> */
var5 = var_e == var_other;
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
{ /* Inline scope$EscapeMark$escapes (var_e) on <var_e:nullable EscapeMark(EscapeMark)> */
var8 = var_e->attrs[COLOR_nitc__scope__EscapeMark___escapes].val; /* _escapes on <var_e:nullable EscapeMark(EscapeMark)> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 59);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var6);
}
if (var9){
goto RET_LABEL;
} else {
}
if (unlikely(varonce==NULL)) {
var10 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "BREAK_";
var15 = (val*)(6l<<2|1);
var16 = (val*)(6l<<2|1);
var17 = (val*)((long)(0)<<2|3);
var18 = (val*)((long)(0)<<2|3);
var14 = core__flat___CString___to_s_unsafe(var13, var15, var16, var17, var18);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = ": (void)0;";
var23 = (val*)(10l<<2|1);
var24 = (val*)(10l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var10)->values[2]=var20;
} else {
var10 = varonce;
varonce = NULL;
}
{
var27 = nitc___nitc__AbstractCompilerVisitor___escapemark_name(self, var_e);
}
((struct instance_core__NativeArray*)var10)->values[1]=var27;
{
var28 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var28); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$variables for (self: AbstractCompilerVisitor): HashMap[Variable, RuntimeVariable] */
val* nitc___nitc__AbstractCompilerVisitor___variables(val* self) {
val* var /* : HashMap[Variable, RuntimeVariable] */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1513);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$variable for (self: AbstractCompilerVisitor, Variable): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___variable(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_variable /* var variable: Variable */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
val* var3 /* : HashMap[Variable, RuntimeVariable] */;
short int var4 /* : Bool */;
val* var5 /* : HashMap[Variable, RuntimeVariable] */;
val* var7 /* : HashMap[Variable, RuntimeVariable] */;
val* var8 /* : nullable Object */;
val* var9 /* : NativeArray[String] */;
static val* varonce;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
val* var18 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var_name /* var name: String */;
val* var23 /* : nullable MType */;
val* var25 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var26 /* : MType */;
val* var27 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Bool */;
val* var37 /* : nullable Bool */;
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
val* var65 /* : String */;
val* var66 /* : HashMap[Variable, RuntimeVariable] */;
val* var68 /* : HashMap[Variable, RuntimeVariable] */;
var_variable = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$variables (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1513);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var1, var_variable);
}
if (var4){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$variables (self) on <self:AbstractCompilerVisitor> */
var7 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1513);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var5, var_variable);
}
var = var8;
goto RET_LABEL;
} else {
if (unlikely(varonce==NULL)) {
var9 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "var_";
var14 = (val*)(4l<<2|1);
var15 = (val*)(4l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
} else {
var9 = varonce;
varonce = NULL;
}
{
{ /* Inline scope$Variable$name (var_variable) on <var_variable:Variable> */
var20 = var_variable->attrs[COLOR_nitc__scope__Variable___name].val; /* _name on <var_variable:Variable> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 36);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
((struct instance_core__NativeArray*)var9)->values[1]=var18;
{
var21 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
var22 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var21);
}
var_name = var22;
{
{ /* Inline typing$Variable$declared_type (var_variable) on <var_variable:Variable> */
var25 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1522);
fatal_exit(1);
}
var_mtype = var23;
{
var26 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var26;
var27 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var27, var_name); /* name= on <var27:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var27, var_mtype); /* mtype= on <var27:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var27, var_mtype); /* mcasttype= on <var27:RuntimeVariable>*/
}
{
((void(*)(val* self))(var27->class->vft[COLOR_core__kernel__Object__init]))(var27); /* init on <var27:RuntimeVariable>*/
}
var_res = var27;
if (unlikely(varonce28==NULL)) {
var29 = NEW_core__NativeArray((int)8l, &type_core__NativeArray__core__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = " ";
var34 = (val*)(1l<<2|1);
var35 = (val*)(1l<<2|1);
var36 = (val*)((long)(0)<<2|3);
var37 = (val*)((long)(0)<<2|3);
var33 = core__flat___CString___to_s_unsafe(var32, var34, var35, var36, var37);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var29)->values[1]=var31;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " /* var ";
var42 = (val*)(8l<<2|1);
var43 = (val*)(8l<<2|1);
var44 = (val*)((long)(0)<<2|3);
var45 = (val*)((long)(0)<<2|3);
var41 = core__flat___CString___to_s_unsafe(var40, var42, var43, var44, var45);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var29)->values[3]=var39;
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
((struct instance_core__NativeArray*)var29)->values[5]=var47;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = " */;";
var58 = (val*)(4l<<2|1);
var59 = (val*)(4l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var29)->values[7]=var55;
} else {
var29 = varonce28;
varonce28 = NULL;
}
{
var62 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var29)->values[0]=var62;
((struct instance_core__NativeArray*)var29)->values[2]=var_name;
{
var63 = ((val*(*)(val* self))(var_variable->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_variable); /* to_s on <var_variable:Variable>*/
}
((struct instance_core__NativeArray*)var29)->values[4]=var63;
{
var64 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var29)->values[6]=var64;
{
var65 = ((val*(*)(val* self))(var29->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var65); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$variables (self) on <self:AbstractCompilerVisitor> */
var68 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var68 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1513);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var66, var_variable, var_res); /* Direct call hash_collection$HashMap$[]= on <var66:HashMap[Variable, RuntimeVariable]>*/
}
var = var_res;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$new_var for (self: AbstractCompilerVisitor, MType): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___new_var(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
val* var9 /* : String */;
val* var_name /* var name: String */;
val* var10 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var12 /* : NativeArray[String] */;
static val* varonce11;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Bool */;
val* var28 /* : nullable Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Bool */;
val* var36 /* : nullable Bool */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var39 /* : String */;
var_mtype = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "var";
var5 = (val*)(3l<<2|1);
var6 = (val*)(3l<<2|1);
var7 = (val*)((long)(0)<<2|3);
var8 = (val*)((long)(0)<<2|3);
var4 = core__flat___CString___to_s_unsafe(var3, var5, var6, var7, var8);
var2 = var4;
varonce = var2;
}
{
var9 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var2);
}
var_name = var9;
var10 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var10, var_name); /* name= on <var10:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var10, var_mtype); /* mtype= on <var10:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var10, var_mtype); /* mcasttype= on <var10:RuntimeVariable>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:RuntimeVariable>*/
}
var_res = var10;
if (unlikely(varonce11==NULL)) {
var12 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = " ";
var17 = (val*)(1l<<2|1);
var18 = (val*)(1l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var12)->values[1]=var14;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = " /* : ";
var25 = (val*)(6l<<2|1);
var26 = (val*)(6l<<2|1);
var27 = (val*)((long)(0)<<2|3);
var28 = (val*)((long)(0)<<2|3);
var24 = core__flat___CString___to_s_unsafe(var23, var25, var26, var27, var28);
var22 = var24;
varonce21 = var22;
}
((struct instance_core__NativeArray*)var12)->values[3]=var22;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = " */;";
var33 = (val*)(4l<<2|1);
var34 = (val*)(4l<<2|1);
var35 = (val*)((long)(0)<<2|3);
var36 = (val*)((long)(0)<<2|3);
var32 = core__flat___CString___to_s_unsafe(var31, var33, var34, var35, var36);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var12)->values[5]=var30;
} else {
var12 = varonce11;
varonce11 = NULL;
}
{
var37 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var12)->values[0]=var37;
((struct instance_core__NativeArray*)var12)->values[2]=var_name;
{
var38 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var12)->values[4]=var38;
{
var39 = ((val*(*)(val* self))(var12->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce11 = var12;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var39); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$new_var_extern for (self: AbstractCompilerVisitor, MType): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___new_var_extern(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
val* var9 /* : String */;
val* var_name /* var name: String */;
val* var10 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var12 /* : NativeArray[String] */;
static val* varonce11;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Bool */;
val* var28 /* : nullable Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Bool */;
val* var36 /* : nullable Bool */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var39 /* : String */;
var_mtype = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "var";
var5 = (val*)(3l<<2|1);
var6 = (val*)(3l<<2|1);
var7 = (val*)((long)(0)<<2|3);
var8 = (val*)((long)(0)<<2|3);
var4 = core__flat___CString___to_s_unsafe(var3, var5, var6, var7, var8);
var2 = var4;
varonce = var2;
}
{
var9 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var2);
}
var_name = var9;
var10 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var10, var_name); /* name= on <var10:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var10, var_mtype); /* mtype= on <var10:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var10, var_mtype); /* mcasttype= on <var10:RuntimeVariable>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:RuntimeVariable>*/
}
var_res = var10;
if (unlikely(varonce11==NULL)) {
var12 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = " ";
var17 = (val*)(1l<<2|1);
var18 = (val*)(1l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var12)->values[1]=var14;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = " /* : ";
var25 = (val*)(6l<<2|1);
var26 = (val*)(6l<<2|1);
var27 = (val*)((long)(0)<<2|3);
var28 = (val*)((long)(0)<<2|3);
var24 = core__flat___CString___to_s_unsafe(var23, var25, var26, var27, var28);
var22 = var24;
varonce21 = var22;
}
((struct instance_core__NativeArray*)var12)->values[3]=var22;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = " for extern */;";
var33 = (val*)(15l<<2|1);
var34 = (val*)(15l<<2|1);
var35 = (val*)((long)(0)<<2|3);
var36 = (val*)((long)(0)<<2|3);
var32 = core__flat___CString___to_s_unsafe(var31, var33, var34, var35, var36);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var12)->values[5]=var30;
} else {
var12 = varonce11;
varonce11 = NULL;
}
{
var37 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype_extern]))(var_mtype); /* ctype_extern on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var12)->values[0]=var37;
((struct instance_core__NativeArray*)var12)->values[2]=var_name;
{
var38 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var12)->values[4]=var38;
{
var39 = ((val*(*)(val* self))(var12->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce11 = var12;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var39); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$new_named_var for (self: AbstractCompilerVisitor, MType, String): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___new_named_var(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
val* var1 /* : MType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : NativeArray[String] */;
static val* varonce;
static val* varonce4;
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
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Bool */;
val* var27 /* : nullable Bool */;
val* var28 /* : String */;
val* var29 /* : String */;
val* var30 /* : String */;
var_mtype = p0;
var_name = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
var2 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var2, var_name); /* name= on <var2:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var2, var_mtype); /* mtype= on <var2:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var2, var_mtype); /* mcasttype= on <var2:RuntimeVariable>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:RuntimeVariable>*/
}
var_res = var2;
if (unlikely(varonce==NULL)) {
var3 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = " ";
var8 = (val*)(1l<<2|1);
var9 = (val*)(1l<<2|1);
var10 = (val*)((long)(0)<<2|3);
var11 = (val*)((long)(0)<<2|3);
var7 = core__flat___CString___to_s_unsafe(var6, var8, var9, var10, var11);
var5 = var7;
varonce4 = var5;
}
((struct instance_core__NativeArray*)var3)->values[1]=var5;
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = " /* : ";
var16 = (val*)(6l<<2|1);
var17 = (val*)(6l<<2|1);
var18 = (val*)((long)(0)<<2|3);
var19 = (val*)((long)(0)<<2|3);
var15 = core__flat___CString___to_s_unsafe(var14, var16, var17, var18, var19);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var3)->values[3]=var13;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = " */;";
var24 = (val*)(4l<<2|1);
var25 = (val*)(4l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var3)->values[5]=var21;
} else {
var3 = varonce;
varonce = NULL;
}
{
var28 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var3)->values[0]=var28;
((struct instance_core__NativeArray*)var3)->values[2]=var_name;
{
var29 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var3)->values[4]=var29;
{
var30 = ((val*(*)(val* self))(var3->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3); /* native_to_s on <var3:NativeArray[String]>*/
}
varonce = var3;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var30); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$assign for (self: AbstractCompilerVisitor, RuntimeVariable, RuntimeVariable) */
void nitc___nitc__AbstractCompilerVisitor___assign(val* self, val* p0, val* p1) {
val* var_left /* var left: RuntimeVariable */;
val* var_right /* var right: RuntimeVariable */;
val* var /* : MType */;
val* var2 /* : MType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : String */;
var_left = p0;
var_right = p1;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_left) on <var_left:RuntimeVariable> */
var2 = var_left->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_left:RuntimeVariable> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_right, var);
}
var_right = var3;
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = " = ";
var9 = (val*)(3l<<2|1);
var10 = (val*)(3l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[1]=var6;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = ";";
var17 = (val*)(1l<<2|1);
var18 = (val*)(1l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var4)->values[3]=var14;
} else {
var4 = varonce;
varonce = NULL;
}
{
var21 = ((val*(*)(val* self))(var_left->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_left); /* to_s on <var_left:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var4)->values[0]=var21;
{
var22 = ((val*(*)(val* self))(var_right->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_right); /* to_s on <var_right:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var4)->values[2]=var22;
{
var23 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var23); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$init_instance_or_extern for (self: AbstractCompilerVisitor, MClassType): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___init_instance_or_extern(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MClassType */;
val* var1 /* : String */;
val* var_ctype /* var ctype: String */;
val* var2 /* : MClass */;
val* var4 /* : MClass */;
val* var5 /* : String */;
val* var7 /* : String */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : RuntimeVariable */;
val* var_recv /* var recv: nullable Object */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Bool */;
val* var29 /* : nullable Bool */;
short int var30 /* : Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Bool */;
val* var38 /* : nullable Bool */;
val* var39 /* : RuntimeVariable */;
val* var41 /* : NativeArray[String] */;
static val* varonce40;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Bool */;
val* var57 /* : nullable Bool */;
val* var58 /* : String */;
val* var59 /* : RuntimeVariable */;
var_mtype = p0;
{
var1 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
var_ctype = var1;
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MClassType> */
var4 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline model$MClass$name (var2) on <var2:MClass> */
var7 = var2->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var2:MClass> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "NativeArray";
var11 = (val*)(11l<<2|1);
var12 = (val*)(11l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce = var8;
}
{
{ /* Inline kernel$Object$!= (var5,var8) on <var5:String> */
var_other = var8;
{
var17 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_core__kernel__Object___61d_61d]))(var5, var_other); /* == on <var5:String>*/
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (unlikely(!var15)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1580);
fatal_exit(1);
}
{
var19 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_mtype);
}
var20 = !var19;
if (var20){
{
var21 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__init_instance]))(self, var_mtype); /* init_instance on <self:AbstractCompilerVisitor>*/
}
var_recv = var21;
} else {
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "char*";
var26 = (val*)(5l<<2|1);
var27 = (val*)(5l<<2|1);
var28 = (val*)((long)(0)<<2|3);
var29 = (val*)((long)(0)<<2|3);
var25 = core__flat___CString___to_s_unsafe(var24, var26, var27, var28, var29);
var23 = var25;
varonce22 = var23;
}
{
var30 = ((short int(*)(val* self, val* p0))(var_ctype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ctype, var23); /* == on <var_ctype:String>*/
}
if (var30){
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "NULL/*special!*/";
var35 = (val*)(16l<<2|1);
var36 = (val*)(16l<<2|1);
var37 = (val*)((long)(0)<<2|3);
var38 = (val*)((long)(0)<<2|3);
var34 = core__flat___CString___to_s_unsafe(var33, var35, var36, var37, var38);
var32 = var34;
varonce31 = var32;
}
{
var39 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var32, var_mtype);
}
var_recv = var39;
} else {
if (unlikely(varonce40==NULL)) {
var41 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "(";
var46 = (val*)(1l<<2|1);
var47 = (val*)(1l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var41)->values[0]=var43;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = ")0/*special!*/";
var54 = (val*)(14l<<2|1);
var55 = (val*)(14l<<2|1);
var56 = (val*)((long)(0)<<2|3);
var57 = (val*)((long)(0)<<2|3);
var53 = core__flat___CString___to_s_unsafe(var52, var54, var55, var56, var57);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var41)->values[2]=var51;
} else {
var41 = varonce40;
varonce40 = NULL;
}
((struct instance_core__NativeArray*)var41)->values[1]=var_ctype;
{
var58 = ((val*(*)(val* self))(var41->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
{
var59 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var58, var_mtype);
}
var_recv = var59;
}
}
var = var_recv;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$set_finalizer for (self: AbstractCompilerVisitor, RuntimeVariable) */
void nitc___nitc__AbstractCompilerVisitor___set_finalizer(val* self, val* p0) {
val* var_recv /* var recv: RuntimeVariable */;
val* var /* : MType */;
val* var2 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var3 /* : AbstractCompiler */;
val* var5 /* : AbstractCompiler */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var9 /* : nullable MClassType */;
val* var_finalizable_type /* var finalizable_type: nullable MClassType */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var_19 /* var : Bool */;
val* var20 /* : AbstractCompiler */;
val* var22 /* : AbstractCompiler */;
val* var23 /* : MModule */;
val* var25 /* : MModule */;
short int var26 /* : Bool */;
val* var27 /* : NativeArray[String] */;
static val* varonce;
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
var_recv = p0;
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (var_recv) on <var_recv:RuntimeVariable> */
var2 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var5 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var3) on <var3:AbstractCompiler> */
var8 = var3->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var3:AbstractCompiler> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nitc__model___MModule___finalizable_type(var6);
}
var_finalizable_type = var9;
if (var_finalizable_type == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_finalizable_type,((val*)NULL)) on <var_finalizable_type:nullable MClassType> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_finalizable_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_finalizable_type, var_other); /* == on <var_finalizable_type:nullable MClassType(MClassType)>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
var_ = var12;
if (var12){
{
var17 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var18 = !var17;
var11 = var18;
} else {
var11 = var_;
}
var_19 = var11;
if (var11){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var22 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var20) on <var20:AbstractCompiler> */
var25 = var20->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var20:AbstractCompiler> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nitc___nitc__MType___is_subtype(var_mtype, var23, ((val*)NULL), var_finalizable_type);
}
var10 = var26;
} else {
var10 = var_19;
}
if (var10){
if (unlikely(varonce==NULL)) {
var27 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "gc_register_finalizer(";
var32 = (val*)(22l<<2|1);
var33 = (val*)(22l<<2|1);
var34 = (val*)((long)(0)<<2|3);
var35 = (val*)((long)(0)<<2|3);
var31 = core__flat___CString___to_s_unsafe(var30, var32, var33, var34, var35);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var27)->values[0]=var29;
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = ");";
var40 = (val*)(2l<<2|1);
var41 = (val*)(2l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var27)->values[2]=var37;
} else {
var27 = varonce;
varonce = NULL;
}
{
var44 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var27)->values[1]=var44;
{
var45 = ((val*(*)(val* self))(var27->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var27); /* native_to_s on <var27:NativeArray[String]>*/
}
varonce = var27;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var45); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$mmodule for (self: AbstractCompilerVisitor): MModule */
val* nitc___nitc__AbstractCompilerVisitor___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$int_instance for (self: AbstractCompilerVisitor, Int): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___int_instance(val* self, long p0) {
val* var /* : RuntimeVariable */;
long var_value /* var value: Int */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___int_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "l";
var9 = (val*)(1l<<2|1);
var10 = (val*)(1l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[1]=var6;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = core__flat___Int___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[0]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var14); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$byte_instance for (self: AbstractCompilerVisitor, Byte): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___byte_instance(val* self, unsigned char p0) {
val* var /* : RuntimeVariable */;
unsigned char var_value /* var value: Byte */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___byte_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "((unsigned char)";
var9 = (val*)(16l<<2|1);
var10 = (val*)(16l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = ")";
var17 = (val*)(1l<<2|1);
var18 = (val*)(1l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var4)->values[2]=var14;
} else {
var4 = varonce;
varonce = NULL;
}
{
var21 = core__abstract_text___Byte___Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var21;
{
var22 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var22); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$int8_instance for (self: AbstractCompilerVisitor, Int8): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___int8_instance(val* self, int8_t p0) {
val* var /* : RuntimeVariable */;
int8_t var_value /* var value: Int8 */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___int8_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "INT8_C(";
var9 = (val*)(7l<<2|1);
var10 = (val*)(7l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = ")";
var17 = (val*)(1l<<2|1);
var18 = (val*)(1l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var4)->values[2]=var14;
} else {
var4 = varonce;
varonce = NULL;
}
{
var21 = core__fixed_ints_text___Int8___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var21;
{
var22 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var22); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$int16_instance for (self: AbstractCompilerVisitor, Int16): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___int16_instance(val* self, int16_t p0) {
val* var /* : RuntimeVariable */;
int16_t var_value /* var value: Int16 */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___int16_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "INT16_C(";
var9 = (val*)(8l<<2|1);
var10 = (val*)(8l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = ")";
var17 = (val*)(1l<<2|1);
var18 = (val*)(1l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var4)->values[2]=var14;
} else {
var4 = varonce;
varonce = NULL;
}
{
var21 = core__fixed_ints_text___Int16___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var21;
{
var22 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var22); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$uint16_instance for (self: AbstractCompilerVisitor, UInt16): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___uint16_instance(val* self, uint16_t p0) {
val* var /* : RuntimeVariable */;
uint16_t var_value /* var value: UInt16 */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___uint16_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "UINT16_C(";
var9 = (val*)(9l<<2|1);
var10 = (val*)(9l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = ")";
var17 = (val*)(1l<<2|1);
var18 = (val*)(1l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var4)->values[2]=var14;
} else {
var4 = varonce;
varonce = NULL;
}
{
var21 = core__fixed_ints_text___UInt16___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var21;
{
var22 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var22); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$int32_instance for (self: AbstractCompilerVisitor, Int32): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___int32_instance(val* self, int32_t p0) {
val* var /* : RuntimeVariable */;
int32_t var_value /* var value: Int32 */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___int32_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "INT32_C(";
var9 = (val*)(8l<<2|1);
var10 = (val*)(8l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = ")";
var17 = (val*)(1l<<2|1);
var18 = (val*)(1l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var4)->values[2]=var14;
} else {
var4 = varonce;
varonce = NULL;
}
{
var21 = core__fixed_ints_text___Int32___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var21;
{
var22 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var22); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$uint32_instance for (self: AbstractCompilerVisitor, UInt32): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___uint32_instance(val* self, uint32_t p0) {
val* var /* : RuntimeVariable */;
uint32_t var_value /* var value: UInt32 */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___uint32_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "UINT32_C(";
var9 = (val*)(9l<<2|1);
var10 = (val*)(9l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = ")";
var17 = (val*)(1l<<2|1);
var18 = (val*)(1l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var4)->values[2]=var14;
} else {
var4 = varonce;
varonce = NULL;
}
{
var21 = core__fixed_ints_text___UInt32___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var21;
{
var22 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var22); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$char_instance for (self: AbstractCompilerVisitor, Char): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___char_instance(val* self, uint32_t p0) {
val* var /* : RuntimeVariable */;
uint32_t var_value /* var value: Char */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
long var3 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
val* var10 /* : RuntimeVariable */;
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
val* var28 /* : String */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var31 /* : RuntimeVariable */;
val* var33 /* : NativeArray[String] */;
static val* varonce32;
long var34 /* : Int */;
long var36 /* : Int */;
val* var37 /* : String */;
val* var38 /* : String */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___char_type(var1);
}
var_t = var2;
{
{ /* Inline kernel$Char$code_point (var_value) on <var_value:Char> */
var5 = (long)var_value;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel$Int$< (var3,128l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <128l:Int> isa OTHER */
/* <128l:Int> isa OTHER */
var8 = 1; /* easy <128l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var9 = var3 < 128l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var10 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var11 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "\'";
var16 = (val*)(1l<<2|1);
var17 = (val*)(1l<<2|1);
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
var22 = "\'";
var24 = (val*)(1l<<2|1);
var25 = (val*)(1l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var11)->values[2]=var21;
} else {
var11 = varonce;
varonce = NULL;
}
{
var28 = core__abstract_text___Char___Object__to_s(var_value);
}
{
var29 = ((val*(*)(val* self))(var28->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var28); /* escape_to_c on <var28:String>*/
}
((struct instance_core__NativeArray*)var11)->values[1]=var29;
{
var30 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var10, var30); /* name= on <var10:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var10, var_t); /* mtype= on <var10:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var10, var_t); /* mcasttype= on <var10:RuntimeVariable>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:RuntimeVariable>*/
}
var = var10;
goto RET_LABEL;
} else {
var31 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce32==NULL)) {
var33 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__core__String);
} else {
var33 = varonce32;
varonce32 = NULL;
}
{
{ /* Inline kernel$Char$code_point (var_value) on <var_value:Char> */
var36 = (long)var_value;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
var37 = core__flat___Int___core__abstract_text__Object__to_s(var34);
((struct instance_core__NativeArray*)var33)->values[0]=var37;
{
var38 = ((val*(*)(val* self))(var33->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce32 = var33;
{
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var31, var38); /* name= on <var31:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var31, var_t); /* mtype= on <var31:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var31->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var31, var_t); /* mcasttype= on <var31:RuntimeVariable>*/
}
{
((void(*)(val* self))(var31->class->vft[COLOR_core__kernel__Object__init]))(var31); /* init on <var31:RuntimeVariable>*/
}
var = var31;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$float_instance for (self: AbstractCompilerVisitor, String): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___float_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: String */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
val* var5 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___float_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__core__String);
} else {
var4 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var4)->values[0]=var_value;
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var5); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$bool_instance for (self: AbstractCompilerVisitor, Bool): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___bool_instance(val* self, short int p0) {
val* var /* : RuntimeVariable */;
short int var_value /* var value: Bool */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Bool */;
val* var16 /* : nullable Bool */;
val* var_s /* var s: String */;
val* var17 /* : RuntimeVariable */;
val* var18 /* : MClassType */;
val* var19 /* : MClassType */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
if (var_value){
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "1";
var5 = (val*)(1l<<2|1);
var6 = (val*)(1l<<2|1);
var7 = (val*)((long)(0)<<2|3);
var8 = (val*)((long)(0)<<2|3);
var4 = core__flat___CString___to_s_unsafe(var3, var5, var6, var7, var8);
var2 = var4;
varonce = var2;
}
var1 = var2;
} else {
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "0";
var13 = (val*)(1l<<2|1);
var14 = (val*)(1l<<2|1);
var15 = (val*)((long)(0)<<2|3);
var16 = (val*)((long)(0)<<2|3);
var12 = core__flat___CString___to_s_unsafe(var11, var13, var14, var15, var16);
var10 = var12;
varonce9 = var10;
}
var1 = var10;
}
var_s = var1;
var17 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
var18 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var19 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
((void(*)(val* self, val* p0))(var17->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var17, var_s); /* name= on <var17:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var17->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var17, var18); /* mtype= on <var17:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var17->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var17, var19); /* mcasttype= on <var17:RuntimeVariable>*/
}
{
((void(*)(val* self))(var17->class->vft[COLOR_core__kernel__Object__init]))(var17); /* init on <var17:RuntimeVariable>*/
}
var_res = var17;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$null_instance for (self: AbstractCompilerVisitor): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___null_instance(val* self) {
val* var /* : RuntimeVariable */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : Model */;
val* var9 /* : Model */;
val* var10 /* : MNullType */;
val* var12 /* : MNullType */;
val* var_t /* var t: MNullType */;
val* var13 /* : RuntimeVariable */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var_res /* var res: RuntimeVariable */;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline mmodule$MModule$model (var4) on <var4:MModule> */
var9 = var4->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var4:MModule> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model$Model$null_type (var7) on <var7:Model> */
var12 = var7->attrs[COLOR_nitc__model__Model___null_type].val; /* _null_type on <var7:Model> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _null_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 103);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_t = var10;
var13 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "((val*)NULL)";
var17 = (val*)(12l<<2|1);
var18 = (val*)(12l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce = var14;
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var13, var14); /* name= on <var13:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var13, var_t); /* mtype= on <var13:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var13, var_t); /* mcasttype= on <var13:RuntimeVariable>*/
}
{
((void(*)(val* self))(var13->class->vft[COLOR_core__kernel__Object__init]))(var13); /* init on <var13:RuntimeVariable>*/
}
var_res = var13;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$c_string_instance for (self: AbstractCompilerVisitor, CString, Int): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___c_string_instance(val* self, char* p0, long p1) {
val* var /* : RuntimeVariable */;
char* var_ns /* var ns: CString */;
long var_len /* var len: Int */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var_nat /* var nat: RuntimeVariable */;
static val* varoncenew;
static int varoncenew_guard;
val* var4 /* : Buffer */;
val* var5 /* : Buffer */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
val* var10 /* : Buffer */;
val* var_byte_esc /* var byte_esc: Buffer */;
long var_i /* var i: Int */;
long var_ /* var : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
val* var18 /* : NativeArray[String] */;
static val* varonce;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable Bool */;
unsigned char var27 /* : Byte */;
unsigned char var29 /* : Byte */;
val* var30 /* : String */;
val* var31 /* : Text */;
val* var32 /* : String */;
long var33 /* : Int */;
val* var35 /* : NativeArray[String] */;
static val* varonce34;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : CString */;
val* var47 /* : String */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Int */;
val* var50 /* : nullable Bool */;
val* var51 /* : nullable Bool */;
val* var52 /* : String */;
val* var53 /* : String */;
val* var54 /* : String */;
var_ns = p0;
var_len = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___c_string_type(var1);
}
var_mtype = var2;
{
var3 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_nat = var3;
if (likely(varoncenew_guard)) {
var4 = varoncenew;
} else {
var5 = NEW_core__Buffer(&type_core__Buffer);
var4 = var5;
varoncenew = var4;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$* (var_len,4l) on <var_len:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var8 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var9 = var_len * 4l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
var10 = core__flat___Buffer___with_cap(var4, var6);
}
var_byte_esc = var10;
var_i = 0l;
var_ = var_len;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var13 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var17 = var_i < var_;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
} else {
goto BREAK_label;
}
if (unlikely(varonce==NULL)) {
var18 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "\\x";
var23 = (val*)(2l<<2|1);
var24 = (val*)(2l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var18)->values[0]=var20;
} else {
var18 = varonce;
varonce = NULL;
}
{
{ /* Inline native$CString$[] (var_ns,var_i) on <var_ns:CString> */
var29 = (unsigned char)((int)var_ns[var_i]);
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
var30 = core__abstract_text___Byte___Object__to_s(var27);
}
{
var31 = ((val*(*)(val* self, long p0))(var30->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var30, 2l); /* substring_from on <var30:String>*/
}
((struct instance_core__NativeArray*)var18)->values[1]=var31;
{
var32 = ((val*(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce = var18;
{
((void(*)(val* self, val* p0))(var_byte_esc->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_byte_esc, var32); /* append on <var_byte_esc:Buffer>*/
}
{
var33 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var33;
}
BREAK_label: (void)0;
if (unlikely(varonce34==NULL)) {
var35 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = " = \"";
var40 = (val*)(4l<<2|1);
var41 = (val*)(4l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var35)->values[1]=var37;
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "\";";
var48 = (val*)(2l<<2|1);
var49 = (val*)(2l<<2|1);
var50 = (val*)((long)(0)<<2|3);
var51 = (val*)((long)(0)<<2|3);
var47 = core__flat___CString___to_s_unsafe(var46, var48, var49, var50, var51);
var45 = var47;
varonce44 = var45;
}
((struct instance_core__NativeArray*)var35)->values[3]=var45;
} else {
var35 = varonce34;
varonce34 = NULL;
}
{
var52 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_nat); /* to_s on <var_nat:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var35)->values[0]=var52;
{
var53 = ((val*(*)(val* self))(var_byte_esc->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_byte_esc); /* to_s on <var_byte_esc:Buffer>*/
}
((struct instance_core__NativeArray*)var35)->values[2]=var53;
{
var54 = ((val*(*)(val* self))(var35->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var35); /* native_to_s on <var35:NativeArray[String]>*/
}
varonce34 = var35;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var54); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
var = var_nat;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$string_instance for (self: AbstractCompilerVisitor, String): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___string_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_string /* var string: String */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : String */;
val* var_name /* var name: String */;
val* var12 /* : NativeArray[String] */;
static val* varonce11;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Bool */;
val* var28 /* : nullable Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Bool */;
val* var36 /* : nullable Bool */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var39 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var41 /* : NativeArray[String] */;
static val* varonce40;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Bool */;
val* var57 /* : nullable Bool */;
val* var58 /* : String */;
val* var60 /* : NativeArray[String] */;
static val* varonce59;
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
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : CString */;
val* var82 /* : String */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Int */;
val* var85 /* : nullable Bool */;
val* var86 /* : nullable Bool */;
val* var87 /* : MModule */;
val* var88 /* : MClassType */;
val* var_native_mtype /* var native_mtype: MClassType */;
val* var89 /* : RuntimeVariable */;
val* var_nat /* var nat: RuntimeVariable */;
val* var91 /* : NativeArray[String] */;
static val* varonce90;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : CString */;
val* var95 /* : String */;
val* var96 /* : nullable Int */;
val* var97 /* : nullable Int */;
val* var98 /* : nullable Bool */;
val* var99 /* : nullable Bool */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : CString */;
val* var103 /* : String */;
val* var104 /* : nullable Int */;
val* var105 /* : nullable Int */;
val* var106 /* : nullable Bool */;
val* var107 /* : nullable Bool */;
val* var108 /* : String */;
val* var109 /* : String */;
val* var110 /* : String */;
long var111 /* : Int */;
val* var112 /* : RuntimeVariable */;
val* var_byte_length /* var byte_length: RuntimeVariable */;
long var113 /* : Int */;
val* var114 /* : RuntimeVariable */;
val* var_unilen /* var unilen: RuntimeVariable */;
val* var116 /* : NativeArray[String] */;
static val* varonce115;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : CString */;
val* var120 /* : String */;
val* var121 /* : nullable Int */;
val* var122 /* : nullable Int */;
val* var123 /* : nullable Bool */;
val* var124 /* : nullable Bool */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : CString */;
val* var128 /* : String */;
val* var129 /* : nullable Int */;
val* var130 /* : nullable Int */;
val* var131 /* : nullable Bool */;
val* var132 /* : nullable Bool */;
val* var133 /* : String */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : CString */;
val* var137 /* : String */;
val* var138 /* : nullable Int */;
val* var139 /* : nullable Int */;
val* var140 /* : nullable Bool */;
val* var141 /* : nullable Bool */;
val* var142 /* : MMethod */;
val* var143 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var144 /* : RuntimeVariable */;
val* var145 /* : Object */;
val* var146 /* : RuntimeVariable */;
val* var147 /* : Object */;
val* var148 /* : nullable RuntimeVariable */;
val* var149 /* : String */;
val* var150 /* : String */;
val* var152 /* : NativeArray[String] */;
static val* varonce151;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : CString */;
val* var156 /* : String */;
val* var157 /* : nullable Int */;
val* var158 /* : nullable Int */;
val* var159 /* : nullable Bool */;
val* var160 /* : nullable Bool */;
static val* varonce161;
val* var162 /* : String */;
char* var163 /* : CString */;
val* var164 /* : String */;
val* var165 /* : nullable Int */;
val* var166 /* : nullable Int */;
val* var167 /* : nullable Bool */;
val* var168 /* : nullable Bool */;
val* var169 /* : String */;
val* var170 /* : String */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : CString */;
val* var174 /* : String */;
val* var175 /* : nullable Int */;
val* var176 /* : nullable Int */;
val* var177 /* : nullable Bool */;
val* var178 /* : nullable Bool */;
var_string = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___string_type(var1);
}
var_mtype = var2;
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "varonce";
var6 = (val*)(7l<<2|1);
var7 = (val*)(7l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
var10 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var3);
}
var_name = var10;
if (unlikely(varonce11==NULL)) {
var12 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "static ";
var17 = (val*)(7l<<2|1);
var18 = (val*)(7l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var12)->values[0]=var14;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = " ";
var25 = (val*)(1l<<2|1);
var26 = (val*)(1l<<2|1);
var27 = (val*)((long)(0)<<2|3);
var28 = (val*)((long)(0)<<2|3);
var24 = core__flat___CString___to_s_unsafe(var23, var25, var26, var27, var28);
var22 = var24;
varonce21 = var22;
}
((struct instance_core__NativeArray*)var12)->values[2]=var22;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = ";";
var33 = (val*)(1l<<2|1);
var34 = (val*)(1l<<2|1);
var35 = (val*)((long)(0)<<2|3);
var36 = (val*)((long)(0)<<2|3);
var32 = core__flat___CString___to_s_unsafe(var31, var33, var34, var35, var36);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var12)->values[4]=var30;
} else {
var12 = varonce11;
varonce11 = NULL;
}
{
var37 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
((struct instance_core__NativeArray*)var12)->values[1]=var37;
((struct instance_core__NativeArray*)var12)->values[3]=var_name;
{
var38 = ((val*(*)(val* self))(var12->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce11 = var12;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var38); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_decl on <self:AbstractCompilerVisitor>*/
}
{
var39 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var39;
if (unlikely(varonce40==NULL)) {
var41 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "if (likely(";
var46 = (val*)(11l<<2|1);
var47 = (val*)(11l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var41)->values[0]=var43;
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "!=NULL)) {";
var54 = (val*)(10l<<2|1);
var55 = (val*)(10l<<2|1);
var56 = (val*)((long)(0)<<2|3);
var57 = (val*)((long)(0)<<2|3);
var53 = core__flat___CString___to_s_unsafe(var52, var54, var55, var56, var57);
var51 = var53;
varonce50 = var51;
}
((struct instance_core__NativeArray*)var41)->values[2]=var51;
} else {
var41 = varonce40;
varonce40 = NULL;
}
((struct instance_core__NativeArray*)var41)->values[1]=var_name;
{
var58 = ((val*(*)(val* self))(var41->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var41); /* native_to_s on <var41:NativeArray[String]>*/
}
varonce40 = var41;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var58); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
if (unlikely(varonce59==NULL)) {
var60 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = " = ";
var65 = (val*)(3l<<2|1);
var66 = (val*)(3l<<2|1);
var67 = (val*)((long)(0)<<2|3);
var68 = (val*)((long)(0)<<2|3);
var64 = core__flat___CString___to_s_unsafe(var63, var65, var66, var67, var68);
var62 = var64;
varonce61 = var62;
}
((struct instance_core__NativeArray*)var60)->values[1]=var62;
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = ";";
var73 = (val*)(1l<<2|1);
var74 = (val*)(1l<<2|1);
var75 = (val*)((long)(0)<<2|3);
var76 = (val*)((long)(0)<<2|3);
var72 = core__flat___CString___to_s_unsafe(var71, var73, var74, var75, var76);
var70 = var72;
varonce69 = var70;
}
((struct instance_core__NativeArray*)var60)->values[3]=var70;
} else {
var60 = varonce59;
varonce59 = NULL;
}
{
var77 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var60)->values[0]=var77;
((struct instance_core__NativeArray*)var60)->values[2]=var_name;
{
var78 = ((val*(*)(val* self))(var60->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var60); /* native_to_s on <var60:NativeArray[String]>*/
}
varonce59 = var60;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var78); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "} else {";
var83 = (val*)(8l<<2|1);
var84 = (val*)(8l<<2|1);
var85 = (val*)((long)(0)<<2|3);
var86 = (val*)((long)(0)<<2|3);
var82 = core__flat___CString___to_s_unsafe(var81, var83, var84, var85, var86);
var80 = var82;
varonce79 = var80;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var80); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
{
var87 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var88 = nitc__model___MModule___c_string_type(var87);
}
var_native_mtype = var88;
{
var89 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_native_mtype);
}
var_nat = var89;
if (unlikely(varonce90==NULL)) {
var91 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce92!=NULL)) {
var93 = varonce92;
} else {
var94 = " = \"";
var96 = (val*)(4l<<2|1);
var97 = (val*)(4l<<2|1);
var98 = (val*)((long)(0)<<2|3);
var99 = (val*)((long)(0)<<2|3);
var95 = core__flat___CString___to_s_unsafe(var94, var96, var97, var98, var99);
var93 = var95;
varonce92 = var93;
}
((struct instance_core__NativeArray*)var91)->values[1]=var93;
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "\";";
var104 = (val*)(2l<<2|1);
var105 = (val*)(2l<<2|1);
var106 = (val*)((long)(0)<<2|3);
var107 = (val*)((long)(0)<<2|3);
var103 = core__flat___CString___to_s_unsafe(var102, var104, var105, var106, var107);
var101 = var103;
varonce100 = var101;
}
((struct instance_core__NativeArray*)var91)->values[3]=var101;
} else {
var91 = varonce90;
varonce90 = NULL;
}
{
var108 = ((val*(*)(val* self))(var_nat->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_nat); /* to_s on <var_nat:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var91)->values[0]=var108;
{
var109 = ((val*(*)(val* self))(var_string->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var_string); /* escape_to_c on <var_string:String>*/
}
((struct instance_core__NativeArray*)var91)->values[2]=var109;
{
var110 = ((val*(*)(val* self))(var91->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var91); /* native_to_s on <var91:NativeArray[String]>*/
}
varonce90 = var91;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var110); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
{
var111 = ((long(*)(val* self))(var_string->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_string); /* byte_length on <var_string:String>*/
}
{
var112 = nitc___nitc__AbstractCompilerVisitor___int_instance(self, var111);
}
var_byte_length = var112;
{
var113 = ((long(*)(val* self))(var_string->class->vft[COLOR_core__abstract_text__Text__length]))(var_string); /* length on <var_string:String>*/
}
{
var114 = nitc___nitc__AbstractCompilerVisitor___int_instance(self, var113);
}
var_unilen = var114;
if (unlikely(varonce115==NULL)) {
var116 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = " = ";
var121 = (val*)(3l<<2|1);
var122 = (val*)(3l<<2|1);
var123 = (val*)((long)(0)<<2|3);
var124 = (val*)((long)(0)<<2|3);
var120 = core__flat___CString___to_s_unsafe(var119, var121, var122, var123, var124);
var118 = var120;
varonce117 = var118;
}
((struct instance_core__NativeArray*)var116)->values[1]=var118;
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = ";";
var129 = (val*)(1l<<2|1);
var130 = (val*)(1l<<2|1);
var131 = (val*)((long)(0)<<2|3);
var132 = (val*)((long)(0)<<2|3);
var128 = core__flat___CString___to_s_unsafe(var127, var129, var130, var131, var132);
var126 = var128;
varonce125 = var126;
}
((struct instance_core__NativeArray*)var116)->values[3]=var126;
} else {
var116 = varonce115;
varonce115 = NULL;
}
{
var133 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var116)->values[0]=var133;
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "to_s_unsafe";
var138 = (val*)(11l<<2|1);
var139 = (val*)(11l<<2|1);
var140 = (val*)((long)(0)<<2|3);
var141 = (val*)((long)(0)<<2|3);
var137 = core__flat___CString___to_s_unsafe(var136, var138, var139, var140, var141);
var135 = var137;
varonce134 = var135;
}
{
var142 = nitc___nitc__AbstractCompilerVisitor___get_property(self, var135, var_native_mtype);
}
var143 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var143, 5l); /* Direct call array$Array$with_capacity on <var143:Array[RuntimeVariable]>*/
}
var_ = var143;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_nat); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_byte_length); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_unilen); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
var145 = (val*)((long)(0)<<2|3);
var144 = nitc___nitc__AbstractCompilerVisitor___value_instance(self, var145);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var144); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
var147 = (val*)((long)(0)<<2|3);
var146 = nitc___nitc__AbstractCompilerVisitor___value_instance(self, var147);
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var146); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
var148 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__send(self, var142, var_);
}
if (unlikely(var148 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1728);
fatal_exit(1);
}
{
var149 = ((val*(*)(val* self))(var148->class->vft[COLOR_core__abstract_text__Object__to_s]))(var148); /* to_s on <var148:nullable RuntimeVariable(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var116)->values[2]=var149;
{
var150 = ((val*(*)(val* self))(var116->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var116); /* native_to_s on <var116:NativeArray[String]>*/
}
varonce115 = var116;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var150); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
if (unlikely(varonce151==NULL)) {
var152 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = " = ";
var157 = (val*)(3l<<2|1);
var158 = (val*)(3l<<2|1);
var159 = (val*)((long)(0)<<2|3);
var160 = (val*)((long)(0)<<2|3);
var156 = core__flat___CString___to_s_unsafe(var155, var157, var158, var159, var160);
var154 = var156;
varonce153 = var154;
}
((struct instance_core__NativeArray*)var152)->values[1]=var154;
if (likely(varonce161!=NULL)) {
var162 = varonce161;
} else {
var163 = ";";
var165 = (val*)(1l<<2|1);
var166 = (val*)(1l<<2|1);
var167 = (val*)((long)(0)<<2|3);
var168 = (val*)((long)(0)<<2|3);
var164 = core__flat___CString___to_s_unsafe(var163, var165, var166, var167, var168);
var162 = var164;
varonce161 = var162;
}
((struct instance_core__NativeArray*)var152)->values[3]=var162;
} else {
var152 = varonce151;
varonce151 = NULL;
}
((struct instance_core__NativeArray*)var152)->values[0]=var_name;
{
var169 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var152)->values[2]=var169;
{
var170 = ((val*(*)(val* self))(var152->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var152); /* native_to_s on <var152:NativeArray[String]>*/
}
varonce151 = var152;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var170); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce171!=NULL)) {
var172 = varonce171;
} else {
var173 = "}";
var175 = (val*)(1l<<2|1);
var176 = (val*)(1l<<2|1);
var177 = (val*)((long)(0)<<2|3);
var178 = (val*)((long)(0)<<2|3);
var174 = core__flat___CString___to_s_unsafe(var173, var175, var176, var177, var178);
var172 = var174;
varonce171 = var172;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var172); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$value_instance for (self: AbstractCompilerVisitor, Object): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___value_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_object /* var object: Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : RuntimeVariable */;
long var3 /* : Int */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : RuntimeVariable */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : RuntimeVariable */;
var_object = p0;
/* <var_object:Object> isa Int */
cltype = type_core__Int.color;
idtype = type_core__Int.id;
if(cltype >= (((long)var_object&3)?type_info[((long)var_object&3)]:var_object->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_object&3)?type_info[((long)var_object&3)]:var_object->type)->type_table[cltype] == idtype;
}
if (var1){
{
var3 = (long)(var_object)>>2;
var2 = nitc___nitc__AbstractCompilerVisitor___int_instance(self, var3);
}
var = var2;
goto RET_LABEL;
} else {
/* <var_object:Object> isa Bool */
cltype5 = type_core__Bool.color;
idtype6 = type_core__Bool.id;
if(cltype5 >= (((long)var_object&3)?type_info[((long)var_object&3)]:var_object->type)->table_size) {
var4 = 0;
} else {
var4 = (((long)var_object&3)?type_info[((long)var_object&3)]:var_object->type)->type_table[cltype5] == idtype6;
}
if (var4){
{
var8 = (short int)((long)(var_object)>>2);
var7 = nitc___nitc__AbstractCompilerVisitor___bool_instance(self, var8);
}
var = var7;
goto RET_LABEL;
} else {
/* <var_object:Object> isa String */
cltype10 = type_core__String.color;
idtype11 = type_core__String.id;
if(cltype10 >= (((long)var_object&3)?type_info[((long)var_object&3)]:var_object->type)->table_size) {
var9 = 0;
} else {
var9 = (((long)var_object&3)?type_info[((long)var_object&3)]:var_object->type)->type_table[cltype10] == idtype11;
}
if (var9){
{
var12 = nitc___nitc__AbstractCompilerVisitor___string_instance(self, var_object);
}
var = var12;
goto RET_LABEL;
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1743);
fatal_exit(1);
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$add for (self: AbstractCompilerVisitor, String) */
void nitc___nitc__AbstractCompilerVisitor___add(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
val* var3 /* : Array[String] */;
val* var5 /* : Array[String] */;
var_s = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$writer (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1229);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler$CodeWriter$lines (var) on <var:CodeWriter> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__CodeWriter___lines].val; /* _lines on <var:CodeWriter> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1189);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var3, var_s); /* Direct call array$Array$add on <var3:Array[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$add_decl for (self: AbstractCompilerVisitor, String) */
void nitc___nitc__AbstractCompilerVisitor___add_decl(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
val* var3 /* : Array[String] */;
val* var5 /* : Array[String] */;
var_s = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$writer (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1229);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler$CodeWriter$decl_lines (var) on <var:CodeWriter> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var:CodeWriter> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1192);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var3, var_s); /* Direct call array$Array$add on <var3:Array[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$require_declaration for (self: AbstractCompilerVisitor, String) */
void nitc___nitc__AbstractCompilerVisitor___require_declaration(val* self, val* p0) {
val* var_key /* var key: String */;
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
val* var3 /* : CodeFile */;
val* var5 /* : CodeFile */;
val* var6 /* : HashSet[String] */;
val* var8 /* : HashSet[String] */;
val* var_reqs /* var reqs: HashSet[String] */;
short int var9 /* : Bool */;
val* var10 /* : nullable ANode */;
val* var12 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : AbstractCompiler */;
val* var20 /* : AbstractCompiler */;
val* var21 /* : HashMap[String, ANode] */;
val* var23 /* : HashMap[String, ANode] */;
var_key = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$writer (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1229);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler$CodeWriter$file (var) on <var:CodeWriter> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__CodeWriter___file].val; /* _file on <var:CodeWriter> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1186);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler$CodeFile$required_declarations (var3) on <var3:CodeFile> */
var8 = var3->attrs[COLOR_nitc__abstract_compiler__CodeFile___required_declarations].val; /* _required_declarations on <var3:CodeFile> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _required_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1176);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_reqs = var6;
{
var9 = core___core__HashSet___core__abstract_collection__Collection__has(var_reqs, var_key);
}
if (var9){
goto RET_LABEL;
} else {
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var_reqs, var_key); /* Direct call hash_collection$HashSet$add on <var_reqs:HashSet[String]>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (self) on <self:AbstractCompilerVisitor> */
var12 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_node = var10;
if (var_node == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_node,((val*)NULL)) on <var_node:nullable ANode> */
var_other = ((val*)NULL);
{
var16 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ANode(ANode)>*/
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
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var20 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$requirers_of_declarations (var18) on <var18:AbstractCompiler> */
var23 = var18->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___requirers_of_declarations].val; /* _requirers_of_declarations on <var18:AbstractCompiler> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _requirers_of_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 617);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var21, var_key, var_node); /* Direct call hash_collection$HashMap$[]= on <var21:HashMap[String, ANode]>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$declare_once for (self: AbstractCompilerVisitor, String) */
void nitc___nitc__AbstractCompilerVisitor___declare_once(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
var_s = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__AbstractCompiler___provide_declaration(var, var_s, var_s); /* Direct call abstract_compiler$AbstractCompiler$provide_declaration on <var:AbstractCompiler>*/
}
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var_s); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$add_extern for (self: AbstractCompilerVisitor, MModule) */
void nitc___nitc__AbstractCompilerVisitor___add_extern(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
val* var /* : nullable String */;
val* var_file /* var file: nullable String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Bool */;
val* var16 /* : nullable Bool */;
val* var17 /* : Text */;
val* var_tryfile /* var tryfile: String */;
short int var18 /* : Bool */;
val* var20 /* : NativeArray[String] */;
static val* varonce19;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Bool */;
val* var28 /* : nullable Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Bool */;
val* var36 /* : nullable Bool */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var39 /* : AbstractCompiler */;
val* var41 /* : AbstractCompiler */;
val* var42 /* : Array[String] */;
val* var44 /* : Array[String] */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
val* var49 /* : nullable Int */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Bool */;
val* var52 /* : nullable Bool */;
val* var53 /* : Text */;
short int var54 /* : Bool */;
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
val* var73 /* : String */;
val* var74 /* : String */;
val* var75 /* : AbstractCompiler */;
val* var77 /* : AbstractCompiler */;
val* var78 /* : Array[String] */;
val* var80 /* : Array[String] */;
val* var81 /* : AbstractCompiler */;
val* var83 /* : AbstractCompiler */;
val* var84 /* : ArraySet[String] */;
val* var86 /* : ArraySet[String] */;
short int var87 /* : Bool */;
val* var88 /* : AbstractCompiler */;
val* var90 /* : AbstractCompiler */;
val* var91 /* : ArraySet[String] */;
val* var93 /* : ArraySet[String] */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : CString */;
val* var97 /* : String */;
val* var98 /* : nullable Int */;
val* var99 /* : nullable Int */;
val* var100 /* : nullable Bool */;
val* var101 /* : nullable Bool */;
val* var102 /* : Text */;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
val* var109 /* : nullable Int */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Bool */;
val* var112 /* : nullable Bool */;
val* var113 /* : Text */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
val* var116 /* : ExternCFile */;
val* var117 /* : String */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : CString */;
val* var121 /* : String */;
val* var122 /* : nullable Int */;
val* var123 /* : nullable Int */;
val* var124 /* : nullable Bool */;
val* var125 /* : nullable Bool */;
val* var_f /* var f: ExternCFile */;
val* var126 /* : AbstractCompiler */;
val* var128 /* : AbstractCompiler */;
val* var129 /* : Array[ExternFile] */;
val* var131 /* : Array[ExternFile] */;
val* var132 /* : AbstractCompiler */;
val* var134 /* : AbstractCompiler */;
val* var135 /* : Array[String] */;
val* var137 /* : Array[String] */;
var_mmodule = p0;
{
var = nitc___nitc__MModule___filepath(var_mmodule);
}
var_file = var;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = ".nit";
var4 = (val*)(4l<<2|1);
var5 = (val*)(4l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
if (var_file == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1785);
fatal_exit(1);
} else {
var8 = core__file___String___strip_extension(var_file, var1);
}
var_file = var8;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ".nit.h";
var13 = (val*)(6l<<2|1);
var14 = (val*)(6l<<2|1);
var15 = (val*)((long)(0)<<2|3);
var16 = (val*)((long)(0)<<2|3);
var12 = core__flat___CString___to_s_unsafe(var11, var13, var14, var15, var16);
var10 = var12;
varonce9 = var10;
}
{
var17 = ((val*(*)(val* self, val* p0))(var_file->class->vft[COLOR_core__abstract_text__Text___43d]))(var_file, var10); /* + on <var_file:nullable String(String)>*/
}
var_tryfile = var17;
{
var18 = core__file___Text___file_exists(var_tryfile);
}
if (var18){
if (unlikely(varonce19==NULL)) {
var20 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "#include \"";
var25 = (val*)(10l<<2|1);
var26 = (val*)(10l<<2|1);
var27 = (val*)((long)(0)<<2|3);
var28 = (val*)((long)(0)<<2|3);
var24 = core__flat___CString___to_s_unsafe(var23, var25, var26, var27, var28);
var22 = var24;
varonce21 = var22;
}
((struct instance_core__NativeArray*)var20)->values[0]=var22;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "\"";
var33 = (val*)(1l<<2|1);
var34 = (val*)(1l<<2|1);
var35 = (val*)((long)(0)<<2|3);
var36 = (val*)((long)(0)<<2|3);
var32 = core__flat___CString___to_s_unsafe(var31, var33, var34, var35, var36);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var20)->values[2]=var30;
} else {
var20 = varonce19;
varonce19 = NULL;
}
{
var37 = ((val*(*)(val* self, val* p0))(var_tryfile->class->vft[COLOR_core__file__String__basename]))(var_tryfile, ((val*)NULL)); /* basename on <var_tryfile:String>*/
}
((struct instance_core__NativeArray*)var20)->values[1]=var37;
{
var38 = ((val*(*)(val* self))(var20->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var20); /* native_to_s on <var20:NativeArray[String]>*/
}
varonce19 = var20;
{
nitc___nitc__AbstractCompilerVisitor___declare_once(self, var38); /* Direct call abstract_compiler$AbstractCompilerVisitor$declare_once on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var41 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$files_to_copy (var39) on <var39:AbstractCompiler> */
var44 = var39->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var39:AbstractCompiler> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1078);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var42, var_tryfile); /* Direct call array$Array$add on <var42:Array[String]>*/
}
} else {
}
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "_nit.h";
var49 = (val*)(6l<<2|1);
var50 = (val*)(6l<<2|1);
var51 = (val*)((long)(0)<<2|3);
var52 = (val*)((long)(0)<<2|3);
var48 = core__flat___CString___to_s_unsafe(var47, var49, var50, var51, var52);
var46 = var48;
varonce45 = var46;
}
{
var53 = ((val*(*)(val* self, val* p0))(var_file->class->vft[COLOR_core__abstract_text__Text___43d]))(var_file, var46); /* + on <var_file:nullable String(String)>*/
}
var_tryfile = var53;
{
var54 = core__file___Text___file_exists(var_tryfile);
}
if (var54){
if (unlikely(varonce55==NULL)) {
var56 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "#include \"";
var61 = (val*)(10l<<2|1);
var62 = (val*)(10l<<2|1);
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
var67 = "\"";
var69 = (val*)(1l<<2|1);
var70 = (val*)(1l<<2|1);
var71 = (val*)((long)(0)<<2|3);
var72 = (val*)((long)(0)<<2|3);
var68 = core__flat___CString___to_s_unsafe(var67, var69, var70, var71, var72);
var66 = var68;
varonce65 = var66;
}
((struct instance_core__NativeArray*)var56)->values[2]=var66;
} else {
var56 = varonce55;
varonce55 = NULL;
}
{
var73 = ((val*(*)(val* self, val* p0))(var_tryfile->class->vft[COLOR_core__file__String__basename]))(var_tryfile, ((val*)NULL)); /* basename on <var_tryfile:String>*/
}
((struct instance_core__NativeArray*)var56)->values[1]=var73;
{
var74 = ((val*(*)(val* self))(var56->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var56); /* native_to_s on <var56:NativeArray[String]>*/
}
varonce55 = var56;
{
nitc___nitc__AbstractCompilerVisitor___declare_once(self, var74); /* Direct call abstract_compiler$AbstractCompilerVisitor$declare_once on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var77 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var77 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$files_to_copy (var75) on <var75:AbstractCompiler> */
var80 = var75->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var75:AbstractCompiler> */
if (unlikely(var80 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1078);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var78, var_tryfile); /* Direct call array$Array$add on <var78:Array[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var83 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var83 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$seen_extern (var81) on <var81:AbstractCompiler> */
var86 = var81->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___seen_extern].val; /* _seen_extern on <var81:AbstractCompiler> */
if (unlikely(var86 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen_extern");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1081);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
var87 = core___core__ArraySet___core__abstract_collection__Collection__has(var84, var_file);
}
if (var87){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var90 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var90 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$seen_extern (var88) on <var88:AbstractCompiler> */
var93 = var88->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___seen_extern].val; /* _seen_extern on <var88:AbstractCompiler> */
if (unlikely(var93 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen_extern");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1081);
fatal_exit(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
core___core__ArraySet___core__abstract_collection__SimpleCollection__add(var91, var_file); /* Direct call array$ArraySet$add on <var91:ArraySet[String]>*/
}
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = ".nit.c";
var98 = (val*)(6l<<2|1);
var99 = (val*)(6l<<2|1);
var100 = (val*)((long)(0)<<2|3);
var101 = (val*)((long)(0)<<2|3);
var97 = core__flat___CString___to_s_unsafe(var96, var98, var99, var100, var101);
var95 = var97;
varonce94 = var95;
}
{
var102 = ((val*(*)(val* self, val* p0))(var_file->class->vft[COLOR_core__abstract_text__Text___43d]))(var_file, var95); /* + on <var_file:nullable String(String)>*/
}
var_tryfile = var102;
{
var103 = core__file___Text___file_exists(var_tryfile);
}
var104 = !var103;
if (var104){
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "_nit.c";
var109 = (val*)(6l<<2|1);
var110 = (val*)(6l<<2|1);
var111 = (val*)((long)(0)<<2|3);
var112 = (val*)((long)(0)<<2|3);
var108 = core__flat___CString___to_s_unsafe(var107, var109, var110, var111, var112);
var106 = var108;
varonce105 = var106;
}
{
var113 = ((val*(*)(val* self, val* p0))(var_file->class->vft[COLOR_core__abstract_text__Text___43d]))(var_file, var106); /* + on <var_file:nullable String(String)>*/
}
var_tryfile = var113;
{
var114 = core__file___Text___file_exists(var_tryfile);
}
var115 = !var114;
if (var115){
goto RET_LABEL;
} else {
}
} else {
}
var116 = NEW_nitc__ExternCFile(&type_nitc__ExternCFile);
{
var117 = ((val*(*)(val* self, val* p0))(var_tryfile->class->vft[COLOR_core__file__String__basename]))(var_tryfile, ((val*)NULL)); /* basename on <var_tryfile:String>*/
}
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "";
var122 = (val*)(0l<<2|1);
var123 = (val*)(0l<<2|1);
var124 = (val*)((long)(0)<<2|3);
var125 = (val*)((long)(0)<<2|3);
var121 = core__flat___CString___to_s_unsafe(var120, var122, var123, var124, var125);
var119 = var121;
varonce118 = var119;
}
{
((void(*)(val* self, val* p0))(var116->class->vft[COLOR_nitc__c_tools__ExternFile__filename_61d]))(var116, var117); /* filename= on <var116:ExternCFile>*/
}
{
((void(*)(val* self, val* p0))(var116->class->vft[COLOR_nitc__c_tools__ExternCFile__cflags_61d]))(var116, var119); /* cflags= on <var116:ExternCFile>*/
}
{
((void(*)(val* self))(var116->class->vft[COLOR_core__kernel__Object__init]))(var116); /* init on <var116:ExternCFile>*/
}
var_f = var116;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var128 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var128 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$extern_bodies (var126) on <var126:AbstractCompiler> */
var131 = var126->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var126:AbstractCompiler> */
if (unlikely(var131 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1075);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var129, var_f); /* Direct call array$Array$add on <var129:Array[ExternFile]>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var134 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var134 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$files_to_copy (var132) on <var132:AbstractCompiler> */
var137 = var132->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var132:AbstractCompiler> */
if (unlikely(var137 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1078);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var135, var_tryfile); /* Direct call array$Array$add on <var135:Array[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$new_expr for (self: AbstractCompilerVisitor, String, MType): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___new_expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_cexpr /* var cexpr: String */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var2 /* : NativeArray[String] */;
static val* varonce;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Bool */;
val* var18 /* : nullable Bool */;
val* var19 /* : String */;
val* var20 /* : String */;
var_cexpr = p0;
var_mtype = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var1;
if (unlikely(varonce==NULL)) {
var2 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = " = ";
var7 = (val*)(3l<<2|1);
var8 = (val*)(3l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce3 = var4;
}
((struct instance_core__NativeArray*)var2)->values[1]=var4;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = ";";
var15 = (val*)(1l<<2|1);
var16 = (val*)(1l<<2|1);
var17 = (val*)((long)(0)<<2|3);
var18 = (val*)((long)(0)<<2|3);
var14 = core__flat___CString___to_s_unsafe(var13, var15, var16, var17, var18);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var2)->values[3]=var12;
} else {
var2 = varonce;
varonce = NULL;
}
{
var19 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var2)->values[0]=var19;
((struct instance_core__NativeArray*)var2)->values[2]=var_cexpr;
{
var20 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2); /* native_to_s on <var2:NativeArray[String]>*/
}
varonce = var2;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var20); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$add_abort for (self: AbstractCompilerVisitor, String) */
void nitc___nitc__AbstractCompilerVisitor___add_abort(val* self, val* p0) {
val* var_message /* var message: String */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : nullable Int */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Bool */;
val* var6 /* : nullable Bool */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
val* var24 /* : NativeArray[String] */;
static val* varonce23;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Bool */;
val* var32 /* : nullable Bool */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Bool */;
val* var40 /* : nullable Bool */;
val* var41 /* : String */;
val* var42 /* : String */;
var_message = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "if(catchStack.cursor >= 0){";
var3 = (val*)(27l<<2|1);
var4 = (val*)(27l<<2|1);
var5 = (val*)((long)(0)<<2|3);
var6 = (val*)((long)(0)<<2|3);
var2 = core__flat___CString___to_s_unsafe(var1, var3, var4, var5, var6);
var = var2;
varonce = var;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "longjmp(catchStack.envs[catchStack.cursor], 1);";
var11 = (val*)(47l<<2|1);
var12 = (val*)(47l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce7 = var8;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var8); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "}";
var19 = (val*)(1l<<2|1);
var20 = (val*)(1l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce15 = var16;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var16); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
if (unlikely(varonce23==NULL)) {
var24 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "PRINT_ERROR(\"Runtime error: %s\", \"";
var29 = (val*)(34l<<2|1);
var30 = (val*)(34l<<2|1);
var31 = (val*)((long)(0)<<2|3);
var32 = (val*)((long)(0)<<2|3);
var28 = core__flat___CString___to_s_unsafe(var27, var29, var30, var31, var32);
var26 = var28;
varonce25 = var26;
}
((struct instance_core__NativeArray*)var24)->values[0]=var26;
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "\");";
var37 = (val*)(3l<<2|1);
var38 = (val*)(3l<<2|1);
var39 = (val*)((long)(0)<<2|3);
var40 = (val*)((long)(0)<<2|3);
var36 = core__flat___CString___to_s_unsafe(var35, var37, var38, var39, var40);
var34 = var36;
varonce33 = var34;
}
((struct instance_core__NativeArray*)var24)->values[2]=var34;
} else {
var24 = varonce23;
varonce23 = NULL;
}
{
var41 = ((val*(*)(val* self))(var_message->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var_message); /* escape_to_c on <var_message:String>*/
}
((struct instance_core__NativeArray*)var24)->values[1]=var41;
{
var42 = ((val*(*)(val* self))(var24->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var24); /* native_to_s on <var24:NativeArray[String]>*/
}
varonce23 = var24;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var42); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___add_raw_abort(self); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_raw_abort on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$add_raw_abort for (self: AbstractCompilerVisitor) */
void nitc___nitc__AbstractCompilerVisitor___add_raw_abort(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : nullable ANode */;
val* var4 /* : nullable ANode */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
val* var10 /* : nullable ANode */;
val* var12 /* : nullable ANode */;
val* var13 /* : Location */;
val* var15 /* : Location */;
val* var16 /* : nullable SourceFile */;
val* var18 /* : nullable SourceFile */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var_24 /* var : Bool */;
val* var25 /* : nullable ANode */;
val* var27 /* : nullable ANode */;
val* var28 /* : Location */;
val* var30 /* : Location */;
val* var31 /* : nullable SourceFile */;
val* var33 /* : nullable SourceFile */;
val* var34 /* : nullable MModule */;
val* var36 /* : nullable MModule */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : NativeArray[String] */;
static val* varonce;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable Bool */;
val* var51 /* : nullable ANode */;
val* var53 /* : nullable ANode */;
val* var54 /* : Location */;
val* var56 /* : Location */;
val* var57 /* : nullable SourceFile */;
val* var59 /* : nullable SourceFile */;
val* var60 /* : nullable MModule */;
val* var62 /* : nullable MModule */;
val* var63 /* : String */;
val* var64 /* : String */;
val* var_f /* var f: String */;
val* var66 /* : NativeArray[String] */;
static val* varonce65;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
val* var71 /* : nullable Int */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Bool */;
val* var74 /* : nullable Bool */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
val* var79 /* : nullable Int */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Bool */;
val* var82 /* : nullable Bool */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Bool */;
val* var90 /* : nullable Bool */;
val* var91 /* : nullable ANode */;
val* var93 /* : nullable ANode */;
val* var94 /* : Location */;
val* var96 /* : Location */;
long var97 /* : Int */;
long var99 /* : Int */;
val* var100 /* : String */;
val* var101 /* : String */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : CString */;
val* var105 /* : String */;
val* var106 /* : nullable Int */;
val* var107 /* : nullable Int */;
val* var108 /* : nullable Bool */;
val* var109 /* : nullable Bool */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : CString */;
val* var113 /* : String */;
val* var114 /* : nullable Int */;
val* var115 /* : nullable Int */;
val* var116 /* : nullable Bool */;
val* var117 /* : nullable Bool */;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (var2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var2,((val*)NULL)) on <var2:nullable ANode> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_core__kernel__Object___61d_61d]))(var2, var_other); /* == on <var2:nullable ANode(ANode)>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
var_ = var5;
if (var5){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (self) on <self:AbstractCompilerVisitor> */
var12 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1830);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$location (var10) on <var10:nullable ANode> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var15 = var10->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var10:nullable ANode> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline location$Location$file (var13) on <var13:Location> */
var18 = var13->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var13:Location> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (var16 == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var16,((val*)NULL)) on <var16:nullable SourceFile> */
var_other = ((val*)NULL);
{
var22 = ((short int(*)(val* self, val* p0))(var16->class->vft[COLOR_core__kernel__Object___61d_61d]))(var16, var_other); /* == on <var16:nullable SourceFile(SourceFile)>*/
}
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
var1 = var19;
} else {
var1 = var_;
}
var_24 = var1;
if (var1){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (self) on <self:AbstractCompilerVisitor> */
var27 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (var25 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1831);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$location (var25) on <var25:nullable ANode> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var30 = var25->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var25:nullable ANode> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline location$Location$file (var28) on <var28:Location> */
var33 = var28->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var28:Location> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (var31 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1831);
fatal_exit(1);
} else {
{ /* Inline loader$SourceFile$mmodule (var31) on <var31:nullable SourceFile> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1226);
fatal_exit(1);
}
var36 = var31->attrs[COLOR_nitc__loader__SourceFile___mmodule].val; /* _mmodule on <var31:nullable SourceFile> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var34,((val*)NULL)) on <var34:nullable MModule> */
var_other = ((val*)NULL);
{
var40 = ((short int(*)(val* self, val* p0))(var34->class->vft[COLOR_core__kernel__Object___61d_61d]))(var34, var_other); /* == on <var34:nullable MModule(MModule)>*/
}
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
var = var37;
} else {
var = var_24;
}
if (var){
if (unlikely(varonce==NULL)) {
var42 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "FILE_";
var47 = (val*)(5l<<2|1);
var48 = (val*)(5l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var42)->values[0]=var44;
} else {
var42 = varonce;
varonce = NULL;
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (self) on <self:AbstractCompilerVisitor> */
var53 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
if (var51 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1832);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$location (var51) on <var51:nullable ANode> */
if (unlikely(var51 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var56 = var51->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var51:nullable ANode> */
if (unlikely(var56 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline location$Location$file (var54) on <var54:Location> */
var59 = var54->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var54:Location> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (var57 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1832);
fatal_exit(1);
} else {
{ /* Inline loader$SourceFile$mmodule (var57) on <var57:nullable SourceFile> */
if (unlikely(var57 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__loader, 1226);
fatal_exit(1);
}
var62 = var57->attrs[COLOR_nitc__loader__SourceFile___mmodule].val; /* _mmodule on <var57:nullable SourceFile> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
if (var60 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1832);
fatal_exit(1);
} else {
var63 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var60);
}
((struct instance_core__NativeArray*)var42)->values[1]=var63;
{
var64 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var42); /* native_to_s on <var42:NativeArray[String]>*/
}
varonce = var42;
var_f = var64;
{
nitc___nitc__AbstractCompilerVisitor___require_declaration(self, var_f); /* Direct call abstract_compiler$AbstractCompilerVisitor$require_declaration on <self:AbstractCompilerVisitor>*/
}
if (unlikely(varonce65==NULL)) {
var66 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "PRINT_ERROR(\" (%s:%d)\\n\", ";
var71 = (val*)(26l<<2|1);
var72 = (val*)(26l<<2|1);
var73 = (val*)((long)(0)<<2|3);
var74 = (val*)((long)(0)<<2|3);
var70 = core__flat___CString___to_s_unsafe(var69, var71, var72, var73, var74);
var68 = var70;
varonce67 = var68;
}
((struct instance_core__NativeArray*)var66)->values[0]=var68;
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = ", ";
var79 = (val*)(2l<<2|1);
var80 = (val*)(2l<<2|1);
var81 = (val*)((long)(0)<<2|3);
var82 = (val*)((long)(0)<<2|3);
var78 = core__flat___CString___to_s_unsafe(var77, var79, var80, var81, var82);
var76 = var78;
varonce75 = var76;
}
((struct instance_core__NativeArray*)var66)->values[2]=var76;
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = ");";
var87 = (val*)(2l<<2|1);
var88 = (val*)(2l<<2|1);
var89 = (val*)((long)(0)<<2|3);
var90 = (val*)((long)(0)<<2|3);
var86 = core__flat___CString___to_s_unsafe(var85, var87, var88, var89, var90);
var84 = var86;
varonce83 = var84;
}
((struct instance_core__NativeArray*)var66)->values[4]=var84;
} else {
var66 = varonce65;
varonce65 = NULL;
}
((struct instance_core__NativeArray*)var66)->values[1]=var_f;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (self) on <self:AbstractCompilerVisitor> */
var93 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
if (var91 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1834);
fatal_exit(1);
} else {
{ /* Inline parser_nodes$ANode$location (var91) on <var91:nullable ANode> */
if (unlikely(var91 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var96 = var91->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var91:nullable ANode> */
if (unlikely(var96 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline location$Location$line_start (var94) on <var94:Location> */
var99 = var94->attrs[COLOR_nitc__location__Location___line_start].l; /* _line_start on <var94:Location> */
var97 = var99;
RET_LABEL98:(void)0;
}
}
var100 = core__flat___Int___core__abstract_text__Object__to_s(var97);
((struct instance_core__NativeArray*)var66)->values[3]=var100;
{
var101 = ((val*(*)(val* self))(var66->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var66); /* native_to_s on <var66:NativeArray[String]>*/
}
varonce65 = var66;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var101); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
} else {
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "PRINT_ERROR(\"\\n\");";
var106 = (val*)(18l<<2|1);
var107 = (val*)(18l<<2|1);
var108 = (val*)((long)(0)<<2|3);
var109 = (val*)((long)(0)<<2|3);
var105 = core__flat___CString___to_s_unsafe(var104, var106, var107, var108, var109);
var103 = var105;
varonce102 = var103;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var103); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
}
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "fatal_exit(1);";
var114 = (val*)(14l<<2|1);
var115 = (val*)(14l<<2|1);
var116 = (val*)((long)(0)<<2|3);
var117 = (val*)((long)(0)<<2|3);
var113 = core__flat___CString___to_s_unsafe(var112, var114, var115, var116, var117);
var111 = var113;
varonce110 = var111;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var111); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$add_cast for (self: AbstractCompilerVisitor, RuntimeVariable, MType, String) */
void nitc___nitc__AbstractCompilerVisitor___add_cast(val* self, val* p0, val* p1, val* p2) {
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_tag /* var tag: String */;
val* var /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var_cn /* var cn: String */;
val* var22 /* : NativeArray[String] */;
static val* varonce21;
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
val* var47 /* : String */;
val* var48 /* : String */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Bool */;
val* var57 /* : nullable Bool */;
var_value = p0;
var_mtype = p1;
var_tag = p2;
{
var = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__type_test]))(self, var_value, var_mtype, var_tag); /* type_test on <self:AbstractCompilerVisitor>*/
}
var_res = var;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "if (unlikely(!";
var6 = (val*)(14l<<2|1);
var7 = (val*)(14l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = ")) {";
var14 = (val*)(4l<<2|1);
var15 = (val*)(4l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[2]=var11;
} else {
var1 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var19); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
{
var20 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(self, var_value); /* class_name_string on <self:AbstractCompilerVisitor>*/
}
var_cn = var20;
if (unlikely(varonce21==NULL)) {
var22 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "PRINT_ERROR(\"Runtime error: Cast failed. Expected `%s`, got `%s`\", \"";
var27 = (val*)(68l<<2|1);
var28 = (val*)(68l<<2|1);
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
var33 = "\", ";
var35 = (val*)(3l<<2|1);
var36 = (val*)(3l<<2|1);
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
var41 = ");";
var43 = (val*)(2l<<2|1);
var44 = (val*)(2l<<2|1);
var45 = (val*)((long)(0)<<2|3);
var46 = (val*)((long)(0)<<2|3);
var42 = core__flat___CString___to_s_unsafe(var41, var43, var44, var45, var46);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var22)->values[4]=var40;
} else {
var22 = varonce21;
varonce21 = NULL;
}
{
var47 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
{
var48 = ((val*(*)(val* self))(var47->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var47); /* escape_to_c on <var47:String>*/
}
((struct instance_core__NativeArray*)var22)->values[1]=var48;
((struct instance_core__NativeArray*)var22)->values[3]=var_cn;
{
var49 = ((val*(*)(val* self))(var22->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var22); /* native_to_s on <var22:NativeArray[String]>*/
}
varonce21 = var22;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var49); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___add_raw_abort(self); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_raw_abort on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "}";
var54 = (val*)(1l<<2|1);
var55 = (val*)(1l<<2|1);
var56 = (val*)((long)(0)<<2|3);
var57 = (val*)((long)(0)<<2|3);
var53 = core__flat___CString___to_s_unsafe(var52, var54, var55, var56, var57);
var51 = var53;
varonce50 = var51;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var51); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$ret for (self: AbstractCompilerVisitor, RuntimeVariable) */
void nitc___nitc__AbstractCompilerVisitor___ret(val* self, val* p0) {
val* var_s /* var s: RuntimeVariable */;
val* var /* : nullable StaticFrame */;
val* var2 /* : nullable StaticFrame */;
val* var3 /* : nullable RuntimeVariable */;
val* var5 /* : nullable RuntimeVariable */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
val* var23 /* : nullable StaticFrame */;
val* var25 /* : nullable StaticFrame */;
val* var26 /* : nullable String */;
val* var28 /* : nullable String */;
val* var29 /* : String */;
var_s = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1855);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$returnvar (var) on <var:nullable StaticFrame> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2037);
fatal_exit(1);
}
var5 = var->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var:nullable StaticFrame> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1855);
fatal_exit(1);
}
{
nitc___nitc__AbstractCompilerVisitor___assign(self, var3, var_s); /* Direct call abstract_compiler$AbstractCompilerVisitor$assign on <self:AbstractCompilerVisitor>*/
}
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "goto ";
var11 = (val*)(5l<<2|1);
var12 = (val*)(5l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = ";";
var19 = (val*)(1l<<2|1);
var20 = (val*)(1l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var6)->values[2]=var16;
} else {
var6 = varonce;
varonce = NULL;
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:AbstractCompilerVisitor> */
var25 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1856);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$returnlabel (var23) on <var23:nullable StaticFrame> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2040);
fatal_exit(1);
}
var28 = var23->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var23:nullable StaticFrame> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1856);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var6)->values[1]=var26;
{
var29 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var29); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$stmt for (self: AbstractCompilerVisitor, nullable AExpr) */
void nitc___nitc__AbstractCompilerVisitor___stmt(val* self, val* p0) {
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Bool */;
val* var15 /* : nullable Bool */;
val* var16 /* : nullable AArrayExpr */;
val* var18 /* : nullable AArrayExpr */;
val* var_narray /* var narray: nullable AArrayExpr */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var_other22 /* var other: nullable Object */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : nullable StaticFrame */;
val* var27 /* : nullable StaticFrame */;
val* var28 /* : nullable RuntimeVariable */;
val* var30 /* : nullable RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var31 /* : nullable MType */;
val* var33 /* : nullable MType */;
val* var34 /* : RuntimeVariable */;
val* var_val /* var val: RuntimeVariable */;
val* var35 /* : nullable CallSite */;
val* var37 /* : nullable CallSite */;
val* var38 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var39 /* : nullable RuntimeVariable */;
val* var40 /* : nullable ANode */;
val* var42 /* : nullable ANode */;
val* var_old /* var old: nullable ANode */;
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
{ /* Inline modelbuilder_base$ANode$is_broken (var_nexpr) on <var_nexpr:nullable AExpr(AExpr)> */
var8 = var_nexpr->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s; /* _is_broken on <var_nexpr:nullable AExpr(AExpr)> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6){
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "FATAL: bad statement executed.";
var12 = (val*)(30l<<2|1);
var13 = (val*)(30l<<2|1);
var14 = (val*)((long)(0)<<2|3);
var15 = (val*)((long)(0)<<2|3);
var11 = core__flat___CString___to_s_unsafe(var10, var12, var13, var14, var15);
var9 = var11;
varonce = var9;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(self, var9); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <self:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing$AExpr$comprehension (var_nexpr) on <var_nexpr:nullable AExpr(AExpr)> */
var18 = var_nexpr->attrs[COLOR_nitc__typing__AExpr___comprehension].val; /* _comprehension on <var_nexpr:nullable AExpr(AExpr)> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_narray = var16;
if (var_narray == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_narray,((val*)NULL)) on <var_narray:nullable AArrayExpr> */
var_other22 = ((val*)NULL);
{
var23 = ((short int(*)(val* self, val* p0))(var_narray->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_narray, var_other22); /* == on <var_narray:nullable AArrayExpr(AArrayExpr)>*/
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
{ /* Inline abstract_compiler$AbstractCompilerVisitor$frame (self) on <self:AbstractCompilerVisitor> */
var27 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (var25 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1873);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler$StaticFrame$comprehension (var25) on <var25:nullable StaticFrame> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2047);
fatal_exit(1);
}
var30 = var25->attrs[COLOR_nitc__abstract_compiler__StaticFrame___comprehension].val; /* _comprehension on <var25:nullable StaticFrame> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1873);
fatal_exit(1);
}
var_recv = var28;
{
{ /* Inline typing$AArrayExpr$element_mtype (var_narray) on <var_narray:nullable AArrayExpr(AArrayExpr)> */
var33 = var_narray->attrs[COLOR_nitc__typing__AArrayExpr___element_mtype].val; /* _element_mtype on <var_narray:nullable AArrayExpr(AArrayExpr)> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = nitc___nitc__AbstractCompilerVisitor___expr(self, var_nexpr, var31);
}
var_val = var34;
{
{ /* Inline typing$AArrayExpr$push_callsite (var_narray) on <var_narray:nullable AArrayExpr(AArrayExpr)> */
var37 = var_narray->attrs[COLOR_nitc__typing__AArrayExpr___push_callsite].val; /* _push_callsite on <var_narray:nullable AArrayExpr(AArrayExpr)> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1875);
fatal_exit(1);
}
var38 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var38, 2l); /* Direct call array$Array$with_capacity on <var38:Array[RuntimeVariable]>*/
}
var_ = var38;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_recv); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_val); /* Direct call array$AbstractArray$push on <var_:Array[RuntimeVariable]>*/
}
{
var39 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(self, var35, var_); /* compile_callsite on <self:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (self) on <self:AbstractCompilerVisitor> */
var42 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_old = var40;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (self,var_nexpr) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_nexpr; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL43:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_nitc__abstract_compiler__AExpr__stmt]))(var_nexpr, self); /* stmt on <var_nexpr:nullable AExpr(AExpr)>*/
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (self,var_old) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_old; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL44:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractCompilerVisitor$expr for (self: AbstractCompilerVisitor, AExpr, nullable MType): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_nexpr /* var nexpr: AExpr */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : nullable ANode */;
val* var3 /* : nullable ANode */;
val* var_old /* var old: nullable ANode */;
val* var_res /* var res: nullable Object */;
val* var5 /* : nullable MType */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable RuntimeVariable */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other15 /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : AbstractCompiler */;
val* var34 /* : AbstractCompiler */;
val* var35 /* : MModule */;
val* var37 /* : MModule */;
val* var38 /* : MClassType */;
val* var39 /* : RuntimeVariable */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : MType */;
val* var47 /* : RuntimeVariable */;
val* var48 /* : nullable MType */;
val* var49 /* : RuntimeVariable */;
val* var50 /* : nullable MType */;
val* var52 /* : nullable MType */;
val* var_implicit_cast_to /* var implicit_cast_to: nullable MType */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var_ /* var : Bool */;
val* var59 /* : AbstractCompiler */;
val* var61 /* : AbstractCompiler */;
val* var62 /* : ModelBuilder */;
val* var64 /* : ModelBuilder */;
val* var65 /* : ToolContext */;
val* var67 /* : ToolContext */;
val* var68 /* : OptionBool */;
val* var70 /* : OptionBool */;
val* var71 /* : nullable Object */;
val* var73 /* : nullable Object */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : CString */;
val* var79 /* : String */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Int */;
val* var82 /* : nullable Bool */;
val* var83 /* : nullable Bool */;
val* var84 /* : RuntimeVariable */;
var_nexpr = p0;
var_mtype = p1;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_old = var1;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (self,var_nexpr) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_nexpr; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL4:(void)0;
}
}
var_res = ((val*)NULL);
{
var5 = ((val*(*)(val* self))(var_nexpr->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var_nexpr); /* mtype on <var_nexpr:AExpr>*/
}
if (var5 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var5,((val*)NULL)) on <var5:nullable MType> */
var_other = ((val*)NULL);
{
var9 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_core__kernel__Object___61d_61d]))(var5, var_other); /* == on <var5:nullable MType(MType)>*/
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
var11 = ((val*(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_nitc__abstract_compiler__AExpr__expr]))(var_nexpr, self); /* expr on <var_nexpr:AExpr>*/
}
var_res = var11;
} else {
}
if (var_res == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable Object(nullable RuntimeVariable)> */
var_other15 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other15) on <var_res:nullable Object(RuntimeVariable)> */
var18 = var_res == var_other15;
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
if (likely(varonce!=NULL)) {
var19 = varonce;
} else {
var20 = "FATAL: bad expression executed.";
var22 = (val*)(31l<<2|1);
var23 = (val*)(31l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce = var19;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(self, var19); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_abort on <self:AbstractCompilerVisitor>*/
}
if (var_mtype == NULL) {
var26 = 1; /* is null */
} else {
var26 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other15 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other15) on <var_mtype:nullable MType(MType)> */
var31 = var_mtype == var_other15;
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
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var34 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$mainmodule (var32) on <var32:AbstractCompiler> */
var37 = var32->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var32:AbstractCompiler> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 545);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = nitc__model___MModule___object_type(var35);
}
var_mtype = var38;
} else {
}
{
var39 = nitc___nitc__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var39;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (self,var_old) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_old; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL40:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
if (var_mtype == NULL) {
var41 = 0; /* is null */
} else {
var41 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
var44 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other); /* == on <var_mtype:nullable MType(MType)>*/
}
var45 = !var44;
var42 = var45;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var41 = var42;
}
if (var41){
{
var46 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var46;
{
var47 = nitc___nitc__SeparateCompilerVisitor___nitc__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_res, var_mtype);
}
var_res = var47;
} else {
}
{
var48 = ((val*(*)(val* self))(var_nexpr->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var_nexpr); /* mtype on <var_nexpr:AExpr>*/
}
if (unlikely(var48 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1914);
fatal_exit(1);
}
{
var49 = nitc___nitc__AbstractCompilerVisitor___autoadapt(self, var_res, var48);
}
var_res = var49;
{
{ /* Inline typing$AExpr$implicit_cast_to (var_nexpr) on <var_nexpr:AExpr> */
var52 = var_nexpr->attrs[COLOR_nitc__typing__AExpr___implicit_cast_to].val; /* _implicit_cast_to on <var_nexpr:AExpr> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
var_implicit_cast_to = var50;
if (var_implicit_cast_to == NULL) {
var54 = 0; /* is null */
} else {
var54 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_implicit_cast_to,((val*)NULL)) on <var_implicit_cast_to:nullable MType> */
var_other = ((val*)NULL);
{
var57 = ((short int(*)(val* self, val* p0))(var_implicit_cast_to->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_implicit_cast_to, var_other); /* == on <var_implicit_cast_to:nullable MType(MType)>*/
}
var58 = !var57;
var55 = var58;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
var_ = var54;
if (var54){
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$compiler (self) on <self:AbstractCompilerVisitor> */
var61 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var61 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1214);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline abstract_compiler$AbstractCompiler$modelbuilder (var59) on <var59:AbstractCompiler> */
var64 = var59->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var59:AbstractCompiler> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 552);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (var62) on <var62:ModelBuilder> */
var67 = var62->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var62:ModelBuilder> */
if (unlikely(var67 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline abstract_compiler$ToolContext$opt_no_check_autocast (var65) on <var65:ToolContext> */
var70 = var65->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <var65:ToolContext> */
if (unlikely(var70 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 54);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline opts$Option$value (var68) on <var68:OptionBool> */
var73 = var68->attrs[COLOR_opts__Option___value].val; /* _value on <var68:OptionBool> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
var74 = (short int)((long)(var71)>>2);
var75 = !var74;
var53 = var75;
} else {
var53 = var_;
}
if (var53){
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "auto";
var80 = (val*)(4l<<2|1);
var81 = (val*)(4l<<2|1);
var82 = (val*)((long)(0)<<2|3);
var83 = (val*)((long)(0)<<2|3);
var79 = core__flat___CString___to_s_unsafe(var78, var80, var81, var82, var83);
var77 = var79;
varonce76 = var77;
}
{
nitc___nitc__AbstractCompilerVisitor___add_cast(self, var_res, var_implicit_cast_to, var77); /* Direct call abstract_compiler$AbstractCompilerVisitor$add_cast on <self:AbstractCompilerVisitor>*/
}
{
var84 = nitc___nitc__AbstractCompilerVisitor___autoadapt(self, var_res, var_implicit_cast_to);
}
var_res = var84;
} else {
}
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node= (self,var_old) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_old; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL85:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$expr_bool for (self: AbstractCompilerVisitor, AExpr): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___expr_bool(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_nexpr /* var nexpr: AExpr */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
var_nexpr = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var2 = nitc___nitc__AbstractCompilerVisitor___expr(self, var_nexpr, var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractCompilerVisitor$debug for (self: AbstractCompilerVisitor, String) */
void nitc___nitc__AbstractCompilerVisitor___debug(val* self, val* p0) {
val* var_message /* var message: String */;
val* var /* : nullable ANode */;
val* var2 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Sys */;
val* var10 /* : NativeArray[String] */;
static val* varonce;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Bool */;
val* var18 /* : nullable Bool */;
val* var19 /* : String */;
val* var21 /* : NativeArray[String] */;
static val* varonce20;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Bool */;
val* var29 /* : nullable Bool */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Bool */;
val* var37 /* : nullable Bool */;
val* var38 /* : String */;
var_message = p0;
{
{ /* Inline abstract_compiler$AbstractCompilerVisitor$current_node (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_node = var;
if (var_node == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_node,((val*)NULL)) on <var_node:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_node,var_other) on <var_node:nullable ANode(ANode)> */
var8 = var_node == var_other;
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
var9 = glob_sys;
if (unlikely(varonce==NULL)) {
var10 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "?: ";
var15 = (val*)(3l<<2|1);
var16 = (val*)(3l<<2|1);
var17 = (val*)((long)(0)<<2|3);
var18 = (val*)((long)(0)<<2|3);
var14 = core__flat___CString___to_s_unsafe(var13, var15, var16, var17, var18);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
} else {
var10 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var10)->values[1]=var_message;
{
var19 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
core__file___Sys___print(var9, var19); /* Direct call file$Sys$print on <var9:Sys>*/
}
} else {
{
nitc___nitc__ANode___debug(var_node, var_message); /* Direct call parser_nodes$ANode$debug on <var_node:nullable ANode(ANode)>*/
}
}
if (unlikely(varonce20==NULL)) {
var21 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "/* DEBUG: ";
var26 = (val*)(10l<<2|1);
var27 = (val*)(10l<<2|1);
var28 = (val*)((long)(0)<<2|3);
var29 = (val*)((long)(0)<<2|3);
var25 = core__flat___CString___to_s_unsafe(var24, var26, var27, var28, var29);
var23 = var25;
varonce22 = var23;
}
((struct instance_core__NativeArray*)var21)->values[0]=var23;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = " */";
var34 = (val*)(3l<<2|1);
var35 = (val*)(3l<<2|1);
var36 = (val*)((long)(0)<<2|3);
var37 = (val*)((long)(0)<<2|3);
var33 = core__flat___CString___to_s_unsafe(var32, var34, var35, var36, var37);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var21)->values[2]=var31;
} else {
var21 = varonce20;
varonce20 = NULL;
}
((struct instance_core__NativeArray*)var21)->values[1]=var_message;
{
var38 = ((val*(*)(val* self))(var21->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var21); /* native_to_s on <var21:NativeArray[String]>*/
}
varonce20 = var21;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var38); /* Direct call abstract_compiler$AbstractCompilerVisitor$add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler$AbstractRuntimeFunction$mmethoddef for (self: AbstractRuntimeFunction): MMethodDef */
val* nitc___nitc__AbstractRuntimeFunction___mmethoddef(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:AbstractRuntimeFunction> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1947);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractRuntimeFunction$mmethoddef= for (self: AbstractRuntimeFunction, MMethodDef) */
void nitc___nitc__AbstractRuntimeFunction___mmethoddef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val = p0; /* _mmethoddef on <self:AbstractRuntimeFunction> */
RET_LABEL:;
}
/* method abstract_compiler$AbstractRuntimeFunction$c_name for (self: AbstractRuntimeFunction): String */
val* nitc___nitc__AbstractRuntimeFunction___c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
val* var_res /* var res: nullable String */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : String */;
val* var11 /* : String */;
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$c_name_cache (self) on <self:AbstractRuntimeFunction> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___c_name_cache].val; /* _c_name_cache on <self:AbstractRuntimeFunction> */
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
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable String> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable String(String)>*/
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
{
{ /* Inline separate_compiler$SeparateRuntimeFunction$build_c_name (self) on <self:AbstractRuntimeFunction> */
var11 = self->attrs[COLOR_nitc__separate_compiler__SeparateRuntimeFunction___build_c_name].val; /* _build_c_name on <self:AbstractRuntimeFunction> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _build_c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 2239);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_res = var9;
{
{ /* Inline abstract_compiler$AbstractRuntimeFunction$c_name_cache= (self,var_res) on <self:AbstractRuntimeFunction> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___c_name_cache].val = var_res; /* _c_name_cache on <self:AbstractRuntimeFunction> */
RET_LABEL12:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractRuntimeFunction$c_name_cache for (self: AbstractRuntimeFunction): nullable String */
val* nitc___nitc__AbstractRuntimeFunction___c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___c_name_cache].val; /* _c_name_cache on <self:AbstractRuntimeFunction> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$AbstractRuntimeFunction$c_name_cache= for (self: AbstractRuntimeFunction, nullable String) */
void nitc___nitc__AbstractRuntimeFunction___c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractRuntimeFunction___c_name_cache].val = p0; /* _c_name_cache on <self:AbstractRuntimeFunction> */
RET_LABEL:;
}
/* method abstract_compiler$AbstractRuntimeFunction$init for (self: AbstractRuntimeFunction) */
void nitc___nitc__AbstractRuntimeFunction___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__AbstractRuntimeFunction___core__kernel__Object__init]))(self); /* init on <self:AbstractRuntimeFunction>*/
}
RET_LABEL:;
}
/* method abstract_compiler$RuntimeVariable$name for (self: RuntimeVariable): String */
val* nitc___nitc__RuntimeVariable___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___name].val; /* _name on <self:RuntimeVariable> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1980);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$RuntimeVariable$name= for (self: RuntimeVariable, String) */
void nitc___nitc__RuntimeVariable___name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___name].val = p0; /* _name on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler$RuntimeVariable$mtype for (self: RuntimeVariable): MType */
val* nitc___nitc__RuntimeVariable___mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$RuntimeVariable$mtype= for (self: RuntimeVariable, MType) */
void nitc___nitc__RuntimeVariable___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val = p0; /* _mtype on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler$RuntimeVariable$mcasttype for (self: RuntimeVariable): MType */
val* nitc___nitc__RuntimeVariable___mcasttype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:RuntimeVariable> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$RuntimeVariable$mcasttype= for (self: RuntimeVariable, MType) */
void nitc___nitc__RuntimeVariable___mcasttype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val = p0; /* _mcasttype on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler$RuntimeVariable$is_exact for (self: RuntimeVariable): Bool */
short int nitc___nitc__RuntimeVariable___is_exact(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s; /* _is_exact on <self:RuntimeVariable> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$RuntimeVariable$is_exact= for (self: RuntimeVariable, Bool) */
void nitc___nitc__RuntimeVariable___is_exact_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s = p0; /* _is_exact on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler$RuntimeVariable$init for (self: RuntimeVariable) */
void nitc___nitc__RuntimeVariable___core__kernel__Object__init(val* self) {
val* var /* : MType */;
val* var2 /* : MType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : MType */;
val* var7 /* : MType */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__RuntimeVariable___core__kernel__Object__init]))(self); /* init on <self:RuntimeVariable>*/
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (self) on <self:RuntimeVariable> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((short int(*)(val* self))(var->class->vft[COLOR_nitc__model__MType__need_anchor]))(var); /* need_anchor on <var:MType>*/
}
var4 = !var3;
if (unlikely(!var4)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1995);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (self) on <self:RuntimeVariable> */
var7 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:RuntimeVariable> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((short int(*)(val* self))(var5->class->vft[COLOR_nitc__model__MType__need_anchor]))(var5); /* need_anchor on <var5:MType>*/
}
var9 = !var8;
if (unlikely(!var9)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1996);
fatal_exit(1);
}
RET_LABEL:;
}
/* method abstract_compiler$RuntimeVariable$to_s for (self: RuntimeVariable): String */
val* nitc___nitc__RuntimeVariable___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline abstract_compiler$RuntimeVariable$name (self) on <self:RuntimeVariable> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___name].val; /* _name on <self:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1980);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$RuntimeVariable$inspect for (self: RuntimeVariable): String */
val* nitc___nitc__RuntimeVariable___core__abstract_text__Object__inspect(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
val* var_exact_str /* var exact_str: nullable Object */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Bool */;
val* var18 /* : nullable Bool */;
val* var19 /* : MType */;
val* var21 /* : MType */;
val* var22 /* : MType */;
val* var24 /* : MType */;
short int var25 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
val* var31 /* : NativeArray[String] */;
static val* varonce30;
val* var32 /* : MType */;
val* var34 /* : MType */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var_type_str /* var type_str: nullable Object */;
val* var38 /* : NativeArray[String] */;
static val* varonce37;
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
val* var55 /* : MType */;
val* var57 /* : MType */;
val* var58 /* : String */;
val* var59 /* : MType */;
val* var61 /* : MType */;
val* var62 /* : String */;
val* var63 /* : String */;
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
val* var92 /* : String */;
val* var93 /* : String */;
{
{ /* Inline abstract_compiler$RuntimeVariable$is_exact (self) on <self:RuntimeVariable> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___is_exact].s; /* _is_exact on <self:RuntimeVariable> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = " exact";
var7 = (val*)(6l<<2|1);
var8 = (val*)(6l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce = var4;
}
var_exact_str = var4;
} else {
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "";
var15 = (val*)(0l<<2|1);
var16 = (val*)(0l<<2|1);
var17 = (val*)((long)(0)<<2|3);
var18 = (val*)((long)(0)<<2|3);
var14 = core__flat___CString___to_s_unsafe(var13, var15, var16, var17, var18);
var12 = var14;
varonce11 = var12;
}
var_exact_str = var12;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (self) on <self:RuntimeVariable> */
var21 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (self) on <self:RuntimeVariable> */
var24 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:RuntimeVariable> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var19,var22) on <var19:MType> */
var_other = var22;
{
{ /* Inline kernel$Object$is_same_instance (var19,var_other) on <var19:MType> */
var29 = var19 == var_other;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
if (var25){
if (unlikely(varonce30==NULL)) {
var31 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
} else {
var31 = varonce30;
varonce30 = NULL;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (self) on <self:RuntimeVariable> */
var34 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = ((val*(*)(val* self))(var32->class->vft[COLOR_core__abstract_text__Object__to_s]))(var32); /* to_s on <var32:MType>*/
}
((struct instance_core__NativeArray*)var31)->values[0]=var35;
((struct instance_core__NativeArray*)var31)->values[1]=var_exact_str;
{
var36 = ((val*(*)(val* self))(var31->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var31); /* native_to_s on <var31:NativeArray[String]>*/
}
varonce30 = var31;
var_type_str = var36;
} else {
if (unlikely(varonce37==NULL)) {
var38 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "(";
var43 = (val*)(1l<<2|1);
var44 = (val*)(1l<<2|1);
var45 = (val*)((long)(0)<<2|3);
var46 = (val*)((long)(0)<<2|3);
var42 = core__flat___CString___to_s_unsafe(var41, var43, var44, var45, var46);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var38)->values[1]=var40;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = ")";
var51 = (val*)(1l<<2|1);
var52 = (val*)(1l<<2|1);
var53 = (val*)((long)(0)<<2|3);
var54 = (val*)((long)(0)<<2|3);
var50 = core__flat___CString___to_s_unsafe(var49, var51, var52, var53, var54);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var38)->values[4]=var48;
} else {
var38 = varonce37;
varonce37 = NULL;
}
{
{ /* Inline abstract_compiler$RuntimeVariable$mtype (self) on <self:RuntimeVariable> */
var57 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var57 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1983);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = ((val*(*)(val* self))(var55->class->vft[COLOR_core__abstract_text__Object__to_s]))(var55); /* to_s on <var55:MType>*/
}
((struct instance_core__NativeArray*)var38)->values[0]=var58;
{
{ /* Inline abstract_compiler$RuntimeVariable$mcasttype (self) on <self:RuntimeVariable> */
var61 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:RuntimeVariable> */
if (unlikely(var61 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1986);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = ((val*(*)(val* self))(var59->class->vft[COLOR_core__abstract_text__Object__to_s]))(var59); /* to_s on <var59:MType>*/
}
((struct instance_core__NativeArray*)var38)->values[2]=var62;
((struct instance_core__NativeArray*)var38)->values[3]=var_exact_str;
{
var63 = ((val*(*)(val* self))(var38->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var38); /* native_to_s on <var38:NativeArray[String]>*/
}
varonce37 = var38;
var_type_str = var63;
}
if (unlikely(varonce64==NULL)) {
var65 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "<";
var70 = (val*)(1l<<2|1);
var71 = (val*)(1l<<2|1);
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
var76 = ":";
var78 = (val*)(1l<<2|1);
var79 = (val*)(1l<<2|1);
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
var84 = ">";
var86 = (val*)(1l<<2|1);
var87 = (val*)(1l<<2|1);
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
{ /* Inline abstract_compiler$RuntimeVariable$name (self) on <self:RuntimeVariable> */
var92 = self->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___name].val; /* _name on <self:RuntimeVariable> */
if (unlikely(var92 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1980);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
((struct instance_core__NativeArray*)var65)->values[1]=var90;
((struct instance_core__NativeArray*)var65)->values[3]=var_type_str;
{
var93 = ((val*(*)(val* self))(var65->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var65); /* native_to_s on <var65:NativeArray[String]>*/
}
varonce64 = var65;
var = var93;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$StaticFrame$visitor= for (self: StaticFrame, AbstractCompilerVisitor) */
void nitc___nitc__StaticFrame___visitor_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (visitor) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__StaticFrame__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2024);
fatal_exit(1);
}
self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___visitor].val = p0; /* _visitor on <self:StaticFrame> */
RET_LABEL:;
}
/* method abstract_compiler$StaticFrame$mpropdef for (self: StaticFrame): MPropDef */
val* nitc___nitc__StaticFrame___mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <self:StaticFrame> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2027);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$StaticFrame$mpropdef= for (self: StaticFrame, MPropDef) */
void nitc___nitc__StaticFrame___mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___mpropdef].val = p0; /* _mpropdef on <self:StaticFrame> */
RET_LABEL:;
}
/* method abstract_compiler$StaticFrame$receiver for (self: StaticFrame): MClassType */
val* nitc___nitc__StaticFrame___receiver(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___receiver].val; /* _receiver on <self:StaticFrame> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2031);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$StaticFrame$receiver= for (self: StaticFrame, MClassType) */
void nitc___nitc__StaticFrame___receiver_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___receiver].val = p0; /* _receiver on <self:StaticFrame> */
RET_LABEL:;
}
/* method abstract_compiler$StaticFrame$arguments for (self: StaticFrame): Array[RuntimeVariable] */
val* nitc___nitc__StaticFrame___arguments(val* self) {
val* var /* : Array[RuntimeVariable] */;
val* var1 /* : Array[RuntimeVariable] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <self:StaticFrame> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2034);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$StaticFrame$arguments= for (self: StaticFrame, Array[RuntimeVariable]) */
void nitc___nitc__StaticFrame___arguments_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___arguments].val = p0; /* _arguments on <self:StaticFrame> */
RET_LABEL:;
}
/* method abstract_compiler$StaticFrame$returnvar for (self: StaticFrame): nullable RuntimeVariable */
val* nitc___nitc__StaticFrame___returnvar(val* self) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <self:StaticFrame> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$StaticFrame$returnvar= for (self: StaticFrame, nullable RuntimeVariable) */
void nitc___nitc__StaticFrame___returnvar_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnvar].val = p0; /* _returnvar on <self:StaticFrame> */
RET_LABEL:;
}
/* method abstract_compiler$StaticFrame$returnlabel for (self: StaticFrame): nullable String */
val* nitc___nitc__StaticFrame___returnlabel(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <self:StaticFrame> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$StaticFrame$returnlabel= for (self: StaticFrame, nullable String) */
void nitc___nitc__StaticFrame___returnlabel_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___returnlabel].val = p0; /* _returnlabel on <self:StaticFrame> */
RET_LABEL:;
}
/* method abstract_compiler$StaticFrame$escapemark_names for (self: StaticFrame): HashMap[EscapeMark, String] */
val* nitc___nitc__StaticFrame___escapemark_names(val* self) {
val* var /* : HashMap[EscapeMark, String] */;
val* var1 /* : HashMap[EscapeMark, String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___escapemark_names].val; /* _escapemark_names on <self:StaticFrame> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2043);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$StaticFrame$comprehension for (self: StaticFrame): nullable RuntimeVariable */
val* nitc___nitc__StaticFrame___comprehension(val* self) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___comprehension].val; /* _comprehension on <self:StaticFrame> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler$StaticFrame$comprehension= for (self: StaticFrame, nullable RuntimeVariable) */
void nitc___nitc__StaticFrame___comprehension_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__StaticFrame___comprehension].val = p0; /* _comprehension on <self:StaticFrame> */
RET_LABEL:;
}
/* method abstract_compiler$StaticFrame$init for (self: StaticFrame) */
void nitc___nitc__StaticFrame___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__StaticFrame___core__kernel__Object__init]))(self); /* init on <self:StaticFrame>*/
}
RET_LABEL:;
}
/* method abstract_compiler$MType$ctype for (self: MType): String */
val* nitc__abstract_compiler___MType___ctype(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "val*";
var4 = (val*)(4l<<2|1);
var5 = (val*)(4l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$MType$ctype_extern for (self: MType): String */
val* nitc__abstract_compiler___MType___ctype_extern(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "val*";
var4 = (val*)(4l<<2|1);
var5 = (val*)(4l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$MType$ctypename for (self: MType): String */
val* nitc__abstract_compiler___MType___ctypename(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "val";
var4 = (val*)(3l<<2|1);
var5 = (val*)(3l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler$MType$is_c_primitive for (self: MType): Bool */
short int nitc__abstract_compiler___MType___is_c_primitive(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
