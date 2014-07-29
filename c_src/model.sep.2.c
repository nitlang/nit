#include "model.sep.0.h"
/* method model#MNullableType#can_resolve_for for (self: MNullableType, MType, nullable MClassType, MModule): Bool */
short int model__MNullableType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
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
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var3 = self->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1375);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int (*)(val*, val*, val*, val*))(var1->class->vft[COLOR_model__MType__can_resolve_for]))(var1, var_mtype, var_anchor, var_mmodule) /* can_resolve_for on <var1:MType>*/;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#can_resolve_for for (self: Object, MType, nullable MClassType, MModule): Bool */
short int VIRTUAL_model__MNullableType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MNullableType__can_resolve_for(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#length for (self: MNullableType): Int */
long model__MNullableType__length(val* self) {
long var /* : Int */;
val* var1 /* : MType */;
val* var3 /* : MType */;
long var4 /* : Int */;
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var3 = self->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1375);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((long (*)(val*))(var1->class->vft[COLOR_model__MType__length]))(var1) /* length on <var1:MType>*/;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#length for (self: Object): Int */
long VIRTUAL_model__MNullableType__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model__MNullableType__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#collect_mclassdefs for (self: MNullableType, MModule): Set[MClassDef] */
val* model__MNullableType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var5 /* : MType */;
val* var6 /* : Set[MClassDef] */;
var_mmodule = p0;
{
var1 = model__MNullableType__need_anchor(self);
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1408);
show_backtrace(1);
}
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var5 = self->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1375);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_model__MType__collect_mclassdefs]))(var3, var_mmodule) /* collect_mclassdefs on <var3:MType>*/;
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#collect_mclassdefs for (self: Object, MModule): Set[MClassDef] */
val* VIRTUAL_model__MNullableType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var1 /* : Set[MClassDef] */;
var1 = model__MNullableType__collect_mclassdefs(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#collect_mclasses for (self: MNullableType, MModule): Set[MClass] */
val* model__MNullableType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var5 /* : MType */;
val* var6 /* : Set[MClass] */;
var_mmodule = p0;
{
var1 = model__MNullableType__need_anchor(self);
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1414);
show_backtrace(1);
}
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var5 = self->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1375);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_model__MType__collect_mclasses]))(var3, var_mmodule) /* collect_mclasses on <var3:MType>*/;
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#collect_mclasses for (self: Object, MModule): Set[MClass] */
val* VIRTUAL_model__MNullableType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var1 /* : Set[MClass] */;
var1 = model__MNullableType__collect_mclasses(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullableType#collect_mtypes for (self: MNullableType, MModule): Set[MClassType] */
val* model__MNullableType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var5 /* : MType */;
val* var6 /* : Set[MClassType] */;
var_mmodule = p0;
{
var1 = model__MNullableType__need_anchor(self);
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1420);
show_backtrace(1);
}
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var5 = self->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1375);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val* (*)(val*, val*))(var3->class->vft[COLOR_model__MType__collect_mtypes]))(var3, var_mmodule) /* collect_mtypes on <var3:MType>*/;
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullableType#collect_mtypes for (self: Object, MModule): Set[MClassType] */
val* VIRTUAL_model__MNullableType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var1 /* : Set[MClassType] */;
var1 = model__MNullableType__collect_mtypes(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#model for (self: MNullType): Model */
val* model__MNullType__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_model__MNullType___model].val; /* _model on <self:MNullType> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1430);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#model for (self: Object): Model */
val* VIRTUAL_model__MNullType__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
val* var3 /* : Model */;
{ /* Inline model#MNullType#model (self) on <self:Object(MNullType)> */
var3 = self->attrs[COLOR_model__MNullType___model].val; /* _model on <self:Object(MNullType)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1430);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#model= for (self: MNullType, Model) */
void model__MNullType__model_61d(val* self, val* p0) {
self->attrs[COLOR_model__MNullType___model].val = p0; /* _model on <self:MNullType> */
RET_LABEL:;
}
/* method model#MNullType#model= for (self: Object, Model) */
void VIRTUAL_model__MNullType__model_61d(val* self, val* p0) {
{ /* Inline model#MNullType#model= (self,p0) on <self:Object(MNullType)> */
self->attrs[COLOR_model__MNullType___model].val = p0; /* _model on <self:Object(MNullType)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MNullType#init for (self: MNullType, Model) */
void model__MNullType__init(val* self, val* p0) {
val* var_model /* var model: Model */;
{
{ /* Inline model_base#MEntity#init (self) on <self:MNullType> */
RET_LABEL1:(void)0;
}
}
var_model = p0;
{
{ /* Inline model#MNullType#model= (self,var_model) on <self:MNullType> */
self->attrs[COLOR_model__MNullType___model].val = var_model; /* _model on <self:MNullType> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method model#MNullType#init for (self: Object, Model) */
void VIRTUAL_model__MNullType__init(val* self, val* p0) {
model__MNullType__init(self, p0); /* Direct call model#MNullType#init on <self:Object(MNullType)>*/
RET_LABEL:;
}
/* method model#MNullType#to_s for (self: MNullType): String */
val* model__MNullType__to_s(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "null";
var3 = 4;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#to_s for (self: Object): String */
val* VIRTUAL_model__MNullType__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MNullType__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#as_nullable for (self: MNullType): MType */
val* model__MNullType__as_nullable(val* self) {
val* var /* : MType */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#as_nullable for (self: Object): MType */
val* VIRTUAL_model__MNullType__as_nullable(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MNullType__as_nullable(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#need_anchor for (self: MNullType): Bool */
short int model__MNullType__need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 0;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#need_anchor for (self: Object): Bool */
short int VIRTUAL_model__MNullType__need_anchor(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MNullType__need_anchor(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#resolve_for for (self: MNullType, MType, nullable MClassType, MModule, Bool): MType */
val* model__MNullType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
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
/* method model#MNullType#resolve_for for (self: Object, MType, nullable MClassType, MModule, Bool): MType */
val* VIRTUAL_model__MNullType__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = model__MNullType__resolve_for(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#can_resolve_for for (self: MNullType, MType, nullable MClassType, MModule): Bool */
short int model__MNullType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var1 /* : Bool */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#can_resolve_for for (self: Object, MType, nullable MClassType, MModule): Bool */
short int VIRTUAL_model__MNullType__can_resolve_for(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MNullType__can_resolve_for(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mclassdefs for (self: MNullType, MModule): Set[MClassDef] */
val* model__MNullType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClassDef] */;
var_mmodule = p0;
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClassDef);
{
hash_collection__HashSet__init(var1); /* Direct call hash_collection#HashSet#init on <var1:HashSet[MClassDef]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mclassdefs for (self: Object, MModule): Set[MClassDef] */
val* VIRTUAL_model__MNullType__collect_mclassdefs(val* self, val* p0) {
val* var /* : Set[MClassDef] */;
val* var1 /* : Set[MClassDef] */;
var1 = model__MNullType__collect_mclassdefs(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mclasses for (self: MNullType, MModule): Set[MClass] */
val* model__MNullType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClass] */;
var_mmodule = p0;
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClass);
{
hash_collection__HashSet__init(var1); /* Direct call hash_collection#HashSet#init on <var1:HashSet[MClass]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mclasses for (self: Object, MModule): Set[MClass] */
val* VIRTUAL_model__MNullType__collect_mclasses(val* self, val* p0) {
val* var /* : Set[MClass] */;
val* var1 /* : Set[MClass] */;
var1 = model__MNullType__collect_mclasses(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mtypes for (self: MNullType, MModule): Set[MClassType] */
val* model__MNullType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashSet[MClassType] */;
var_mmodule = p0;
var1 = NEW_hash_collection__HashSet(&type_hash_collection__HashSetmodel__MClassType);
{
hash_collection__HashSet__init(var1); /* Direct call hash_collection#HashSet#init on <var1:HashSet[MClassType]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MNullType#collect_mtypes for (self: Object, MModule): Set[MClassType] */
val* VIRTUAL_model__MNullType__collect_mtypes(val* self, val* p0) {
val* var /* : Set[MClassType] */;
val* var1 /* : Set[MClassType] */;
var1 = model__MNullType__collect_mtypes(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#mparameters for (self: MSignature): Array[MParameter] */
val* model__MSignature__mparameters(val* self) {
val* var /* : Array[MParameter] */;
val* var1 /* : Array[MParameter] */;
var1 = self->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#mparameters for (self: Object): Array[MParameter] */
val* VIRTUAL_model__MSignature__mparameters(val* self) {
val* var /* : Array[MParameter] */;
val* var1 /* : Array[MParameter] */;
val* var3 /* : Array[MParameter] */;
{ /* Inline model#MSignature#mparameters (self) on <self:Object(MSignature)> */
var3 = self->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <self:Object(MSignature)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#mparameters= for (self: MSignature, Array[MParameter]) */
void model__MSignature__mparameters_61d(val* self, val* p0) {
self->attrs[COLOR_model__MSignature___mparameters].val = p0; /* _mparameters on <self:MSignature> */
RET_LABEL:;
}
/* method model#MSignature#mparameters= for (self: Object, Array[MParameter]) */
void VIRTUAL_model__MSignature__mparameters_61d(val* self, val* p0) {
{ /* Inline model#MSignature#mparameters= (self,p0) on <self:Object(MSignature)> */
self->attrs[COLOR_model__MSignature___mparameters].val = p0; /* _mparameters on <self:Object(MSignature)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MSignature#return_mtype for (self: MSignature): nullable MType */
val* model__MSignature__return_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#return_mtype for (self: Object): nullable MType */
val* VIRTUAL_model__MSignature__return_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
{ /* Inline model#MSignature#return_mtype (self) on <self:Object(MSignature)> */
var3 = self->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <self:Object(MSignature)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#return_mtype= for (self: MSignature, nullable MType) */
void model__MSignature__return_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_model__MSignature___return_mtype].val = p0; /* _return_mtype on <self:MSignature> */
RET_LABEL:;
}
/* method model#MSignature#return_mtype= for (self: Object, nullable MType) */
void VIRTUAL_model__MSignature__return_mtype_61d(val* self, val* p0) {
{ /* Inline model#MSignature#return_mtype= (self,p0) on <self:Object(MSignature)> */
self->attrs[COLOR_model__MSignature___return_mtype].val = p0; /* _return_mtype on <self:Object(MSignature)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MSignature#length for (self: MSignature): Int */
long model__MSignature__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var_res /* var res: Int */;
val* var2 /* : nullable MType */;
val* var4 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var16 /* : Int */;
val* var17 /* : Array[MParameter] */;
val* var19 /* : Array[MParameter] */;
val* var20 /* : ArrayIterator[nullable Object] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var23 /* : MType */;
val* var25 /* : MType */;
long var26 /* : Int */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
var1 = 1;
var_res = var1;
{
{ /* Inline model#MSignature#return_mtype (self) on <self:MSignature> */
var4 = self->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_t = var2;
var5 = NULL;
if (var_t == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_t,var5) on <var_t:nullable MType> */
var_other = var5;
{
var10 = ((short int (*)(val*, val*))(var_t->class->vft[COLOR_kernel__Object___61d_61d]))(var_t, var_other) /* == on <var_t:nullable MType(MType)>*/;
var9 = var10;
}
var11 = !var9;
var7 = var11;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
{
var12 = ((long (*)(val*))(var_t->class->vft[COLOR_model__MType__length]))(var_t) /* length on <var_t:nullable MType(MType)>*/;
}
{
{ /* Inline kernel#Int#+ (var_res,var12) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var16 = var_res + var12;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_res = var13;
} else {
}
{
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var19 = self->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = array__AbstractArrayRead__iterator(var17);
}
for(;;) {
{
var21 = array__ArrayIterator__is_ok(var20);
}
if(!var21) break;
{
var22 = array__ArrayIterator__item(var20);
}
var_p = var22;
{
{ /* Inline model#MParameter#mtype (var_p) on <var_p:MParameter> */
var25 = var_p->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = ((long (*)(val*))(var23->class->vft[COLOR_model__MType__length]))(var23) /* length on <var23:MType>*/;
}
{
{ /* Inline kernel#Int#+ (var_res,var26) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var26:Int> isa OTHER */
/* <var26:Int> isa OTHER */
var29 = 1; /* easy <var26:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var33 = var_res + var26;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_res = var27;
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var20); /* Direct call array#ArrayIterator#next on <var20:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MSignature#length for (self: Object): Int */
long VIRTUAL_model__MSignature__length(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model__MSignature__length(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#init for (self: MSignature, Array[MParameter], nullable MType) */
void model__MSignature__init(val* self, val* p0, val* p1) {
val* var_mparameters /* var mparameters: Array[MParameter] */;
val* var_return_mtype /* var return_mtype: nullable MType */;
long var /* : Int */;
long var2 /* : Int */;
long var4 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
val* var5 /* : Range[Int] */;
long var6 /* : Int */;
long var7 /* : Int */;
val* var8 /* : Discrete */;
val* var9 /* : Discrete */;
val* var10 /* : Iterator[Discrete] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
long var_i /* var i: Int */;
long var13 /* : Int */;
val* var14 /* : nullable Object */;
val* var_parameter /* var parameter: MParameter */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
long var18 /* : Int */;
long var19 /* : Int */;
long var21 /* : Int */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
{
{ /* Inline model_base#MEntity#init (self) on <self:MSignature> */
RET_LABEL1:(void)0;
}
}
var_mparameters = p0;
var_return_mtype = p1;
var = 1;
{
{ /* Inline kernel#Int#unary - (var) on <var:Int> */
var4 = -var;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_vararg_rank = var2;
var5 = NEW_range__Range(&type_range__Rangekernel__Int);
var6 = 0;
{
var7 = array__AbstractArrayRead__length(var_mparameters);
}
{
var8 = BOX_kernel__Int(var6); /* autobox from Int to Discrete */
var9 = BOX_kernel__Int(var7); /* autobox from Int to Discrete */
range__Range__without_last(var5, var8, var9); /* Direct call range#Range#without_last on <var5:Range[Int]>*/
}
{
var10 = range__Range__iterator(var5);
}
for(;;) {
{
var11 = ((short int (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var10) /* is_ok on <var10:Iterator[Discrete]>*/;
}
if(!var11) break;
{
var12 = ((val* (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__item]))(var10) /* item on <var10:Iterator[Discrete]>*/;
}
var13 = ((struct instance_kernel__Int*)var12)->value; /* autounbox from nullable Object to Int */;
var_i = var13;
{
var14 = array__Array___91d_93d(var_mparameters, var_i);
}
var_parameter = var14;
{
{ /* Inline model#MParameter#is_vararg (var_parameter) on <var_parameter:MParameter> */
var17 = var_parameter->attrs[COLOR_model__MParameter___is_vararg].s; /* _is_vararg on <var_parameter:MParameter> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (var15){
var18 = 1;
{
{ /* Inline kernel#Int#unary - (var18) on <var18:Int> */
var21 = -var18;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_vararg_rank,var19) on <var_vararg_rank:Int> */
var25 = var_vararg_rank == var19;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (unlikely(!var22)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1488);
show_backtrace(1);
}
var_vararg_rank = var_i;
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var10->class->vft[COLOR_abstract_collection__Iterator__next]))(var10) /* next on <var10:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
{
{ /* Inline model#MSignature#mparameters= (self,var_mparameters) on <self:MSignature> */
self->attrs[COLOR_model__MSignature___mparameters].val = var_mparameters; /* _mparameters on <self:MSignature> */
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype= (self,var_return_mtype) on <self:MSignature> */
self->attrs[COLOR_model__MSignature___return_mtype].val = var_return_mtype; /* _return_mtype on <self:MSignature> */
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MSignature#vararg_rank= (self,var_vararg_rank) on <self:MSignature> */
self->attrs[COLOR_model__MSignature___vararg_rank].l = var_vararg_rank; /* _vararg_rank on <self:MSignature> */
RET_LABEL28:(void)0;
}
}
RET_LABEL:;
}
/* method model#MSignature#init for (self: Object, Array[MParameter], nullable MType) */
void VIRTUAL_model__MSignature__init(val* self, val* p0, val* p1) {
model__MSignature__init(self, p0, p1); /* Direct call model#MSignature#init on <self:Object(MSignature)>*/
RET_LABEL:;
}
/* method model#MSignature#vararg_rank for (self: MSignature): Int */
long model__MSignature__vararg_rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <self:MSignature> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#vararg_rank for (self: Object): Int */
long VIRTUAL_model__MSignature__vararg_rank(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline model#MSignature#vararg_rank (self) on <self:Object(MSignature)> */
var3 = self->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <self:Object(MSignature)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#vararg_rank= for (self: MSignature, Int) */
void model__MSignature__vararg_rank_61d(val* self, long p0) {
self->attrs[COLOR_model__MSignature___vararg_rank].l = p0; /* _vararg_rank on <self:MSignature> */
RET_LABEL:;
}
/* method model#MSignature#vararg_rank= for (self: Object, Int) */
void VIRTUAL_model__MSignature__vararg_rank_61d(val* self, long p0) {
{ /* Inline model#MSignature#vararg_rank= (self,p0) on <self:Object(MSignature)> */
self->attrs[COLOR_model__MSignature___vararg_rank].l = p0; /* _vararg_rank on <self:Object(MSignature)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MSignature#arity for (self: MSignature): Int */
long model__MSignature__arity(val* self) {
long var /* : Int */;
val* var1 /* : Array[MParameter] */;
val* var3 /* : Array[MParameter] */;
long var4 /* : Int */;
{
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var3 = self->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = array__AbstractArrayRead__length(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MSignature#arity for (self: Object): Int */
long VIRTUAL_model__MSignature__arity(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = model__MSignature__arity(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#to_s for (self: MSignature): String */
val* model__MSignature__to_s(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_b /* var b: FlatBuffer */;
val* var2 /* : Array[MParameter] */;
val* var4 /* : Array[MParameter] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : Range[Int] */;
long var12 /* : Int */;
val* var13 /* : Array[MParameter] */;
val* var15 /* : Array[MParameter] */;
long var16 /* : Int */;
val* var17 /* : Discrete */;
val* var18 /* : Discrete */;
val* var19 /* : Iterator[Discrete] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
long var_i /* var i: Int */;
long var22 /* : Int */;
val* var23 /* : Array[MParameter] */;
val* var25 /* : Array[MParameter] */;
val* var26 /* : nullable Object */;
val* var_mparameter /* var mparameter: MParameter */;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var31 /* : Bool */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : FlatString */;
val* var37 /* : String */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
val* var45 /* : MType */;
val* var47 /* : MType */;
val* var48 /* : String */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : FlatString */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : FlatString */;
val* var62 /* : nullable MType */;
val* var64 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var65 /* : null */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
long var75 /* : Int */;
val* var76 /* : FlatString */;
val* var77 /* : String */;
val* var78 /* : String */;
var1 = NEW_string__FlatBuffer(&type_string__FlatBuffer);
{
string__FlatBuffer__init(var1); /* Direct call string#FlatBuffer#init on <var1:FlatBuffer>*/
}
var_b = var1;
{
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var4 = self->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = array__AbstractArrayRead__is_empty(var2);
}
var6 = !var5;
if (var6){
if (varonce) {
var7 = varonce;
} else {
var8 = "(";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
{
string__FlatBuffer__append(var_b, var7); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
var11 = NEW_range__Range(&type_range__Rangekernel__Int);
var12 = 0;
{
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var15 = self->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = array__AbstractArrayRead__length(var13);
}
{
var17 = BOX_kernel__Int(var12); /* autobox from Int to Discrete */
var18 = BOX_kernel__Int(var16); /* autobox from Int to Discrete */
range__Range__without_last(var11, var17, var18); /* Direct call range#Range#without_last on <var11:Range[Int]>*/
}
{
var19 = range__Range__iterator(var11);
}
for(;;) {
{
var20 = ((short int (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var19) /* is_ok on <var19:Iterator[Discrete]>*/;
}
if(!var20) break;
{
var21 = ((val* (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__item]))(var19) /* item on <var19:Iterator[Discrete]>*/;
}
var22 = ((struct instance_kernel__Int*)var21)->value; /* autounbox from nullable Object to Int */;
var_i = var22;
{
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var25 = self->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = array__Array___91d_93d(var23, var_i);
}
var_mparameter = var26;
var27 = 0;
{
{ /* Inline kernel#Int#> (var_i,var27) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var27:Int> isa OTHER */
/* <var27:Int> isa OTHER */
var30 = 1; /* easy <var27:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var31 = var_i > var27;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
if (varonce32) {
var33 = varonce32;
} else {
var34 = ", ";
var35 = 2;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
{
string__FlatBuffer__append(var_b, var33); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
}
{
{ /* Inline model#MParameter#name (var_mparameter) on <var_mparameter:MParameter> */
var39 = var_mparameter->attrs[COLOR_model__MParameter___name].val; /* _name on <var_mparameter:MParameter> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1549);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
string__FlatBuffer__append(var_b, var37); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = ": ";
var43 = 2;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
{
string__FlatBuffer__append(var_b, var41); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
{
{ /* Inline model#MParameter#mtype (var_mparameter) on <var_mparameter:MParameter> */
var47 = var_mparameter->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var_mparameter:MParameter> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = ((val* (*)(val*))(var45->class->vft[COLOR_string__Object__to_s]))(var45) /* to_s on <var45:MType>*/;
}
{
string__FlatBuffer__append(var_b, var48); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
{
{ /* Inline model#MParameter#is_vararg (var_mparameter) on <var_mparameter:MParameter> */
var51 = var_mparameter->attrs[COLOR_model__MParameter___is_vararg].s; /* _is_vararg on <var_mparameter:MParameter> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
if (var49){
if (varonce52) {
var53 = varonce52;
} else {
var54 = "...";
var55 = 3;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
{
string__FlatBuffer__append(var_b, var53); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__next]))(var19) /* next on <var19:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
if (varonce57) {
var58 = varonce57;
} else {
var59 = ")";
var60 = 1;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
{
string__FlatBuffer__append(var_b, var58); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
}
{
{ /* Inline model#MSignature#return_mtype (self) on <self:MSignature> */
var64 = self->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_ret = var62;
var65 = NULL;
if (var_ret == NULL) {
var66 = 0; /* is null */
} else {
var66 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var65) on <var_ret:nullable MType> */
var_other = var65;
{
var70 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var69 = var70;
}
var71 = !var69;
var67 = var71;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
var66 = var67;
}
if (var66){
if (varonce72) {
var73 = varonce72;
} else {
var74 = ": ";
var75 = 2;
var76 = string__NativeString__to_s_with_length(var74, var75);
var73 = var76;
varonce72 = var73;
}
{
string__FlatBuffer__append(var_b, var73); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
{
var77 = ((val* (*)(val*))(var_ret->class->vft[COLOR_string__Object__to_s]))(var_ret) /* to_s on <var_ret:nullable MType(MType)>*/;
}
{
string__FlatBuffer__append(var_b, var77); /* Direct call string#FlatBuffer#append on <var_b:FlatBuffer>*/
}
} else {
}
{
var78 = string__FlatBuffer__to_s(var_b);
}
var = var78;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MSignature#to_s for (self: Object): String */
val* VIRTUAL_model__MSignature__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MSignature__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MSignature#resolve_for for (self: MSignature, MType, nullable MClassType, MModule, Bool): MSignature */
val* model__MSignature__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MSignature */;
val* var_mtype /* var mtype: MType */;
val* var_anchor /* var anchor: nullable MClassType */;
val* var_mmodule /* var mmodule: MModule */;
short int var_cleanup_virtual /* var cleanup_virtual: Bool */;
val* var1 /* : Array[MParameter] */;
val* var_params /* var params: Array[MParameter] */;
val* var2 /* : Array[MParameter] */;
val* var4 /* : Array[MParameter] */;
val* var5 /* : ArrayIterator[nullable Object] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var8 /* : MParameter */;
val* var9 /* : nullable MType */;
val* var11 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : MType */;
val* var20 /* : MSignature */;
val* var_res /* var res: MSignature */;
var_mtype = p0;
var_anchor = p1;
var_mmodule = p2;
var_cleanup_virtual = p3;
var1 = NEW_array__Array(&type_array__Arraymodel__MParameter);
{
array__Array__init(var1); /* Direct call array#Array#init on <var1:Array[MParameter]>*/
}
var_params = var1;
{
{ /* Inline model#MSignature#mparameters (self) on <self:MSignature> */
var4 = self->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <self:MSignature> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = array__AbstractArrayRead__iterator(var2);
}
for(;;) {
{
var6 = array__ArrayIterator__is_ok(var5);
}
if(!var6) break;
{
var7 = array__ArrayIterator__item(var5);
}
var_p = var7;
{
var8 = model__MParameter__resolve_for(var_p, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual);
}
{
array__Array__add(var_params, var8); /* Direct call array#Array#add on <var_params:Array[MParameter]>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var5); /* Direct call array#ArrayIterator#next on <var5:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline model#MSignature#return_mtype (self) on <self:MSignature> */
var11 = self->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <self:MSignature> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_ret = var9;
var12 = NULL;
if (var_ret == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var12) on <var_ret:nullable MType> */
var_other = var12;
{
var17 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other) /* == on <var_ret:nullable MType(MType)>*/;
var16 = var17;
}
var18 = !var16;
var14 = var18;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
{
var19 = ((val* (*)(val*, val*, val*, val*, short int))(var_ret->class->vft[COLOR_model__MType__resolve_for]))(var_ret, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual) /* resolve_for on <var_ret:nullable MType(MType)>*/;
}
var_ret = var19;
} else {
}
var20 = NEW_model__MSignature(&type_model__MSignature);
{
model__MSignature__init(var20, var_params, var_ret); /* Direct call model#MSignature#init on <var20:MSignature>*/
}
var_res = var20;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MSignature#resolve_for for (self: Object, MType, nullable MClassType, MModule, Bool): MType */
val* VIRTUAL_model__MSignature__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MType */;
val* var1 /* : MSignature */;
var1 = model__MSignature__resolve_for(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#name for (self: MParameter): String */
val* model__MParameter__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model__MParameter___name].val; /* _name on <self:MParameter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1549);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#name for (self: Object): String */
val* VIRTUAL_model__MParameter__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline model#MParameter#name (self) on <self:Object(MParameter)> */
var3 = self->attrs[COLOR_model__MParameter___name].val; /* _name on <self:Object(MParameter)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1549);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#name= for (self: MParameter, String) */
void model__MParameter__name_61d(val* self, val* p0) {
self->attrs[COLOR_model__MParameter___name].val = p0; /* _name on <self:MParameter> */
RET_LABEL:;
}
/* method model#MParameter#name= for (self: Object, String) */
void VIRTUAL_model__MParameter__name_61d(val* self, val* p0) {
{ /* Inline model#MParameter#name= (self,p0) on <self:Object(MParameter)> */
self->attrs[COLOR_model__MParameter___name].val = p0; /* _name on <self:Object(MParameter)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MParameter#mtype for (self: MParameter): MType */
val* model__MParameter__mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#mtype for (self: Object): MType */
val* VIRTUAL_model__MParameter__mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
{ /* Inline model#MParameter#mtype (self) on <self:Object(MParameter)> */
var3 = self->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <self:Object(MParameter)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#mtype= for (self: MParameter, MType) */
void model__MParameter__mtype_61d(val* self, val* p0) {
self->attrs[COLOR_model__MParameter___mtype].val = p0; /* _mtype on <self:MParameter> */
RET_LABEL:;
}
/* method model#MParameter#mtype= for (self: Object, MType) */
void VIRTUAL_model__MParameter__mtype_61d(val* self, val* p0) {
{ /* Inline model#MParameter#mtype= (self,p0) on <self:Object(MParameter)> */
self->attrs[COLOR_model__MParameter___mtype].val = p0; /* _mtype on <self:Object(MParameter)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MParameter#is_vararg for (self: MParameter): Bool */
short int model__MParameter__is_vararg(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MParameter___is_vararg].s; /* _is_vararg on <self:MParameter> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#is_vararg for (self: Object): Bool */
short int VIRTUAL_model__MParameter__is_vararg(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline model#MParameter#is_vararg (self) on <self:Object(MParameter)> */
var3 = self->attrs[COLOR_model__MParameter___is_vararg].s; /* _is_vararg on <self:Object(MParameter)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#is_vararg= for (self: MParameter, Bool) */
void model__MParameter__is_vararg_61d(val* self, short int p0) {
self->attrs[COLOR_model__MParameter___is_vararg].s = p0; /* _is_vararg on <self:MParameter> */
RET_LABEL:;
}
/* method model#MParameter#is_vararg= for (self: Object, Bool) */
void VIRTUAL_model__MParameter__is_vararg_61d(val* self, short int p0) {
{ /* Inline model#MParameter#is_vararg= (self,p0) on <self:Object(MParameter)> */
self->attrs[COLOR_model__MParameter___is_vararg].s = p0; /* _is_vararg on <self:Object(MParameter)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MParameter#init for (self: MParameter, String, MType, Bool) */
void model__MParameter__init(val* self, val* p0, val* p1, short int p2) {
val* var_name /* var name: String */;
val* var_mtype /* var mtype: MType */;
short int var_is_vararg /* var is_vararg: Bool */;
{
{ /* Inline model_base#MEntity#init (self) on <self:MParameter> */
RET_LABEL1:(void)0;
}
}
var_name = p0;
var_mtype = p1;
var_is_vararg = p2;
{
{ /* Inline model#MParameter#name= (self,var_name) on <self:MParameter> */
self->attrs[COLOR_model__MParameter___name].val = var_name; /* _name on <self:MParameter> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MParameter#mtype= (self,var_mtype) on <self:MParameter> */
self->attrs[COLOR_model__MParameter___mtype].val = var_mtype; /* _mtype on <self:MParameter> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline model#MParameter#is_vararg= (self,var_is_vararg) on <self:MParameter> */
self->attrs[COLOR_model__MParameter___is_vararg].s = var_is_vararg; /* _is_vararg on <self:MParameter> */
RET_LABEL4:(void)0;
}
}
RET_LABEL:;
}
/* method model#MParameter#init for (self: Object, String, MType, Bool) */
void VIRTUAL_model__MParameter__init(val* self, val* p0, val* p1, short int p2) {
model__MParameter__init(self, p0, p1, p2); /* Direct call model#MParameter#init on <self:Object(MParameter)>*/
RET_LABEL:;
}
/* method model#MParameter#to_s for (self: MParameter): String */
val* model__MParameter__to_s(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : String */;
val* var6 /* : String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : MType */;
val* var13 /* : MType */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
val* var19 /* : Array[Object] */;
long var20 /* : Int */;
val* var21 /* : NativeArray[Object] */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
val* var31 /* : MType */;
val* var33 /* : MType */;
val* var34 /* : Array[Object] */;
long var35 /* : Int */;
val* var36 /* : NativeArray[Object] */;
val* var37 /* : String */;
{
{ /* Inline model#MParameter#is_vararg (self) on <self:MParameter> */
var3 = self->attrs[COLOR_model__MParameter___is_vararg].s; /* _is_vararg on <self:MParameter> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
{
{ /* Inline model#MParameter#name (self) on <self:MParameter> */
var6 = self->attrs[COLOR_model__MParameter___name].val; /* _name on <self:MParameter> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1549);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (varonce) {
var7 = varonce;
} else {
var8 = ": ";
var9 = 2;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
{
{ /* Inline model#MParameter#mtype (self) on <self:MParameter> */
var13 = self->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (varonce14) {
var15 = varonce14;
} else {
var16 = "...";
var17 = 3;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 4;
var21 = NEW_array__NativeArray(var20, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var21)->values[0] = (val*) var4;
((struct instance_array__NativeArray*)var21)->values[1] = (val*) var7;
((struct instance_array__NativeArray*)var21)->values[2] = (val*) var11;
((struct instance_array__NativeArray*)var21)->values[3] = (val*) var15;
{
((void (*)(val*, val*, long))(var19->class->vft[COLOR_array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
}
{
var22 = ((val* (*)(val*))(var19->class->vft[COLOR_string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
}
var = var22;
goto RET_LABEL;
} else {
{
{ /* Inline model#MParameter#name (self) on <self:MParameter> */
var25 = self->attrs[COLOR_model__MParameter___name].val; /* _name on <self:MParameter> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1549);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = ": ";
var29 = 2;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
{
{ /* Inline model#MParameter#mtype (self) on <self:MParameter> */
var33 = self->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
var34 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var34 = array_instance Array[Object] */
var35 = 3;
var36 = NEW_array__NativeArray(var35, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var36)->values[0] = (val*) var23;
((struct instance_array__NativeArray*)var36)->values[1] = (val*) var27;
((struct instance_array__NativeArray*)var36)->values[2] = (val*) var31;
{
((void (*)(val*, val*, long))(var34->class->vft[COLOR_array__Array__with_native]))(var34, var36, var35) /* with_native on <var34:Array[Object]>*/;
}
}
{
var37 = ((val* (*)(val*))(var34->class->vft[COLOR_string__Object__to_s]))(var34) /* to_s on <var34:Array[Object]>*/;
}
var = var37;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method model#MParameter#to_s for (self: Object): String */
val* VIRTUAL_model__MParameter__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MParameter__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#resolve_for for (self: MParameter, MType, nullable MClassType, MModule, Bool): MParameter */
val* model__MParameter__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
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
{ /* Inline model#MParameter#mtype (self) on <self:MParameter> */
var3 = self->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int (*)(val*))(var1->class->vft[COLOR_model__MType__need_anchor]))(var1) /* need_anchor on <var1:MType>*/;
}
var5 = !var4;
if (var5){
var = self;
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MParameter#mtype (self) on <self:MParameter> */
var8 = self->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = ((val* (*)(val*, val*, val*, val*, short int))(var6->class->vft[COLOR_model__MType__resolve_for]))(var6, var_mtype, var_anchor, var_mmodule, var_cleanup_virtual) /* resolve_for on <var6:MType>*/;
}
var_newtype = var9;
var10 = NEW_model__MParameter(&type_model__MParameter);
{
{ /* Inline model#MParameter#name (self) on <self:MParameter> */
var13 = self->attrs[COLOR_model__MParameter___name].val; /* _name on <self:MParameter> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1549);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MParameter#is_vararg (self) on <self:MParameter> */
var16 = self->attrs[COLOR_model__MParameter___is_vararg].s; /* _is_vararg on <self:MParameter> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
model__MParameter__init(var10, var11, var_newtype, var14); /* Direct call model#MParameter#init on <var10:MParameter>*/
}
var_res = var10;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameter#resolve_for for (self: Object, MType, nullable MClassType, MModule, Bool): MParameter */
val* VIRTUAL_model__MParameter__resolve_for(val* self, val* p0, val* p1, val* p2, short int p3) {
val* var /* : MParameter */;
val* var1 /* : MParameter */;
var1 = model__MParameter__resolve_for(self, p0, p1, p2, p3);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MParameter#model for (self: MParameter): Model */
val* model__MParameter__model(val* self) {
val* var /* : Model */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var4 /* : Model */;
{
{ /* Inline model#MParameter#mtype (self) on <self:MParameter> */
var3 = self->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <self:MParameter> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val* (*)(val*))(var1->class->vft[COLOR_model_base__MEntity__model]))(var1) /* model on <var1:MType>*/;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MParameter#model for (self: Object): Model */
val* VIRTUAL_model__MParameter__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = model__MParameter__model(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#intro_mclassdef for (self: MProperty): MClassDef */
val* model__MProperty__intro_mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1602);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#intro_mclassdef for (self: Object): MClassDef */
val* VIRTUAL_model__MProperty__intro_mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
val* var3 /* : MClassDef */;
{ /* Inline model#MProperty#intro_mclassdef (self) on <self:Object(MProperty)> */
var3 = self->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:Object(MProperty)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1602);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#intro_mclassdef= for (self: MProperty, MClassDef) */
void model__MProperty__intro_mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_model__MProperty___intro_mclassdef].val = p0; /* _intro_mclassdef on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#intro_mclassdef= for (self: Object, MClassDef) */
void VIRTUAL_model__MProperty__intro_mclassdef_61d(val* self, val* p0) {
{ /* Inline model#MProperty#intro_mclassdef= (self,p0) on <self:Object(MProperty)> */
self->attrs[COLOR_model__MProperty___intro_mclassdef].val = p0; /* _intro_mclassdef on <self:Object(MProperty)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MProperty#name for (self: MProperty): String */
val* model__MProperty__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model__MProperty___name].val; /* _name on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#name for (self: Object): String */
val* VIRTUAL_model__MProperty__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline model#MProperty#name (self) on <self:Object(MProperty)> */
var3 = self->attrs[COLOR_model__MProperty___name].val; /* _name on <self:Object(MProperty)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#name= for (self: MProperty, String) */
void model__MProperty__name_61d(val* self, val* p0) {
self->attrs[COLOR_model__MProperty___name].val = p0; /* _name on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#name= for (self: Object, String) */
void VIRTUAL_model__MProperty__name_61d(val* self, val* p0) {
{ /* Inline model#MProperty#name= (self,p0) on <self:Object(MProperty)> */
self->attrs[COLOR_model__MProperty___name].val = p0; /* _name on <self:Object(MProperty)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MProperty#full_name for (self: MProperty): String */
val* model__MProperty__full_name(val* self) {
val* var /* : String */;
val* var1 /* : MClassDef */;
val* var3 /* : MClassDef */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : String */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : FlatString */;
val* var12 /* : MClassDef */;
val* var14 /* : MClassDef */;
val* var15 /* : MClass */;
val* var17 /* : MClass */;
val* var18 /* : String */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
val* var26 /* : String */;
val* var28 /* : String */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[Object] */;
val* var32 /* : String */;
{
{ /* Inline model#MProperty#intro_mclassdef (self) on <self:MProperty> */
var3 = self->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1602);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var1) on <var1:MClassDef> */
var6 = var1->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var1:MClassDef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = mmodule__MModule__full_name(var4);
}
if (varonce) {
var8 = varonce;
} else {
var9 = "::";
var10 = 2;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
{
{ /* Inline model#MProperty#intro_mclassdef (self) on <self:MProperty> */
var14 = self->attrs[COLOR_model__MProperty___intro_mclassdef].val; /* _intro_mclassdef on <self:MProperty> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1602);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var12) on <var12:MClassDef> */
var17 = var12->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var12:MClassDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClass#name (var15) on <var15:MClass> */
var20 = var15->attrs[COLOR_model__MClass___name].val; /* _name on <var15:MClass> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = "::";
var24 = 2;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
{
{ /* Inline model#MProperty#name (self) on <self:MProperty> */
var28 = self->attrs[COLOR_model__MProperty___name].val; /* _name on <self:MProperty> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 5;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var7;
((struct instance_array__NativeArray*)var31)->values[1] = (val*) var8;
((struct instance_array__NativeArray*)var31)->values[2] = (val*) var18;
((struct instance_array__NativeArray*)var31)->values[3] = (val*) var22;
((struct instance_array__NativeArray*)var31)->values[4] = (val*) var26;
{
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
}
}
{
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
}
var = var32;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#full_name for (self: Object): String */
val* VIRTUAL_model__MProperty__full_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MProperty__full_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#visibility for (self: MProperty): MVisibility */
val* model__MProperty__visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
var1 = self->attrs[COLOR_model__MProperty___visibility].val; /* _visibility on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1617);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#visibility for (self: Object): MVisibility */
val* VIRTUAL_model__MProperty__visibility(val* self) {
val* var /* : MVisibility */;
val* var1 /* : MVisibility */;
val* var3 /* : MVisibility */;
{ /* Inline model#MProperty#visibility (self) on <self:Object(MProperty)> */
var3 = self->attrs[COLOR_model__MProperty___visibility].val; /* _visibility on <self:Object(MProperty)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1617);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#visibility= for (self: MProperty, MVisibility) */
void model__MProperty__visibility_61d(val* self, val* p0) {
self->attrs[COLOR_model__MProperty___visibility].val = p0; /* _visibility on <self:MProperty> */
RET_LABEL:;
}
/* method model#MProperty#visibility= for (self: Object, MVisibility) */
void VIRTUAL_model__MProperty__visibility_61d(val* self, val* p0) {
{ /* Inline model#MProperty#visibility= (self,p0) on <self:Object(MProperty)> */
self->attrs[COLOR_model__MProperty___visibility].val = p0; /* _visibility on <self:Object(MProperty)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MProperty#init for (self: MProperty, MClassDef, String, MVisibility) */
void model__MProperty__init(val* self, val* p0, val* p1, val* p2) {
val* var_intro_mclassdef /* var intro_mclassdef: MClassDef */;
val* var_name /* var name: String */;
val* var_visibility /* var visibility: MVisibility */;
val* var /* : Array[MProperty] */;
val* var6 /* : Array[MProperty] */;
val* var7 /* : MModule */;
val* var9 /* : MModule */;
val* var10 /* : Model */;
val* var12 /* : Model */;
val* var_model /* var model: Model */;
val* var13 /* : MultiHashMap[String, MProperty] */;
val* var15 /* : MultiHashMap[String, MProperty] */;
val* var16 /* : Array[MProperty] */;
val* var18 /* : Array[MProperty] */;
{
{ /* Inline model_base#MEntity#init (self) on <self:MProperty> */
RET_LABEL1:(void)0;
}
}
var_intro_mclassdef = p0;
var_name = p1;
var_visibility = p2;
{
{ /* Inline model#MProperty#intro_mclassdef= (self,var_intro_mclassdef) on <self:MProperty> */
self->attrs[COLOR_model__MProperty___intro_mclassdef].val = var_intro_mclassdef; /* _intro_mclassdef on <self:MProperty> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MProperty#name= (self,var_name) on <self:MProperty> */
self->attrs[COLOR_model__MProperty___name].val = var_name; /* _name on <self:MProperty> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline model#MProperty#visibility= (self,var_visibility) on <self:MProperty> */
self->attrs[COLOR_model__MProperty___visibility].val = var_visibility; /* _visibility on <self:MProperty> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#intro_mproperties (var_intro_mclassdef) on <var_intro_mclassdef:MClassDef> */
var6 = var_intro_mclassdef->attrs[COLOR_model__MClassDef___intro_mproperties].val; /* _intro_mproperties on <var_intro_mclassdef:MClassDef> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mproperties");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 571);
show_backtrace(1);
}
var = var6;
RET_LABEL5:(void)0;
}
}
{
array__Array__add(var, self); /* Direct call array#Array#add on <var:Array[MProperty]>*/
}
{
{ /* Inline model#MClassDef#mmodule (var_intro_mclassdef) on <var_intro_mclassdef:MClassDef> */
var9 = var_intro_mclassdef->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_intro_mclassdef:MClassDef> */
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
{ /* Inline mmodule#MModule#model (var7) on <var7:MModule> */
var12 = var7->attrs[COLOR_mmodule__MModule___model].val; /* _model on <var7:MModule> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 74);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_model = var10;
{
{ /* Inline model#Model#mproperties_by_name (var_model) on <var_model:Model> */
var15 = var_model->attrs[COLOR_model__Model___mproperties_by_name].val; /* _mproperties_by_name on <var_model:Model> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties_by_name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 86);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
more_collections__MultiHashMap__add_one(var13, var_name, self); /* Direct call more_collections#MultiHashMap#add_one on <var13:MultiHashMap[String, MProperty]>*/
}
{
{ /* Inline model#Model#mproperties (var_model) on <var_model:Model> */
var18 = var_model->attrs[COLOR_model__Model___mproperties].val; /* _mproperties on <var_model:Model> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperties");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 39);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
array__Array__add(var16, self); /* Direct call array#Array#add on <var16:Array[MProperty]>*/
}
RET_LABEL:;
}
/* method model#MProperty#init for (self: Object, MClassDef, String, MVisibility) */
void VIRTUAL_model__MProperty__init(val* self, val* p0, val* p1, val* p2) {
model__MProperty__init(self, p0, p1, p2); /* Direct call model#MProperty#init on <self:Object(MProperty)>*/
RET_LABEL:;
}
/* method model#MProperty#mpropdefs for (self: MProperty): Array[MPropDef] */
val* model__MProperty__mpropdefs(val* self) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = self->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1631);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#mpropdefs for (self: Object): Array[MPropDef] */
val* VIRTUAL_model__MProperty__mpropdefs(val* self) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
val* var3 /* : Array[MPropDef] */;
{ /* Inline model#MProperty#mpropdefs (self) on <self:Object(MProperty)> */
var3 = self->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <self:Object(MProperty)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1631);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#intro for (self: MProperty): MPropDef */
val* model__MProperty__intro(val* self) {
val* var /* : MPropDef */;
val* var1 /* : Array[MPropDef] */;
val* var3 /* : Array[MPropDef] */;
val* var4 /* : nullable Object */;
{
{ /* Inline model#MProperty#mpropdefs (self) on <self:MProperty> */
var3 = self->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <self:MProperty> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1631);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = abstract_collection__SequenceRead__first(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#intro for (self: Object): MPropDef */
val* VIRTUAL_model__MProperty__intro(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = model__MProperty__intro(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#model for (self: MProperty): Model */
val* model__MProperty__model(val* self) {
val* var /* : Model */;
val* var1 /* : MPropDef */;
val* var2 /* : Model */;
{
var1 = model__MProperty__intro(self);
}
{
var2 = model__MPropDef__model(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#model for (self: Object): Model */
val* VIRTUAL_model__MProperty__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = model__MProperty__model(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#to_s for (self: MProperty): String */
val* model__MProperty__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline model#MProperty#name (self) on <self:MProperty> */
var3 = self->attrs[COLOR_model__MProperty___name].val; /* _name on <self:MProperty> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
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
/* method model#MProperty#to_s for (self: Object): String */
val* VIRTUAL_model__MProperty__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MProperty__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_definitions for (self: MProperty, MModule, MType): Array[MPropDef] */
val* model__MProperty__lookup_definitions(val* self, val* p0, val* p1) {
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
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : Array[MPropDef] */;
val* var_candidates /* var candidates: Array[MPropDef] */;
val* var16 /* : Array[MPropDef] */;
val* var18 /* : Array[MPropDef] */;
val* var19 /* : ArrayIterator[nullable Object] */;
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
val* var33 /* : null */;
val* var34 /* : MClassDef */;
val* var36 /* : MClassDef */;
val* var37 /* : MClassType */;
val* var39 /* : MClassType */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
long var42 /* : Int */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var47 /* : Bool */;
val* var48 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var50 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var51 /* : Array[MPropDef] */;
var_mmodule = p0;
var_mtype = p1;
{
var1 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1655);
show_backtrace(1);
}
{
var3 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MType__as_notnullable]))(var_mtype) /* as_notnullable on <var_mtype:MType>*/;
}
var_mtype = var3;
{
{ /* Inline model#MProperty#lookup_definitions_cache (self) on <self:MProperty> */
var6 = self->attrs[COLOR_model__MProperty___lookup_definitions_cache].val; /* _lookup_definitions_cache on <self:MProperty> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1682);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = more_collections__HashMap2___91d_93d(var4, var_mmodule, var_mtype);
}
var_cache = var7;
var8 = NULL;
if (var_cache == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cache,var8) on <var_cache:nullable Array[MPropDef]> */
var_other = var8;
{
var13 = ((short int (*)(val*, val*))(var_cache->class->vft[COLOR_kernel__Object___61d_61d]))(var_cache, var_other) /* == on <var_cache:nullable Array[MPropDef](Array[MPropDef])>*/;
var12 = var13;
}
var14 = !var12;
var10 = var14;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
var = var_cache;
goto RET_LABEL;
} else {
}
var15 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arraymodel__MProperty_VTMPROPDEF]);
{
array__Array__init(var15); /* Direct call array#Array#init on <var15:Array[MPropDef]>*/
}
var_candidates = var15;
{
{ /* Inline model#MProperty#mpropdefs (self) on <self:MProperty> */
var18 = self->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <self:MProperty> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1631);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = array__AbstractArrayRead__iterator(var16);
}
for(;;) {
{
var20 = array__ArrayIterator__is_ok(var19);
}
if(!var20) break;
{
var21 = array__ArrayIterator__item(var19);
}
var_mpropdef = var21;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var24 = var_mmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 101);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var27 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var25) on <var25:MClassDef> */
var30 = var25->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var25:MClassDef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = poset__POSetElement___60d_61d(var22, var28);
}
var32 = !var31;
if (var32){
goto CONTINUE_label;
} else {
}
var33 = NULL;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var36 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var34) on <var34:MClassDef> */
var39 = var34->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var34:MClassDef> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = model__MType__is_subtype(var_mtype, var_mmodule, var33, var37);
}
var41 = !var40;
if (var41){
goto CONTINUE_label;
} else {
}
{
array__Array__add(var_candidates, var_mpropdef); /* Direct call array#Array#add on <var_candidates:Array[MPropDef]>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var19); /* Direct call array#ArrayIterator#next on <var19:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
var42 = array__AbstractArrayRead__length(var_candidates);
}
var43 = 1;
{
{ /* Inline kernel#Int#<= (var42,var43) on <var42:Int> */
/* Covariant cast for argument 0 (i) <var43:Int> isa OTHER */
/* <var43:Int> isa OTHER */
var46 = 1; /* easy <var43:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
}
var47 = var42 <= var43;
var44 = var47;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
{
{ /* Inline model#MProperty#lookup_definitions_cache (self) on <self:MProperty> */
var50 = self->attrs[COLOR_model__MProperty___lookup_definitions_cache].val; /* _lookup_definitions_cache on <self:MProperty> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1682);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
more_collections__HashMap2___91d_93d_61d(var48, var_mmodule, var_mtype, var_candidates); /* Direct call more_collections#HashMap2#[]= on <var48:HashMap2[MModule, MType, Array[MPropDef]]>*/
}
var = var_candidates;
goto RET_LABEL;
} else {
}
{
var51 = model__MProperty__select_most_specific(self, var_mmodule, var_candidates);
}
var = var51;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_definitions for (self: Object, MModule, MType): Array[MPropDef] */
val* VIRTUAL_model__MProperty__lookup_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = model__MProperty__lookup_definitions(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_definitions_cache for (self: MProperty): HashMap2[MModule, MType, Array[MPropDef]] */
val* model__MProperty__lookup_definitions_cache(val* self) {
val* var /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var1 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
var1 = self->attrs[COLOR_model__MProperty___lookup_definitions_cache].val; /* _lookup_definitions_cache on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1682);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_definitions_cache for (self: Object): HashMap2[MModule, MType, Array[MPropDef]] */
val* VIRTUAL_model__MProperty__lookup_definitions_cache(val* self) {
val* var /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var1 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var3 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
{ /* Inline model#MProperty#lookup_definitions_cache (self) on <self:Object(MProperty)> */
var3 = self->attrs[COLOR_model__MProperty___lookup_definitions_cache].val; /* _lookup_definitions_cache on <self:Object(MProperty)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1682);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_super_definitions for (self: MProperty, MModule, MType): Array[MPropDef] */
val* model__MProperty__lookup_super_definitions(val* self, val* p0, val* p1) {
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
val* var8 /* : ArrayIterator[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MPropDef */;
val* var11 /* : POSetElement[MModule] */;
val* var13 /* : POSetElement[MModule] */;
val* var14 /* : MClassDef */;
val* var16 /* : MClassDef */;
val* var17 /* : MModule */;
val* var19 /* : MModule */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : null */;
val* var23 /* : MClassDef */;
val* var25 /* : MClassDef */;
val* var26 /* : MClassType */;
val* var28 /* : MClassType */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : MClassDef */;
val* var34 /* : MClassDef */;
val* var35 /* : MClassType */;
val* var37 /* : MClassType */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var_ /* var : Bool */;
val* var44 /* : MClassDef */;
val* var46 /* : MClassDef */;
val* var47 /* : MModule */;
val* var49 /* : MModule */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
long var56 /* : Int */;
long var57 /* : Int */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var61 /* : Bool */;
val* var62 /* : Array[MPropDef] */;
var_mmodule = p0;
var_mtype = p1;
{
var1 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1694);
show_backtrace(1);
}
{
var3 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MType__as_notnullable]))(var_mtype) /* as_notnullable on <var_mtype:MType>*/;
}
var_mtype = var3;
var4 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arraymodel__MProperty_VTMPROPDEF]);
{
array__Array__init(var4); /* Direct call array#Array#init on <var4:Array[MPropDef]>*/
}
var_candidates = var4;
{
{ /* Inline model#MProperty#mpropdefs (self) on <self:MProperty> */
var7 = self->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <self:MProperty> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1631);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = array__AbstractArrayRead__iterator(var5);
}
for(;;) {
{
var9 = array__ArrayIterator__is_ok(var8);
}
if(!var9) break;
{
var10 = array__ArrayIterator__item(var8);
}
var_mpropdef = var10;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var13 = var_mmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 101);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var16 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = poset__POSetElement___60d_61d(var11, var17);
}
var21 = !var20;
if (var21){
goto CONTINUE_label;
} else {
}
var22 = NULL;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var25 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var23) on <var23:MClassDef> */
var28 = var23->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var23:MClassDef> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = model__MType__is_subtype(var_mtype, var_mmodule, var22, var26);
}
var30 = !var29;
if (var30){
goto CONTINUE_label;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var34 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var32) on <var32:MClassDef> */
var37 = var32->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var32:MClassDef> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_mtype,var35) on <var_mtype:MType> */
var_other = var35;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:MType> */
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
var38 = var39;
}
var_ = var38;
if (var38){
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var46 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var44) on <var44:MClassDef> */
var49 = var44->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var44:MClassDef> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_mmodule,var47) on <var_mmodule:MModule> */
var_other = var47;
{
{ /* Inline kernel#Object#is_same_instance (var_mmodule,var_other) on <var_mmodule:MModule> */
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
var50 = var51;
}
var31 = var50;
} else {
var31 = var_;
}
if (var31){
goto CONTINUE_label;
} else {
}
{
array__Array__add(var_candidates, var_mpropdef); /* Direct call array#Array#add on <var_candidates:Array[MPropDef]>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var8); /* Direct call array#ArrayIterator#next on <var8:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
var56 = array__AbstractArrayRead__length(var_candidates);
}
var57 = 1;
{
{ /* Inline kernel#Int#<= (var56,var57) on <var56:Int> */
/* Covariant cast for argument 0 (i) <var57:Int> isa OTHER */
/* <var57:Int> isa OTHER */
var60 = 1; /* easy <var57:Int> isa OTHER*/
if (unlikely(!var60)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
}
var61 = var56 <= var57;
var58 = var61;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
if (var58){
var = var_candidates;
goto RET_LABEL;
} else {
}
{
var62 = model__MProperty__select_most_specific(self, var_mmodule, var_candidates);
}
var = var62;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_super_definitions for (self: Object, MModule, MType): Array[MPropDef] */
val* VIRTUAL_model__MProperty__lookup_super_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = model__MProperty__lookup_super_definitions(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#select_most_specific for (self: MProperty, MModule, Array[MPropDef]): Array[MPropDef] */
val* model__MProperty__select_most_specific(val* self, val* p0, val* p1) {
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
val* var3 /* : ArrayIterator[nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_pd1 /* var pd1: MPropDef */;
val* var6 /* : MClassDef */;
val* var8 /* : MClassDef */;
val* var_cd1 /* var cd1: MClassDef */;
val* var9 /* : MClass */;
val* var11 /* : MClass */;
val* var_c1 /* var c1: MClass */;
short int var12 /* : Bool */;
short int var_keep /* var keep: Bool */;
val* var13 /* : ArrayIterator[nullable Object] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_pd2 /* var pd2: MPropDef */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : MClassDef */;
val* var24 /* : MClassDef */;
val* var_cd2 /* var cd2: MClassDef */;
val* var25 /* : MClass */;
val* var27 /* : MClass */;
val* var_c2 /* var c2: MClass */;
val* var28 /* : MClassType */;
val* var30 /* : MClassType */;
val* var31 /* : MClassType */;
val* var33 /* : MClassType */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : MModule */;
val* var42 /* : MModule */;
val* var43 /* : POSetElement[MModule] */;
val* var45 /* : POSetElement[MModule] */;
val* var46 /* : MModule */;
val* var48 /* : MModule */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var52 /* : MClassType */;
val* var54 /* : MClassType */;
val* var55 /* : null */;
val* var56 /* : MClassType */;
val* var58 /* : MClassType */;
short int var59 /* : Bool */;
short int var_ /* var : Bool */;
val* var60 /* : MClassType */;
val* var62 /* : MClassType */;
val* var63 /* : MClassType */;
val* var65 /* : MClassType */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
val* var_other69 /* var other: nullable Object */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
static val* varonce;
val* var76 /* : String */;
char* var77 /* : NativeString */;
long var78 /* : Int */;
val* var79 /* : FlatString */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : FlatString */;
val* var85 /* : String */;
val* var86 /* : Array[Object] */;
long var87 /* : Int */;
val* var88 /* : NativeArray[Object] */;
val* var89 /* : String */;
/* Covariant cast for argument 1 (candidates) <p1:Array[MPropDef]> isa Array[MPROPDEF] */
/* <p1:Array[MPropDef]> isa Array[MPROPDEF] */
type_struct = self->type->resolution_table->types[COLOR_array__Arraymodel__MProperty_VTMPROPDEF];
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
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1716);
show_backtrace(1);
}
var_mmodule = p0;
var_candidates = p1;
var2 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arraymodel__MProperty_VTMPROPDEF]);
{
array__Array__init(var2); /* Direct call array#Array#init on <var2:Array[MPropDef]>*/
}
var_res = var2;
{
var3 = array__AbstractArrayRead__iterator(var_candidates);
}
for(;;) {
{
var4 = array__ArrayIterator__is_ok(var3);
}
if(!var4) break;
{
var5 = array__ArrayIterator__item(var3);
}
var_pd1 = var5;
{
{ /* Inline model#MPropDef#mclassdef (var_pd1) on <var_pd1:MPropDef> */
var8 = var_pd1->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_pd1:MPropDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_cd1 = var6;
{
{ /* Inline model#MClassDef#mclass (var_cd1) on <var_cd1:MClassDef> */
var11 = var_cd1->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_cd1:MClassDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_c1 = var9;
var12 = 1;
var_keep = var12;
{
var13 = array__AbstractArrayRead__iterator(var_candidates);
}
for(;;) {
{
var14 = array__ArrayIterator__is_ok(var13);
}
if(!var14) break;
{
var15 = array__ArrayIterator__item(var13);
}
var_pd2 = var15;
{
{ /* Inline kernel#Object#== (var_pd2,var_pd1) on <var_pd2:MPropDef> */
var_other = var_pd1;
{
{ /* Inline kernel#Object#is_same_instance (var_pd2,var_other) on <var_pd2:MPropDef> */
var21 = var_pd2 == var_other;
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
if (var16){
goto CONTINUE_label;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_pd2) on <var_pd2:MPropDef> */
var24 = var_pd2->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_pd2:MPropDef> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_cd2 = var22;
{
{ /* Inline model#MClassDef#mclass (var_cd2) on <var_cd2:MClassDef> */
var27 = var_cd2->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var_cd2:MClassDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_c2 = var25;
{
{ /* Inline model#MClass#mclass_type (var_c2) on <var_c2:MClass> */
var30 = var_c2->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_c2:MClass> */
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
{ /* Inline model#MClass#mclass_type (var_c1) on <var_c1:MClass> */
var33 = var_c1->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_c1:MClass> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var28,var31) on <var28:MClassType> */
var_other = var31;
{
{ /* Inline kernel#Object#is_same_instance (var28,var_other) on <var28:MClassType> */
var39 = var28 == var_other;
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
{
{ /* Inline model#MClassDef#mmodule (var_cd2) on <var_cd2:MClassDef> */
var42 = var_cd2->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_cd2:MClassDef> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline mmodule#MModule#in_importation (var40) on <var40:MModule> */
var45 = var40->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var40:MModule> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 101);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var_cd1) on <var_cd1:MClassDef> */
var48 = var_cd1->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var_cd1:MClassDef> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = poset__POSetElement___60d(var43, var46);
}
if (var49){
var50 = 0;
var_keep = var50;
goto BREAK_label;
} else {
}
} else {
{
{ /* Inline model#MClassDef#bound_mtype (var_cd2) on <var_cd2:MClassDef> */
var54 = var_cd2->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_cd2:MClassDef> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
var55 = NULL;
{
{ /* Inline model#MClassDef#bound_mtype (var_cd1) on <var_cd1:MClassDef> */
var58 = var_cd1->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_cd1:MClassDef> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = model__MType__is_subtype(var52, var_mmodule, var55, var56);
}
var_ = var59;
if (var59){
{
{ /* Inline model#MClassDef#bound_mtype (var_cd2) on <var_cd2:MClassDef> */
var62 = var_cd2->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_cd2:MClassDef> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_cd1) on <var_cd1:MClassDef> */
var65 = var_cd1->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_cd1:MClassDef> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var60,var63) on <var60:MClassType> */
var_other69 = var63;
{
var71 = ((short int (*)(val*, val*))(var60->class->vft[COLOR_kernel__Object___61d_61d]))(var60, var_other69) /* == on <var60:MClassType>*/;
var70 = var71;
}
var72 = !var70;
var67 = var72;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
var66 = var67;
}
var51 = var66;
} else {
var51 = var_;
}
if (var51){
var73 = 0;
var_keep = var73;
goto BREAK_label;
} else {
}
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var13); /* Direct call array#ArrayIterator#next on <var13:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
if (var_keep){
{
array__Array__add(var_res, var_pd1); /* Direct call array#Array#add on <var_res:Array[MPropDef]>*/
}
} else {
}
CONTINUE_label74: (void)0;
{
array__ArrayIterator__next(var3); /* Direct call array#ArrayIterator#next on <var3:ArrayIterator[nullable Object]>*/
}
}
BREAK_label74: (void)0;
{
var75 = array__AbstractArrayRead__is_empty(var_res);
}
if (var75){
if (varonce) {
var76 = varonce;
} else {
var77 = "All lost! ";
var78 = 10;
var79 = string__NativeString__to_s_with_length(var77, var78);
var76 = var79;
varonce = var76;
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = ", ";
var83 = 2;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
{
var85 = string__Collection__join(var_candidates, var81);
}
var86 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var86 = array_instance Array[Object] */
var87 = 2;
var88 = NEW_array__NativeArray(var87, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var88)->values[0] = (val*) var76;
((struct instance_array__NativeArray*)var88)->values[1] = (val*) var85;
{
((void (*)(val*, val*, long))(var86->class->vft[COLOR_array__Array__with_native]))(var86, var88, var87) /* with_native on <var86:Array[Object]>*/;
}
}
{
var89 = ((val* (*)(val*))(var86->class->vft[COLOR_string__Object__to_s]))(var86) /* to_s on <var86:Array[Object]>*/;
}
{
file__Object__print(self, var89); /* Direct call file#Object#print on <self:MProperty>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#select_most_specific for (self: Object, MModule, Array[MPropDef]): Array[MPropDef] */
val* VIRTUAL_model__MProperty__select_most_specific(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = model__MProperty__select_most_specific(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_first_definition for (self: MProperty, MModule, MType): MPropDef */
val* model__MProperty__lookup_first_definition(val* self, val* p0, val* p1) {
val* var /* : MPropDef */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
val* var2 /* : Array[MPropDef] */;
val* var3 /* : nullable Object */;
var_mmodule = p0;
var_mtype = p1;
{
var1 = model__MType__has_mproperty(var_mtype, var_mmodule, self);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1763);
show_backtrace(1);
}
{
var2 = model__MProperty__lookup_all_definitions(self, var_mmodule, var_mtype);
}
{
var3 = abstract_collection__SequenceRead__first(var2);
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_first_definition for (self: Object, MModule, MType): MPropDef */
val* VIRTUAL_model__MProperty__lookup_first_definition(val* self, val* p0, val* p1) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = model__MProperty__lookup_first_definition(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_all_definitions for (self: MProperty, MModule, MType): Array[MPropDef] */
val* model__MProperty__lookup_all_definitions(val* self, val* p0, val* p1) {
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
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : Array[MPropDef] */;
val* var_candidates /* var candidates: Array[MPropDef] */;
val* var16 /* : Array[MPropDef] */;
val* var18 /* : Array[MPropDef] */;
val* var19 /* : ArrayIterator[nullable Object] */;
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
val* var33 /* : null */;
val* var34 /* : MClassDef */;
val* var36 /* : MClassDef */;
val* var37 /* : MClassType */;
val* var39 /* : MClassType */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
long var42 /* : Int */;
long var43 /* : Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var47 /* : Bool */;
val* var48 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var50 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var51 /* : Array[nullable Object] */;
val* var52 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var54 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
var_mmodule = p0;
var_mtype = p1;
{
var1 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1771);
show_backtrace(1);
}
{
var3 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MType__as_notnullable]))(var_mtype) /* as_notnullable on <var_mtype:MType>*/;
}
var_mtype = var3;
{
{ /* Inline model#MProperty#lookup_all_definitions_cache (self) on <self:MProperty> */
var6 = self->attrs[COLOR_model__MProperty___lookup_all_definitions_cache].val; /* _lookup_all_definitions_cache on <self:MProperty> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_all_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1800);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = more_collections__HashMap2___91d_93d(var4, var_mmodule, var_mtype);
}
var_cache = var7;
var8 = NULL;
if (var_cache == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cache,var8) on <var_cache:nullable Array[MPropDef]> */
var_other = var8;
{
var13 = ((short int (*)(val*, val*))(var_cache->class->vft[COLOR_kernel__Object___61d_61d]))(var_cache, var_other) /* == on <var_cache:nullable Array[MPropDef](Array[MPropDef])>*/;
var12 = var13;
}
var14 = !var12;
var10 = var14;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
var9 = var10;
}
if (var9){
var = var_cache;
goto RET_LABEL;
} else {
}
var15 = NEW_array__Array(self->type->resolution_table->types[COLOR_array__Arraymodel__MProperty_VTMPROPDEF]);
{
array__Array__init(var15); /* Direct call array#Array#init on <var15:Array[MPropDef]>*/
}
var_candidates = var15;
{
{ /* Inline model#MProperty#mpropdefs (self) on <self:MProperty> */
var18 = self->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <self:MProperty> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1631);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = array__AbstractArrayRead__iterator(var16);
}
for(;;) {
{
var20 = array__ArrayIterator__is_ok(var19);
}
if(!var20) break;
{
var21 = array__ArrayIterator__item(var19);
}
var_mpropdef = var21;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var24 = var_mmodule->attrs[COLOR_mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 101);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var27 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var25) on <var25:MClassDef> */
var30 = var25->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var25:MClassDef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = poset__POSetElement___60d_61d(var22, var28);
}
var32 = !var31;
if (var32){
goto CONTINUE_label;
} else {
}
var33 = NULL;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MPropDef> */
var36 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MPropDef> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var34) on <var34:MClassDef> */
var39 = var34->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var34:MClassDef> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
var40 = model__MType__is_subtype(var_mtype, var_mmodule, var33, var37);
}
var41 = !var40;
if (var41){
goto CONTINUE_label;
} else {
}
{
array__Array__add(var_candidates, var_mpropdef); /* Direct call array#Array#add on <var_candidates:Array[MPropDef]>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var19); /* Direct call array#ArrayIterator#next on <var19:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
var42 = array__AbstractArrayRead__length(var_candidates);
}
var43 = 1;
{
{ /* Inline kernel#Int#<= (var42,var43) on <var42:Int> */
/* Covariant cast for argument 0 (i) <var43:Int> isa OTHER */
/* <var43:Int> isa OTHER */
var46 = 1; /* easy <var43:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
show_backtrace(1);
}
var47 = var42 <= var43;
var44 = var47;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
{
{ /* Inline model#MProperty#lookup_all_definitions_cache (self) on <self:MProperty> */
var50 = self->attrs[COLOR_model__MProperty___lookup_all_definitions_cache].val; /* _lookup_all_definitions_cache on <self:MProperty> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_all_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1800);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
more_collections__HashMap2___91d_93d_61d(var48, var_mmodule, var_mtype, var_candidates); /* Direct call more_collections#HashMap2#[]= on <var48:HashMap2[MModule, MType, Array[MPropDef]]>*/
}
var = var_candidates;
goto RET_LABEL;
} else {
}
{
model__MModule__linearize_mpropdefs(var_mmodule, var_candidates); /* Direct call model#MModule#linearize_mpropdefs on <var_mmodule:MModule>*/
}
{
var51 = array__AbstractArrayRead__reversed(var_candidates);
}
var_candidates = var51;
{
{ /* Inline model#MProperty#lookup_all_definitions_cache (self) on <self:MProperty> */
var54 = self->attrs[COLOR_model__MProperty___lookup_all_definitions_cache].val; /* _lookup_all_definitions_cache on <self:MProperty> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_all_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1800);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
more_collections__HashMap2___91d_93d_61d(var52, var_mmodule, var_mtype, var_candidates); /* Direct call more_collections#HashMap2#[]= on <var52:HashMap2[MModule, MType, Array[MPropDef]]>*/
}
var = var_candidates;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_all_definitions for (self: Object, MModule, MType): Array[MPropDef] */
val* VIRTUAL_model__MProperty__lookup_all_definitions(val* self, val* p0, val* p1) {
val* var /* : Array[MPropDef] */;
val* var1 /* : Array[MPropDef] */;
var1 = model__MProperty__lookup_all_definitions(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_all_definitions_cache for (self: MProperty): HashMap2[MModule, MType, Array[MPropDef]] */
val* model__MProperty__lookup_all_definitions_cache(val* self) {
val* var /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var1 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
var1 = self->attrs[COLOR_model__MProperty___lookup_all_definitions_cache].val; /* _lookup_all_definitions_cache on <self:MProperty> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_all_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1800);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MProperty#lookup_all_definitions_cache for (self: Object): HashMap2[MModule, MType, Array[MPropDef]] */
val* VIRTUAL_model__MProperty__lookup_all_definitions_cache(val* self) {
val* var /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var1 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
val* var3 /* : HashMap2[MModule, MType, Array[MPropDef]] */;
{ /* Inline model#MProperty#lookup_all_definitions_cache (self) on <self:Object(MProperty)> */
var3 = self->attrs[COLOR_model__MProperty___lookup_all_definitions_cache].val; /* _lookup_all_definitions_cache on <self:Object(MProperty)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lookup_all_definitions_cache");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1800);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#init for (self: MMethod, MClassDef, String, MVisibility) */
void model__MMethod__init(val* self, val* p0, val* p1, val* p2) {
val* var_intro_mclassdef /* var intro_mclassdef: MClassDef */;
val* var_name /* var name: String */;
val* var_visibility /* var visibility: MVisibility */;
var_intro_mclassdef = p0;
var_name = p1;
var_visibility = p2;
{
model__MProperty__init(self, p0, p1, p2); /* Direct call model#MProperty#init on <self:MMethod>*/
}
RET_LABEL:;
}
/* method model#MMethod#init for (self: Object, MClassDef, String, MVisibility) */
void VIRTUAL_model__MMethod__init(val* self, val* p0, val* p1, val* p2) {
model__MMethod__init(self, p0, p1, p2); /* Direct call model#MMethod#init on <self:Object(MMethod)>*/
RET_LABEL:;
}
/* method model#MMethod#is_toplevel for (self: MMethod): Bool */
short int model__MMethod__is_toplevel(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MMethod___is_toplevel].s; /* _is_toplevel on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_toplevel for (self: Object): Bool */
short int VIRTUAL_model__MMethod__is_toplevel(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline model#MMethod#is_toplevel (self) on <self:Object(MMethod)> */
var3 = self->attrs[COLOR_model__MMethod___is_toplevel].s; /* _is_toplevel on <self:Object(MMethod)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_toplevel= for (self: MMethod, Bool) */
void model__MMethod__is_toplevel_61d(val* self, short int p0) {
self->attrs[COLOR_model__MMethod___is_toplevel].s = p0; /* _is_toplevel on <self:MMethod> */
RET_LABEL:;
}
/* method model#MMethod#is_toplevel= for (self: Object, Bool) */
void VIRTUAL_model__MMethod__is_toplevel_61d(val* self, short int p0) {
{ /* Inline model#MMethod#is_toplevel= (self,p0) on <self:Object(MMethod)> */
self->attrs[COLOR_model__MMethod___is_toplevel].s = p0; /* _is_toplevel on <self:Object(MMethod)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MMethod#is_init for (self: MMethod): Bool */
short int model__MMethod__is_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_init for (self: Object): Bool */
short int VIRTUAL_model__MMethod__is_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline model#MMethod#is_init (self) on <self:Object(MMethod)> */
var3 = self->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <self:Object(MMethod)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_init= for (self: MMethod, Bool) */
void model__MMethod__is_init_61d(val* self, short int p0) {
self->attrs[COLOR_model__MMethod___is_init].s = p0; /* _is_init on <self:MMethod> */
RET_LABEL:;
}
/* method model#MMethod#is_init= for (self: Object, Bool) */
void VIRTUAL_model__MMethod__is_init_61d(val* self, short int p0) {
{ /* Inline model#MMethod#is_init= (self,p0) on <self:Object(MMethod)> */
self->attrs[COLOR_model__MMethod___is_init].s = p0; /* _is_init on <self:Object(MMethod)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MMethod#is_new for (self: MMethod): Bool */
short int model__MMethod__is_new(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MMethod___is_new].s; /* _is_new on <self:MMethod> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_new for (self: Object): Bool */
short int VIRTUAL_model__MMethod__is_new(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline model#MMethod#is_new (self) on <self:Object(MMethod)> */
var3 = self->attrs[COLOR_model__MMethod___is_new].s; /* _is_new on <self:Object(MMethod)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_new= for (self: MMethod, Bool) */
void model__MMethod__is_new_61d(val* self, short int p0) {
self->attrs[COLOR_model__MMethod___is_new].s = p0; /* _is_new on <self:MMethod> */
RET_LABEL:;
}
/* method model#MMethod#is_new= for (self: Object, Bool) */
void VIRTUAL_model__MMethod__is_new_61d(val* self, short int p0) {
{ /* Inline model#MMethod#is_new= (self,p0) on <self:Object(MMethod)> */
self->attrs[COLOR_model__MMethod___is_new].s = p0; /* _is_new on <self:Object(MMethod)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MMethod#is_init_for for (self: MMethod, MClass): Bool */
short int model__MMethod__is_init_for(val* self, val* p0) {
short int var /* : Bool */;
val* var_mclass /* var mclass: MClass */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
var_mclass = p0;
{
{ /* Inline model#MMethod#is_init (self) on <self:MMethod> */
var3 = self->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <self:MMethod> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MMethod#is_init_for for (self: Object, MClass): Bool */
short int VIRTUAL_model__MMethod__is_init_for(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MMethod__is_init_for(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MAttribute#init for (self: MAttribute, MClassDef, String, MVisibility) */
void model__MAttribute__init(val* self, val* p0, val* p1, val* p2) {
val* var_intro_mclassdef /* var intro_mclassdef: MClassDef */;
val* var_name /* var name: String */;
val* var_visibility /* var visibility: MVisibility */;
var_intro_mclassdef = p0;
var_name = p1;
var_visibility = p2;
{
model__MProperty__init(self, p0, p1, p2); /* Direct call model#MProperty#init on <self:MAttribute>*/
}
RET_LABEL:;
}
/* method model#MAttribute#init for (self: Object, MClassDef, String, MVisibility) */
void VIRTUAL_model__MAttribute__init(val* self, val* p0, val* p1, val* p2) {
model__MAttribute__init(self, p0, p1, p2); /* Direct call model#MAttribute#init on <self:Object(MAttribute)>*/
RET_LABEL:;
}
/* method model#MVirtualTypeProp#init for (self: MVirtualTypeProp, MClassDef, String, MVisibility) */
void model__MVirtualTypeProp__init(val* self, val* p0, val* p1, val* p2) {
val* var_intro_mclassdef /* var intro_mclassdef: MClassDef */;
val* var_name /* var name: String */;
val* var_visibility /* var visibility: MVisibility */;
var_intro_mclassdef = p0;
var_name = p1;
var_visibility = p2;
{
model__MProperty__init(self, p0, p1, p2); /* Direct call model#MProperty#init on <self:MVirtualTypeProp>*/
}
RET_LABEL:;
}
/* method model#MVirtualTypeProp#init for (self: Object, MClassDef, String, MVisibility) */
void VIRTUAL_model__MVirtualTypeProp__init(val* self, val* p0, val* p1, val* p2) {
model__MVirtualTypeProp__init(self, p0, p1, p2); /* Direct call model#MVirtualTypeProp#init on <self:Object(MVirtualTypeProp)>*/
RET_LABEL:;
}
/* method model#MVirtualTypeProp#mvirtualtype for (self: MVirtualTypeProp): MVirtualType */
val* model__MVirtualTypeProp__mvirtualtype(val* self) {
val* var /* : MVirtualType */;
val* var1 /* : MVirtualType */;
var1 = self->attrs[COLOR_model__MVirtualTypeProp___mvirtualtype].val; /* _mvirtualtype on <self:MVirtualTypeProp> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mvirtualtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1858);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualTypeProp#mvirtualtype for (self: Object): MVirtualType */
val* VIRTUAL_model__MVirtualTypeProp__mvirtualtype(val* self) {
val* var /* : MVirtualType */;
val* var1 /* : MVirtualType */;
val* var3 /* : MVirtualType */;
{ /* Inline model#MVirtualTypeProp#mvirtualtype (self) on <self:Object(MVirtualTypeProp)> */
var3 = self->attrs[COLOR_model__MVirtualTypeProp___mvirtualtype].val; /* _mvirtualtype on <self:Object(MVirtualTypeProp)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mvirtualtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1858);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#location for (self: MPropDef): Location */
val* model__MPropDef__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
var1 = self->attrs[COLOR_model__MPropDef___location].val; /* _location on <self:MPropDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1876);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#location for (self: Object): Location */
val* VIRTUAL_model__MPropDef__location(val* self) {
val* var /* : Location */;
val* var1 /* : Location */;
val* var3 /* : Location */;
{ /* Inline model#MPropDef#location (self) on <self:Object(MPropDef)> */
var3 = self->attrs[COLOR_model__MPropDef___location].val; /* _location on <self:Object(MPropDef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1876);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#location= for (self: MPropDef, Location) */
void model__MPropDef__location_61d(val* self, val* p0) {
self->attrs[COLOR_model__MPropDef___location].val = p0; /* _location on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#location= for (self: Object, Location) */
void VIRTUAL_model__MPropDef__location_61d(val* self, val* p0) {
{ /* Inline model#MPropDef#location= (self,p0) on <self:Object(MPropDef)> */
self->attrs[COLOR_model__MPropDef___location].val = p0; /* _location on <self:Object(MPropDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MPropDef#mclassdef for (self: MPropDef): MClassDef */
val* model__MPropDef__mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
var1 = self->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#mclassdef for (self: Object): MClassDef */
val* VIRTUAL_model__MPropDef__mclassdef(val* self) {
val* var /* : MClassDef */;
val* var1 /* : MClassDef */;
val* var3 /* : MClassDef */;
{ /* Inline model#MPropDef#mclassdef (self) on <self:Object(MPropDef)> */
var3 = self->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <self:Object(MPropDef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#mclassdef= for (self: MPropDef, MClassDef) */
void model__MPropDef__mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_model__MPropDef___mclassdef].val = p0; /* _mclassdef on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#mclassdef= for (self: Object, MClassDef) */
void VIRTUAL_model__MPropDef__mclassdef_61d(val* self, val* p0) {
{ /* Inline model#MPropDef#mclassdef= (self,p0) on <self:Object(MPropDef)> */
self->attrs[COLOR_model__MPropDef___mclassdef].val = p0; /* _mclassdef on <self:Object(MPropDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MPropDef#mproperty for (self: MPropDef): MProperty */
val* model__MPropDef__mproperty(val* self) {
val* var /* : MProperty */;
val* var1 /* : MProperty */;
var1 = self->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#mproperty for (self: Object): MProperty */
val* VIRTUAL_model__MPropDef__mproperty(val* self) {
val* var /* : MProperty */;
val* var1 /* : MProperty */;
val* var3 /* : MProperty */;
{ /* Inline model#MPropDef#mproperty (self) on <self:Object(MPropDef)> */
var3 = self->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <self:Object(MPropDef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#mproperty= for (self: MPropDef, MProperty) */
void model__MPropDef__mproperty_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (mproperty) <p0:MProperty> isa MPROPERTY */
/* <p0:MProperty> isa MPROPERTY */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPERTY];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPERTY", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
self->attrs[COLOR_model__MPropDef___mproperty].val = p0; /* _mproperty on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#mproperty= for (self: Object, MProperty) */
void VIRTUAL_model__MPropDef__mproperty_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline model#MPropDef#mproperty= (self,p0) on <self:Object(MPropDef)> */
/* Covariant cast for argument 0 (mproperty) <p0:MProperty> isa MPROPERTY */
/* <p0:MProperty> isa MPROPERTY */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPERTY];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPERTY", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
self->attrs[COLOR_model__MPropDef___mproperty].val = p0; /* _mproperty on <self:Object(MPropDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MPropDef#init for (self: MPropDef, MClassDef, MProperty, Location) */
void model__MPropDef__init(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_mproperty /* var mproperty: MProperty */;
val* var_location /* var location: Location */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const struct type* type_struct7;
const char* var_class_name8;
val* var10 /* : Array[MPropDef] */;
val* var12 /* : Array[MPropDef] */;
val* var13 /* : Array[MPropDef] */;
val* var15 /* : Array[MPropDef] */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : Array[Object] */;
long var21 /* : Int */;
val* var22 /* : NativeArray[Object] */;
val* var23 /* : String */;
/* Covariant cast for argument 1 (mproperty) <p1:MProperty> isa MPROPERTY */
/* <p1:MProperty> isa MPROPERTY */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPERTY];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPERTY", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1885);
show_backtrace(1);
}
{
{ /* Inline model_base#MEntity#init (self) on <self:MPropDef> */
RET_LABEL1:(void)0;
}
}
var_mclassdef = p0;
var_mproperty = p1;
var_location = p2;
{
{ /* Inline model#MPropDef#mclassdef= (self,var_mclassdef) on <self:MPropDef> */
self->attrs[COLOR_model__MPropDef___mclassdef].val = var_mclassdef; /* _mclassdef on <self:MPropDef> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty= (self,var_mproperty) on <self:MPropDef> */
/* Covariant cast for argument 0 (mproperty) <var_mproperty:MProperty> isa MPROPERTY */
/* <var_mproperty:MProperty> isa MPROPERTY */
type_struct7 = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPERTY];
cltype5 = type_struct7->color;
idtype6 = type_struct7->id;
if(cltype5 >= var_mproperty->type->table_size) {
var4 = 0;
} else {
var4 = var_mproperty->type->type_table[cltype5] == idtype6;
}
if (unlikely(!var4)) {
var_class_name8 = var_mproperty == NULL ? "null" : var_mproperty->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPERTY", var_class_name8);
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
self->attrs[COLOR_model__MPropDef___mproperty].val = var_mproperty; /* _mproperty on <self:MPropDef> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline model#MPropDef#location= (self,var_location) on <self:MPropDef> */
self->attrs[COLOR_model__MPropDef___location].val = var_location; /* _location on <self:MPropDef> */
RET_LABEL9:(void)0;
}
}
{
{ /* Inline model#MClassDef#mpropdefs (var_mclassdef) on <var_mclassdef:MClassDef> */
var12 = var_mclassdef->attrs[COLOR_model__MClassDef___mpropdefs].val; /* _mpropdefs on <var_mclassdef:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 574);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
array__Array__add(var10, self); /* Direct call array#Array#add on <var10:Array[MPropDef]>*/
}
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty) on <var_mproperty:MProperty> */
var15 = var_mproperty->attrs[COLOR_model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MProperty> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1631);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
array__Array__add(var13, self); /* Direct call array#Array#add on <var13:Array[MPropDef]>*/
}
if (varonce) {
var16 = varonce;
} else {
var17 = "#";
var18 = 1;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
var20 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var20 = array_instance Array[Object] */
var21 = 3;
var22 = NEW_array__NativeArray(var21, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var22)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var22)->values[1] = (val*) var16;
((struct instance_array__NativeArray*)var22)->values[2] = (val*) var_mproperty;
{
((void (*)(val*, val*, long))(var20->class->vft[COLOR_array__Array__with_native]))(var20, var22, var21) /* with_native on <var20:Array[Object]>*/;
}
}
{
var23 = ((val* (*)(val*))(var20->class->vft[COLOR_string__Object__to_s]))(var20) /* to_s on <var20:Array[Object]>*/;
}
{
{ /* Inline model#MPropDef#to_s= (self,var23) on <self:MPropDef> */
self->attrs[COLOR_model__MPropDef___to_s].val = var23; /* _to_s on <self:MPropDef> */
RET_LABEL24:(void)0;
}
}
RET_LABEL:;
}
/* method model#MPropDef#init for (self: Object, MClassDef, MProperty, Location) */
void VIRTUAL_model__MPropDef__init(val* self, val* p0, val* p1, val* p2) {
model__MPropDef__init(self, p0, p1, p2); /* Direct call model#MPropDef#init on <self:Object(MPropDef)>*/
RET_LABEL:;
}
/* method model#MPropDef#name for (self: MPropDef): String */
val* model__MPropDef__name(val* self) {
val* var /* : String */;
val* var1 /* : MProperty */;
val* var3 /* : MProperty */;
val* var4 /* : String */;
val* var6 /* : String */;
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var3 = self->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var1) on <var1:MProperty> */
var6 = var1->attrs[COLOR_model__MProperty___name].val; /* _name on <var1:MProperty> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
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
/* method model#MPropDef#name for (self: Object): String */
val* VIRTUAL_model__MPropDef__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = model__MPropDef__name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#model for (self: MPropDef): Model */
val* model__MPropDef__model(val* self) {
val* var /* : Model */;
val* var1 /* : MClassDef */;
val* var3 /* : MClassDef */;
val* var4 /* : Model */;
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MPropDef> */
var3 = self->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = model__MClassDef__model(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MPropDef#model for (self: Object): Model */
val* VIRTUAL_model__MPropDef__model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = model__MPropDef__model(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#to_s for (self: MPropDef): String */
val* model__MPropDef__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model__MPropDef___to_s].val; /* _to_s on <self:MPropDef> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1900);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#to_s for (self: Object): String */
val* VIRTUAL_model__MPropDef__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline model#MPropDef#to_s (self) on <self:Object(MPropDef)> */
var3 = self->attrs[COLOR_model__MPropDef___to_s].val; /* _to_s on <self:Object(MPropDef)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1900);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#to_s= for (self: MPropDef, String) */
void model__MPropDef__to_s_61d(val* self, val* p0) {
self->attrs[COLOR_model__MPropDef___to_s].val = p0; /* _to_s on <self:MPropDef> */
RET_LABEL:;
}
/* method model#MPropDef#to_s= for (self: Object, String) */
void VIRTUAL_model__MPropDef__to_s_61d(val* self, val* p0) {
{ /* Inline model#MPropDef#to_s= (self,p0) on <self:Object(MPropDef)> */
self->attrs[COLOR_model__MPropDef___to_s].val = p0; /* _to_s on <self:Object(MPropDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MPropDef#is_intro for (self: MPropDef): Bool */
short int model__MPropDef__is_intro(val* self) {
short int var /* : Bool */;
val* var1 /* : MProperty */;
val* var3 /* : MProperty */;
val* var4 /* : MPropDef */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var3 = self->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = model__MProperty__intro(var1);
}
{
{ /* Inline kernel#Object#== (var4,self) on <var4:MPropDef> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var4,var_other) on <var4:MPropDef> */
var10 = var4 == var_other;
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
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MPropDef#is_intro for (self: Object): Bool */
short int VIRTUAL_model__MPropDef__is_intro(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MPropDef__is_intro(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MPropDef#lookup_next_definition for (self: MPropDef, MModule, MType): MPropDef */
val* model__MPropDef__lookup_next_definition(val* self, val* p0, val* p1) {
val* var /* : MPropDef */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MProperty */;
val* var5 /* : MProperty */;
val* var6 /* : Array[MPropDef] */;
val* var_mpropdefs /* var mpropdefs: Array[MPropDef] */;
val* var7 /* : ArrayIterator[nullable Object] */;
val* var_i /* var i: ArrayIterator[MPropDef] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
short int var20 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
var_mmodule = p0;
var_mtype = p1;
{
var1 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var2 = !var1;
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1914);
show_backtrace(1);
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var5 = self->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = model__MProperty__lookup_all_definitions(var3, var_mmodule, var_mtype);
}
var_mpropdefs = var6;
{
var7 = array__AbstractArrayRead__iterator(var_mpropdefs);
}
var_i = var7;
for(;;) {
{
var9 = array__ArrayIterator__is_ok(var_i);
}
var_ = var9;
if (var9){
{
var10 = array__ArrayIterator__item(var_i);
}
{
{ /* Inline kernel#Object#!= (var10,self) on <var10:nullable Object(MPropDef)> */
var_other = self;
{
var15 = ((short int (*)(val*, val*))(var10->class->vft[COLOR_kernel__Object___61d_61d]))(var10, var_other) /* == on <var10:nullable Object(MPropDef)>*/;
var14 = var15;
}
var16 = !var14;
var12 = var16;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
var8 = var11;
} else {
var8 = var_;
}
if (!var8) break;
{
array__ArrayIterator__next(var_i); /* Direct call array#ArrayIterator#next on <var_i:ArrayIterator[MPropDef]>*/
}
CONTINUE_label: (void)0;
}
BREAK_label: (void)0;
{
var17 = array__ArrayIterator__is_ok(var_i);
}
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert \'has_property\' failed");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1919);
show_backtrace(1);
}
{
array__ArrayIterator__next(var_i); /* Direct call array#ArrayIterator#next on <var_i:ArrayIterator[MPropDef]>*/
}
{
var18 = array__ArrayIterator__is_ok(var_i);
}
if (unlikely(!var18)) {
PRINT_ERROR("Runtime error: %s", "Assert \'has_next_property\' failed");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1921);
show_backtrace(1);
}
{
var19 = array__ArrayIterator__item(var_i);
}
/* <var19:nullable Object(MPropDef)> isa MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var19->type->table_size) {
var20 = 0;
} else {
var20 = var19->type->type_table[cltype] == idtype;
}
if (unlikely(!var20)) {
var_class_name = var19 == NULL ? "null" : var19->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1922);
show_backtrace(1);
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MPropDef#lookup_next_definition for (self: Object, MModule, MType): MPropDef */
val* VIRTUAL_model__MPropDef__lookup_next_definition(val* self, val* p0, val* p1) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = model__MPropDef__lookup_next_definition(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#init for (self: MMethodDef, MClassDef, MMethod, Location) */
void model__MMethodDef__init(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_mproperty /* var mproperty: MMethod */;
val* var_location /* var location: Location */;
/* Covariant cast for argument 1 (mproperty) <p1:MMethod> isa MPROPERTY */
/* <p1:MMethod> isa MPROPERTY */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPERTY];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPERTY", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1933);
show_backtrace(1);
}
var_mclassdef = p0;
var_mproperty = p1;
var_location = p2;
{
model__MPropDef__init(self, p0, p1, p2); /* Direct call model#MPropDef#init on <self:MMethodDef>*/
}
RET_LABEL:;
}
/* method model#MMethodDef#init for (self: Object, MClassDef, MMethod, Location) */
void VIRTUAL_model__MMethodDef__init(val* self, val* p0, val* p1, val* p2) {
model__MMethodDef__init(self, p0, p1, p2); /* Direct call model#MMethodDef#init on <self:Object(MMethodDef)>*/
RET_LABEL:;
}
/* method model#MMethodDef#msignature for (self: MMethodDef): nullable MSignature */
val* model__MMethodDef__msignature(val* self) {
val* var /* : nullable MSignature */;
val* var1 /* : nullable MSignature */;
var1 = self->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#msignature for (self: Object): nullable MSignature */
val* VIRTUAL_model__MMethodDef__msignature(val* self) {
val* var /* : nullable MSignature */;
val* var1 /* : nullable MSignature */;
val* var3 /* : nullable MSignature */;
{ /* Inline model#MMethodDef#msignature (self) on <self:Object(MMethodDef)> */
var3 = self->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <self:Object(MMethodDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#msignature= for (self: MMethodDef, nullable MSignature) */
void model__MMethodDef__msignature_61d(val* self, val* p0) {
self->attrs[COLOR_model__MMethodDef___msignature].val = p0; /* _msignature on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#msignature= for (self: Object, nullable MSignature) */
void VIRTUAL_model__MMethodDef__msignature_61d(val* self, val* p0) {
{ /* Inline model#MMethodDef#msignature= (self,p0) on <self:Object(MMethodDef)> */
self->attrs[COLOR_model__MMethodDef___msignature].val = p0; /* _msignature on <self:Object(MMethodDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MMethodDef#is_abstract for (self: MMethodDef): Bool */
short int model__MMethodDef__is_abstract(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MMethodDef___is_abstract].s; /* _is_abstract on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_abstract for (self: Object): Bool */
short int VIRTUAL_model__MMethodDef__is_abstract(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline model#MMethodDef#is_abstract (self) on <self:Object(MMethodDef)> */
var3 = self->attrs[COLOR_model__MMethodDef___is_abstract].s; /* _is_abstract on <self:Object(MMethodDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_abstract= for (self: MMethodDef, Bool) */
void model__MMethodDef__is_abstract_61d(val* self, short int p0) {
self->attrs[COLOR_model__MMethodDef___is_abstract].s = p0; /* _is_abstract on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#is_abstract= for (self: Object, Bool) */
void VIRTUAL_model__MMethodDef__is_abstract_61d(val* self, short int p0) {
{ /* Inline model#MMethodDef#is_abstract= (self,p0) on <self:Object(MMethodDef)> */
self->attrs[COLOR_model__MMethodDef___is_abstract].s = p0; /* _is_abstract on <self:Object(MMethodDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MMethodDef#is_intern for (self: MMethodDef): Bool */
short int model__MMethodDef__is_intern(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MMethodDef___is_intern].s; /* _is_intern on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_intern for (self: Object): Bool */
short int VIRTUAL_model__MMethodDef__is_intern(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline model#MMethodDef#is_intern (self) on <self:Object(MMethodDef)> */
var3 = self->attrs[COLOR_model__MMethodDef___is_intern].s; /* _is_intern on <self:Object(MMethodDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_intern= for (self: MMethodDef, Bool) */
void model__MMethodDef__is_intern_61d(val* self, short int p0) {
self->attrs[COLOR_model__MMethodDef___is_intern].s = p0; /* _is_intern on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#is_intern= for (self: Object, Bool) */
void VIRTUAL_model__MMethodDef__is_intern_61d(val* self, short int p0) {
{ /* Inline model#MMethodDef#is_intern= (self,p0) on <self:Object(MMethodDef)> */
self->attrs[COLOR_model__MMethodDef___is_intern].s = p0; /* _is_intern on <self:Object(MMethodDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MMethodDef#is_extern for (self: MMethodDef): Bool */
short int model__MMethodDef__is_extern(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MMethodDef___is_extern].s; /* _is_extern on <self:MMethodDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_extern for (self: Object): Bool */
short int VIRTUAL_model__MMethodDef__is_extern(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline model#MMethodDef#is_extern (self) on <self:Object(MMethodDef)> */
var3 = self->attrs[COLOR_model__MMethodDef___is_extern].s; /* _is_extern on <self:Object(MMethodDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MMethodDef#is_extern= for (self: MMethodDef, Bool) */
void model__MMethodDef__is_extern_61d(val* self, short int p0) {
self->attrs[COLOR_model__MMethodDef___is_extern].s = p0; /* _is_extern on <self:MMethodDef> */
RET_LABEL:;
}
/* method model#MMethodDef#is_extern= for (self: Object, Bool) */
void VIRTUAL_model__MMethodDef__is_extern_61d(val* self, short int p0) {
{ /* Inline model#MMethodDef#is_extern= (self,p0) on <self:Object(MMethodDef)> */
self->attrs[COLOR_model__MMethodDef___is_extern].s = p0; /* _is_extern on <self:Object(MMethodDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MAttributeDef#init for (self: MAttributeDef, MClassDef, MAttribute, Location) */
void model__MAttributeDef__init(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_mproperty /* var mproperty: MAttribute */;
val* var_location /* var location: Location */;
/* Covariant cast for argument 1 (mproperty) <p1:MAttribute> isa MPROPERTY */
/* <p1:MAttribute> isa MPROPERTY */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPERTY];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPERTY", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1958);
show_backtrace(1);
}
var_mclassdef = p0;
var_mproperty = p1;
var_location = p2;
{
model__MPropDef__init(self, p0, p1, p2); /* Direct call model#MPropDef#init on <self:MAttributeDef>*/
}
RET_LABEL:;
}
/* method model#MAttributeDef#init for (self: Object, MClassDef, MAttribute, Location) */
void VIRTUAL_model__MAttributeDef__init(val* self, val* p0, val* p1, val* p2) {
model__MAttributeDef__init(self, p0, p1, p2); /* Direct call model#MAttributeDef#init on <self:Object(MAttributeDef)>*/
RET_LABEL:;
}
/* method model#MAttributeDef#static_mtype for (self: MAttributeDef): nullable MType */
val* model__MAttributeDef__static_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <self:MAttributeDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MAttributeDef#static_mtype for (self: Object): nullable MType */
val* VIRTUAL_model__MAttributeDef__static_mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
{ /* Inline model#MAttributeDef#static_mtype (self) on <self:Object(MAttributeDef)> */
var3 = self->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <self:Object(MAttributeDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MAttributeDef#static_mtype= for (self: MAttributeDef, nullable MType) */
void model__MAttributeDef__static_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_model__MAttributeDef___static_mtype].val = p0; /* _static_mtype on <self:MAttributeDef> */
RET_LABEL:;
}
/* method model#MAttributeDef#static_mtype= for (self: Object, nullable MType) */
void VIRTUAL_model__MAttributeDef__static_mtype_61d(val* self, val* p0) {
{ /* Inline model#MAttributeDef#static_mtype= (self,p0) on <self:Object(MAttributeDef)> */
self->attrs[COLOR_model__MAttributeDef___static_mtype].val = p0; /* _static_mtype on <self:Object(MAttributeDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MVirtualTypeDef#init for (self: MVirtualTypeDef, MClassDef, MVirtualTypeProp, Location) */
void model__MVirtualTypeDef__init(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_mproperty /* var mproperty: MVirtualTypeProp */;
val* var_location /* var location: Location */;
/* Covariant cast for argument 1 (mproperty) <p1:MVirtualTypeProp> isa MPROPERTY */
/* <p1:MVirtualTypeProp> isa MPROPERTY */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTMPROPERTY];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p1->type->table_size) {
var = 0;
} else {
var = p1->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : p1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MPROPERTY", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1974);
show_backtrace(1);
}
var_mclassdef = p0;
var_mproperty = p1;
var_location = p2;
{
model__MPropDef__init(self, p0, p1, p2); /* Direct call model#MPropDef#init on <self:MVirtualTypeDef>*/
}
RET_LABEL:;
}
/* method model#MVirtualTypeDef#init for (self: Object, MClassDef, MVirtualTypeProp, Location) */
void VIRTUAL_model__MVirtualTypeDef__init(val* self, val* p0, val* p1, val* p2) {
model__MVirtualTypeDef__init(self, p0, p1, p2); /* Direct call model#MVirtualTypeDef#init on <self:Object(MVirtualTypeDef)>*/
RET_LABEL:;
}
/* method model#MVirtualTypeDef#bound for (self: MVirtualTypeDef): nullable MType */
val* model__MVirtualTypeDef__bound(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_model__MVirtualTypeDef___bound].val; /* _bound on <self:MVirtualTypeDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualTypeDef#bound for (self: Object): nullable MType */
val* VIRTUAL_model__MVirtualTypeDef__bound(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
{ /* Inline model#MVirtualTypeDef#bound (self) on <self:Object(MVirtualTypeDef)> */
var3 = self->attrs[COLOR_model__MVirtualTypeDef___bound].val; /* _bound on <self:Object(MVirtualTypeDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualTypeDef#bound= for (self: MVirtualTypeDef, nullable MType) */
void model__MVirtualTypeDef__bound_61d(val* self, val* p0) {
self->attrs[COLOR_model__MVirtualTypeDef___bound].val = p0; /* _bound on <self:MVirtualTypeDef> */
RET_LABEL:;
}
/* method model#MVirtualTypeDef#bound= for (self: Object, nullable MType) */
void VIRTUAL_model__MVirtualTypeDef__bound_61d(val* self, val* p0) {
{ /* Inline model#MVirtualTypeDef#bound= (self,p0) on <self:Object(MVirtualTypeDef)> */
self->attrs[COLOR_model__MVirtualTypeDef___bound].val = p0; /* _bound on <self:Object(MVirtualTypeDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MVirtualTypeDef#is_fixed for (self: MVirtualTypeDef): Bool */
short int model__MVirtualTypeDef__is_fixed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <self:MVirtualTypeDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualTypeDef#is_fixed for (self: Object): Bool */
short int VIRTUAL_model__MVirtualTypeDef__is_fixed(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline model#MVirtualTypeDef#is_fixed (self) on <self:Object(MVirtualTypeDef)> */
var3 = self->attrs[COLOR_model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <self:Object(MVirtualTypeDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MVirtualTypeDef#is_fixed= for (self: MVirtualTypeDef, Bool) */
void model__MVirtualTypeDef__is_fixed_61d(val* self, short int p0) {
self->attrs[COLOR_model__MVirtualTypeDef___is_fixed].s = p0; /* _is_fixed on <self:MVirtualTypeDef> */
RET_LABEL:;
}
/* method model#MVirtualTypeDef#is_fixed= for (self: Object, Bool) */
void VIRTUAL_model__MVirtualTypeDef__is_fixed_61d(val* self, short int p0) {
{ /* Inline model#MVirtualTypeDef#is_fixed= (self,p0) on <self:Object(MVirtualTypeDef)> */
self->attrs[COLOR_model__MVirtualTypeDef___is_fixed].s = p0; /* _is_fixed on <self:Object(MVirtualTypeDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClassKind#to_s for (self: MClassKind): String */
val* model__MClassKind__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_model__MClassKind___to_s].val; /* _to_s on <self:MClassKind> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1997);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassKind#to_s for (self: Object): String */
val* VIRTUAL_model__MClassKind__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline model#MClassKind#to_s (self) on <self:Object(MClassKind)> */
var3 = self->attrs[COLOR_model__MClassKind___to_s].val; /* _to_s on <self:Object(MClassKind)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1997);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassKind#to_s= for (self: MClassKind, String) */
void model__MClassKind__to_s_61d(val* self, val* p0) {
self->attrs[COLOR_model__MClassKind___to_s].val = p0; /* _to_s on <self:MClassKind> */
RET_LABEL:;
}
/* method model#MClassKind#to_s= for (self: Object, String) */
void VIRTUAL_model__MClassKind__to_s_61d(val* self, val* p0) {
{ /* Inline model#MClassKind#to_s= (self,p0) on <self:Object(MClassKind)> */
self->attrs[COLOR_model__MClassKind___to_s].val = p0; /* _to_s on <self:Object(MClassKind)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClassKind#need_init for (self: MClassKind): Bool */
short int model__MClassKind__need_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_model__MClassKind___need_init].s; /* _need_init on <self:MClassKind> */
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassKind#need_init for (self: Object): Bool */
short int VIRTUAL_model__MClassKind__need_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline model#MClassKind#need_init (self) on <self:Object(MClassKind)> */
var3 = self->attrs[COLOR_model__MClassKind___need_init].s; /* _need_init on <self:Object(MClassKind)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method model#MClassKind#need_init= for (self: MClassKind, Bool) */
void model__MClassKind__need_init_61d(val* self, short int p0) {
self->attrs[COLOR_model__MClassKind___need_init].s = p0; /* _need_init on <self:MClassKind> */
RET_LABEL:;
}
/* method model#MClassKind#need_init= for (self: Object, Bool) */
void VIRTUAL_model__MClassKind__need_init_61d(val* self, short int p0) {
{ /* Inline model#MClassKind#need_init= (self,p0) on <self:Object(MClassKind)> */
self->attrs[COLOR_model__MClassKind___need_init].s = p0; /* _need_init on <self:Object(MClassKind)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method model#MClassKind#init for (self: MClassKind, String, Bool) */
void model__MClassKind__init(val* self, val* p0, short int p1) {
val* var_s /* var s: String */;
short int var_need_init /* var need_init: Bool */;
var_s = p0;
var_need_init = p1;
{
{ /* Inline model#MClassKind#to_s= (self,var_s) on <self:MClassKind> */
self->attrs[COLOR_model__MClassKind___to_s].val = var_s; /* _to_s on <self:MClassKind> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClassKind#need_init= (self,var_need_init) on <self:MClassKind> */
self->attrs[COLOR_model__MClassKind___need_init].s = var_need_init; /* _need_init on <self:MClassKind> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method model#MClassKind#init for (self: Object, String, Bool) */
void VIRTUAL_model__MClassKind__init(val* self, val* p0, short int p1) {
model__MClassKind__init(self, p0, p1); /* Direct call model#MClassKind#init on <self:Object(MClassKind)>*/
RET_LABEL:;
}
/* method model#MClassKind#can_specialize for (self: MClassKind, MClassKind): Bool */
short int model__MClassKind__can_specialize(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: MClassKind */;
val* var1 /* : MClassKind */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other5 /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MClassKind */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
val* var18 /* : MClassKind */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : MClassKind */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : MClassKind */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
short int var_47 /* var : Bool */;
val* var48 /* : MClassKind */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
var_other = p0;
{
var1 = model__Object__interface_kind(self);
}
{
{ /* Inline kernel#Object#== (var_other,var1) on <var_other:MClassKind> */
var_other5 = var1;
{
{ /* Inline kernel#Object#is_same_instance (var_other,var_other5) on <var_other:MClassKind> */
var8 = var_other == var_other5;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
var9 = 1;
var = var9;
goto RET_LABEL;
} else {
}
{
var11 = model__Object__interface_kind(self);
}
{
{ /* Inline kernel#Object#== (self,var11) on <self:MClassKind> */
var_other5 = var11;
{
{ /* Inline kernel#Object#is_same_instance (self,var_other5) on <self:MClassKind> */
var17 = self == var_other5;
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
var_ = var12;
if (var12){
var10 = var_;
} else {
{
var18 = model__Object__enum_kind(self);
}
{
{ /* Inline kernel#Object#== (self,var18) on <self:MClassKind> */
var_other5 = var18;
{
{ /* Inline kernel#Object#is_same_instance (self,var_other5) on <self:MClassKind> */
var24 = self == var_other5;
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
var10 = var19;
}
if (var10){
var25 = 0;
var = var25;
goto RET_LABEL;
} else {
{
var26 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (self,var26) on <self:MClassKind> */
var_other5 = var26;
{
{ /* Inline kernel#Object#is_same_instance (self,var_other5) on <self:MClassKind> */
var32 = self == var_other5;
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
{
{ /* Inline kernel#Object#== (self,var_other) on <self:MClassKind> */
var_other5 = var_other;
{
{ /* Inline kernel#Object#is_same_instance (self,var_other5) on <self:MClassKind> */
var38 = self == var_other5;
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
var = var33;
goto RET_LABEL;
} else {
{
var40 = model__Object__enum_kind(self);
}
{
{ /* Inline kernel#Object#== (var_other,var40) on <var_other:MClassKind> */
var_other5 = var40;
{
{ /* Inline kernel#Object#is_same_instance (var_other,var_other5) on <var_other:MClassKind> */
var46 = var_other == var_other5;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var41 = var42;
}
var_47 = var41;
if (var41){
var39 = var_47;
} else {
{
var48 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var_other,var48) on <var_other:MClassKind> */
var_other5 = var48;
{
{ /* Inline kernel#Object#is_same_instance (var_other,var_other5) on <var_other:MClassKind> */
var54 = var_other == var_other5;
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
var39 = var49;
}
if (var39){
var55 = 0;
var = var55;
goto RET_LABEL;
} else {
}
}
}
var56 = 1;
var = var56;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#MClassKind#can_specialize for (self: Object, MClassKind): Bool */
short int VIRTUAL_model__MClassKind__can_specialize(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = model__MClassKind__can_specialize(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Object#abstract_kind for (self: Object): MClassKind */
val* model__Object__abstract_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
short int var8 /* : Bool */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model__MClassKind(&type_model__MClassKind);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "abstract class";
var6 = 14;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 1;
{
model__MClassKind__init(var2, var4, var8); /* Direct call model#MClassKind#init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Object#abstract_kind for (self: Object): MClassKind */
val* VIRTUAL_model__Object__abstract_kind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = model__Object__abstract_kind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Object#concrete_kind for (self: Object): MClassKind */
val* model__Object__concrete_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
short int var8 /* : Bool */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model__MClassKind(&type_model__MClassKind);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "class";
var6 = 5;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 1;
{
model__MClassKind__init(var2, var4, var8); /* Direct call model#MClassKind#init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Object#concrete_kind for (self: Object): MClassKind */
val* VIRTUAL_model__Object__concrete_kind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = model__Object__concrete_kind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Object#interface_kind for (self: Object): MClassKind */
val* model__Object__interface_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
short int var8 /* : Bool */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model__MClassKind(&type_model__MClassKind);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "interface";
var6 = 9;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 0;
{
model__MClassKind__init(var2, var4, var8); /* Direct call model#MClassKind#init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Object#interface_kind for (self: Object): MClassKind */
val* VIRTUAL_model__Object__interface_kind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = model__Object__interface_kind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Object#enum_kind for (self: Object): MClassKind */
val* model__Object__enum_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
short int var8 /* : Bool */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model__MClassKind(&type_model__MClassKind);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "enum";
var6 = 4;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 0;
{
model__MClassKind__init(var2, var4, var8); /* Direct call model#MClassKind#init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Object#enum_kind for (self: Object): MClassKind */
val* VIRTUAL_model__Object__enum_kind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = model__Object__enum_kind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method model#Object#extern_kind for (self: Object): MClassKind */
val* model__Object__extern_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
short int var8 /* : Bool */;
if (varonce_guard) {
var1 = varonce;
} else {
var2 = NEW_model__MClassKind(&type_model__MClassKind);
if (varonce3) {
var4 = varonce3;
} else {
var5 = "extern class";
var6 = 12;
var7 = string__NativeString__to_s_with_length(var5, var6);
var4 = var7;
varonce3 = var4;
}
var8 = 0;
{
model__MClassKind__init(var2, var4, var8); /* Direct call model#MClassKind#init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Object#extern_kind for (self: Object): MClassKind */
val* VIRTUAL_model__Object__extern_kind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = model__Object__extern_kind(self);
var = var1;
RET_LABEL:;
return var;
}
