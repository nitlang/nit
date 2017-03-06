#include "nitc__modelbuilder_base.sep.0.h"
/* method modelbuilder_base$ToolContext$modelbuilder for (self: ToolContext): ModelBuilder */
val* nitc__modelbuilder_base___ToolContext___modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : nullable ModelBuilder */;
val* var3 /* : nullable ModelBuilder */;
{
{ /* Inline modelbuilder_base$ToolContext$modelbuilder_real (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__modelbuilder_base__ToolContext___modelbuilder_real].val; /* _modelbuilder_real on <self:ToolContext> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 36);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ToolContext$modelbuilder_real for (self: ToolContext): nullable ModelBuilder */
val* nitc__modelbuilder_base___ToolContext___modelbuilder_real(val* self) {
val* var /* : nullable ModelBuilder */;
val* var1 /* : nullable ModelBuilder */;
var1 = self->attrs[COLOR_nitc__modelbuilder_base__ToolContext___modelbuilder_real].val; /* _modelbuilder_real on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ToolContext$modelbuilder_real= for (self: ToolContext, nullable ModelBuilder) */
void nitc__modelbuilder_base___ToolContext___modelbuilder_real_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelbuilder_base__ToolContext___modelbuilder_real].val = p0; /* _modelbuilder_real on <self:ToolContext> */
RET_LABEL:;
}
/* method modelbuilder_base$ModelBuilder$model for (self: ModelBuilder): Model */
val* nitc___nitc__ModelBuilder___model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$model= for (self: ModelBuilder, Model) */
void nitc___nitc__ModelBuilder___model_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val = p0; /* _model on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelbuilder_base$ModelBuilder$toolcontext for (self: ModelBuilder): ToolContext */
val* nitc___nitc__ModelBuilder___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$toolcontext= for (self: ModelBuilder, ToolContext) */
void nitc___nitc__ModelBuilder___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val = p0; /* _toolcontext on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelbuilder_base$ModelBuilder$init for (self: ModelBuilder) */
void nitc___nitc__ModelBuilder___core__kernel__Object__init(val* self) {
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
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__ModelBuilder___core__kernel__Object__init]))(self); /* init on <self:ModelBuilder>*/
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var2 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ToolContext$modelbuilder_real (var) on <var:ToolContext> */
var5 = var->attrs[COLOR_nitc__modelbuilder_base__ToolContext___modelbuilder_real].val; /* _modelbuilder_real on <var:ToolContext> */
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
{ /* Inline kernel$Object$== (var3,((val*)NULL)) on <var3:nullable ModelBuilder> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var3,var_other) on <var3:nullable ModelBuilder(ModelBuilder)> */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 54);
fatal_exit(1);
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var14 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline modelbuilder_base$ToolContext$modelbuilder_real= (var12,self) on <var12:ToolContext> */
var12->attrs[COLOR_nitc__modelbuilder_base__ToolContext___modelbuilder_real].val = self; /* _modelbuilder_real on <var12:ToolContext> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method modelbuilder_base$ModelBuilder$try_get_mclass_by_name for (self: ModelBuilder, ANode, MModule, String): nullable MClass */
val* nitc___nitc__ModelBuilder___try_get_mclass_by_name(val* self, val* p0, val* p1, val* p2) {
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
val* var7 /* : IndexedIterator[nullable Object] */;
val* var_8 /* var : IndexedIterator[MClass] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var11 /* : POSetElement[MModule] */;
val* var13 /* : POSetElement[MModule] */;
val* var14 /* : MModule */;
val* var16 /* : MModule */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var20 /* : MModule */;
val* var22 /* : MModule */;
val* var23 /* : MVisibility */;
val* var25 /* : MVisibility */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : NativeArray[String] */;
static val* varonce;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Bool */;
val* var42 /* : nullable Bool */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Bool */;
val* var58 /* : nullable Bool */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : CString */;
val* var62 /* : String */;
val* var63 /* : nullable Int */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Bool */;
val* var66 /* : nullable Bool */;
val* var67 /* : String */;
val* var68 /* : String */;
val* var69 /* : String */;
var_anode = p0;
var_mmodule = p1;
var_name = p2;
{
{ /* Inline modelbuilder_base$ModelBuilder$model (self) on <self:ModelBuilder> */
var3 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__model___Model___get_mclasses_by_name(var1, var_name);
}
var_classes = var4;
if (var_classes == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = core___core__Array___core__kernel__Object___61d_61d(var_classes, ((val*)NULL));
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
var7 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:IndexedIterator[MClass]>*/
}
if (var9){
} else {
goto BREAK_label;
}
{
var10 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:IndexedIterator[MClass]>*/
}
var_mclass = var10;
{
{ /* Inline mmodule$MModule$in_importation (var_mmodule) on <var_mmodule:MModule> */
var13 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model$MClass$intro_mmodule (var_mclass) on <var_mclass:MClass> */
var16 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
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
goto BREAK_label19;
} else {
}
{
{ /* Inline model$MClass$intro_mmodule (var_mclass) on <var_mclass:MClass> */
var22 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var22 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (var_mclass) on <var_mclass:MClass> */
var25 = var_mclass->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var_mclass:MClass> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nitc___nitc__MModule___is_visible(var_mmodule, var20, var23);
}
var27 = !var26;
if (var27){
goto BREAK_label19;
} else {
}
if (var_res == NULL) {
var28 = 1; /* is null */
} else {
var28 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other) on <var_res:nullable MClass(MClass)> */
var33 = var_res == var_other;
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
var_res = var_mclass;
} else {
if (unlikely(varonce==NULL)) {
var34 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "Error: ambiguous class name `";
var39 = (val*)(29l<<2|1);
var40 = (val*)(29l<<2|1);
var41 = (val*)((long)(0)<<2|3);
var42 = (val*)((long)(0)<<2|3);
var38 = core__flat___CString___to_s_unsafe(var37, var39, var40, var41, var42);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var34)->values[0]=var36;
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "`; conflict between `";
var47 = (val*)(21l<<2|1);
var48 = (val*)(21l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var34)->values[2]=var44;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "` and `";
var55 = (val*)(7l<<2|1);
var56 = (val*)(7l<<2|1);
var57 = (val*)((long)(0)<<2|3);
var58 = (val*)((long)(0)<<2|3);
var54 = core__flat___CString___to_s_unsafe(var53, var55, var56, var57, var58);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var34)->values[4]=var52;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "`.";
var63 = (val*)(2l<<2|1);
var64 = (val*)(2l<<2|1);
var65 = (val*)((long)(0)<<2|3);
var66 = (val*)((long)(0)<<2|3);
var62 = core__flat___CString___to_s_unsafe(var61, var63, var64, var65, var66);
var60 = var62;
varonce59 = var60;
}
((struct instance_core__NativeArray*)var34)->values[6]=var60;
} else {
var34 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var34)->values[1]=var_name;
{
var67 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_mclass);
}
((struct instance_core__NativeArray*)var34)->values[3]=var67;
{
var68 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_res);
}
((struct instance_core__NativeArray*)var34)->values[5]=var68;
{
var69 = ((val*(*)(val* self))(var34->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var34); /* native_to_s on <var34:NativeArray[String]>*/
}
varonce = var34;
{
nitc___nitc__ModelBuilder___error(self, var_anode, var69); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
}
BREAK_label19: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:IndexedIterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:IndexedIterator[MClass]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$try_get_mclass_by_qid for (self: ModelBuilder, AQclassid, MModule): nullable MClass */
val* nitc___nitc__ModelBuilder___try_get_mclass_by_qid(val* self, val* p0, val* p1) {
val* var /* : nullable MClass */;
val* var_qid /* var qid: AQclassid */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : TClassid */;
val* var3 /* : TClassid */;
val* var4 /* : String */;
val* var_name /* var name: String */;
val* var5 /* : Model */;
val* var7 /* : Model */;
val* var8 /* : nullable Array[MClass] */;
val* var_classes /* var classes: nullable Array[MClass] */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_res /* var res: nullable MClass */;
val* var_ /* var : Array[MClass] */;
val* var11 /* : IndexedIterator[nullable Object] */;
val* var_12 /* var : IndexedIterator[MClass] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_mclass /* var mclass: MClass */;
val* var15 /* : POSetElement[MModule] */;
val* var17 /* : POSetElement[MModule] */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var24 /* : MModule */;
val* var26 /* : MModule */;
val* var27 /* : MVisibility */;
val* var29 /* : MVisibility */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
var_qid = p0;
var_mmodule = p1;
{
{ /* Inline parser_nodes$AQclassid$n_id (var_qid) on <var_qid:AQclassid> */
var3 = var_qid->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val; /* _n_id on <var_qid:AQclassid> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1733);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__lexer_work___Token___text(var1);
}
var_name = var4;
{
{ /* Inline modelbuilder_base$ModelBuilder$model (self) on <self:ModelBuilder> */
var7 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc__model___Model___get_mclasses_by_name(var5, var_name);
}
var_classes = var8;
if (var_classes == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
var10 = core___core__Array___core__kernel__Object___61d_61d(var_classes, ((val*)NULL));
var9 = var10;
}
if (var9){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var_res = ((val*)NULL);
var_ = var_classes;
{
var11 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:IndexedIterator[MClass]>*/
}
if (var13){
} else {
goto BREAK_label;
}
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:IndexedIterator[MClass]>*/
}
var_mclass = var14;
{
{ /* Inline mmodule$MModule$in_importation (var_mmodule) on <var_mmodule:MModule> */
var17 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model$MClass$intro_mmodule (var_mclass) on <var_mclass:MClass> */
var20 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = poset___poset__POSetElement____60d_61d(var15, var18);
}
var22 = !var21;
if (var22){
goto BREAK_label23;
} else {
}
{
{ /* Inline model$MClass$intro_mmodule (var_mclass) on <var_mclass:MClass> */
var26 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (var_mclass) on <var_mclass:MClass> */
var29 = var_mclass->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var_mclass:MClass> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nitc___nitc__MModule___is_visible(var_mmodule, var24, var27);
}
var31 = !var30;
if (var31){
goto BREAK_label23;
} else {
}
{
var32 = nitc__modelbuilder_base___AQclassid___accept(var_qid, var_mclass);
}
var33 = !var32;
if (var33){
goto BREAK_label23;
} else {
}
if (var_res == NULL) {
var34 = 1; /* is null */
} else {
var34 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other) on <var_res:nullable MClass(MClass)> */
var39 = var_res == var_other;
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
var_res = var_mclass;
} else {
var = ((val*)NULL);
goto RET_LABEL;
}
BREAK_label23: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:IndexedIterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:IndexedIterator[MClass]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$get_mclass_by_name for (self: ModelBuilder, ANode, MModule, String): nullable MClass */
val* nitc___nitc__ModelBuilder___get_mclass_by_name(val* self, val* p0, val* p1, val* p2) {
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
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Bool */;
val* var16 /* : nullable Bool */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Bool */;
val* var24 /* : nullable Bool */;
val* var25 /* : String */;
var_node = p0;
var_mmodule = p1;
var_name = p2;
{
var1 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(self, var_node, var_mmodule, var_name);
}
var_mclass = var1;
if (var_mclass == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
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
var8 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "Type Error: missing primitive class `";
var13 = (val*)(37l<<2|1);
var14 = (val*)(37l<<2|1);
var15 = (val*)((long)(0)<<2|3);
var16 = (val*)((long)(0)<<2|3);
var12 = core__flat___CString___to_s_unsafe(var11, var13, var14, var15, var16);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var8)->values[0]=var10;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "\'.";
var21 = (val*)(2l<<2|1);
var22 = (val*)(2l<<2|1);
var23 = (val*)((long)(0)<<2|3);
var24 = (val*)((long)(0)<<2|3);
var20 = core__flat___CString___to_s_unsafe(var19, var21, var22, var23, var24);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var8)->values[2]=var18;
} else {
var8 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var8)->values[1]=var_name;
{
var25 = ((val*(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce = var8;
{
nitc___nitc__ModelBuilder___error(self, var_node, var25); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
}
var = var_mclass;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$try_get_mproperty_by_name2 for (self: ModelBuilder, ANode, MModule, MType, String): nullable MProperty */
val* nitc___nitc__ModelBuilder___try_get_mproperty_by_name2(val* self, val* p0, val* p1, val* p2, val* p3) {
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
val* var16 /* : IndexedIterator[nullable Object] */;
val* var_17 /* var : IndexedIterator[MProperty] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_mprop /* var mprop: MProperty */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var23 /* : MClassDef */;
val* var25 /* : MClassDef */;
val* var26 /* : MModule */;
val* var28 /* : MModule */;
val* var29 /* : MVisibility */;
val* var31 /* : MVisibility */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
int cltype;
int idtype;
short int var_37 /* var : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var_41 /* var : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
short int var46 /* : Bool */;
short int var_47 /* var : Bool */;
val* var48 /* : MClassDef */;
val* var50 /* : MClassDef */;
val* var51 /* : MClass */;
val* var53 /* : MClass */;
val* var54 /* : MClass */;
val* var56 /* : MClass */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
val* var_other64 /* var other: nullable Object */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
short int var_74 /* var : Bool */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
short int var_78 /* var : Bool */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
short int var_82 /* var : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
val* var86 /* : MClassDef */;
val* var88 /* : MClassDef */;
val* var89 /* : MClassType */;
val* var91 /* : MClassType */;
val* var_restype /* var restype: MClassType */;
val* var92 /* : MClassDef */;
val* var94 /* : MClassDef */;
val* var95 /* : MClassType */;
val* var97 /* : MClassType */;
val* var_mproptype /* var mproptype: MClassType */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
val* var101 /* : Array[MProperty] */;
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
val* var126 /* : IndexedIterator[nullable Object] */;
val* var_127 /* var : IndexedIterator[MProperty] */;
short int var128 /* : Bool */;
val* var130 /* : nullable Object */;
val* var_mprop131 /* var mprop: MProperty */;
val* var132 /* : MClassDef */;
val* var134 /* : MClassDef */;
val* var135 /* : MClassType */;
val* var137 /* : MClassType */;
val* var_mproptype138 /* var mproptype: MClassType */;
short int var139 /* : Bool */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
int cltype143;
int idtype144;
short int var145 /* : Bool */;
short int var_146 /* var : Bool */;
short int var147 /* : Bool */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
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
val* var168 /* : IndexedIterator[nullable Object] */;
val* var_169 /* var : IndexedIterator[MProperty] */;
short int var170 /* : Bool */;
val* var172 /* : nullable Object */;
val* var_mprop173 /* var mprop: MProperty */;
val* var174 /* : String */;
val* var175 /* : NativeArray[String] */;
static val* varonce;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : CString */;
val* var179 /* : String */;
val* var180 /* : nullable Int */;
val* var181 /* : nullable Int */;
val* var182 /* : nullable Bool */;
val* var183 /* : nullable Bool */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : CString */;
val* var187 /* : String */;
val* var188 /* : nullable Int */;
val* var189 /* : nullable Int */;
val* var190 /* : nullable Bool */;
val* var191 /* : nullable Bool */;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : CString */;
val* var195 /* : String */;
val* var196 /* : nullable Int */;
val* var197 /* : nullable Int */;
val* var198 /* : nullable Bool */;
val* var199 /* : nullable Bool */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : CString */;
val* var203 /* : String */;
val* var204 /* : nullable Int */;
val* var205 /* : nullable Int */;
val* var206 /* : nullable Bool */;
val* var207 /* : nullable Bool */;
val* var208 /* : String */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : CString */;
val* var212 /* : String */;
val* var213 /* : nullable Int */;
val* var214 /* : nullable Int */;
val* var215 /* : nullable Bool */;
val* var216 /* : nullable Bool */;
val* var217 /* : String */;
val* var218 /* : String */;
val* var219 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var221 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
var_anode = p0;
var_mmodule = p1;
var_mtype = p2;
var_name = p3;
{
{ /* Inline modelbuilder_base$ModelBuilder$model (self) on <self:ModelBuilder> */
var3 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__model___Model___get_mproperties_by_name(var1, var_name);
}
var_props = var4;
if (var_props == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = core___core__Array___core__kernel__Object___61d_61d(var_props, ((val*)NULL));
var5 = var6;
}
if (var5){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder_base$ModelBuilder$try_get_mproperty_by_name2_cache (self) on <self:ModelBuilder> */
var9 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___try_get_mproperty_by_name2_cache].val; /* _try_get_mproperty_by_name2_cache on <self:ModelBuilder> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_get_mproperty_by_name2_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 208);
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
{ /* Inline kernel$Object$!= (var_cache,((val*)NULL)) on <var_cache:nullable MProperty> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))(var_cache->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cache, var_other); /* == on <var_cache:nullable MProperty(MProperty)>*/
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
var16 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:IndexedIterator[MProperty]>*/
}
if (var18){
} else {
goto BREAK_label;
}
{
var19 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:IndexedIterator[MProperty]>*/
}
var_mprop = var19;
{
var20 = nitc___nitc__MType___has_mproperty(var_mtype, var_mmodule, var_mprop);
}
var21 = !var20;
if (var21){
goto BREAK_label22;
} else {
}
{
{ /* Inline model$MProperty$intro_mclassdef (var_mprop) on <var_mprop:MProperty> */
var25 = var_mprop->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty> */
if (unlikely(var25 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var23) on <var23:MClassDef> */
var28 = var23->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var23:MClassDef> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model$MProperty$visibility (var_mprop) on <var_mprop:MProperty> */
var31 = var_mprop->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mprop:MProperty> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = nitc___nitc__MModule___is_visible(var_mmodule, var26, var29);
}
var33 = !var32;
if (var33){
goto BREAK_label22;
} else {
}
/* <var_mprop:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var_mprop->type->table_size) {
var36 = 0;
} else {
var36 = var_mprop->type->type_table[cltype] == idtype;
}
var_37 = var36;
if (var36){
{
{ /* Inline model$MMethod$is_new (var_mprop) on <var_mprop:MProperty(MMethod)> */
var40 = var_mprop->attrs[COLOR_nitc__model__MMethod___is_new].s; /* _is_new on <var_mprop:MProperty(MMethod)> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
var35 = var38;
} else {
var35 = var_37;
}
var_41 = var35;
if (var35){
/* <var_mtype:MType> isa MClassType */
cltype44 = type_nitc__MClassType.color;
idtype45 = type_nitc__MClassType.id;
if(cltype44 >= var_mtype->type->table_size) {
var43 = 0;
} else {
var43 = var_mtype->type->type_table[cltype44] == idtype45;
}
var46 = !var43;
var_47 = var46;
if (var46){
var42 = var_47;
} else {
{
{ /* Inline model$MProperty$intro_mclassdef (var_mprop) on <var_mprop:MProperty(MMethod)> */
var50 = var_mprop->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty(MMethod)> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var48) on <var48:MClassDef> */
var53 = var48->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var48:MClassDef> */
if (unlikely(var53 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var56 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var56 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var51,var54) on <var51:MClass> */
var_other = var54;
{
var59 = ((short int(*)(val* self, val* p0))(var51->class->vft[COLOR_core__kernel__Object___61d_61d]))(var51, var_other); /* == on <var51:MClass>*/
}
var60 = !var59;
var57 = var60;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var42 = var57;
}
var34 = var42;
} else {
var34 = var_41;
}
if (var34){
goto BREAK_label22;
} else {
}
if (var_res == NULL) {
var61 = 1; /* is null */
} else {
var61 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable MProperty> */
var_other64 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other64) on <var_res:nullable MProperty(MProperty)> */
var67 = var_res == var_other64;
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var62 = var65;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
if (var61){
var_res = var_mprop;
goto BREAK_label22;
} else {
}
/* <var_res:nullable MProperty(MProperty)> isa MMethod */
cltype72 = type_nitc__MMethod.color;
idtype73 = type_nitc__MMethod.id;
if(cltype72 >= var_res->type->table_size) {
var71 = 0;
} else {
var71 = var_res->type->type_table[cltype72] == idtype73;
}
var_74 = var71;
if (var71){
/* <var_mprop:MProperty> isa MMethod */
cltype76 = type_nitc__MMethod.color;
idtype77 = type_nitc__MMethod.id;
if(cltype76 >= var_mprop->type->table_size) {
var75 = 0;
} else {
var75 = var_mprop->type->type_table[cltype76] == idtype77;
}
var70 = var75;
} else {
var70 = var_74;
}
var_78 = var70;
if (var70){
{
{ /* Inline model$MMethod$is_init (var_res) on <var_res:nullable MProperty(MMethod)> */
var81 = var_res->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var_res:nullable MProperty(MMethod)> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
var69 = var79;
} else {
var69 = var_78;
}
var_82 = var69;
if (var69){
{
{ /* Inline model$MMethod$is_init (var_mprop) on <var_mprop:MProperty(MMethod)> */
var85 = var_mprop->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var_mprop:MProperty(MMethod)> */
var83 = var85;
RET_LABEL84:(void)0;
}
}
var68 = var83;
} else {
var68 = var_82;
}
if (var68){
{
{ /* Inline model$MProperty$intro_mclassdef (var_res) on <var_res:nullable MProperty(MMethod)> */
var88 = var_res->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_res:nullable MProperty(MMethod)> */
if (unlikely(var88 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var86) on <var86:MClassDef> */
var91 = var86->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var86:MClassDef> */
if (unlikely(var91 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
var_restype = var89;
{
{ /* Inline model$MProperty$intro_mclassdef (var_mprop) on <var_mprop:MProperty(MMethod)> */
var94 = var_mprop->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop:MProperty(MMethod)> */
if (unlikely(var94 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var92) on <var92:MClassDef> */
var97 = var92->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var92:MClassDef> */
if (unlikely(var97 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
var_mproptype = var95;
{
var98 = nitc___nitc__MType___is_subtype(var_mproptype, var_mmodule, ((val*)NULL), var_restype);
}
if (var98){
var_res = var_mprop;
goto BREAK_label22;
} else {
}
} else {
}
if (var_ress == NULL) {
var99 = 1; /* is null */
} else {
var99 = 0; /* arg is null but recv is not */
}
if (0) {
var100 = core___core__Array___core__kernel__Object___61d_61d(var_ress, ((val*)NULL));
var99 = var100;
}
if (var99){
var101 = NEW_core__Array(&type_core__Array__nitc__MProperty);
{
core___core__Array___core__kernel__Object__init(var101); /* Direct call array$Array$init on <var101:Array[MProperty]>*/
}
var_ress = var101;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_ress, var_res); /* Direct call array$Array$add on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_ress, var_mprop); /* Direct call array$Array$add on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
}
BREAK_label22: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:IndexedIterator[MProperty]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:IndexedIterator[MProperty]>*/
}
if (var_ress == NULL) {
var104 = 0; /* is null */
} else {
var104 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ress,((val*)NULL)) on <var_ress:nullable Array[MProperty]> */
var_other = ((val*)NULL);
{
var107 = ((short int(*)(val* self, val* p0))(var_ress->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ress, var_other); /* == on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
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
cltype111 = type_nitc__MMethod.color;
idtype112 = type_nitc__MMethod.id;
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
{ /* Inline model$MMethod$is_init (var_res) on <var_res:nullable MProperty(MMethod)> */
var116 = var_res->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var_res:nullable MProperty(MMethod)> */
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
{ /* Inline model$MProperty$intro_mclassdef (var_res) on <var_res:nullable MProperty(MMethod)> */
var119 = var_res->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_res:nullable MProperty(MMethod)> */
if (unlikely(var119 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var117) on <var117:MClassDef> */
var122 = var117->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var117:MClassDef> */
if (unlikely(var122 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
var_restype123 = var120;
var124 = NEW_core__Array(&type_core__Array__nitc__MProperty);
{
core___core__Array___core__kernel__Object__init(var124); /* Direct call array$Array$init on <var124:Array[MProperty]>*/
}
var_ress2 = var124;
var_125 = var_ress;
{
var126 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_125);
}
var_127 = var126;
for(;;) {
{
var128 = ((short int(*)(val* self))((((long)var_127&3)?class_info[((long)var_127&3)]:var_127->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_127); /* is_ok on <var_127:IndexedIterator[MProperty]>*/
}
if (var128){
} else {
goto BREAK_label129;
}
{
var130 = ((val*(*)(val* self))((((long)var_127&3)?class_info[((long)var_127&3)]:var_127->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_127); /* item on <var_127:IndexedIterator[MProperty]>*/
}
var_mprop131 = var130;
{
{ /* Inline model$MProperty$intro_mclassdef (var_mprop131) on <var_mprop131:MProperty> */
var134 = var_mprop131->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var_mprop131:MProperty> */
if (unlikely(var134 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var132) on <var132:MClassDef> */
var137 = var132->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var132:MClassDef> */
if (unlikely(var137 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
var_mproptype138 = var135;
{
var139 = nitc___nitc__MType___is_subtype(var_restype123, var_mmodule, ((val*)NULL), var_mproptype138);
}
var140 = !var139;
if (var140){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_ress2, var_mprop131); /* Direct call array$Array$add on <var_ress2:Array[MProperty]>*/
}
} else {
/* <var_mprop131:MProperty> isa MMethod */
cltype143 = type_nitc__MMethod.color;
idtype144 = type_nitc__MMethod.id;
if(cltype143 >= var_mprop131->type->table_size) {
var142 = 0;
} else {
var142 = var_mprop131->type->type_table[cltype143] == idtype144;
}
var145 = !var142;
var_146 = var145;
if (var145){
var141 = var_146;
} else {
{
{ /* Inline model$MMethod$is_init (var_mprop131) on <var_mprop131:MProperty(MMethod)> */
var149 = var_mprop131->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var_mprop131:MProperty(MMethod)> */
var147 = var149;
RET_LABEL148:(void)0;
}
}
var150 = !var147;
var141 = var150;
}
if (var141){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_ress2, var_mprop131); /* Direct call array$Array$add on <var_ress2:Array[MProperty]>*/
}
} else {
}
}
{
((void(*)(val* self))((((long)var_127&3)?class_info[((long)var_127&3)]:var_127->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_127); /* next on <var_127:IndexedIterator[MProperty]>*/
}
}
BREAK_label129: (void)0;
{
((void(*)(val* self))((((long)var_127&3)?class_info[((long)var_127&3)]:var_127->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_127); /* finish on <var_127:IndexedIterator[MProperty]>*/
}
{
var151 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_ress2);
}
if (var151){
var_ress = ((val*)NULL);
} else {
var_ress = var_ress2;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_ress, var_res); /* Direct call array$Array$add on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
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
{ /* Inline kernel$Object$!= (var_ress,((val*)NULL)) on <var_ress:nullable Array[MProperty]> */
var_other = ((val*)NULL);
{
var155 = ((short int(*)(val* self, val* p0))(var_ress->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ress, var_other); /* == on <var_ress:nullable Array[MProperty](Array[MProperty])>*/
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
{ /* Inline array$AbstractArrayRead$length (var_ress) on <var_ress:nullable Array[MProperty](Array[MProperty])> */
var159 = var_ress->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_ress:nullable Array[MProperty](Array[MProperty])> */
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var157,1l) on <var157:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var162 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var162)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var165 = var157 > 1l;
var160 = var165;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
}
if (unlikely(!var160)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 198);
fatal_exit(1);
}
var166 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var166); /* Direct call array$Array$init on <var166:Array[String]>*/
}
var_s = var166;
var_167 = var_ress;
{
var168 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_167);
}
var_169 = var168;
for(;;) {
{
var170 = ((short int(*)(val* self))((((long)var_169&3)?class_info[((long)var_169&3)]:var_169->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_169); /* is_ok on <var_169:IndexedIterator[MProperty]>*/
}
if (var170){
} else {
goto BREAK_label171;
}
{
var172 = ((val*(*)(val* self))((((long)var_169&3)?class_info[((long)var_169&3)]:var_169->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_169); /* item on <var_169:IndexedIterator[MProperty]>*/
}
var_mprop173 = var172;
{
var174 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mprop173);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_s, var174); /* Direct call array$Array$add on <var_s:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_169&3)?class_info[((long)var_169&3)]:var_169->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_169); /* next on <var_169:IndexedIterator[MProperty]>*/
}
}
BREAK_label171: (void)0;
{
((void(*)(val* self))((((long)var_169&3)?class_info[((long)var_169&3)]:var_169->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_169); /* finish on <var_169:IndexedIterator[MProperty]>*/
}
if (unlikely(varonce==NULL)) {
var175 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "Error: ambiguous property name `";
var180 = (val*)(32l<<2|1);
var181 = (val*)(32l<<2|1);
var182 = (val*)((long)(0)<<2|3);
var183 = (val*)((long)(0)<<2|3);
var179 = core__flat___CString___to_s_unsafe(var178, var180, var181, var182, var183);
var177 = var179;
varonce176 = var177;
}
((struct instance_core__NativeArray*)var175)->values[0]=var177;
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = "` for `";
var188 = (val*)(7l<<2|1);
var189 = (val*)(7l<<2|1);
var190 = (val*)((long)(0)<<2|3);
var191 = (val*)((long)(0)<<2|3);
var187 = core__flat___CString___to_s_unsafe(var186, var188, var189, var190, var191);
var185 = var187;
varonce184 = var185;
}
((struct instance_core__NativeArray*)var175)->values[2]=var185;
if (likely(varonce192!=NULL)) {
var193 = varonce192;
} else {
var194 = "`; conflict between ";
var196 = (val*)(20l<<2|1);
var197 = (val*)(20l<<2|1);
var198 = (val*)((long)(0)<<2|3);
var199 = (val*)((long)(0)<<2|3);
var195 = core__flat___CString___to_s_unsafe(var194, var196, var197, var198, var199);
var193 = var195;
varonce192 = var193;
}
((struct instance_core__NativeArray*)var175)->values[4]=var193;
if (likely(varonce200!=NULL)) {
var201 = varonce200;
} else {
var202 = ".";
var204 = (val*)(1l<<2|1);
var205 = (val*)(1l<<2|1);
var206 = (val*)((long)(0)<<2|3);
var207 = (val*)((long)(0)<<2|3);
var203 = core__flat___CString___to_s_unsafe(var202, var204, var205, var206, var207);
var201 = var203;
varonce200 = var201;
}
((struct instance_core__NativeArray*)var175)->values[6]=var201;
} else {
var175 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var175)->values[1]=var_name;
{
var208 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var175)->values[3]=var208;
if (likely(varonce209!=NULL)) {
var210 = varonce209;
} else {
var211 = " and ";
var213 = (val*)(5l<<2|1);
var214 = (val*)(5l<<2|1);
var215 = (val*)((long)(0)<<2|3);
var216 = (val*)((long)(0)<<2|3);
var212 = core__flat___CString___to_s_unsafe(var211, var213, var214, var215, var216);
var210 = var212;
varonce209 = var210;
}
{
var217 = core__abstract_text___Collection___join(var_s, var210, ((val*)NULL));
}
((struct instance_core__NativeArray*)var175)->values[5]=var217;
{
var218 = ((val*(*)(val* self))(var175->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var175); /* native_to_s on <var175:NativeArray[String]>*/
}
varonce = var175;
{
nitc___nitc__ModelBuilder___error(self, var_anode, var218); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline modelbuilder_base$ModelBuilder$try_get_mproperty_by_name2_cache (self) on <self:ModelBuilder> */
var221 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___try_get_mproperty_by_name2_cache].val; /* _try_get_mproperty_by_name2_cache on <self:ModelBuilder> */
if (unlikely(var221 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_get_mproperty_by_name2_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 208);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
more_collections___more_collections__HashMap3____91d_93d_61d(var219, var_mmodule, var_mtype, var_name, var_res); /* Direct call more_collections$HashMap3$[]= on <var219:HashMap3[MModule, MType, String, nullable MProperty]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$try_get_mproperty_by_name2_cache for (self: ModelBuilder): HashMap3[MModule, MType, String, nullable MProperty] */
val* nitc___nitc__ModelBuilder___try_get_mproperty_by_name2_cache(val* self) {
val* var /* : HashMap3[MModule, MType, String, nullable MProperty] */;
val* var1 /* : HashMap3[MModule, MType, String, nullable MProperty] */;
var1 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___try_get_mproperty_by_name2_cache].val; /* _try_get_mproperty_by_name2_cache on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_get_mproperty_by_name2_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 208);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$try_get_mproperty_by_name for (self: ModelBuilder, ANode, MClassDef, String): nullable MProperty */
val* nitc___nitc__ModelBuilder___try_get_mproperty_by_name(val* self, val* p0, val* p1, val* p2) {
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
{ /* Inline model$MClassDef$mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var3 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var6 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name2(self, var_anode, var1, var4, var_name);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$error for (self: ModelBuilder, nullable ANode, String) */
void nitc___nitc__ModelBuilder___error(val* self, val* p0, val* p1) {
val* var_n /* var n: nullable ANode */;
val* var_text /* var text: String */;
val* var_l /* var l: nullable Object */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Location */;
val* var7 /* : ToolContext */;
val* var9 /* : ToolContext */;
val* var10 /* : Message */;
var_n = p0;
var_text = p1;
var_l = ((val*)NULL);
if (var_n == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_n,((val*)NULL)) on <var_n:nullable ANode> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n, var_other); /* == on <var_n:nullable ANode(ANode)>*/
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
var5 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nitc__parser_nodes__ANode__hot_location]))(var_n); /* hot_location on <var_n:nullable ANode(ANode)>*/
}
var_l = var5;
{
{ /* Inline modelbuilder_base$ANode$is_broken= (var_n,1) on <var_n:nullable ANode(ANode)> */
var_n->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = 1; /* _is_broken on <var_n:nullable ANode(ANode)> */
RET_LABEL6:(void)0;
}
}
} else {
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var9 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc___nitc__ToolContext___error(var7, var_l, var_text);
}
RET_LABEL:;
}
/* method modelbuilder_base$ModelBuilder$warning for (self: ModelBuilder, nullable ANode, String, String) */
void nitc___nitc__ModelBuilder___warning(val* self, val* p0, val* p1, val* p2) {
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
{ /* Inline kernel$Object$!= (var_n,((val*)NULL)) on <var_n:nullable ANode> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n, var_other); /* == on <var_n:nullable ANode(ANode)>*/
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
var5 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nitc__parser_nodes__ANode__hot_location]))(var_n); /* hot_location on <var_n:nullable ANode(ANode)>*/
}
var_l = var5;
} else {
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var8 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
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
var9 = nitc___nitc__ToolContext___warning(var6, var_l, var_tag, var_text);
}
RET_LABEL:;
}
/* method modelbuilder_base$ModelBuilder$advice for (self: ModelBuilder, nullable ANode, String, String) */
void nitc___nitc__ModelBuilder___advice(val* self, val* p0, val* p1, val* p2) {
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
{ /* Inline kernel$Object$!= (var_n,((val*)NULL)) on <var_n:nullable ANode> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n, var_other); /* == on <var_n:nullable ANode(ANode)>*/
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
var5 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nitc__parser_nodes__ANode__hot_location]))(var_n); /* hot_location on <var_n:nullable ANode(ANode)>*/
}
var_l = var5;
} else {
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var8 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
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
var9 = nitc___nitc__ToolContext___advice(var6, var_l, var_tag, var_text);
}
RET_LABEL:;
}
/* method modelbuilder_base$ModelBuilder$force_get_primitive_method for (self: ModelBuilder, nullable ANode, String, MClass, MModule): MMethod */
val* nitc___nitc__ModelBuilder___force_get_primitive_method(val* self, val* p0, val* p1, val* p2, val* p3) {
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
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable Bool */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Bool */;
val* var34 /* : nullable Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Bool */;
val* var42 /* : nullable Bool */;
val* var43 /* : String */;
val* var44 /* : String */;
var_n = p0;
var_name = p1;
var_recv = p2;
var_mmodule = p3;
{
var1 = nitc__model___MModule___try_get_primitive_method(var_mmodule, var_name, var_recv);
}
var_res = var1;
if (var_res == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other) on <var_res:nullable MMethod(MMethod)> */
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
{ /* Inline kernel$Object$!= (var_n,((val*)NULL)) on <var_n:nullable ANode> */
var_other11 = ((val*)NULL);
{
var12 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n, var_other11); /* == on <var_n:nullable ANode(ANode)>*/
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
var14 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nitc__parser_nodes__ANode__hot_location]))(var_n); /* hot_location on <var_n:nullable ANode(ANode)>*/
}
var_l = var14;
} else {
}
{
{ /* Inline modelbuilder_base$ModelBuilder$toolcontext (self) on <self:ModelBuilder> */
var17 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var18 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "Fatal Error: `";
var23 = (val*)(14l<<2|1);
var24 = (val*)(14l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var18)->values[0]=var20;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "` must have a property named `";
var31 = (val*)(30l<<2|1);
var32 = (val*)(30l<<2|1);
var33 = (val*)((long)(0)<<2|3);
var34 = (val*)((long)(0)<<2|3);
var30 = core__flat___CString___to_s_unsafe(var29, var31, var32, var33, var34);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var18)->values[2]=var28;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "`.";
var39 = (val*)(2l<<2|1);
var40 = (val*)(2l<<2|1);
var41 = (val*)((long)(0)<<2|3);
var42 = (val*)((long)(0)<<2|3);
var38 = core__flat___CString___to_s_unsafe(var37, var39, var40, var41, var42);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var18)->values[4]=var36;
} else {
var18 = varonce;
varonce = NULL;
}
{
var43 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:MClass>*/
}
((struct instance_core__NativeArray*)var18)->values[1]=var43;
((struct instance_core__NativeArray*)var18)->values[3]=var_name;
{
var44 = ((val*(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce = var18;
{
nitc___nitc__ToolContext___fatal_error(var15, var_l, var44); /* Direct call toolcontext$ToolContext$fatal_error on <var15:ToolContext>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 257);
fatal_exit(1);
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$resolve_mtype_unchecked for (self: ModelBuilder, MModule, nullable MClassDef, AType, Bool): nullable MType */
val* nitc___nitc__ModelBuilder___resolve_mtype_unchecked(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : nullable MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
val* var_ntype /* var ntype: AType */;
short int var_with_virtual /* var with_virtual: Bool */;
val* var1 /* : AQclassid */;
val* var3 /* : AQclassid */;
val* var_qid /* var qid: AQclassid */;
val* var4 /* : TClassid */;
val* var6 /* : TClassid */;
val* var7 /* : String */;
val* var_name /* var name: String */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
val* var14 /* : nullable MProperty */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_prop /* var prop: nullable MVirtualTypeProp */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : ANodes[AType] */;
val* var23 /* : ANodes[AType] */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : NativeArray[String] */;
static val* varonce;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Bool */;
val* var34 /* : nullable Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Bool */;
val* var42 /* : nullable Bool */;
val* var43 /* : String */;
val* var44 /* : MVirtualType */;
val* var46 /* : MVirtualType */;
val* var_res /* var res: MType */;
val* var47 /* : nullable TKwnullable */;
val* var49 /* : nullable TKwnullable */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : MType */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var62 /* : MClass */;
val* var64 /* : MClass */;
val* var65 /* : Array[MParameterType] */;
val* var67 /* : Array[MParameterType] */;
val* var_68 /* var : Array[MParameterType] */;
val* var69 /* : IndexedIterator[nullable Object] */;
val* var_70 /* var : IndexedIterator[MParameterType] */;
short int var71 /* : Bool */;
val* var72 /* : nullable Object */;
val* var_p /* var p: MParameterType */;
val* var73 /* : String */;
val* var75 /* : String */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
val* var81 /* : ANodes[AType] */;
val* var83 /* : ANodes[AType] */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
val* var87 /* : NativeArray[String] */;
static val* varonce86;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : CString */;
val* var91 /* : String */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Int */;
val* var94 /* : nullable Bool */;
val* var95 /* : nullable Bool */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : CString */;
val* var99 /* : String */;
val* var100 /* : nullable Int */;
val* var101 /* : nullable Int */;
val* var102 /* : nullable Bool */;
val* var103 /* : nullable Bool */;
val* var104 /* : String */;
val* var105 /* : nullable TKwnullable */;
val* var107 /* : nullable TKwnullable */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
val* var113 /* : MType */;
val* var115 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
val* var121 /* : ANodes[AType] */;
val* var123 /* : ANodes[AType] */;
long var124 /* : Int */;
long var_arity /* var arity: Int */;
long var125 /* : Int */;
long var127 /* : Int */;
short int var128 /* : Bool */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
short int var132 /* : Bool */;
short int var134 /* : Bool */;
val* var136 /* : NativeArray[String] */;
static val* varonce135;
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
long var155 /* : Int */;
long var157 /* : Int */;
short int var158 /* : Bool */;
short int var160 /* : Bool */;
val* var162 /* : NativeArray[String] */;
static val* varonce161;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : CString */;
val* var166 /* : String */;
val* var167 /* : nullable Int */;
val* var168 /* : nullable Int */;
val* var169 /* : nullable Bool */;
val* var170 /* : nullable Bool */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : CString */;
val* var174 /* : String */;
val* var175 /* : nullable Int */;
val* var176 /* : nullable Int */;
val* var177 /* : nullable Bool */;
val* var178 /* : nullable Bool */;
val* var179 /* : String */;
val* var181 /* : NativeArray[String] */;
static val* varonce180;
static val* varonce182;
val* var183 /* : String */;
char* var184 /* : CString */;
val* var185 /* : String */;
val* var186 /* : nullable Int */;
val* var187 /* : nullable Int */;
val* var188 /* : nullable Bool */;
val* var189 /* : nullable Bool */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : CString */;
val* var193 /* : String */;
val* var194 /* : nullable Int */;
val* var195 /* : nullable Int */;
val* var196 /* : nullable Bool */;
val* var197 /* : nullable Bool */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : CString */;
val* var201 /* : String */;
val* var202 /* : nullable Int */;
val* var203 /* : nullable Int */;
val* var204 /* : nullable Bool */;
val* var205 /* : nullable Bool */;
static val* varonce206;
val* var207 /* : String */;
char* var208 /* : CString */;
val* var209 /* : String */;
val* var210 /* : nullable Int */;
val* var211 /* : nullable Int */;
val* var212 /* : nullable Bool */;
val* var213 /* : nullable Bool */;
long var214 /* : Int */;
long var216 /* : Int */;
val* var217 /* : String */;
val* var218 /* : String */;
val* var219 /* : String */;
val* var220 /* : String */;
short int var221 /* : Bool */;
short int var223 /* : Bool */;
val* var224 /* : MClassType */;
val* var226 /* : MClassType */;
val* var227 /* : nullable TKwnullable */;
val* var229 /* : nullable TKwnullable */;
short int var230 /* : Bool */;
short int var231 /* : Bool */;
short int var233 /* : Bool */;
short int var234 /* : Bool */;
val* var235 /* : MType */;
val* var237 /* : Array[MType] */;
val* var_mtypes /* var mtypes: Array[MType] */;
val* var238 /* : ANodes[AType] */;
val* var240 /* : ANodes[AType] */;
val* var_241 /* var : ANodes[AType] */;
val* var242 /* : Iterator[ANode] */;
val* var_243 /* var : Iterator[AType] */;
short int var244 /* : Bool */;
val* var246 /* : nullable Object */;
val* var_nt /* var nt: AType */;
val* var247 /* : nullable MType */;
val* var_mt /* var mt: nullable MType */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
val* var_other251 /* var other: nullable Object */;
short int var252 /* : Bool */;
short int var254 /* : Bool */;
val* var255 /* : MClassType */;
val* var256 /* : nullable TKwnullable */;
val* var258 /* : nullable TKwnullable */;
short int var259 /* : Bool */;
short int var260 /* : Bool */;
short int var262 /* : Bool */;
short int var263 /* : Bool */;
val* var264 /* : MType */;
var_mmodule = p0;
var_mclassdef = p1;
var_ntype = p2;
var_with_virtual = p3;
{
{ /* Inline parser_nodes$AType$n_qid (var_ntype) on <var_ntype:AType> */
var3 = var_ntype->attrs[COLOR_nitc__parser_nodes__AType___n_qid].val; /* _n_qid on <var_ntype:AType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1776);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_qid = var1;
{
{ /* Inline parser_nodes$AQclassid$n_id (var_qid) on <var_qid:AQclassid> */
var6 = var_qid->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val; /* _n_id on <var_qid:AQclassid> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1733);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__lexer_work___Token___text(var4);
}
var_name = var7;
if (var_mclassdef == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other = ((val*)NULL);
{
var12 = ((short int(*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mclassdef, var_other); /* == on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
var13 = !var12;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
var_ = var9;
if (var9){
var8 = var_with_virtual;
} else {
var8 = var_;
}
if (var8){
{
var14 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(self, var_ntype, var_mclassdef, var_name);
}
/* <var14:nullable MProperty> isa nullable MVirtualTypeProp */
cltype = type_nullable__nitc__MVirtualTypeProp.color;
idtype = type_nullable__nitc__MVirtualTypeProp.id;
if(var14 == NULL) {
var15 = 1;
} else {
if(cltype >= var14->type->table_size) {
var15 = 0;
} else {
var15 = var14->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var15)) {
var_class_name = var14 == NULL ? "null" : var14->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MVirtualTypeProp", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 274);
fatal_exit(1);
}
var_prop = var14;
if (var_prop == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_prop,((val*)NULL)) on <var_prop:nullable MVirtualTypeProp> */
var_other = ((val*)NULL);
{
var19 = ((short int(*)(val* self, val* p0))(var_prop->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_prop, var_other); /* == on <var_prop:nullable MVirtualTypeProp(MVirtualTypeProp)>*/
}
var20 = !var19;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
var16 = var17;
}
if (var16){
{
{ /* Inline parser_nodes$AType$n_types (var_ntype) on <var_ntype:AType> */
var23 = var_ntype->attrs[COLOR_nitc__parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1782);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var21);
}
var25 = !var24;
if (var25){
if (unlikely(varonce==NULL)) {
var26 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "Type Error: formal type `";
var31 = (val*)(25l<<2|1);
var32 = (val*)(25l<<2|1);
var33 = (val*)((long)(0)<<2|3);
var34 = (val*)((long)(0)<<2|3);
var30 = core__flat___CString___to_s_unsafe(var29, var31, var32, var33, var34);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var26)->values[0]=var28;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "` cannot have formal parameters.";
var39 = (val*)(32l<<2|1);
var40 = (val*)(32l<<2|1);
var41 = (val*)((long)(0)<<2|3);
var42 = (val*)((long)(0)<<2|3);
var38 = core__flat___CString___to_s_unsafe(var37, var39, var40, var41, var42);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var26)->values[2]=var36;
} else {
var26 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var26)->values[1]=var_name;
{
var43 = ((val*(*)(val* self))(var26->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var26); /* native_to_s on <var26:NativeArray[String]>*/
}
varonce = var26;
{
nitc___nitc__ModelBuilder___error(self, var_ntype, var43); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
}
{
{ /* Inline model$MVirtualTypeProp$mvirtualtype (var_prop) on <var_prop:nullable MVirtualTypeProp(MVirtualTypeProp)> */
var46 = var_prop->attrs[COLOR_nitc__model__MVirtualTypeProp___mvirtualtype].val; /* _mvirtualtype on <var_prop:nullable MVirtualTypeProp(MVirtualTypeProp)> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mvirtualtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2333);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
var_res = var44;
{
{ /* Inline parser_nodes$AType$n_kwnullable (var_ntype) on <var_ntype:AType> */
var49 = var_ntype->attrs[COLOR_nitc__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <var_ntype:AType> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
if (var47 == NULL) {
var50 = 0; /* is null */
} else {
var50 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var47,((val*)NULL)) on <var47:nullable TKwnullable> */
var_other = ((val*)NULL);
{
var53 = ((short int(*)(val* self, val* p0))(var47->class->vft[COLOR_core__kernel__Object___61d_61d]))(var47, var_other); /* == on <var47:nullable TKwnullable(TKwnullable)>*/
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
var55 = nitc___nitc__MType___as_nullable(var_res);
}
var_res = var55;
} else {
}
{
{ /* Inline modelbuilder_base$AType$mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL56:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
if (var_mclassdef == NULL) {
var57 = 0; /* is null */
} else {
var57 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other = ((val*)NULL);
{
var60 = ((short int(*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mclassdef, var_other); /* == on <var_mclassdef:nullable MClassDef(MClassDef)>*/
}
var61 = !var60;
var58 = var61;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var57 = var58;
}
if (var57){
{
{ /* Inline model$MClassDef$mclass (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var64 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline model$MClass$mparameters (var62) on <var62:MClass> */
var67 = var62->attrs[COLOR_nitc__model__MClass___mparameters].val; /* _mparameters on <var62:MClass> */
if (unlikely(var67 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 418);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
var_68 = var65;
{
var69 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_68);
}
var_70 = var69;
for(;;) {
{
var71 = ((short int(*)(val* self))((((long)var_70&3)?class_info[((long)var_70&3)]:var_70->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_70); /* is_ok on <var_70:IndexedIterator[MParameterType]>*/
}
if (var71){
} else {
goto BREAK_label;
}
{
var72 = ((val*(*)(val* self))((((long)var_70&3)?class_info[((long)var_70&3)]:var_70->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_70); /* item on <var_70:IndexedIterator[MParameterType]>*/
}
var_p = var72;
{
{ /* Inline model$MParameterType$name (var_p) on <var_p:MParameterType> */
var75 = var_p->attrs[COLOR_nitc__model__MParameterType___name].val; /* _name on <var_p:MParameterType> */
if (unlikely(var75 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1570);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var73,var_name) on <var73:String> */
var_other = var_name;
{
var78 = ((short int(*)(val* self, val* p0))(var73->class->vft[COLOR_core__kernel__Object___61d_61d]))(var73, var_other); /* == on <var73:String>*/
}
var79 = !var78;
var76 = var79;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
if (var76){
goto BREAK_label80;
} else {
}
{
{ /* Inline parser_nodes$AType$n_types (var_ntype) on <var_ntype:AType> */
var83 = var_ntype->attrs[COLOR_nitc__parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var83 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1782);
fatal_exit(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
var84 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var81);
}
var85 = !var84;
if (var85){
if (unlikely(varonce86==NULL)) {
var87 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = "Type Error: formal type `";
var92 = (val*)(25l<<2|1);
var93 = (val*)(25l<<2|1);
var94 = (val*)((long)(0)<<2|3);
var95 = (val*)((long)(0)<<2|3);
var91 = core__flat___CString___to_s_unsafe(var90, var92, var93, var94, var95);
var89 = var91;
varonce88 = var89;
}
((struct instance_core__NativeArray*)var87)->values[0]=var89;
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = "` cannot have formal parameters.";
var100 = (val*)(32l<<2|1);
var101 = (val*)(32l<<2|1);
var102 = (val*)((long)(0)<<2|3);
var103 = (val*)((long)(0)<<2|3);
var99 = core__flat___CString___to_s_unsafe(var98, var100, var101, var102, var103);
var97 = var99;
varonce96 = var97;
}
((struct instance_core__NativeArray*)var87)->values[2]=var97;
} else {
var87 = varonce86;
varonce86 = NULL;
}
((struct instance_core__NativeArray*)var87)->values[1]=var_name;
{
var104 = ((val*(*)(val* self))(var87->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var87); /* native_to_s on <var87:NativeArray[String]>*/
}
varonce86 = var87;
{
nitc___nitc__ModelBuilder___error(self, var_ntype, var104); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
}
var_res = var_p;
{
{ /* Inline parser_nodes$AType$n_kwnullable (var_ntype) on <var_ntype:AType> */
var107 = var_ntype->attrs[COLOR_nitc__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <var_ntype:AType> */
var105 = var107;
RET_LABEL106:(void)0;
}
}
if (var105 == NULL) {
var108 = 0; /* is null */
} else {
var108 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var105,((val*)NULL)) on <var105:nullable TKwnullable> */
var_other = ((val*)NULL);
{
var111 = ((short int(*)(val* self, val* p0))(var105->class->vft[COLOR_core__kernel__Object___61d_61d]))(var105, var_other); /* == on <var105:nullable TKwnullable(TKwnullable)>*/
}
var112 = !var111;
var109 = var112;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
var108 = var109;
}
if (var108){
{
var113 = nitc___nitc__MType___as_nullable(var_res);
}
var_res = var113;
} else {
}
{
{ /* Inline modelbuilder_base$AType$mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL114:(void)0;
}
}
var = var_res;
goto RET_LABEL;
BREAK_label80: (void)0;
{
((void(*)(val* self))((((long)var_70&3)?class_info[((long)var_70&3)]:var_70->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_70); /* next on <var_70:IndexedIterator[MParameterType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_70&3)?class_info[((long)var_70&3)]:var_70->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_70); /* finish on <var_70:IndexedIterator[MParameterType]>*/
}
} else {
}
{
var115 = nitc___nitc__ModelBuilder___try_get_mclass_by_qid(self, var_qid, var_mmodule);
}
var_mclass = var115;
if (var_mclass == NULL) {
var116 = 0; /* is null */
} else {
var116 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mclass,((val*)NULL)) on <var_mclass:nullable MClass> */
var_other = ((val*)NULL);
{
var119 = ((short int(*)(val* self, val* p0))(var_mclass->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mclass, var_other); /* == on <var_mclass:nullable MClass(MClass)>*/
}
var120 = !var119;
var117 = var120;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
var116 = var117;
}
if (var116){
{
{ /* Inline parser_nodes$AType$n_types (var_ntype) on <var_ntype:AType> */
var123 = var_ntype->attrs[COLOR_nitc__parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var123 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1782);
fatal_exit(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
var124 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var121);
}
var_arity = var124;
{
{ /* Inline model$MClass$arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var127 = var_mclass->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
{ /* Inline kernel$Int$!= (var_arity,var125) on <var_arity:Int> */
var130 = var_arity == var125;
var131 = !var130;
var128 = var131;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
}
if (var128){
{
{ /* Inline kernel$Int$== (var_arity,0l) on <var_arity:Int> */
var134 = var_arity == 0l;
var132 = var134;
goto RET_LABEL133;
RET_LABEL133:(void)0;
}
}
if (var132){
if (unlikely(varonce135==NULL)) {
var136 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = "Type Error: `";
var141 = (val*)(13l<<2|1);
var142 = (val*)(13l<<2|1);
var143 = (val*)((long)(0)<<2|3);
var144 = (val*)((long)(0)<<2|3);
var140 = core__flat___CString___to_s_unsafe(var139, var141, var142, var143, var144);
var138 = var140;
varonce137 = var138;
}
((struct instance_core__NativeArray*)var136)->values[0]=var138;
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "` is a generic class.";
var149 = (val*)(21l<<2|1);
var150 = (val*)(21l<<2|1);
var151 = (val*)((long)(0)<<2|3);
var152 = (val*)((long)(0)<<2|3);
var148 = core__flat___CString___to_s_unsafe(var147, var149, var150, var151, var152);
var146 = var148;
varonce145 = var146;
}
((struct instance_core__NativeArray*)var136)->values[2]=var146;
} else {
var136 = varonce135;
varonce135 = NULL;
}
{
var153 = nitc___nitc__MClass___signature_to_s(var_mclass);
}
((struct instance_core__NativeArray*)var136)->values[1]=var153;
{
var154 = ((val*(*)(val* self))(var136->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var136); /* native_to_s on <var136:NativeArray[String]>*/
}
varonce135 = var136;
{
nitc___nitc__ModelBuilder___error(self, var_ntype, var154); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
{
{ /* Inline model$MClass$arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var157 = var_mclass->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var155 = var157;
RET_LABEL156:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var155,0l) on <var155:Int> */
var160 = var155 == 0l;
var158 = var160;
goto RET_LABEL159;
RET_LABEL159:(void)0;
}
}
if (var158){
if (unlikely(varonce161==NULL)) {
var162 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "Type Error: `";
var167 = (val*)(13l<<2|1);
var168 = (val*)(13l<<2|1);
var169 = (val*)((long)(0)<<2|3);
var170 = (val*)((long)(0)<<2|3);
var166 = core__flat___CString___to_s_unsafe(var165, var167, var168, var169, var170);
var164 = var166;
varonce163 = var164;
}
((struct instance_core__NativeArray*)var162)->values[0]=var164;
if (likely(varonce171!=NULL)) {
var172 = varonce171;
} else {
var173 = "` is not a generic class.";
var175 = (val*)(25l<<2|1);
var176 = (val*)(25l<<2|1);
var177 = (val*)((long)(0)<<2|3);
var178 = (val*)((long)(0)<<2|3);
var174 = core__flat___CString___to_s_unsafe(var173, var175, var176, var177, var178);
var172 = var174;
varonce171 = var172;
}
((struct instance_core__NativeArray*)var162)->values[2]=var172;
} else {
var162 = varonce161;
varonce161 = NULL;
}
((struct instance_core__NativeArray*)var162)->values[1]=var_name;
{
var179 = ((val*(*)(val* self))(var162->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var162); /* native_to_s on <var162:NativeArray[String]>*/
}
varonce161 = var162;
{
nitc___nitc__ModelBuilder___error(self, var_ntype, var179); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
} else {
if (unlikely(varonce180==NULL)) {
var181 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce182!=NULL)) {
var183 = varonce182;
} else {
var184 = "Type Error: expected ";
var186 = (val*)(21l<<2|1);
var187 = (val*)(21l<<2|1);
var188 = (val*)((long)(0)<<2|3);
var189 = (val*)((long)(0)<<2|3);
var185 = core__flat___CString___to_s_unsafe(var184, var186, var187, var188, var189);
var183 = var185;
varonce182 = var183;
}
((struct instance_core__NativeArray*)var181)->values[0]=var183;
if (likely(varonce190!=NULL)) {
var191 = varonce190;
} else {
var192 = " formal argument(s) for `";
var194 = (val*)(25l<<2|1);
var195 = (val*)(25l<<2|1);
var196 = (val*)((long)(0)<<2|3);
var197 = (val*)((long)(0)<<2|3);
var193 = core__flat___CString___to_s_unsafe(var192, var194, var195, var196, var197);
var191 = var193;
varonce190 = var191;
}
((struct instance_core__NativeArray*)var181)->values[2]=var191;
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "`; got ";
var202 = (val*)(7l<<2|1);
var203 = (val*)(7l<<2|1);
var204 = (val*)((long)(0)<<2|3);
var205 = (val*)((long)(0)<<2|3);
var201 = core__flat___CString___to_s_unsafe(var200, var202, var203, var204, var205);
var199 = var201;
varonce198 = var199;
}
((struct instance_core__NativeArray*)var181)->values[4]=var199;
if (likely(varonce206!=NULL)) {
var207 = varonce206;
} else {
var208 = ".";
var210 = (val*)(1l<<2|1);
var211 = (val*)(1l<<2|1);
var212 = (val*)((long)(0)<<2|3);
var213 = (val*)((long)(0)<<2|3);
var209 = core__flat___CString___to_s_unsafe(var208, var210, var211, var212, var213);
var207 = var209;
varonce206 = var207;
}
((struct instance_core__NativeArray*)var181)->values[6]=var207;
} else {
var181 = varonce180;
varonce180 = NULL;
}
{
{ /* Inline model$MClass$arity (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var216 = var_mclass->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <var_mclass:nullable MClass(MClass)> */
var214 = var216;
RET_LABEL215:(void)0;
}
}
var217 = core__flat___Int___core__abstract_text__Object__to_s(var214);
((struct instance_core__NativeArray*)var181)->values[1]=var217;
{
var218 = nitc___nitc__MClass___signature_to_s(var_mclass);
}
((struct instance_core__NativeArray*)var181)->values[3]=var218;
var219 = core__flat___Int___core__abstract_text__Object__to_s(var_arity);
((struct instance_core__NativeArray*)var181)->values[5]=var219;
{
var220 = ((val*(*)(val* self))(var181->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var181); /* native_to_s on <var181:NativeArray[String]>*/
}
varonce180 = var181;
{
nitc___nitc__ModelBuilder___error(self, var_ntype, var220); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$== (var_arity,0l) on <var_arity:Int> */
var223 = var_arity == 0l;
var221 = var223;
goto RET_LABEL222;
RET_LABEL222:(void)0;
}
}
if (var221){
{
{ /* Inline model$MClass$mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var226 = var_mclass->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var226 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var224 = var226;
RET_LABEL225:(void)0;
}
}
var_res = var224;
{
{ /* Inline parser_nodes$AType$n_kwnullable (var_ntype) on <var_ntype:AType> */
var229 = var_ntype->attrs[COLOR_nitc__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <var_ntype:AType> */
var227 = var229;
RET_LABEL228:(void)0;
}
}
if (var227 == NULL) {
var230 = 0; /* is null */
} else {
var230 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var227,((val*)NULL)) on <var227:nullable TKwnullable> */
var_other = ((val*)NULL);
{
var233 = ((short int(*)(val* self, val* p0))(var227->class->vft[COLOR_core__kernel__Object___61d_61d]))(var227, var_other); /* == on <var227:nullable TKwnullable(TKwnullable)>*/
}
var234 = !var233;
var231 = var234;
goto RET_LABEL232;
RET_LABEL232:(void)0;
}
var230 = var231;
}
if (var230){
{
var235 = nitc___nitc__MType___as_nullable(var_res);
}
var_res = var235;
} else {
}
{
{ /* Inline modelbuilder_base$AType$mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL236:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
var237 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___core__kernel__Object__init(var237); /* Direct call array$Array$init on <var237:Array[MType]>*/
}
var_mtypes = var237;
{
{ /* Inline parser_nodes$AType$n_types (var_ntype) on <var_ntype:AType> */
var240 = var_ntype->attrs[COLOR_nitc__parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var240 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1782);
fatal_exit(1);
}
var238 = var240;
RET_LABEL239:(void)0;
}
}
var_241 = var238;
{
var242 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_241);
}
var_243 = var242;
for(;;) {
{
var244 = ((short int(*)(val* self))((((long)var_243&3)?class_info[((long)var_243&3)]:var_243->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_243); /* is_ok on <var_243:Iterator[AType]>*/
}
if (var244){
} else {
goto BREAK_label245;
}
{
var246 = ((val*(*)(val* self))((((long)var_243&3)?class_info[((long)var_243&3)]:var_243->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_243); /* item on <var_243:Iterator[AType]>*/
}
var_nt = var246;
{
var247 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(self, var_mmodule, var_mclassdef, var_nt, var_with_virtual);
}
var_mt = var247;
if (var_mt == NULL) {
var248 = 1; /* is null */
} else {
var248 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mt,((val*)NULL)) on <var_mt:nullable MType> */
var_other251 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mt,var_other251) on <var_mt:nullable MType(MType)> */
var254 = var_mt == var_other251;
var252 = var254;
goto RET_LABEL253;
RET_LABEL253:(void)0;
}
}
var249 = var252;
goto RET_LABEL250;
RET_LABEL250:(void)0;
}
var248 = var249;
}
if (var248){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_mtypes, var_mt); /* Direct call array$Array$add on <var_mtypes:Array[MType]>*/
}
{
((void(*)(val* self))((((long)var_243&3)?class_info[((long)var_243&3)]:var_243->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_243); /* next on <var_243:Iterator[AType]>*/
}
}
BREAK_label245: (void)0;
{
((void(*)(val* self))((((long)var_243&3)?class_info[((long)var_243&3)]:var_243->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_243); /* finish on <var_243:Iterator[AType]>*/
}
{
var255 = nitc___nitc__MClass___get_mtype(var_mclass, var_mtypes);
}
var_res = var255;
{
{ /* Inline parser_nodes$AType$n_kwnullable (var_ntype) on <var_ntype:AType> */
var258 = var_ntype->attrs[COLOR_nitc__parser_nodes__AType___n_kwnullable].val; /* _n_kwnullable on <var_ntype:AType> */
var256 = var258;
RET_LABEL257:(void)0;
}
}
if (var256 == NULL) {
var259 = 0; /* is null */
} else {
var259 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var256,((val*)NULL)) on <var256:nullable TKwnullable> */
var_other = ((val*)NULL);
{
var262 = ((short int(*)(val* self, val* p0))(var256->class->vft[COLOR_core__kernel__Object___61d_61d]))(var256, var_other); /* == on <var256:nullable TKwnullable(TKwnullable)>*/
}
var263 = !var262;
var260 = var263;
goto RET_LABEL261;
RET_LABEL261:(void)0;
}
var259 = var260;
}
if (var259){
{
var264 = nitc___nitc__MType___as_nullable(var_res);
}
var_res = var264;
} else {
}
{
{ /* Inline modelbuilder_base$AType$mtype= (var_ntype,var_res) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val = var_res; /* _mtype on <var_ntype:AType> */
RET_LABEL265:(void)0;
}
}
var = var_res;
goto RET_LABEL;
}
} else {
}
{
nitc___nitc__ModelBuilder___class_not_found(self, var_qid, var_mmodule); /* Direct call modelbuilder_base$ModelBuilder$class_not_found on <self:ModelBuilder>*/
}
{
{ /* Inline modelbuilder_base$ANode$is_broken= (var_ntype,1) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = 1; /* _is_broken on <var_ntype:AType> */
RET_LABEL266:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$class_not_found for (self: ModelBuilder, AQclassid, MModule) */
void nitc___nitc__ModelBuilder___class_not_found(val* self, val* p0, val* p1) {
val* var_qid /* var qid: AQclassid */;
val* var_mmodule /* var mmodule: MModule */;
val* var /* : TClassid */;
val* var2 /* : TClassid */;
val* var3 /* : String */;
val* var_name /* var name: String */;
val* var4 /* : String */;
val* var_qname /* var qname: String */;
val* var5 /* : MultiHashMap[MModule, String] */;
val* var7 /* : MultiHashMap[MModule, String] */;
val* var8 /* : nullable Object */;
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
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Bool */;
val* var34 /* : nullable Bool */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var37 /* : MultiHashMap[MModule, String] */;
val* var39 /* : MultiHashMap[MModule, String] */;
val* var40 /* : nullable Object */;
val* var41 /* : Model */;
val* var43 /* : Model */;
val* var44 /* : nullable Array[MClass] */;
val* var_all_classes /* var all_classes: nullable Array[MClass] */;
val* var45 /* : Array[String] */;
val* var_hints /* var hints: Array[String] */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
val* var_ /* var : Array[MClass] */;
val* var51 /* : IndexedIterator[nullable Object] */;
val* var_52 /* var : IndexedIterator[MClass] */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var55 /* : MModule */;
val* var57 /* : MModule */;
val* var58 /* : MVisibility */;
val* var60 /* : MVisibility */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
val* var67 /* : NativeArray[String] */;
static val* varonce66;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : CString */;
val* var71 /* : String */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Bool */;
val* var75 /* : nullable Bool */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : CString */;
val* var79 /* : String */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Int */;
val* var82 /* : nullable Bool */;
val* var83 /* : nullable Bool */;
val* var84 /* : String */;
val* var85 /* : String */;
long var86 /* : Int */;
long var88 /* : Int */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var92 /* : Bool */;
val* var94 /* : NativeArray[String] */;
static val* varonce93;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : CString */;
val* var98 /* : String */;
val* var99 /* : nullable Int */;
val* var100 /* : nullable Int */;
val* var101 /* : nullable Bool */;
val* var102 /* : nullable Bool */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : CString */;
val* var106 /* : String */;
val* var107 /* : nullable Int */;
val* var108 /* : nullable Int */;
val* var109 /* : nullable Bool */;
val* var110 /* : nullable Bool */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : CString */;
val* var114 /* : String */;
val* var115 /* : nullable Int */;
val* var116 /* : nullable Int */;
val* var117 /* : nullable Bool */;
val* var118 /* : nullable Bool */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : CString */;
val* var122 /* : String */;
val* var123 /* : nullable Int */;
val* var124 /* : nullable Int */;
val* var125 /* : nullable Bool */;
val* var126 /* : nullable Bool */;
val* var127 /* : String */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : CString */;
val* var131 /* : String */;
val* var132 /* : nullable Int */;
val* var133 /* : nullable Int */;
val* var134 /* : nullable Bool */;
val* var135 /* : nullable Bool */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : CString */;
val* var139 /* : String */;
val* var140 /* : nullable Int */;
val* var141 /* : nullable Int */;
val* var142 /* : nullable Bool */;
val* var143 /* : nullable Bool */;
val* var144 /* : String */;
val* var145 /* : String */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
val* var_151 /* var : Array[MClass] */;
val* var152 /* : IndexedIterator[nullable Object] */;
val* var_153 /* var : IndexedIterator[MClass] */;
short int var154 /* : Bool */;
val* var156 /* : nullable Object */;
val* var_c157 /* var c: MClass */;
val* var158 /* : POSetElement[MModule] */;
val* var160 /* : POSetElement[MModule] */;
val* var161 /* : MModule */;
val* var163 /* : MModule */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
val* var167 /* : MModule */;
val* var169 /* : MModule */;
val* var170 /* : MVisibility */;
val* var172 /* : MVisibility */;
short int var173 /* : Bool */;
short int var174 /* : Bool */;
short int var175 /* : Bool */;
val* var177 /* : NativeArray[String] */;
static val* varonce176;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : CString */;
val* var181 /* : String */;
val* var182 /* : nullable Int */;
val* var183 /* : nullable Int */;
val* var184 /* : nullable Bool */;
val* var185 /* : nullable Bool */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : CString */;
val* var189 /* : String */;
val* var190 /* : nullable Int */;
val* var191 /* : nullable Int */;
val* var192 /* : nullable Bool */;
val* var193 /* : nullable Bool */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : CString */;
val* var197 /* : String */;
val* var198 /* : nullable Int */;
val* var199 /* : nullable Int */;
val* var200 /* : nullable Bool */;
val* var201 /* : nullable Bool */;
val* var202 /* : String */;
val* var203 /* : String */;
val* var204 /* : String */;
short int var205 /* : Bool */;
short int var206 /* : Bool */;
short int var208 /* : Bool */;
short int var209 /* : Bool */;
val* var_210 /* var : Array[MClass] */;
val* var211 /* : IndexedIterator[nullable Object] */;
val* var_212 /* var : IndexedIterator[MClass] */;
short int var213 /* : Bool */;
val* var215 /* : nullable Object */;
val* var_c216 /* var c: MClass */;
val* var217 /* : POSetElement[MModule] */;
val* var219 /* : POSetElement[MModule] */;
val* var220 /* : MModule */;
val* var222 /* : MModule */;
short int var223 /* : Bool */;
val* var225 /* : MModule */;
val* var227 /* : MModule */;
val* var228 /* : POSetElement[MModule] */;
val* var230 /* : POSetElement[MModule] */;
short int var231 /* : Bool */;
val* var232 /* : MVisibility */;
val* var234 /* : MVisibility */;
val* var235 /* : Sys */;
val* var236 /* : MVisibility */;
short int var237 /* : Bool */;
short int var238 /* : Bool */;
short int var239 /* : Bool */;
val* var241 /* : NativeArray[String] */;
static val* varonce240;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : CString */;
val* var245 /* : String */;
val* var246 /* : nullable Int */;
val* var247 /* : nullable Int */;
val* var248 /* : nullable Bool */;
val* var249 /* : nullable Bool */;
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : CString */;
val* var253 /* : String */;
val* var254 /* : nullable Int */;
val* var255 /* : nullable Int */;
val* var256 /* : nullable Bool */;
val* var257 /* : nullable Bool */;
val* var258 /* : MModule */;
val* var260 /* : MModule */;
val* var261 /* : String */;
val* var262 /* : String */;
short int var263 /* : Bool */;
val* var265 /* : NativeArray[String] */;
static val* varonce264;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : CString */;
val* var269 /* : String */;
val* var270 /* : nullable Int */;
val* var271 /* : nullable Int */;
val* var272 /* : nullable Bool */;
val* var273 /* : nullable Bool */;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : CString */;
val* var277 /* : String */;
val* var278 /* : nullable Int */;
val* var279 /* : nullable Int */;
val* var280 /* : nullable Bool */;
val* var281 /* : nullable Bool */;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : CString */;
val* var285 /* : String */;
val* var286 /* : nullable Int */;
val* var287 /* : nullable Int */;
val* var288 /* : nullable Bool */;
val* var289 /* : nullable Bool */;
static val* varonce290;
val* var291 /* : String */;
char* var292 /* : CString */;
val* var293 /* : String */;
val* var294 /* : nullable Int */;
val* var295 /* : nullable Int */;
val* var296 /* : nullable Bool */;
val* var297 /* : nullable Bool */;
val* var298 /* : String */;
static val* varonce299;
val* var300 /* : String */;
char* var301 /* : CString */;
val* var302 /* : String */;
val* var303 /* : nullable Int */;
val* var304 /* : nullable Int */;
val* var305 /* : nullable Bool */;
val* var306 /* : nullable Bool */;
static val* varonce307;
val* var308 /* : String */;
char* var309 /* : CString */;
val* var310 /* : String */;
val* var311 /* : nullable Int */;
val* var312 /* : nullable Int */;
val* var313 /* : nullable Bool */;
val* var314 /* : nullable Bool */;
val* var315 /* : String */;
val* var316 /* : String */;
val* var317 /* : BestDistance[MClass] */;
long var318 /* : Int */;
long var319 /* : Int */;
long var320 /* : Int */;
short int var322 /* : Bool */;
int cltype323;
int idtype324;
const char* var_class_name325;
long var326 /* : Int */;
long var327 /* : Int */;
short int var329 /* : Bool */;
int cltype330;
int idtype331;
const char* var_class_name332;
long var333 /* : Int */;
val* var_bests /* var bests: BestDistance[MClass] */;
val* var334 /* : Model */;
val* var336 /* : Model */;
val* var337 /* : Array[MClass] */;
val* var339 /* : Array[MClass] */;
val* var_340 /* var : Array[MClass] */;
val* var341 /* : IndexedIterator[nullable Object] */;
val* var_342 /* var : IndexedIterator[MClass] */;
short int var343 /* : Bool */;
val* var345 /* : nullable Object */;
val* var_c346 /* var c: MClass */;
val* var347 /* : POSetElement[MModule] */;
val* var349 /* : POSetElement[MModule] */;
val* var350 /* : MModule */;
val* var352 /* : MModule */;
short int var353 /* : Bool */;
short int var354 /* : Bool */;
val* var356 /* : MModule */;
val* var358 /* : MModule */;
val* var359 /* : MVisibility */;
val* var361 /* : MVisibility */;
short int var362 /* : Bool */;
short int var363 /* : Bool */;
val* var364 /* : String */;
val* var366 /* : String */;
long var367 /* : Int */;
long var_d /* var d: Int */;
short int var368 /* : Bool */;
val* var369 /* : String */;
long var370 /* : Int */;
short int var371 /* : Bool */;
val* var372 /* : Set[nullable Object] */;
val* var374 /* : Set[nullable Object] */;
short int var375 /* : Bool */;
val* var376 /* : Set[nullable Object] */;
val* var378 /* : Set[nullable Object] */;
val* var_379 /* var : Set[MClass] */;
val* var380 /* : Iterator[nullable Object] */;
val* var_381 /* var : Iterator[MClass] */;
short int var382 /* : Bool */;
val* var384 /* : nullable Object */;
val* var_c385 /* var c: MClass */;
val* var387 /* : NativeArray[String] */;
static val* varonce386;
static val* varonce388;
val* var389 /* : String */;
char* var390 /* : CString */;
val* var391 /* : String */;
val* var392 /* : nullable Int */;
val* var393 /* : nullable Int */;
val* var394 /* : nullable Bool */;
val* var395 /* : nullable Bool */;
static val* varonce396;
val* var397 /* : String */;
char* var398 /* : CString */;
val* var399 /* : String */;
val* var400 /* : nullable Int */;
val* var401 /* : nullable Int */;
val* var402 /* : nullable Bool */;
val* var403 /* : nullable Bool */;
val* var404 /* : String */;
val* var405 /* : String */;
val* var407 /* : NativeArray[String] */;
static val* varonce406;
static val* varonce408;
val* var409 /* : String */;
char* var410 /* : CString */;
val* var411 /* : String */;
val* var412 /* : nullable Int */;
val* var413 /* : nullable Int */;
val* var414 /* : nullable Bool */;
val* var415 /* : nullable Bool */;
static val* varonce416;
val* var417 /* : String */;
char* var418 /* : CString */;
val* var419 /* : String */;
val* var420 /* : nullable Int */;
val* var421 /* : nullable Int */;
val* var422 /* : nullable Bool */;
val* var423 /* : nullable Bool */;
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
static val* varonce441;
val* var442 /* : String */;
char* var443 /* : CString */;
val* var444 /* : String */;
val* var445 /* : nullable Int */;
val* var446 /* : nullable Int */;
val* var447 /* : nullable Bool */;
val* var448 /* : nullable Bool */;
static val* varonce449;
val* var450 /* : String */;
char* var451 /* : CString */;
val* var452 /* : String */;
val* var453 /* : nullable Int */;
val* var454 /* : nullable Int */;
val* var455 /* : nullable Bool */;
val* var456 /* : nullable Bool */;
val* var457 /* : String */;
val* var458 /* : String */;
val* var460 /* : NativeArray[String] */;
static val* varonce459;
static val* varonce461;
val* var462 /* : String */;
char* var463 /* : CString */;
val* var464 /* : String */;
val* var465 /* : nullable Int */;
val* var466 /* : nullable Int */;
val* var467 /* : nullable Bool */;
val* var468 /* : nullable Bool */;
static val* varonce469;
val* var470 /* : String */;
char* var471 /* : CString */;
val* var472 /* : String */;
val* var473 /* : nullable Int */;
val* var474 /* : nullable Int */;
val* var475 /* : nullable Bool */;
val* var476 /* : nullable Bool */;
static val* varonce477;
val* var478 /* : String */;
char* var479 /* : CString */;
val* var480 /* : String */;
val* var481 /* : nullable Int */;
val* var482 /* : nullable Int */;
val* var483 /* : nullable Bool */;
val* var484 /* : nullable Bool */;
val* var485 /* : String */;
val* var486 /* : String */;
var_qid = p0;
var_mmodule = p1;
{
{ /* Inline parser_nodes$AQclassid$n_id (var_qid) on <var_qid:AQclassid> */
var2 = var_qid->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val; /* _n_id on <var_qid:AQclassid> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1733);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__lexer_work___Token___text(var);
}
var_name = var3;
{
var4 = nitc__modelbuilder_base___AQclassid___full_name(var_qid);
}
var_qname = var4;
{
{ /* Inline modelbuilder_base$ModelBuilder$bad_class_names (self) on <self:ModelBuilder> */
var7 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___bad_class_names].val; /* _bad_class_names on <self:ModelBuilder> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bad_class_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 413);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var5, var_mmodule);
}
{
var9 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var8, var_qname);
}
if (var9){
if (unlikely(varonce==NULL)) {
var10 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Error: class `";
var15 = (val*)(14l<<2|1);
var16 = (val*)(14l<<2|1);
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
var21 = "` not found in module `";
var23 = (val*)(23l<<2|1);
var24 = (val*)(23l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var10)->values[2]=var20;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "`.";
var31 = (val*)(2l<<2|1);
var32 = (val*)(2l<<2|1);
var33 = (val*)((long)(0)<<2|3);
var34 = (val*)((long)(0)<<2|3);
var30 = core__flat___CString___to_s_unsafe(var29, var31, var32, var33, var34);
var28 = var30;
varonce27 = var28;
}
((struct instance_core__NativeArray*)var10)->values[4]=var28;
} else {
var10 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var10)->values[1]=var_qname;
{
var35 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var10)->values[3]=var35;
{
var36 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
nitc___nitc__ModelBuilder___error(self, var_qid, var36); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline modelbuilder_base$ModelBuilder$bad_class_names (self) on <self:ModelBuilder> */
var39 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___bad_class_names].val; /* _bad_class_names on <self:ModelBuilder> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bad_class_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 413);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var37, var_mmodule);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var40, var_qname); /* Direct call array$Array$add on <var40:nullable Object(Array[String])>*/
}
{
{ /* Inline modelbuilder_base$ModelBuilder$model (self) on <self:ModelBuilder> */
var43 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = nitc__model___Model___get_mclasses_by_name(var41, var_name);
}
var_all_classes = var44;
var45 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var45); /* Direct call array$Array$init on <var45:Array[String]>*/
}
var_hints = var45;
if (var_all_classes == NULL) {
var46 = 0; /* is null */
} else {
var46 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_all_classes,((val*)NULL)) on <var_all_classes:nullable Array[MClass]> */
var_other = ((val*)NULL);
{
var49 = ((short int(*)(val* self, val* p0))(var_all_classes->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_all_classes, var_other); /* == on <var_all_classes:nullable Array[MClass](Array[MClass])>*/
}
var50 = !var49;
var47 = var50;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
if (var46){
var_ = var_all_classes;
{
var51 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_52 = var51;
for(;;) {
{
var53 = ((short int(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_52); /* is_ok on <var_52:IndexedIterator[MClass]>*/
}
if (var53){
} else {
goto BREAK_label;
}
{
var54 = ((val*(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_52); /* item on <var_52:IndexedIterator[MClass]>*/
}
var_c = var54;
{
{ /* Inline model$MClass$intro_mmodule (var_c) on <var_c:MClass> */
var57 = var_c->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_c:MClass> */
if (unlikely(var57 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (var_c) on <var_c:MClass> */
var60 = var_c->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var_c:MClass> */
if (unlikely(var60 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = nitc___nitc__MModule___is_visible(var_mmodule, var55, var58);
}
var62 = !var61;
if (var62){
goto BREAK_label63;
} else {
}
{
var64 = nitc__modelbuilder_base___AQclassid___accept(var_qid, var_c);
}
var65 = !var64;
if (var65){
goto BREAK_label63;
} else {
}
if (unlikely(varonce66==NULL)) {
var67 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "`";
var72 = (val*)(1l<<2|1);
var73 = (val*)(1l<<2|1);
var74 = (val*)((long)(0)<<2|3);
var75 = (val*)((long)(0)<<2|3);
var71 = core__flat___CString___to_s_unsafe(var70, var72, var73, var74, var75);
var69 = var71;
varonce68 = var69;
}
((struct instance_core__NativeArray*)var67)->values[0]=var69;
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "`";
var80 = (val*)(1l<<2|1);
var81 = (val*)(1l<<2|1);
var82 = (val*)((long)(0)<<2|3);
var83 = (val*)((long)(0)<<2|3);
var79 = core__flat___CString___to_s_unsafe(var78, var80, var81, var82, var83);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var67)->values[2]=var77;
} else {
var67 = varonce66;
varonce66 = NULL;
}
{
var84 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_c);
}
((struct instance_core__NativeArray*)var67)->values[1]=var84;
{
var85 = ((val*(*)(val* self))(var67->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var67); /* native_to_s on <var67:NativeArray[String]>*/
}
varonce66 = var67;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_hints, var85); /* Direct call array$Array$add on <var_hints:Array[String]>*/
}
BREAK_label63: (void)0;
{
((void(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_52); /* next on <var_52:IndexedIterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_52); /* finish on <var_52:IndexedIterator[MClass]>*/
}
} else {
}
{
{ /* Inline array$AbstractArrayRead$length (var_hints) on <var_hints:Array[String]> */
var88 = var_hints->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_hints:Array[String]> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var86,1l) on <var86:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var91 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var91)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var92 = var86 > 1l;
var89 = var92;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
if (var89){
if (unlikely(varonce93==NULL)) {
var94 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "Error: ambiguous class name `";
var99 = (val*)(29l<<2|1);
var100 = (val*)(29l<<2|1);
var101 = (val*)((long)(0)<<2|3);
var102 = (val*)((long)(0)<<2|3);
var98 = core__flat___CString___to_s_unsafe(var97, var99, var100, var101, var102);
var96 = var98;
varonce95 = var96;
}
((struct instance_core__NativeArray*)var94)->values[0]=var96;
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "` in module `";
var107 = (val*)(13l<<2|1);
var108 = (val*)(13l<<2|1);
var109 = (val*)((long)(0)<<2|3);
var110 = (val*)((long)(0)<<2|3);
var106 = core__flat___CString___to_s_unsafe(var105, var107, var108, var109, var110);
var104 = var106;
varonce103 = var104;
}
((struct instance_core__NativeArray*)var94)->values[2]=var104;
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "`. Conflicts are between ";
var115 = (val*)(25l<<2|1);
var116 = (val*)(25l<<2|1);
var117 = (val*)((long)(0)<<2|3);
var118 = (val*)((long)(0)<<2|3);
var114 = core__flat___CString___to_s_unsafe(var113, var115, var116, var117, var118);
var112 = var114;
varonce111 = var112;
}
((struct instance_core__NativeArray*)var94)->values[4]=var112;
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = ".";
var123 = (val*)(1l<<2|1);
var124 = (val*)(1l<<2|1);
var125 = (val*)((long)(0)<<2|3);
var126 = (val*)((long)(0)<<2|3);
var122 = core__flat___CString___to_s_unsafe(var121, var123, var124, var125, var126);
var120 = var122;
varonce119 = var120;
}
((struct instance_core__NativeArray*)var94)->values[6]=var120;
} else {
var94 = varonce93;
varonce93 = NULL;
}
((struct instance_core__NativeArray*)var94)->values[1]=var_qname;
{
var127 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var94)->values[3]=var127;
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = ",";
var132 = (val*)(1l<<2|1);
var133 = (val*)(1l<<2|1);
var134 = (val*)((long)(0)<<2|3);
var135 = (val*)((long)(0)<<2|3);
var131 = core__flat___CString___to_s_unsafe(var130, var132, var133, var134, var135);
var129 = var131;
varonce128 = var129;
}
if (likely(varonce136!=NULL)) {
var137 = varonce136;
} else {
var138 = " and ";
var140 = (val*)(5l<<2|1);
var141 = (val*)(5l<<2|1);
var142 = (val*)((long)(0)<<2|3);
var143 = (val*)((long)(0)<<2|3);
var139 = core__flat___CString___to_s_unsafe(var138, var140, var141, var142, var143);
var137 = var139;
varonce136 = var137;
}
{
var144 = core__abstract_text___Collection___join(var_hints, var129, var137);
}
((struct instance_core__NativeArray*)var94)->values[5]=var144;
{
var145 = ((val*(*)(val* self))(var94->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var94); /* native_to_s on <var94:NativeArray[String]>*/
}
varonce93 = var94;
{
nitc___nitc__ModelBuilder___error(self, var_qid, var145); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var_hints); /* Direct call array$AbstractArray$clear on <var_hints:Array[String]>*/
}
if (var_all_classes == NULL) {
var146 = 0; /* is null */
} else {
var146 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_all_classes,((val*)NULL)) on <var_all_classes:nullable Array[MClass]> */
var_other = ((val*)NULL);
{
var149 = ((short int(*)(val* self, val* p0))(var_all_classes->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_all_classes, var_other); /* == on <var_all_classes:nullable Array[MClass](Array[MClass])>*/
}
var150 = !var149;
var147 = var150;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
var146 = var147;
}
if (var146){
var_151 = var_all_classes;
{
var152 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_151);
}
var_153 = var152;
for(;;) {
{
var154 = ((short int(*)(val* self))((((long)var_153&3)?class_info[((long)var_153&3)]:var_153->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_153); /* is_ok on <var_153:IndexedIterator[MClass]>*/
}
if (var154){
} else {
goto BREAK_label155;
}
{
var156 = ((val*(*)(val* self))((((long)var_153&3)?class_info[((long)var_153&3)]:var_153->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_153); /* item on <var_153:IndexedIterator[MClass]>*/
}
var_c157 = var156;
{
{ /* Inline mmodule$MModule$in_importation (var_mmodule) on <var_mmodule:MModule> */
var160 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var160 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
{
{ /* Inline model$MClass$intro_mmodule (var_c157) on <var_c157:MClass> */
var163 = var_c157->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_c157:MClass> */
if (unlikely(var163 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
{
var164 = poset___poset__POSetElement____60d_61d(var158, var161);
}
var165 = !var164;
if (var165){
goto BREAK_label166;
} else {
}
{
{ /* Inline model$MClass$intro_mmodule (var_c157) on <var_c157:MClass> */
var169 = var_c157->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_c157:MClass> */
if (unlikely(var169 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (var_c157) on <var_c157:MClass> */
var172 = var_c157->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var_c157:MClass> */
if (unlikely(var172 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
{
var173 = nitc___nitc__MModule___is_visible(var_mmodule, var167, var170);
}
if (var173){
goto BREAK_label166;
} else {
}
{
var174 = nitc__modelbuilder_base___AQclassid___accept(var_qid, var_c157);
}
var175 = !var174;
if (var175){
goto BREAK_label166;
} else {
}
if (unlikely(varonce176==NULL)) {
var177 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = "Error: class `";
var182 = (val*)(14l<<2|1);
var183 = (val*)(14l<<2|1);
var184 = (val*)((long)(0)<<2|3);
var185 = (val*)((long)(0)<<2|3);
var181 = core__flat___CString___to_s_unsafe(var180, var182, var183, var184, var185);
var179 = var181;
varonce178 = var179;
}
((struct instance_core__NativeArray*)var177)->values[0]=var179;
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = "` not visible in module `";
var190 = (val*)(25l<<2|1);
var191 = (val*)(25l<<2|1);
var192 = (val*)((long)(0)<<2|3);
var193 = (val*)((long)(0)<<2|3);
var189 = core__flat___CString___to_s_unsafe(var188, var190, var191, var192, var193);
var187 = var189;
varonce186 = var187;
}
((struct instance_core__NativeArray*)var177)->values[2]=var187;
if (likely(varonce194!=NULL)) {
var195 = varonce194;
} else {
var196 = "`.";
var198 = (val*)(2l<<2|1);
var199 = (val*)(2l<<2|1);
var200 = (val*)((long)(0)<<2|3);
var201 = (val*)((long)(0)<<2|3);
var197 = core__flat___CString___to_s_unsafe(var196, var198, var199, var200, var201);
var195 = var197;
varonce194 = var195;
}
((struct instance_core__NativeArray*)var177)->values[4]=var195;
} else {
var177 = varonce176;
varonce176 = NULL;
}
{
var202 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_c157);
}
((struct instance_core__NativeArray*)var177)->values[1]=var202;
{
var203 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var177)->values[3]=var203;
{
var204 = ((val*(*)(val* self))(var177->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var177); /* native_to_s on <var177:NativeArray[String]>*/
}
varonce176 = var177;
{
nitc___nitc__ModelBuilder___error(self, var_qid, var204); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
BREAK_label166: (void)0;
{
((void(*)(val* self))((((long)var_153&3)?class_info[((long)var_153&3)]:var_153->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_153); /* next on <var_153:IndexedIterator[MClass]>*/
}
}
BREAK_label155: (void)0;
{
((void(*)(val* self))((((long)var_153&3)?class_info[((long)var_153&3)]:var_153->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_153); /* finish on <var_153:IndexedIterator[MClass]>*/
}
} else {
}
if (var_all_classes == NULL) {
var205 = 0; /* is null */
} else {
var205 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_all_classes,((val*)NULL)) on <var_all_classes:nullable Array[MClass]> */
var_other = ((val*)NULL);
{
var208 = ((short int(*)(val* self, val* p0))(var_all_classes->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_all_classes, var_other); /* == on <var_all_classes:nullable Array[MClass](Array[MClass])>*/
}
var209 = !var208;
var206 = var209;
goto RET_LABEL207;
RET_LABEL207:(void)0;
}
var205 = var206;
}
if (var205){
var_210 = var_all_classes;
{
var211 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_210);
}
var_212 = var211;
for(;;) {
{
var213 = ((short int(*)(val* self))((((long)var_212&3)?class_info[((long)var_212&3)]:var_212->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_212); /* is_ok on <var_212:IndexedIterator[MClass]>*/
}
if (var213){
} else {
goto BREAK_label214;
}
{
var215 = ((val*(*)(val* self))((((long)var_212&3)?class_info[((long)var_212&3)]:var_212->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_212); /* item on <var_212:IndexedIterator[MClass]>*/
}
var_c216 = var215;
{
{ /* Inline mmodule$MModule$in_importation (var_mmodule) on <var_mmodule:MModule> */
var219 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var219 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var217 = var219;
RET_LABEL218:(void)0;
}
}
{
{ /* Inline model$MClass$intro_mmodule (var_c216) on <var_c216:MClass> */
var222 = var_c216->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_c216:MClass> */
if (unlikely(var222 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var220 = var222;
RET_LABEL221:(void)0;
}
}
{
var223 = poset___poset__POSetElement____60d_61d(var217, var220);
}
if (var223){
goto BREAK_label224;
} else {
}
{
{ /* Inline model$MClass$intro_mmodule (var_c216) on <var_c216:MClass> */
var227 = var_c216->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_c216:MClass> */
if (unlikely(var227 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
{ /* Inline mmodule$MModule$in_importation (var225) on <var225:MModule> */
var230 = var225->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var225:MModule> */
if (unlikely(var230 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var228 = var230;
RET_LABEL229:(void)0;
}
}
{
var231 = poset___poset__POSetElement____60d_61d(var228, var_mmodule);
}
if (var231){
goto BREAK_label224;
} else {
}
{
{ /* Inline model$MClass$visibility (var_c216) on <var_c216:MClass> */
var234 = var_c216->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var_c216:MClass> */
if (unlikely(var234 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var232 = var234;
RET_LABEL233:(void)0;
}
}
var235 = glob_sys;
{
var236 = nitc__model_base___core__Sys___private_visibility(var235);
}
{
var237 = core___core__Comparable____60d_61d(var232, var236);
}
if (var237){
goto BREAK_label224;
} else {
}
{
var238 = nitc__modelbuilder_base___AQclassid___accept(var_qid, var_c216);
}
var239 = !var238;
if (var239){
goto BREAK_label224;
} else {
}
if (unlikely(varonce240==NULL)) {
var241 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce242!=NULL)) {
var243 = varonce242;
} else {
var244 = "`";
var246 = (val*)(1l<<2|1);
var247 = (val*)(1l<<2|1);
var248 = (val*)((long)(0)<<2|3);
var249 = (val*)((long)(0)<<2|3);
var245 = core__flat___CString___to_s_unsafe(var244, var246, var247, var248, var249);
var243 = var245;
varonce242 = var243;
}
((struct instance_core__NativeArray*)var241)->values[0]=var243;
if (likely(varonce250!=NULL)) {
var251 = varonce250;
} else {
var252 = "`";
var254 = (val*)(1l<<2|1);
var255 = (val*)(1l<<2|1);
var256 = (val*)((long)(0)<<2|3);
var257 = (val*)((long)(0)<<2|3);
var253 = core__flat___CString___to_s_unsafe(var252, var254, var255, var256, var257);
var251 = var253;
varonce250 = var251;
}
((struct instance_core__NativeArray*)var241)->values[2]=var251;
} else {
var241 = varonce240;
varonce240 = NULL;
}
{
{ /* Inline model$MClass$intro_mmodule (var_c216) on <var_c216:MClass> */
var260 = var_c216->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_c216:MClass> */
if (unlikely(var260 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var258 = var260;
RET_LABEL259:(void)0;
}
}
{
var261 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var258);
}
((struct instance_core__NativeArray*)var241)->values[1]=var261;
{
var262 = ((val*(*)(val* self))(var241->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var241); /* native_to_s on <var241:NativeArray[String]>*/
}
varonce240 = var241;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_hints, var262); /* Direct call array$Array$add on <var_hints:Array[String]>*/
}
BREAK_label224: (void)0;
{
((void(*)(val* self))((((long)var_212&3)?class_info[((long)var_212&3)]:var_212->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_212); /* next on <var_212:IndexedIterator[MClass]>*/
}
}
BREAK_label214: (void)0;
{
((void(*)(val* self))((((long)var_212&3)?class_info[((long)var_212&3)]:var_212->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_212); /* finish on <var_212:IndexedIterator[MClass]>*/
}
} else {
}
{
var263 = core___core__Collection___not_empty(var_hints);
}
if (var263){
if (unlikely(varonce264==NULL)) {
var265 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce266!=NULL)) {
var267 = varonce266;
} else {
var268 = "Error: class `";
var270 = (val*)(14l<<2|1);
var271 = (val*)(14l<<2|1);
var272 = (val*)((long)(0)<<2|3);
var273 = (val*)((long)(0)<<2|3);
var269 = core__flat___CString___to_s_unsafe(var268, var270, var271, var272, var273);
var267 = var269;
varonce266 = var267;
}
((struct instance_core__NativeArray*)var265)->values[0]=var267;
if (likely(varonce274!=NULL)) {
var275 = varonce274;
} else {
var276 = "` not found in module `";
var278 = (val*)(23l<<2|1);
var279 = (val*)(23l<<2|1);
var280 = (val*)((long)(0)<<2|3);
var281 = (val*)((long)(0)<<2|3);
var277 = core__flat___CString___to_s_unsafe(var276, var278, var279, var280, var281);
var275 = var277;
varonce274 = var275;
}
((struct instance_core__NativeArray*)var265)->values[2]=var275;
if (likely(varonce282!=NULL)) {
var283 = varonce282;
} else {
var284 = "`. Maybe import ";
var286 = (val*)(16l<<2|1);
var287 = (val*)(16l<<2|1);
var288 = (val*)((long)(0)<<2|3);
var289 = (val*)((long)(0)<<2|3);
var285 = core__flat___CString___to_s_unsafe(var284, var286, var287, var288, var289);
var283 = var285;
varonce282 = var283;
}
((struct instance_core__NativeArray*)var265)->values[4]=var283;
if (likely(varonce290!=NULL)) {
var291 = varonce290;
} else {
var292 = "?";
var294 = (val*)(1l<<2|1);
var295 = (val*)(1l<<2|1);
var296 = (val*)((long)(0)<<2|3);
var297 = (val*)((long)(0)<<2|3);
var293 = core__flat___CString___to_s_unsafe(var292, var294, var295, var296, var297);
var291 = var293;
varonce290 = var291;
}
((struct instance_core__NativeArray*)var265)->values[6]=var291;
} else {
var265 = varonce264;
varonce264 = NULL;
}
((struct instance_core__NativeArray*)var265)->values[1]=var_qname;
{
var298 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var265)->values[3]=var298;
if (likely(varonce299!=NULL)) {
var300 = varonce299;
} else {
var301 = ",";
var303 = (val*)(1l<<2|1);
var304 = (val*)(1l<<2|1);
var305 = (val*)((long)(0)<<2|3);
var306 = (val*)((long)(0)<<2|3);
var302 = core__flat___CString___to_s_unsafe(var301, var303, var304, var305, var306);
var300 = var302;
varonce299 = var300;
}
if (likely(varonce307!=NULL)) {
var308 = varonce307;
} else {
var309 = " or ";
var311 = (val*)(4l<<2|1);
var312 = (val*)(4l<<2|1);
var313 = (val*)((long)(0)<<2|3);
var314 = (val*)((long)(0)<<2|3);
var310 = core__flat___CString___to_s_unsafe(var309, var311, var312, var313, var314);
var308 = var310;
varonce307 = var308;
}
{
var315 = core__abstract_text___Collection___join(var_hints, var300, var308);
}
((struct instance_core__NativeArray*)var265)->values[5]=var315;
{
var316 = ((val*(*)(val* self))(var265->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var265); /* native_to_s on <var265:NativeArray[String]>*/
}
varonce264 = var265;
{
nitc___nitc__ModelBuilder___error(self, var_qid, var316); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var317 = NEW_more_collections__BestDistance(&type_more_collections__BestDistance__nitc__MClass);
{
var318 = ((long(*)(val* self))(var_qname->class->vft[COLOR_core__abstract_text__Text__length]))(var_qname); /* length on <var_qname:String>*/
}
{
var319 = ((long(*)(val* self))(var_name->class->vft[COLOR_core__abstract_text__Text__length]))(var_name); /* length on <var_name:String>*/
}
{
{ /* Inline kernel$Int$/ (var319,2l) on <var319:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var322 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var322)) {
var_class_name325 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name325);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 733);
fatal_exit(1);
}
var326 = var319 / 2l;
var320 = var326;
goto RET_LABEL321;
RET_LABEL321:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var318,var320) on <var318:Int> */
/* Covariant cast for argument 0 (i) <var320:Int> isa OTHER */
/* <var320:Int> isa OTHER */
var329 = 1; /* easy <var320:Int> isa OTHER*/
if (unlikely(!var329)) {
var_class_name332 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name332);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var333 = var318 - var320;
var327 = var333;
goto RET_LABEL328;
RET_LABEL328:(void)0;
}
}
{
((void(*)(val* self, long p0))(var317->class->vft[COLOR_more_collections__BestDistance__best_distance_61d]))(var317, var327); /* best_distance= on <var317:BestDistance[MClass]>*/
}
{
((void(*)(val* self))(var317->class->vft[COLOR_core__kernel__Object__init]))(var317); /* init on <var317:BestDistance[MClass]>*/
}
var_bests = var317;
{
{ /* Inline modelbuilder_base$ModelBuilder$model (self) on <self:ModelBuilder> */
var336 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <self:ModelBuilder> */
if (unlikely(var336 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var334 = var336;
RET_LABEL335:(void)0;
}
}
{
{ /* Inline model$Model$mclasses (var334) on <var334:Model> */
var339 = var334->attrs[COLOR_nitc__model__Model___mclasses].val; /* _mclasses on <var334:Model> */
if (unlikely(var339 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclasses");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 43);
fatal_exit(1);
}
var337 = var339;
RET_LABEL338:(void)0;
}
}
var_340 = var337;
{
var341 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_340);
}
var_342 = var341;
for(;;) {
{
var343 = ((short int(*)(val* self))((((long)var_342&3)?class_info[((long)var_342&3)]:var_342->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_342); /* is_ok on <var_342:IndexedIterator[MClass]>*/
}
if (var343){
} else {
goto BREAK_label344;
}
{
var345 = ((val*(*)(val* self))((((long)var_342&3)?class_info[((long)var_342&3)]:var_342->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_342); /* item on <var_342:IndexedIterator[MClass]>*/
}
var_c346 = var345;
{
{ /* Inline mmodule$MModule$in_importation (var_mmodule) on <var_mmodule:MModule> */
var349 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var349 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var347 = var349;
RET_LABEL348:(void)0;
}
}
{
{ /* Inline model$MClass$intro_mmodule (var_c346) on <var_c346:MClass> */
var352 = var_c346->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_c346:MClass> */
if (unlikely(var352 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var350 = var352;
RET_LABEL351:(void)0;
}
}
{
var353 = poset___poset__POSetElement____60d_61d(var347, var350);
}
var354 = !var353;
if (var354){
goto BREAK_label355;
} else {
}
{
{ /* Inline model$MClass$intro_mmodule (var_c346) on <var_c346:MClass> */
var358 = var_c346->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_c346:MClass> */
if (unlikely(var358 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var356 = var358;
RET_LABEL357:(void)0;
}
}
{
{ /* Inline model$MClass$visibility (var_c346) on <var_c346:MClass> */
var361 = var_c346->attrs[COLOR_nitc__model__MClass___visibility].val; /* _visibility on <var_c346:MClass> */
if (unlikely(var361 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 476);
fatal_exit(1);
}
var359 = var361;
RET_LABEL360:(void)0;
}
}
{
var362 = nitc___nitc__MModule___is_visible(var_mmodule, var356, var359);
}
var363 = !var362;
if (var363){
goto BREAK_label355;
} else {
}
{
{ /* Inline model$MClass$name (var_c346) on <var_c346:MClass> */
var366 = var_c346->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_c346:MClass> */
if (unlikely(var366 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var364 = var366;
RET_LABEL365:(void)0;
}
}
{
var367 = core___core__Text___levenshtein_distance(var_qname, var364);
}
var_d = var367;
{
var368 = more_collections___more_collections__BestDistance___update(var_bests, var_d, var_c346);
}
{
var369 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_c346);
}
{
var370 = core___core__Text___levenshtein_distance(var_qname, var369);
}
var_d = var370;
{
var371 = more_collections___more_collections__BestDistance___update(var_bests, var_d, var_c346);
}
BREAK_label355: (void)0;
{
((void(*)(val* self))((((long)var_342&3)?class_info[((long)var_342&3)]:var_342->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_342); /* next on <var_342:IndexedIterator[MClass]>*/
}
}
BREAK_label344: (void)0;
{
((void(*)(val* self))((((long)var_342&3)?class_info[((long)var_342&3)]:var_342->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_342); /* finish on <var_342:IndexedIterator[MClass]>*/
}
{
{ /* Inline more_collections$BestDistance$best_items (var_bests) on <var_bests:BestDistance[MClass]> */
var374 = var_bests->attrs[COLOR_more_collections__BestDistance___best_items].val; /* _best_items on <var_bests:BestDistance[MClass]> */
if (unlikely(var374 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _best_items");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 562);
fatal_exit(1);
}
var372 = var374;
RET_LABEL373:(void)0;
}
}
{
var375 = core___core__Collection___not_empty(var372);
}
if (var375){
{
{ /* Inline more_collections$BestDistance$best_items (var_bests) on <var_bests:BestDistance[MClass]> */
var378 = var_bests->attrs[COLOR_more_collections__BestDistance___best_items].val; /* _best_items on <var_bests:BestDistance[MClass]> */
if (unlikely(var378 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _best_items");
PRINT_ERROR(" (%s:%d)\n", FILE_more_collections, 562);
fatal_exit(1);
}
var376 = var378;
RET_LABEL377:(void)0;
}
}
var_379 = var376;
{
var380 = ((val*(*)(val* self))((((long)var_379&3)?class_info[((long)var_379&3)]:var_379->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_379); /* iterator on <var_379:Set[MClass]>*/
}
var_381 = var380;
for(;;) {
{
var382 = ((short int(*)(val* self))((((long)var_381&3)?class_info[((long)var_381&3)]:var_381->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_381); /* is_ok on <var_381:Iterator[MClass]>*/
}
if (var382){
} else {
goto BREAK_label383;
}
{
var384 = ((val*(*)(val* self))((((long)var_381&3)?class_info[((long)var_381&3)]:var_381->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_381); /* item on <var_381:Iterator[MClass]>*/
}
var_c385 = var384;
if (unlikely(varonce386==NULL)) {
var387 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce388!=NULL)) {
var389 = varonce388;
} else {
var390 = "`";
var392 = (val*)(1l<<2|1);
var393 = (val*)(1l<<2|1);
var394 = (val*)((long)(0)<<2|3);
var395 = (val*)((long)(0)<<2|3);
var391 = core__flat___CString___to_s_unsafe(var390, var392, var393, var394, var395);
var389 = var391;
varonce388 = var389;
}
((struct instance_core__NativeArray*)var387)->values[0]=var389;
if (likely(varonce396!=NULL)) {
var397 = varonce396;
} else {
var398 = "`";
var400 = (val*)(1l<<2|1);
var401 = (val*)(1l<<2|1);
var402 = (val*)((long)(0)<<2|3);
var403 = (val*)((long)(0)<<2|3);
var399 = core__flat___CString___to_s_unsafe(var398, var400, var401, var402, var403);
var397 = var399;
varonce396 = var397;
}
((struct instance_core__NativeArray*)var387)->values[2]=var397;
} else {
var387 = varonce386;
varonce386 = NULL;
}
{
var404 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var_c385);
}
((struct instance_core__NativeArray*)var387)->values[1]=var404;
{
var405 = ((val*(*)(val* self))(var387->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var387); /* native_to_s on <var387:NativeArray[String]>*/
}
varonce386 = var387;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_hints, var405); /* Direct call array$Array$add on <var_hints:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_381&3)?class_info[((long)var_381&3)]:var_381->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_381); /* next on <var_381:Iterator[MClass]>*/
}
}
BREAK_label383: (void)0;
{
((void(*)(val* self))((((long)var_381&3)?class_info[((long)var_381&3)]:var_381->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_381); /* finish on <var_381:Iterator[MClass]>*/
}
if (unlikely(varonce406==NULL)) {
var407 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce408!=NULL)) {
var409 = varonce408;
} else {
var410 = "Error: class `";
var412 = (val*)(14l<<2|1);
var413 = (val*)(14l<<2|1);
var414 = (val*)((long)(0)<<2|3);
var415 = (val*)((long)(0)<<2|3);
var411 = core__flat___CString___to_s_unsafe(var410, var412, var413, var414, var415);
var409 = var411;
varonce408 = var409;
}
((struct instance_core__NativeArray*)var407)->values[0]=var409;
if (likely(varonce416!=NULL)) {
var417 = varonce416;
} else {
var418 = "` not found in module `";
var420 = (val*)(23l<<2|1);
var421 = (val*)(23l<<2|1);
var422 = (val*)((long)(0)<<2|3);
var423 = (val*)((long)(0)<<2|3);
var419 = core__flat___CString___to_s_unsafe(var418, var420, var421, var422, var423);
var417 = var419;
varonce416 = var417;
}
((struct instance_core__NativeArray*)var407)->values[2]=var417;
if (likely(varonce424!=NULL)) {
var425 = varonce424;
} else {
var426 = "`. Did you mean ";
var428 = (val*)(16l<<2|1);
var429 = (val*)(16l<<2|1);
var430 = (val*)((long)(0)<<2|3);
var431 = (val*)((long)(0)<<2|3);
var427 = core__flat___CString___to_s_unsafe(var426, var428, var429, var430, var431);
var425 = var427;
varonce424 = var425;
}
((struct instance_core__NativeArray*)var407)->values[4]=var425;
if (likely(varonce432!=NULL)) {
var433 = varonce432;
} else {
var434 = "?";
var436 = (val*)(1l<<2|1);
var437 = (val*)(1l<<2|1);
var438 = (val*)((long)(0)<<2|3);
var439 = (val*)((long)(0)<<2|3);
var435 = core__flat___CString___to_s_unsafe(var434, var436, var437, var438, var439);
var433 = var435;
varonce432 = var433;
}
((struct instance_core__NativeArray*)var407)->values[6]=var433;
} else {
var407 = varonce406;
varonce406 = NULL;
}
((struct instance_core__NativeArray*)var407)->values[1]=var_qname;
{
var440 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var407)->values[3]=var440;
if (likely(varonce441!=NULL)) {
var442 = varonce441;
} else {
var443 = ",";
var445 = (val*)(1l<<2|1);
var446 = (val*)(1l<<2|1);
var447 = (val*)((long)(0)<<2|3);
var448 = (val*)((long)(0)<<2|3);
var444 = core__flat___CString___to_s_unsafe(var443, var445, var446, var447, var448);
var442 = var444;
varonce441 = var442;
}
if (likely(varonce449!=NULL)) {
var450 = varonce449;
} else {
var451 = " or ";
var453 = (val*)(4l<<2|1);
var454 = (val*)(4l<<2|1);
var455 = (val*)((long)(0)<<2|3);
var456 = (val*)((long)(0)<<2|3);
var452 = core__flat___CString___to_s_unsafe(var451, var453, var454, var455, var456);
var450 = var452;
varonce449 = var450;
}
{
var457 = core__abstract_text___Collection___join(var_hints, var442, var450);
}
((struct instance_core__NativeArray*)var407)->values[5]=var457;
{
var458 = ((val*(*)(val* self))(var407->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var407); /* native_to_s on <var407:NativeArray[String]>*/
}
varonce406 = var407;
{
nitc___nitc__ModelBuilder___error(self, var_qid, var458); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
if (unlikely(varonce459==NULL)) {
var460 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce461!=NULL)) {
var462 = varonce461;
} else {
var463 = "Error: class `";
var465 = (val*)(14l<<2|1);
var466 = (val*)(14l<<2|1);
var467 = (val*)((long)(0)<<2|3);
var468 = (val*)((long)(0)<<2|3);
var464 = core__flat___CString___to_s_unsafe(var463, var465, var466, var467, var468);
var462 = var464;
varonce461 = var462;
}
((struct instance_core__NativeArray*)var460)->values[0]=var462;
if (likely(varonce469!=NULL)) {
var470 = varonce469;
} else {
var471 = "` not found in module `";
var473 = (val*)(23l<<2|1);
var474 = (val*)(23l<<2|1);
var475 = (val*)((long)(0)<<2|3);
var476 = (val*)((long)(0)<<2|3);
var472 = core__flat___CString___to_s_unsafe(var471, var473, var474, var475, var476);
var470 = var472;
varonce469 = var470;
}
((struct instance_core__NativeArray*)var460)->values[2]=var470;
if (likely(varonce477!=NULL)) {
var478 = varonce477;
} else {
var479 = "`.";
var481 = (val*)(2l<<2|1);
var482 = (val*)(2l<<2|1);
var483 = (val*)((long)(0)<<2|3);
var484 = (val*)((long)(0)<<2|3);
var480 = core__flat___CString___to_s_unsafe(var479, var481, var482, var483, var484);
var478 = var480;
varonce477 = var478;
}
((struct instance_core__NativeArray*)var460)->values[4]=var478;
} else {
var460 = varonce459;
varonce459 = NULL;
}
((struct instance_core__NativeArray*)var460)->values[1]=var_qname;
{
var485 = ((val*(*)(val* self))(var_mmodule->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmodule); /* to_s on <var_mmodule:MModule>*/
}
((struct instance_core__NativeArray*)var460)->values[3]=var485;
{
var486 = ((val*(*)(val* self))(var460->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var460); /* native_to_s on <var460:NativeArray[String]>*/
}
varonce459 = var460;
{
nitc___nitc__ModelBuilder___error(self, var_qid, var486); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
RET_LABEL:;
}
/* method modelbuilder_base$ModelBuilder$bad_class_names for (self: ModelBuilder): MultiHashMap[MModule, String] */
val* nitc___nitc__ModelBuilder___bad_class_names(val* self) {
val* var /* : MultiHashMap[MModule, String] */;
val* var1 /* : MultiHashMap[MModule, String] */;
var1 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___bad_class_names].val; /* _bad_class_names on <self:ModelBuilder> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bad_class_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 413);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$resolve_mtype for (self: ModelBuilder, MModule, nullable MClassDef, AType): nullable MType */
val* nitc___nitc__ModelBuilder___resolve_mtype(val* self, val* p0, val* p1, val* p2) {
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
char* var70 /* : CString */;
val* var71 /* : String */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Bool */;
val* var75 /* : nullable Bool */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : CString */;
val* var79 /* : String */;
val* var80 /* : nullable Int */;
val* var81 /* : nullable Int */;
val* var82 /* : nullable Bool */;
val* var83 /* : nullable Bool */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
val* var88 /* : nullable Int */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Bool */;
val* var91 /* : nullable Bool */;
val* var92 /* : String */;
val* var93 /* : String */;
val* var94 /* : String */;
long var95 /* : Int */;
var_mmodule = p0;
var_mclassdef = p1;
var_ntype = p2;
{
{ /* Inline modelbuilder_base$AType$mtype (var_ntype) on <var_ntype:AType> */
var3 = var_ntype->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var_ntype:AType> */
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
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
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
var10 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(self, var_mmodule, var_mclassdef, var_ntype, 1);
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
{ /* Inline kernel$Object$== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
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
{ /* Inline modelbuilder_base$AType$checked_mtype (var_ntype) on <var_ntype:AType> */
var19 = var_ntype->attrs[COLOR_nitc__modelbuilder_base__AType___checked_mtype].s; /* _checked_mtype on <var_ntype:AType> */
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
cltype = type_nitc__MGenericType.color;
idtype = type_nitc__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var20 = 0;
} else {
var20 = var_mtype->type->type_table[cltype] == idtype;
}
if (var20){
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:nullable MType(MGenericType)> */
var23 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MType(MGenericType)> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_mclass = var21;
var_i = 0l;
{
{ /* Inline model$MClass$arity (var_mclass) on <var_mclass:MClass> */
var26 = var_mclass->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <var_mclass:MClass> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_ = var24;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var29 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var32 = var_i < var_;
var27 = var32;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
} else {
goto BREAK_label;
}
{
var33 = nitc___nitc__MClass___try_intro(var_mclass);
}
var_intro = var33;
if (var_intro == NULL) {
var34 = 1; /* is null */
} else {
var34 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_intro,((val*)NULL)) on <var_intro:nullable MClassDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_intro,var_other) on <var_intro:nullable MClassDef(MClassDef)> */
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
{ /* Inline model$MClassDef$bound_mtype (var_intro) on <var_intro:nullable MClassDef(MClassDef)> */
var42 = var_intro->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_intro:nullable MClassDef(MClassDef)> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = ((val*(*)(val* self))(var40->class->vft[COLOR_nitc__model__MClassType__arguments]))(var40); /* arguments on <var40:MClassType>*/
}
{
var44 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var43, var_i);
}
var_bound = var44;
{
{ /* Inline parser_nodes$AType$n_types (var_ntype) on <var_ntype:AType> */
var47 = var_ntype->attrs[COLOR_nitc__parser_nodes__AType___n_types].val; /* _n_types on <var_ntype:AType> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1782);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var45, var_i);
}
var_nt = var48;
{
var49 = nitc___nitc__ModelBuilder___resolve_mtype(self, var_mmodule, var_mclassdef, var_nt);
}
var_mt = var49;
if (var_mt == NULL) {
var50 = 1; /* is null */
} else {
var50 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mt,((val*)NULL)) on <var_mt:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mt,var_other) on <var_mt:nullable MType(MType)> */
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
{ /* Inline kernel$Object$!= (var_mclassdef,((val*)NULL)) on <var_mclassdef:nullable MClassDef> */
var_other59 = ((val*)NULL);
{
var60 = ((short int(*)(val* self, val* p0))(var_mclassdef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mclassdef, var_other59); /* == on <var_mclassdef:nullable MClassDef(MClassDef)>*/
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
{ /* Inline model$MClassDef$bound_mtype (var_mclassdef) on <var_mclassdef:nullable MClassDef(MClassDef)> */
var64 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:nullable MClassDef(MClassDef)> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
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
var65 = nitc___nitc__ModelBuilder___check_subtype(self, var_nt, var_mmodule, var_anchor, var_mt, var_bound);
}
var66 = !var65;
if (var66){
if (unlikely(varonce==NULL)) {
var67 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "Type Error: expected `";
var72 = (val*)(22l<<2|1);
var73 = (val*)(22l<<2|1);
var74 = (val*)((long)(0)<<2|3);
var75 = (val*)((long)(0)<<2|3);
var71 = core__flat___CString___to_s_unsafe(var70, var72, var73, var74, var75);
var69 = var71;
varonce68 = var69;
}
((struct instance_core__NativeArray*)var67)->values[0]=var69;
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "`, got `";
var80 = (val*)(8l<<2|1);
var81 = (val*)(8l<<2|1);
var82 = (val*)((long)(0)<<2|3);
var83 = (val*)((long)(0)<<2|3);
var79 = core__flat___CString___to_s_unsafe(var78, var80, var81, var82, var83);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var67)->values[2]=var77;
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "`.";
var88 = (val*)(2l<<2|1);
var89 = (val*)(2l<<2|1);
var90 = (val*)((long)(0)<<2|3);
var91 = (val*)((long)(0)<<2|3);
var87 = core__flat___CString___to_s_unsafe(var86, var88, var89, var90, var91);
var85 = var87;
varonce84 = var85;
}
((struct instance_core__NativeArray*)var67)->values[4]=var85;
} else {
var67 = varonce;
varonce = NULL;
}
{
var92 = ((val*(*)(val* self))(var_bound->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_bound); /* to_s on <var_bound:MType>*/
}
((struct instance_core__NativeArray*)var67)->values[1]=var92;
{
var93 = ((val*(*)(val* self))(var_mt->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mt); /* to_s on <var_mt:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var67)->values[3]=var93;
{
var94 = ((val*(*)(val* self))(var67->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var67); /* native_to_s on <var67:NativeArray[String]>*/
}
varonce = var67;
{
nitc___nitc__ModelBuilder___error(self, var_nt, var94); /* Direct call modelbuilder_base$ModelBuilder$error on <self:ModelBuilder>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var95 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var95;
}
BREAK_label: (void)0;
} else {
}
{
{ /* Inline modelbuilder_base$AType$checked_mtype= (var_ntype,1) on <var_ntype:AType> */
var_ntype->attrs[COLOR_nitc__modelbuilder_base__AType___checked_mtype].s = 1; /* _checked_mtype on <var_ntype:AType> */
RET_LABEL96:(void)0;
}
}
var = var_mtype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$check_subtype for (self: ModelBuilder, ANode, MModule, nullable MClassType, MType, MType): Bool */
short int nitc___nitc__ModelBuilder___check_subtype(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
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
var1 = nitc___nitc__MType___is_subtype(var_sub, var_mmodule, var_anchor, var_sup);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ModelBuilder$check_sametype for (self: ModelBuilder, ANode, MModule, nullable MClassType, MType, MType): Bool */
short int nitc___nitc__ModelBuilder___check_sametype(val* self, val* p0, val* p1, val* p2, val* p3, val* p4) {
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
var2 = nitc___nitc__MType___is_subtype(var_sub, var_mmodule, var_anchor, var_sup);
}
var_ = var2;
if (var2){
{
var3 = nitc___nitc__MType___is_subtype(var_sup, var_mmodule, var_anchor, var_sub);
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
/* method modelbuilder_base$ANode$is_broken for (self: ANode): Bool */
short int nitc__modelbuilder_base___ANode___is_broken(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s; /* _is_broken on <self:ANode> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ANode$is_broken= for (self: ANode, Bool) */
void nitc__modelbuilder_base___ANode___is_broken_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelbuilder_base__ANode___is_broken].s = p0; /* _is_broken on <self:ANode> */
RET_LABEL:;
}
/* method modelbuilder_base$AType$mtype for (self: AType): nullable MType */
val* nitc__modelbuilder_base___AType___mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <self:AType> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$AType$mtype= for (self: AType, nullable MType) */
void nitc__modelbuilder_base___AType___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val = p0; /* _mtype on <self:AType> */
RET_LABEL:;
}
/* method modelbuilder_base$AType$checked_mtype for (self: AType): Bool */
short int nitc__modelbuilder_base___AType___checked_mtype(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelbuilder_base__AType___checked_mtype].s; /* _checked_mtype on <self:AType> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$AType$checked_mtype= for (self: AType, Bool) */
void nitc__modelbuilder_base___AType___checked_mtype_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelbuilder_base__AType___checked_mtype].s = p0; /* _checked_mtype on <self:AType> */
RET_LABEL:;
}
/* method modelbuilder_base$AIntrudeVisibility$mvisibility for (self: AIntrudeVisibility): MVisibility */
val* nitc__modelbuilder_base___AIntrudeVisibility___AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
var1 = glob_sys;
{
var2 = nitc__model_base___core__Sys___intrude_visibility(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$APublicVisibility$mvisibility for (self: APublicVisibility): MVisibility */
val* nitc__modelbuilder_base___APublicVisibility___AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
var1 = glob_sys;
{
var2 = nitc__model_base___core__Sys___public_visibility(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$AProtectedVisibility$mvisibility for (self: AProtectedVisibility): MVisibility */
val* nitc__modelbuilder_base___AProtectedVisibility___AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
var1 = glob_sys;
{
var2 = nitc__model_base___core__Sys___protected_visibility(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$APrivateVisibility$mvisibility for (self: APrivateVisibility): MVisibility */
val* nitc__modelbuilder_base___APrivateVisibility___AVisibility__mvisibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : Sys */;
val* var2 /* : MVisibility */;
var1 = glob_sys;
{
var2 = nitc__model_base___core__Sys___private_visibility(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ADoc$mdoc_cache for (self: ADoc): nullable MDoc */
val* nitc__modelbuilder_base___ADoc___mdoc_cache(val* self) {
val* var /* : nullable MDoc */;
val* var1 /* : nullable MDoc */;
var1 = self->attrs[COLOR_nitc__modelbuilder_base__ADoc___mdoc_cache].val; /* _mdoc_cache on <self:ADoc> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$ADoc$mdoc_cache= for (self: ADoc, nullable MDoc) */
void nitc__modelbuilder_base___ADoc___mdoc_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelbuilder_base__ADoc___mdoc_cache].val = p0; /* _mdoc_cache on <self:ADoc> */
RET_LABEL:;
}
/* method modelbuilder_base$ADoc$to_mdoc for (self: ADoc): MDoc */
val* nitc__modelbuilder_base___ADoc___to_mdoc(val* self) {
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
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Bool */;
val* var35 /* : nullable Bool */;
val* var37 /* : SequenceRead[Char] */;
val* var38 /* : nullable Object */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
uint32_t var42 /* : Char */;
val* var43 /* : SequenceRead[Char] */;
val* var44 /* : nullable Object */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
uint32_t var48 /* : Char */;
val* var49 /* : Text */;
val* var50 /* : Text */;
val* var51 /* : SequenceRead[Char] */;
val* var52 /* : nullable Object */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
uint32_t var56 /* : Char */;
long var57 /* : Int */;
long var58 /* : Int */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name63;
long var64 /* : Int */;
val* var65 /* : Text */;
val* var66 /* : Array[String] */;
val* var68 /* : Array[String] */;
{
{ /* Inline modelbuilder_base$ADoc$mdoc_cache (self) on <self:ADoc> */
var3 = self->attrs[COLOR_nitc__modelbuilder_base__ADoc___mdoc_cache].val; /* _mdoc_cache on <self:ADoc> */
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
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable MDoc> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable MDoc(MDoc)>*/
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
var9 = NEW_nitc__MDoc(&type_nitc__MDoc);
{
{ /* Inline parser_nodes$ANode$location (self) on <self:ADoc> */
var12 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:ADoc> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__mdoc__MDoc__location_61d]))(var9, var10); /* location= on <var9:MDoc>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:MDoc>*/
}
var_res = var9;
{
{ /* Inline parser_nodes$ADoc$n_comment (self) on <self:ADoc> */
var15 = self->attrs[COLOR_nitc__parser_nodes__ADoc___n_comment].val; /* _n_comment on <self:ADoc> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_comment");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2964);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_ = var13;
{
var16 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_);
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:Iterator[TComment]>*/
}
if (var18){
} else {
goto BREAK_label;
}
{
var19 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:Iterator[TComment]>*/
}
var_c = var19;
{
var20 = nitc__lexer_work___Token___text(var_c);
}
var_text = var20;
{
var21 = ((long(*)(val* self))(var_text->class->vft[COLOR_core__abstract_text__Text__length]))(var_text); /* length on <var_text:String>*/
}
{
{ /* Inline kernel$Int$< (var21,2l) on <var21:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var24 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
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
{ /* Inline mdoc$MDoc$content (var_res) on <var_res:nullable MDoc(MDoc)> */
var28 = var_res->attrs[COLOR_nitc__mdoc__MDoc___content].val; /* _content on <var_res:nullable MDoc(MDoc)> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mdoc, 23);
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
var32 = (val*)(0l<<2|1);
var33 = (val*)(0l<<2|1);
var34 = (val*)((long)(0)<<2|3);
var35 = (val*)((long)(0)<<2|3);
var31 = core__flat___CString___to_s_unsafe(var30, var32, var33, var34, var35);
var29 = var31;
varonce = var29;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var26, var29); /* Direct call array$Array$add on <var26:Array[String]>*/
}
goto BREAK_label36;
} else {
}
{
var37 = ((val*(*)(val* self))(var_text->class->vft[COLOR_core__abstract_text__Text__chars]))(var_text); /* chars on <var_text:String>*/
}
{
var38 = ((val*(*)(val* self, long p0))((((long)var37&3)?class_info[((long)var37&3)]:var37->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var37, 0l); /* [] on <var37:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$== (var38,'#') on <var38:nullable Object(Char)> */
var42 = (uint32_t)((long)(var38)>>2);
var41 = var42 == '#';
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (unlikely(!var39)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 543);
fatal_exit(1);
}
{
var43 = ((val*(*)(val* self))(var_text->class->vft[COLOR_core__abstract_text__Text__chars]))(var_text); /* chars on <var_text:String>*/
}
{
var44 = ((val*(*)(val* self, long p0))((((long)var43&3)?class_info[((long)var43&3)]:var43->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var43, 1l); /* [] on <var43:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$== (var44,' ') on <var44:nullable Object(Char)> */
var48 = (uint32_t)((long)(var44)>>2);
var47 = var48 == ' ';
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
{
var49 = ((val*(*)(val* self, long p0))(var_text->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_text, 2l); /* substring_from on <var_text:String>*/
}
var_text = var49;
} else {
{
var50 = ((val*(*)(val* self, long p0))(var_text->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_text, 1l); /* substring_from on <var_text:String>*/
}
var_text = var50;
}
{
var51 = ((val*(*)(val* self))(var_text->class->vft[COLOR_core__abstract_text__Text__chars]))(var_text); /* chars on <var_text:String>*/
}
{
var52 = ((val*(*)(val* self))((((long)var51&3)?class_info[((long)var51&3)]:var51->class)->vft[COLOR_core__abstract_collection__SequenceRead__last]))(var51); /* last on <var51:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$== (var52,'\n') on <var52:nullable Object(Char)> */
var56 = (uint32_t)((long)(var52)>>2);
var55 = var56 == '\n';
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (var53){
{
var57 = ((long(*)(val* self))(var_text->class->vft[COLOR_core__abstract_text__Text__length]))(var_text); /* length on <var_text:String>*/
}
{
{ /* Inline kernel$Int$- (var57,1l) on <var57:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var60 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var60)) {
var_class_name63 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name63);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var64 = var57 - 1l;
var58 = var64;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
{
var65 = ((val*(*)(val* self, long p0, long p1))(var_text->class->vft[COLOR_core__abstract_text__Text__substring]))(var_text, 0l, var58); /* substring on <var_text:String>*/
}
var_text = var65;
} else {
}
{
{ /* Inline mdoc$MDoc$content (var_res) on <var_res:nullable MDoc(MDoc)> */
var68 = var_res->attrs[COLOR_nitc__mdoc__MDoc___content].val; /* _content on <var_res:nullable MDoc(MDoc)> */
if (unlikely(var68 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _content");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mdoc, 23);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var66, var_text); /* Direct call array$Array$add on <var66:Array[String]>*/
}
BREAK_label36: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:Iterator[TComment]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:Iterator[TComment]>*/
}
{
{ /* Inline modelbuilder_base$ADoc$mdoc_cache= (self,var_res) on <self:ADoc> */
self->attrs[COLOR_nitc__modelbuilder_base__ADoc___mdoc_cache].val = var_res; /* _mdoc_cache on <self:ADoc> */
RET_LABEL69:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$AQclassid$mpackname for (self: AQclassid): nullable String */
val* nitc__modelbuilder_base___AQclassid___mpackname(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable AQualified */;
val* var3 /* : nullable AQualified */;
val* var_nqualified /* var nqualified: nullable AQualified */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : ANodes[TId] */;
val* var12 /* : ANodes[TId] */;
val* var_nids /* var nids: ANodes[TId] */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var17 /* : Bool */;
val* var18 /* : ANode */;
val* var19 /* : String */;
{
{ /* Inline parser_nodes$AQclassid$n_qualified (self) on <self:AQclassid> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AQclassid___n_qualified].val; /* _n_qualified on <self:AQclassid> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_nqualified = var1;
if (var_nqualified == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_nqualified,((val*)NULL)) on <var_nqualified:nullable AQualified> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_nqualified,var_other) on <var_nqualified:nullable AQualified(AQualified)> */
var9 = var_nqualified == var_other;
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
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AQualified$n_id (var_nqualified) on <var_nqualified:nullable AQualified(AQualified)> */
var12 = var_nqualified->attrs[COLOR_nitc__parser_nodes__AQualified___n_id].val; /* _n_id on <var_nqualified:nullable AQualified(AQualified)> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2952);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_nids = var10;
{
var13 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var_nids);
}
{
{ /* Inline kernel$Int$<= (var13,0l) on <var13:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var16 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var17 = var13 <= 0l;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var18 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var_nids, 0l);
}
{
var19 = nitc__lexer_work___Token___text(var18);
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$AQclassid$mmodname for (self: AQclassid): nullable String */
val* nitc__modelbuilder_base___AQclassid___mmodname(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable AQualified */;
val* var3 /* : nullable AQualified */;
val* var_nqualified /* var nqualified: nullable AQualified */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : ANodes[TId] */;
val* var12 /* : ANodes[TId] */;
val* var_nids /* var nids: ANodes[TId] */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var17 /* : Bool */;
val* var18 /* : ANode */;
val* var19 /* : String */;
{
{ /* Inline parser_nodes$AQclassid$n_qualified (self) on <self:AQclassid> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AQclassid___n_qualified].val; /* _n_qualified on <self:AQclassid> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_nqualified = var1;
if (var_nqualified == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_nqualified,((val*)NULL)) on <var_nqualified:nullable AQualified> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_nqualified,var_other) on <var_nqualified:nullable AQualified(AQualified)> */
var9 = var_nqualified == var_other;
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
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AQualified$n_id (var_nqualified) on <var_nqualified:nullable AQualified(AQualified)> */
var12 = var_nqualified->attrs[COLOR_nitc__parser_nodes__AQualified___n_id].val; /* _n_id on <var_nqualified:nullable AQualified(AQualified)> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2952);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_nids = var10;
{
var13 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var_nids);
}
{
{ /* Inline kernel$Int$<= (var13,1l) on <var13:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var17 = var13 <= 1l;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
if (var14){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var18 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var_nids, 1l);
}
{
var19 = nitc__lexer_work___Token___text(var18);
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$AQclassid$accept for (self: AQclassid, MClass): Bool */
short int nitc__modelbuilder_base___AQclassid___accept(val* self, val* p0) {
short int var /* : Bool */;
val* var_mclass /* var mclass: MClass */;
val* var1 /* : String */;
val* var3 /* : String */;
val* var4 /* : TClassid */;
val* var6 /* : TClassid */;
val* var7 /* : String */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable String */;
val* var_mpackname /* var mpackname: nullable String */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var21 /* : nullable MPackage */;
val* var_mpackage /* var mpackage: nullable MPackage */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var_other25 /* var other: nullable Object */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : String */;
val* var31 /* : String */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : nullable String */;
val* var_mmodname /* var mmodname: nullable String */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var_ /* var : Bool */;
val* var43 /* : MModule */;
val* var45 /* : MModule */;
val* var46 /* : String */;
val* var48 /* : String */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
var_mclass = p0;
{
{ /* Inline model$MClass$name (var_mclass) on <var_mclass:MClass> */
var3 = var_mclass->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var_mclass:MClass> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline parser_nodes$AQclassid$n_id (self) on <self:AQclassid> */
var6 = self->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val; /* _n_id on <self:AQclassid> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1733);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__lexer_work___Token___text(var4);
}
{
{ /* Inline kernel$Object$!= (var1,var7) on <var1:String> */
var_other = var7;
{
var10 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:String>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
var = 0;
goto RET_LABEL;
} else {
}
{
var12 = nitc__modelbuilder_base___AQclassid___mpackname(self);
}
var_mpackname = var12;
if (var_mpackname == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mpackname,((val*)NULL)) on <var_mpackname:nullable String> */
var_other = ((val*)NULL);
{
var16 = ((short int(*)(val* self, val* p0))(var_mpackname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mpackname, var_other); /* == on <var_mpackname:nullable String(String)>*/
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
{ /* Inline model$MClass$intro_mmodule (var_mclass) on <var_mclass:MClass> */
var20 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = nitc___nitc__MModule___mpackage(var18);
}
var_mpackage = var21;
if (var_mpackage == NULL) {
var22 = 1; /* is null */
} else {
var22 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_mpackage,((val*)NULL)) on <var_mpackage:nullable MPackage> */
var_other25 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_mpackage,var_other25) on <var_mpackage:nullable MPackage(MPackage)> */
var28 = var_mpackage == var_other25;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline mpackage$MPackage$name (var_mpackage) on <var_mpackage:nullable MPackage(MPackage)> */
var31 = var_mpackage->attrs[COLOR_nitc__mpackage__MPackage___name].val; /* _name on <var_mpackage:nullable MPackage(MPackage)> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mpackage, 27);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var29,var_mpackname) on <var29:String> */
var_other = var_mpackname;
{
var34 = ((short int(*)(val* self, val* p0))(var29->class->vft[COLOR_core__kernel__Object___61d_61d]))(var29, var_other); /* == on <var29:String>*/
}
var35 = !var34;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
if (var32){
var = 0;
goto RET_LABEL;
} else {
}
{
var36 = nitc__modelbuilder_base___AQclassid___mmodname(self);
}
var_mmodname = var36;
if (var_mmodname == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_mmodname,((val*)NULL)) on <var_mmodname:nullable String> */
var_other = ((val*)NULL);
{
var41 = ((short int(*)(val* self, val* p0))(var_mmodname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mmodname, var_other); /* == on <var_mmodname:nullable String(String)>*/
}
var42 = !var41;
var39 = var42;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
var_ = var38;
if (var38){
{
{ /* Inline model$MClass$intro_mmodule (var_mclass) on <var_mclass:MClass> */
var45 = var_mclass->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var_mclass:MClass> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline mmodule$MModule$name (var43) on <var43:MModule> */
var48 = var43->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var43:MModule> */
if (unlikely(var48 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var46,var_mmodname) on <var46:String> */
var_other = var_mmodname;
{
var51 = ((short int(*)(val* self, val* p0))(var46->class->vft[COLOR_core__kernel__Object___61d_61d]))(var46, var_other); /* == on <var46:String>*/
}
var52 = !var51;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var37 = var49;
} else {
var37 = var_;
}
if (var37){
var = 0;
goto RET_LABEL;
} else {
}
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelbuilder_base$AQclassid$full_name for (self: AQclassid): String */
val* nitc__modelbuilder_base___AQclassid___full_name(val* self) {
val* var /* : String */;
val* var1 /* : TClassid */;
val* var3 /* : TClassid */;
val* var4 /* : String */;
val* var_res /* var res: String */;
val* var5 /* : nullable AQualified */;
val* var7 /* : nullable AQualified */;
val* var_nqualified /* var nqualified: nullable AQualified */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable TClassid */;
val* var16 /* : nullable TClassid */;
val* var_ncid /* var ncid: nullable TClassid */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var_other20 /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : String */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
val* var31 /* : Text */;
val* var32 /* : Text */;
val* var33 /* : ANodes[TId] */;
val* var35 /* : ANodes[TId] */;
val* var_nids /* var nids: ANodes[TId] */;
short int var36 /* : Bool */;
val* var37 /* : IndexedIterator[ANode] */;
val* var_ /* var : IndexedIterator[TId] */;
val* var38 /* : Iterator[nullable Object] */;
val* var_39 /* var : Iterator[TId] */;
short int var40 /* : Bool */;
val* var41 /* : nullable Object */;
val* var_n /* var n: TId */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable Bool */;
val* var51 /* : Text */;
val* var52 /* : Text */;
{
{ /* Inline parser_nodes$AQclassid$n_id (self) on <self:AQclassid> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val; /* _n_id on <self:AQclassid> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1733);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc__lexer_work___Token___text(var1);
}
var_res = var4;
{
{ /* Inline parser_nodes$AQclassid$n_qualified (self) on <self:AQclassid> */
var7 = self->attrs[COLOR_nitc__parser_nodes__AQclassid___n_qualified].val; /* _n_qualified on <self:AQclassid> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_nqualified = var5;
if (var_nqualified == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_nqualified,((val*)NULL)) on <var_nqualified:nullable AQualified> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_nqualified,var_other) on <var_nqualified:nullable AQualified(AQualified)> */
var13 = var_nqualified == var_other;
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
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes$AQualified$n_classid (var_nqualified) on <var_nqualified:nullable AQualified(AQualified)> */
var16 = var_nqualified->attrs[COLOR_nitc__parser_nodes__AQualified___n_classid].val; /* _n_classid on <var_nqualified:nullable AQualified(AQualified)> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_ncid = var14;
if (var_ncid == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ncid,((val*)NULL)) on <var_ncid:nullable TClassid> */
var_other20 = ((val*)NULL);
{
var21 = ((short int(*)(val* self, val* p0))(var_ncid->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ncid, var_other20); /* == on <var_ncid:nullable TClassid(TClassid)>*/
}
var22 = !var21;
var18 = var22;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
{
var23 = nitc__lexer_work___Token___text(var_ncid);
}
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "::";
var27 = (val*)(2l<<2|1);
var28 = (val*)(2l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce = var24;
}
{
var31 = ((val*(*)(val* self, val* p0))(var23->class->vft[COLOR_core__abstract_text__Text___43d]))(var23, var24); /* + on <var23:String>*/
}
{
var32 = ((val*(*)(val* self, val* p0))(var31->class->vft[COLOR_core__abstract_text__Text___43d]))(var31, var_res); /* + on <var31:Text(String)>*/
}
var_res = var32;
} else {
}
{
{ /* Inline parser_nodes$AQualified$n_id (var_nqualified) on <var_nqualified:nullable AQualified(AQualified)> */
var35 = var_nqualified->attrs[COLOR_nitc__parser_nodes__AQualified___n_id].val; /* _n_id on <var_nqualified:nullable AQualified(AQualified)> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2952);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
var_nids = var33;
{
var36 = core___core__Collection___not_empty(var_nids);
}
if (var36){
{
var37 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead__reverse_iterator(var_nids);
}
var_ = var37;
{
var38 = core___core__Iterator___iterator(var_);
}
var_39 = var38;
for(;;) {
{
var40 = ((short int(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_39); /* is_ok on <var_39:Iterator[TId]>*/
}
if (var40){
} else {
goto BREAK_label;
}
{
var41 = ((val*(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_39); /* item on <var_39:Iterator[TId]>*/
}
var_n = var41;
{
var42 = nitc__lexer_work___Token___text(var_n);
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "::";
var47 = (val*)(2l<<2|1);
var48 = (val*)(2l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
{
var51 = ((val*(*)(val* self, val* p0))(var42->class->vft[COLOR_core__abstract_text__Text___43d]))(var42, var44); /* + on <var42:String>*/
}
{
var52 = ((val*(*)(val* self, val* p0))(var51->class->vft[COLOR_core__abstract_text__Text___43d]))(var51, var_res); /* + on <var51:Text(String)>*/
}
var_res = var52;
{
((void(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_39); /* next on <var_39:Iterator[TId]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_39); /* finish on <var_39:Iterator[TId]>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
