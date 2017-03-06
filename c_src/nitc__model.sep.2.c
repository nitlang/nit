#include "nitc__model.sep.0.h"
/* method model$MGenericType$init for (self: MGenericType) */
void nitc___nitc__MGenericType___core__kernel__Object__init(val* self) {
val* var /* : MClass */;
val* var2 /* : MClass */;
long var3 /* : Int */;
long var5 /* : Int */;
val* var6 /* : Array[MType] */;
val* var8 /* : Array[MType] */;
long var9 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var16 /* : Array[MType] */;
val* var18 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var19 /* : IndexedIterator[nullable Object] */;
val* var_20 /* var : IndexedIterator[MType] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_t /* var t: MType */;
short int var23 /* : Bool */;
val* var25 /* : NativeArray[String] */;
static val* varonce;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Bool */;
val* var33 /* : nullable Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Bool */;
val* var41 /* : nullable Bool */;
val* var42 /* : MClass */;
val* var44 /* : MClass */;
val* var45 /* : String */;
val* var46 /* : Array[MType] */;
val* var48 /* : Array[MType] */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
val* var53 /* : nullable Int */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Bool */;
val* var56 /* : nullable Bool */;
val* var57 /* : String */;
val* var58 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MGenericType___core__kernel__Object__init]))(self); /* init on <self:MGenericType>*/
}
{
{ /* Inline model$MClassType$mclass (self) on <self:MGenericType> */
var2 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MGenericType> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model$MClass$arity (var) on <var:MClass> */
var5 = var->attrs[COLOR_nitc__model__MClass___arity].l; /* _arity on <var:MClass> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model$MGenericType$arguments (self) on <self:MGenericType> */
var8 = self->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1305);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline array$AbstractArrayRead$length (var6) on <var6:Array[MType]> */
var11 = var6->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var6:Array[MType]> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var3,var9) on <var3:Int> */
var14 = var3 == var9;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (unlikely(!var12)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1311);
fatal_exit(1);
}
{
{ /* Inline model$MGenericType$need_anchor= (self,0) on <self:MGenericType> */
self->attrs[COLOR_nitc__model__MGenericType___need_anchor].s = 0; /* _need_anchor on <self:MGenericType> */
RET_LABEL15:(void)0;
}
}
{
{ /* Inline model$MGenericType$arguments (self) on <self:MGenericType> */
var18 = self->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var18 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1305);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_ = var16;
{
var19 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_20 = var19;
for(;;) {
{
var21 = ((short int(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_20); /* is_ok on <var_20:IndexedIterator[MType]>*/
}
if (var21){
} else {
goto BREAK_label;
}
{
var22 = ((val*(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_20); /* item on <var_20:IndexedIterator[MType]>*/
}
var_t = var22;
{
var23 = ((short int(*)(val* self))(var_t->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_t); /* need_anchor on <var_t:MType>*/
}
if (var23){
{
{ /* Inline model$MGenericType$need_anchor= (self,1) on <self:MGenericType> */
self->attrs[COLOR_nitc__model__MGenericType___need_anchor].s = 1; /* _need_anchor on <self:MGenericType> */
RET_LABEL24:(void)0;
}
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_20); /* next on <var_20:IndexedIterator[MType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_20); /* finish on <var_20:IndexedIterator[MType]>*/
}
if (unlikely(varonce==NULL)) {
var25 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "[";
var30 = (val*)(1l<<2|1);
var31 = (val*)(1l<<2|1);
var32 = (val*)((long)(0)<<2|3);
var33 = (val*)((long)(0)<<2|3);
var29 = core__flat___CString___to_s_unsafe(var28, var30, var31, var32, var33);
var27 = var29;
varonce26 = var27;
}
((struct instance_core__NativeArray*)var25)->values[1]=var27;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "]";
var38 = (val*)(1l<<2|1);
var39 = (val*)(1l<<2|1);
var40 = (val*)((long)(0)<<2|3);
var41 = (val*)((long)(0)<<2|3);
var37 = core__flat___CString___to_s_unsafe(var36, var38, var39, var40, var41);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var25)->values[3]=var35;
} else {
var25 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MClassType$mclass (self) on <self:MGenericType> */
var44 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MGenericType> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__Object__to_s]))(var42); /* to_s on <var42:MClass>*/
}
((struct instance_core__NativeArray*)var25)->values[0]=var45;
{
{ /* Inline model$MGenericType$arguments (self) on <self:MGenericType> */
var48 = self->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var48 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1305);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = ", ";
var53 = (val*)(2l<<2|1);
var54 = (val*)(2l<<2|1);
var55 = (val*)((long)(0)<<2|3);
var56 = (val*)((long)(0)<<2|3);
var52 = core__flat___CString___to_s_unsafe(var51, var53, var54, var55, var56);
var50 = var52;
varonce49 = var50;
}
{
var57 = core__abstract_text___Collection___join(var46, var50, ((val*)NULL));
}
((struct instance_core__NativeArray*)var25)->values[2]=var57;
{
var58 = ((val*(*)(val* self))(var25->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce = var25;
{
{ /* Inline model$MGenericType$to_s= (self,var58) on <self:MGenericType> */
self->attrs[COLOR_nitc__model__MGenericType___to_s].val = var58; /* _to_s on <self:MGenericType> */
RET_LABEL59:(void)0;
}
}
RET_LABEL:;
}
/* method model$MGenericType$to_s for (self: MGenericType): String */
val* nitc___nitc__MGenericType___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MGenericType___to_s].val; /* _to_s on <self:MGenericType> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1324);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MGenericType$to_s= for (self: MGenericType, String) */
void nitc___nitc__MGenericType___to_s_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MGenericType___to_s].val = p0; /* _to_s on <self:MGenericType> */
RET_LABEL:;
}
/* method model$MGenericType$full_name for (self: MGenericType): String */
val* nitc___nitc__MGenericType___nitc__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : Array[String] */;
val* var_args /* var args: Array[String] */;
val* var6 /* : Array[MType] */;
val* var8 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var9 /* : IndexedIterator[nullable Object] */;
val* var_10 /* var : IndexedIterator[MType] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_t /* var t: MType */;
val* var13 /* : String */;
val* var14 /* : NativeArray[String] */;
static val* varonce;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
val* var31 /* : MClass */;
val* var33 /* : MClass */;
val* var34 /* : String */;
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
var1 = self->attrs[COLOR_nitc__model__MGenericType___full_name].val != NULL; /* _full_name on <self:MGenericType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MGenericType___full_name].val; /* _full_name on <self:MGenericType> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1328);
fatal_exit(1);
}
} else {
{
var5 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array$Array$init on <var5:Array[String]>*/
}
var_args = var5;
{
{ /* Inline model$MGenericType$arguments (self) on <self:MGenericType> */
var8 = self->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1305);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_ = var6;
{
var9 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:IndexedIterator[MType]>*/
}
if (var11){
} else {
goto BREAK_label;
}
{
var12 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:IndexedIterator[MType]>*/
}
var_t = var12;
{
var13 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitc__model_base__MEntity__full_name]))(var_t); /* full_name on <var_t:MType>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_args, var13); /* Direct call array$Array$add on <var_args:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:IndexedIterator[MType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:IndexedIterator[MType]>*/
}
if (unlikely(varonce==NULL)) {
var14 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "[";
var19 = (val*)(1l<<2|1);
var20 = (val*)(1l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var14)->values[1]=var16;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "]";
var27 = (val*)(1l<<2|1);
var28 = (val*)(1l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var14)->values[3]=var24;
} else {
var14 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MClassType$mclass (self) on <self:MGenericType> */
var33 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MGenericType> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var31);
}
((struct instance_core__NativeArray*)var14)->values[0]=var34;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = ", ";
var39 = (val*)(2l<<2|1);
var40 = (val*)(2l<<2|1);
var41 = (val*)((long)(0)<<2|3);
var42 = (val*)((long)(0)<<2|3);
var38 = core__flat___CString___to_s_unsafe(var37, var39, var40, var41, var42);
var36 = var38;
varonce35 = var36;
}
{
var43 = core__abstract_text___Collection___join(var_args, var36, ((val*)NULL));
}
((struct instance_core__NativeArray*)var14)->values[2]=var43;
{
var44 = ((val*(*)(val* self))(var14->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce = var14;
var3 = var44;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__model__MGenericType___full_name].val = var3; /* _full_name on <self:MGenericType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MGenericType$c_name for (self: MGenericType): String */
val* nitc___nitc__MGenericType___nitc__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : MClass */;
val* var7 /* : MClass */;
val* var8 /* : String */;
val* var_res /* var res: String */;
val* var9 /* : Array[MType] */;
val* var11 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var12 /* : IndexedIterator[nullable Object] */;
val* var_13 /* var : IndexedIterator[MType] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_t /* var t: MType */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
val* var23 /* : Text */;
val* var24 /* : String */;
val* var25 /* : Text */;
val* var26 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MGenericType___c_name].val != NULL; /* _c_name on <self:MGenericType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MGenericType___c_name].val; /* _c_name on <self:MGenericType> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1338);
fatal_exit(1);
}
} else {
{
{
{ /* Inline model$MClassType$mclass (self) on <self:MGenericType> */
var7 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MGenericType> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var5);
}
var_res = var8;
{
{ /* Inline model$MGenericType$arguments (self) on <self:MGenericType> */
var11 = self->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1305);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_ = var9;
{
var12 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_13); /* is_ok on <var_13:IndexedIterator[MType]>*/
}
if (var14){
} else {
goto BREAK_label;
}
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_13); /* item on <var_13:IndexedIterator[MType]>*/
}
var_t = var15;
if (likely(varonce!=NULL)) {
var16 = varonce;
} else {
var17 = "__";
var19 = (val*)(2l<<2|1);
var20 = (val*)(2l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce = var16;
}
{
var23 = ((val*(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Text___43d]))(var_res, var16); /* + on <var_res:String>*/
}
var_res = var23;
{
var24 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var_t); /* c_name on <var_t:MType>*/
}
{
var25 = ((val*(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_text__Text___43d]))(var_res, var24); /* + on <var_res:String>*/
}
var_res = var25;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_13); /* next on <var_13:IndexedIterator[MType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_13); /* finish on <var_13:IndexedIterator[MType]>*/
}
{
var26 = core___core__String___Object__to_s(var_res);
}
var3 = var26;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__model__MGenericType___c_name].val = var3; /* _c_name on <self:MGenericType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MGenericType$need_anchor for (self: MGenericType): Bool */
short int nitc___nitc__MGenericType___MType__need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__model__MGenericType___need_anchor].s; /* _need_anchor on <self:MGenericType> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MGenericType$need_anchor= for (self: MGenericType, Bool) */
void nitc___nitc__MGenericType___need_anchor_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__model__MGenericType___need_anchor].s = p0; /* _need_anchor on <self:MGenericType> */
RET_LABEL:;
}
/* method model$MGenericType$resolve_for for (self: MGenericType, MType, nullable MClassType, MModule, Bool): MType */
val* nitc___nitc__MGenericType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[MType] */;
val* var_types /* var types: Array[MType] */;
val* var7 /* : Array[MType] */;
val* var9 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var10 /* : IndexedIterator[nullable Object] */;
val* var_11 /* var : IndexedIterator[MType] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_t /* var t: MType */;
val* var14 /* : MType */;
val* var15 /* : MClass */;
val* var17 /* : MClass */;
val* var18 /* : MClassType */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
{
{ /* Inline model$MGenericType$need_anchor (self) on <self:MGenericType> */
var3 = self->attrs[COLOR_nitc__model__MGenericType___need_anchor].s; /* _need_anchor on <self:MGenericType> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = !var1;
if (var4){
var = self;
goto RET_LABEL;
} else {
}
{
var5 = nitc___nitc__MGenericType___MType__can_resolve_for(self, var_mtype, var_anchor, var_mmodule);
}
if (unlikely(!var5)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1353);
fatal_exit(1);
}
var6 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array$Array$init on <var6:Array[MType]>*/
}
var_types = var6;
{
{ /* Inline model$MGenericType$arguments (self) on <self:MGenericType> */
var9 = self->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1305);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_ = var7;
{
var10 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:IndexedIterator[MType]>*/
}
if (var12){
} else {
goto BREAK_label;
}
{
var13 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:IndexedIterator[MType]>*/
}
var_t = var13;
{
var14 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_t->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_t, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual); /* resolve_for on <var_t:MType>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_types, var14); /* Direct call array$Array$add on <var_types:Array[MType]>*/
}
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:IndexedIterator[MType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:IndexedIterator[MType]>*/
}
{
{ /* Inline model$MClassType$mclass (self) on <self:MGenericType> */
var17 = self->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <self:MGenericType> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nitc___nitc__MClass___get_mtype(var15, var_types);
}
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MGenericType$can_resolve_for for (self: MGenericType, MType, nullable MClassType, MModule): Bool */
short int nitc___nitc__MGenericType___MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Array[MType] */;
val* var7 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var8 /* : IndexedIterator[nullable Object] */;
val* var_9 /* var : IndexedIterator[MType] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_t /* var t: MType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
{
{ /* Inline model$MGenericType$need_anchor (self) on <self:MGenericType> */
var3 = self->attrs[COLOR_nitc__model__MGenericType___need_anchor].s; /* _need_anchor on <self:MGenericType> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = !var1;
if (var4){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MGenericType$arguments (self) on <self:MGenericType> */
var7 = self->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1305);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_ = var5;
{
var8 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:IndexedIterator[MType]>*/
}
if (var10){
} else {
goto BREAK_label;
}
{
var11 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:IndexedIterator[MType]>*/
}
var_t = var11;
{
var12 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_t->class->vft[COLOR_nitc__model__MType__can_resolve_for]))(var_t, var_mtype, var_anchor, var_mmodule); /* can_resolve_for on <var_t:MType>*/
}
var13 = !var12;
if (var13){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:IndexedIterator[MType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:IndexedIterator[MType]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MGenericType$is_ok for (self: MGenericType): Bool */
short int nitc___nitc__MGenericType___MType__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : Array[MType] */;
val* var3 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var4 /* : IndexedIterator[nullable Object] */;
val* var_5 /* var : IndexedIterator[MType] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_t /* var t: MType */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
{
{ /* Inline model$MGenericType$arguments (self) on <self:MGenericType> */
var3 = self->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1305);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
{
var4 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:IndexedIterator[MType]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:IndexedIterator[MType]>*/
}
var_t = var7;
{
var8 = ((short int(*)(val* self))(var_t->class->vft[COLOR_nitc__model__MType__is_ok]))(var_t); /* is_ok on <var_t:MType>*/
}
var9 = !var8;
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:IndexedIterator[MType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:IndexedIterator[MType]>*/
}
{
var10 = ((short int(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MGenericType___MType__is_ok]))(self); /* is_ok on <self:MGenericType>*/
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MGenericType$is_legal_in for (self: MGenericType, MModule, nullable MClassType): Bool */
short int nitc___nitc__MGenericType___MType__is_legal_in(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_mmodule /* var mmodule: MModule */;
val* var_anchor /* var anchor: nullable MClassType */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MClassType */;
val* var_mtype /* var mtype: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MClass */;
val* var14 /* : MClass */;
val* var15 /* : MClassDef */;
val* var17 /* : MClassDef */;
val* var18 /* : MClassType */;
val* var20 /* : MClassType */;
short int var21 /* : Bool */;
var_mmodule = p0;
var_anchor = p1;
{
{ /* Inline model$MGenericType$need_anchor (self) on <self:MGenericType> */
var3 = self->attrs[COLOR_nitc__model__MGenericType___need_anchor].s; /* _need_anchor on <self:MGenericType> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
if (var_anchor == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_anchor, var_other); /* == on <var_anchor:nullable MClassType(MClassType)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (unlikely(!var4)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1380);
fatal_exit(1);
}
{
var9 = nitc___nitc__MClassType___MType__anchor_to(self, var_mmodule, var_anchor);
}
var_mtype = var9;
} else {
var_mtype = self;
}
{
var10 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__is_ok]))(var_mtype); /* is_ok on <var_mtype:nullable Object(MClassType)>*/
}
var11 = !var10;
if (var11){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:nullable Object(MClassType)> */
var14 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable Object(MClassType)> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model$MClass$intro (var12) on <var12:MClass> */
var17 = var12->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var12:MClass> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = nitc___nitc__MType___is_subtype(var_mtype, var_mmodule, ((val*)NULL), var18);
}
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MGenericType$length for (self: MGenericType): Int */
long nitc___nitc__MGenericType___MType__length(val* self) {
long var /* : Int */;
long var_res /* var res: Int */;
val* var1 /* : Array[MType] */;
val* var3 /* : Array[MType] */;
val* var_ /* var : Array[MType] */;
val* var4 /* : IndexedIterator[nullable Object] */;
val* var_5 /* var : IndexedIterator[MType] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_a /* var a: MType */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
var_res = 1l;
{
{ /* Inline model$MGenericType$arguments (self) on <self:MGenericType> */
var3 = self->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1305);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
{
var4 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:IndexedIterator[MType]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:IndexedIterator[MType]>*/
}
var_a = var7;
{
var8 = ((long(*)(val* self))(var_a->class->vft[COLOR_nitc__model__MType__length]))(var_a); /* length on <var_a:MType>*/
}
{
{ /* Inline kernel$Int$+ (var_res,var8) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var12 = var_res + var8;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_res = var9;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:IndexedIterator[MType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:IndexedIterator[MType]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MFormalType$as_notnull for (self: MFormalType): MType */
val* nitc___nitc__MFormalType___MType__as_notnull(val* self) {
val* var /* : MType */;
short int var1 /* : Bool */;
val* var2 /* : MType */;
val* var3 /* : MNotNullType */;
var1 = self->attrs[COLOR_nitc__model__MFormalType___as_notnull].val != NULL; /* _as_notnull on <self:MFormalType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MFormalType___as_notnull].val; /* _as_notnull on <self:MFormalType> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _as_notnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1416);
fatal_exit(1);
}
} else {
var3 = NEW_nitc__MNotNullType(&type_nitc__MNotNullType);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__model__MProxyType__mtype_61d]))(var3, self); /* mtype= on <var3:MNotNullType>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:MNotNullType>*/
}
self->attrs[COLOR_nitc__model__MFormalType___as_notnull].val = var3; /* _as_notnull on <self:MFormalType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MVirtualType$mproperty for (self: MVirtualType): MVirtualTypeProp */
val* nitc___nitc__MVirtualType___mproperty(val* self) {
val* var /* : MVirtualTypeProp */;
val* var1 /* : MVirtualTypeProp */;
var1 = self->attrs[COLOR_nitc__model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1423);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MVirtualType$mproperty= for (self: MVirtualType, MVirtualTypeProp) */
void nitc___nitc__MVirtualType___mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MVirtualType___mproperty].val = p0; /* _mproperty on <self:MVirtualType> */
RET_LABEL:;
}
/* method model$MVirtualType$location for (self: MVirtualType): Location */
val* nitc___nitc__MVirtualType___nitc__model_base__MEntity__location(val* self) {
val* var /* : Location */;
val* var1 /* : MVirtualTypeProp */;
val* var3 /* : MVirtualTypeProp */;
val* var4 /* : Location */;
val* var6 /* : Location */;
{
{ /* Inline model$MVirtualType$mproperty (self) on <self:MVirtualType> */
var3 = self->attrs[COLOR_nitc__model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1423);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MProperty$location (var1) on <var1:MVirtualTypeProp> */
var6 = var1->attrs[COLOR_nitc__model__MProperty___location].val; /* _location on <var1:MVirtualTypeProp> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2050);
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
/* method model$MVirtualType$model for (self: MVirtualType): Model */
val* nitc___nitc__MVirtualType___nitc__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MVirtualTypeProp */;
val* var3 /* : MVirtualTypeProp */;
val* var4 /* : MClassDef */;
val* var6 /* : MClassDef */;
val* var7 /* : MModule */;
val* var9 /* : MModule */;
val* var10 /* : Model */;
val* var12 /* : Model */;
{
{ /* Inline model$MVirtualType$mproperty (self) on <self:MVirtualType> */
var3 = self->attrs[COLOR_nitc__model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1423);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MProperty$intro_mclassdef (var1) on <var1:MVirtualTypeProp> */
var6 = var1->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <var1:MVirtualTypeProp> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var4) on <var4:MClassDef> */
var9 = var4->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var4:MClassDef> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline mmodule$MModule$model (var7) on <var7:MModule> */
var12 = var7->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var7:MModule> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MVirtualType$lookup_bound for (self: MVirtualType, MModule, MType): MType */
val* nitc___nitc__MVirtualType___MType__lookup_bound(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
val* var1 /* : MVirtualTypeProp */;
val* var3 /* : MVirtualTypeProp */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MErrorType */;
val* var7 /* : Model */;
val* var8 /* : MType */;
val* var9 /* : MVirtualTypeDef */;
val* var10 /* : nullable MType */;
val* var12 /* : nullable MType */;
val* var13 /* : MErrorType */;
val* var14 /* : Model */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
{ /* Inline model$MVirtualType$mproperty (self) on <self:MVirtualType> */
var3 = self->attrs[COLOR_nitc__model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1423);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__MType___has_mproperty(var_resolved_receiver, var_mmodule, var1);
}
var5 = !var4;
if (var5){
var6 = NEW_nitc__MErrorType(&type_nitc__MErrorType);
{
var7 = nitc___nitc__MVirtualType___nitc__model_base__MEntity__model(self);
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nitc__model__MErrorType__model_61d]))(var6, var7); /* model= on <var6:MErrorType>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:MErrorType>*/
}
var = var6;
goto RET_LABEL;
} else {
}
{
var9 = nitc___nitc__MVirtualType___lookup_single_definition(self, var_mmodule, var_resolved_receiver);
}
{
{ /* Inline model$MVirtualTypeDef$bound (var9) on <var9:MVirtualTypeDef> */
var12 = var9->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val; /* _bound on <var9:MVirtualTypeDef> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10!=NULL) {
var8 = var10;
} else {
var13 = NEW_nitc__MErrorType(&type_nitc__MErrorType);
{
var14 = nitc___nitc__MVirtualType___nitc__model_base__MEntity__model(self);
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nitc__model__MErrorType__model_61d]))(var13, var14); /* model= on <var13:MErrorType>*/
}
{
((void(*)(val* self))(var13->class->vft[COLOR_core__kernel__Object__init]))(var13); /* init on <var13:MErrorType>*/
}
var8 = var13;
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MVirtualType$lookup_single_definition for (self: MVirtualType, MModule, MType): MVirtualTypeDef */
val* nitc___nitc__MVirtualType___lookup_single_definition(val* self, val* p0, val* p1) {
val* var /* : MVirtualTypeDef */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MVirtualTypeProp */;
val* var5 /* : MVirtualTypeProp */;
val* var6 /* : Array[MPropDef] */;
val* var_props /* var props: Array[MVirtualTypeDef] */;
short int var7 /* : Bool */;
long var8 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var15 /* : ArraySet[MType] */;
val* var_types /* var types: ArraySet[MType] */;
val* var16 /* : nullable Object */;
val* var_res /* var res: MVirtualTypeDef */;
val* var_ /* var : Array[MVirtualTypeDef] */;
val* var17 /* : IndexedIterator[nullable Object] */;
val* var_18 /* var : IndexedIterator[MVirtualTypeDef] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_p /* var p: MVirtualTypeDef */;
val* var21 /* : nullable MType */;
val* var23 /* : nullable MType */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
long var28 /* : Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((short int(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_resolved_receiver); /* need_anchor on <var_resolved_receiver:MType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1440);
fatal_exit(1);
}
{
{ /* Inline model$MVirtualType$mproperty (self) on <self:MVirtualType> */
var5 = self->attrs[COLOR_nitc__model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1423);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc___nitc__MProperty___lookup_definitions(var3, var_mmodule, var_resolved_receiver);
}
var_props = var6;
{
var7 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_props);
}
if (var7){
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1443);
fatal_exit(1);
} else {
{
{ /* Inline array$AbstractArrayRead$length (var_props) on <var_props:Array[MVirtualTypeDef]> */
var10 = var_props->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_props:Array[MVirtualTypeDef]> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var8,1l) on <var8:Int> */
var13 = var8 == 1l;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
var14 = core___core__SequenceRead___Collection__first(var_props);
}
var = var14;
goto RET_LABEL;
} else {
}
}
var15 = NEW_core__ArraySet(&type_core__ArraySet__nitc__MType);
{
core___core__ArraySet___core__kernel__Object__init(var15); /* Direct call array$ArraySet$init on <var15:ArraySet[MType]>*/
}
var_types = var15;
{
var16 = core___core__SequenceRead___Collection__first(var_props);
}
var_res = var16;
var_ = var_props;
{
var17 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_18 = var17;
for(;;) {
{
var19 = ((short int(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_18); /* is_ok on <var_18:IndexedIterator[MVirtualTypeDef]>*/
}
if (var19){
} else {
goto BREAK_label;
}
{
var20 = ((val*(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_18); /* item on <var_18:IndexedIterator[MVirtualTypeDef]>*/
}
var_p = var20;
{
{ /* Inline model$MVirtualTypeDef$bound (var_p) on <var_p:MVirtualTypeDef> */
var23 = var_p->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val; /* _bound on <var_p:MVirtualTypeDef> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1450);
fatal_exit(1);
}
{
core___core__ArraySet___core__abstract_collection__SimpleCollection__add(var_types, var21); /* Direct call array$ArraySet$add on <var_types:ArraySet[MType]>*/
}
{
{ /* Inline model$MVirtualTypeDef$is_fixed (var_res) on <var_res:MVirtualTypeDef> */
var26 = var_res->attrs[COLOR_nitc__model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <var_res:MVirtualTypeDef> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var27 = !var24;
if (var27){
var_res = var_p;
} else {
}
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_18); /* next on <var_18:IndexedIterator[MVirtualTypeDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_18); /* finish on <var_18:IndexedIterator[MVirtualTypeDef]>*/
}
{
var28 = core___core__ArraySet___core__abstract_collection__Collection__length(var_types);
}
{
{ /* Inline kernel$Int$== (var28,1l) on <var28:Int> */
var31 = var28 == 1l;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
var = var_res;
goto RET_LABEL;
} else {
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1456);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method model$MVirtualType$lookup_fixed for (self: MVirtualType, MModule, MType): MType */
val* nitc___nitc__MVirtualType___MType__lookup_fixed(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : MVirtualTypeDef */;
val* var_prop /* var prop: MVirtualTypeDef */;
val* var6 /* : nullable MType */;
val* var8 /* : nullable MType */;
val* var_res /* var res: nullable MType */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : MErrorType */;
val* var16 /* : Model */;
val* var17 /* : MType */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
short int var_ /* var : Bool */;
val* var25 /* : MClass */;
val* var27 /* : MClass */;
val* var28 /* : MClassKind */;
val* var30 /* : MClassKind */;
val* var31 /* : Sys */;
val* var32 /* : MClassKind */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : MClass */;
val* var40 /* : MClass */;
val* var41 /* : MClassKind */;
val* var43 /* : MClassKind */;
val* var44 /* : Sys */;
val* var45 /* : MClassKind */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((short int(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_resolved_receiver); /* need_anchor on <var_resolved_receiver:MType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1465);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nitc__model__MType__undecorate]))(var_resolved_receiver); /* undecorate on <var_resolved_receiver:MType>*/
}
var_resolved_receiver = var3;
/* <var_resolved_receiver:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_resolved_receiver->type->table_size) {
var4 = 0;
} else {
var4 = var_resolved_receiver->type->type_table[cltype] == idtype;
}
if (unlikely(!var4)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1467);
fatal_exit(1);
}
{
var5 = nitc___nitc__MVirtualType___lookup_single_definition(self, var_mmodule, var_resolved_receiver);
}
var_prop = var5;
{
{ /* Inline model$MVirtualTypeDef$bound (var_prop) on <var_prop:MVirtualTypeDef> */
var8 = var_prop->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val; /* _bound on <var_prop:MVirtualTypeDef> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_res = var6;
if (var_res == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var_res,((val*)NULL)) on <var_res:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_res,var_other) on <var_res:nullable MType(MType)> */
var14 = var_res == var_other;
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
var15 = NEW_nitc__MErrorType(&type_nitc__MErrorType);
{
var16 = nitc___nitc__MVirtualType___nitc__model_base__MEntity__model(self);
}
{
((void(*)(val* self, val* p0))(var15->class->vft[COLOR_nitc__model__MErrorType__model_61d]))(var15, var16); /* model= on <var15:MErrorType>*/
}
{
((void(*)(val* self))(var15->class->vft[COLOR_core__kernel__Object__init]))(var15); /* init on <var15:MErrorType>*/
}
var = var15;
goto RET_LABEL;
} else {
}
{
var17 = ((val*(*)(val* self, val* p0, val* p1))(var_res->class->vft[COLOR_nitc__model__MType__lookup_fixed]))(var_res, var_mmodule, var_resolved_receiver); /* lookup_fixed on <var_res:nullable MType(MType)>*/
}
var_res = var17;
{
{ /* Inline model$MVirtualTypeDef$is_fixed (var_prop) on <var_prop:MVirtualTypeDef> */
var20 = var_prop->attrs[COLOR_nitc__model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <var_prop:MVirtualTypeDef> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18){
var = var_res;
goto RET_LABEL;
} else {
}
/* <var_res:nullable MType(MType)> isa MClassType */
cltype23 = type_nitc__MClassType.color;
idtype24 = type_nitc__MClassType.id;
if(cltype23 >= var_res->type->table_size) {
var22 = 0;
} else {
var22 = var_res->type->type_table[cltype23] == idtype24;
}
var_ = var22;
if (var22){
{
{ /* Inline model$MClassType$mclass (var_res) on <var_res:nullable MType(MClassType)> */
var27 = var_res->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_res:nullable MType(MClassType)> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var25) on <var25:MClass> */
var30 = var25->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var25:MClass> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
var31 = glob_sys;
{
var32 = nitc__model___core__Sys___enum_kind(var31);
}
{
{ /* Inline kernel$Object$== (var28,var32) on <var28:MClassKind> */
var_other = var32;
{
{ /* Inline kernel$Object$is_same_instance (var28,var_other) on <var28:MClassKind> */
var37 = var28 == var_other;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var21 = var33;
} else {
var21 = var_;
}
if (var21){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MClassType$mclass (var_resolved_receiver) on <var_resolved_receiver:MType(MClassType)> */
var40 = var_resolved_receiver->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_resolved_receiver:MType(MClassType)> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var38) on <var38:MClass> */
var43 = var38->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var38:MClass> */
if (unlikely(var43 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
var44 = glob_sys;
{
var45 = nitc__model___core__Sys___enum_kind(var44);
}
{
{ /* Inline kernel$Object$== (var41,var45) on <var41:MClassKind> */
var_other = var45;
{
{ /* Inline kernel$Object$is_same_instance (var41,var_other) on <var41:MClassKind> */
var50 = var41 == var_other;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
if (var46){
var = var_res;
goto RET_LABEL;
} else {
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MVirtualType$resolve_for for (self: MVirtualType, MType, nullable MClassType, MModule, Bool): MType */
val* nitc___nitc__MVirtualType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MVirtualTypeProp */;
val* var5 /* : MVirtualTypeProp */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : MType */;
val* var_resolved_receiver /* var resolved_receiver: nullable Object */;
val* var14 /* : MType */;
val* var_verbatim_bound /* var verbatim_bound: MType */;
val* var15 /* : MType */;
val* var_res /* var res: MType */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var1 = !var_cleanup_virtual;
if (var1){
var = self;
goto RET_LABEL;
} else {
}
{
var2 = nitc___nitc__MVirtualType___MType__can_resolve_for(self, var_mtype, var_anchor, var_mmodule);
}
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1491);
fatal_exit(1);
}
{
{ /* Inline model$MVirtualType$mproperty (self) on <self:MVirtualType> */
var5 = self->attrs[COLOR_nitc__model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1423);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc___nitc__MVirtualTypeProp___is_selftype(var3);
}
if (var6){
var = var_mtype;
goto RET_LABEL;
} else {
}
{
var7 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
if (var7){
if (var_anchor == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other = ((val*)NULL);
{
var11 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_anchor, var_other); /* == on <var_anchor:nullable MClassType(MClassType)>*/
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (unlikely(!var8)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1501);
fatal_exit(1);
}
{
var13 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_mtype, var_anchor, ((val*)NULL), var_mmodule, 1); /* resolve_for on <var_mtype:MType>*/
}
var_resolved_receiver = var13;
} else {
var_resolved_receiver = var_mtype;
}
{
var14 = nitc___nitc__MVirtualType___MType__lookup_bound(self, var_mmodule, var_resolved_receiver);
}
var_verbatim_bound = var14;
{
var15 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_verbatim_bound->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_verbatim_bound, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual); /* resolve_for on <var_verbatim_bound:MType>*/
}
var_res = var15;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MVirtualType$can_resolve_for for (self: MVirtualType, MType, nullable MClassType, MModule): Bool */
short int nitc___nitc__MVirtualType___MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : MType */;
val* var8 /* : MVirtualTypeProp */;
val* var10 /* : MVirtualTypeProp */;
short int var11 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
{
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
if (var1){
if (var_anchor == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_anchor, var_other); /* == on <var_anchor:nullable MClassType(MClassType)>*/
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1517);
fatal_exit(1);
}
{
var7 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_mtype, var_mmodule, var_anchor); /* anchor_to on <var_mtype:MType>*/
}
var_mtype = var7;
} else {
}
{
{ /* Inline model$MVirtualType$mproperty (self) on <self:MVirtualType> */
var10 = self->attrs[COLOR_nitc__model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1423);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc___nitc__MType___has_mproperty(var_mtype, var_mmodule, var8);
}
var = var11;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MVirtualType$to_s for (self: MVirtualType): String */
val* nitc___nitc__MVirtualType___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : MVirtualTypeProp */;
val* var3 /* : MVirtualTypeProp */;
val* var4 /* : String */;
{
{ /* Inline model$MVirtualType$mproperty (self) on <self:MVirtualType> */
var3 = self->attrs[COLOR_nitc__model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1423);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__MProperty___core__abstract_text__Object__to_s(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MVirtualType$full_name for (self: MVirtualType): String */
val* nitc___nitc__MVirtualType___nitc__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
val* var1 /* : MVirtualTypeProp */;
val* var3 /* : MVirtualTypeProp */;
val* var4 /* : String */;
{
{ /* Inline model$MVirtualType$mproperty (self) on <self:MVirtualType> */
var3 = self->attrs[COLOR_nitc__model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1423);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MVirtualType$c_name for (self: MVirtualType): String */
val* nitc___nitc__MVirtualType___nitc__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
val* var1 /* : MVirtualTypeProp */;
val* var3 /* : MVirtualTypeProp */;
val* var4 /* : String */;
{
{ /* Inline model$MVirtualType$mproperty (self) on <self:MVirtualType> */
var3 = self->attrs[COLOR_nitc__model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1423);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__MProperty___nitc__model_base__MEntity__c_name(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MVirtualType$init for (self: MVirtualType) */
void nitc___nitc__MVirtualType___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MVirtualType___core__kernel__Object__init]))(self); /* init on <self:MVirtualType>*/
}
RET_LABEL:;
}
/* method model$MParameterType$mclass for (self: MParameterType): MClass */
val* nitc___nitc__MParameterType___mclass(val* self) {
val* var /* : MClass */;
val* var1 /* : MClass */;
var1 = self->attrs[COLOR_nitc__model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1559);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MParameterType$mclass= for (self: MParameterType, MClass) */
void nitc___nitc__MParameterType___mclass_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MParameterType___mclass].val = p0; /* _mclass on <self:MParameterType> */
RET_LABEL:;
}
/* method model$MParameterType$model for (self: MParameterType): Model */
val* nitc___nitc__MParameterType___nitc__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : Model */;
val* var9 /* : Model */;
{
{ /* Inline model$MParameterType$mclass (self) on <self:MParameterType> */
var3 = self->attrs[COLOR_nitc__model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1559);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MClass$intro_mmodule (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_nitc__model__MClass___intro_mmodule].val; /* _intro_mmodule on <var1:MClass> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 390);
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
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MParameterType$location for (self: MParameterType): Location */
val* nitc___nitc__MParameterType___nitc__model_base__MEntity__location(val* self) {
val* var /* : Location */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : Location */;
val* var6 /* : Location */;
{
{ /* Inline model$MParameterType$mclass (self) on <self:MParameterType> */
var3 = self->attrs[COLOR_nitc__model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1559);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$MClass$location (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_nitc__model__MClass___location].val; /* _location on <var1:MClass> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 400);
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
/* method model$MParameterType$rank for (self: MParameterType): Int */
long nitc___nitc__MParameterType___rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__model__MParameterType___rank].l; /* _rank on <self:MParameterType> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MParameterType$rank= for (self: MParameterType, Int) */
void nitc___nitc__MParameterType___rank_61d(val* self, long p0) {
self->attrs[COLOR_nitc__model__MParameterType___rank].l = p0; /* _rank on <self:MParameterType> */
RET_LABEL:;
}
/* method model$MParameterType$name for (self: MParameterType): String */
val* nitc___nitc__MParameterType___nitc__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MParameterType___name].val; /* _name on <self:MParameterType> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1570);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MParameterType$name= for (self: MParameterType, String) */
void nitc___nitc__MParameterType___name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MParameterType___name].val = p0; /* _name on <self:MParameterType> */
RET_LABEL:;
}
/* method model$MParameterType$to_s for (self: MParameterType): String */
val* nitc___nitc__MParameterType___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline model$MParameterType$name (self) on <self:MParameterType> */
var3 = self->attrs[COLOR_nitc__model__MParameterType___name].val; /* _name on <self:MParameterType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1570);
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
/* method model$MParameterType$full_name for (self: MParameterType): String */
val* nitc___nitc__MParameterType___nitc__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
val* var14 /* : MClass */;
val* var16 /* : MClass */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MParameterType___full_name].val != NULL; /* _full_name on <self:MParameterType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MParameterType___full_name].val; /* _full_name on <self:MParameterType> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1574);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "::";
var10 = (val*)(2l<<2|1);
var11 = (val*)(2l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[1]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MParameterType$mclass (self) on <self:MParameterType> */
var16 = self->attrs[COLOR_nitc__model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1559);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = nitc___nitc__MClass___nitc__model_base__MEntity__full_name(var14);
}
((struct instance_core__NativeArray*)var5)->values[0]=var17;
{
{ /* Inline model$MParameterType$name (self) on <self:MParameterType> */
var20 = self->attrs[COLOR_nitc__model__MParameterType___name].val; /* _name on <self:MParameterType> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1570);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
((struct instance_core__NativeArray*)var5)->values[2]=var18;
{
var21 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var21;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__model__MParameterType___full_name].val = var3; /* _full_name on <self:MParameterType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MParameterType$c_name for (self: MParameterType): String */
val* nitc___nitc__MParameterType___nitc__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : MClass */;
val* var7 /* : MClass */;
val* var8 /* : String */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Bool */;
val* var15 /* : nullable Bool */;
val* var16 /* : Text */;
val* var18 /* : NativeArray[String] */;
static val* varonce17;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable Bool */;
val* var27 /* : String */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var31 /* : String */;
val* var32 /* : Text */;
var1 = self->attrs[COLOR_nitc__model__MParameterType___c_name].val != NULL; /* _c_name on <self:MParameterType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MParameterType___c_name].val; /* _c_name on <self:MParameterType> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1576);
fatal_exit(1);
}
} else {
{
{
{ /* Inline model$MParameterType$mclass (self) on <self:MParameterType> */
var7 = self->attrs[COLOR_nitc__model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1559);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__MClass___nitc__model_base__MEntity__c_name(var5);
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "__";
var12 = (val*)(2l<<2|1);
var13 = (val*)(2l<<2|1);
var14 = (val*)((long)(0)<<2|3);
var15 = (val*)((long)(0)<<2|3);
var11 = core__flat___CString___to_s_unsafe(var10, var12, var13, var14, var15);
var9 = var11;
varonce = var9;
}
{
var16 = ((val*(*)(val* self, val* p0))(var8->class->vft[COLOR_core__abstract_text__Text___43d]))(var8, var9); /* + on <var8:String>*/
}
if (unlikely(varonce17==NULL)) {
var18 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "#";
var23 = (val*)(1l<<2|1);
var24 = (val*)(1l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var18)->values[0]=var20;
} else {
var18 = varonce17;
varonce17 = NULL;
}
{
{ /* Inline model$MParameterType$name (self) on <self:MParameterType> */
var29 = self->attrs[COLOR_nitc__model__MParameterType___name].val; /* _name on <self:MParameterType> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1570);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
((struct instance_core__NativeArray*)var18)->values[1]=var27;
{
var30 = ((val*(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce17 = var18;
{
var31 = core___core__Text___to_cmangle(var30);
}
{
var32 = ((val*(*)(val* self, val* p0))(var16->class->vft[COLOR_core__abstract_text__Text___43d]))(var16, var31); /* + on <var16:Text(String)>*/
}
var3 = var32;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__model__MParameterType___c_name].val = var3; /* _c_name on <self:MParameterType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MParameterType$lookup_bound for (self: MParameterType, MModule, MType): MType */
val* nitc___nitc__MParameterType___MType__lookup_bound(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : MClass */;
val* var7 /* : MClass */;
val* var_goalclass /* var goalclass: MClass */;
val* var8 /* : MClass */;
val* var10 /* : MClass */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : Array[MType] */;
long var17 /* : Int */;
long var19 /* : Int */;
val* var20 /* : nullable Object */;
val* var21 /* : Set[MClassType] */;
val* var_supertypes /* var supertypes: Set[MClassType] */;
val* var_ /* var : Set[MClassType] */;
val* var22 /* : Iterator[nullable Object] */;
val* var_23 /* var : Iterator[MClassType] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var26 /* : MClass */;
val* var28 /* : MClass */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : Array[MType] */;
long var35 /* : Int */;
long var37 /* : Int */;
val* var38 /* : nullable Object */;
val* var_res /* var res: MType */;
val* var39 /* : MErrorType */;
val* var40 /* : Model */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((short int(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_resolved_receiver); /* need_anchor on <var_resolved_receiver:MType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1580);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nitc__model__MType__undecorate]))(var_resolved_receiver); /* undecorate on <var_resolved_receiver:MType>*/
}
var_resolved_receiver = var3;
/* <var_resolved_receiver:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_resolved_receiver->type->table_size) {
var4 = 0;
} else {
var4 = var_resolved_receiver->type->type_table[cltype] == idtype;
}
if (unlikely(!var4)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1582);
fatal_exit(1);
}
{
{ /* Inline model$MParameterType$mclass (self) on <self:MParameterType> */
var7 = self->attrs[COLOR_nitc__model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1559);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_goalclass = var5;
{
{ /* Inline model$MClassType$mclass (var_resolved_receiver) on <var_resolved_receiver:MType(MClassType)> */
var10 = var_resolved_receiver->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_resolved_receiver:MType(MClassType)> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var8,var_goalclass) on <var8:MClass> */
var_other = var_goalclass;
{
{ /* Inline kernel$Object$is_same_instance (var8,var_other) on <var8:MClass> */
var15 = var8 == var_other;
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
{
var16 = ((val*(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nitc__model__MClassType__arguments]))(var_resolved_receiver); /* arguments on <var_resolved_receiver:MType(MClassType)>*/
}
{
{ /* Inline model$MParameterType$rank (self) on <self:MParameterType> */
var19 = self->attrs[COLOR_nitc__model__MParameterType___rank].l; /* _rank on <self:MParameterType> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var16, var17);
}
var = var20;
goto RET_LABEL;
} else {
}
{
var21 = nitc___nitc__MClassType___MType__collect_mtypes(var_resolved_receiver, var_mmodule);
}
var_supertypes = var21;
var_ = var_supertypes;
{
var22 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Set[MClassType]>*/
}
var_23 = var22;
for(;;) {
{
var24 = ((short int(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_23); /* is_ok on <var_23:Iterator[MClassType]>*/
}
if (var24){
} else {
goto BREAK_label;
}
{
var25 = ((val*(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_23); /* item on <var_23:Iterator[MClassType]>*/
}
var_t = var25;
{
{ /* Inline model$MClassType$mclass (var_t) on <var_t:MClassType> */
var28 = var_t->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_t:MClassType> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var26,var_goalclass) on <var26:MClass> */
var_other = var_goalclass;
{
{ /* Inline kernel$Object$is_same_instance (var26,var_other) on <var26:MClass> */
var33 = var26 == var_other;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
{
var34 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitc__model__MClassType__arguments]))(var_t); /* arguments on <var_t:MClassType>*/
}
{
{ /* Inline model$MParameterType$rank (self) on <self:MParameterType> */
var37 = self->attrs[COLOR_nitc__model__MParameterType___rank].l; /* _rank on <self:MParameterType> */
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var34, var35);
}
var_res = var38;
var = var_res;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_23); /* next on <var_23:Iterator[MClassType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_23); /* finish on <var_23:Iterator[MClassType]>*/
}
var39 = NEW_nitc__MErrorType(&type_nitc__MErrorType);
{
var40 = nitc___nitc__MParameterType___nitc__model_base__MEntity__model(self);
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nitc__model__MErrorType__model_61d]))(var39, var40); /* model= on <var39:MErrorType>*/
}
{
((void(*)(val* self))(var39->class->vft[COLOR_core__kernel__Object__init]))(var39); /* init on <var39:MErrorType>*/
}
var = var39;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MParameterType$lookup_fixed for (self: MParameterType, MModule, MType): MType */
val* nitc___nitc__MParameterType___MType__lookup_fixed(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
int cltype;
int idtype;
val* var5 /* : MClass */;
val* var7 /* : MClass */;
val* var8 /* : MClassType */;
val* var10 /* : MClassType */;
val* var11 /* : MType */;
val* var_res /* var res: MType */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((short int(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_resolved_receiver); /* need_anchor on <var_resolved_receiver:MType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1609);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nitc__model__MType__undecorate]))(var_resolved_receiver); /* undecorate on <var_resolved_receiver:MType>*/
}
var_resolved_receiver = var3;
/* <var_resolved_receiver:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_resolved_receiver->type->table_size) {
var4 = 0;
} else {
var4 = var_resolved_receiver->type->type_table[cltype] == idtype;
}
if (unlikely(!var4)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1611);
fatal_exit(1);
}
{
{ /* Inline model$MClassType$mclass (var_resolved_receiver) on <var_resolved_receiver:MType(MClassType)> */
var7 = var_resolved_receiver->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_resolved_receiver:MType(MClassType)> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model$MClass$mclass_type (var5) on <var5:MClass> */
var10 = var5->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var5:MClass> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc___nitc__MParameterType___MType__resolve_for(self, var8, var_resolved_receiver, var_mmodule, 0);
}
var_res = var11;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MParameterType$resolve_for for (self: MParameterType, MType, nullable MClassType, MModule, Bool): MType */
val* nitc___nitc__MParameterType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : MClass */;
val* var6 /* : MClass */;
val* var7 /* : MClass */;
val* var9 /* : MClass */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : Array[MType] */;
val* var17 /* : Array[MType] */;
long var18 /* : Int */;
long var20 /* : Int */;
val* var21 /* : nullable Object */;
val* var_res /* var res: MType */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var_other26 /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var_29 /* var : Bool */;
short int var30 /* : Bool */;
val* var31 /* : MType */;
val* var_r2 /* var r2: MType */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
short int var_36 /* var : Bool */;
val* var37 /* : MClass */;
val* var39 /* : MClass */;
val* var40 /* : MClassKind */;
val* var42 /* : MClassKind */;
val* var43 /* : Sys */;
val* var44 /* : MClassKind */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
val* var56 /* : MClass */;
val* var58 /* : MClass */;
val* var59 /* : MClassType */;
val* var61 /* : MClassType */;
val* var62 /* : MType */;
val* var_resolved_receiver /* var resolved_receiver: nullable Object */;
short int var63 /* : Bool */;
int cltype64;
int idtype65;
val* var66 /* : MType */;
val* var68 /* : MType */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
val* var77 /* : MClass */;
val* var79 /* : MClass */;
val* var80 /* : MClass */;
val* var82 /* : MClass */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
val* var88 /* : Array[MType] */;
long var89 /* : Int */;
long var91 /* : Int */;
val* var92 /* : nullable Object */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
val* var96 /* : MType */;
val* var98 /* : MType */;
short int var99 /* : Bool */;
int cltype100;
int idtype101;
val* var102 /* : MClass */;
val* var104 /* : MClass */;
val* var105 /* : MClass */;
val* var107 /* : MClass */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
short int var112 /* : Bool */;
val* var113 /* : Array[MType] */;
long var114 /* : Int */;
long var116 /* : Int */;
val* var117 /* : nullable Object */;
val* var_res118 /* var res: MType */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
val* var125 /* : MType */;
val* var126 /* : MType */;
val* var_verbatim_bound /* var verbatim_bound: MType */;
val* var127 /* : MType */;
val* var_res128 /* var res: MType */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
{
var1 = nitc___nitc__MParameterType___MType__can_resolve_for(self, var_mtype, var_anchor, var_mmodule);
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1618);
fatal_exit(1);
}
/* <var_mtype:MType> isa MGenericType */
cltype = type_nitc__MGenericType.color;
idtype = type_nitc__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
var_ = var3;
if (var3){
{
{ /* Inline model$MClassType$mclass (var_mtype) on <var_mtype:MType(MGenericType)> */
var6 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MGenericType)> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model$MParameterType$mclass (self) on <self:MParameterType> */
var9 = self->attrs[COLOR_nitc__model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1559);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var4,var7) on <var4:MClass> */
var_other = var7;
{
{ /* Inline kernel$Object$is_same_instance (var4,var_other) on <var4:MClass> */
var14 = var4 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var2 = var10;
} else {
var2 = var_;
}
if (var2){
{
{ /* Inline model$MGenericType$arguments (var_mtype) on <var_mtype:MType(MGenericType)> */
var17 = var_mtype->attrs[COLOR_nitc__model__MGenericType___arguments].val; /* _arguments on <var_mtype:MType(MGenericType)> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1305);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model$MParameterType$rank (self) on <self:MParameterType> */
var20 = self->attrs[COLOR_nitc__model__MParameterType___rank].l; /* _rank on <self:MParameterType> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var15, var18);
}
var_res = var21;
if (var_anchor == NULL) {
var23 = 0; /* is null */
} else {
var23 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other26 = ((val*)NULL);
{
var27 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_anchor, var_other26); /* == on <var_anchor:nullable MClassType(MClassType)>*/
}
var28 = !var27;
var24 = var28;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
var_29 = var23;
if (var23){
{
var30 = ((short int(*)(val* self))(var_res->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_res); /* need_anchor on <var_res:MType>*/
}
var22 = var30;
} else {
var22 = var_29;
}
if (var22){
{
var31 = ((val*(*)(val* self, val* p0, val* p1))(var_res->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_res, var_mmodule, var_anchor); /* anchor_to on <var_res:MType>*/
}
var_r2 = var31;
/* <var_r2:MType> isa MClassType */
cltype34 = type_nitc__MClassType.color;
idtype35 = type_nitc__MClassType.id;
if(cltype34 >= var_r2->type->table_size) {
var33 = 0;
} else {
var33 = var_r2->type->type_table[cltype34] == idtype35;
}
var_36 = var33;
if (var33){
{
{ /* Inline model$MClassType$mclass (var_r2) on <var_r2:MType(MClassType)> */
var39 = var_r2->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_r2:MType(MClassType)> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model$MClass$kind (var37) on <var37:MClass> */
var42 = var37->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var37:MClass> */
if (unlikely(var42 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
var43 = glob_sys;
{
var44 = nitc__model___core__Sys___enum_kind(var43);
}
{
{ /* Inline kernel$Object$== (var40,var44) on <var40:MClassKind> */
var_other = var44;
{
{ /* Inline kernel$Object$is_same_instance (var40,var_other) on <var40:MClassKind> */
var49 = var40 == var_other;
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var32 = var45;
} else {
var32 = var_36;
}
if (var32){
var = var_r2;
goto RET_LABEL;
} else {
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
{
var50 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
if (var50){
if (var_anchor == NULL) {
var51 = 0; /* is null */
} else {
var51 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other26 = ((val*)NULL);
{
var54 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_anchor, var_other26); /* == on <var_anchor:nullable MClassType(MClassType)>*/
}
var55 = !var54;
var52 = var55;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var51 = var52;
}
if (unlikely(!var51)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1637);
fatal_exit(1);
}
{
{ /* Inline model$MClassType$mclass (var_anchor) on <var_anchor:nullable MClassType(MClassType)> */
var58 = var_anchor->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_anchor:nullable MClassType(MClassType)> */
if (unlikely(var58 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline model$MClass$mclass_type (var56) on <var56:MClass> */
var61 = var56->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var56:MClass> */
if (unlikely(var61 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_mtype, var59, var_anchor, var_mmodule, 1); /* resolve_for on <var_mtype:MType>*/
}
var_resolved_receiver = var62;
} else {
var_resolved_receiver = var_mtype;
}
/* <var_resolved_receiver:nullable Object(MType)> isa MNullableType */
cltype64 = type_nitc__MNullableType.color;
idtype65 = type_nitc__MNullableType.id;
if(cltype64 >= var_resolved_receiver->type->table_size) {
var63 = 0;
} else {
var63 = var_resolved_receiver->type->type_table[cltype64] == idtype65;
}
if (var63){
{
{ /* Inline model$MProxyType$mtype (var_resolved_receiver) on <var_resolved_receiver:nullable Object(MNullableType)> */
var68 = var_resolved_receiver->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_resolved_receiver:nullable Object(MNullableType)> */
if (unlikely(var68 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
var_resolved_receiver = var66;
} else {
}
/* <var_resolved_receiver:nullable Object(MType)> isa MParameterType */
cltype70 = type_nitc__MParameterType.color;
idtype71 = type_nitc__MParameterType.id;
if(cltype70 >= var_resolved_receiver->type->table_size) {
var69 = 0;
} else {
var69 = var_resolved_receiver->type->type_table[cltype70] == idtype71;
}
if (var69){
if (var_anchor == NULL) {
var72 = 0; /* is null */
} else {
var72 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other26 = ((val*)NULL);
{
var75 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_anchor, var_other26); /* == on <var_anchor:nullable MClassType(MClassType)>*/
}
var76 = !var75;
var73 = var76;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
var72 = var73;
}
if (unlikely(!var72)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1644);
fatal_exit(1);
}
{
{ /* Inline model$MParameterType$mclass (var_resolved_receiver) on <var_resolved_receiver:nullable Object(MParameterType)> */
var79 = var_resolved_receiver->attrs[COLOR_nitc__model__MParameterType___mclass].val; /* _mclass on <var_resolved_receiver:nullable Object(MParameterType)> */
if (unlikely(var79 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1559);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline model$MClassType$mclass (var_anchor) on <var_anchor:nullable MClassType(MClassType)> */
var82 = var_anchor->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_anchor:nullable MClassType(MClassType)> */
if (unlikely(var82 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var77,var80) on <var77:MClass> */
var_other = var80;
{
{ /* Inline kernel$Object$is_same_instance (var77,var_other) on <var77:MClass> */
var87 = var77 == var_other;
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
var83 = var85;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
if (unlikely(!var83)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1645);
fatal_exit(1);
}
{
var88 = ((val*(*)(val* self))(var_anchor->class->vft[COLOR_nitc__model__MClassType__arguments]))(var_anchor); /* arguments on <var_anchor:nullable MClassType(MClassType)>*/
}
{
{ /* Inline model$MParameterType$rank (var_resolved_receiver) on <var_resolved_receiver:nullable Object(MParameterType)> */
var91 = var_resolved_receiver->attrs[COLOR_nitc__model__MParameterType___rank].l; /* _rank on <var_resolved_receiver:nullable Object(MParameterType)> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
var92 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var88, var89);
}
var_resolved_receiver = var92;
/* <var_resolved_receiver:nullable Object(MType)> isa MNullableType */
cltype94 = type_nitc__MNullableType.color;
idtype95 = type_nitc__MNullableType.id;
if(cltype94 >= var_resolved_receiver->type->table_size) {
var93 = 0;
} else {
var93 = var_resolved_receiver->type->type_table[cltype94] == idtype95;
}
if (var93){
{
{ /* Inline model$MProxyType$mtype (var_resolved_receiver) on <var_resolved_receiver:nullable Object(MNullableType)> */
var98 = var_resolved_receiver->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_resolved_receiver:nullable Object(MNullableType)> */
if (unlikely(var98 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
var_resolved_receiver = var96;
} else {
}
} else {
}
/* <var_resolved_receiver:nullable Object(MType)> isa MClassType */
cltype100 = type_nitc__MClassType.color;
idtype101 = type_nitc__MClassType.id;
if(cltype100 >= var_resolved_receiver->type->table_size) {
var99 = 0;
} else {
var99 = var_resolved_receiver->type->type_table[cltype100] == idtype101;
}
if (unlikely(!var99)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1649);
fatal_exit(1);
}
{
{ /* Inline model$MClassType$mclass (var_resolved_receiver) on <var_resolved_receiver:nullable Object(MClassType)> */
var104 = var_resolved_receiver->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_resolved_receiver:nullable Object(MClassType)> */
if (unlikely(var104 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
{ /* Inline model$MParameterType$mclass (self) on <self:MParameterType> */
var107 = self->attrs[COLOR_nitc__model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var107 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1559);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var102,var105) on <var102:MClass> */
var_other = var105;
{
{ /* Inline kernel$Object$is_same_instance (var102,var_other) on <var102:MClass> */
var112 = var102 == var_other;
var110 = var112;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
var108 = var110;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
if (var108){
{
var113 = ((val*(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nitc__model__MClassType__arguments]))(var_resolved_receiver); /* arguments on <var_resolved_receiver:nullable Object(MClassType)>*/
}
{
{ /* Inline model$MParameterType$rank (self) on <self:MParameterType> */
var116 = self->attrs[COLOR_nitc__model__MParameterType___rank].l; /* _rank on <self:MParameterType> */
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
var117 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var113, var114);
}
var_res118 = var117;
var = var_res118;
goto RET_LABEL;
} else {
}
{
var119 = ((short int(*)(val* self))(var_resolved_receiver->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_resolved_receiver); /* need_anchor on <var_resolved_receiver:nullable Object(MClassType)>*/
}
if (var119){
if (var_anchor == NULL) {
var120 = 0; /* is null */
} else {
var120 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other26 = ((val*)NULL);
{
var123 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_anchor, var_other26); /* == on <var_anchor:nullable MClassType(MClassType)>*/
}
var124 = !var123;
var121 = var124;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
var120 = var121;
}
if (unlikely(!var120)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1660);
fatal_exit(1);
}
{
var125 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_resolved_receiver->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_resolved_receiver, var_anchor, ((val*)NULL), var_mmodule, 0); /* resolve_for on <var_resolved_receiver:nullable Object(MClassType)>*/
}
var_resolved_receiver = var125;
} else {
}
{
var126 = nitc___nitc__MParameterType___MType__lookup_bound(self, var_mmodule, var_resolved_receiver);
}
var_verbatim_bound = var126;
{
var127 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_verbatim_bound->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_verbatim_bound, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual); /* resolve_for on <var_verbatim_bound:MType>*/
}
var_res128 = var127;
var = var_res128;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MParameterType$can_resolve_for for (self: MParameterType, MType, nullable MClassType, MModule): Bool */
short int nitc___nitc__MParameterType___MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : MType */;
val* var8 /* : Set[MClassDef] */;
val* var9 /* : MClass */;
val* var11 /* : MClass */;
val* var12 /* : MClassDef */;
val* var14 /* : MClassDef */;
short int var15 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
{
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
if (var1){
if (var_anchor == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_anchor, var_other); /* == on <var_anchor:nullable MClassType(MClassType)>*/
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1676);
fatal_exit(1);
}
{
var7 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_mtype, var_mmodule, var_anchor); /* anchor_to on <var_mtype:MType>*/
}
var_mtype = var7;
} else {
}
{
var8 = ((val*(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_nitc__model__MType__collect_mclassdefs]))(var_mtype, var_mmodule); /* collect_mclassdefs on <var_mtype:MType>*/
}
{
{ /* Inline model$MParameterType$mclass (self) on <self:MParameterType> */
var11 = self->attrs[COLOR_nitc__model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1559);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model$MClass$intro (var9) on <var9:MClass> */
var14 = var9->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var9:MClass> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = ((short int(*)(val* self, val* p0))((((long)var8&3)?class_info[((long)var8&3)]:var8->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var8, var12); /* has on <var8:Set[MClassDef]>*/
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MParameterType$init for (self: MParameterType) */
void nitc___nitc__MParameterType___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MParameterType___core__kernel__Object__init]))(self); /* init on <self:MParameterType>*/
}
RET_LABEL:;
}
/* method model$MProxyType$mtype for (self: MProxyType): MType */
val* nitc___nitc__MProxyType___mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MProxyType> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MProxyType$mtype= for (self: MProxyType, MType) */
void nitc___nitc__MProxyType___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MProxyType___mtype].val = p0; /* _mtype on <self:MProxyType> */
RET_LABEL:;
}
/* method model$MProxyType$location for (self: MProxyType): Location */
val* nitc___nitc__MProxyType___nitc__model_base__MEntity__location(val* self) {
val* var /* : Location */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var4 /* : Location */;
{
{ /* Inline model$MProxyType$mtype (self) on <self:MProxyType> */
var3 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MProxyType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_nitc__model_base__MEntity__location]))(var1); /* location on <var1:MType>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MProxyType$model for (self: MProxyType): Model */
val* nitc___nitc__MProxyType___nitc__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var4 /* : Model */;
{
{ /* Inline model$MProxyType$mtype (self) on <self:MProxyType> */
var3 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MProxyType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_nitc__model_base__MEntity__model]))(var1); /* model on <var1:MType>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MProxyType$need_anchor for (self: MProxyType): Bool */
short int nitc___nitc__MProxyType___MType__need_anchor(val* self) {
short int var /* : Bool */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
{
{ /* Inline model$MProxyType$mtype (self) on <self:MProxyType> */
var3 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MProxyType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self))(var1->class->vft[COLOR_nitc__model__MType__need_anchor]))(var1); /* need_anchor on <var1:MType>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MProxyType$as_nullable for (self: MProxyType): MType */
val* nitc___nitc__MProxyType___MType__as_nullable(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var4 /* : MType */;
{
{ /* Inline model$MProxyType$mtype (self) on <self:MProxyType> */
var3 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MProxyType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_nitc__model__MType__as_nullable]))(var1); /* as_nullable on <var1:MType>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MProxyType$as_notnull for (self: MProxyType): MType */
val* nitc___nitc__MProxyType___MType__as_notnull(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var4 /* : MType */;
{
{ /* Inline model$MProxyType$mtype (self) on <self:MProxyType> */
var3 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MProxyType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_nitc__model__MType__as_notnull]))(var1); /* as_notnull on <var1:MType>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MProxyType$undecorate for (self: MProxyType): MType */
val* nitc___nitc__MProxyType___MType__undecorate(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var4 /* : MType */;
{
{ /* Inline model$MProxyType$mtype (self) on <self:MProxyType> */
var3 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MProxyType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_nitc__model__MType__undecorate]))(var1); /* undecorate on <var1:MType>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MProxyType$resolve_for for (self: MProxyType, MType, nullable MClassType, MModule, Bool): MType */
val* nitc___nitc__MProxyType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var4 /* : MType */;
val* var_res /* var res: MType */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
{
{ /* Inline model$MProxyType$mtype (self) on <self:MProxyType> */
var3 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MProxyType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var1->class->vft[COLOR_nitc__model__MType__resolve_for]))(var1, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual); /* resolve_for on <var1:MType>*/
}
var_res = var4;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MProxyType$can_resolve_for for (self: MProxyType, MType, nullable MClassType, MModule): Bool */
short int nitc___nitc__MProxyType___MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
{
{ /* Inline model$MProxyType$mtype (self) on <self:MProxyType> */
var3 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MProxyType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var1->class->vft[COLOR_nitc__model__MType__can_resolve_for]))(var1, var_mtype, var_anchor, var_mmodule); /* can_resolve_for on <var1:MType>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MProxyType$is_ok for (self: MProxyType): Bool */
short int nitc___nitc__MProxyType___MType__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
{
{ /* Inline model$MProxyType$mtype (self) on <self:MProxyType> */
var3 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MProxyType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self))(var1->class->vft[COLOR_nitc__model__MType__is_ok]))(var1); /* is_ok on <var1:MType>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MProxyType$is_legal_in for (self: MProxyType, MModule, nullable MClassType): Bool */
short int nitc___nitc__MProxyType___MType__is_legal_in(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_mmodule /* var mmodule: MModule */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
var_mmodule = p0;
var_anchor = p1;
{
{ /* Inline model$MProxyType$mtype (self) on <self:MProxyType> */
var3 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MProxyType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_nitc__model__MType__is_legal_in]))(var1, var_mmodule, var_anchor); /* is_legal_in on <var1:MType>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MProxyType$lookup_fixed for (self: MProxyType, MModule, MType): MType */
val* nitc___nitc__MProxyType___MType__lookup_fixed(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var4 /* : MType */;
val* var_t /* var t: MType */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
{ /* Inline model$MProxyType$mtype (self) on <self:MProxyType> */
var3 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MProxyType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_nitc__model__MType__lookup_fixed]))(var1, var_mmodule, var_resolved_receiver); /* lookup_fixed on <var1:MType>*/
}
var_t = var4;
var = var_t;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MProxyType$length for (self: MProxyType): Int */
long nitc___nitc__MProxyType___MType__length(val* self) {
long var /* : Int */;
val* var1 /* : MType */;
val* var3 /* : MType */;
long var4 /* : Int */;
{
{ /* Inline model$MProxyType$mtype (self) on <self:MProxyType> */
var3 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MProxyType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((long(*)(val* self))(var1->class->vft[COLOR_nitc__model__MType__length]))(var1); /* length on <var1:MType>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MProxyType$collect_mclassdefs for (self: MProxyType, MModule): Set[MClassDef] */
val* nitc___nitc__MProxyType___MType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var5 /* : MType */;
val* var6 /* : Set[MClassDef] */;
var_mmodule = p0;
{
var1 = nitc___nitc__MProxyType___MType__need_anchor(self);
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1726);
fatal_exit(1);
}
{
{ /* Inline model$MProxyType$mtype (self) on <self:MProxyType> */
var5 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MProxyType> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__model__MType__collect_mclassdefs]))(var3, var_mmodule); /* collect_mclassdefs on <var3:MType>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MProxyType$collect_mclasses for (self: MProxyType, MModule): Set[MClass] */
val* nitc___nitc__MProxyType___MType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var5 /* : MType */;
val* var6 /* : Set[MClass] */;
var_mmodule = p0;
{
var1 = nitc___nitc__MProxyType___MType__need_anchor(self);
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1732);
fatal_exit(1);
}
{
{ /* Inline model$MProxyType$mtype (self) on <self:MProxyType> */
var5 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MProxyType> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__model__MType__collect_mclasses]))(var3, var_mmodule); /* collect_mclasses on <var3:MType>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MProxyType$collect_mtypes for (self: MProxyType, MModule): Set[MClassType] */
val* nitc___nitc__MProxyType___MType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var5 /* : MType */;
val* var6 /* : Set[MClassType] */;
var_mmodule = p0;
{
var1 = nitc___nitc__MProxyType___MType__need_anchor(self);
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1738);
fatal_exit(1);
}
{
{ /* Inline model$MProxyType$mtype (self) on <self:MProxyType> */
var5 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MProxyType> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__model__MType__collect_mtypes]))(var3, var_mmodule); /* collect_mtypes on <var3:MType>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MProxyType$init for (self: MProxyType) */
void nitc___nitc__MProxyType___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MProxyType___core__kernel__Object__init]))(self); /* init on <self:MProxyType>*/
}
RET_LABEL:;
}
/* method model$MNullableType$init for (self: MNullableType) */
void nitc___nitc__MNullableType___core__kernel__Object__init(val* self) {
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
val* var9 /* : MType */;
val* var11 /* : MType */;
val* var12 /* : String */;
val* var13 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MNullableType___core__kernel__Object__init]))(self); /* init on <self:MNullableType>*/
}
if (unlikely(varonce==NULL)) {
var = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "nullable ";
var5 = (val*)(9l<<2|1);
var6 = (val*)(9l<<2|1);
var7 = (val*)((long)(0)<<2|3);
var8 = (val*)((long)(0)<<2|3);
var4 = core__flat___CString___to_s_unsafe(var3, var5, var6, var7, var8);
var2 = var4;
varonce1 = var2;
}
((struct instance_core__NativeArray*)var)->values[0]=var2;
} else {
var = varonce;
varonce = NULL;
}
{
{ /* Inline model$MProxyType$mtype (self) on <self:MNullableType> */
var11 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__Object__to_s]))(var9); /* to_s on <var9:MType>*/
}
((struct instance_core__NativeArray*)var)->values[1]=var12;
{
var13 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
{
{ /* Inline model$MNullableType$to_s= (self,var13) on <self:MNullableType> */
self->attrs[COLOR_nitc__model__MNullableType___to_s].val = var13; /* _to_s on <self:MNullableType> */
RET_LABEL14:(void)0;
}
}
RET_LABEL:;
}
/* method model$MNullableType$to_s for (self: MNullableType): String */
val* nitc___nitc__MNullableType___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MNullableType___to_s].val; /* _to_s on <self:MNullableType> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1752);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MNullableType$to_s= for (self: MNullableType, String) */
void nitc___nitc__MNullableType___to_s_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MNullableType___to_s].val = p0; /* _to_s on <self:MNullableType> */
RET_LABEL:;
}
/* method model$MNullableType$full_name for (self: MNullableType): String */
val* nitc___nitc__MNullableType___nitc__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
val* var14 /* : MType */;
val* var16 /* : MType */;
val* var17 /* : String */;
val* var18 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MNullableType___full_name].val != NULL; /* _full_name on <self:MNullableType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MNullableType___full_name].val; /* _full_name on <self:MNullableType> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1754);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "nullable ";
var10 = (val*)(9l<<2|1);
var11 = (val*)(9l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[0]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MProxyType$mtype (self) on <self:MNullableType> */
var16 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MNullableType> */
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
var17 = ((val*(*)(val* self))(var14->class->vft[COLOR_nitc__model_base__MEntity__full_name]))(var14); /* full_name on <var14:MType>*/
}
((struct instance_core__NativeArray*)var5)->values[1]=var17;
{
var18 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var18;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__model__MNullableType___full_name].val = var3; /* _full_name on <self:MNullableType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MNullableType$c_name for (self: MNullableType): String */
val* nitc___nitc__MNullableType___nitc__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
val* var14 /* : MType */;
val* var16 /* : MType */;
val* var17 /* : String */;
val* var18 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MNullableType___c_name].val != NULL; /* _c_name on <self:MNullableType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MNullableType___c_name].val; /* _c_name on <self:MNullableType> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1756);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "nullable__";
var10 = (val*)(10l<<2|1);
var11 = (val*)(10l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[0]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MProxyType$mtype (self) on <self:MNullableType> */
var16 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MNullableType> */
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
var17 = ((val*(*)(val* self))(var14->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var14); /* c_name on <var14:MType>*/
}
((struct instance_core__NativeArray*)var5)->values[1]=var17;
{
var18 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var18;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__model__MNullableType___c_name].val = var3; /* _c_name on <self:MNullableType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MNullableType$as_nullable for (self: MNullableType): MType */
val* nitc___nitc__MNullableType___MType__as_nullable(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MNullableType$resolve_for for (self: MNullableType, MType, nullable MClassType, MModule, Bool): MType */
val* nitc___nitc__MNullableType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
val* var1 /* : MType */;
val* var_res /* var res: MType */;
val* var2 /* : MType */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
{
var1 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(self->class->vft[COLOR_nitc___nitc__MNullableType___MType__resolve_for]))(self, p0, p1, p2, p3); /* resolve_for on <self:MNullableType>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(var_res->class->vft[COLOR_nitc__model__MType__as_nullable]))(var_res); /* as_nullable on <var_res:MType>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MNullableType$lookup_fixed for (self: MNullableType, MModule, MType): MType */
val* nitc___nitc__MNullableType___MType__lookup_fixed(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
val* var1 /* : MType */;
val* var_t /* var t: MType */;
val* var2 /* : MType */;
val* var4 /* : MType */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MType */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc___nitc__MNullableType___MType__lookup_fixed]))(self, p0, p1); /* lookup_fixed on <self:MNullableType>*/
}
var_t = var1;
{
{ /* Inline model$MProxyType$mtype (self) on <self:MNullableType> */
var4 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var_t,var2) on <var_t:MType> */
var_other = var2;
{
{ /* Inline kernel$Object$is_same_instance (var_t,var_other) on <var_t:MType> */
var9 = var_t == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = self;
goto RET_LABEL;
} else {
}
{
var10 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitc__model__MType__as_nullable]))(var_t); /* as_nullable on <var_t:MType>*/
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MNotNullType$to_s for (self: MNotNullType): String */
val* nitc___nitc__MNotNullType___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
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
val* var10 /* : MType */;
val* var12 /* : MType */;
val* var13 /* : String */;
val* var14 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "not null ";
var6 = (val*)(9l<<2|1);
var7 = (val*)(9l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MProxyType$mtype (self) on <self:MNotNullType> */
var12 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MNotNullType> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__Object__to_s]))(var10); /* to_s on <var10:MType>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MNotNullType$full_name for (self: MNotNullType): String */
val* nitc___nitc__MNotNullType___nitc__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
val* var14 /* : MType */;
val* var16 /* : MType */;
val* var17 /* : String */;
val* var18 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MNotNullType___full_name].val != NULL; /* _full_name on <self:MNotNullType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MNotNullType___full_name].val; /* _full_name on <self:MNotNullType> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1781);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "not null ";
var10 = (val*)(9l<<2|1);
var11 = (val*)(9l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[0]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MProxyType$mtype (self) on <self:MNotNullType> */
var16 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MNotNullType> */
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
var17 = ((val*(*)(val* self))(var14->class->vft[COLOR_nitc__model_base__MEntity__full_name]))(var14); /* full_name on <var14:MType>*/
}
((struct instance_core__NativeArray*)var5)->values[1]=var17;
{
var18 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var18;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__model__MNotNullType___full_name].val = var3; /* _full_name on <self:MNotNullType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MNotNullType$c_name for (self: MNotNullType): String */
val* nitc___nitc__MNotNullType___nitc__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
val* var14 /* : MType */;
val* var16 /* : MType */;
val* var17 /* : String */;
val* var18 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MNotNullType___c_name].val != NULL; /* _c_name on <self:MNotNullType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MNotNullType___c_name].val; /* _c_name on <self:MNotNullType> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1782);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "notnull__";
var10 = (val*)(9l<<2|1);
var11 = (val*)(9l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[0]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MProxyType$mtype (self) on <self:MNotNullType> */
var16 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MNotNullType> */
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
var17 = ((val*(*)(val* self))(var14->class->vft[COLOR_nitc__model_base__MEntity__c_name]))(var14); /* c_name on <var14:MType>*/
}
((struct instance_core__NativeArray*)var5)->values[1]=var17;
{
var18 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var18;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__model__MNotNullType___c_name].val = var3; /* _c_name on <self:MNotNullType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MNotNullType$as_notnull for (self: MNotNullType): MType */
val* nitc___nitc__MNotNullType___MType__as_notnull(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MNotNullType$resolve_for for (self: MNotNullType, MType, nullable MClassType, MModule, Bool): MType */
val* nitc___nitc__MNotNullType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
val* var1 /* : MType */;
val* var_res /* var res: MType */;
val* var2 /* : MType */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
{
var1 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(self->class->vft[COLOR_nitc___nitc__MNotNullType___MType__resolve_for]))(self, p0, p1, p2, p3); /* resolve_for on <self:MNotNullType>*/
}
var_res = var1;
{
var2 = ((val*(*)(val* self))(var_res->class->vft[COLOR_nitc__model__MType__as_notnull]))(var_res); /* as_notnull on <var_res:MType>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MNotNullType$lookup_fixed for (self: MNotNullType, MModule, MType): MType */
val* nitc___nitc__MNotNullType___MType__lookup_fixed(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mmodule /* var mmodule: MModule */;
val* var_resolved_receiver /* var resolved_receiver: MType */;
val* var1 /* : MType */;
val* var_t /* var t: MType */;
val* var2 /* : MType */;
val* var4 /* : MType */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MType */;
var_mmodule = p0;
var_resolved_receiver = p1;
{
var1 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc___nitc__MNotNullType___MType__lookup_fixed]))(self, p0, p1); /* lookup_fixed on <self:MNotNullType>*/
}
var_t = var1;
{
{ /* Inline model$MProxyType$mtype (self) on <self:MNotNullType> */
var4 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MNotNullType> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var_t,var2) on <var_t:MType> */
var_other = var2;
{
{ /* Inline kernel$Object$is_same_instance (var_t,var_other) on <var_t:MType> */
var9 = var_t == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = self;
goto RET_LABEL;
} else {
}
{
var10 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitc__model__MType__as_notnull]))(var_t); /* as_notnull on <var_t:MType>*/
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MNullType$model for (self: MNullType): Model */
val* nitc___nitc__MNullType___nitc__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_nitc__model__MNullType___model].val; /* _model on <self:MNullType> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1806);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MNullType$model= for (self: MNullType, Model) */
void nitc___nitc__MNullType___model_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MNullType___model].val = p0; /* _model on <self:MNullType> */
RET_LABEL:;
}
/* method model$MNullType$to_s for (self: MNullType): String */
val* nitc___nitc__MNullType___core__abstract_text__Object__to_s(val* self) {
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
var2 = "null";
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
/* method model$MNullType$full_name for (self: MNullType): String */
val* nitc___nitc__MNullType___nitc__model_base__MEntity__full_name(val* self) {
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
var2 = "null";
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
/* method model$MNullType$c_name for (self: MNullType): String */
val* nitc___nitc__MNullType___nitc__model_base__MEntity__c_name(val* self) {
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
var2 = "null";
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
/* method model$MNullType$as_nullable for (self: MNullType): MType */
val* nitc___nitc__MNullType___MType__as_nullable(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MNullType$as_notnull for (self: MNullType): MType */
val* nitc___nitc__MNullType___MType__as_notnull(val* self) {
val* var /* : MType */;
short int var1 /* : Bool */;
val* var2 /* : MType */;
val* var3 /* : MBottomType */;
val* var4 /* : Model */;
val* var6 /* : Model */;
var1 = self->attrs[COLOR_nitc__model__MNullType___as_notnull].val != NULL; /* _as_notnull on <self:MNullType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MNullType___as_notnull].val; /* _as_notnull on <self:MNullType> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _as_notnull");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1812);
fatal_exit(1);
}
} else {
var3 = NEW_nitc__MBottomType(&type_nitc__MBottomType);
{
{ /* Inline model$MNullType$model (self) on <self:MNullType> */
var6 = self->attrs[COLOR_nitc__model__MNullType___model].val; /* _model on <self:MNullType> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1806);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__model__MBottomType__model_61d]))(var3, var4); /* model= on <var3:MBottomType>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:MBottomType>*/
}
self->attrs[COLOR_nitc__model__MNullType___as_notnull].val = var3; /* _as_notnull on <self:MNullType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MNullType$need_anchor for (self: MNullType): Bool */
short int nitc___nitc__MNullType___MType__need_anchor(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MNullType$resolve_for for (self: MNullType, MType, nullable MClassType, MModule, Bool): MType */
val* nitc___nitc__MNullType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MNullType$can_resolve_for for (self: MNullType, MType, nullable MClassType, MModule): Bool */
short int nitc___nitc__MNullType___MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MNullType$collect_mclassdefs for (self: MNullType, MModule): Set[MClassDef] */
val* nitc___nitc__MNullType___MType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClassDef] */;
var_mmodule = p0;
var1 = NEW_core__HashSet(&type_core__HashSet__nitc__MClassDef);
{
core___core__HashSet___core__kernel__Object__init(var1); /* Direct call hash_collection$HashSet$init on <var1:HashSet[MClassDef]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MNullType$collect_mclasses for (self: MNullType, MModule): Set[MClass] */
val* nitc___nitc__MNullType___MType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClass] */;
var_mmodule = p0;
var1 = NEW_core__HashSet(&type_core__HashSet__nitc__MClass);
{
core___core__HashSet___core__kernel__Object__init(var1); /* Direct call hash_collection$HashSet$init on <var1:HashSet[MClass]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MNullType$collect_mtypes for (self: MNullType, MModule): Set[MClassType] */
val* nitc___nitc__MNullType___MType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClassType] */;
var_mmodule = p0;
var1 = NEW_core__HashSet(&type_core__HashSet__nitc__MClassType);
{
core___core__HashSet___core__kernel__Object__init(var1); /* Direct call hash_collection$HashSet$init on <var1:HashSet[MClassType]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MNullType$init for (self: MNullType) */
void nitc___nitc__MNullType___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MNullType___core__kernel__Object__init]))(self); /* init on <self:MNullType>*/
}
RET_LABEL:;
}
/* method model$MBottomType$model for (self: MBottomType): Model */
val* nitc___nitc__MBottomType___nitc__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_nitc__model__MBottomType___model].val; /* _model on <self:MBottomType> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1833);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MBottomType$model= for (self: MBottomType, Model) */
void nitc___nitc__MBottomType___model_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MBottomType___model].val = p0; /* _model on <self:MBottomType> */
RET_LABEL:;
}
/* method model$MBottomType$to_s for (self: MBottomType): String */
val* nitc___nitc__MBottomType___core__abstract_text__Object__to_s(val* self) {
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
var2 = "bottom";
var4 = (val*)(6l<<2|1);
var5 = (val*)(6l<<2|1);
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
/* method model$MBottomType$full_name for (self: MBottomType): String */
val* nitc___nitc__MBottomType___nitc__model_base__MEntity__full_name(val* self) {
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
var2 = "bottom";
var4 = (val*)(6l<<2|1);
var5 = (val*)(6l<<2|1);
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
/* method model$MBottomType$c_name for (self: MBottomType): String */
val* nitc___nitc__MBottomType___nitc__model_base__MEntity__c_name(val* self) {
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
var2 = "bottom";
var4 = (val*)(6l<<2|1);
var5 = (val*)(6l<<2|1);
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
/* method model$MBottomType$as_nullable for (self: MBottomType): MType */
val* nitc___nitc__MBottomType___MType__as_nullable(val* self) {
val* var /* : MType */;
val* var1 /* : Model */;
val* var3 /* : Model */;
val* var4 /* : MNullType */;
val* var6 /* : MNullType */;
{
{ /* Inline model$MBottomType$model (self) on <self:MBottomType> */
var3 = self->attrs[COLOR_nitc__model__MBottomType___model].val; /* _model on <self:MBottomType> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1833);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model$Model$null_type (var1) on <var1:Model> */
var6 = var1->attrs[COLOR_nitc__model__Model___null_type].val; /* _null_type on <var1:Model> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _null_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 103);
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
/* method model$MBottomType$as_notnull for (self: MBottomType): MType */
val* nitc___nitc__MBottomType___MType__as_notnull(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MBottomType$need_anchor for (self: MBottomType): Bool */
short int nitc___nitc__MBottomType___MType__need_anchor(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MBottomType$resolve_for for (self: MBottomType, MType, nullable MClassType, MModule, Bool): MType */
val* nitc___nitc__MBottomType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MBottomType$can_resolve_for for (self: MBottomType, MType, nullable MClassType, MModule): Bool */
short int nitc___nitc__MBottomType___MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MBottomType$collect_mclassdefs for (self: MBottomType, MModule): Set[MClassDef] */
val* nitc___nitc__MBottomType___MType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClassDef] */;
var_mmodule = p0;
var1 = NEW_core__HashSet(&type_core__HashSet__nitc__MClassDef);
{
core___core__HashSet___core__kernel__Object__init(var1); /* Direct call hash_collection$HashSet$init on <var1:HashSet[MClassDef]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MBottomType$collect_mclasses for (self: MBottomType, MModule): Set[MClass] */
val* nitc___nitc__MBottomType___MType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClass] */;
var_mmodule = p0;
var1 = NEW_core__HashSet(&type_core__HashSet__nitc__MClass);
{
core___core__HashSet___core__kernel__Object__init(var1); /* Direct call hash_collection$HashSet$init on <var1:HashSet[MClass]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MBottomType$collect_mtypes for (self: MBottomType, MModule): Set[MClassType] */
val* nitc___nitc__MBottomType___MType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClassType] */;
var_mmodule = p0;
var1 = NEW_core__HashSet(&type_core__HashSet__nitc__MClassType);
{
core___core__HashSet___core__kernel__Object__init(var1); /* Direct call hash_collection$HashSet$init on <var1:HashSet[MClassType]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MBottomType$init for (self: MBottomType) */
void nitc___nitc__MBottomType___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MBottomType___core__kernel__Object__init]))(self); /* init on <self:MBottomType>*/
}
RET_LABEL:;
}
/* method model$MErrorType$model for (self: MErrorType): Model */
val* nitc___nitc__MErrorType___nitc__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_nitc__model__MErrorType___model].val; /* _model on <self:MErrorType> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1859);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MErrorType$model= for (self: MErrorType, Model) */
void nitc___nitc__MErrorType___model_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MErrorType___model].val = p0; /* _model on <self:MErrorType> */
RET_LABEL:;
}
/* method model$MErrorType$to_s for (self: MErrorType): String */
val* nitc___nitc__MErrorType___core__abstract_text__Object__to_s(val* self) {
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
var2 = "error";
var4 = (val*)(5l<<2|1);
var5 = (val*)(5l<<2|1);
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
/* method model$MErrorType$full_name for (self: MErrorType): String */
val* nitc___nitc__MErrorType___nitc__model_base__MEntity__full_name(val* self) {
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
var2 = "error";
var4 = (val*)(5l<<2|1);
var5 = (val*)(5l<<2|1);
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
/* method model$MErrorType$c_name for (self: MErrorType): String */
val* nitc___nitc__MErrorType___nitc__model_base__MEntity__c_name(val* self) {
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
var2 = "error";
var4 = (val*)(5l<<2|1);
var5 = (val*)(5l<<2|1);
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
/* method model$MErrorType$need_anchor for (self: MErrorType): Bool */
short int nitc___nitc__MErrorType___MType__need_anchor(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MErrorType$resolve_for for (self: MErrorType, MType, nullable MClassType, MModule, Bool): MType */
val* nitc___nitc__MErrorType___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MErrorType$can_resolve_for for (self: MErrorType, MType, nullable MClassType, MModule): Bool */
short int nitc___nitc__MErrorType___MType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MErrorType$is_ok for (self: MErrorType): Bool */
short int nitc___nitc__MErrorType___MType__is_ok(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MErrorType$collect_mclassdefs for (self: MErrorType, MModule): Set[MClassDef] */
val* nitc___nitc__MErrorType___MType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClassDef] */;
var_mmodule = p0;
var1 = NEW_core__HashSet(&type_core__HashSet__nitc__MClassDef);
{
core___core__HashSet___core__kernel__Object__init(var1); /* Direct call hash_collection$HashSet$init on <var1:HashSet[MClassDef]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MErrorType$collect_mclasses for (self: MErrorType, MModule): Set[MClass] */
val* nitc___nitc__MErrorType___MType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClass] */;
var_mmodule = p0;
var1 = NEW_core__HashSet(&type_core__HashSet__nitc__MClass);
{
core___core__HashSet___core__kernel__Object__init(var1); /* Direct call hash_collection$HashSet$init on <var1:HashSet[MClass]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MErrorType$collect_mtypes for (self: MErrorType, MModule): Set[MClassType] */
val* nitc___nitc__MErrorType___MType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClassType] */;
var_mmodule = p0;
var1 = NEW_core__HashSet(&type_core__HashSet__nitc__MClassType);
{
core___core__HashSet___core__kernel__Object__init(var1); /* Direct call hash_collection$HashSet$init on <var1:HashSet[MClassType]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MErrorType$init for (self: MErrorType) */
void nitc___nitc__MErrorType___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MErrorType___core__kernel__Object__init]))(self); /* init on <self:MErrorType>*/
}
RET_LABEL:;
}
/* method model$MSignature$mparameters for (self: MSignature): Array[MParameter] */
val* nitc___nitc__MSignature___mparameters(val* self) {
val* var /* : Array[MParameter] */;
val* var1 /* : Array[MParameter] */;
var1 = self->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MSignature$mparameters= for (self: MSignature, Array[MParameter]) */
void nitc___nitc__MSignature___mparameters_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MSignature___mparameters].val = p0; /* _mparameters on <self:MSignature> */
RET_LABEL:;
}
/* method model$MSignature$mparameter_by_name for (self: MSignature, String): nullable MParameter */
val* nitc___nitc__MSignature___mparameter_by_name(val* self, val* p0) {
val* var /* : nullable MParameter */;
val* var_name /* var name: String */;
val* var1 /* : Array[MParameter] */;
val* var3 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var4 /* : IndexedIterator[nullable Object] */;
val* var_5 /* var : IndexedIterator[MParameter] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var8 /* : String */;
val* var10 /* : String */;
short int var11 /* : Bool */;
var_name = p0;
{
{ /* Inline model$MSignature$mparameters (self) on <self:MSignature> */
var3 = self->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
{
var4 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:IndexedIterator[MParameter]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:IndexedIterator[MParameter]>*/
}
var_p = var7;
{
{ /* Inline model$MParameter$name (var_p) on <var_p:MParameter> */
var10 = var_p->attrs[COLOR_nitc__model__MParameter___name].val; /* _name on <var_p:MParameter> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1993);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = ((short int(*)(val* self, val* p0))(var8->class->vft[COLOR_core__kernel__Object___61d_61d]))(var8, var_name); /* == on <var8:String>*/
}
if (var11){
var = var_p;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:IndexedIterator[MParameter]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:IndexedIterator[MParameter]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MSignature$return_mtype for (self: MSignature): nullable MType */
val* nitc___nitc__MSignature___return_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MSignature$return_mtype= for (self: MSignature, nullable MType) */
void nitc___nitc__MSignature___return_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MSignature___return_mtype].val = p0; /* _return_mtype on <self:MSignature> */
RET_LABEL:;
}
/* method model$MSignature$length for (self: MSignature): Int */
long nitc___nitc__MSignature___MType__length(val* self) {
long var /* : Int */;
long var_res /* var res: Int */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
val* var14 /* : Array[MParameter] */;
val* var16 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var17 /* : IndexedIterator[nullable Object] */;
val* var_18 /* var : IndexedIterator[MParameter] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var21 /* : MType */;
val* var23 /* : MType */;
long var24 /* : Int */;
long var25 /* : Int */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
const char* var_class_name30;
long var31 /* : Int */;
var_res = 1l;
{
{ /* Inline model$MSignature$return_mtype (self) on <self:MSignature> */
var3 = self->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_t = var1;
if (var_t == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_t,((val*)NULL)) on <var_t:nullable MType> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_t->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_t, var_other); /* == on <var_t:nullable MType(MType)>*/
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
var9 = ((long(*)(val* self))(var_t->class->vft[COLOR_nitc__model__MType__length]))(var_t); /* length on <var_t:nullable MType(MType)>*/
}
{
{ /* Inline kernel$Int$+ (var_res,var9) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var13 = var_res + var9;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var_res = var10;
} else {
}
{
{ /* Inline model$MSignature$mparameters (self) on <self:MSignature> */
var16 = self->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_ = var14;
{
var17 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_18 = var17;
for(;;) {
{
var19 = ((short int(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_18); /* is_ok on <var_18:IndexedIterator[MParameter]>*/
}
if (var19){
} else {
goto BREAK_label;
}
{
var20 = ((val*(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_18); /* item on <var_18:IndexedIterator[MParameter]>*/
}
var_p = var20;
{
{ /* Inline model$MParameter$mtype (var_p) on <var_p:MParameter> */
var23 = var_p->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = ((long(*)(val* self))(var21->class->vft[COLOR_nitc__model__MType__length]))(var21); /* length on <var21:MType>*/
}
{
{ /* Inline kernel$Int$+ (var_res,var24) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var27 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var27)) {
var_class_name30 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name30);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var31 = var_res + var24;
var25 = var31;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_res = var25;
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_18); /* next on <var_18:IndexedIterator[MParameter]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_18); /* finish on <var_18:IndexedIterator[MParameter]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MSignature$init for (self: MSignature) */
void nitc___nitc__MSignature___core__kernel__Object__init(val* self) {
long var /* : Int */;
long var2 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
long var_i /* var i: Int */;
val* var3 /* : Array[MParameter] */;
val* var5 /* : Array[MParameter] */;
long var6 /* : Int */;
long var8 /* : Int */;
long var_ /* var : Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
val* var13 /* : Array[MParameter] */;
val* var15 /* : Array[MParameter] */;
val* var16 /* : nullable Object */;
val* var_parameter /* var parameter: MParameter */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
long var27 /* : Int */;
long var29 /* : Int */;
long var30 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MSignature___core__kernel__Object__init]))(self); /* init on <self:MSignature>*/
}
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var2 = -1l;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
var_vararg_rank = var;
var_i = 0l;
{
{ /* Inline model$MSignature$mparameters (self) on <self:MSignature> */
var5 = self->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline array$AbstractArrayRead$length (var3) on <var3:Array[MParameter]> */
var8 = var3->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var3:Array[MParameter]> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_ = var6;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var11 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var12 = var_i < var_;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
} else {
goto BREAK_label;
}
{
{ /* Inline model$MSignature$mparameters (self) on <self:MSignature> */
var15 = self->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var13, var_i);
}
var_parameter = var16;
{
{ /* Inline model$MParameter$is_vararg (var_parameter) on <var_parameter:MParameter> */
var19 = var_parameter->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_parameter:MParameter> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (var17){
{
{ /* Inline kernel$Int$>= (var_vararg_rank,0l) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var22 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var26 = var_vararg_rank >= 0l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var29 = -1l;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_vararg_rank = var27;
goto BREAK_label;
} else {
}
var_vararg_rank = var_i;
} else {
}
{
var30 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var30;
}
BREAK_label: (void)0;
{
{ /* Inline model$MSignature$vararg_rank= (self,var_vararg_rank) on <self:MSignature> */
self->attrs[COLOR_nitc__model__MSignature___vararg_rank].l = var_vararg_rank; /* _vararg_rank on <self:MSignature> */
RET_LABEL31:(void)0;
}
}
RET_LABEL:;
}
/* method model$MSignature$vararg_rank for (self: MSignature): Int */
long nitc___nitc__MSignature___vararg_rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__model__MSignature___vararg_rank].l; /* _vararg_rank on <self:MSignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MSignature$vararg_rank= for (self: MSignature, Int) */
void nitc___nitc__MSignature___vararg_rank_61d(val* self, long p0) {
self->attrs[COLOR_nitc__model__MSignature___vararg_rank].l = p0; /* _vararg_rank on <self:MSignature> */
RET_LABEL:;
}
/* method model$MSignature$arity for (self: MSignature): Int */
long nitc___nitc__MSignature___arity(val* self) {
long var /* : Int */;
val* var1 /* : Array[MParameter] */;
val* var3 /* : Array[MParameter] */;
long var4 /* : Int */;
long var6 /* : Int */;
{
{ /* Inline model$MSignature$mparameters (self) on <self:MSignature> */
var3 = self->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline array$AbstractArrayRead$length (var1) on <var1:Array[MParameter]> */
var6 = var1->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var1:Array[MParameter]> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MSignature$to_s for (self: MSignature): String */
val* nitc___nitc__MSignature___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_b /* var b: FlatBuffer */;
val* var3 /* : Array[MParameter] */;
val* var5 /* : Array[MParameter] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
long var_i /* var i: Int */;
val* var15 /* : Array[MParameter] */;
val* var17 /* : Array[MParameter] */;
long var18 /* : Int */;
long var20 /* : Int */;
long var_ /* var : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var24 /* : Bool */;
val* var25 /* : Array[MParameter] */;
val* var27 /* : Array[MParameter] */;
val* var28 /* : nullable Object */;
val* var_mparameter /* var mparameter: MParameter */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
short int var35 /* : Bool */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
val* var44 /* : String */;
val* var46 /* : String */;
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
short int var59 /* : Bool */;
short int var61 /* : Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Bool */;
val* var69 /* : nullable Bool */;
long var70 /* : Int */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : CString */;
val* var74 /* : String */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Int */;
val* var77 /* : nullable Bool */;
val* var78 /* : nullable Bool */;
val* var79 /* : nullable MType */;
val* var81 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
val* var91 /* : nullable Int */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Bool */;
val* var94 /* : nullable Bool */;
val* var95 /* : String */;
val* var96 /* : String */;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
{ /* Inline flat$FlatBuffer$init (var1) on <var1:FlatBuffer> */
{
((void(*)(val* self))(var1->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
RET_LABEL2:(void)0;
}
}
var_b = var1;
{
{ /* Inline model$MSignature$mparameters (self) on <self:MSignature> */
var5 = self->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var3);
}
var7 = !var6;
if (var7){
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "(";
var11 = (val*)(1l<<2|1);
var12 = (val*)(1l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce = var8;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_b, var8); /* Direct call flat$FlatBuffer$append on <var_b:FlatBuffer>*/
}
var_i = 0l;
{
{ /* Inline model$MSignature$mparameters (self) on <self:MSignature> */
var17 = self->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline array$AbstractArrayRead$length (var15) on <var15:Array[MParameter]> */
var20 = var15->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var15:Array[MParameter]> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_ = var18;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var23 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var24 = var_i < var_;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
} else {
goto BREAK_label;
}
{
{ /* Inline model$MSignature$mparameters (self) on <self:MSignature> */
var27 = self->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var25, var_i);
}
var_mparameter = var28;
{
{ /* Inline kernel$Int$> (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var31 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var35 = var_i > 0l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = ", ";
var40 = (val*)(2l<<2|1);
var41 = (val*)(2l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_b, var37); /* Direct call flat$FlatBuffer$append on <var_b:FlatBuffer>*/
}
} else {
}
{
{ /* Inline model$MParameter$name (var_mparameter) on <var_mparameter:MParameter> */
var46 = var_mparameter->attrs[COLOR_nitc__model__MParameter___name].val; /* _name on <var_mparameter:MParameter> */
if (unlikely(var46 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1993);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_b, var44); /* Direct call flat$FlatBuffer$append on <var_b:FlatBuffer>*/
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = ": ";
var51 = (val*)(2l<<2|1);
var52 = (val*)(2l<<2|1);
var53 = (val*)((long)(0)<<2|3);
var54 = (val*)((long)(0)<<2|3);
var50 = core__flat___CString___to_s_unsafe(var49, var51, var52, var53, var54);
var48 = var50;
varonce47 = var48;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_b, var48); /* Direct call flat$FlatBuffer$append on <var_b:FlatBuffer>*/
}
{
{ /* Inline model$MParameter$mtype (var_mparameter) on <var_mparameter:MParameter> */
var57 = var_mparameter->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_mparameter:MParameter> */
if (unlikely(var57 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = ((val*(*)(val* self))(var55->class->vft[COLOR_core__abstract_text__Object__to_s]))(var55); /* to_s on <var55:MType>*/
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_b, var58); /* Direct call flat$FlatBuffer$append on <var_b:FlatBuffer>*/
}
{
{ /* Inline model$MParameter$is_vararg (var_mparameter) on <var_mparameter:MParameter> */
var61 = var_mparameter->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_mparameter:MParameter> */
var59 = var61;
RET_LABEL60:(void)0;
}
}
if (var59){
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "...";
var66 = (val*)(3l<<2|1);
var67 = (val*)(3l<<2|1);
var68 = (val*)((long)(0)<<2|3);
var69 = (val*)((long)(0)<<2|3);
var65 = core__flat___CString___to_s_unsafe(var64, var66, var67, var68, var69);
var63 = var65;
varonce62 = var63;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_b, var63); /* Direct call flat$FlatBuffer$append on <var_b:FlatBuffer>*/
}
} else {
}
{
var70 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var70;
}
BREAK_label: (void)0;
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = ")";
var75 = (val*)(1l<<2|1);
var76 = (val*)(1l<<2|1);
var77 = (val*)((long)(0)<<2|3);
var78 = (val*)((long)(0)<<2|3);
var74 = core__flat___CString___to_s_unsafe(var73, var75, var76, var77, var78);
var72 = var74;
varonce71 = var72;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_b, var72); /* Direct call flat$FlatBuffer$append on <var_b:FlatBuffer>*/
}
} else {
}
{
{ /* Inline model$MSignature$return_mtype (self) on <self:MSignature> */
var81 = self->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
var_ret = var79;
if (var_ret == NULL) {
var82 = 0; /* is null */
} else {
var82 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var85 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var86 = !var85;
var83 = var86;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
var82 = var83;
}
if (var82){
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = ": ";
var91 = (val*)(2l<<2|1);
var92 = (val*)(2l<<2|1);
var93 = (val*)((long)(0)<<2|3);
var94 = (val*)((long)(0)<<2|3);
var90 = core__flat___CString___to_s_unsafe(var89, var91, var92, var93, var94);
var88 = var90;
varonce87 = var88;
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_b, var88); /* Direct call flat$FlatBuffer$append on <var_b:FlatBuffer>*/
}
{
var95 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_b, var95); /* Direct call flat$FlatBuffer$append on <var_b:FlatBuffer>*/
}
} else {
}
{
var96 = core___core__FlatBuffer___core__abstract_text__Object__to_s(var_b);
}
var = var96;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MSignature$resolve_for for (self: MSignature, MType, nullable MClassType, MModule, Bool): MSignature */
val* nitc___nitc__MSignature___MType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MSignature */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
val* var1 /* : Array[MParameter] */;
val* var_params /* var params: Array[MParameter] */;
val* var2 /* : Array[MParameter] */;
val* var4 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var5 /* : IndexedIterator[nullable Object] */;
val* var_6 /* var : IndexedIterator[MParameter] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var9 /* : MParameter */;
val* var10 /* : nullable MType */;
val* var12 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : MType */;
val* var19 /* : MSignature */;
val* var_res /* var res: MSignature */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var1 = NEW_core__Array(&type_core__Array__nitc__MParameter);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[MParameter]>*/
}
var_params = var1;
{
{ /* Inline model$MSignature$mparameters (self) on <self:MSignature> */
var4 = self->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_ = var2;
{
var5 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:IndexedIterator[MParameter]>*/
}
if (var7){
} else {
goto BREAK_label;
}
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:IndexedIterator[MParameter]>*/
}
var_p = var8;
{
var9 = nitc___nitc__MParameter___resolve_for(var_p, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_params, var9); /* Direct call array$Array$add on <var_params:Array[MParameter]>*/
}
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:IndexedIterator[MParameter]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:IndexedIterator[MParameter]>*/
}
{
{ /* Inline model$MSignature$return_mtype (self) on <self:MSignature> */
var12 = self->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ret = var10;
if (var_ret == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var16 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
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
var18 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_ret->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_ret, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual); /* resolve_for on <var_ret:nullable MType(MType)>*/
}
var_ret = var18;
} else {
}
var19 = NEW_nitc__MSignature(&type_nitc__MSignature);
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var19, var_params); /* mparameters= on <var19:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var19, var_ret); /* return_mtype= on <var19:MSignature>*/
}
{
((void(*)(val* self))(var19->class->vft[COLOR_core__kernel__Object__init]))(var19); /* init on <var19:MSignature>*/
}
var_res = var19;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MParameter$name for (self: MParameter): String */
val* nitc___nitc__MParameter___nitc__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MParameter___name].val; /* _name on <self:MParameter> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1993);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MParameter$name= for (self: MParameter, String) */
void nitc___nitc__MParameter___name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MParameter___name].val = p0; /* _name on <self:MParameter> */
RET_LABEL:;
}
/* method model$MParameter$mtype for (self: MParameter): MType */
val* nitc___nitc__MParameter___mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MParameter$mtype= for (self: MParameter, MType) */
void nitc___nitc__MParameter___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MParameter___mtype].val = p0; /* _mtype on <self:MParameter> */
RET_LABEL:;
}
/* method model$MParameter$is_vararg for (self: MParameter): Bool */
short int nitc___nitc__MParameter___is_vararg(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <self:MParameter> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MParameter$is_vararg= for (self: MParameter, Bool) */
void nitc___nitc__MParameter___is_vararg_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__model__MParameter___is_vararg].s = p0; /* _is_vararg on <self:MParameter> */
RET_LABEL:;
}
/* method model$MParameter$to_s for (self: MParameter): String */
val* nitc___nitc__MParameter___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
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
val* var23 /* : String */;
val* var24 /* : MType */;
val* var26 /* : MType */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var30 /* : NativeArray[String] */;
static val* varonce29;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Bool */;
val* var38 /* : nullable Bool */;
val* var39 /* : String */;
val* var41 /* : String */;
val* var42 /* : MType */;
val* var44 /* : MType */;
val* var45 /* : String */;
val* var46 /* : String */;
{
{ /* Inline model$MParameter$is_vararg (self) on <self:MParameter> */
var3 = self->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <self:MParameter> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = ": ";
var9 = (val*)(2l<<2|1);
var10 = (val*)(2l<<2|1);
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
var15 = "...";
var17 = (val*)(3l<<2|1);
var18 = (val*)(3l<<2|1);
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
{ /* Inline model$MParameter$name (self) on <self:MParameter> */
var23 = self->attrs[COLOR_nitc__model__MParameter___name].val; /* _name on <self:MParameter> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1993);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
((struct instance_core__NativeArray*)var4)->values[0]=var21;
{
{ /* Inline model$MParameter$mtype (self) on <self:MParameter> */
var26 = self->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = ((val*(*)(val* self))(var24->class->vft[COLOR_core__abstract_text__Object__to_s]))(var24); /* to_s on <var24:MType>*/
}
((struct instance_core__NativeArray*)var4)->values[2]=var27;
{
var28 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
var = var28;
goto RET_LABEL;
} else {
if (unlikely(varonce29==NULL)) {
var30 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = ": ";
var35 = (val*)(2l<<2|1);
var36 = (val*)(2l<<2|1);
var37 = (val*)((long)(0)<<2|3);
var38 = (val*)((long)(0)<<2|3);
var34 = core__flat___CString___to_s_unsafe(var33, var35, var36, var37, var38);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var30)->values[1]=var32;
} else {
var30 = varonce29;
varonce29 = NULL;
}
{
{ /* Inline model$MParameter$name (self) on <self:MParameter> */
var41 = self->attrs[COLOR_nitc__model__MParameter___name].val; /* _name on <self:MParameter> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1993);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
((struct instance_core__NativeArray*)var30)->values[0]=var39;
{
{ /* Inline model$MParameter$mtype (self) on <self:MParameter> */
var44 = self->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__Object__to_s]))(var42); /* to_s on <var42:MType>*/
}
((struct instance_core__NativeArray*)var30)->values[2]=var45;
{
var46 = ((val*(*)(val* self))(var30->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var30); /* native_to_s on <var30:NativeArray[String]>*/
}
varonce29 = var30;
var = var46;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method model$MParameter$resolve_for for (self: MParameter, MType, nullable MClassType, MModule, Bool): MParameter */
val* nitc___nitc__MParameter___resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MParameter */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
val* var1 /* : MType */;
val* var3 /* : MType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : MType */;
val* var8 /* : MType */;
val* var9 /* : MType */;
val* var_newtype /* var newtype: MType */;
val* var10 /* : MParameter */;
val* var11 /* : String */;
val* var13 /* : String */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var_res /* var res: MParameter */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
{
{ /* Inline model$MParameter$mtype (self) on <self:MParameter> */
var3 = self->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
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
{
var4 = ((short int(*)(val* self))(var1->class->vft[COLOR_nitc__model__MType__need_anchor]))(var1); /* need_anchor on <var1:MType>*/
}
var5 = !var4;
if (var5){
var = self;
goto RET_LABEL;
} else {
}
{
{ /* Inline model$MParameter$mtype (self) on <self:MParameter> */
var8 = self->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var6->class->vft[COLOR_nitc__model__MType__resolve_for]))(var6, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual); /* resolve_for on <var6:MType>*/
}
var_newtype = var9;
var10 = NEW_nitc__MParameter(&type_nitc__MParameter);
{
{ /* Inline model$MParameter$name (self) on <self:MParameter> */
var13 = self->attrs[COLOR_nitc__model__MParameter___name].val; /* _name on <self:MParameter> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1993);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model$MParameter$is_vararg (self) on <self:MParameter> */
var16 = self->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <self:MParameter> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__model__MParameter__name_61d]))(var10, var11); /* name= on <var10:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__model__MParameter__mtype_61d]))(var10, var_newtype); /* mtype= on <var10:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var10->class->vft[COLOR_nitc__model__MParameter__is_vararg_61d]))(var10, var14); /* is_vararg= on <var10:MParameter>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:MParameter>*/
}
var_res = var10;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MParameter$model for (self: MParameter): Model */
val* nitc___nitc__MParameter___nitc__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var4 /* : Model */;
{
{ /* Inline model$MParameter$mtype (self) on <self:MParameter> */
var3 = self->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
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
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_nitc__model_base__MEntity__model]))(var1); /* model on <var1:MType>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MParameter$init for (self: MParameter) */
void nitc___nitc__MParameter___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MParameter___core__kernel__Object__init]))(self); /* init on <self:MParameter>*/
}
RET_LABEL:;
}
/* method model$MProperty$intro_mclassdef for (self: MProperty): MClassDef */
val* nitc___nitc__MProperty___intro_mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MProperty$intro_mclassdef= for (self: MProperty, MClassDef) */
void nitc___nitc__MProperty___intro_mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val = p0; /* _intro_mclassdef on <self:MProperty> */
RET_LABEL:;
}
/* method model$MProperty$name for (self: MProperty): String */
val* nitc___nitc__MProperty___nitc__model_base__MEntity__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <self:MProperty> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MProperty$name= for (self: MProperty, String) */
void nitc___nitc__MProperty___name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MProperty___name].val = p0; /* _name on <self:MProperty> */
RET_LABEL:;
}
/* method model$MProperty$location for (self: MProperty): Location */
val* nitc___nitc__MProperty___nitc__model_base__MEntity__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_nitc__model__MProperty___location].val; /* _location on <self:MProperty> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2050);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MProperty$location= for (self: MProperty, Location) */
void nitc___nitc__MProperty___location_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MProperty___location].val = p0; /* _location on <self:MProperty> */
RET_LABEL:;
}
/* method model$MProperty$full_name for (self: MProperty): String */
val* nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : MClassDef */;
val* var7 /* : MClassDef */;
short int var8 /* : Bool */;
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
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var26 /* : MClassDef */;
val* var28 /* : MClassDef */;
val* var29 /* : MModule */;
val* var31 /* : MModule */;
val* var32 /* : MVisibility */;
val* var34 /* : MVisibility */;
val* var35 /* : String */;
val* var36 /* : MClassDef */;
val* var38 /* : MClassDef */;
val* var39 /* : MClass */;
val* var41 /* : MClass */;
val* var42 /* : String */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var47 /* : String */;
val* var48 /* : String */;
val* var50 /* : NativeArray[String] */;
static val* varonce49;
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
val* var67 /* : MClassDef */;
val* var69 /* : MClassDef */;
val* var70 /* : MModule */;
val* var72 /* : MModule */;
val* var73 /* : String */;
val* var74 /* : MClassDef */;
val* var76 /* : MClassDef */;
val* var77 /* : MClass */;
val* var79 /* : MClass */;
val* var80 /* : String */;
val* var82 /* : String */;
val* var83 /* : String */;
val* var85 /* : String */;
val* var86 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MProperty___full_name].val != NULL; /* _full_name on <self:MProperty> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MProperty___full_name].val; /* _full_name on <self:MProperty> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _full_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2054);
fatal_exit(1);
}
} else {
{
{
{ /* Inline model$MProperty$intro_mclassdef (self) on <self:MProperty> */
var7 = self->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__MClassDef___is_intro(var5);
}
if (var8){
if (unlikely(varonce==NULL)) {
var9 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "::";
var14 = (val*)(2l<<2|1);
var15 = (val*)(2l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[1]=var11;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "::";
var22 = (val*)(2l<<2|1);
var23 = (val*)(2l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var9)->values[3]=var19;
} else {
var9 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MProperty$intro_mclassdef (self) on <self:MProperty> */
var28 = self->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var26) on <var26:MClassDef> */
var31 = var26->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var26:MClassDef> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model$MProperty$visibility (self) on <self:MProperty> */
var34 = self->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <self:MProperty> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = nitc___nitc__MModule___namespace_for(var29, var32);
}
((struct instance_core__NativeArray*)var9)->values[0]=var35;
{
{ /* Inline model$MProperty$intro_mclassdef (self) on <self:MProperty> */
var38 = self->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var36) on <var36:MClassDef> */
var41 = var36->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var36:MClassDef> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model$MClass$name (var39) on <var39:MClass> */
var44 = var39->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var39:MClass> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
((struct instance_core__NativeArray*)var9)->values[2]=var42;
{
{ /* Inline model$MProperty$name (self) on <self:MProperty> */
var47 = self->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <self:MProperty> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
((struct instance_core__NativeArray*)var9)->values[4]=var45;
{
var48 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
var3 = var48;
goto RET_LABEL4;
} else {
if (unlikely(varonce49==NULL)) {
var50 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "::";
var55 = (val*)(2l<<2|1);
var56 = (val*)(2l<<2|1);
var57 = (val*)((long)(0)<<2|3);
var58 = (val*)((long)(0)<<2|3);
var54 = core__flat___CString___to_s_unsafe(var53, var55, var56, var57, var58);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var50)->values[1]=var52;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "::";
var63 = (val*)(2l<<2|1);
var64 = (val*)(2l<<2|1);
var65 = (val*)((long)(0)<<2|3);
var66 = (val*)((long)(0)<<2|3);
var62 = core__flat___CString___to_s_unsafe(var61, var63, var64, var65, var66);
var60 = var62;
varonce59 = var60;
}
((struct instance_core__NativeArray*)var50)->values[3]=var60;
} else {
var50 = varonce49;
varonce49 = NULL;
}
{
{ /* Inline model$MProperty$intro_mclassdef (self) on <self:MProperty> */
var69 = self->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var69 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var67) on <var67:MClassDef> */
var72 = var67->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var67:MClassDef> */
if (unlikely(var72 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = nitc___nitc__MModule___nitc__model_base__MEntity__full_name(var70);
}
((struct instance_core__NativeArray*)var50)->values[0]=var73;
{
{ /* Inline model$MProperty$intro_mclassdef (self) on <self:MProperty> */
var76 = self->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var76 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var74) on <var74:MClassDef> */
var79 = var74->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var74:MClassDef> */
if (unlikely(var79 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
{ /* Inline model$MClass$name (var77) on <var77:MClass> */
var82 = var77->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var77:MClass> */
if (unlikely(var82 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
((struct instance_core__NativeArray*)var50)->values[2]=var80;
{
{ /* Inline model$MProperty$name (self) on <self:MProperty> */
var85 = self->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <self:MProperty> */
if (unlikely(var85 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
((struct instance_core__NativeArray*)var50)->values[4]=var83;
{
var86 = ((val*(*)(val* self))(var50->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var50); /* native_to_s on <var50:NativeArray[String]>*/
}
varonce49 = var50;
var3 = var86;
goto RET_LABEL4;
}
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__model__MProperty___full_name].val = var3; /* _full_name on <self:MProperty> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MProperty$c_name for (self: MProperty): String */
val* nitc___nitc__MProperty___nitc__model_base__MEntity__c_name(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Bool */;
val* var21 /* : nullable Bool */;
val* var22 /* : MClassDef */;
val* var24 /* : MClassDef */;
val* var25 /* : MModule */;
val* var27 /* : MModule */;
val* var28 /* : String */;
val* var29 /* : MClassDef */;
val* var31 /* : MClassDef */;
val* var32 /* : MClass */;
val* var34 /* : MClass */;
val* var35 /* : String */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var39 /* : String */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : String */;
var1 = self->attrs[COLOR_nitc__model__MProperty___c_name].val != NULL; /* _c_name on <self:MProperty> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__model__MProperty___c_name].val; /* _c_name on <self:MProperty> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2073);
fatal_exit(1);
}
} else {
{
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "__";
var10 = (val*)(2l<<2|1);
var11 = (val*)(2l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[1]=var7;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "__";
var18 = (val*)(2l<<2|1);
var19 = (val*)(2l<<2|1);
var20 = (val*)((long)(0)<<2|3);
var21 = (val*)((long)(0)<<2|3);
var17 = core__flat___CString___to_s_unsafe(var16, var18, var19, var20, var21);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var5)->values[3]=var15;
} else {
var5 = varonce;
varonce = NULL;
}
{
{ /* Inline model$MProperty$intro_mclassdef (self) on <self:MProperty> */
var24 = self->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var22) on <var22:MClassDef> */
var27 = var22->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var22:MClassDef> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var25);
}
((struct instance_core__NativeArray*)var5)->values[0]=var28;
{
{ /* Inline model$MProperty$intro_mclassdef (self) on <self:MProperty> */
var31 = self->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline model$MClassDef$mclass (var29) on <var29:MClassDef> */
var34 = var29->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var29:MClassDef> */
if (unlikely(var34 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline model$MClass$name (var32) on <var32:MClass> */
var37 = var32->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var32:MClass> */
if (unlikely(var37 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = core___core__Text___to_cmangle(var35);
}
((struct instance_core__NativeArray*)var5)->values[2]=var38;
{
{ /* Inline model$MProperty$name (self) on <self:MProperty> */
var41 = self->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <self:MProperty> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = core___core__Text___to_cmangle(var39);
}
((struct instance_core__NativeArray*)var5)->values[4]=var42;
{
var43 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
var3 = var43;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__model__MProperty___c_name].val = var3; /* _c_name on <self:MProperty> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method model$MProperty$visibility for (self: MProperty): MVisibility */
val* nitc___nitc__MProperty___MEntity__visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = self->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <self:MProperty> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MProperty$visibility= for (self: MProperty, MVisibility) */
void nitc___nitc__MProperty___visibility_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__model__MProperty___visibility].val = p0; /* _visibility on <self:MProperty> */
RET_LABEL:;
}
/* method model$MProperty$is_autoinit for (self: MProperty): Bool */
short int nitc___nitc__MProperty___is_autoinit(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__model__MProperty___is_autoinit].s; /* _is_autoinit on <self:MProperty> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MProperty$is_autoinit= for (self: MProperty, Bool) */
void nitc___nitc__MProperty___is_autoinit_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__model__MProperty___is_autoinit].s = p0; /* _is_autoinit on <self:MProperty> */
RET_LABEL:;
}
/* method model$MProperty$init for (self: MProperty) */
void nitc___nitc__MProperty___core__kernel__Object__init(val* self) {
val* var /* : MClassDef */;
val* var2 /* : MClassDef */;
val* var3 /* : Array[MProperty] */;
val* var5 /* : Array[MProperty] */;
val* var6 /* : MClassDef */;
val* var8 /* : MClassDef */;
val* var9 /* : MModule */;
val* var11 /* : MModule */;
val* var12 /* : Model */;
val* var14 /* : Model */;
val* var_model /* var model: Model */;
val* var15 /* : MultiHashMap[String, MProperty] */;
val* var17 /* : MultiHashMap[String, MProperty] */;
val* var18 /* : String */;
val* var20 /* : String */;
val* var21 /* : Array[MProperty] */;
val* var23 /* : Array[MProperty] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MProperty___core__kernel__Object__init]))(self); /* init on <self:MProperty>*/
}
{
{ /* Inline model$MProperty$intro_mclassdef (self) on <self:MProperty> */
var2 = self->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model$MClassDef$intro_mproperties (var) on <var:MClassDef> */
var5 = var->attrs[COLOR_nitc__model__MClassDef___intro_mproperties].val; /* _intro_mproperties on <var:MClassDef> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mproperties");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 720);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var3, self); /* Direct call array$Array$add on <var3:Array[MProperty]>*/
}
{
{ /* Inline model$MProperty$intro_mclassdef (self) on <self:MProperty> */
var8 = self->attrs[COLOR_nitc__model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2042);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var6) on <var6:MClassDef> */
var11 = var6->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var6:MClassDef> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline mmodule$MModule$model (var9) on <var9:MModule> */
var14 = var9->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var9:MModule> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_model = var12;
{
{ /* Inline model$Model$mproperties_by_name (var_model) on <var_model:Model> */
var17 = var_model->attrs[COLOR_nitc__model__Model___mproperties_by_name].val; /* _mproperties_by_name on <var_model:Model> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties_by_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 89);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model$MProperty$name (self) on <self:MProperty> */
var20 = self->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <self:MProperty> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
more_collections___more_collections__MultiHashMap___add_one(var15, var18, self); /* Direct call more_collections$MultiHashMap$add_one on <var15:MultiHashMap[String, MProperty]>*/
}
{
{ /* Inline model$Model$mproperties (var_model) on <var_model:Model> */
var23 = var_model->attrs[COLOR_nitc__model__Model___mproperties].val; /* _mproperties on <var_model:Model> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 46);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var21, self); /* Direct call array$Array$add on <var21:Array[MProperty]>*/
}
RET_LABEL:;
}
/* method model$MProperty$mpropdefs for (self: MProperty): Array[MPropDef] */
val* nitc___nitc__MProperty___mpropdefs(val* self) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = self->attrs[COLOR_nitc__model__MProperty___mpropdefs].val; /* _mpropdefs on <self:MProperty> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2092);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MProperty$intro for (self: MProperty): MPropDef */
val* nitc___nitc__MProperty___intro(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = self->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <self:MProperty> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MProperty$intro= for (self: MProperty, MPropDef) */
void nitc___nitc__MProperty___intro_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (intro) <p0:MPropDef> isa MPROPDEF */
/* <p0:MPropDef> isa MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nitc__model__MProperty__MPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
self->attrs[COLOR_nitc__model__MProperty___intro].val = p0; /* _intro on <self:MProperty> */
RET_LABEL:;
}
/* method model$MProperty$model for (self: MProperty): Model */
val* nitc___nitc__MProperty___nitc__model_base__MEntity__model(val* self) {
val* var /* : Model */;
val* var1 /* : MPropDef */;
val* var3 /* : MPropDef */;
val* var4 /* : Model */;
{
{ /* Inline model$MProperty$intro (self) on <self:MProperty> */
var3 = self->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <self:MProperty> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__MPropDef___nitc__model_base__MEntity__model(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MProperty$to_s for (self: MProperty): String */
val* nitc___nitc__MProperty___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline model$MProperty$name (self) on <self:MProperty> */
var3 = self->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <self:MProperty> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
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
/* method model$MProperty$lookup_definitions for (self: MProperty, MModule, MType): Array[MPropDef] */
val* nitc___nitc__MProperty___lookup_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var4 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var6 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var7 /* : nullable Object */;
val* var_cache /* var cache: nullable Array[MPropDef] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : Array[MPropDef] */;
val* var_candidates /* var candidates: Array[MPropDef] */;
val* var14 /* : Array[MPropDef] */;
val* var16 /* : Array[MPropDef] */;
val* var_mpropdefs /* var mpropdefs: Array[MPropDef] */;
short int var17 /* : Bool */;
long var18 /* : Int */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var24 /* : Bool */;
short int var_ /* var : Bool */;
long var25 /* : Int */;
long var27 /* : Int */;
val* var28 /* : Set[MClassDef] */;
long var29 /* : Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
val* var_37 /* var : Array[MPropDef] */;
val* var38 /* : IndexedIterator[nullable Object] */;
val* var_39 /* var : IndexedIterator[MPropDef] */;
short int var40 /* : Bool */;
val* var41 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var42 /* : POSetElement[MModule] */;
val* var44 /* : POSetElement[MModule] */;
val* var45 /* : MClassDef */;
val* var47 /* : MClassDef */;
val* var48 /* : MModule */;
val* var50 /* : MModule */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var54 /* : MClassDef */;
val* var56 /* : MClassDef */;
val* var57 /* : MClassType */;
val* var59 /* : MClassType */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
val* var62 /* : Set[MClassDef] */;
val* var_63 /* var : Set[MClassDef] */;
val* var64 /* : Iterator[nullable Object] */;
val* var_65 /* var : Iterator[MClassDef] */;
short int var66 /* : Bool */;
val* var68 /* : nullable Object */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var69 /* : HashMap[MProperty, MPropDef] */;
val* var71 /* : HashMap[MProperty, MPropDef] */;
val* var72 /* : nullable Object */;
val* var_p /* var p: nullable MPropDef */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const struct type* type_struct;
const char* var_class_name81;
long var82 /* : Int */;
long var84 /* : Int */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
int cltype88;
int idtype89;
const char* var_class_name90;
short int var91 /* : Bool */;
val* var92 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var94 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var95 /* : Array[MPropDef] */;
var_mmodule = p0;
var_mtype = p1;
{
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2119);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
var_mtype = var3;
{
{ /* Inline model$MProperty$lookup_definitions_cache (self) on <self:MProperty> */
var6 = self->attrs[COLOR_nitc__model__MProperty___lookup_definitions_cache].val; /* _lookup_definitions_cache on <self:MProperty> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2159);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = more_collections___more_collections__HashMap2____91d_93d(var4, var_mmodule, var_mtype);
}
var_cache = var7;
if (var_cache == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_cache,((val*)NULL)) on <var_cache:nullable Array[MPropDef]> */
var_other = ((val*)NULL);
{
var11 = ((short int(*)(val* self, val* p0))(var_cache->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cache, var_other); /* == on <var_cache:nullable Array[MPropDef](Array[MPropDef])>*/
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
var = var_cache;
goto RET_LABEL;
} else {
}
var13 = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__nitc__model__MProperty__MPROPDEF]);
{
core___core__Array___core__kernel__Object__init(var13); /* Direct call array$Array$init on <var13:Array[MPropDef]>*/
}
var_candidates = var13;
{
{ /* Inline model$MProperty$mpropdefs (self) on <self:MProperty> */
var16 = self->attrs[COLOR_nitc__model__MProperty___mpropdefs].val; /* _mpropdefs on <self:MProperty> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2092);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_mpropdefs = var14;
{
{ /* Inline array$AbstractArrayRead$length (var_mpropdefs) on <var_mpropdefs:Array[MPropDef]> */
var20 = var_mpropdefs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_mpropdefs:Array[MPropDef]> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel$Int$<= (var18,1l) on <var18:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var23 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var24 = var18 <= 1l;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_ = var21;
if (var21){
var17 = var_;
} else {
{
{ /* Inline array$AbstractArrayRead$length (var_mpropdefs) on <var_mpropdefs:Array[MPropDef]> */
var27 = var_mpropdefs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_mpropdefs:Array[MPropDef]> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = ((val*(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_nitc__model__MType__collect_mclassdefs]))(var_mtype, var_mmodule); /* collect_mclassdefs on <var_mtype:MType>*/
}
{
var29 = ((long(*)(val* self))((((long)var28&3)?class_info[((long)var28&3)]:var28->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var28); /* length on <var28:Set[MClassDef]>*/
}
{
{ /* Inline kernel$Int$< (var25,var29) on <var25:Int> */
/* Covariant cast for argument 0 (i) <var29:Int> isa OTHER */
/* <var29:Int> isa OTHER */
var32 = 1; /* easy <var29:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var36 = var25 < var29;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var17 = var30;
}
if (var17){
var_37 = var_mpropdefs;
{
var38 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_37);
}
var_39 = var38;
for(;;) {
{
var40 = ((short int(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_39); /* is_ok on <var_39:IndexedIterator[MPropDef]>*/
}
if (var40){
} else {
goto BREAK_label;
}
{
var41 = ((val*(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_39); /* item on <var_39:IndexedIterator[MPropDef]>*/
}
var_mpropdef = var41;
{
{ /* Inline mmodule$MModule$in_importation (var_mmodule) on <var_mmodule:MModule> */
var44 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var47 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var45) on <var45:MClassDef> */
var50 = var45->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var45:MClassDef> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = poset___poset__POSetElement____60d_61d(var42, var48);
}
var52 = !var51;
if (var52){
goto BREAK_label53;
} else {
}
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var56 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var56 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var54) on <var54:MClassDef> */
var59 = var54->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var54:MClassDef> */
if (unlikely(var59 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
var60 = nitc___nitc__MType___is_subtype(var_mtype, var_mmodule, ((val*)NULL), var57);
}
var61 = !var60;
if (var61){
goto BREAK_label53;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_candidates, var_mpropdef); /* Direct call array$Array$add on <var_candidates:Array[MPropDef]>*/
}
BREAK_label53: (void)0;
{
((void(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_39); /* next on <var_39:IndexedIterator[MPropDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_39); /* finish on <var_39:IndexedIterator[MPropDef]>*/
}
} else {
{
var62 = ((val*(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_nitc__model__MType__collect_mclassdefs]))(var_mtype, var_mmodule); /* collect_mclassdefs on <var_mtype:MType>*/
}
var_63 = var62;
{
var64 = ((val*(*)(val* self))((((long)var_63&3)?class_info[((long)var_63&3)]:var_63->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_63); /* iterator on <var_63:Set[MClassDef]>*/
}
var_65 = var64;
for(;;) {
{
var66 = ((short int(*)(val* self))((((long)var_65&3)?class_info[((long)var_65&3)]:var_65->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_65); /* is_ok on <var_65:Iterator[MClassDef]>*/
}
if (var66){
} else {
goto BREAK_label67;
}
{
var68 = ((val*(*)(val* self))((((long)var_65&3)?class_info[((long)var_65&3)]:var_65->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_65); /* item on <var_65:Iterator[MClassDef]>*/
}
var_mclassdef = var68;
{
{ /* Inline model$MClassDef$mpropdefs_by_property (var_mclassdef) on <var_mclassdef:MClassDef> */
var71 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mpropdefs_by_property].val; /* _mpropdefs_by_property on <var_mclassdef:MClassDef> */
if (unlikely(var71 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs_by_property");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 726);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var69, self);
}
var_p = var72;
if (var_p == NULL) {
var73 = 0; /* is null */
} else {
var73 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_p,((val*)NULL)) on <var_p:nullable MPropDef> */
var_other = ((val*)NULL);
{
var76 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_p, var_other); /* == on <var_p:nullable MPropDef(MPropDef)>*/
}
var77 = !var76;
var74 = var77;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
var73 = var74;
}
if (var73){
/* <var_p:nullable MPropDef(MPropDef)> isa MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nitc__model__MProperty__MPROPDEF];
cltype79 = type_struct->color;
idtype80 = type_struct->id;
if(cltype79 >= var_p->type->table_size) {
var78 = 0;
} else {
var78 = var_p->type->type_table[cltype79] == idtype80;
}
if (unlikely(!var78)) {
var_class_name81 = var_p == NULL ? "null" : var_p->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPDEF", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2145);
fatal_exit(1);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_candidates, var_p); /* Direct call array$Array$add on <var_candidates:Array[MPropDef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_65&3)?class_info[((long)var_65&3)]:var_65->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_65); /* next on <var_65:Iterator[MClassDef]>*/
}
}
BREAK_label67: (void)0;
{
((void(*)(val* self))((((long)var_65&3)?class_info[((long)var_65&3)]:var_65->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_65); /* finish on <var_65:Iterator[MClassDef]>*/
}
}
{
{ /* Inline array$AbstractArrayRead$length (var_candidates) on <var_candidates:Array[MPropDef]> */
var84 = var_candidates->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_candidates:Array[MPropDef]> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline kernel$Int$<= (var82,1l) on <var82:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var87 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var87)) {
var_class_name90 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name90);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var91 = var82 <= 1l;
var85 = var91;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
}
if (var85){
{
{ /* Inline model$MProperty$lookup_definitions_cache (self) on <self:MProperty> */
var94 = self->attrs[COLOR_nitc__model__MProperty___lookup_definitions_cache].val; /* _lookup_definitions_cache on <self:MProperty> */
if (unlikely(var94 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2159);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
more_collections___more_collections__HashMap2____91d_93d_61d(var92, var_mmodule, var_mtype, var_candidates); /* Direct call more_collections$HashMap2$[]= on <var92:HashMap2[MModule, MType, Array[MPropDef]]>*/
}
var = var_candidates;
goto RET_LABEL;
} else {
}
{
var95 = nitc___nitc__MProperty___select_most_specific(self, var_mmodule, var_candidates);
}
var = var95;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MProperty$lookup_definitions_cache for (self: MProperty): HashMap2[MModule, MType, Array[MPropDef]] */
val* nitc___nitc__MProperty___lookup_definitions_cache(val* self) {
val* var /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var1 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
var1 = self->attrs[COLOR_nitc__model__MProperty___lookup_definitions_cache].val; /* _lookup_definitions_cache on <self:MProperty> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2159);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MProperty$lookup_super_definitions for (self: MProperty, MModule, MType): Array[MPropDef] */
val* nitc___nitc__MProperty___lookup_super_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var4 /* : Array[MPropDef] */;
val* var_candidates /* var candidates: Array[MPropDef] */;
val* var5 /* : Array[MPropDef] */;
val* var7 /* : Array[MPropDef] */;
val* var_ /* var : Array[MPropDef] */;
val* var8 /* : IndexedIterator[nullable Object] */;
val* var_9 /* var : IndexedIterator[MPropDef] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var12 /* : POSetElement[MModule] */;
val* var14 /* : POSetElement[MModule] */;
val* var15 /* : MClassDef */;
val* var17 /* : MClassDef */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var24 /* : MClassDef */;
val* var26 /* : MClassDef */;
val* var27 /* : MClassType */;
val* var29 /* : MClassType */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : MClassDef */;
val* var35 /* : MClassDef */;
val* var36 /* : MClassType */;
val* var38 /* : MClassType */;
short int var39 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var_44 /* var : Bool */;
val* var45 /* : MClassDef */;
val* var47 /* : MClassDef */;
val* var48 /* : MModule */;
val* var50 /* : MModule */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
long var56 /* : Int */;
long var58 /* : Int */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var62 /* : Bool */;
val* var63 /* : Array[MPropDef] */;
var_mmodule = p0;
var_mtype = p1;
{
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2172);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
var_mtype = var3;
var4 = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__nitc__model__MProperty__MPROPDEF]);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array$Array$init on <var4:Array[MPropDef]>*/
}
var_candidates = var4;
{
{ /* Inline model$MProperty$mpropdefs (self) on <self:MProperty> */
var7 = self->attrs[COLOR_nitc__model__MProperty___mpropdefs].val; /* _mpropdefs on <self:MProperty> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2092);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_ = var5;
{
var8 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:IndexedIterator[MPropDef]>*/
}
if (var10){
} else {
goto BREAK_label;
}
{
var11 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:IndexedIterator[MPropDef]>*/
}
var_mpropdef = var11;
{
{ /* Inline mmodule$MModule$in_importation (var_mmodule) on <var_mmodule:MModule> */
var14 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var17 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = poset___poset__POSetElement____60d_61d(var12, var18);
}
var22 = !var21;
if (var22){
goto BREAK_label23;
} else {
}
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var26 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var24) on <var24:MClassDef> */
var29 = var24->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var24:MClassDef> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nitc___nitc__MType___is_subtype(var_mtype, var_mmodule, ((val*)NULL), var27);
}
var31 = !var30;
if (var31){
goto BREAK_label23;
} else {
}
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var35 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var33) on <var33:MClassDef> */
var38 = var33->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var33:MClassDef> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var_mtype,var36) on <var_mtype:MType> */
var_other = var36;
{
{ /* Inline kernel$Object$is_same_instance (var_mtype,var_other) on <var_mtype:MType> */
var43 = var_mtype == var_other;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_44 = var39;
if (var39){
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var47 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var45) on <var45:MClassDef> */
var50 = var45->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var45:MClassDef> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var_mmodule,var48) on <var_mmodule:MModule> */
var_other = var48;
{
{ /* Inline kernel$Object$is_same_instance (var_mmodule,var_other) on <var_mmodule:MModule> */
var55 = var_mmodule == var_other;
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var32 = var51;
} else {
var32 = var_44;
}
if (var32){
goto BREAK_label23;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_candidates, var_mpropdef); /* Direct call array$Array$add on <var_candidates:Array[MPropDef]>*/
}
BREAK_label23: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:IndexedIterator[MPropDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:IndexedIterator[MPropDef]>*/
}
{
{ /* Inline array$AbstractArrayRead$length (var_candidates) on <var_candidates:Array[MPropDef]> */
var58 = var_candidates->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_candidates:Array[MPropDef]> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline kernel$Int$<= (var56,1l) on <var56:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var61 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var62 = var56 <= 1l;
var59 = var62;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
if (var59){
var = var_candidates;
goto RET_LABEL;
} else {
}
{
var63 = nitc___nitc__MProperty___select_most_specific(self, var_mmodule, var_candidates);
}
var = var63;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MProperty$select_most_specific for (self: MProperty, MModule, Array[MPropDef]): Array[MPropDef] */
val* nitc___nitc__MProperty___select_most_specific(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_mmodule /* var mmodule: MModule */;
val* var_candidates /* var candidates: Array[MPropDef] */;
val* var2 /* : Array[MPropDef] */;
val* var_res /* var res: Array[MPropDef] */;
val* var_ /* var : Array[MPropDef] */;
val* var3 /* : IndexedIterator[nullable Object] */;
val* var_4 /* var : IndexedIterator[MPropDef] */;
short int var5 /* : Bool */;
val* var6 /* : nullable Object */;
val* var_pd1 /* var pd1: MPropDef */;
val* var7 /* : MClassDef */;
val* var9 /* : MClassDef */;
val* var_cd1 /* var cd1: MClassDef */;
val* var10 /* : MClass */;
val* var12 /* : MClass */;
val* var_c1 /* var c1: MClass */;
short int var_keep /* var keep: Bool */;
val* var_13 /* var : Array[MPropDef] */;
val* var14 /* : IndexedIterator[nullable Object] */;
val* var_15 /* var : IndexedIterator[MPropDef] */;
short int var16 /* : Bool */;
val* var18 /* : nullable Object */;
val* var_pd2 /* var pd2: MPropDef */;
short int var19 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var25 /* : MClassDef */;
val* var27 /* : MClassDef */;
val* var_cd2 /* var cd2: MClassDef */;
val* var28 /* : MClass */;
val* var30 /* : MClass */;
val* var_c2 /* var c2: MClass */;
val* var31 /* : MClassType */;
val* var33 /* : MClassType */;
val* var34 /* : MClassType */;
val* var36 /* : MClassType */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : MModule */;
val* var44 /* : MModule */;
val* var45 /* : POSetElement[MModule] */;
val* var47 /* : POSetElement[MModule] */;
val* var48 /* : MModule */;
val* var50 /* : MModule */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : MClassType */;
val* var55 /* : MClassType */;
val* var56 /* : MClassType */;
val* var58 /* : MClassType */;
short int var59 /* : Bool */;
short int var_60 /* var : Bool */;
val* var61 /* : MClassType */;
val* var63 /* : MClassType */;
val* var64 /* : MClassType */;
val* var66 /* : MClassType */;
short int var67 /* : Bool */;
val* var_other69 /* var other: nullable Object */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
val* var73 /* : Sys */;
val* var74 /* : NativeArray[String] */;
static val* varonce;
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
val* var91 /* : String */;
val* var92 /* : String */;
/* Covariant cast for argument 1 (candidates) <p1:Array[MPropDef]> isa Array[MPROPDEF] */
/* <p1:Array[MPropDef]> isa Array[MPROPDEF] */
type_struct = self->type->resolution_table->types[COLOR_core__Array__nitc__model__MProperty__MPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var1 = 0;
} else {
var1 = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Array[MPROPDEF]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2194);
fatal_exit(1);
}
var_mmodule = p0;
var_candidates = p1;
var2 = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__nitc__model__MProperty__MPROPDEF]);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array$Array$init on <var2:Array[MPropDef]>*/
}
var_res = var2;
var_ = var_candidates;
{
var3 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_4 = var3;
for(;;) {
{
var5 = ((short int(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_4); /* is_ok on <var_4:IndexedIterator[MPropDef]>*/
}
if (var5){
} else {
goto BREAK_label;
}
{
var6 = ((val*(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_4); /* item on <var_4:IndexedIterator[MPropDef]>*/
}
var_pd1 = var6;
{
{ /* Inline model$MPropDef$mclassdef (var_pd1) on <var_pd1:MPropDef> */
var9 = var_pd1->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_pd1:MPropDef> */
if (unlikely(var9 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_cd1 = var7;
{
{ /* Inline model$MClassDef$mclass (var_cd1) on <var_cd1:MClassDef> */
var12 = var_cd1->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_cd1:MClassDef> */
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_c1 = var10;
var_keep = 1;
var_13 = var_candidates;
{
var14 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_13);
}
var_15 = var14;
for(;;) {
{
var16 = ((short int(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_15); /* is_ok on <var_15:IndexedIterator[MPropDef]>*/
}
if (var16){
} else {
goto BREAK_label17;
}
{
var18 = ((val*(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_15); /* item on <var_15:IndexedIterator[MPropDef]>*/
}
var_pd2 = var18;
{
{ /* Inline kernel$Object$== (var_pd2,var_pd1) on <var_pd2:MPropDef> */
var_other = var_pd1;
{
{ /* Inline kernel$Object$is_same_instance (var_pd2,var_other) on <var_pd2:MPropDef> */
var23 = var_pd2 == var_other;
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
goto BREAK_label24;
} else {
}
{
{ /* Inline model$MPropDef$mclassdef (var_pd2) on <var_pd2:MPropDef> */
var27 = var_pd2->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_pd2:MPropDef> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_cd2 = var25;
{
{ /* Inline model$MClassDef$mclass (var_cd2) on <var_cd2:MClassDef> */
var30 = var_cd2->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_cd2:MClassDef> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
var_c2 = var28;
{
{ /* Inline model$MClass$mclass_type (var_c2) on <var_c2:MClass> */
var33 = var_c2->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_c2:MClass> */
if (unlikely(var33 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model$MClass$mclass_type (var_c1) on <var_c1:MClass> */
var36 = var_c1->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_c1:MClass> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline kernel$Object$== (var31,var34) on <var31:MClassType> */
var_other = var34;
{
{ /* Inline kernel$Object$is_same_instance (var31,var_other) on <var31:MClassType> */
var41 = var31 == var_other;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
{
{ /* Inline model$MClassDef$mmodule (var_cd2) on <var_cd2:MClassDef> */
var44 = var_cd2->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_cd2:MClassDef> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline mmodule$MModule$in_importation (var42) on <var42:MModule> */
var47 = var42->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var42:MModule> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var_cd1) on <var_cd1:MClassDef> */
var50 = var_cd1->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_cd1:MClassDef> */
if (unlikely(var50 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = poset___poset__POSetElement____60d(var45, var48);
}
if (var51){
var_keep = 0;
goto BREAK_label17;
} else {
}
} else {
{
{ /* Inline model$MClassDef$bound_mtype (var_cd2) on <var_cd2:MClassDef> */
var55 = var_cd2->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_cd2:MClassDef> */
if (unlikely(var55 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var_cd1) on <var_cd1:MClassDef> */
var58 = var_cd1->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_cd1:MClassDef> */
if (unlikely(var58 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = nitc___nitc__MType___is_subtype(var53, var_mmodule, ((val*)NULL), var56);
}
var_60 = var59;
if (var59){
{
{ /* Inline model$MClassDef$bound_mtype (var_cd2) on <var_cd2:MClassDef> */
var63 = var_cd2->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_cd2:MClassDef> */
if (unlikely(var63 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var_cd1) on <var_cd1:MClassDef> */
var66 = var_cd1->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_cd1:MClassDef> */
if (unlikely(var66 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline kernel$Object$!= (var61,var64) on <var61:MClassType> */
var_other69 = var64;
{
var70 = ((short int(*)(val* self, val* p0))(var61->class->vft[COLOR_core__kernel__Object___61d_61d]))(var61, var_other69); /* == on <var61:MClassType>*/
}
var71 = !var70;
var67 = var71;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var52 = var67;
} else {
var52 = var_60;
}
if (var52){
var_keep = 0;
goto BREAK_label17;
} else {
}
}
BREAK_label24: (void)0;
{
((void(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_15); /* next on <var_15:IndexedIterator[MPropDef]>*/
}
}
BREAK_label17: (void)0;
{
((void(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_15); /* finish on <var_15:IndexedIterator[MPropDef]>*/
}
if (var_keep){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_pd1); /* Direct call array$Array$add on <var_res:Array[MPropDef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_4); /* next on <var_4:IndexedIterator[MPropDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_4&3)?class_info[((long)var_4&3)]:var_4->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_4); /* finish on <var_4:IndexedIterator[MPropDef]>*/
}
{
var72 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_res);
}
if (var72){
var73 = glob_sys;
if (unlikely(varonce==NULL)) {
var74 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "All lost! ";
var79 = (val*)(10l<<2|1);
var80 = (val*)(10l<<2|1);
var81 = (val*)((long)(0)<<2|3);
var82 = (val*)((long)(0)<<2|3);
var78 = core__flat___CString___to_s_unsafe(var77, var79, var80, var81, var82);
var76 = var78;
varonce75 = var76;
}
((struct instance_core__NativeArray*)var74)->values[0]=var76;
} else {
var74 = varonce;
varonce = NULL;
}
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = ", ";
var87 = (val*)(2l<<2|1);
var88 = (val*)(2l<<2|1);
var89 = (val*)((long)(0)<<2|3);
var90 = (val*)((long)(0)<<2|3);
var86 = core__flat___CString___to_s_unsafe(var85, var87, var88, var89, var90);
var84 = var86;
varonce83 = var84;
}
{
var91 = core__abstract_text___Collection___join(var_candidates, var84, ((val*)NULL));
}
((struct instance_core__NativeArray*)var74)->values[1]=var91;
{
var92 = ((val*(*)(val* self))(var74->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var74); /* native_to_s on <var74:NativeArray[String]>*/
}
varonce = var74;
{
core__file___Sys___print_error(var73, var92); /* Direct call file$Sys$print_error on <var73:Sys>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MProperty$lookup_first_definition for (self: MProperty, MModule, MType): MPropDef */
val* nitc___nitc__MProperty___lookup_first_definition(val* self, val* p0, val* p1) {
val* var /* : MPropDef */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : Array[MPropDef] */;
val* var2 /* : nullable Object */;
var_mmodule = p0;
var_mtype = p1;
{
var1 = nitc___nitc__MProperty___lookup_all_definitions(self, var_mmodule, var_mtype);
}
{
var2 = core___core__SequenceRead___Collection__first(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MProperty$lookup_all_definitions for (self: MProperty, MModule, MType): Array[MPropDef] */
val* nitc___nitc__MProperty___lookup_all_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
val* var2 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var4 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var5 /* : nullable Object */;
val* var_cache /* var cache: nullable Array[MPropDef] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : Array[MPropDef] */;
val* var_candidates /* var candidates: Array[MPropDef] */;
val* var15 /* : Array[MPropDef] */;
val* var17 /* : Array[MPropDef] */;
val* var_ /* var : Array[MPropDef] */;
val* var18 /* : IndexedIterator[nullable Object] */;
val* var_19 /* var : IndexedIterator[MPropDef] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var22 /* : POSetElement[MModule] */;
val* var24 /* : POSetElement[MModule] */;
val* var25 /* : MClassDef */;
val* var27 /* : MClassDef */;
val* var28 /* : MModule */;
val* var30 /* : MModule */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var34 /* : MClassDef */;
val* var36 /* : MClassDef */;
val* var37 /* : MClassType */;
val* var39 /* : MClassType */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
long var42 /* : Int */;
long var44 /* : Int */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var48 /* : Bool */;
val* var49 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var51 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var52 /* : Array[nullable Object] */;
val* var53 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var55 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
var_mmodule = p0;
var_mtype = p1;
{
var1 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
var_mtype = var1;
{
{ /* Inline model$MProperty$lookup_all_definitions_cache (self) on <self:MProperty> */
var4 = self->attrs[COLOR_nitc__model__MProperty___lookup_all_definitions_cache].val; /* _lookup_all_definitions_cache on <self:MProperty> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_all_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2282);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = more_collections___more_collections__HashMap2____91d_93d(var2, var_mmodule, var_mtype);
}
var_cache = var5;
if (var_cache == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_cache,((val*)NULL)) on <var_cache:nullable Array[MPropDef]> */
var_other = ((val*)NULL);
{
var9 = ((short int(*)(val* self, val* p0))(var_cache->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cache, var_other); /* == on <var_cache:nullable Array[MPropDef](Array[MPropDef])>*/
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
var = var_cache;
goto RET_LABEL;
} else {
}
{
var11 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var12 = !var11;
if (unlikely(!var12)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2256);
fatal_exit(1);
}
{
var13 = nitc___nitc__MType___has_mproperty(var_mtype, var_mmodule, self);
}
if (unlikely(!var13)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2257);
fatal_exit(1);
}
var14 = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__nitc__model__MProperty__MPROPDEF]);
{
core___core__Array___core__kernel__Object__init(var14); /* Direct call array$Array$init on <var14:Array[MPropDef]>*/
}
var_candidates = var14;
{
{ /* Inline model$MProperty$mpropdefs (self) on <self:MProperty> */
var17 = self->attrs[COLOR_nitc__model__MProperty___mpropdefs].val; /* _mpropdefs on <self:MProperty> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2092);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_ = var15;
{
var18 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_19 = var18;
for(;;) {
{
var20 = ((short int(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_19); /* is_ok on <var_19:IndexedIterator[MPropDef]>*/
}
if (var20){
} else {
goto BREAK_label;
}
{
var21 = ((val*(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_19); /* item on <var_19:IndexedIterator[MPropDef]>*/
}
var_mpropdef = var21;
{
{ /* Inline mmodule$MModule$in_importation (var_mmodule) on <var_mmodule:MModule> */
var24 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var27 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model$MClassDef$mmodule (var25) on <var25:MClassDef> */
var30 = var25->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var25:MClassDef> */
if (unlikely(var30 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = poset___poset__POSetElement____60d_61d(var22, var28);
}
var32 = !var31;
if (var32){
goto BREAK_label33;
} else {
}
{
{ /* Inline model$MPropDef$mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var36 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var36 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model$MClassDef$bound_mtype (var34) on <var34:MClassDef> */
var39 = var34->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var34:MClassDef> */
if (unlikely(var39 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = nitc___nitc__MType___is_subtype(var_mtype, var_mmodule, ((val*)NULL), var37);
}
var41 = !var40;
if (var41){
goto BREAK_label33;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_candidates, var_mpropdef); /* Direct call array$Array$add on <var_candidates:Array[MPropDef]>*/
}
BREAK_label33: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_19); /* next on <var_19:IndexedIterator[MPropDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_19); /* finish on <var_19:IndexedIterator[MPropDef]>*/
}
{
{ /* Inline array$AbstractArrayRead$length (var_candidates) on <var_candidates:Array[MPropDef]> */
var44 = var_candidates->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_candidates:Array[MPropDef]> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline kernel$Int$<= (var42,1l) on <var42:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var47 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var48 = var42 <= 1l;
var45 = var48;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
{
{ /* Inline model$MProperty$lookup_all_definitions_cache (self) on <self:MProperty> */
var51 = self->attrs[COLOR_nitc__model__MProperty___lookup_all_definitions_cache].val; /* _lookup_all_definitions_cache on <self:MProperty> */
if (unlikely(var51 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_all_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2282);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
more_collections___more_collections__HashMap2____91d_93d_61d(var49, var_mmodule, var_mtype, var_candidates); /* Direct call more_collections$HashMap2$[]= on <var49:HashMap2[MModule, MType, Array[MPropDef]]>*/
}
var = var_candidates;
goto RET_LABEL;
} else {
}
{
nitc__model___MModule___linearize_mpropdefs(var_mmodule, var_candidates); /* Direct call model$MModule$linearize_mpropdefs on <var_mmodule:MModule>*/
}
{
var52 = core___core__AbstractArrayRead___reversed(var_candidates);
}
var_candidates = var52;
{
{ /* Inline model$MProperty$lookup_all_definitions_cache (self) on <self:MProperty> */
var55 = self->attrs[COLOR_nitc__model__MProperty___lookup_all_definitions_cache].val; /* _lookup_all_definitions_cache on <self:MProperty> */
if (unlikely(var55 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_all_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2282);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
more_collections___more_collections__HashMap2____91d_93d_61d(var53, var_mmodule, var_mtype, var_candidates); /* Direct call more_collections$HashMap2$[]= on <var53:HashMap2[MModule, MType, Array[MPropDef]]>*/
}
var = var_candidates;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MProperty$lookup_all_definitions_cache for (self: MProperty): HashMap2[MModule, MType, Array[MPropDef]] */
val* nitc___nitc__MProperty___lookup_all_definitions_cache(val* self) {
val* var /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var1 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
var1 = self->attrs[COLOR_nitc__model__MProperty___lookup_all_definitions_cache].val; /* _lookup_all_definitions_cache on <self:MProperty> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_all_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2282);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model$MMethod$is_toplevel for (self: MMethod): Bool */
short int nitc___nitc__MMethod___is_toplevel(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__model__MMethod___is_toplevel].s; /* _is_toplevel on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MMethod$is_toplevel= for (self: MMethod, Bool) */
void nitc___nitc__MMethod___is_toplevel_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__model__MMethod___is_toplevel].s = p0; /* _is_toplevel on <self:MMethod> */
RET_LABEL:;
}
/* method model$MMethod$is_init for (self: MMethod): Bool */
short int nitc___nitc__MMethod___is_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MMethod$is_init= for (self: MMethod, Bool) */
void nitc___nitc__MMethod___is_init_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__model__MMethod___is_init].s = p0; /* _is_init on <self:MMethod> */
RET_LABEL:;
}
/* method model$MMethod$is_root_init for (self: MMethod): Bool */
short int nitc___nitc__MMethod___is_root_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MMethod$is_root_init= for (self: MMethod, Bool) */
void nitc___nitc__MMethod___is_root_init_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__model__MMethod___is_root_init].s = p0; /* _is_root_init on <self:MMethod> */
RET_LABEL:;
}
/* method model$MMethod$is_new for (self: MMethod): Bool */
short int nitc___nitc__MMethod___is_new(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__model__MMethod___is_new].s; /* _is_new on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method model$MMethod$is_new= for (self: MMethod, Bool) */
void nitc___nitc__MMethod___is_new_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__model__MMethod___is_new].s = p0; /* _is_new on <self:MMethod> */
RET_LABEL:;
}
/* method model$MMethod$is_init_for for (self: MMethod, MClass): Bool */
short int nitc___nitc__MMethod___is_init_for(val* self, val* p0) {
short int var /* : Bool */;
val* var_mclass /* var mclass: MClass */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
var_mclass = p0;
{
{ /* Inline model$MMethod$is_init (self) on <self:MMethod> */
var3 = self->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <self:MMethod> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model$MMethod$is_null_safe for (self: MMethod): Bool */
short int nitc___nitc__MMethod___is_null_safe(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : String */;
val* var5 /* : String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
val* var14 /* : String */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Bool */;
val* var24 /* : nullable Bool */;
short int var25 /* : Bool */;
short int var_26 /* var : Bool */;
val* var27 /* : String */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Bool */;
val* var37 /* : nullable Bool */;
short int var38 /* : Bool */;
{
{ /* Inline model$MProperty$name (self) on <self:MMethod> */
var5 = self->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <self:MMethod> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "==";
var9 = (val*)(2l<<2|1);
var10 = (val*)(2l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce = var6;
}
{
var13 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_core__kernel__Object___61d_61d]))(var3, var6); /* == on <var3:String>*/
}
var_ = var13;
if (var13){
var2 = var_;
} else {
{
{ /* Inline model$MProperty$name (self) on <self:MMethod> */
var16 = self->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <self:MMethod> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "!=";
var21 = (val*)(2l<<2|1);
var22 = (val*)(2l<<2|1);
var23 = (val*)((long)(0)<<2|3);
var24 = (val*)((long)(0)<<2|3);
var20 = core__flat___CString___to_s_unsafe(var19, var21, var22, var23, var24);
var18 = var20;
varonce17 = var18;
}
{
var25 = ((short int(*)(val* self, val* p0))(var14->class->vft[COLOR_core__kernel__Object___61d_61d]))(var14, var18); /* == on <var14:String>*/
}
var2 = var25;
}
var_26 = var2;
if (var2){
var1 = var_26;
} else {
{
{ /* Inline model$MProperty$name (self) on <self:MMethod> */
var29 = self->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <self:MMethod> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "is_same_instance";
var34 = (val*)(16l<<2|1);
var35 = (val*)(16l<<2|1);
var36 = (val*)((long)(0)<<2|3);
var37 = (val*)((long)(0)<<2|3);
var33 = core__flat___CString___to_s_unsafe(var32, var34, var35, var36, var37);
var31 = var33;
varonce30 = var31;
}
{
var38 = ((short int(*)(val* self, val* p0))(var27->class->vft[COLOR_core__kernel__Object___61d_61d]))(var27, var31); /* == on <var27:String>*/
}
var1 = var38;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
