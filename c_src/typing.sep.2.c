#include "typing.sep.0.h"
/* method typing#ANotExpr#accept_typing for (self: ANotExpr, TypeVisitor) */
void typing__ANotExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var2 /* : nullable MType */;
var_v = p0;
{
var = parser_nodes__ANotExpr__n_expr(self);
}
{
var1 = typing__TypeVisitor__visit_expr_bool(var_v, var);
}
var1;
{
var2 = typing__TypeVisitor__type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var2) on <self:ANotExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:ANotExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ANotExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ANotExpr__accept_typing(val* self, val* p0) {
typing__ANotExpr__accept_typing(self, p0); /* Direct call typing#ANotExpr#accept_typing on <self:Object(ANotExpr)>*/
RET_LABEL:;
}
/* method typing#AOrElseExpr#accept_typing for (self: AOrElseExpr, TypeVisitor) */
void typing__AOrElseExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_t1 /* var t1: nullable MType */;
val* var2 /* : AExpr */;
val* var3 /* : nullable MType */;
val* var_t2 /* var t2: nullable MType */;
short int var4 /* : Bool */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : MType */;
val* var20 /* : Array[MType] */;
long var21 /* : Int */;
val* var_22 /* var : Array[MType] */;
val* var23 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
val* var24 /* : null */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
val* var31 /* : MModule */;
val* var33 /* : MModule */;
val* var34 /* : MClassType */;
short int var35 /* : Bool */;
int cltype;
int idtype;
val* var36 /* : MType */;
var_v = p0;
{
var = parser_nodes__AOrElseExpr__n_expr(self);
}
{
var1 = typing__TypeVisitor__visit_expr(var_v, var);
}
var_t1 = var1;
{
var2 = parser_nodes__AOrElseExpr__n_expr2(self);
}
{
var3 = typing__TypeVisitor__visit_expr(var_v, var2);
}
var_t2 = var3;
var5 = NULL;
if (var_t1 == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t1,var5) on <var_t1:nullable MType> */
var_other = var5;
{
{ /* Inline kernel#Object#is_same_instance (var_t1,var_other) on <var_t1:nullable MType(MType)> */
var11 = var_t1 == var_other;
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
var_ = var6;
if (var6){
var4 = var_;
} else {
var12 = NULL;
if (var_t2 == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t2,var12) on <var_t2:nullable MType> */
var_other = var12;
{
{ /* Inline kernel#Object#is_same_instance (var_t2,var_other) on <var_t2:nullable MType(MType)> */
var18 = var_t2 == var_other;
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
var4 = var13;
}
if (var4){
goto RET_LABEL;
} else {
}
{
var19 = ((val* (*)(val*))(var_t1->class->vft[COLOR_model__MType__as_notnullable]))(var_t1) /* as_notnullable on <var_t1:nullable MType(MType)>*/;
}
var_t1 = var19;
var20 = NEW_array__Array(&type_array__Arraymodel__MType);
var21 = 2;
{
array__Array__with_capacity(var20, var21); /* Direct call array#Array#with_capacity on <var20:Array[MType]>*/
}
var_22 = var20;
{
array__AbstractArray__push(var_22, var_t1); /* Direct call array#AbstractArray#push on <var_22:Array[MType]>*/
}
{
array__AbstractArray__push(var_22, var_t2); /* Direct call array#AbstractArray#push on <var_22:Array[MType]>*/
}
{
var23 = typing__TypeVisitor__merge_types(var_v, self, var_22);
}
var_t = var23;
var24 = NULL;
if (var_t == NULL) {
var25 = 1; /* is null */
} else {
var25 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,var24) on <var_t:nullable MType> */
var_other = var24;
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other) on <var_t:nullable MType(MType)> */
var30 = var_t == var_other;
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
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var33 = var_v->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = model__MModule__object_type(var31);
}
var_t = var34;
/* <var_t2:nullable MType(MType)> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_t2->type->table_size) {
var35 = 0;
} else {
var35 = var_t2->type->type_table[cltype] == idtype;
}
if (var35){
{
var36 = model__MType__as_nullable(var_t);
}
var_t = var36;
} else {
}
} else {
}
{
{ /* Inline typing#AExpr#mtype= (self,var_t) on <self:AOrElseExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var_t; /* _mtype on <self:AOrElseExpr> */
RET_LABEL37:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AOrElseExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AOrElseExpr__accept_typing(val* self, val* p0) {
typing__AOrElseExpr__accept_typing(self, p0); /* Direct call typing#AOrElseExpr#accept_typing on <self:Object(AOrElseExpr)>*/
RET_LABEL:;
}
/* method typing#ATrueExpr#accept_typing for (self: ATrueExpr, TypeVisitor) */
void typing__ATrueExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
var_v = p0;
{
var = typing__TypeVisitor__type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var) on <self:ATrueExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var; /* _mtype on <self:ATrueExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ATrueExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ATrueExpr__accept_typing(val* self, val* p0) {
typing__ATrueExpr__accept_typing(self, p0); /* Direct call typing#ATrueExpr#accept_typing on <self:Object(ATrueExpr)>*/
RET_LABEL:;
}
/* method typing#AFalseExpr#accept_typing for (self: AFalseExpr, TypeVisitor) */
void typing__AFalseExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
var_v = p0;
{
var = typing__TypeVisitor__type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var) on <self:AFalseExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var; /* _mtype on <self:AFalseExpr> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AFalseExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AFalseExpr__accept_typing(val* self, val* p0) {
typing__AFalseExpr__accept_typing(self, p0); /* Direct call typing#AFalseExpr#accept_typing on <self:Object(AFalseExpr)>*/
RET_LABEL:;
}
/* method typing#AIntExpr#accept_typing for (self: AIntExpr, TypeVisitor) */
void typing__AIntExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "Int";
var2 = 3;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = typing__TypeVisitor__get_mclass(var_v, self, var);
}
var_mclass = var4;
var5 = NULL;
if (var_mclass == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var5) on <var_mclass:nullable MClass> */
var_other = var5;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var11 = var_mclass == var_other;
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
if (var6){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var14 = var_mclass->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var12) on <self:AIntExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var12; /* _mtype on <self:AIntExpr> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AIntExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AIntExpr__accept_typing(val* self, val* p0) {
typing__AIntExpr__accept_typing(self, p0); /* Direct call typing#AIntExpr#accept_typing on <self:Object(AIntExpr)>*/
RET_LABEL:;
}
/* method typing#AFloatExpr#accept_typing for (self: AFloatExpr, TypeVisitor) */
void typing__AFloatExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "Float";
var2 = 5;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = typing__TypeVisitor__get_mclass(var_v, self, var);
}
var_mclass = var4;
var5 = NULL;
if (var_mclass == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var5) on <var_mclass:nullable MClass> */
var_other = var5;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var11 = var_mclass == var_other;
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
if (var6){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var14 = var_mclass->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var12) on <self:AFloatExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var12; /* _mtype on <self:AFloatExpr> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AFloatExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AFloatExpr__accept_typing(val* self, val* p0) {
typing__AFloatExpr__accept_typing(self, p0); /* Direct call typing#AFloatExpr#accept_typing on <self:Object(AFloatExpr)>*/
RET_LABEL:;
}
/* method typing#ACharExpr#accept_typing for (self: ACharExpr, TypeVisitor) */
void typing__ACharExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "Char";
var2 = 4;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = typing__TypeVisitor__get_mclass(var_v, self, var);
}
var_mclass = var4;
var5 = NULL;
if (var_mclass == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var5) on <var_mclass:nullable MClass> */
var_other = var5;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var11 = var_mclass == var_other;
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
if (var6){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var14 = var_mclass->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var12) on <self:ACharExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var12; /* _mtype on <self:ACharExpr> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ACharExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ACharExpr__accept_typing(val* self, val* p0) {
typing__ACharExpr__accept_typing(self, p0); /* Direct call typing#ACharExpr#accept_typing on <self:Object(ACharExpr)>*/
RET_LABEL:;
}
/* method typing#AStringFormExpr#accept_typing for (self: AStringFormExpr, TypeVisitor) */
void typing__AStringFormExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "String";
var2 = 6;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = typing__TypeVisitor__get_mclass(var_v, self, var);
}
var_mclass = var4;
var5 = NULL;
if (var_mclass == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var5) on <var_mclass:nullable MClass> */
var_other = var5;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var11 = var_mclass == var_other;
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
if (var6){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var14 = var_mclass->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var12) on <self:AStringFormExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var12; /* _mtype on <self:AStringFormExpr> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AStringFormExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AStringFormExpr__accept_typing(val* self, val* p0) {
typing__AStringFormExpr__accept_typing(self, p0); /* Direct call typing#AStringFormExpr#accept_typing on <self:Object(AStringFormExpr)>*/
RET_LABEL:;
}
/* method typing#ASuperstringExpr#accept_typing for (self: ASuperstringExpr, TypeVisitor) */
void typing__ASuperstringExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var16 /* : ANodes[AExpr] */;
val* var18 /* : ANodes[AExpr] */;
val* var19 /* : Iterator[ANode] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_nexpr /* var nexpr: AExpr */;
val* var22 /* : MModule */;
val* var24 /* : MModule */;
val* var25 /* : MClassType */;
val* var26 /* : nullable MType */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "String";
var2 = 6;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = typing__TypeVisitor__get_mclass(var_v, self, var);
}
var_mclass = var4;
var5 = NULL;
if (var_mclass == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var5) on <var_mclass:nullable MClass> */
var_other = var5;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var11 = var_mclass == var_other;
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
if (var6){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClass#mclass_type (var_mclass) on <var_mclass:nullable MClass(MClass)> */
var14 = var_mclass->attrs[COLOR_model__MClass___mclass_type].val; /* _mclass_type on <var_mclass:nullable MClass(MClass)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 417);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var12) on <self:ASuperstringExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var12; /* _mtype on <self:ASuperstringExpr> */
RET_LABEL15:(void)0;
}
}
{
{ /* Inline parser_nodes#ASuperstringExpr#n_exprs (self) on <self:ASuperstringExpr> */
var18 = self->attrs[COLOR_parser_nodes__ASuperstringExpr___n_exprs].val; /* _n_exprs on <self:ASuperstringExpr> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2180);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = parser_nodes__ANodes__iterator(var16);
}
for(;;) {
{
var20 = ((short int (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var19) /* is_ok on <var19:Iterator[ANode]>*/;
}
if(!var20) break;
{
var21 = ((val* (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__item]))(var19) /* item on <var19:Iterator[ANode]>*/;
}
var_nexpr = var21;
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var24 = var_v->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = model__MModule__object_type(var22);
}
{
var26 = typing__TypeVisitor__visit_expr_subtype(var_v, var_nexpr, var25);
}
var26;
CONTINUE_label: (void)0;
{
((void (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__next]))(var19) /* next on <var19:Iterator[ANode]>*/;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method typing#ASuperstringExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ASuperstringExpr__accept_typing(val* self, val* p0) {
typing__ASuperstringExpr__accept_typing(self, p0); /* Direct call typing#ASuperstringExpr#accept_typing on <self:Object(ASuperstringExpr)>*/
RET_LABEL:;
}
/* method typing#AArrayExpr#with_capacity_callsite for (self: AArrayExpr): nullable CallSite */
val* typing__AArrayExpr__with_capacity_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_typing__AArrayExpr___with_capacity_callsite].val; /* _with_capacity_callsite on <self:AArrayExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AArrayExpr#with_capacity_callsite for (self: Object): nullable CallSite */
val* VIRTUAL_typing__AArrayExpr__with_capacity_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
val* var3 /* : nullable CallSite */;
{ /* Inline typing#AArrayExpr#with_capacity_callsite (self) on <self:Object(AArrayExpr)> */
var3 = self->attrs[COLOR_typing__AArrayExpr___with_capacity_callsite].val; /* _with_capacity_callsite on <self:Object(AArrayExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AArrayExpr#with_capacity_callsite= for (self: AArrayExpr, nullable CallSite) */
void typing__AArrayExpr__with_capacity_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AArrayExpr___with_capacity_callsite].val = p0; /* _with_capacity_callsite on <self:AArrayExpr> */
RET_LABEL:;
}
/* method typing#AArrayExpr#with_capacity_callsite= for (self: Object, nullable CallSite) */
void VIRTUAL_typing__AArrayExpr__with_capacity_callsite_61d(val* self, val* p0) {
{ /* Inline typing#AArrayExpr#with_capacity_callsite= (self,p0) on <self:Object(AArrayExpr)> */
self->attrs[COLOR_typing__AArrayExpr___with_capacity_callsite].val = p0; /* _with_capacity_callsite on <self:Object(AArrayExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#AArrayExpr#push_callsite for (self: AArrayExpr): nullable CallSite */
val* typing__AArrayExpr__push_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_typing__AArrayExpr___push_callsite].val; /* _push_callsite on <self:AArrayExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AArrayExpr#push_callsite for (self: Object): nullable CallSite */
val* VIRTUAL_typing__AArrayExpr__push_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
val* var3 /* : nullable CallSite */;
{ /* Inline typing#AArrayExpr#push_callsite (self) on <self:Object(AArrayExpr)> */
var3 = self->attrs[COLOR_typing__AArrayExpr___push_callsite].val; /* _push_callsite on <self:Object(AArrayExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AArrayExpr#push_callsite= for (self: AArrayExpr, nullable CallSite) */
void typing__AArrayExpr__push_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AArrayExpr___push_callsite].val = p0; /* _push_callsite on <self:AArrayExpr> */
RET_LABEL:;
}
/* method typing#AArrayExpr#push_callsite= for (self: Object, nullable CallSite) */
void VIRTUAL_typing__AArrayExpr__push_callsite_61d(val* self, val* p0) {
{ /* Inline typing#AArrayExpr#push_callsite= (self,p0) on <self:Object(AArrayExpr)> */
self->attrs[COLOR_typing__AArrayExpr___push_callsite].val = p0; /* _push_callsite on <self:Object(AArrayExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#AArrayExpr#accept_typing for (self: AArrayExpr, TypeVisitor) */
void typing__AArrayExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : Array[nullable MType] */;
val* var_mtypes /* var mtypes: Array[nullable MType] */;
val* var1 /* : AExprs */;
val* var2 /* : ANodes[AExpr] */;
val* var4 /* : ANodes[AExpr] */;
val* var5 /* : Iterator[ANode] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_e /* var e: AExpr */;
val* var8 /* : nullable MType */;
val* var_t /* var t: nullable MType */;
val* var9 /* : null */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var17 /* : null */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : NativeString */;
long var31 /* : Int */;
val* var32 /* : FlatString */;
val* var33 /* : String */;
val* var34 /* : Array[Object] */;
long var35 /* : Int */;
val* var36 /* : NativeArray[Object] */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : FlatString */;
val* var43 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var44 /* : null */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : Array[MType] */;
long var52 /* : Int */;
val* var_ /* var : Array[MType] */;
val* var53 /* : MClassType */;
val* var_array_mtype /* var array_mtype: MClassType */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
short int var59 /* : Bool */;
val* var60 /* : nullable CallSite */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : FlatString */;
short int var67 /* : Bool */;
val* var68 /* : nullable CallSite */;
var_v = p0;
var = NEW_array__Array(&type_array__Arraynullable_model__MType);
{
array__Array__init(var); /* Direct call array#Array#init on <var:Array[nullable MType]>*/
}
var_mtypes = var;
{
var1 = parser_nodes__AArrayExpr__n_exprs(self);
}
{
{ /* Inline parser_nodes#AExprs#n_exprs (var1) on <var1:AExprs> */
var4 = var1->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <var1:AExprs> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = parser_nodes__ANodes__iterator(var2);
}
for(;;) {
{
var6 = ((short int (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var5) /* is_ok on <var5:Iterator[ANode]>*/;
}
if(!var6) break;
{
var7 = ((val* (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__item]))(var5) /* item on <var5:Iterator[ANode]>*/;
}
var_e = var7;
{
var8 = typing__TypeVisitor__visit_expr(var_v, var_e);
}
var_t = var8;
var9 = NULL;
if (var_t == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t,var9) on <var_t:nullable MType> */
var_other = var9;
{
{ /* Inline kernel#Object#is_same_instance (var_t,var_other) on <var_t:nullable MType(MType)> */
var15 = var_t == var_other;
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
goto RET_LABEL;
} else {
}
{
array__Array__add(var_mtypes, var_t); /* Direct call array#Array#add on <var_mtypes:Array[nullable MType]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var5->class->vft[COLOR_abstract_collection__Iterator__next]))(var5) /* next on <var5:Iterator[ANode]>*/;
}
}
BREAK_label: (void)0;
{
var16 = typing__TypeVisitor__merge_types(var_v, self, var_mtypes);
}
var_mtype = var16;
var17 = NULL;
if (var_mtype == NULL) {
var18 = 1; /* is null */
} else {
var18 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var17) on <var_mtype:nullable MType> */
var_other = var17;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var23 = var_mtype == var_other;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
if (var18){
if (varonce) {
var24 = varonce;
} else {
var25 = "Type Error: ambiguous array type ";
var26 = 33;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce = var24;
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = " ";
var31 = 1;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
{
var33 = string__Collection__join(var_mtypes, var29);
}
var34 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var34 = array_instance Array[Object] */
var35 = 2;
var36 = NEW_array__NativeArray(var35, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var36)->values[0] = (val*) var24;
((struct instance_array__NativeArray*)var36)->values[1] = (val*) var33;
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
goto RET_LABEL;
} else {
}
if (varonce38) {
var39 = varonce38;
} else {
var40 = "Array";
var41 = 5;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
{
var43 = typing__TypeVisitor__get_mclass(var_v, self, var39);
}
var_mclass = var43;
var44 = NULL;
if (var_mclass == NULL) {
var45 = 1; /* is null */
} else {
var45 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var44) on <var_mclass:nullable MClass> */
var_other = var44;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var50 = var_mclass == var_other;
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
goto RET_LABEL;
} else {
}
var51 = NEW_array__Array(&type_array__Arraymodel__MType);
var52 = 1;
{
array__Array__with_capacity(var51, var52); /* Direct call array#Array#with_capacity on <var51:Array[MType]>*/
}
var_ = var51;
{
array__AbstractArray__push(var_, var_mtype); /* Direct call array#AbstractArray#push on <var_:Array[MType]>*/
}
{
var53 = model__MClass__get_mtype(var_mclass, var_);
}
var_array_mtype = var53;
if (varonce54) {
var55 = varonce54;
} else {
var56 = "with_capacity";
var57 = 13;
var58 = string__NativeString__to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
var59 = 0;
{
var60 = typing__TypeVisitor__get_method(var_v, self, var_array_mtype, var55, var59);
}
{
{ /* Inline typing#AArrayExpr#with_capacity_callsite= (self,var60) on <self:AArrayExpr> */
self->attrs[COLOR_typing__AArrayExpr___with_capacity_callsite].val = var60; /* _with_capacity_callsite on <self:AArrayExpr> */
RET_LABEL61:(void)0;
}
}
if (varonce62) {
var63 = varonce62;
} else {
var64 = "push";
var65 = 4;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
var67 = 0;
{
var68 = typing__TypeVisitor__get_method(var_v, self, var_array_mtype, var63, var67);
}
{
{ /* Inline typing#AArrayExpr#push_callsite= (self,var68) on <self:AArrayExpr> */
self->attrs[COLOR_typing__AArrayExpr___push_callsite].val = var68; /* _push_callsite on <self:AArrayExpr> */
RET_LABEL69:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var_array_mtype) on <self:AArrayExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var_array_mtype; /* _mtype on <self:AArrayExpr> */
RET_LABEL70:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AArrayExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AArrayExpr__accept_typing(val* self, val* p0) {
typing__AArrayExpr__accept_typing(self, p0); /* Direct call typing#AArrayExpr#accept_typing on <self:Object(AArrayExpr)>*/
RET_LABEL:;
}
/* method typing#ARangeExpr#init_callsite for (self: ARangeExpr): nullable CallSite */
val* typing__ARangeExpr__init_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:ARangeExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ARangeExpr#init_callsite for (self: Object): nullable CallSite */
val* VIRTUAL_typing__ARangeExpr__init_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
val* var3 /* : nullable CallSite */;
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:Object(ARangeExpr)> */
var3 = self->attrs[COLOR_typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:Object(ARangeExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ARangeExpr#init_callsite= for (self: ARangeExpr, nullable CallSite) */
void typing__ARangeExpr__init_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_typing__ARangeExpr___init_callsite].val = p0; /* _init_callsite on <self:ARangeExpr> */
RET_LABEL:;
}
/* method typing#ARangeExpr#init_callsite= for (self: Object, nullable CallSite) */
void VIRTUAL_typing__ARangeExpr__init_callsite_61d(val* self, val* p0) {
{ /* Inline typing#ARangeExpr#init_callsite= (self,p0) on <self:Object(ARangeExpr)> */
self->attrs[COLOR_typing__ARangeExpr___init_callsite].val = p0; /* _init_callsite on <self:Object(ARangeExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#ARangeExpr#accept_typing for (self: ARangeExpr, TypeVisitor) */
void typing__ARangeExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : nullable MClass */;
val* var_discrete_class /* var discrete_class: nullable MClass */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MClassDef */;
val* var13 /* : MClassType */;
val* var15 /* : MClassType */;
val* var_discrete_type /* var discrete_type: MClassType */;
val* var16 /* : AExpr */;
val* var17 /* : nullable MType */;
val* var_t1 /* var t1: nullable MType */;
val* var18 /* : AExpr */;
val* var19 /* : nullable MType */;
val* var_t2 /* var t2: nullable MType */;
short int var20 /* : Bool */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var_ /* var : Bool */;
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
val* var40 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var41 /* : null */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
val* var49 /* : Array[MType] */;
long var50 /* : Int */;
val* var_51 /* var : Array[MType] */;
val* var52 /* : MClassType */;
val* var_mtype /* var mtype: nullable Object */;
short int var53 /* : Bool */;
val* var54 /* : Array[MType] */;
long var55 /* : Int */;
val* var_56 /* var : Array[MType] */;
val* var57 /* : MClassType */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : FlatString */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : FlatString */;
val* var68 /* : Array[Object] */;
long var69 /* : Int */;
val* var70 /* : NativeArray[Object] */;
val* var71 /* : String */;
short int var73 /* : Bool */;
int cltype;
int idtype;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
short int var79 /* : Bool */;
val* var80 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable Object */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : FlatString */;
short int var89 /* : Bool */;
val* var90 /* : nullable CallSite */;
var_v = p0;
if (varonce) {
var = varonce;
} else {
var1 = "Discrete";
var2 = 8;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = typing__TypeVisitor__get_mclass(var_v, self, var);
}
var_discrete_class = var4;
var5 = NULL;
if (var_discrete_class == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_discrete_class,var5) on <var_discrete_class:nullable MClass> */
var_other = var5;
{
{ /* Inline kernel#Object#is_same_instance (var_discrete_class,var_other) on <var_discrete_class:nullable MClass(MClass)> */
var11 = var_discrete_class == var_other;
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
if (var6){
goto RET_LABEL;
} else {
}
{
var12 = model__MClass__intro(var_discrete_class);
}
{
{ /* Inline model#MClassDef#bound_mtype (var12) on <var12:MClassDef> */
var15 = var12->attrs[COLOR_model__MClassDef___bound_mtype].val; /* _bound_mtype on <var12:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 477);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_discrete_type = var13;
{
var16 = parser_nodes__ARangeExpr__n_expr(self);
}
{
var17 = typing__TypeVisitor__visit_expr_subtype(var_v, var16, var_discrete_type);
}
var_t1 = var17;
{
var18 = parser_nodes__ARangeExpr__n_expr2(self);
}
{
var19 = typing__TypeVisitor__visit_expr_subtype(var_v, var18, var_discrete_type);
}
var_t2 = var19;
var21 = NULL;
if (var_t1 == NULL) {
var22 = 1; /* is null */
} else {
var22 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t1,var21) on <var_t1:nullable MType> */
var_other = var21;
{
{ /* Inline kernel#Object#is_same_instance (var_t1,var_other) on <var_t1:nullable MType(MType)> */
var27 = var_t1 == var_other;
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
var_ = var22;
if (var22){
var20 = var_;
} else {
var28 = NULL;
if (var_t2 == NULL) {
var29 = 1; /* is null */
} else {
var29 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_t2,var28) on <var_t2:nullable MType> */
var_other = var28;
{
{ /* Inline kernel#Object#is_same_instance (var_t2,var_other) on <var_t2:nullable MType(MType)> */
var34 = var_t2 == var_other;
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
var20 = var29;
}
if (var20){
goto RET_LABEL;
} else {
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = "Range";
var38 = 5;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
{
var40 = typing__TypeVisitor__get_mclass(var_v, self, var36);
}
var_mclass = var40;
var41 = NULL;
if (var_mclass == NULL) {
var42 = 1; /* is null */
} else {
var42 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mclass,var41) on <var_mclass:nullable MClass> */
var_other = var41;
{
{ /* Inline kernel#Object#is_same_instance (var_mclass,var_other) on <var_mclass:nullable MClass(MClass)> */
var47 = var_mclass == var_other;
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
goto RET_LABEL;
} else {
}
{
var48 = typing__TypeVisitor__is_subtype(var_v, var_t1, var_t2);
}
if (var48){
var49 = NEW_array__Array(&type_array__Arraymodel__MType);
var50 = 1;
{
array__Array__with_capacity(var49, var50); /* Direct call array#Array#with_capacity on <var49:Array[MType]>*/
}
var_51 = var49;
{
array__AbstractArray__push(var_51, var_t2); /* Direct call array#AbstractArray#push on <var_51:Array[MType]>*/
}
{
var52 = model__MClass__get_mtype(var_mclass, var_51);
}
var_mtype = var52;
} else {
{
var53 = typing__TypeVisitor__is_subtype(var_v, var_t2, var_t1);
}
if (var53){
var54 = NEW_array__Array(&type_array__Arraymodel__MType);
var55 = 1;
{
array__Array__with_capacity(var54, var55); /* Direct call array#Array#with_capacity on <var54:Array[MType]>*/
}
var_56 = var54;
{
array__AbstractArray__push(var_56, var_t1); /* Direct call array#AbstractArray#push on <var_56:Array[MType]>*/
}
{
var57 = model__MClass__get_mtype(var_mclass, var_56);
}
var_mtype = var57;
} else {
if (varonce58) {
var59 = varonce58;
} else {
var60 = "Type Error: Cannot create range: ";
var61 = 33;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
if (varonce63) {
var64 = varonce63;
} else {
var65 = " vs ";
var66 = 4;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
var68 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var68 = array_instance Array[Object] */
var69 = 4;
var70 = NEW_array__NativeArray(var69, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var70)->values[0] = (val*) var59;
((struct instance_array__NativeArray*)var70)->values[1] = (val*) var_t1;
((struct instance_array__NativeArray*)var70)->values[2] = (val*) var64;
((struct instance_array__NativeArray*)var70)->values[3] = (val*) var_t2;
{
((void (*)(val*, val*, long))(var68->class->vft[COLOR_array__Array__with_native]))(var68, var70, var69) /* with_native on <var68:Array[Object]>*/;
}
}
{
var71 = ((val* (*)(val*))(var68->class->vft[COLOR_string__Object__to_s]))(var68) /* to_s on <var68:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var71); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var_mtype) on <self:ARangeExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:ARangeExpr> */
RET_LABEL72:(void)0;
}
}
/* <self:ARangeExpr> isa ACrangeExpr */
cltype = type_parser_nodes__ACrangeExpr.color;
idtype = type_parser_nodes__ACrangeExpr.id;
if(cltype >= self->type->table_size) {
var73 = 0;
} else {
var73 = self->type->type_table[cltype] == idtype;
}
if (var73){
if (varonce74) {
var75 = varonce74;
} else {
var76 = "init";
var77 = 4;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
var79 = 0;
{
var80 = typing__TypeVisitor__get_method(var_v, self, var_mtype, var75, var79);
}
var_callsite = var80;
} else {
/* <self:ARangeExpr> isa AOrangeExpr */
cltype82 = type_parser_nodes__AOrangeExpr.color;
idtype83 = type_parser_nodes__AOrangeExpr.id;
if(cltype82 >= self->type->table_size) {
var81 = 0;
} else {
var81 = self->type->type_table[cltype82] == idtype83;
}
if (var81){
if (varonce84) {
var85 = varonce84;
} else {
var86 = "without_last";
var87 = 12;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
var89 = 0;
{
var90 = typing__TypeVisitor__get_method(var_v, self, var_mtype, var85, var89);
}
var_callsite = var90;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1149);
show_backtrace(1);
}
}
{
{ /* Inline typing#ARangeExpr#init_callsite= (self,var_callsite) on <self:ARangeExpr> */
self->attrs[COLOR_typing__ARangeExpr___init_callsite].val = var_callsite; /* _init_callsite on <self:ARangeExpr> */
RET_LABEL91:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ARangeExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ARangeExpr__accept_typing(val* self, val* p0) {
typing__ARangeExpr__accept_typing(self, p0); /* Direct call typing#ARangeExpr#accept_typing on <self:Object(ARangeExpr)>*/
RET_LABEL:;
}
/* method typing#ANullExpr#accept_typing for (self: ANullExpr, TypeVisitor) */
void typing__ANullExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var3 /* : Model */;
val* var5 /* : Model */;
val* var6 /* : MNullType */;
val* var8 /* : MNullType */;
var_v = p0;
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var2 = var_v->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var) on <var:MModule> */
var5 = var->attrs[COLOR_mmodule__MModule___model].val; /* _model on <var:MModule> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 74);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#Model#null_type (var3) on <var3:Model> */
var8 = var3->attrs[COLOR_model__Model___null_type].val; /* _null_type on <var3:Model> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _null_type");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 104);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var6) on <self:ANullExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var6; /* _mtype on <self:ANullExpr> */
RET_LABEL9:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ANullExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ANullExpr__accept_typing(val* self, val* p0) {
typing__ANullExpr__accept_typing(self, p0); /* Direct call typing#ANullExpr#accept_typing on <self:Object(ANullExpr)>*/
RET_LABEL:;
}
/* method typing#AIsaExpr#cast_type for (self: AIsaExpr): nullable MType */
val* typing__AIsaExpr__cast_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_typing__AIsaExpr___cast_type].val; /* _cast_type on <self:AIsaExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AIsaExpr#cast_type for (self: Object): nullable MType */
val* VIRTUAL_typing__AIsaExpr__cast_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
{ /* Inline typing#AIsaExpr#cast_type (self) on <self:Object(AIsaExpr)> */
var3 = self->attrs[COLOR_typing__AIsaExpr___cast_type].val; /* _cast_type on <self:Object(AIsaExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AIsaExpr#cast_type= for (self: AIsaExpr, nullable MType) */
void typing__AIsaExpr__cast_type_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AIsaExpr___cast_type].val = p0; /* _cast_type on <self:AIsaExpr> */
RET_LABEL:;
}
/* method typing#AIsaExpr#cast_type= for (self: Object, nullable MType) */
void VIRTUAL_typing__AIsaExpr__cast_type_61d(val* self, val* p0) {
{ /* Inline typing#AIsaExpr#cast_type= (self,p0) on <self:Object(AIsaExpr)> */
self->attrs[COLOR_typing__AIsaExpr___cast_type].val = p0; /* _cast_type on <self:Object(AIsaExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#AIsaExpr#accept_typing for (self: AIsaExpr, TypeVisitor) */
void typing__AIsaExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : AType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var4 /* : AExpr */;
val* var5 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : AExpr */;
val* var14 /* : nullable MType */;
val* var_orig /* var orig: nullable MType */;
val* var15 /* : String */;
val* var16 /* : null */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : String */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
val* var_from /* var from: String */;
val* var28 /* : String */;
val* var29 /* : null */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : String */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : FlatString */;
val* var_to /* var to: String */;
val* var42 /* : nullable FlowContext */;
val* var44 /* : nullable FlowContext */;
val* var45 /* : FlowContext */;
val* var47 /* : FlowContext */;
val* var48 /* : nullable MType */;
var_v = p0;
{
var = parser_nodes__AIsaExpr__n_expr(self);
}
{
var1 = parser_nodes__AIsaExpr__n_type(self);
}
{
var2 = typing__TypeVisitor__visit_expr_cast(var_v, self, var, var1);
}
var_mtype = var2;
{
{ /* Inline typing#AIsaExpr#cast_type= (self,var_mtype) on <self:AIsaExpr> */
self->attrs[COLOR_typing__AIsaExpr___cast_type].val = var_mtype; /* _cast_type on <self:AIsaExpr> */
RET_LABEL3:(void)0;
}
}
{
var4 = parser_nodes__AIsaExpr__n_expr(self);
}
{
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_typing__AExpr__its_variable]))(var4) /* its_variable on <var4:AExpr>*/;
}
var_variable = var5;
var6 = NULL;
if (var_variable == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_variable,var6) on <var_variable:nullable Variable> */
var_other = var6;
{
var11 = ((short int (*)(val*, val*))(var_variable->class->vft[COLOR_kernel__Object___61d_61d]))(var_variable, var_other) /* == on <var_variable:nullable Variable(Variable)>*/;
var10 = var11;
}
var12 = !var10;
var8 = var12;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
{
var13 = parser_nodes__AIsaExpr__n_expr(self);
}
{
var14 = ((val* (*)(val*))(var13->class->vft[COLOR_typing__AExpr__mtype]))(var13) /* mtype on <var13:AExpr>*/;
}
var_orig = var14;
var16 = NULL;
if (var_orig == NULL) {
var17 = 0; /* is null */
} else {
var17 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_orig,var16) on <var_orig:nullable MType> */
var_other = var16;
{
var21 = ((short int (*)(val*, val*))(var_orig->class->vft[COLOR_kernel__Object___61d_61d]))(var_orig, var_other) /* == on <var_orig:nullable MType(MType)>*/;
var20 = var21;
}
var22 = !var20;
var18 = var22;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
{
var23 = ((val* (*)(val*))(var_orig->class->vft[COLOR_string__Object__to_s]))(var_orig) /* to_s on <var_orig:nullable MType(MType)>*/;
}
var15 = var23;
} else {
if (varonce) {
var24 = varonce;
} else {
var25 = "invalid";
var26 = 7;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce = var24;
}
var15 = var24;
}
var_from = var15;
var29 = NULL;
if (var_mtype == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,var29) on <var_mtype:nullable MType> */
var_other = var29;
{
var34 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_mtype, var_other) /* == on <var_mtype:nullable MType(MType)>*/;
var33 = var34;
}
var35 = !var33;
var31 = var35;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
{
var36 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_string__Object__to_s]))(var_mtype) /* to_s on <var_mtype:nullable MType(MType)>*/;
}
var28 = var36;
} else {
if (varonce37) {
var38 = varonce37;
} else {
var39 = "invalid";
var40 = 7;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
var28 = var38;
}
var_to = var28;
{
{ /* Inline flow#AExpr#after_flow_context (self) on <self:AIsaExpr> */
var44 = self->attrs[COLOR_flow__AExpr___after_flow_context].val; /* _after_flow_context on <self:AIsaExpr> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (var42 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1177);
show_backtrace(1);
} else {
{ /* Inline flow#FlowContext#when_true (var42) on <var42:nullable FlowContext> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 228);
show_backtrace(1);
}
var47 = var42->attrs[COLOR_flow__FlowContext___when_true].val; /* _when_true on <var42:nullable FlowContext> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 228);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
typing__FlowContext__set_var(var45, var_variable, var_mtype); /* Direct call typing#FlowContext#set_var on <var45:FlowContext>*/
}
} else {
}
{
var48 = typing__TypeVisitor__type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var48) on <self:AIsaExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var48; /* _mtype on <self:AIsaExpr> */
RET_LABEL49:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AIsaExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AIsaExpr__accept_typing(val* self, val* p0) {
typing__AIsaExpr__accept_typing(self, p0); /* Direct call typing#AIsaExpr#accept_typing on <self:Object(AIsaExpr)>*/
RET_LABEL:;
}
/* method typing#AAsCastExpr#accept_typing for (self: AAsCastExpr, TypeVisitor) */
void typing__AAsCastExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : AType */;
val* var2 /* : nullable MType */;
var_v = p0;
{
var = parser_nodes__AAsCastExpr__n_expr(self);
}
{
var1 = parser_nodes__AAsCastExpr__n_type(self);
}
{
var2 = typing__TypeVisitor__visit_expr_cast(var_v, self, var, var1);
}
{
{ /* Inline typing#AExpr#mtype= (self,var2) on <self:AAsCastExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var2; /* _mtype on <self:AAsCastExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAsCastExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAsCastExpr__accept_typing(val* self, val* p0) {
typing__AAsCastExpr__accept_typing(self, p0); /* Direct call typing#AAsCastExpr#accept_typing on <self:Object(AAsCastExpr)>*/
RET_LABEL:;
}
/* method typing#AAsNotnullExpr#accept_typing for (self: AAsNotnullExpr, TypeVisitor) */
void typing__AAsNotnullExpr__accept_typing(val* self, val* p0) {
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
short int var9 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
val* var17 /* : MType */;
val* var19 /* : MType */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
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
val* var38 /* : Array[Object] */;
long var39 /* : Int */;
val* var40 /* : NativeArray[Object] */;
val* var41 /* : String */;
short int var42 /* : Bool */;
val* var43 /* : MType */;
val* var_u /* var u: MType */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
short int var47 /* : Bool */;
val* var48 /* : ModelBuilder */;
val* var50 /* : ModelBuilder */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
long var64 /* : Int */;
val* var65 /* : FlatString */;
val* var66 /* : Array[Object] */;
long var67 /* : Int */;
val* var68 /* : NativeArray[Object] */;
val* var69 /* : String */;
var_v = p0;
{
var = parser_nodes__AAsNotnullExpr__n_expr(self);
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
/* <var_mtype:nullable MType(MType)> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var9 = 0;
} else {
var9 = var_mtype->type->type_table[cltype] == idtype;
}
if (var9){
if (varonce) {
var10 = varonce;
} else {
var11 = "Type error: as(not null) on null";
var12 = 32;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
{
typing__TypeVisitor__error(var_v, self, var10); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MNullableType */
cltype15 = type_model__MNullableType.color;
idtype16 = type_model__MNullableType.id;
if(cltype15 >= var_mtype->type->table_size) {
var14 = 0;
} else {
var14 = var_mtype->type->type_table[cltype15] == idtype16;
}
if (var14){
{
{ /* Inline model#MNullableType#mtype (var_mtype) on <var_mtype:nullable MType(MNullableType)> */
var19 = var_mtype->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_mtype:nullable MType(MNullableType)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1375);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var17) on <self:AAsNotnullExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var17; /* _mtype on <self:AAsNotnullExpr> */
RET_LABEL20:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AExpr#mtype= (self,var_mtype) on <self:AAsNotnullExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var_mtype; /* _mtype on <self:AAsNotnullExpr> */
RET_LABEL21:(void)0;
}
}
/* <var_mtype:nullable MType(MType)> isa MClassType */
cltype23 = type_model__MClassType.color;
idtype24 = type_model__MClassType.id;
if(cltype23 >= var_mtype->type->table_size) {
var22 = 0;
} else {
var22 = var_mtype->type->type_table[cltype23] == idtype24;
}
if (var22){
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var27 = var_v->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
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
var30 = "Warning: expression is already not null, since it is a `";
var31 = 56;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = "`.";
var36 = 2;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 3;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var29;
((struct instance_array__NativeArray*)var40)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var40)->values[2] = (val*) var34;
{
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
}
{
var41 = ((val* (*)(val*))(var38->class->vft[COLOR_string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(var25, self, var41); /* Direct call modelbuilder#ModelBuilder#warning on <var25:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var42 = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:nullable MType(MType)>*/;
}
if (unlikely(!var42)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1211);
show_backtrace(1);
}
{
var43 = typing__TypeVisitor__anchor_to(var_v, var_mtype);
}
var_u = var43;
/* <var_u:MType> isa MNullableType */
cltype45 = type_model__MNullableType.color;
idtype46 = type_model__MNullableType.id;
if(cltype45 >= var_u->type->table_size) {
var44 = 0;
} else {
var44 = var_u->type->type_table[cltype45] == idtype46;
}
var47 = !var44;
if (var47){
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var50 = var_v->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = "Warning: expression is already not null, since it is a `";
var54 = 56;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = ": ";
var59 = 2;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
if (varonce61) {
var62 = varonce61;
} else {
var63 = "`.";
var64 = 2;
var65 = string__NativeString__to_s_with_length(var63, var64);
var62 = var65;
varonce61 = var62;
}
var66 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var66 = array_instance Array[Object] */
var67 = 5;
var68 = NEW_array__NativeArray(var67, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var68)->values[0] = (val*) var52;
((struct instance_array__NativeArray*)var68)->values[1] = (val*) var_mtype;
((struct instance_array__NativeArray*)var68)->values[2] = (val*) var57;
((struct instance_array__NativeArray*)var68)->values[3] = (val*) var_u;
((struct instance_array__NativeArray*)var68)->values[4] = (val*) var62;
{
((void (*)(val*, val*, long))(var66->class->vft[COLOR_array__Array__with_native]))(var66, var68, var67) /* with_native on <var66:Array[Object]>*/;
}
}
{
var69 = ((val* (*)(val*))(var66->class->vft[COLOR_string__Object__to_s]))(var66) /* to_s on <var66:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(var48, self, var69); /* Direct call modelbuilder#ModelBuilder#warning on <var48:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
RET_LABEL:;
}
/* method typing#AAsNotnullExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAsNotnullExpr__accept_typing(val* self, val* p0) {
typing__AAsNotnullExpr__accept_typing(self, p0); /* Direct call typing#AAsNotnullExpr#accept_typing on <self:Object(AAsNotnullExpr)>*/
RET_LABEL:;
}
/* method typing#AProxyExpr#accept_typing for (self: AProxyExpr, TypeVisitor) */
void typing__AProxyExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
var_v = p0;
{
var = parser_nodes__AProxyExpr__n_expr(self);
}
{
var1 = typing__TypeVisitor__visit_expr(var_v, var);
}
{
{ /* Inline typing#AExpr#mtype= (self,var1) on <self:AProxyExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var1; /* _mtype on <self:AProxyExpr> */
RET_LABEL2:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AProxyExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AProxyExpr__accept_typing(val* self, val* p0) {
typing__AProxyExpr__accept_typing(self, p0); /* Direct call typing#AProxyExpr#accept_typing on <self:Object(AProxyExpr)>*/
RET_LABEL:;
}
/* method typing#ASelfExpr#its_variable for (self: ASelfExpr): nullable Variable */
val* typing__ASelfExpr__its_variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
var1 = self->attrs[COLOR_typing__ASelfExpr___its_variable].val; /* _its_variable on <self:ASelfExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASelfExpr#its_variable for (self: Object): nullable Variable */
val* VIRTUAL_typing__ASelfExpr__its_variable(val* self) {
val* var /* : nullable Variable */;
val* var1 /* : nullable Variable */;
val* var3 /* : nullable Variable */;
{ /* Inline typing#ASelfExpr#its_variable (self) on <self:Object(ASelfExpr)> */
var3 = self->attrs[COLOR_typing__ASelfExpr___its_variable].val; /* _its_variable on <self:Object(ASelfExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASelfExpr#its_variable= for (self: ASelfExpr, nullable Variable) */
void typing__ASelfExpr__its_variable_61d(val* self, val* p0) {
self->attrs[COLOR_typing__ASelfExpr___its_variable].val = p0; /* _its_variable on <self:ASelfExpr> */
RET_LABEL:;
}
/* method typing#ASelfExpr#its_variable= for (self: Object, nullable Variable) */
void VIRTUAL_typing__ASelfExpr__its_variable_61d(val* self, val* p0) {
{ /* Inline typing#ASelfExpr#its_variable= (self,p0) on <self:Object(ASelfExpr)> */
self->attrs[COLOR_typing__ASelfExpr___its_variable].val = p0; /* _its_variable on <self:Object(ASelfExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#ASelfExpr#accept_typing for (self: ASelfExpr, TypeVisitor) */
void typing__ASelfExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var_ /* var : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
val* var10 /* : Variable */;
val* var12 /* : Variable */;
val* var_variable /* var variable: Variable */;
val* var14 /* : nullable MType */;
var_v = p0;
{
{ /* Inline typing#TypeVisitor#is_toplevel_context (var_v) on <var_v:TypeVisitor> */
var3 = var_v->attrs[COLOR_typing__TypeVisitor___is_toplevel_context].s; /* _is_toplevel_context on <var_v:TypeVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_ = var1;
if (var1){
/* <self:ASelfExpr> isa AImplicitSelfExpr */
cltype = type_parser_nodes__AImplicitSelfExpr.color;
idtype = type_parser_nodes__AImplicitSelfExpr.id;
if(cltype >= self->type->table_size) {
var4 = 0;
} else {
var4 = self->type->type_table[cltype] == idtype;
}
var5 = !var4;
var = var5;
} else {
var = var_;
}
if (var){
if (varonce) {
var6 = varonce;
} else {
var7 = "Error: self cannot be used in top-level method.";
var8 = 47;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
{
typing__TypeVisitor__error(var_v, self, var6); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
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
var_variable = var10;
{
{ /* Inline typing#ASelfExpr#its_variable= (self,var_variable) on <self:ASelfExpr> */
self->attrs[COLOR_typing__ASelfExpr___its_variable].val = var_variable; /* _its_variable on <self:ASelfExpr> */
RET_LABEL13:(void)0;
}
}
{
var14 = typing__TypeVisitor__get_variable(var_v, self, var_variable);
}
{
{ /* Inline typing#AExpr#mtype= (self,var14) on <self:ASelfExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var14; /* _mtype on <self:ASelfExpr> */
RET_LABEL15:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ASelfExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ASelfExpr__accept_typing(val* self, val* p0) {
typing__ASelfExpr__accept_typing(self, p0); /* Direct call typing#ASelfExpr#accept_typing on <self:Object(ASelfExpr)>*/
RET_LABEL:;
}
/* method typing#ASendExpr#callsite for (self: ASendExpr): nullable CallSite */
val* typing__ASendExpr__callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_typing__ASendExpr___callsite].val; /* _callsite on <self:ASendExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASendExpr#callsite for (self: Object): nullable CallSite */
val* VIRTUAL_typing__ASendExpr__callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
val* var3 /* : nullable CallSite */;
{ /* Inline typing#ASendExpr#callsite (self) on <self:Object(ASendExpr)> */
var3 = self->attrs[COLOR_typing__ASendExpr___callsite].val; /* _callsite on <self:Object(ASendExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASendExpr#callsite= for (self: ASendExpr, nullable CallSite) */
void typing__ASendExpr__callsite_61d(val* self, val* p0) {
self->attrs[COLOR_typing__ASendExpr___callsite].val = p0; /* _callsite on <self:ASendExpr> */
RET_LABEL:;
}
/* method typing#ASendExpr#callsite= for (self: Object, nullable CallSite) */
void VIRTUAL_typing__ASendExpr__callsite_61d(val* self, val* p0) {
{ /* Inline typing#ASendExpr#callsite= (self,p0) on <self:Object(ASendExpr)> */
self->attrs[COLOR_typing__ASendExpr___callsite].val = p0; /* _callsite on <self:Object(ASendExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#ASendExpr#accept_typing for (self: ASendExpr, TypeVisitor) */
void typing__ASendExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var2 /* : String */;
val* var_name /* var name: String */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : Array[Object] */;
long var21 /* : Int */;
val* var22 /* : NativeArray[Object] */;
val* var23 /* : String */;
val* var24 /* : AExpr */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
val* var28 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var29 /* : null */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
val* var37 /* : MSignature */;
val* var39 /* : MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var40 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var41 /* : Bool */;
val* var42 /* : MMethod */;
val* var44 /* : MMethod */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : nullable MPropDef */;
val* var50 /* : nullable MPropDef */;
val* var_vmpropdef /* var vmpropdef: nullable MPropDef */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
short int var_ /* var : Bool */;
val* var55 /* : MProperty */;
val* var57 /* : MProperty */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : FlatString */;
val* var67 /* : nullable MType */;
val* var69 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
val* var70 /* : null */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
val* var_other74 /* var other: nullable Object */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
var_v = p0;
{
var = parser_nodes__ASendExpr__n_expr(self);
}
{
var1 = typing__TypeVisitor__visit_expr(var_v, var);
}
var_recvtype = var1;
{
var2 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__property_name]))(self) /* property_name on <self:ASendExpr>*/;
}
var_name = var2;
var3 = NULL;
if (var_recvtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_recvtype,var3) on <var_recvtype:nullable MType> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_recvtype,var_other) on <var_recvtype:nullable MType(MType)> */
var9 = var_recvtype == var_other;
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
/* <var_recvtype:nullable MType(MType)> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(cltype >= var_recvtype->type->table_size) {
var10 = 0;
} else {
var10 = var_recvtype->type->type_table[cltype] == idtype;
}
if (var10){
if (varonce) {
var11 = varonce;
} else {
var12 = "Error: Method \'";
var13 = 15;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = "\' call on \'null\'.";
var18 = 17;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var20 = array_instance Array[Object] */
var21 = 3;
var22 = NEW_array__NativeArray(var21, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var22)->values[0] = (val*) var11;
((struct instance_array__NativeArray*)var22)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var22)->values[2] = (val*) var16;
{
((void (*)(val*, val*, long))(var20->class->vft[COLOR_array__Array__with_native]))(var20, var22, var21) /* with_native on <var20:Array[Object]>*/;
}
}
{
var23 = ((val* (*)(val*))(var20->class->vft[COLOR_string__Object__to_s]))(var20) /* to_s on <var20:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var23); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var24 = parser_nodes__ASendExpr__n_expr(self);
}
/* <var24:AExpr> isa ASelfExpr */
cltype26 = type_parser_nodes__ASelfExpr.color;
idtype27 = type_parser_nodes__ASelfExpr.id;
if(cltype26 >= var24->type->table_size) {
var25 = 0;
} else {
var25 = var24->type->type_table[cltype26] == idtype27;
}
{
var28 = typing__TypeVisitor__get_method(var_v, self, var_recvtype, var_name, var25);
}
var_callsite = var28;
var29 = NULL;
if (var_callsite == NULL) {
var30 = 1; /* is null */
} else {
var30 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,var29) on <var_callsite:nullable CallSite> */
var_other = var29;
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var35 = var_callsite == var_other;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#ASendExpr#callsite= (self,var_callsite) on <self:ASendExpr> */
self->attrs[COLOR_typing__ASendExpr___callsite].val = var_callsite; /* _callsite on <self:ASendExpr> */
RET_LABEL36:(void)0;
}
}
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var39 = var_callsite->attrs[COLOR_typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 429);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_msignature = var37;
{
var40 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__compute_raw_arguments]))(self) /* compute_raw_arguments on <self:ASendExpr>*/;
}
var_args = var40;
{
var41 = typing__CallSite__check_signature(var_callsite, var_v, var_args);
}
var41;
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var44 = var_callsite->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 422);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var42) on <var42:MMethod> */
var47 = var42->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var42:MMethod> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
if (var45){
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var50 = var_v->attrs[COLOR_typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
var_vmpropdef = var48;
/* <var_vmpropdef:nullable MPropDef> isa MMethodDef */
cltype53 = type_model__MMethodDef.color;
idtype54 = type_model__MMethodDef.id;
if(var_vmpropdef == NULL) {
var52 = 0;
} else {
if(cltype53 >= var_vmpropdef->type->table_size) {
var52 = 0;
} else {
var52 = var_vmpropdef->type->type_table[cltype53] == idtype54;
}
}
var_ = var52;
if (var52){
{
{ /* Inline model#MPropDef#mproperty (var_vmpropdef) on <var_vmpropdef:nullable MPropDef(MMethodDef)> */
var57 = var_vmpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_vmpropdef:nullable MPropDef(MMethodDef)> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var55) on <var55:MProperty(MMethod)> */
var60 = var55->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var55:MProperty(MMethod)> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
var51 = var58;
} else {
var51 = var_;
}
var61 = !var51;
if (var61){
if (varonce62) {
var63 = varonce62;
} else {
var64 = "Can call a init only in another init";
var65 = 36;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
{
typing__TypeVisitor__error(var_v, self, var63); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
} else {
}
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var69 = var_msignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
var_ret = var67;
var70 = NULL;
if (var_ret == NULL) {
var71 = 0; /* is null */
} else {
var71 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,var70) on <var_ret:nullable MType> */
var_other74 = var70;
{
var76 = ((short int (*)(val*, val*))(var_ret->class->vft[COLOR_kernel__Object___61d_61d]))(var_ret, var_other74) /* == on <var_ret:nullable MType(MType)>*/;
var75 = var76;
}
var77 = !var75;
var72 = var77;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
var71 = var72;
}
if (var71){
{
{ /* Inline typing#AExpr#mtype= (self,var_ret) on <self:ASendExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var_ret; /* _mtype on <self:ASendExpr> */
RET_LABEL78:(void)0;
}
}
} else {
var79 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var79) on <self:ASendExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var79; /* _is_typed on <self:ASendExpr> */
RET_LABEL80:(void)0;
}
}
}
RET_LABEL:;
}
/* method typing#ASendExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ASendExpr__accept_typing(val* self, val* p0) {
typing__ASendExpr__accept_typing(self, p0); /* Direct call typing#ASendExpr#accept_typing on <self:Object(ASendExpr)>*/
RET_LABEL:;
}
/* method typing#ASendExpr#raw_arguments for (self: ASendExpr): Array[AExpr] */
val* typing__ASendExpr__raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
{
var1 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__compute_raw_arguments]))(self) /* compute_raw_arguments on <self:ASendExpr>*/;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ASendExpr#raw_arguments for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__ASendExpr__raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__ASendExpr__raw_arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ABinopExpr#compute_raw_arguments for (self: ABinopExpr): Array[AExpr] */
val* typing__ABinopExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
long var2 /* : Int */;
val* var_ /* var : Array[AExpr] */;
val* var3 /* : AExpr */;
var1 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
var2 = 1;
{
array__Array__with_capacity(var1, var2); /* Direct call array#Array#with_capacity on <var1:Array[AExpr]>*/
}
var_ = var1;
{
var3 = parser_nodes__ABinopExpr__n_expr2(self);
}
{
array__AbstractArray__push(var_, var3); /* Direct call array#AbstractArray#push on <var_:Array[AExpr]>*/
}
var = var_;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABinopExpr#compute_raw_arguments for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__ABinopExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__ABinopExpr__compute_raw_arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AEqExpr#property_name for (self: AEqExpr): String */
val* typing__AEqExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "==";
var3 = 2;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AEqExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__AEqExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__AEqExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AEqExpr#accept_typing for (self: AEqExpr, TypeVisitor) */
void typing__AEqExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : AExpr */;
val* var10 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var11 /* : Bool */;
int cltype;
int idtype;
short int var12 /* : Bool */;
val* var13 /* : nullable MType */;
val* var_vartype /* var vartype: nullable MType */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
short int var17 /* : Bool */;
val* var18 /* : nullable FlowContext */;
val* var20 /* : nullable FlowContext */;
val* var21 /* : FlowContext */;
val* var23 /* : FlowContext */;
val* var24 /* : nullable FlowContext */;
val* var26 /* : nullable FlowContext */;
val* var27 /* : FlowContext */;
val* var29 /* : FlowContext */;
val* var30 /* : MType */;
val* var32 /* : MType */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AEqExpr__accept_typing]))(self, p0) /* accept_typing on <self:AEqExpr>*/;
}
{
var = parser_nodes__ASendExpr__n_expr(self);
}
{
var1 = ((val* (*)(val*))(var->class->vft[COLOR_typing__AExpr__its_variable]))(var) /* its_variable on <var:AExpr>*/;
}
var_variable = var1;
var2 = NULL;
if (var_variable == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_variable,var2) on <var_variable:nullable Variable> */
var_other = var2;
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
var9 = parser_nodes__ABinopExpr__n_expr2(self);
}
{
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_typing__AExpr__mtype]))(var9) /* mtype on <var9:AExpr>*/;
}
var_mtype = var10;
/* <var_mtype:nullable MType> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(var_mtype == NULL) {
var11 = 0;
} else {
if(cltype >= var_mtype->type->table_size) {
var11 = 0;
} else {
var11 = var_mtype->type->type_table[cltype] == idtype;
}
}
var12 = !var11;
if (var12){
goto RET_LABEL;
} else {
}
{
var13 = typing__TypeVisitor__get_variable(var_v, self, var_variable);
}
var_vartype = var13;
/* <var_vartype:nullable MType> isa MNullableType */
cltype15 = type_model__MNullableType.color;
idtype16 = type_model__MNullableType.id;
if(var_vartype == NULL) {
var14 = 0;
} else {
if(cltype15 >= var_vartype->type->table_size) {
var14 = 0;
} else {
var14 = var_vartype->type->type_table[cltype15] == idtype16;
}
}
var17 = !var14;
if (var17){
goto RET_LABEL;
} else {
}
{
{ /* Inline flow#AExpr#after_flow_context (self) on <self:AEqExpr> */
var20 = self->attrs[COLOR_flow__AExpr___after_flow_context].val; /* _after_flow_context on <self:AEqExpr> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1306);
show_backtrace(1);
} else {
{ /* Inline flow#FlowContext#when_true (var18) on <var18:nullable FlowContext> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 228);
show_backtrace(1);
}
var23 = var18->attrs[COLOR_flow__FlowContext___when_true].val; /* _when_true on <var18:nullable FlowContext> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 228);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
typing__FlowContext__set_var(var21, var_variable, var_mtype); /* Direct call typing#FlowContext#set_var on <var21:FlowContext>*/
}
{
{ /* Inline flow#AExpr#after_flow_context (self) on <self:AEqExpr> */
var26 = self->attrs[COLOR_flow__AExpr___after_flow_context].val; /* _after_flow_context on <self:AEqExpr> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (var24 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1307);
show_backtrace(1);
} else {
{ /* Inline flow#FlowContext#when_false (var24) on <var24:nullable FlowContext> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 231);
show_backtrace(1);
}
var29 = var24->attrs[COLOR_flow__FlowContext___when_false].val; /* _when_false on <var24:nullable FlowContext> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 231);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model#MNullableType#mtype (var_vartype) on <var_vartype:nullable MType(MNullableType)> */
var32 = var_vartype->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_vartype:nullable MType(MNullableType)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1375);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
typing__FlowContext__set_var(var27, var_variable, var30); /* Direct call typing#FlowContext#set_var on <var27:FlowContext>*/
}
RET_LABEL:;
}
/* method typing#AEqExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AEqExpr__accept_typing(val* self, val* p0) {
typing__AEqExpr__accept_typing(self, p0); /* Direct call typing#AEqExpr#accept_typing on <self:Object(AEqExpr)>*/
RET_LABEL:;
}
/* method typing#ANeExpr#property_name for (self: ANeExpr): String */
val* typing__ANeExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "!=";
var3 = 2;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ANeExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ANeExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ANeExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ANeExpr#accept_typing for (self: ANeExpr, TypeVisitor) */
void typing__ANeExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable Variable */;
val* var_variable /* var variable: nullable Variable */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : AExpr */;
val* var10 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var11 /* : Bool */;
int cltype;
int idtype;
short int var12 /* : Bool */;
val* var13 /* : nullable MType */;
val* var_vartype /* var vartype: nullable MType */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
short int var17 /* : Bool */;
val* var18 /* : nullable FlowContext */;
val* var20 /* : nullable FlowContext */;
val* var21 /* : FlowContext */;
val* var23 /* : FlowContext */;
val* var24 /* : nullable FlowContext */;
val* var26 /* : nullable FlowContext */;
val* var27 /* : FlowContext */;
val* var29 /* : FlowContext */;
val* var30 /* : MType */;
val* var32 /* : MType */;
var_v = p0;
{
((void (*)(val*, val*))(self->class->vft[COLOR_typing__ANeExpr__accept_typing]))(self, p0) /* accept_typing on <self:ANeExpr>*/;
}
{
var = parser_nodes__ASendExpr__n_expr(self);
}
{
var1 = ((val* (*)(val*))(var->class->vft[COLOR_typing__AExpr__its_variable]))(var) /* its_variable on <var:AExpr>*/;
}
var_variable = var1;
var2 = NULL;
if (var_variable == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_variable,var2) on <var_variable:nullable Variable> */
var_other = var2;
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
var9 = parser_nodes__ABinopExpr__n_expr2(self);
}
{
var10 = ((val* (*)(val*))(var9->class->vft[COLOR_typing__AExpr__mtype]))(var9) /* mtype on <var9:AExpr>*/;
}
var_mtype = var10;
/* <var_mtype:nullable MType> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(var_mtype == NULL) {
var11 = 0;
} else {
if(cltype >= var_mtype->type->table_size) {
var11 = 0;
} else {
var11 = var_mtype->type->type_table[cltype] == idtype;
}
}
var12 = !var11;
if (var12){
goto RET_LABEL;
} else {
}
{
var13 = typing__TypeVisitor__get_variable(var_v, self, var_variable);
}
var_vartype = var13;
/* <var_vartype:nullable MType> isa MNullableType */
cltype15 = type_model__MNullableType.color;
idtype16 = type_model__MNullableType.id;
if(var_vartype == NULL) {
var14 = 0;
} else {
if(cltype15 >= var_vartype->type->table_size) {
var14 = 0;
} else {
var14 = var_vartype->type->type_table[cltype15] == idtype16;
}
}
var17 = !var14;
if (var17){
goto RET_LABEL;
} else {
}
{
{ /* Inline flow#AExpr#after_flow_context (self) on <self:ANeExpr> */
var20 = self->attrs[COLOR_flow__AExpr___after_flow_context].val; /* _after_flow_context on <self:ANeExpr> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1323);
show_backtrace(1);
} else {
{ /* Inline flow#FlowContext#when_false (var18) on <var18:nullable FlowContext> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 231);
show_backtrace(1);
}
var23 = var18->attrs[COLOR_flow__FlowContext___when_false].val; /* _when_false on <var18:nullable FlowContext> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_false");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 231);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
typing__FlowContext__set_var(var21, var_variable, var_mtype); /* Direct call typing#FlowContext#set_var on <var21:FlowContext>*/
}
{
{ /* Inline flow#AExpr#after_flow_context (self) on <self:ANeExpr> */
var26 = self->attrs[COLOR_flow__AExpr___after_flow_context].val; /* _after_flow_context on <self:ANeExpr> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (var24 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1324);
show_backtrace(1);
} else {
{ /* Inline flow#FlowContext#when_true (var24) on <var24:nullable FlowContext> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 228);
show_backtrace(1);
}
var29 = var24->attrs[COLOR_flow__FlowContext___when_true].val; /* _when_true on <var24:nullable FlowContext> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _when_true");
PRINT_ERROR(" (%s:%d)\n", "src/flow.nit", 228);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model#MNullableType#mtype (var_vartype) on <var_vartype:nullable MType(MNullableType)> */
var32 = var_vartype->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <var_vartype:nullable MType(MNullableType)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1375);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
typing__FlowContext__set_var(var27, var_variable, var30); /* Direct call typing#FlowContext#set_var on <var27:FlowContext>*/
}
RET_LABEL:;
}
/* method typing#ANeExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ANeExpr__accept_typing(val* self, val* p0) {
typing__ANeExpr__accept_typing(self, p0); /* Direct call typing#ANeExpr#accept_typing on <self:Object(ANeExpr)>*/
RET_LABEL:;
}
/* method typing#ALtExpr#property_name for (self: ALtExpr): String */
val* typing__ALtExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "<";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ALtExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ALtExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ALtExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ALeExpr#property_name for (self: ALeExpr): String */
val* typing__ALeExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "<=";
var3 = 2;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ALeExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ALeExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ALeExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ALlExpr#property_name for (self: ALlExpr): String */
val* typing__ALlExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "<<";
var3 = 2;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ALlExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ALlExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ALlExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AGtExpr#property_name for (self: AGtExpr): String */
val* typing__AGtExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = ">";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AGtExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__AGtExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__AGtExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AGeExpr#property_name for (self: AGeExpr): String */
val* typing__AGeExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = ">=";
var3 = 2;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AGeExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__AGeExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__AGeExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AGgExpr#property_name for (self: AGgExpr): String */
val* typing__AGgExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = ">>";
var3 = 2;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AGgExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__AGgExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__AGgExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#APlusExpr#property_name for (self: APlusExpr): String */
val* typing__APlusExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "+";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#APlusExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__APlusExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__APlusExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AMinusExpr#property_name for (self: AMinusExpr): String */
val* typing__AMinusExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "-";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AMinusExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__AMinusExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__AMinusExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AStarshipExpr#property_name for (self: AStarshipExpr): String */
val* typing__AStarshipExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "<=>";
var3 = 3;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AStarshipExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__AStarshipExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__AStarshipExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AStarExpr#property_name for (self: AStarExpr): String */
val* typing__AStarExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "*";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AStarExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__AStarExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__AStarExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASlashExpr#property_name for (self: ASlashExpr): String */
val* typing__ASlashExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "/";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ASlashExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ASlashExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ASlashExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#APercentExpr#property_name for (self: APercentExpr): String */
val* typing__APercentExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "%";
var3 = 1;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#APercentExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__APercentExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__APercentExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AUminusExpr#property_name for (self: AUminusExpr): String */
val* typing__AUminusExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "unary -";
var3 = 7;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AUminusExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__AUminusExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__AUminusExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AUminusExpr#compute_raw_arguments for (self: AUminusExpr): Array[AExpr] */
val* typing__AUminusExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = NEW_array__Array(&type_array__Arrayparser_nodes__AExpr);
{
array__Array__init(var1); /* Direct call array#Array#init on <var1:Array[AExpr]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AUminusExpr#compute_raw_arguments for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__AUminusExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__AUminusExpr__compute_raw_arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ACallExpr#property_name for (self: ACallExpr): String */
val* typing__ACallExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : TId */;
val* var2 /* : String */;
{
var1 = parser_nodes__ACallFormExpr__n_id(self);
}
{
var2 = lexer_work__Token__text(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ACallExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ACallExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ACallExpr#compute_raw_arguments for (self: ACallExpr): Array[AExpr] */
val* typing__ACallExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var2 /* : Array[AExpr] */;
{
var1 = parser_nodes__ACallFormExpr__n_args(self);
}
{
var2 = typing__AExprs__to_a(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallExpr#compute_raw_arguments for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__ACallExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__ACallExpr__compute_raw_arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ACallAssignExpr#property_name for (self: ACallAssignExpr): String */
val* typing__ACallAssignExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : TId */;
val* var2 /* : String */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : FlatString */;
val* var7 /* : String */;
{
var1 = parser_nodes__ACallFormExpr__n_id(self);
}
{
var2 = lexer_work__Token__text(var1);
}
if (varonce) {
var3 = varonce;
} else {
var4 = "=";
var5 = 1;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
{
var7 = string__FlatString___43d(var2, var3);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallAssignExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ACallAssignExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ACallAssignExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ACallAssignExpr#compute_raw_arguments for (self: ACallAssignExpr): Array[AExpr] */
val* typing__ACallAssignExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var2 /* : Array[AExpr] */;
val* var_res /* var res: Array[AExpr] */;
val* var3 /* : AExpr */;
{
var1 = parser_nodes__ACallFormExpr__n_args(self);
}
{
var2 = typing__AExprs__to_a(var1);
}
var_res = var2;
{
var3 = parser_nodes__AAssignFormExpr__n_value(self);
}
{
array__Array__add(var_res, var3); /* Direct call array#Array#add on <var_res:Array[AExpr]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallAssignExpr#compute_raw_arguments for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__ACallAssignExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__ACallAssignExpr__compute_raw_arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ABraExpr#property_name for (self: ABraExpr): String */
val* typing__ABraExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "[]";
var3 = 2;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ABraExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ABraExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ABraExpr#compute_raw_arguments for (self: ABraExpr): Array[AExpr] */
val* typing__ABraExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var2 /* : Array[AExpr] */;
{
var1 = parser_nodes__ABraFormExpr__n_args(self);
}
{
var2 = typing__AExprs__to_a(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraExpr#compute_raw_arguments for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__ABraExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__ABraExpr__compute_raw_arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ABraAssignExpr#property_name for (self: ABraAssignExpr): String */
val* typing__ABraAssignExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "[]=";
var3 = 3;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraAssignExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ABraAssignExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ABraAssignExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ABraAssignExpr#compute_raw_arguments for (self: ABraAssignExpr): Array[AExpr] */
val* typing__ABraAssignExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var2 /* : Array[AExpr] */;
val* var_res /* var res: Array[AExpr] */;
val* var3 /* : AExpr */;
{
var1 = parser_nodes__ABraFormExpr__n_args(self);
}
{
var2 = typing__AExprs__to_a(var1);
}
var_res = var2;
{
var3 = parser_nodes__AAssignFormExpr__n_value(self);
}
{
array__Array__add(var_res, var3); /* Direct call array#Array#add on <var_res:Array[AExpr]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraAssignExpr#compute_raw_arguments for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__ABraAssignExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__ABraAssignExpr__compute_raw_arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASendReassignFormExpr#write_callsite for (self: ASendReassignFormExpr): nullable CallSite */
val* typing__ASendReassignFormExpr__write_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:ASendReassignFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASendReassignFormExpr#write_callsite for (self: Object): nullable CallSite */
val* VIRTUAL_typing__ASendReassignFormExpr__write_callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
val* var3 /* : nullable CallSite */;
{ /* Inline typing#ASendReassignFormExpr#write_callsite (self) on <self:Object(ASendReassignFormExpr)> */
var3 = self->attrs[COLOR_typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:Object(ASendReassignFormExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASendReassignFormExpr#write_callsite= for (self: ASendReassignFormExpr, nullable CallSite) */
void typing__ASendReassignFormExpr__write_callsite_61d(val* self, val* p0) {
self->attrs[COLOR_typing__ASendReassignFormExpr___write_callsite].val = p0; /* _write_callsite on <self:ASendReassignFormExpr> */
RET_LABEL:;
}
/* method typing#ASendReassignFormExpr#write_callsite= for (self: Object, nullable CallSite) */
void VIRTUAL_typing__ASendReassignFormExpr__write_callsite_61d(val* self, val* p0) {
{ /* Inline typing#ASendReassignFormExpr#write_callsite= (self,p0) on <self:Object(ASendReassignFormExpr)> */
self->attrs[COLOR_typing__ASendReassignFormExpr___write_callsite].val = p0; /* _write_callsite on <self:Object(ASendReassignFormExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#ASendReassignFormExpr#accept_typing for (self: ASendReassignFormExpr, TypeVisitor) */
void typing__ASendReassignFormExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var2 /* : String */;
val* var_name /* var name: String */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : Array[Object] */;
long var21 /* : Int */;
val* var22 /* : NativeArray[Object] */;
val* var23 /* : String */;
val* var24 /* : AExpr */;
short int var25 /* : Bool */;
int cltype26;
int idtype27;
short int var_for_self /* var for_self: Bool */;
val* var28 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var29 /* : null */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
val* var37 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var38 /* : Bool */;
val* var39 /* : MSignature */;
val* var41 /* : MSignature */;
val* var42 /* : nullable MType */;
val* var44 /* : nullable MType */;
val* var_readtype /* var readtype: nullable MType */;
val* var45 /* : null */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
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
val* var62 /* : Array[Object] */;
long var63 /* : Int */;
val* var64 /* : NativeArray[Object] */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
val* var71 /* : String */;
val* var72 /* : AExpr */;
short int var73 /* : Bool */;
int cltype74;
int idtype75;
val* var76 /* : nullable CallSite */;
val* var_wcallsite /* var wcallsite: nullable CallSite */;
val* var77 /* : null */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
val* var85 /* : MSignature */;
val* var87 /* : MSignature */;
val* var88 /* : Array[MParameter] */;
val* var90 /* : Array[MParameter] */;
val* var91 /* : nullable Object */;
val* var92 /* : MType */;
val* var94 /* : MType */;
val* var95 /* : nullable MType */;
val* var_wtype /* var wtype: nullable MType */;
val* var96 /* : null */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
val* var103 /* : Array[nullable Object] */;
val* var104 /* : AExpr */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
var_v = p0;
{
var = parser_nodes__ASendExpr__n_expr(self);
}
{
var1 = typing__TypeVisitor__visit_expr(var_v, var);
}
var_recvtype = var1;
{
var2 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__property_name]))(self) /* property_name on <self:ASendReassignFormExpr>*/;
}
var_name = var2;
var3 = NULL;
if (var_recvtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_recvtype,var3) on <var_recvtype:nullable MType> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_recvtype,var_other) on <var_recvtype:nullable MType(MType)> */
var9 = var_recvtype == var_other;
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
/* <var_recvtype:nullable MType(MType)> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(cltype >= var_recvtype->type->table_size) {
var10 = 0;
} else {
var10 = var_recvtype->type->type_table[cltype] == idtype;
}
if (var10){
if (varonce) {
var11 = varonce;
} else {
var12 = "Error: Method \'";
var13 = 15;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
if (varonce15) {
var16 = varonce15;
} else {
var17 = "\' call on \'null\'.";
var18 = 17;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
var20 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var20 = array_instance Array[Object] */
var21 = 3;
var22 = NEW_array__NativeArray(var21, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var22)->values[0] = (val*) var11;
((struct instance_array__NativeArray*)var22)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var22)->values[2] = (val*) var16;
{
((void (*)(val*, val*, long))(var20->class->vft[COLOR_array__Array__with_native]))(var20, var22, var21) /* with_native on <var20:Array[Object]>*/;
}
}
{
var23 = ((val* (*)(val*))(var20->class->vft[COLOR_string__Object__to_s]))(var20) /* to_s on <var20:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var23); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var24 = parser_nodes__ASendExpr__n_expr(self);
}
/* <var24:AExpr> isa ASelfExpr */
cltype26 = type_parser_nodes__ASelfExpr.color;
idtype27 = type_parser_nodes__ASelfExpr.id;
if(cltype26 >= var24->type->table_size) {
var25 = 0;
} else {
var25 = var24->type->type_table[cltype26] == idtype27;
}
var_for_self = var25;
{
var28 = typing__TypeVisitor__get_method(var_v, self, var_recvtype, var_name, var_for_self);
}
var_callsite = var28;
var29 = NULL;
if (var_callsite == NULL) {
var30 = 1; /* is null */
} else {
var30 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,var29) on <var_callsite:nullable CallSite> */
var_other = var29;
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var35 = var_callsite == var_other;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#ASendExpr#callsite= (self,var_callsite) on <self:ASendReassignFormExpr> */
self->attrs[COLOR_typing__ASendExpr___callsite].val = var_callsite; /* _callsite on <self:ASendReassignFormExpr> */
RET_LABEL36:(void)0;
}
}
{
var37 = ((val* (*)(val*))(self->class->vft[COLOR_typing__ASendExpr__compute_raw_arguments]))(self) /* compute_raw_arguments on <self:ASendReassignFormExpr>*/;
}
var_args = var37;
{
var38 = typing__CallSite__check_signature(var_callsite, var_v, var_args);
}
var38;
{
{ /* Inline typing#CallSite#msignature (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var41 = var_callsite->attrs[COLOR_typing__CallSite___msignature].val; /* _msignature on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 429);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model#MSignature#return_mtype (var39) on <var39:MSignature> */
var44 = var39->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var39:MSignature> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
var_readtype = var42;
var45 = NULL;
if (var_readtype == NULL) {
var46 = 1; /* is null */
} else {
var46 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_readtype,var45) on <var_readtype:nullable MType> */
var_other = var45;
{
{ /* Inline kernel#Object#is_same_instance (var_readtype,var_other) on <var_readtype:nullable MType(MType)> */
var51 = var_readtype == var_other;
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
if (varonce52) {
var53 = varonce52;
} else {
var54 = "Error: ";
var55 = 7;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
if (varonce57) {
var58 = varonce57;
} else {
var59 = " is not a function";
var60 = 18;
var61 = string__NativeString__to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
var62 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var62 = array_instance Array[Object] */
var63 = 3;
var64 = NEW_array__NativeArray(var63, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var64)->values[0] = (val*) var53;
((struct instance_array__NativeArray*)var64)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var64)->values[2] = (val*) var58;
{
((void (*)(val*, val*, long))(var62->class->vft[COLOR_array__Array__with_native]))(var62, var64, var63) /* with_native on <var62:Array[Object]>*/;
}
}
{
var65 = ((val* (*)(val*))(var62->class->vft[COLOR_string__Object__to_s]))(var62) /* to_s on <var62:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var65); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = "=";
var69 = 1;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
{
var71 = string__FlatString___43d(var_name, var67);
}
{
var72 = parser_nodes__ASendExpr__n_expr(self);
}
/* <var72:AExpr> isa ASelfExpr */
cltype74 = type_parser_nodes__ASelfExpr.color;
idtype75 = type_parser_nodes__ASelfExpr.id;
if(cltype74 >= var72->type->table_size) {
var73 = 0;
} else {
var73 = var72->type->type_table[cltype74] == idtype75;
}
{
var76 = typing__TypeVisitor__get_method(var_v, self, var_recvtype, var71, var73);
}
var_wcallsite = var76;
var77 = NULL;
if (var_wcallsite == NULL) {
var78 = 1; /* is null */
} else {
var78 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_wcallsite,var77) on <var_wcallsite:nullable CallSite> */
var_other = var77;
{
{ /* Inline kernel#Object#is_same_instance (var_wcallsite,var_other) on <var_wcallsite:nullable CallSite(CallSite)> */
var83 = var_wcallsite == var_other;
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
var78 = var79;
}
if (var78){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#ASendReassignFormExpr#write_callsite= (self,var_wcallsite) on <self:ASendReassignFormExpr> */
self->attrs[COLOR_typing__ASendReassignFormExpr___write_callsite].val = var_wcallsite; /* _write_callsite on <self:ASendReassignFormExpr> */
RET_LABEL84:(void)0;
}
}
{
{ /* Inline typing#CallSite#msignature (var_wcallsite) on <var_wcallsite:nullable CallSite(CallSite)> */
var87 = var_wcallsite->attrs[COLOR_typing__CallSite___msignature].val; /* _msignature on <var_wcallsite:nullable CallSite(CallSite)> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 429);
show_backtrace(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
{ /* Inline model#MSignature#mparameters (var85) on <var85:MSignature> */
var90 = var85->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var85:MSignature> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
var91 = abstract_collection__SequenceRead__last(var88);
}
{
{ /* Inline model#MParameter#mtype (var91) on <var91:nullable Object(MParameter)> */
var94 = var91->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var91:nullable Object(MParameter)> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
var95 = typing__AReassignFormExpr__resolve_reassignment(self, var_v, var_readtype, var92);
}
var_wtype = var95;
var96 = NULL;
if (var_wtype == NULL) {
var97 = 1; /* is null */
} else {
var97 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_wtype,var96) on <var_wtype:nullable MType> */
var_other = var96;
{
{ /* Inline kernel#Object#is_same_instance (var_wtype,var_other) on <var_wtype:nullable MType(MType)> */
var102 = var_wtype == var_other;
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
var97 = var98;
}
if (var97){
goto RET_LABEL;
} else {
}
{
var103 = array__Collection__to_a(var_args);
}
var_args = var103;
{
var104 = parser_nodes__AReassignFormExpr__n_value(self);
}
{
array__Array__add(var_args, var104); /* Direct call array#Array#add on <var_args:Array[AExpr]>*/
}
{
var105 = typing__CallSite__check_signature(var_wcallsite, var_v, var_args);
}
var105;
var106 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var106) on <self:ASendReassignFormExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var106; /* _is_typed on <self:ASendReassignFormExpr> */
RET_LABEL107:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ASendReassignFormExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ASendReassignFormExpr__accept_typing(val* self, val* p0) {
typing__ASendReassignFormExpr__accept_typing(self, p0); /* Direct call typing#ASendReassignFormExpr#accept_typing on <self:Object(ASendReassignFormExpr)>*/
RET_LABEL:;
}
/* method typing#ACallReassignExpr#property_name for (self: ACallReassignExpr): String */
val* typing__ACallReassignExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : TId */;
val* var2 /* : String */;
{
var1 = parser_nodes__ACallFormExpr__n_id(self);
}
{
var2 = lexer_work__Token__text(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallReassignExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ACallReassignExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ACallReassignExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ACallReassignExpr#compute_raw_arguments for (self: ACallReassignExpr): Array[AExpr] */
val* typing__ACallReassignExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var2 /* : Array[AExpr] */;
{
var1 = parser_nodes__ACallFormExpr__n_args(self);
}
{
var2 = typing__AExprs__to_a(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ACallReassignExpr#compute_raw_arguments for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__ACallReassignExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__ACallReassignExpr__compute_raw_arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ABraReassignExpr#property_name for (self: ABraReassignExpr): String */
val* typing__ABraReassignExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "[]";
var3 = 2;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraReassignExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__ABraReassignExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__ABraReassignExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ABraReassignExpr#compute_raw_arguments for (self: ABraReassignExpr): Array[AExpr] */
val* typing__ABraReassignExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var2 /* : Array[AExpr] */;
{
var1 = parser_nodes__ABraFormExpr__n_args(self);
}
{
var2 = typing__AExprs__to_a(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#ABraReassignExpr#compute_raw_arguments for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__ABraReassignExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__ABraReassignExpr__compute_raw_arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AInitExpr#property_name for (self: AInitExpr): String */
val* typing__AInitExpr__property_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "init";
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
/* method typing#AInitExpr#property_name for (self: Object): String */
val* VIRTUAL_typing__AInitExpr__property_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = typing__AInitExpr__property_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AInitExpr#compute_raw_arguments for (self: AInitExpr): Array[AExpr] */
val* typing__AInitExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : AExprs */;
val* var2 /* : Array[AExpr] */;
{
var1 = parser_nodes__AInitExpr__n_args(self);
}
{
var2 = typing__AExprs__to_a(var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AInitExpr#compute_raw_arguments for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__AInitExpr__compute_raw_arguments(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__AInitExpr__compute_raw_arguments(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AExprs#to_a for (self: AExprs): Array[AExpr] */
val* typing__AExprs__to_a(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : ANodes[AExpr] */;
val* var3 /* : ANodes[AExpr] */;
val* var4 /* : Array[nullable Object] */;
{
{ /* Inline parser_nodes#AExprs#n_exprs (self) on <self:AExprs> */
var3 = self->attrs[COLOR_parser_nodes__AExprs___n_exprs].val; /* _n_exprs on <self:AExprs> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_exprs");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 2274);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = array__Collection__to_a(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method typing#AExprs#to_a for (self: Object): Array[AExpr] */
val* VIRTUAL_typing__AExprs__to_a(val* self) {
val* var /* : Array[AExpr] */;
val* var1 /* : Array[AExpr] */;
var1 = typing__AExprs__to_a(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASuperExpr#callsite for (self: ASuperExpr): nullable CallSite */
val* typing__ASuperExpr__callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_typing__ASuperExpr___callsite].val; /* _callsite on <self:ASuperExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASuperExpr#callsite for (self: Object): nullable CallSite */
val* VIRTUAL_typing__ASuperExpr__callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
val* var3 /* : nullable CallSite */;
{ /* Inline typing#ASuperExpr#callsite (self) on <self:Object(ASuperExpr)> */
var3 = self->attrs[COLOR_typing__ASuperExpr___callsite].val; /* _callsite on <self:Object(ASuperExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASuperExpr#callsite= for (self: ASuperExpr, nullable CallSite) */
void typing__ASuperExpr__callsite_61d(val* self, val* p0) {
self->attrs[COLOR_typing__ASuperExpr___callsite].val = p0; /* _callsite on <self:ASuperExpr> */
RET_LABEL:;
}
/* method typing#ASuperExpr#callsite= for (self: Object, nullable CallSite) */
void VIRTUAL_typing__ASuperExpr__callsite_61d(val* self, val* p0) {
{ /* Inline typing#ASuperExpr#callsite= (self,p0) on <self:Object(ASuperExpr)> */
self->attrs[COLOR_typing__ASuperExpr___callsite].val = p0; /* _callsite on <self:Object(ASuperExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#ASuperExpr#mpropdef for (self: ASuperExpr): nullable MMethodDef */
val* typing__ASuperExpr__mpropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_typing__ASuperExpr___mpropdef].val; /* _mpropdef on <self:ASuperExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASuperExpr#mpropdef for (self: Object): nullable MMethodDef */
val* VIRTUAL_typing__ASuperExpr__mpropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
val* var3 /* : nullable MMethodDef */;
{ /* Inline typing#ASuperExpr#mpropdef (self) on <self:Object(ASuperExpr)> */
var3 = self->attrs[COLOR_typing__ASuperExpr___mpropdef].val; /* _mpropdef on <self:Object(ASuperExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ASuperExpr#mpropdef= for (self: ASuperExpr, nullable MMethodDef) */
void typing__ASuperExpr__mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_typing__ASuperExpr___mpropdef].val = p0; /* _mpropdef on <self:ASuperExpr> */
RET_LABEL:;
}
/* method typing#ASuperExpr#mpropdef= for (self: Object, nullable MMethodDef) */
void VIRTUAL_typing__ASuperExpr__mpropdef_61d(val* self, val* p0) {
{ /* Inline typing#ASuperExpr#mpropdef= (self,p0) on <self:Object(ASuperExpr)> */
self->attrs[COLOR_typing__ASuperExpr___mpropdef].val = p0; /* _mpropdef on <self:Object(ASuperExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#ASuperExpr#accept_typing for (self: ASuperExpr, TypeVisitor) */
void typing__ASuperExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MClassType */;
val* var2 /* : nullable MClassType */;
val* var_recvtype /* var recvtype: nullable MClassType */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable MPropDef */;
val* var12 /* : nullable MPropDef */;
val* var13 /* : MProperty */;
val* var15 /* : MProperty */;
val* var_mproperty /* var mproperty: MProperty */;
short int var16 /* : Bool */;
int cltype;
int idtype;
short int var17 /* : Bool */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
val* var22 /* : MModule */;
val* var24 /* : MModule */;
val* var25 /* : Array[MPropDef] */;
val* var_superprops /* var superprops: Array[MMethodDef] */;
long var26 /* : Int */;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var_ /* var : Bool */;
val* var36 /* : nullable MPropDef */;
val* var38 /* : nullable MPropDef */;
short int var39 /* : Bool */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
val* var50 /* : Array[Object] */;
long var51 /* : Int */;
val* var52 /* : NativeArray[Object] */;
val* var53 /* : String */;
val* var54 /* : nullable Object */;
val* var_superprop /* var superprop: MMethodDef */;
val* var55 /* : nullable MSignature */;
val* var57 /* : nullable MSignature */;
val* var_msignature /* var msignature: MSignature */;
short int var58 /* : Bool */;
val* var59 /* : MType */;
short int var60 /* : Bool */;
int cltype61;
int idtype62;
const char* var_class_name;
val* var63 /* : AExprs */;
val* var64 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
long var65 /* : Int */;
long var66 /* : Int */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
short int var73 /* : Bool */;
val* var74 /* : String */;
val* var76 /* : String */;
short int var77 /* : Bool */;
val* var78 /* : nullable MType */;
val* var80 /* : nullable MType */;
short int var82 /* : Bool */;
val* var84 /* : nullable MPropDef */;
val* var86 /* : nullable MPropDef */;
short int var87 /* : Bool */;
val* var89 /* : nullable MPropDef */;
val* var91 /* : nullable MPropDef */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
var_v = p0;
{
{ /* Inline typing#TypeVisitor#anchor (var_v) on <var_v:TypeVisitor> */
var2 = var_v->attrs[COLOR_typing__TypeVisitor___anchor].val; /* _anchor on <var_v:TypeVisitor> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_recvtype = var;
var3 = NULL;
if (var_recvtype == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_recvtype,var3) on <var_recvtype:nullable MClassType> */
var_other = var3;
{
var8 = ((short int (*)(val*, val*))(var_recvtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_recvtype, var_other) /* == on <var_recvtype:nullable MClassType(MClassType)>*/;
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
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1480);
show_backtrace(1);
}
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var12 = var_v->attrs[COLOR_typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1481);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var10) on <var10:nullable MPropDef> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var15 = var10->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var10:nullable MPropDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_mproperty = var13;
/* <var_mproperty:MProperty> isa MMethod */
cltype = type_model__MMethod.color;
idtype = type_model__MMethod.id;
if(cltype >= var_mproperty->type->table_size) {
var16 = 0;
} else {
var16 = var_mproperty->type->type_table[cltype] == idtype;
}
var17 = !var16;
if (var17){
if (varonce) {
var18 = varonce;
} else {
var19 = "Error: super only usable in a method";
var20 = 36;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce = var18;
}
{
typing__TypeVisitor__error(var_v, self, var18); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var24 = var_v->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = model__MProperty__lookup_super_definitions(var_mproperty, var22, var_recvtype);
}
var_superprops = var25;
{
var26 = array__AbstractArrayRead__length(var_superprops);
}
var27 = 0;
{
{ /* Inline kernel#Int#== (var26,var27) on <var26:Int> */
var31 = var26 == var27;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
{
{ /* Inline model#MMethod#is_init (var_mproperty) on <var_mproperty:MProperty(MMethod)> */
var35 = var_mproperty->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var_mproperty:MProperty(MMethod)> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
var_ = var33;
if (var33){
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var38 = var_v->attrs[COLOR_typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
if (var36 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1488);
show_backtrace(1);
} else {
var39 = model__MPropDef__is_intro(var36);
}
var32 = var39;
} else {
var32 = var_;
}
if (var32){
{
typing__ASuperExpr__process_superinit(self, var_v); /* Direct call typing#ASuperExpr#process_superinit on <self:ASuperExpr>*/
}
goto RET_LABEL;
} else {
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "Error: No super method to call for ";
var43 = 35;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = ".";
var48 = 1;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var50 = array_instance Array[Object] */
var51 = 3;
var52 = NEW_array__NativeArray(var51, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var52)->values[0] = (val*) var41;
((struct instance_array__NativeArray*)var52)->values[1] = (val*) var_mproperty;
((struct instance_array__NativeArray*)var52)->values[2] = (val*) var46;
{
((void (*)(val*, val*, long))(var50->class->vft[COLOR_array__Array__with_native]))(var50, var52, var51) /* with_native on <var50:Array[Object]>*/;
}
}
{
var53 = ((val* (*)(val*))(var50->class->vft[COLOR_string__Object__to_s]))(var50) /* to_s on <var50:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var53); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var54 = abstract_collection__SequenceRead__first(var_superprops);
}
var_superprop = var54;
{
{ /* Inline model#MMethodDef#msignature (var_superprop) on <var_superprop:MMethodDef> */
var57 = var_superprop->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_superprop:MMethodDef> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1498);
show_backtrace(1);
}
var_msignature = var55;
var58 = 1;
{
var59 = typing__TypeVisitor__resolve_for(var_v, var_msignature, var_recvtype, var58);
}
/* <var59:MType> isa MSignature */
cltype61 = type_model__MSignature.color;
idtype62 = type_model__MSignature.id;
if(cltype61 >= var59->type->table_size) {
var60 = 0;
} else {
var60 = var59->type->type_table[cltype61] == idtype62;
}
if (unlikely(!var60)) {
var_class_name = var59 == NULL ? "null" : var59->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MSignature", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1499);
show_backtrace(1);
}
var_msignature = var59;
{
var63 = parser_nodes__ASuperExpr__n_args(self);
}
{
var64 = typing__AExprs__to_a(var63);
}
var_args = var64;
{
var65 = array__AbstractArrayRead__length(var_args);
}
var66 = 0;
{
{ /* Inline kernel#Int#> (var65,var66) on <var65:Int> */
/* Covariant cast for argument 0 (i) <var66:Int> isa OTHER */
/* <var66:Int> isa OTHER */
var69 = 1; /* easy <var66:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var73 = var65 > var66;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
if (var67){
{
{ /* Inline model#MProperty#name (var_mproperty) on <var_mproperty:MProperty(MMethod)> */
var76 = var_mproperty->attrs[COLOR_model__MProperty___name].val; /* _name on <var_mproperty:MProperty(MMethod)> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
var77 = typing__TypeVisitor__check_signature(var_v, self, var_args, var74, var_msignature);
}
var77;
} else {
}
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:MSignature> */
var80 = var_msignature->attrs[COLOR_model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:MSignature> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var78) on <self:ASuperExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var78; /* _mtype on <self:ASuperExpr> */
RET_LABEL81:(void)0;
}
}
var82 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var82) on <self:ASuperExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var82; /* _is_typed on <self:ASuperExpr> */
RET_LABEL83:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var86 = var_v->attrs[COLOR_typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var84 = var86;
RET_LABEL85:(void)0;
}
}
var87 = 1;
if (var84 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1506);
show_backtrace(1);
} else {
{ /* Inline modelize_property#MPropDef#has_supercall= (var84,var87) on <var84:nullable MPropDef> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 236);
show_backtrace(1);
}
var84->attrs[COLOR_modelize_property__MPropDef___has_supercall].s = var87; /* _has_supercall on <var84:nullable MPropDef> */
RET_LABEL88:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var91 = var_v->attrs[COLOR_typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
/* <var89:nullable MPropDef> isa MMethodDef */
cltype93 = type_model__MMethodDef.color;
idtype94 = type_model__MMethodDef.id;
if(var89 == NULL) {
var92 = 0;
} else {
if(cltype93 >= var89->type->table_size) {
var92 = 0;
} else {
var92 = var89->type->type_table[cltype93] == idtype94;
}
}
if (unlikely(!var92)) {
var_class_name95 = var89 == NULL ? "null" : var89->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1507);
show_backtrace(1);
}
{
{ /* Inline typing#ASuperExpr#mpropdef= (self,var89) on <self:ASuperExpr> */
self->attrs[COLOR_typing__ASuperExpr___mpropdef].val = var89; /* _mpropdef on <self:ASuperExpr> */
RET_LABEL96:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ASuperExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ASuperExpr__accept_typing(val* self, val* p0) {
typing__ASuperExpr__accept_typing(self, p0); /* Direct call typing#ASuperExpr#accept_typing on <self:Object(ASuperExpr)>*/
RET_LABEL:;
}
/* method typing#ASuperExpr#process_superinit for (self: ASuperExpr, TypeVisitor) */
void typing__ASuperExpr__process_superinit(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MClassType */;
val* var2 /* : nullable MClassType */;
val* var_recvtype /* var recvtype: nullable MClassType */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable MPropDef */;
val* var12 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MPropDef */;
short int var13 /* : Bool */;
int cltype;
int idtype;
val* var14 /* : MProperty */;
val* var16 /* : MProperty */;
val* var_mproperty /* var mproperty: MMethod */;
val* var17 /* : null */;
val* var_superprop /* var superprop: nullable MMethodDef */;
val* var18 /* : MClassDef */;
val* var20 /* : MClassDef */;
val* var21 /* : Array[MClassType] */;
val* var23 /* : Array[MClassType] */;
val* var24 /* : ArrayIterator[nullable Object] */;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var27 /* : MModule */;
val* var29 /* : MModule */;
val* var30 /* : MClassType */;
val* var31 /* : ModelBuilder */;
val* var33 /* : ModelBuilder */;
val* var34 /* : ToolContext */;
val* var36 /* : ToolContext */;
long var37 /* : Int */;
long var39 /* : Int */;
long var_errcount /* var errcount: Int */;
val* var40 /* : String */;
val* var42 /* : String */;
val* var43 /* : nullable MProperty */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
const char* var_class_name;
val* var_candidate /* var candidate: nullable MMethod */;
val* var47 /* : null */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
val* var_other51 /* var other: nullable Object */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : ModelBuilder */;
val* var57 /* : ModelBuilder */;
val* var58 /* : ToolContext */;
val* var60 /* : ToolContext */;
long var61 /* : Int */;
long var63 /* : Int */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name69;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
val* var72 /* : null */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
short int var_ /* var : Bool */;
val* var79 /* : MProperty */;
val* var81 /* : MProperty */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
static val* varonce;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : FlatString */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : FlatString */;
val* var97 /* : String */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : FlatString */;
val* var103 /* : MProperty */;
val* var105 /* : MProperty */;
val* var106 /* : String */;
val* var107 /* : Array[Object] */;
long var108 /* : Int */;
val* var109 /* : NativeArray[Object] */;
val* var110 /* : String */;
val* var111 /* : MModule */;
val* var113 /* : MModule */;
val* var114 /* : Array[MPropDef] */;
val* var_candidatedefs /* var candidatedefs: Array[MMethodDef] */;
val* var115 /* : null */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
short int var120 /* : Bool */;
short int var121 /* : Bool */;
val* var122 /* : nullable Object */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
short int var126 /* : Bool */;
short int var128 /* : Bool */;
long var129 /* : Int */;
long var130 /* : Int */;
short int var131 /* : Bool */;
short int var133 /* : Bool */;
int cltype134;
int idtype135;
const char* var_class_name136;
short int var137 /* : Bool */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : NativeString */;
long var141 /* : Int */;
val* var142 /* : FlatString */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : NativeString */;
long var146 /* : Int */;
val* var147 /* : FlatString */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : NativeString */;
long var151 /* : Int */;
val* var152 /* : FlatString */;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : NativeString */;
long var156 /* : Int */;
val* var157 /* : FlatString */;
val* var158 /* : String */;
val* var159 /* : Array[Object] */;
long var160 /* : Int */;
val* var161 /* : NativeArray[Object] */;
val* var162 /* : String */;
val* var163 /* : nullable Object */;
val* var164 /* : null */;
short int var165 /* : Bool */;
short int var166 /* : Bool */;
short int var168 /* : Bool */;
short int var170 /* : Bool */;
static val* varonce171;
val* var172 /* : String */;
char* var173 /* : NativeString */;
long var174 /* : Int */;
val* var175 /* : FlatString */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : NativeString */;
long var179 /* : Int */;
val* var180 /* : FlatString */;
val* var181 /* : Array[Object] */;
long var182 /* : Int */;
val* var183 /* : NativeArray[Object] */;
val* var184 /* : String */;
val* var185 /* : nullable MSignature */;
val* var187 /* : nullable MSignature */;
val* var_msignature /* var msignature: MSignature */;
short int var188 /* : Bool */;
val* var189 /* : MType */;
short int var190 /* : Bool */;
int cltype191;
int idtype192;
const char* var_class_name193;
val* var194 /* : CallSite */;
val* var195 /* : MModule */;
val* var197 /* : MModule */;
val* var198 /* : nullable MClassType */;
val* var200 /* : nullable MClassType */;
short int var201 /* : Bool */;
val* var202 /* : MProperty */;
val* var204 /* : MProperty */;
short int var205 /* : Bool */;
val* var_callsite /* var callsite: CallSite */;
val* var208 /* : AExprs */;
val* var209 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
long var210 /* : Int */;
long var211 /* : Int */;
short int var212 /* : Bool */;
short int var214 /* : Bool */;
int cltype215;
int idtype216;
const char* var_class_name217;
short int var218 /* : Bool */;
short int var219 /* : Bool */;
val* var220 /* : nullable MSignature */;
val* var222 /* : nullable MSignature */;
long var223 /* : Int */;
long var224 /* : Int */;
short int var225 /* : Bool */;
short int var227 /* : Bool */;
int cltype228;
int idtype229;
const char* var_class_name230;
short int var231 /* : Bool */;
static val* varonce232;
val* var233 /* : String */;
char* var234 /* : NativeString */;
long var235 /* : Int */;
val* var236 /* : FlatString */;
val* var237 /* : nullable MSignature */;
val* var239 /* : nullable MSignature */;
long var240 /* : Int */;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : NativeString */;
long var244 /* : Int */;
val* var245 /* : FlatString */;
long var246 /* : Int */;
static val* varonce247;
val* var248 /* : String */;
char* var249 /* : NativeString */;
long var250 /* : Int */;
val* var251 /* : FlatString */;
val* var252 /* : Array[Object] */;
long var253 /* : Int */;
val* var254 /* : NativeArray[Object] */;
val* var255 /* : Object */;
val* var256 /* : Object */;
val* var257 /* : String */;
long var258 /* : Int */;
long var_i /* var i: Int */;
val* var259 /* : Array[MParameter] */;
val* var261 /* : Array[MParameter] */;
val* var262 /* : ArrayIterator[nullable Object] */;
short int var263 /* : Bool */;
val* var264 /* : nullable Object */;
val* var_sp /* var sp: MParameter */;
val* var265 /* : nullable MSignature */;
val* var267 /* : nullable MSignature */;
val* var268 /* : Array[MParameter] */;
val* var270 /* : Array[MParameter] */;
val* var271 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var272 /* : MType */;
val* var274 /* : MType */;
val* var275 /* : MType */;
val* var277 /* : MType */;
short int var278 /* : Bool */;
short int var279 /* : Bool */;
static val* varonce280;
val* var281 /* : String */;
char* var282 /* : NativeString */;
long var283 /* : Int */;
val* var284 /* : FlatString */;
static val* varonce285;
val* var286 /* : String */;
char* var287 /* : NativeString */;
long var288 /* : Int */;
val* var289 /* : FlatString */;
val* var290 /* : MType */;
val* var292 /* : MType */;
static val* varonce293;
val* var294 /* : String */;
char* var295 /* : NativeString */;
long var296 /* : Int */;
val* var297 /* : FlatString */;
val* var298 /* : String */;
val* var300 /* : String */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : NativeString */;
long var304 /* : Int */;
val* var305 /* : FlatString */;
val* var306 /* : MType */;
val* var308 /* : MType */;
static val* varonce309;
val* var310 /* : String */;
char* var311 /* : NativeString */;
long var312 /* : Int */;
val* var313 /* : FlatString */;
val* var314 /* : Array[Object] */;
long var315 /* : Int */;
val* var316 /* : NativeArray[Object] */;
val* var317 /* : Object */;
val* var318 /* : String */;
long var319 /* : Int */;
long var320 /* : Int */;
short int var322 /* : Bool */;
int cltype323;
int idtype324;
const char* var_class_name325;
long var326 /* : Int */;
short int var328 /* : Bool */;
var_v = p0;
{
{ /* Inline typing#TypeVisitor#anchor (var_v) on <var_v:TypeVisitor> */
var2 = var_v->attrs[COLOR_typing__TypeVisitor___anchor].val; /* _anchor on <var_v:TypeVisitor> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_recvtype = var;
var3 = NULL;
if (var_recvtype == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_recvtype,var3) on <var_recvtype:nullable MClassType> */
var_other = var3;
{
var8 = ((short int (*)(val*, val*))(var_recvtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_recvtype, var_other) /* == on <var_recvtype:nullable MClassType(MClassType)>*/;
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
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1513);
show_backtrace(1);
}
{
{ /* Inline typing#TypeVisitor#mpropdef (var_v) on <var_v:TypeVisitor> */
var12 = var_v->attrs[COLOR_typing__TypeVisitor___mpropdef].val; /* _mpropdef on <var_v:TypeVisitor> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_mpropdef = var10;
/* <var_mpropdef:nullable MPropDef> isa MMethodDef */
cltype = type_model__MMethodDef.color;
idtype = type_model__MMethodDef.id;
if(var_mpropdef == NULL) {
var13 = 0;
} else {
if(cltype >= var_mpropdef->type->table_size) {
var13 = 0;
} else {
var13 = var_mpropdef->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1515);
show_backtrace(1);
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var16 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MPropDef(MMethodDef)> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var_mproperty = var14;
var17 = NULL;
var_superprop = var17;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var20 = var_mpropdef->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MPropDef(MMethodDef)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MClassDef#supertypes (var18) on <var18:MClassDef> */
var23 = var18->attrs[COLOR_model__MClassDef___supertypes].val; /* _supertypes on <var18:MClassDef> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 517);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = array__AbstractArrayRead__iterator(var21);
}
for(;;) {
{
var25 = array__ArrayIterator__is_ok(var24);
}
if(!var25) break;
{
var26 = array__ArrayIterator__item(var24);
}
var_msupertype = var26;
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var29 = var_v->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = model__MClassType__anchor_to(var_msupertype, var27, var_recvtype);
}
var_msupertype = var30;
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var33 = var_v->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var31) on <var31:ModelBuilder> */
var36 = var31->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var31:ModelBuilder> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var34) on <var34:ToolContext> */
var39 = var34->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <var34:ToolContext> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_errcount = var37;
{
{ /* Inline model#MProperty#name (var_mproperty) on <var_mproperty:MMethod> */
var42 = var_mproperty->attrs[COLOR_model__MProperty___name].val; /* _name on <var_mproperty:MMethod> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = typing__TypeVisitor__try_get_mproperty_by_name2(var_v, self, var_msupertype, var40);
}
/* <var43:nullable MProperty> isa nullable MMethod */
cltype45 = type_nullable_model__MMethod.color;
idtype46 = type_nullable_model__MMethod.id;
if(var43 == NULL) {
var44 = 1;
} else {
if(cltype45 >= var43->type->table_size) {
var44 = 0;
} else {
var44 = var43->type->type_table[cltype45] == idtype46;
}
}
if (unlikely(!var44)) {
var_class_name = var43 == NULL ? "null" : var43->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1521);
show_backtrace(1);
}
var_candidate = var43;
var47 = NULL;
if (var_candidate == NULL) {
var48 = 1; /* is null */
} else {
var48 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_candidate,var47) on <var_candidate:nullable MMethod> */
var_other51 = var47;
{
{ /* Inline kernel#Object#is_same_instance (var_candidate,var_other51) on <var_candidate:nullable MMethod(MMethod)> */
var54 = var_candidate == var_other51;
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
if (var48){
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var57 = var_v->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var55) on <var55:ModelBuilder> */
var60 = var55->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var55:ModelBuilder> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count (var58) on <var58:ToolContext> */
var63 = var58->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <var58:ToolContext> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var61,var_errcount) on <var61:Int> */
/* Covariant cast for argument 0 (i) <var_errcount:Int> isa OTHER */
/* <var_errcount:Int> isa OTHER */
var66 = 1; /* easy <var_errcount:Int> isa OTHER*/
if (unlikely(!var66)) {
var_class_name69 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var70 = var61 > var_errcount;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
if (var64){
goto RET_LABEL;
} else {
}
goto CONTINUE_label;
} else {
}
var72 = NULL;
if (var_superprop == NULL) {
var73 = 0; /* is null */
} else {
var73 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_superprop,var72) on <var_superprop:nullable MMethodDef> */
var_other = var72;
{
var77 = ((short int (*)(val*, val*))(var_superprop->class->vft[COLOR_kernel__Object___61d_61d]))(var_superprop, var_other) /* == on <var_superprop:nullable MMethodDef(MMethodDef)>*/;
var76 = var77;
}
var78 = !var76;
var74 = var78;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
var73 = var74;
}
var_ = var73;
if (var73){
{
{ /* Inline model#MPropDef#mproperty (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var81 = var_superprop->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_superprop:nullable MMethodDef(MMethodDef)> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var79,var_candidate) on <var79:MProperty(MMethod)> */
var_other = var_candidate;
{
var86 = ((short int (*)(val*, val*))(var79->class->vft[COLOR_kernel__Object___61d_61d]))(var79, var_other) /* == on <var79:MProperty(MMethod)>*/;
var85 = var86;
}
var87 = !var85;
var83 = var87;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
var82 = var83;
}
var71 = var82;
} else {
var71 = var_;
}
if (var71){
if (varonce) {
var88 = varonce;
} else {
var89 = "Error: conflicting super constructor to call for ";
var90 = 49;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce = var88;
}
if (varonce92) {
var93 = varonce92;
} else {
var94 = ": ";
var95 = 2;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
{
var97 = model__MProperty__full_name(var_candidate);
}
if (varonce98) {
var99 = varonce98;
} else {
var100 = ", ";
var101 = 2;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
{
{ /* Inline model#MPropDef#mproperty (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var105 = var_superprop->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_superprop:nullable MMethodDef(MMethodDef)> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
var106 = model__MProperty__full_name(var103);
}
var107 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var107 = array_instance Array[Object] */
var108 = 6;
var109 = NEW_array__NativeArray(var108, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var109)->values[0] = (val*) var88;
((struct instance_array__NativeArray*)var109)->values[1] = (val*) var_mproperty;
((struct instance_array__NativeArray*)var109)->values[2] = (val*) var93;
((struct instance_array__NativeArray*)var109)->values[3] = (val*) var97;
((struct instance_array__NativeArray*)var109)->values[4] = (val*) var99;
((struct instance_array__NativeArray*)var109)->values[5] = (val*) var106;
{
((void (*)(val*, val*, long))(var107->class->vft[COLOR_array__Array__with_native]))(var107, var109, var108) /* with_native on <var107:Array[Object]>*/;
}
}
{
var110 = ((val* (*)(val*))(var107->class->vft[COLOR_string__Object__to_s]))(var107) /* to_s on <var107:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var110); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var113 = var_v->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
var114 = model__MProperty__lookup_definitions(var_candidate, var111, var_recvtype);
}
var_candidatedefs = var114;
var115 = NULL;
if (var_superprop == NULL) {
var116 = 0; /* is null */
} else {
var116 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_superprop,var115) on <var_superprop:nullable MMethodDef> */
var_other = var115;
{
var120 = ((short int (*)(val*, val*))(var_superprop->class->vft[COLOR_kernel__Object___61d_61d]))(var_superprop, var_other) /* == on <var_superprop:nullable MMethodDef(MMethodDef)>*/;
var119 = var120;
}
var121 = !var119;
var117 = var121;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
var116 = var117;
}
if (var116){
{
var122 = abstract_collection__SequenceRead__first(var_candidatedefs);
}
{
{ /* Inline kernel#Object#== (var_superprop,var122) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var_other51 = var122;
{
{ /* Inline kernel#Object#is_same_instance (var_superprop,var_other51) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var128 = var_superprop == var_other51;
var126 = var128;
goto RET_LABEL127;
RET_LABEL127:(void)0;
}
}
var124 = var126;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
var123 = var124;
}
if (var123){
goto CONTINUE_label;
} else {
}
{
array__Array__add(var_candidatedefs, var_superprop); /* Direct call array#Array#add on <var_candidatedefs:Array[MMethodDef]>*/
}
} else {
}
{
var129 = array__AbstractArrayRead__length(var_candidatedefs);
}
var130 = 1;
{
{ /* Inline kernel#Int#> (var129,var130) on <var129:Int> */
/* Covariant cast for argument 0 (i) <var130:Int> isa OTHER */
/* <var130:Int> isa OTHER */
var133 = 1; /* easy <var130:Int> isa OTHER*/
if (unlikely(!var133)) {
var_class_name136 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name136);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var137 = var129 > var130;
var131 = var137;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
}
if (var131){
if (varonce138) {
var139 = varonce138;
} else {
var140 = "Error: confliting property definitions for property ";
var141 = 52;
var142 = string__NativeString__to_s_with_length(var140, var141);
var139 = var142;
varonce138 = var139;
}
if (varonce143) {
var144 = varonce143;
} else {
var145 = " in ";
var146 = 4;
var147 = string__NativeString__to_s_with_length(var145, var146);
var144 = var147;
varonce143 = var144;
}
if (varonce148) {
var149 = varonce148;
} else {
var150 = ": ";
var151 = 2;
var152 = string__NativeString__to_s_with_length(var150, var151);
var149 = var152;
varonce148 = var149;
}
if (varonce153) {
var154 = varonce153;
} else {
var155 = ", ";
var156 = 2;
var157 = string__NativeString__to_s_with_length(var155, var156);
var154 = var157;
varonce153 = var154;
}
{
var158 = string__Collection__join(var_candidatedefs, var154);
}
var159 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var159 = array_instance Array[Object] */
var160 = 6;
var161 = NEW_array__NativeArray(var160, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var161)->values[0] = (val*) var139;
((struct instance_array__NativeArray*)var161)->values[1] = (val*) var_mproperty;
((struct instance_array__NativeArray*)var161)->values[2] = (val*) var144;
((struct instance_array__NativeArray*)var161)->values[3] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var161)->values[4] = (val*) var149;
((struct instance_array__NativeArray*)var161)->values[5] = (val*) var158;
{
((void (*)(val*, val*, long))(var159->class->vft[COLOR_array__Array__with_native]))(var159, var161, var160) /* with_native on <var159:Array[Object]>*/;
}
}
{
var162 = ((val* (*)(val*))(var159->class->vft[COLOR_string__Object__to_s]))(var159) /* to_s on <var159:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var162); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var163 = abstract_collection__SequenceRead__first(var_candidatedefs);
}
var_superprop = var163;
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var24); /* Direct call array#ArrayIterator#next on <var24:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
var164 = NULL;
if (var_superprop == NULL) {
var165 = 1; /* is null */
} else {
var165 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_superprop,var164) on <var_superprop:nullable MMethodDef> */
var_other51 = var164;
{
{ /* Inline kernel#Object#is_same_instance (var_superprop,var_other51) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var170 = var_superprop == var_other51;
var168 = var170;
goto RET_LABEL169;
RET_LABEL169:(void)0;
}
}
var166 = var168;
goto RET_LABEL167;
RET_LABEL167:(void)0;
}
var165 = var166;
}
if (var165){
if (varonce171) {
var172 = varonce171;
} else {
var173 = "Error: No super method to call for ";
var174 = 35;
var175 = string__NativeString__to_s_with_length(var173, var174);
var172 = var175;
varonce171 = var172;
}
if (varonce176) {
var177 = varonce176;
} else {
var178 = ".";
var179 = 1;
var180 = string__NativeString__to_s_with_length(var178, var179);
var177 = var180;
varonce176 = var177;
}
var181 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var181 = array_instance Array[Object] */
var182 = 3;
var183 = NEW_array__NativeArray(var182, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var183)->values[0] = (val*) var172;
((struct instance_array__NativeArray*)var183)->values[1] = (val*) var_mproperty;
((struct instance_array__NativeArray*)var183)->values[2] = (val*) var177;
{
((void (*)(val*, val*, long))(var181->class->vft[COLOR_array__Array__with_native]))(var181, var183, var182) /* with_native on <var181:Array[Object]>*/;
}
}
{
var184 = ((val* (*)(val*))(var181->class->vft[COLOR_string__Object__to_s]))(var181) /* to_s on <var181:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var184); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MMethodDef#msignature (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var187 = var_superprop->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_superprop:nullable MMethodDef(MMethodDef)> */
var185 = var187;
RET_LABEL186:(void)0;
}
}
if (unlikely(var185 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1546);
show_backtrace(1);
}
var_msignature = var185;
var188 = 1;
{
var189 = typing__TypeVisitor__resolve_for(var_v, var_msignature, var_recvtype, var188);
}
/* <var189:MType> isa MSignature */
cltype191 = type_model__MSignature.color;
idtype192 = type_model__MSignature.id;
if(cltype191 >= var189->type->table_size) {
var190 = 0;
} else {
var190 = var189->type->type_table[cltype191] == idtype192;
}
if (unlikely(!var190)) {
var_class_name193 = var189 == NULL ? "null" : var189->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MSignature", var_class_name193);
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1547);
show_backtrace(1);
}
var_msignature = var189;
var194 = NEW_typing__CallSite(&type_typing__CallSite);
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var197 = var_v->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var197 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var195 = var197;
RET_LABEL196:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#anchor (var_v) on <var_v:TypeVisitor> */
var200 = var_v->attrs[COLOR_typing__TypeVisitor___anchor].val; /* _anchor on <var_v:TypeVisitor> */
var198 = var200;
RET_LABEL199:(void)0;
}
}
var201 = 1;
{
{ /* Inline model#MPropDef#mproperty (var_superprop) on <var_superprop:nullable MMethodDef(MMethodDef)> */
var204 = var_superprop->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_superprop:nullable MMethodDef(MMethodDef)> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
var205 = 0;
{
{ /* Inline typing#CallSite#init (var194,self,var_recvtype,var195,var198,var201,var202,var_superprop,var_msignature,var205) on <var194:CallSite> */
var194->attrs[COLOR_typing__CallSite___node].val = self; /* _node on <var194:CallSite> */
var194->attrs[COLOR_typing__CallSite___recv].val = var_recvtype; /* _recv on <var194:CallSite> */
var194->attrs[COLOR_typing__CallSite___mmodule].val = var195; /* _mmodule on <var194:CallSite> */
var194->attrs[COLOR_typing__CallSite___anchor].val = var198; /* _anchor on <var194:CallSite> */
var194->attrs[COLOR_typing__CallSite___recv_is_self].s = var201; /* _recv_is_self on <var194:CallSite> */
var194->attrs[COLOR_typing__CallSite___mproperty].val = var202; /* _mproperty on <var194:CallSite> */
var194->attrs[COLOR_typing__CallSite___mpropdef].val = var_superprop; /* _mpropdef on <var194:CallSite> */
var194->attrs[COLOR_typing__CallSite___msignature].val = var_msignature; /* _msignature on <var194:CallSite> */
var194->attrs[COLOR_typing__CallSite___erasure_cast].s = var205; /* _erasure_cast on <var194:CallSite> */
RET_LABEL206:(void)0;
}
}
var_callsite = var194;
{
{ /* Inline typing#ASuperExpr#callsite= (self,var_callsite) on <self:ASuperExpr> */
self->attrs[COLOR_typing__ASuperExpr___callsite].val = var_callsite; /* _callsite on <self:ASuperExpr> */
RET_LABEL207:(void)0;
}
}
{
var208 = parser_nodes__ASuperExpr__n_args(self);
}
{
var209 = typing__AExprs__to_a(var208);
}
var_args = var209;
{
var210 = array__AbstractArrayRead__length(var_args);
}
var211 = 0;
{
{ /* Inline kernel#Int#> (var210,var211) on <var210:Int> */
/* Covariant cast for argument 0 (i) <var211:Int> isa OTHER */
/* <var211:Int> isa OTHER */
var214 = 1; /* easy <var211:Int> isa OTHER*/
if (unlikely(!var214)) {
var_class_name217 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name217);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var218 = var210 > var211;
var212 = var218;
goto RET_LABEL213;
RET_LABEL213:(void)0;
}
}
if (var212){
{
var219 = typing__CallSite__check_signature(var_callsite, var_v, var_args);
}
var219;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var222 = var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var220 = var222;
RET_LABEL221:(void)0;
}
}
if (var220 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1557);
show_backtrace(1);
} else {
var223 = model__MSignature__arity(var220);
}
{
var224 = model__MSignature__arity(var_msignature);
}
{
{ /* Inline kernel#Int#< (var223,var224) on <var223:Int> */
/* Covariant cast for argument 0 (i) <var224:Int> isa OTHER */
/* <var224:Int> isa OTHER */
var227 = 1; /* easy <var224:Int> isa OTHER*/
if (unlikely(!var227)) {
var_class_name230 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name230);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 325);
show_backtrace(1);
}
var231 = var223 < var224;
var225 = var231;
goto RET_LABEL226;
RET_LABEL226:(void)0;
}
}
if (var225){
if (varonce232) {
var233 = varonce232;
} else {
var234 = "Error: Not enough implicit arguments to pass. Got ";
var235 = 50;
var236 = string__NativeString__to_s_with_length(var234, var235);
var233 = var236;
varonce232 = var233;
}
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var239 = var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var237 = var239;
RET_LABEL238:(void)0;
}
}
if (var237 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1558);
show_backtrace(1);
} else {
var240 = model__MSignature__arity(var237);
}
if (varonce241) {
var242 = varonce241;
} else {
var243 = ", expected at least ";
var244 = 20;
var245 = string__NativeString__to_s_with_length(var243, var244);
var242 = var245;
varonce241 = var242;
}
{
var246 = model__MSignature__arity(var_msignature);
}
if (varonce247) {
var248 = varonce247;
} else {
var249 = ". Signature is ";
var250 = 15;
var251 = string__NativeString__to_s_with_length(var249, var250);
var248 = var251;
varonce247 = var248;
}
var252 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var252 = array_instance Array[Object] */
var253 = 6;
var254 = NEW_array__NativeArray(var253, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var254)->values[0] = (val*) var233;
var255 = BOX_kernel__Int(var240); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var254)->values[1] = (val*) var255;
((struct instance_array__NativeArray*)var254)->values[2] = (val*) var242;
var256 = BOX_kernel__Int(var246); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var254)->values[3] = (val*) var256;
((struct instance_array__NativeArray*)var254)->values[4] = (val*) var248;
((struct instance_array__NativeArray*)var254)->values[5] = (val*) var_msignature;
{
((void (*)(val*, val*, long))(var252->class->vft[COLOR_array__Array__with_native]))(var252, var254, var253) /* with_native on <var252:Array[Object]>*/;
}
}
{
var257 = ((val* (*)(val*))(var252->class->vft[COLOR_string__Object__to_s]))(var252) /* to_s on <var252:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var257); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
var258 = 0;
var_i = var258;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var261 = var_msignature->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var261 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var259 = var261;
RET_LABEL260:(void)0;
}
}
{
var262 = array__AbstractArrayRead__iterator(var259);
}
for(;;) {
{
var263 = array__ArrayIterator__is_ok(var262);
}
if(!var263) break;
{
var264 = array__ArrayIterator__item(var262);
}
var_sp = var264;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var267 = var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MPropDef(MMethodDef)> */
var265 = var267;
RET_LABEL266:(void)0;
}
}
if (var265 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1564);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#mparameters (var265) on <var265:nullable MSignature> */
if (unlikely(var265 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var270 = var265->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var265:nullable MSignature> */
if (unlikely(var270 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var268 = var270;
RET_LABEL269:(void)0;
}
}
{
var271 = array__Array___91d_93d(var268, var_i);
}
var_p = var271;
{
{ /* Inline model#MParameter#mtype (var_p) on <var_p:MParameter> */
var274 = var_p->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var274 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var272 = var274;
RET_LABEL273:(void)0;
}
}
{
{ /* Inline model#MParameter#mtype (var_sp) on <var_sp:MParameter> */
var277 = var_sp->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var_sp:MParameter> */
if (unlikely(var277 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var275 = var277;
RET_LABEL276:(void)0;
}
}
{
var278 = typing__TypeVisitor__is_subtype(var_v, var272, var275);
}
var279 = !var278;
if (var279){
if (varonce280) {
var281 = varonce280;
} else {
var282 = "Type error: expected argument #";
var283 = 31;
var284 = string__NativeString__to_s_with_length(var282, var283);
var281 = var284;
varonce280 = var281;
}
if (varonce285) {
var286 = varonce285;
} else {
var287 = " of type ";
var288 = 9;
var289 = string__NativeString__to_s_with_length(var287, var288);
var286 = var289;
varonce285 = var286;
}
{
{ /* Inline model#MParameter#mtype (var_sp) on <var_sp:MParameter> */
var292 = var_sp->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var_sp:MParameter> */
if (unlikely(var292 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var290 = var292;
RET_LABEL291:(void)0;
}
}
if (varonce293) {
var294 = varonce293;
} else {
var295 = ", got implicit argument ";
var296 = 24;
var297 = string__NativeString__to_s_with_length(var295, var296);
var294 = var297;
varonce293 = var294;
}
{
{ /* Inline model#MParameter#name (var_p) on <var_p:MParameter> */
var300 = var_p->attrs[COLOR_model__MParameter___name].val; /* _name on <var_p:MParameter> */
if (unlikely(var300 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1549);
show_backtrace(1);
}
var298 = var300;
RET_LABEL299:(void)0;
}
}
if (varonce301) {
var302 = varonce301;
} else {
var303 = " of type ";
var304 = 9;
var305 = string__NativeString__to_s_with_length(var303, var304);
var302 = var305;
varonce301 = var302;
}
{
{ /* Inline model#MParameter#mtype (var_p) on <var_p:MParameter> */
var308 = var_p->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var308 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var306 = var308;
RET_LABEL307:(void)0;
}
}
if (varonce309) {
var310 = varonce309;
} else {
var311 = ". Signature is ";
var312 = 15;
var313 = string__NativeString__to_s_with_length(var311, var312);
var310 = var313;
varonce309 = var310;
}
var314 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var314 = array_instance Array[Object] */
var315 = 10;
var316 = NEW_array__NativeArray(var315, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var316)->values[0] = (val*) var281;
var317 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var316)->values[1] = (val*) var317;
((struct instance_array__NativeArray*)var316)->values[2] = (val*) var286;
((struct instance_array__NativeArray*)var316)->values[3] = (val*) var290;
((struct instance_array__NativeArray*)var316)->values[4] = (val*) var294;
((struct instance_array__NativeArray*)var316)->values[5] = (val*) var298;
((struct instance_array__NativeArray*)var316)->values[6] = (val*) var302;
((struct instance_array__NativeArray*)var316)->values[7] = (val*) var306;
((struct instance_array__NativeArray*)var316)->values[8] = (val*) var310;
((struct instance_array__NativeArray*)var316)->values[9] = (val*) var_msignature;
{
((void (*)(val*, val*, long))(var314->class->vft[COLOR_array__Array__with_native]))(var314, var316, var315) /* with_native on <var314:Array[Object]>*/;
}
}
{
var318 = ((val* (*)(val*))(var314->class->vft[COLOR_string__Object__to_s]))(var314) /* to_s on <var314:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var318); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
var319 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var319) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var319:Int> isa OTHER */
/* <var319:Int> isa OTHER */
var322 = 1; /* easy <var319:Int> isa OTHER*/
if (unlikely(!var322)) {
var_class_name325 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name325);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var326 = var_i + var319;
var320 = var326;
goto RET_LABEL321;
RET_LABEL321:(void)0;
}
}
var_i = var320;
CONTINUE_label327: (void)0;
{
array__ArrayIterator__next(var262); /* Direct call array#ArrayIterator#next on <var262:ArrayIterator[nullable Object]>*/
}
}
BREAK_label327: (void)0;
}
var328 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var328) on <self:ASuperExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var328; /* _is_typed on <self:ASuperExpr> */
RET_LABEL329:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ASuperExpr#process_superinit for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ASuperExpr__process_superinit(val* self, val* p0) {
typing__ASuperExpr__process_superinit(self, p0); /* Direct call typing#ASuperExpr#process_superinit on <self:Object(ASuperExpr)>*/
RET_LABEL:;
}
/* method typing#ANewExpr#callsite for (self: ANewExpr): nullable CallSite */
val* typing__ANewExpr__callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
var1 = self->attrs[COLOR_typing__ANewExpr___callsite].val; /* _callsite on <self:ANewExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ANewExpr#callsite for (self: Object): nullable CallSite */
val* VIRTUAL_typing__ANewExpr__callsite(val* self) {
val* var /* : nullable CallSite */;
val* var1 /* : nullable CallSite */;
val* var3 /* : nullable CallSite */;
{ /* Inline typing#ANewExpr#callsite (self) on <self:Object(ANewExpr)> */
var3 = self->attrs[COLOR_typing__ANewExpr___callsite].val; /* _callsite on <self:Object(ANewExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#ANewExpr#callsite= for (self: ANewExpr, nullable CallSite) */
void typing__ANewExpr__callsite_61d(val* self, val* p0) {
self->attrs[COLOR_typing__ANewExpr___callsite].val = p0; /* _callsite on <self:ANewExpr> */
RET_LABEL:;
}
/* method typing#ANewExpr#callsite= for (self: Object, nullable CallSite) */
void VIRTUAL_typing__ANewExpr__callsite_61d(val* self, val* p0) {
{ /* Inline typing#ANewExpr#callsite= (self,p0) on <self:Object(ANewExpr)> */
self->attrs[COLOR_typing__ANewExpr___callsite].val = p0; /* _callsite on <self:Object(ANewExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#ANewExpr#accept_typing for (self: ANewExpr, TypeVisitor) */
void typing__ANewExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AType */;
val* var1 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
val* var24 /* : Array[Object] */;
long var25 /* : Int */;
val* var26 /* : NativeArray[Object] */;
val* var27 /* : String */;
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
val* var42 /* : MClass */;
val* var44 /* : MClass */;
val* var45 /* : MClassKind */;
val* var47 /* : MClassKind */;
val* var48 /* : MClassKind */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
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
val* var69 /* : MClass */;
val* var71 /* : MClass */;
val* var72 /* : MClassKind */;
val* var74 /* : MClassKind */;
val* var75 /* : MClassKind */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : FlatString */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : FlatString */;
val* var92 /* : Array[Object] */;
long var93 /* : Int */;
val* var94 /* : NativeArray[Object] */;
val* var95 /* : String */;
val* var96 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
val* var97 /* : null */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
val* var_other101 /* var other: nullable Object */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
val* var105 /* : String */;
val* var_name /* var name: String */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
long var109 /* : Int */;
val* var110 /* : FlatString */;
short int var111 /* : Bool */;
val* var112 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var113 /* : null */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
val* var121 /* : MMethod */;
val* var123 /* : MMethod */;
val* var124 /* : MClass */;
val* var126 /* : MClass */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : NativeString */;
long var132 /* : Int */;
val* var133 /* : FlatString */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
long var137 /* : Int */;
val* var138 /* : FlatString */;
val* var139 /* : Array[Object] */;
long var140 /* : Int */;
val* var141 /* : NativeArray[Object] */;
val* var142 /* : String */;
val* var143 /* : AExprs */;
val* var144 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var145 /* : Bool */;
var_v = p0;
{
var = parser_nodes__ANewExpr__n_type(self);
}
{
var1 = typing__TypeVisitor__resolve_mtype(var_v, var);
}
var_recvtype = var1;
var2 = NULL;
if (var_recvtype == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_recvtype,var2) on <var_recvtype:nullable MType> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var_recvtype,var_other) on <var_recvtype:nullable MType(MType)> */
var8 = var_recvtype == var_other;
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
{ /* Inline typing#AExpr#mtype= (self,var_recvtype) on <self:ANewExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var_recvtype; /* _mtype on <self:ANewExpr> */
RET_LABEL9:(void)0;
}
}
/* <var_recvtype:nullable MType(MType)> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_recvtype->type->table_size) {
var10 = 0;
} else {
var10 = var_recvtype->type->type_table[cltype] == idtype;
}
var11 = !var10;
if (var11){
/* <var_recvtype:nullable MType(MType)> isa MNullableType */
cltype13 = type_model__MNullableType.color;
idtype14 = type_model__MNullableType.id;
if(cltype13 >= var_recvtype->type->table_size) {
var12 = 0;
} else {
var12 = var_recvtype->type->type_table[cltype13] == idtype14;
}
if (var12){
if (varonce) {
var15 = varonce;
} else {
var16 = "Type error: cannot instantiate the nullable type ";
var17 = 49;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = ".";
var22 = 1;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var24 = array_instance Array[Object] */
var25 = 3;
var26 = NEW_array__NativeArray(var25, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var26)->values[0] = (val*) var15;
((struct instance_array__NativeArray*)var26)->values[1] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var26)->values[2] = (val*) var20;
{
((void (*)(val*, val*, long))(var24->class->vft[COLOR_array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Object]>*/;
}
}
{
var27 = ((val* (*)(val*))(var24->class->vft[COLOR_string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var27); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
if (varonce28) {
var29 = varonce28;
} else {
var30 = "Type error: cannot instantiate the formal type ";
var31 = 47;
var32 = string__NativeString__to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
if (varonce33) {
var34 = varonce33;
} else {
var35 = ".";
var36 = 1;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
var38 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 3;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var29;
((struct instance_array__NativeArray*)var40)->values[1] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var40)->values[2] = (val*) var34;
{
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
}
{
var41 = ((val* (*)(val*))(var38->class->vft[COLOR_string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var41); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
}
} else {
{
{ /* Inline model#MClassType#mclass (var_recvtype) on <var_recvtype:nullable MType(MClassType)> */
var44 = var_recvtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_recvtype:nullable MType(MClassType)> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var42) on <var42:MClass> */
var47 = var42->attrs[COLOR_model__MClass___kind].val; /* _kind on <var42:MClass> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = model__Object__abstract_kind(self);
}
{
{ /* Inline kernel#Object#== (var45,var48) on <var45:MClassKind> */
var_other = var48;
{
{ /* Inline kernel#Object#is_same_instance (var45,var_other) on <var45:MClassKind> */
var54 = var45 == var_other;
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
if (varonce55) {
var56 = varonce55;
} else {
var57 = "Cannot instantiate abstract class ";
var58 = 34;
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
var66 = 3;
var67 = NEW_array__NativeArray(var66, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var67)->values[0] = (val*) var56;
((struct instance_array__NativeArray*)var67)->values[1] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var67)->values[2] = (val*) var61;
{
((void (*)(val*, val*, long))(var65->class->vft[COLOR_array__Array__with_native]))(var65, var67, var66) /* with_native on <var65:Array[Object]>*/;
}
}
{
var68 = ((val* (*)(val*))(var65->class->vft[COLOR_string__Object__to_s]))(var65) /* to_s on <var65:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var68); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (var_recvtype) on <var_recvtype:nullable MType(MClassType)> */
var71 = var_recvtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_recvtype:nullable MType(MClassType)> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var69) on <var69:MClass> */
var74 = var69->attrs[COLOR_model__MClass___kind].val; /* _kind on <var69:MClass> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
var75 = model__Object__interface_kind(self);
}
{
{ /* Inline kernel#Object#== (var72,var75) on <var72:MClassKind> */
var_other = var75;
{
{ /* Inline kernel#Object#is_same_instance (var72,var_other) on <var72:MClassKind> */
var81 = var72 == var_other;
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
var77 = var79;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
var76 = var77;
}
if (var76){
if (varonce82) {
var83 = varonce82;
} else {
var84 = "Cannot instantiate interface ";
var85 = 29;
var86 = string__NativeString__to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
if (varonce87) {
var88 = varonce87;
} else {
var89 = ".";
var90 = 1;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
var92 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var92 = array_instance Array[Object] */
var93 = 3;
var94 = NEW_array__NativeArray(var93, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var94)->values[0] = (val*) var83;
((struct instance_array__NativeArray*)var94)->values[1] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var94)->values[2] = (val*) var88;
{
((void (*)(val*, val*, long))(var92->class->vft[COLOR_array__Array__with_native]))(var92, var94, var93) /* with_native on <var92:Array[Object]>*/;
}
}
{
var95 = ((val* (*)(val*))(var92->class->vft[COLOR_string__Object__to_s]))(var92) /* to_s on <var92:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var95); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
}
}
{
var96 = parser_nodes__ANewExpr__n_id(self);
}
var_nid = var96;
var97 = NULL;
if (var_nid == NULL) {
var98 = 0; /* is null */
} else {
var98 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nid,var97) on <var_nid:nullable TId> */
var_other101 = var97;
{
var103 = ((short int (*)(val*, val*))(var_nid->class->vft[COLOR_kernel__Object___61d_61d]))(var_nid, var_other101) /* == on <var_nid:nullable TId(TId)>*/;
var102 = var103;
}
var104 = !var102;
var99 = var104;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
var98 = var99;
}
if (var98){
{
var105 = lexer_work__Token__text(var_nid);
}
var_name = var105;
} else {
if (varonce106) {
var107 = varonce106;
} else {
var108 = "init";
var109 = 4;
var110 = string__NativeString__to_s_with_length(var108, var109);
var107 = var110;
varonce106 = var107;
}
var_name = var107;
}
var111 = 0;
{
var112 = typing__TypeVisitor__get_method(var_v, self, var_recvtype, var_name, var111);
}
var_callsite = var112;
var113 = NULL;
if (var_callsite == NULL) {
var114 = 1; /* is null */
} else {
var114 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_callsite,var113) on <var_callsite:nullable CallSite> */
var_other = var113;
{
{ /* Inline kernel#Object#is_same_instance (var_callsite,var_other) on <var_callsite:nullable CallSite(CallSite)> */
var119 = var_callsite == var_other;
var117 = var119;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
var115 = var117;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
var114 = var115;
}
if (var114){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#ANewExpr#callsite= (self,var_callsite) on <self:ANewExpr> */
self->attrs[COLOR_typing__ANewExpr___callsite].val = var_callsite; /* _callsite on <self:ANewExpr> */
RET_LABEL120:(void)0;
}
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var123 = var_callsite->attrs[COLOR_typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 422);
show_backtrace(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_recvtype) on <var_recvtype:nullable MType(MClassType)> */
var126 = var_recvtype->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <var_recvtype:nullable MType(MClassType)> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
var127 = model__MMethod__is_init_for(var121, var124);
}
var128 = !var127;
if (var128){
if (varonce129) {
var130 = varonce129;
} else {
var131 = "Error: ";
var132 = 7;
var133 = string__NativeString__to_s_with_length(var131, var132);
var130 = var133;
varonce129 = var130;
}
if (varonce134) {
var135 = varonce134;
} else {
var136 = " is not a constructor.";
var137 = 22;
var138 = string__NativeString__to_s_with_length(var136, var137);
var135 = var138;
varonce134 = var135;
}
var139 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var139 = array_instance Array[Object] */
var140 = 3;
var141 = NEW_array__NativeArray(var140, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var141)->values[0] = (val*) var130;
((struct instance_array__NativeArray*)var141)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var141)->values[2] = (val*) var135;
{
((void (*)(val*, val*, long))(var139->class->vft[COLOR_array__Array__with_native]))(var139, var141, var140) /* with_native on <var139:Array[Object]>*/;
}
}
{
var142 = ((val* (*)(val*))(var139->class->vft[COLOR_string__Object__to_s]))(var139) /* to_s on <var139:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var142); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var143 = parser_nodes__ANewExpr__n_args(self);
}
{
var144 = typing__AExprs__to_a(var143);
}
var_args = var144;
{
var145 = typing__CallSite__check_signature(var_callsite, var_v, var_args);
}
var145;
RET_LABEL:;
}
/* method typing#ANewExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ANewExpr__accept_typing(val* self, val* p0) {
typing__ANewExpr__accept_typing(self, p0); /* Direct call typing#ANewExpr#accept_typing on <self:Object(ANewExpr)>*/
RET_LABEL:;
}
/* method typing#AAttrFormExpr#mproperty for (self: AAttrFormExpr): nullable MAttribute */
val* typing__AAttrFormExpr__mproperty(val* self) {
val* var /* : nullable MAttribute */;
val* var1 /* : nullable MAttribute */;
var1 = self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#mproperty for (self: Object): nullable MAttribute */
val* VIRTUAL_typing__AAttrFormExpr__mproperty(val* self) {
val* var /* : nullable MAttribute */;
val* var1 /* : nullable MAttribute */;
val* var3 /* : nullable MAttribute */;
{ /* Inline typing#AAttrFormExpr#mproperty (self) on <self:Object(AAttrFormExpr)> */
var3 = self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val; /* _mproperty on <self:Object(AAttrFormExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#mproperty= for (self: AAttrFormExpr, nullable MAttribute) */
void typing__AAttrFormExpr__mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val = p0; /* _mproperty on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method typing#AAttrFormExpr#mproperty= for (self: Object, nullable MAttribute) */
void VIRTUAL_typing__AAttrFormExpr__mproperty_61d(val* self, val* p0) {
{ /* Inline typing#AAttrFormExpr#mproperty= (self,p0) on <self:Object(AAttrFormExpr)> */
self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val = p0; /* _mproperty on <self:Object(AAttrFormExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#AAttrFormExpr#attr_type for (self: AAttrFormExpr): nullable MType */
val* typing__AAttrFormExpr__attr_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#attr_type for (self: Object): nullable MType */
val* VIRTUAL_typing__AAttrFormExpr__attr_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
val* var3 /* : nullable MType */;
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:Object(AAttrFormExpr)> */
var3 = self->attrs[COLOR_typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:Object(AAttrFormExpr)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#attr_type= for (self: AAttrFormExpr, nullable MType) */
void typing__AAttrFormExpr__attr_type_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AAttrFormExpr___attr_type].val = p0; /* _attr_type on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method typing#AAttrFormExpr#attr_type= for (self: Object, nullable MType) */
void VIRTUAL_typing__AAttrFormExpr__attr_type_61d(val* self, val* p0) {
{ /* Inline typing#AAttrFormExpr#attr_type= (self,p0) on <self:Object(AAttrFormExpr)> */
self->attrs[COLOR_typing__AAttrFormExpr___attr_type].val = p0; /* _attr_type on <self:Object(AAttrFormExpr)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method typing#AAttrFormExpr#resolve_property for (self: AAttrFormExpr, TypeVisitor) */
void typing__AAttrFormExpr__resolve_property(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : TAttrid */;
val* var10 /* : String */;
val* var_name /* var name: String */;
short int var11 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : FlatString */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
val* var21 /* : Array[Object] */;
long var22 /* : Int */;
val* var23 /* : NativeArray[Object] */;
val* var24 /* : String */;
val* var25 /* : MType */;
val* var_unsafe_type /* var unsafe_type: MType */;
val* var26 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
val* var27 /* : null */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : ModelBuilder */;
val* var36 /* : ModelBuilder */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : FlatString */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
val* var52 /* : Array[Object] */;
long var53 /* : Int */;
val* var54 /* : NativeArray[Object] */;
val* var55 /* : String */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
val* var60 /* : MModule */;
val* var62 /* : MModule */;
val* var63 /* : Array[MPropDef] */;
val* var_mpropdefs /* var mpropdefs: Array[MAttributeDef] */;
long var64 /* : Int */;
long var65 /* : Int */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
val* var70 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
val* var71 /* : nullable MType */;
val* var73 /* : nullable MType */;
val* var_attr_type /* var attr_type: MType */;
val* var74 /* : AExpr */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
val* var78 /* : MType */;
var_v = p0;
{
var = parser_nodes__AAttrFormExpr__n_expr(self);
}
{
var1 = typing__TypeVisitor__visit_expr(var_v, var);
}
var_recvtype = var1;
var2 = NULL;
if (var_recvtype == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_recvtype,var2) on <var_recvtype:nullable MType> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var_recvtype,var_other) on <var_recvtype:nullable MType(MType)> */
var8 = var_recvtype == var_other;
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
var9 = parser_nodes__AAttrFormExpr__n_id(self);
}
{
var10 = lexer_work__Token__text(var9);
}
var_name = var10;
/* <var_recvtype:nullable MType(MType)> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(cltype >= var_recvtype->type->table_size) {
var11 = 0;
} else {
var11 = var_recvtype->type->type_table[cltype] == idtype;
}
if (var11){
if (varonce) {
var12 = varonce;
} else {
var13 = "Error: Attribute \'";
var14 = 18;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce = var12;
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = "\' access on \'null\'.";
var19 = 19;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var21 = array_instance Array[Object] */
var22 = 3;
var23 = NEW_array__NativeArray(var22, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var23)->values[0] = (val*) var12;
((struct instance_array__NativeArray*)var23)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var23)->values[2] = (val*) var17;
{
((void (*)(val*, val*, long))(var21->class->vft[COLOR_array__Array__with_native]))(var21, var23, var22) /* with_native on <var21:Array[Object]>*/;
}
}
{
var24 = ((val* (*)(val*))(var21->class->vft[COLOR_string__Object__to_s]))(var21) /* to_s on <var21:Array[Object]>*/;
}
{
typing__TypeVisitor__error(var_v, self, var24); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var25 = typing__TypeVisitor__anchor_to(var_v, var_recvtype);
}
var_unsafe_type = var25;
{
var26 = typing__TypeVisitor__try_get_mproperty_by_name2(var_v, self, var_unsafe_type, var_name);
}
var_mproperty = var26;
var27 = NULL;
if (var_mproperty == NULL) {
var28 = 1; /* is null */
} else {
var28 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mproperty,var27) on <var_mproperty:nullable MProperty> */
var_other = var27;
{
{ /* Inline kernel#Object#is_same_instance (var_mproperty,var_other) on <var_mproperty:nullable MProperty(MProperty)> */
var33 = var_mproperty == var_other;
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
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var36 = var_v->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = "Error: Attribute ";
var40 = 17;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = " doesn\'t exists in ";
var45 = 19;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = ".";
var50 = 1;
var51 = string__NativeString__to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var52 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var52 = array_instance Array[Object] */
var53 = 5;
var54 = NEW_array__NativeArray(var53, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var54)->values[0] = (val*) var38;
((struct instance_array__NativeArray*)var54)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var54)->values[2] = (val*) var43;
((struct instance_array__NativeArray*)var54)->values[3] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var54)->values[4] = (val*) var48;
{
((void (*)(val*, val*, long))(var52->class->vft[COLOR_array__Array__with_native]))(var52, var54, var53) /* with_native on <var52:Array[Object]>*/;
}
}
{
var55 = ((val* (*)(val*))(var52->class->vft[COLOR_string__Object__to_s]))(var52) /* to_s on <var52:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__error(var34, self, var55); /* Direct call modelbuilder#ModelBuilder#error on <var34:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
/* <var_mproperty:nullable MProperty(MProperty)> isa MAttribute */
cltype57 = type_model__MAttribute.color;
idtype58 = type_model__MAttribute.id;
if(cltype57 >= var_mproperty->type->table_size) {
var56 = 0;
} else {
var56 = var_mproperty->type->type_table[cltype57] == idtype58;
}
if (unlikely(!var56)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1655);
show_backtrace(1);
}
{
{ /* Inline typing#AAttrFormExpr#mproperty= (self,var_mproperty) on <self:AAttrFormExpr> */
self->attrs[COLOR_typing__AAttrFormExpr___mproperty].val = var_mproperty; /* _mproperty on <self:AAttrFormExpr> */
RET_LABEL59:(void)0;
}
}
{
{ /* Inline typing#TypeVisitor#mmodule (var_v) on <var_v:TypeVisitor> */
var62 = var_v->attrs[COLOR_typing__TypeVisitor___mmodule].val; /* _mmodule on <var_v:TypeVisitor> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 38);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = model__MProperty__lookup_definitions(var_mproperty, var60, var_unsafe_type);
}
var_mpropdefs = var63;
{
var64 = array__AbstractArrayRead__length(var_mpropdefs);
}
var65 = 1;
{
{ /* Inline kernel#Int#== (var64,var65) on <var64:Int> */
var69 = var64 == var65;
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
var66 = var67;
}
if (unlikely(!var66)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1659);
show_backtrace(1);
}
{
var70 = abstract_collection__SequenceRead__first(var_mpropdefs);
}
var_mpropdef = var70;
{
{ /* Inline model#MAttributeDef#static_mtype (var_mpropdef) on <var_mpropdef:MAttributeDef> */
var73 = var_mpropdef->attrs[COLOR_model__MAttributeDef___static_mtype].val; /* _static_mtype on <var_mpropdef:MAttributeDef> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1661);
show_backtrace(1);
}
var_attr_type = var71;
{
var74 = parser_nodes__AAttrFormExpr__n_expr(self);
}
/* <var74:AExpr> isa ASelfExpr */
cltype76 = type_parser_nodes__ASelfExpr.color;
idtype77 = type_parser_nodes__ASelfExpr.id;
if(cltype76 >= var74->type->table_size) {
var75 = 0;
} else {
var75 = var74->type->type_table[cltype76] == idtype77;
}
{
var78 = typing__TypeVisitor__resolve_for(var_v, var_attr_type, var_recvtype, var75);
}
var_attr_type = var78;
{
{ /* Inline typing#AAttrFormExpr#attr_type= (self,var_attr_type) on <self:AAttrFormExpr> */
self->attrs[COLOR_typing__AAttrFormExpr___attr_type].val = var_attr_type; /* _attr_type on <self:AAttrFormExpr> */
RET_LABEL79:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAttrFormExpr#resolve_property for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAttrFormExpr__resolve_property(val* self, val* p0) {
typing__AAttrFormExpr__resolve_property(self, p0); /* Direct call typing#AAttrFormExpr#resolve_property on <self:Object(AAttrFormExpr)>*/
RET_LABEL:;
}
/* method typing#AAttrExpr#accept_typing for (self: AAttrExpr, TypeVisitor) */
void typing__AAttrExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
var_v = p0;
{
typing__AAttrFormExpr__resolve_property(self, var_v); /* Direct call typing#AAttrFormExpr#resolve_property on <self:AAttrExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:AAttrExpr> */
var2 = self->attrs[COLOR_typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline typing#AExpr#mtype= (self,var) on <self:AAttrExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var; /* _mtype on <self:AAttrExpr> */
RET_LABEL3:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAttrExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAttrExpr__accept_typing(val* self, val* p0) {
typing__AAttrExpr__accept_typing(self, p0); /* Direct call typing#AAttrExpr#accept_typing on <self:Object(AAttrExpr)>*/
RET_LABEL:;
}
/* method typing#AAttrAssignExpr#accept_typing for (self: AAttrAssignExpr, TypeVisitor) */
void typing__AAttrAssignExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var3 /* : AExpr */;
val* var4 /* : nullable MType */;
short int var5 /* : Bool */;
var_v = p0;
{
typing__AAttrFormExpr__resolve_property(self, var_v); /* Direct call typing#AAttrFormExpr#resolve_property on <self:AAttrAssignExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:AAttrAssignExpr> */
var2 = self->attrs[COLOR_typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrAssignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
{
var3 = parser_nodes__AAssignFormExpr__n_value(self);
}
{
var4 = typing__TypeVisitor__visit_expr_subtype(var_v, var3, var_mtype);
}
var4;
var5 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var5) on <self:AAttrAssignExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var5; /* _is_typed on <self:AAttrAssignExpr> */
RET_LABEL6:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAttrAssignExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAttrAssignExpr__accept_typing(val* self, val* p0) {
typing__AAttrAssignExpr__accept_typing(self, p0); /* Direct call typing#AAttrAssignExpr#accept_typing on <self:Object(AAttrAssignExpr)>*/
RET_LABEL:;
}
/* method typing#AAttrReassignExpr#accept_typing for (self: AAttrReassignExpr, TypeVisitor) */
void typing__AAttrReassignExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable MType */;
short int var11 /* : Bool */;
var_v = p0;
{
typing__AAttrFormExpr__resolve_property(self, var_v); /* Direct call typing#AAttrFormExpr#resolve_property on <self:AAttrReassignExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:AAttrReassignExpr> */
var2 = self->attrs[COLOR_typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AAttrReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
var3 = NULL;
if (var_mtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var3) on <var_mtype:nullable MType> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
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
goto RET_LABEL;
} else {
}
{
var10 = typing__AReassignFormExpr__resolve_reassignment(self, var_v, var_mtype, var_mtype);
}
var10;
var11 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var11) on <self:AAttrReassignExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var11; /* _is_typed on <self:AAttrReassignExpr> */
RET_LABEL12:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AAttrReassignExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAttrReassignExpr__accept_typing(val* self, val* p0) {
typing__AAttrReassignExpr__accept_typing(self, p0); /* Direct call typing#AAttrReassignExpr#accept_typing on <self:Object(AAttrReassignExpr)>*/
RET_LABEL:;
}
/* method typing#AIssetAttrExpr#accept_typing for (self: AIssetAttrExpr, TypeVisitor) */
void typing__AIssetAttrExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : AExpr */;
val* var11 /* : nullable MType */;
val* var_recvtype /* var recvtype: MType */;
short int var12 /* : Bool */;
val* var13 /* : MType */;
val* var_bound /* var bound: MType */;
short int var14 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
val* var19 /* : nullable MType */;
var_v = p0;
{
typing__AAttrFormExpr__resolve_property(self, var_v); /* Direct call typing#AAttrFormExpr#resolve_property on <self:AIssetAttrExpr>*/
}
{
{ /* Inline typing#AAttrFormExpr#attr_type (self) on <self:AIssetAttrExpr> */
var2 = self->attrs[COLOR_typing__AAttrFormExpr___attr_type].val; /* _attr_type on <self:AIssetAttrExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
var3 = NULL;
if (var_mtype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,var3) on <var_mtype:nullable MType> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
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
goto RET_LABEL;
} else {
}
{
var10 = parser_nodes__AAttrFormExpr__n_expr(self);
}
{
var11 = ((val* (*)(val*))(var10->class->vft[COLOR_typing__AExpr__mtype]))(var10) /* mtype on <var10:AExpr>*/;
}
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 1707);
show_backtrace(1);
}
var_recvtype = var11;
var12 = 0;
{
var13 = typing__TypeVisitor__resolve_for(var_v, var_mtype, var_recvtype, var12);
}
var_bound = var13;
/* <var_bound:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_bound->type->table_size) {
var14 = 0;
} else {
var14 = var_bound->type->type_table[cltype] == idtype;
}
if (var14){
if (varonce) {
var15 = varonce;
} else {
var16 = "Error: isset on a nullable attribute.";
var17 = 37;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
{
typing__TypeVisitor__error(var_v, self, var15); /* Direct call typing#TypeVisitor#error on <var_v:TypeVisitor>*/
}
} else {
}
{
var19 = typing__TypeVisitor__type_bool(var_v, self);
}
{
{ /* Inline typing#AExpr#mtype= (self,var19) on <self:AIssetAttrExpr> */
self->attrs[COLOR_typing__AExpr___mtype].val = var19; /* _mtype on <self:AIssetAttrExpr> */
RET_LABEL20:(void)0;
}
}
RET_LABEL:;
}
/* method typing#AIssetAttrExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AIssetAttrExpr__accept_typing(val* self, val* p0) {
typing__AIssetAttrExpr__accept_typing(self, p0); /* Direct call typing#AIssetAttrExpr#accept_typing on <self:Object(AIssetAttrExpr)>*/
RET_LABEL:;
}
/* method typing#ADebugTypeExpr#accept_typing for (self: ADebugTypeExpr, TypeVisitor) */
void typing__ADebugTypeExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_expr /* var expr: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MType */;
val* var_unsafe /* var unsafe: MType */;
val* var10 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var11 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var12 /* : Bool */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other17 /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var_ /* var : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : MType */;
val* var_umtype /* var umtype: MType */;
val* var28 /* : ModelBuilder */;
val* var30 /* : ModelBuilder */;
static val* varonce;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : FlatString */;
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
val* var55 /* : Array[Object] */;
long var56 /* : Int */;
val* var57 /* : NativeArray[Object] */;
val* var58 /* : String */;
short int var59 /* : Bool */;
var_v = p0;
{
var = parser_nodes__ADebugTypeExpr__n_expr(self);
}
{
var1 = typing__TypeVisitor__visit_expr(var_v, var);
}
var_expr = var1;
var2 = NULL;
if (var_expr == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_expr,var2) on <var_expr:nullable MType> */
var_other = var2;
{
{ /* Inline kernel#Object#is_same_instance (var_expr,var_other) on <var_expr:nullable MType(MType)> */
var8 = var_expr == var_other;
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
var9 = typing__TypeVisitor__anchor_to(var_v, var_expr);
}
var_unsafe = var9;
{
var10 = parser_nodes__ADebugTypeExpr__n_type(self);
}
var_ntype = var10;
{
var11 = typing__TypeVisitor__resolve_mtype(var_v, var_ntype);
}
var_mtype = var11;
var13 = NULL;
if (var_mtype == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,var13) on <var_mtype:nullable MType> */
var_other17 = var13;
{
var19 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_mtype, var_other17) /* == on <var_mtype:nullable MType(MType)>*/;
var18 = var19;
}
var20 = !var18;
var15 = var20;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
var_ = var14;
if (var14){
{
{ /* Inline kernel#Object#!= (var_mtype,var_expr) on <var_mtype:nullable MType(MType)> */
var_other17 = var_expr;
{
var25 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_mtype, var_other17) /* == on <var_mtype:nullable MType(MType)>*/;
var24 = var25;
}
var26 = !var24;
var22 = var26;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
var12 = var21;
} else {
var12 = var_;
}
if (var12){
{
var27 = typing__TypeVisitor__anchor_to(var_v, var_mtype);
}
var_umtype = var27;
{
{ /* Inline typing#TypeVisitor#modelbuilder (var_v) on <var_v:TypeVisitor> */
var30 = var_v->attrs[COLOR_typing__TypeVisitor___modelbuilder].val; /* _modelbuilder on <var_v:TypeVisitor> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 36);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (varonce) {
var31 = varonce;
} else {
var32 = "Found type ";
var33 = 11;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce = var31;
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = " (-> ";
var38 = 5;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "), expected ";
var43 = 12;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = " (-> ";
var48 = 5;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = ")";
var53 = 1;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
var55 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var55 = array_instance Array[Object] */
var56 = 9;
var57 = NEW_array__NativeArray(var56, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var57)->values[0] = (val*) var31;
((struct instance_array__NativeArray*)var57)->values[1] = (val*) var_expr;
((struct instance_array__NativeArray*)var57)->values[2] = (val*) var36;
((struct instance_array__NativeArray*)var57)->values[3] = (val*) var_unsafe;
((struct instance_array__NativeArray*)var57)->values[4] = (val*) var41;
((struct instance_array__NativeArray*)var57)->values[5] = (val*) var_mtype;
((struct instance_array__NativeArray*)var57)->values[6] = (val*) var46;
((struct instance_array__NativeArray*)var57)->values[7] = (val*) var_umtype;
((struct instance_array__NativeArray*)var57)->values[8] = (val*) var51;
{
((void (*)(val*, val*, long))(var55->class->vft[COLOR_array__Array__with_native]))(var55, var57, var56) /* with_native on <var55:Array[Object]>*/;
}
}
{
var58 = ((val* (*)(val*))(var55->class->vft[COLOR_string__Object__to_s]))(var55) /* to_s on <var55:Array[Object]>*/;
}
{
modelbuilder__ModelBuilder__warning(var28, self, var58); /* Direct call modelbuilder#ModelBuilder#warning on <var28:ModelBuilder>*/
}
} else {
}
var59 = 1;
{
{ /* Inline typing#AExpr#is_typed= (self,var59) on <self:ADebugTypeExpr> */
self->attrs[COLOR_typing__AExpr___is_typed].s = var59; /* _is_typed on <self:ADebugTypeExpr> */
RET_LABEL60:(void)0;
}
}
RET_LABEL:;
}
/* method typing#ADebugTypeExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ADebugTypeExpr__accept_typing(val* self, val* p0) {
typing__ADebugTypeExpr__accept_typing(self, p0); /* Direct call typing#ADebugTypeExpr#accept_typing on <self:Object(ADebugTypeExpr)>*/
RET_LABEL:;
}
