#include "core__abstract_collection.sep.0.h"
/* method abstract_collection$Collection$iterator for (self: Collection[nullable Object]): Iterator[nullable Object] */
val* core___core__Collection___iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "iterator", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 60);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection$Collection$is_empty for (self: Collection[nullable Object]): Bool */
short int core___core__Collection___is_empty(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:Collection[nullable Object]>*/
}
{
{ /* Inline kernel$Int$== (var1,0l) on <var1:Int> */
var4 = var1 == 0l;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$Collection$not_empty for (self: Collection[nullable Object]): Bool */
short int core___core__Collection___not_empty(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
{
var1 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:Collection[nullable Object]>*/
}
var2 = !var1;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$Collection$length for (self: Collection[nullable Object]): Int */
long core___core__Collection___length(val* self) {
long var /* : Int */;
long var_nb /* var nb: Int */;
val* var_ /* var : Collection[nullable Object] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_i /* var i: nullable Object */;
long var5 /* : Int */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var8 /* : Int */;
var_nb = 0l;
var_ = self;
{
var1 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:Iterator[nullable Object]>*/
}
if (var3){
} else {
goto BREAK_label;
}
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:Iterator[nullable Object]>*/
}
var_i = var4;
{
{ /* Inline kernel$Int$+ (var_nb,1l) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var8 = var_nb + 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_nb = var5;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:Iterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:Iterator[nullable Object]>*/
}
var = var_nb;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$Collection$has for (self: Collection[nullable Object], nullable Object): Bool */
short int core___core__Collection___has(val* self, val* p0) {
short int var /* : Bool */;
val* var_item /* var item: nullable Object */;
val* var_ /* var : Collection[nullable Object] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_i /* var i: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_item = p0;
var_ = self;
{
var1 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:Iterator[nullable Object]>*/
}
if (var3){
} else {
goto BREAK_label;
}
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:Iterator[nullable Object]>*/
}
var_i = var4;
if (var_i == NULL) {
var5 = (var_item == NULL);
} else {
var6 = ((short int(*)(val* self, val* p0))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_i, var_item); /* == on <var_i:nullable Object>*/
var5 = var6;
}
if (var5){
var = 1;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:Iterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:Iterator[nullable Object]>*/
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$Collection$count for (self: Collection[nullable Object], nullable Object): Int */
long core___core__Collection___count(val* self, val* p0) {
long var /* : Int */;
val* var_item /* var item: nullable Object */;
long var_nb /* var nb: Int */;
val* var_ /* var : Collection[nullable Object] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_i /* var i: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
long var7 /* : Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var10 /* : Int */;
var_item = p0;
var_nb = 0l;
var_ = self;
{
var1 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:Iterator[nullable Object]>*/
}
if (var3){
} else {
goto BREAK_label;
}
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:Iterator[nullable Object]>*/
}
var_i = var4;
if (var_i == NULL) {
var5 = (var_item == NULL);
} else {
var6 = ((short int(*)(val* self, val* p0))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_i, var_item); /* == on <var_i:nullable Object>*/
var5 = var6;
}
if (var5){
{
{ /* Inline kernel$Int$+ (var_nb,1l) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var10 = var_nb + 1l;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_nb = var7;
} else {
}
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:Iterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:Iterator[nullable Object]>*/
}
var = var_nb;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$Collection$first for (self: Collection[nullable Object]): nullable Object */
val* core___core__Collection___first(val* self) {
val* var /* : nullable Object */;
long var1 /* : Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : Iterator[nullable Object] */;
val* var7 /* : nullable Object */;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:Collection[nullable Object]>*/
}
{
{ /* Inline kernel$Int$> (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var5 = var1 > 0l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 134);
fatal_exit(1);
}
{
var6 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(self); /* iterator on <self:Collection[nullable Object]>*/
}
{
var7 = ((val*(*)(val* self))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var6); /* item on <var6:Iterator[nullable Object]>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$Collection$has_all for (self: Collection[nullable Object], Collection[nullable Object]): Bool */
short int core___core__Collection___has_all(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: Collection[nullable Object] */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
long var4 /* : Int */;
long var_ol /* var ol: Int */;
long var5 /* : Int */;
long var_l /* var l: Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
val* var_ /* var : Collection[nullable Object] */;
val* var17 /* : Iterator[nullable Object] */;
val* var_18 /* var : Iterator[nullable Object] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_x /* var x: nullable Object */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
var_other = p0;
{
{ /* Inline kernel$Object$is_same_instance (self,var_other) on <self:Collection[nullable Object]> */
var3 = self == var_other || ((!((long)self&3)) && (!((long)var_other&3)) && self->class == var_other->class && ((self->class->box_kind == 3 && ((struct instance_core__Byte*)self)->value == ((struct instance_core__Byte*)var_other)->value) || (self->class->box_kind == 5 && ((struct instance_core__Float*)self)->value == ((struct instance_core__Float*)var_other)->value) || (self->class->box_kind == 6 && ((struct instance_core__CString*)self)->value == ((struct instance_core__CString*)var_other)->value) || (self->class->box_kind == 7 && ((struct instance_core__Pointer*)self)->value == ((struct instance_core__Pointer*)var_other)->value) || (self->class->box_kind == 8 && ((struct instance_core__Int8*)self)->value == ((struct instance_core__Int8*)var_other)->value) || (self->class->box_kind == 9 && ((struct instance_core__Int16*)self)->value == ((struct instance_core__Int16*)var_other)->value) || (self->class->box_kind == 10 && ((struct instance_core__UInt16*)self)->value == ((struct instance_core__UInt16*)var_other)->value) || (self->class->box_kind == 11 && ((struct instance_core__Int32*)self)->value == ((struct instance_core__Int32*)var_other)->value) || (self->class->box_kind == 12 && ((struct instance_core__UInt32*)self)->value == ((struct instance_core__UInt32*)var_other)->value)));
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
var = 1;
goto RET_LABEL;
} else {
}
{
var4 = ((long(*)(val* self))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_other); /* length on <var_other:Collection[nullable Object]>*/
}
var_ol = var4;
{
var5 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:Collection[nullable Object]>*/
}
var_l = var5;
{
{ /* Inline kernel$Int$== (var_ol,0l) on <var_ol:Int> */
var8 = var_ol == 0l;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$== (var_l,0l) on <var_l:Int> */
var11 = var_l == 0l;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$== (var_ol,1l) on <var_ol:Int> */
var14 = var_ol == 1l;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
var15 = ((val*(*)(val* self))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_core__abstract_collection__Collection__first]))(var_other); /* first on <var_other:Collection[nullable Object]>*/
}
{
var16 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__has]))(self, var15); /* has on <self:Collection[nullable Object]>*/
}
var = var16;
goto RET_LABEL;
} else {
}
var_ = var_other;
{
var17 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_18 = var17;
for(;;) {
{
var19 = ((short int(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_18); /* is_ok on <var_18:Iterator[nullable Object]>*/
}
if (var19){
} else {
goto BREAK_label;
}
{
var20 = ((val*(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_18); /* item on <var_18:Iterator[nullable Object]>*/
}
var_x = var20;
{
var21 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__has]))(self, var_x); /* has on <self:Collection[nullable Object]>*/
}
var22 = !var21;
if (var22){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_18); /* next on <var_18:Iterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_18&3)?class_info[((long)var_18&3)]:var_18->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_18); /* finish on <var_18:Iterator[nullable Object]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$Collection$has_exactly for (self: Collection[nullable Object], Collection[nullable Object]): Bool */
short int core___core__Collection___has_exactly(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: Collection[nullable Object] */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_ /* var : Collection[nullable Object] */;
val* var7 /* : Iterator[nullable Object] */;
val* var_8 /* var : Iterator[nullable Object] */;
short int var9 /* : Bool */;
val* var10 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
var_other = p0;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:Collection[nullable Object]>*/
}
{
var2 = ((long(*)(val* self))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_other); /* length on <var_other:Collection[nullable Object]>*/
}
{
{ /* Inline kernel$Int$!= (var1,var2) on <var1:Int> */
var5 = var1 == var2;
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var = 0;
goto RET_LABEL;
} else {
}
var_ = self;
{
var7 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_8 = var7;
for(;;) {
{
var9 = ((short int(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_8); /* is_ok on <var_8:Iterator[nullable Object]>*/
}
if (var9){
} else {
goto BREAK_label;
}
{
var10 = ((val*(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_8); /* item on <var_8:Iterator[nullable Object]>*/
}
var_e = var10;
{
var11 = ((long(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__count]))(self, var_e); /* count on <self:Collection[nullable Object]>*/
}
{
var12 = ((long(*)(val* self, val* p0))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_core__abstract_collection__Collection__count]))(var_other, var_e); /* count on <var_other:Collection[nullable Object]>*/
}
{
{ /* Inline kernel$Int$!= (var11,var12) on <var11:Int> */
var15 = var11 == var12;
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_8); /* next on <var_8:Iterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_8&3)?class_info[((long)var_8&3)]:var_8->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_8); /* finish on <var_8:Iterator[nullable Object]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$Iterator$iterator for (self: Iterator[nullable Object]): Iterator[nullable Object] */
val* core___core__Iterator___iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$Iterator$finish for (self: Iterator[nullable Object]) */
void core___core__Iterator___finish(val* self) {
RET_LABEL:;
}
/* method abstract_collection$Ref$first for (self: Ref[nullable Object]): nullable Object */
val* core___core__Ref___Collection__first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
val* var3 /* : nullable Object */;
{
{ /* Inline abstract_collection$Ref$item (self) on <self:Ref[nullable Object]> */
var3 = self->attrs[COLOR_core__abstract_collection__Ref___item].val; /* _item on <self:Ref[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$Ref$is_empty for (self: Ref[nullable Object]): Bool */
short int core___core__Ref___Collection__is_empty(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$Ref$length for (self: Ref[nullable Object]): Int */
long core___core__Ref___Collection__length(val* self) {
long var /* : Int */;
var = 1l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$Ref$has for (self: Ref[nullable Object], nullable Object): Bool */
short int core___core__Ref___Collection__has(val* self, val* p0) {
short int var /* : Bool */;
val* var_an_item /* var an_item: nullable Object */;
val* var1 /* : nullable Object */;
val* var3 /* : nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_an_item = p0;
{
{ /* Inline abstract_collection$Ref$item (self) on <self:Ref[nullable Object]> */
var3 = self->attrs[COLOR_core__abstract_collection__Ref___item].val; /* _item on <self:Ref[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = (var_an_item == NULL);
} else {
var5 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_an_item); /* == on <var1:nullable Object>*/
var4 = var5;
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$Ref$count for (self: Ref[nullable Object], nullable Object): Int */
long core___core__Ref___Collection__count(val* self, val* p0) {
long var /* : Int */;
val* var_an_item /* var an_item: nullable Object */;
val* var1 /* : nullable Object */;
val* var3 /* : nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
var_an_item = p0;
{
{ /* Inline abstract_collection$Ref$item (self) on <self:Ref[nullable Object]> */
var3 = self->attrs[COLOR_core__abstract_collection__Ref___item].val; /* _item on <self:Ref[nullable Object]> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = (var_an_item == NULL);
} else {
var5 = ((short int(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_an_item); /* == on <var1:nullable Object>*/
var4 = var5;
}
if (var4){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_collection$Ref$iterator for (self: Ref[nullable Object]): Iterator[nullable Object] */
val* core___core__Ref___Collection__iterator(val* self) {
val* var /* : Iterator[nullable Object] */;
val* var1 /* : RefIterator[nullable Object] */;
var1 = NEW_core__abstract_collection__RefIterator(self->type->resolution_table->types[COLOR_core__abstract_collection__RefIterator__core__Ref___35dE]);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_collection__RefIterator__container_61d]))(var1, self); /* container= on <var1:RefIterator[nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:RefIterator[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$Ref$item for (self: Ref[nullable Object]): nullable Object */
val* core___core__Ref___item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_core__abstract_collection__Ref___item].val; /* _item on <self:Ref[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection$Ref$item= for (self: Ref[nullable Object], nullable Object) */
void core___core__Ref___item_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__Ref___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 340);
fatal_exit(1);
}
self->attrs[COLOR_core__abstract_collection__Ref___item].val = p0; /* _item on <self:Ref[nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection$Ref$init for (self: Ref[nullable Object]) */
void core___core__Ref___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Ref___core__kernel__Object__init]))(self); /* init on <self:Ref[nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection$RefIterator$item for (self: RefIterator[nullable Object]): nullable Object */
val* core__abstract_collection___core__abstract_collection__RefIterator___Iterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Ref[nullable Object] */;
val* var2 /* : nullable Object */;
val* var4 /* : nullable Object */;
var1 = self->attrs[COLOR_core__abstract_collection__RefIterator___container].val; /* _container on <self:RefIterator[nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _container");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 347);
fatal_exit(1);
}
{
{ /* Inline abstract_collection$Ref$item (var1) on <var1:Ref[nullable Object]> */
var4 = var1->attrs[COLOR_core__abstract_collection__Ref___item].val; /* _item on <var1:Ref[nullable Object]> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$RefIterator$next for (self: RefIterator[nullable Object]) */
void core__abstract_collection___core__abstract_collection__RefIterator___Iterator__next(val* self) {
{
{ /* Inline abstract_collection$RefIterator$is_ok= (self,0) on <self:RefIterator[nullable Object]> */
self->attrs[COLOR_core__abstract_collection__RefIterator___is_ok].s = 0; /* _is_ok on <self:RefIterator[nullable Object]> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_collection$RefIterator$is_ok for (self: RefIterator[nullable Object]): Bool */
short int core__abstract_collection___core__abstract_collection__RefIterator___Iterator__is_ok(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__abstract_collection__RefIterator___is_ok].s; /* _is_ok on <self:RefIterator[nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection$RefIterator$is_ok= for (self: RefIterator[nullable Object], Bool) */
void core__abstract_collection___core__abstract_collection__RefIterator___is_ok_61d(val* self, short int p0) {
self->attrs[COLOR_core__abstract_collection__RefIterator___is_ok].s = p0; /* _is_ok on <self:RefIterator[nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection$RefIterator$container= for (self: RefIterator[nullable Object], Ref[nullable Object]) */
void core__abstract_collection___core__abstract_collection__RefIterator___container_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (container) <p0:Ref[nullable Object]> isa Ref[E] */
/* <p0:Ref[nullable Object]> isa Ref[E] */
type_struct = self->type->resolution_table->types[COLOR_core__Ref__core__abstract_collection__RefIterator___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Ref[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 353);
fatal_exit(1);
}
self->attrs[COLOR_core__abstract_collection__RefIterator___container].val = p0; /* _container on <self:RefIterator[nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection$RefIterator$init for (self: RefIterator[nullable Object]) */
void core__abstract_collection___core__abstract_collection__RefIterator___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__abstract_collection___core__abstract_collection__RefIterator___core__kernel__Object__init]))(self); /* init on <self:RefIterator[nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection$RemovableCollection$clear for (self: RemovableCollection[nullable Object]) */
void core___core__RemovableCollection___clear(val* self) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "clear", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 360);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_collection$RemovableCollection$remove for (self: RemovableCollection[nullable Object], nullable Object) */
void core___core__RemovableCollection___remove(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "remove", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 369);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_collection$SimpleCollection$add for (self: SimpleCollection[nullable Object], nullable Object) */
void core___core__SimpleCollection___add(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "add", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 388);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_collection$SimpleCollection$add_all for (self: SimpleCollection[nullable Object], Collection[nullable Object]) */
void core___core__SimpleCollection___add_all(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[nullable Object] */;
val* var_ /* var : Collection[nullable Object] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : Iterator[nullable Object] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_i /* var i: nullable Object */;
/* Covariant cast for argument 0 (coll) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__Collection__core__SimpleCollection___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 398);
fatal_exit(1);
}
var_coll = p0;
var_ = var_coll;
{
var1 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[nullable Object]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:Iterator[nullable Object]>*/
}
if (var3){
} else {
goto BREAK_label;
}
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:Iterator[nullable Object]>*/
}
var_i = var4;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(self, var_i); /* add on <self:SimpleCollection[nullable Object]>*/
}
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:Iterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:Iterator[nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection$Set$count for (self: Set[nullable Object], nullable Object): Int */
long core___core__Set___Collection__count(val* self, val* p0) {
long var /* : Int */;
val* var_item /* var item: nullable Object */;
short int var1 /* : Bool */;
var_item = p0;
{
var1 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__has]))(self, var_item); /* has on <self:Set[nullable Object]>*/
}
if (var1){
var = 1l;
goto RET_LABEL;
} else {
var = 0l;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_collection$Set$== for (self: Set[nullable Object], nullable Object): Bool */
short int core___core__Set___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
var_other = p0;
/* <var_other:nullable Object> isa Set[nullable Object] */
cltype = type_core__Set__nullable__core__Object.color;
idtype = type_core__Set__nullable__core__Object.id;
if(var_other == NULL) {
var1 = 0;
} else {
if(cltype >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var3 = ((long(*)(val* self))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_other); /* length on <var_other:nullable Object(Set[nullable Object])>*/
}
{
var4 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:Set[nullable Object]>*/
}
{
{ /* Inline kernel$Int$!= (var3,var4) on <var3:Int> */
var7 = var3 == var4;
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = 0;
goto RET_LABEL;
} else {
}
{
var9 = core___core__Collection___has_all(self, var_other);
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$Set$hash for (self: Set[nullable Object]): Int */
long core___core__Set___core__kernel__Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_res /* var res: Int */;
val* var_ /* var : Set[nullable Object] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:Set[nullable Object]>*/
}
{
{ /* Inline kernel$Int$+ (23l,var1) on <23l:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var5 = 23l + var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_res = var2;
var_ = self;
{
var6 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Set[nullable Object]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[nullable Object]>*/
}
if (var8){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[nullable Object]>*/
}
var_e = var9;
if (var_e == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable Object>*/
var10 = var11;
}
if (var10){
{
var12 = ((long(*)(val* self))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_core__kernel__Object__hash]))(var_e); /* hash on <var_e:nullable Object(Object)>*/
}
{
{ /* Inline kernel$Int$+ (var_res,var12) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var12:Int> isa OTHER */
/* <var12:Int> isa OTHER */
var15 = 1; /* easy <var12:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var19 = var_res + var12;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_res = var13;
} else {
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[nullable Object]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$Set$union for (self: Set[nullable Object], Set[nullable Object]): Set[nullable Object] */
val* core___core__Set___union(val* self, val* p0) {
val* var /* : Set[nullable Object] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Set[nullable Object] */;
val* var2 /* : Set[nullable Object] */;
val* var_nhs /* var nhs: Set[nullable Object] */;
/* Covariant cast for argument 0 (other) <p0:Set[nullable Object]> isa Set[E] */
/* <p0:Set[nullable Object]> isa Set[E] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__Set__core__Set___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Set[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 466);
fatal_exit(1);
}
var_other = p0;
{
var2 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Set__new_set]))(self); /* new_set on <self:Set[nullable Object]>*/
}
var_nhs = var2;
{
core___core__SimpleCollection___add_all(var_nhs, self); /* Direct call abstract_collection$SimpleCollection$add_all on <var_nhs:Set[nullable Object]>*/
}
{
core___core__SimpleCollection___add_all(var_nhs, var_other); /* Direct call abstract_collection$SimpleCollection$add_all on <var_nhs:Set[nullable Object]>*/
}
var = var_nhs;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$Set$clone for (self: Set[nullable Object]): Set[nullable Object] */
val* core___core__Set___core__kernel__Cloneable__clone(val* self) {
val* var /* : Set[nullable Object] */;
val* var1 /* : Set[nullable Object] */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{
var1 = core___core__Set___union(self, self);
}
/* <var1:Set[nullable Object]> isa SELF */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__kernel__Object__SELF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->type_table[cltype] == idtype;
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "SELF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 483);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$Set$new_set for (self: Set[nullable Object]): Set[nullable Object] */
val* core___core__Set___new_set(val* self) {
val* var /* : Set[nullable Object] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "new_set", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 485);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection$MapRead$get_or_null for (self: MapRead[nullable Object, nullable Object], nullable Object): nullable Object */
val* core___core__MapRead___get_or_null(val* self, val* p0) {
val* var /* : nullable Object */;
val* var_key /* var key: nullable Object */;
short int var1 /* : Bool */;
val* var2 /* : nullable Object */;
var_key = p0;
{
var1 = ((short int(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__MapRead__has_key]))(self, var_key); /* has_key on <self:MapRead[nullable Object, nullable Object]>*/
}
if (var1){
{
var2 = ((val*(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(self, var_key); /* [] on <self:MapRead[nullable Object, nullable Object]>*/
}
var = var2;
goto RET_LABEL;
} else {
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$MapRead$provide_default_value for (self: MapRead[nullable Object, nullable Object], nullable Object): nullable Object */
val* core___core__MapRead___provide_default_value(val* self, val* p0) {
val* var /* : nullable Object */;
val* var_key /* var key: nullable Object */;
var_key = p0;
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 598);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection$MapRead$== for (self: MapRead[nullable Object, nullable Object], nullable Object): Bool */
short int core___core__MapRead___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_ /* var : MapRead[nullable Object, nullable Object] */;
val* var9 /* : MapIterator[nullable Object, nullable Object] */;
val* var_10 /* var : MapIterator[nullable Object, nullable Object] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_k /* var k: nullable Object */;
val* var13 /* : nullable Object */;
val* var_v /* var v: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
var_other = p0;
/* <var_other:nullable Object> isa MapRead[nullable Object, nullable Object] */
cltype = type_core__MapRead__nullable__core__Object__nullable__core__Object.color;
idtype = type_core__MapRead__nullable__core__Object__nullable__core__Object.id;
if(var_other == NULL) {
var1 = 0;
} else {
if(cltype >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var3 = ((long(*)(val* self))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_core__abstract_collection__MapRead__length]))(var_other); /* length on <var_other:nullable Object(MapRead[nullable Object, nullable Object])>*/
}
{
var4 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__MapRead__length]))(self); /* length on <self:MapRead[nullable Object, nullable Object]>*/
}
{
{ /* Inline kernel$Int$!= (var3,var4) on <var3:Int> */
var7 = var3 == var4;
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = 0;
goto RET_LABEL;
} else {
}
var_ = self;
{
var9 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_); /* iterator on <var_:MapRead[nullable Object, nullable Object]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_10); /* is_ok on <var_10:MapIterator[nullable Object, nullable Object]>*/
}
if (var11){
} else {
goto BREAK_label;
}
{
var12 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_10); /* key on <var_10:MapIterator[nullable Object, nullable Object]>*/
}
var_k = var12;
{
var13 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_10); /* item on <var_10:MapIterator[nullable Object, nullable Object]>*/
}
var_v = var13;
{
var14 = ((short int(*)(val* self, val* p0))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var_other, var_k); /* has_key on <var_other:nullable Object(MapRead[nullable Object, nullable Object])>*/
}
var15 = !var14;
if (var15){
var = 0;
goto RET_LABEL;
} else {
}
{
var16 = ((val*(*)(val* self, val* p0))((((long)var_other&3)?class_info[((long)var_other&3)]:var_other->class)->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var_other, var_k); /* [] on <var_other:nullable Object(MapRead[nullable Object, nullable Object])>*/
}
if (var16 == NULL) {
var17 = (var_v != NULL);
} else {
var18 = ((short int(*)(val* self, val* p0))((((long)var16&3)?class_info[((long)var16&3)]:var16->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var16, var_v); /* != on <var16:nullable Object>*/
var17 = var18;
}
if (var17){
var = 0;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_10); /* next on <var_10:MapIterator[nullable Object, nullable Object]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection$MapIterator$finish (var_10) on <var_10:MapIterator[nullable Object, nullable Object]> */
RET_LABEL19:(void)0;
}
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$MapRead$hash for (self: MapRead[nullable Object, nullable Object]): Int */
long core___core__MapRead___core__kernel__Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var_res /* var res: Int */;
val* var_ /* var : MapRead[nullable Object, nullable Object] */;
val* var2 /* : MapIterator[nullable Object, nullable Object] */;
val* var_3 /* var : MapIterator[nullable Object, nullable Object] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_k /* var k: nullable Object */;
val* var6 /* : nullable Object */;
val* var_v /* var v: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var9 /* : Int */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var13 /* : Int */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
const char* var_class_name19;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
long var23 /* : Int */;
long var24 /* : Int */;
short int var26 /* : Bool */;
int cltype27;
int idtype28;
const char* var_class_name29;
long var30 /* : Int */;
long var31 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
long var37 /* : Int */;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__MapRead__length]))(self); /* length on <self:MapRead[nullable Object, nullable Object]>*/
}
var_res = var1;
var_ = self;
{
var2 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_); /* iterator on <var_:MapRead[nullable Object, nullable Object]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_3); /* is_ok on <var_3:MapIterator[nullable Object, nullable Object]>*/
}
if (var4){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_3); /* key on <var_3:MapIterator[nullable Object, nullable Object]>*/
}
var_k = var5;
{
var6 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_3); /* item on <var_3:MapIterator[nullable Object, nullable Object]>*/
}
var_v = var6;
if (var_k == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
var8 = ((short int(*)(val* self, val* p0))((((long)var_k&3)?class_info[((long)var_k&3)]:var_k->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_k, ((val*)NULL)); /* != on <var_k:nullable Object>*/
var7 = var8;
}
if (var7){
{
var9 = ((long(*)(val* self))((((long)var_k&3)?class_info[((long)var_k&3)]:var_k->class)->vft[COLOR_core__kernel__Object__hash]))(var_k); /* hash on <var_k:nullable Object(Object)>*/
}
{
{ /* Inline kernel$Int$* (var9,7l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <7l:Int> isa OTHER */
/* <7l:Int> isa OTHER */
var12 = 1; /* easy <7l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var13 = var9 * 7l;
var10 = var13;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_res,var10) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var10:Int> isa OTHER */
/* <var10:Int> isa OTHER */
var16 = 1; /* easy <var10:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name19 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name19);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var20 = var_res + var10;
var14 = var20;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var_res = var14;
} else {
}
if (var_v == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
var22 = ((short int(*)(val* self, val* p0))((((long)var_v&3)?class_info[((long)var_v&3)]:var_v->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_v, ((val*)NULL)); /* != on <var_v:nullable Object>*/
var21 = var22;
}
if (var21){
{
var23 = ((long(*)(val* self))((((long)var_v&3)?class_info[((long)var_v&3)]:var_v->class)->vft[COLOR_core__kernel__Object__hash]))(var_v); /* hash on <var_v:nullable Object(Object)>*/
}
{
{ /* Inline kernel$Int$* (var23,11l) on <var23:Int> */
/* Covariant cast for argument 0 (i) <11l:Int> isa OTHER */
/* <11l:Int> isa OTHER */
var26 = 1; /* easy <11l:Int> isa OTHER*/
if (unlikely(!var26)) {
var_class_name29 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name29);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var30 = var23 * 11l;
var24 = var30;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_res,var24) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var24:Int> isa OTHER */
/* <var24:Int> isa OTHER */
var33 = 1; /* easy <var24:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var37 = var_res + var24;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var_res = var31;
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_3); /* next on <var_3:MapIterator[nullable Object, nullable Object]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection$MapIterator$finish (var_3) on <var_3:MapIterator[nullable Object, nullable Object]> */
RET_LABEL38:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$Map$add_all for (self: Map[nullable Object, nullable Object], MapRead[nullable Object, nullable Object]) */
void core___core__Map___add_all(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_map /* var map: MapRead[nullable Object, nullable Object] */;
val* var1 /* : MapIterator[nullable Object, nullable Object] */;
val* var_i /* var i: MapIterator[nullable Object, nullable Object] */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var4 /* : nullable Object */;
/* Covariant cast for argument 0 (map) <p0:MapRead[nullable Object, nullable Object]> isa MapRead[K, V] */
/* <p0:MapRead[nullable Object, nullable Object]> isa MapRead[K, V] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__MapRead__core__Map___35dK__core__Map___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MapRead[K, V]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 688);
fatal_exit(1);
}
var_map = p0;
{
var1 = ((val*(*)(val* self))((((long)var_map&3)?class_info[((long)var_map&3)]:var_map->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_map); /* iterator on <var_map:MapRead[nullable Object, nullable Object]>*/
}
var_i = var1;
for(;;) {
{
var2 = ((short int(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_i); /* is_ok on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
if (var2){
{
var3 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_i); /* key on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
{
var4 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_i); /* item on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self, val* p0, val* p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(self, var3, var4); /* []= on <self:Map[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_i); /* next on <var_i:MapIterator[nullable Object, nullable Object]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_collection$MapIterator$finish for (self: MapIterator[nullable Object, nullable Object]) */
void core___core__MapIterator___finish(val* self) {
RET_LABEL:;
}
/* method abstract_collection$MapKeysIterator$original_iterator for (self: MapKeysIterator[nullable Object, nullable Object]): MapIterator[nullable Object, nullable Object] */
val* core___core__MapKeysIterator___original_iterator(val* self) {
val* var /* : MapIterator[nullable Object, nullable Object] */;
val* var1 /* : MapIterator[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_core__abstract_collection__MapKeysIterator___original_iterator].val; /* _original_iterator on <self:MapKeysIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 772);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection$MapKeysIterator$original_iterator= for (self: MapKeysIterator[nullable Object, nullable Object], MapIterator[nullable Object, nullable Object]) */
void core___core__MapKeysIterator___original_iterator_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (original_iterator) <p0:MapIterator[nullable Object, nullable Object]> isa MapIterator[K, V] */
/* <p0:MapIterator[nullable Object, nullable Object]> isa MapIterator[K, V] */
type_struct = self->type->resolution_table->types[COLOR_core__MapIterator__core__MapKeysIterator___35dK__core__MapKeysIterator___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MapIterator[K, V]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 772);
fatal_exit(1);
}
self->attrs[COLOR_core__abstract_collection__MapKeysIterator___original_iterator].val = p0; /* _original_iterator on <self:MapKeysIterator[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection$MapKeysIterator$is_ok for (self: MapKeysIterator[nullable Object, nullable Object]): Bool */
short int core___core__MapKeysIterator___Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : MapIterator[nullable Object, nullable Object] */;
val* var3 /* : MapIterator[nullable Object, nullable Object] */;
short int var4 /* : Bool */;
{
{ /* Inline abstract_collection$MapKeysIterator$original_iterator (self) on <self:MapKeysIterator[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__abstract_collection__MapKeysIterator___original_iterator].val; /* _original_iterator on <self:MapKeysIterator[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 772);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var1); /* is_ok on <var1:MapIterator[nullable Object, nullable Object]>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$MapKeysIterator$next for (self: MapKeysIterator[nullable Object, nullable Object]) */
void core___core__MapKeysIterator___Iterator__next(val* self) {
val* var /* : MapIterator[nullable Object, nullable Object] */;
val* var2 /* : MapIterator[nullable Object, nullable Object] */;
{
{ /* Inline abstract_collection$MapKeysIterator$original_iterator (self) on <self:MapKeysIterator[nullable Object, nullable Object]> */
var2 = self->attrs[COLOR_core__abstract_collection__MapKeysIterator___original_iterator].val; /* _original_iterator on <self:MapKeysIterator[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 772);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
((void(*)(val* self))((((long)var&3)?class_info[((long)var&3)]:var->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var); /* next on <var:MapIterator[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection$MapKeysIterator$item for (self: MapKeysIterator[nullable Object, nullable Object]): nullable Object */
val* core___core__MapKeysIterator___Iterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : MapIterator[nullable Object, nullable Object] */;
val* var3 /* : MapIterator[nullable Object, nullable Object] */;
val* var4 /* : nullable Object */;
{
{ /* Inline abstract_collection$MapKeysIterator$original_iterator (self) on <self:MapKeysIterator[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__abstract_collection__MapKeysIterator___original_iterator].val; /* _original_iterator on <self:MapKeysIterator[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 772);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var1); /* key on <var1:MapIterator[nullable Object, nullable Object]>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$MapKeysIterator$init for (self: MapKeysIterator[nullable Object, nullable Object]) */
void core___core__MapKeysIterator___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__MapKeysIterator___core__kernel__Object__init]))(self); /* init on <self:MapKeysIterator[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection$MapValuesIterator$original_iterator for (self: MapValuesIterator[nullable Object, nullable Object]): MapIterator[nullable Object, nullable Object] */
val* core___core__MapValuesIterator___original_iterator(val* self) {
val* var /* : MapIterator[nullable Object, nullable Object] */;
val* var1 /* : MapIterator[nullable Object, nullable Object] */;
var1 = self->attrs[COLOR_core__abstract_collection__MapValuesIterator___original_iterator].val; /* _original_iterator on <self:MapValuesIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 783);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection$MapValuesIterator$original_iterator= for (self: MapValuesIterator[nullable Object, nullable Object], MapIterator[nullable Object, nullable Object]) */
void core___core__MapValuesIterator___original_iterator_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (original_iterator) <p0:MapIterator[nullable Object, nullable Object]> isa MapIterator[K, V] */
/* <p0:MapIterator[nullable Object, nullable Object]> isa MapIterator[K, V] */
type_struct = self->type->resolution_table->types[COLOR_core__MapIterator__core__MapValuesIterator___35dK__core__MapValuesIterator___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MapIterator[K, V]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 783);
fatal_exit(1);
}
self->attrs[COLOR_core__abstract_collection__MapValuesIterator___original_iterator].val = p0; /* _original_iterator on <self:MapValuesIterator[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection$MapValuesIterator$is_ok for (self: MapValuesIterator[nullable Object, nullable Object]): Bool */
short int core___core__MapValuesIterator___Iterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : MapIterator[nullable Object, nullable Object] */;
val* var3 /* : MapIterator[nullable Object, nullable Object] */;
short int var4 /* : Bool */;
{
{ /* Inline abstract_collection$MapValuesIterator$original_iterator (self) on <self:MapValuesIterator[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__abstract_collection__MapValuesIterator___original_iterator].val; /* _original_iterator on <self:MapValuesIterator[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 783);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((short int(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var1); /* is_ok on <var1:MapIterator[nullable Object, nullable Object]>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$MapValuesIterator$next for (self: MapValuesIterator[nullable Object, nullable Object]) */
void core___core__MapValuesIterator___Iterator__next(val* self) {
val* var /* : MapIterator[nullable Object, nullable Object] */;
val* var2 /* : MapIterator[nullable Object, nullable Object] */;
{
{ /* Inline abstract_collection$MapValuesIterator$original_iterator (self) on <self:MapValuesIterator[nullable Object, nullable Object]> */
var2 = self->attrs[COLOR_core__abstract_collection__MapValuesIterator___original_iterator].val; /* _original_iterator on <self:MapValuesIterator[nullable Object, nullable Object]> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 783);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
((void(*)(val* self))((((long)var&3)?class_info[((long)var&3)]:var->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var); /* next on <var:MapIterator[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection$MapValuesIterator$item for (self: MapValuesIterator[nullable Object, nullable Object]): nullable Object */
val* core___core__MapValuesIterator___Iterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : MapIterator[nullable Object, nullable Object] */;
val* var3 /* : MapIterator[nullable Object, nullable Object] */;
val* var4 /* : nullable Object */;
{
{ /* Inline abstract_collection$MapValuesIterator$original_iterator (self) on <self:MapValuesIterator[nullable Object, nullable Object]> */
var3 = self->attrs[COLOR_core__abstract_collection__MapValuesIterator___original_iterator].val; /* _original_iterator on <self:MapValuesIterator[nullable Object, nullable Object]> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _original_iterator");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 783);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var1); /* item on <var1:MapIterator[nullable Object, nullable Object]>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$MapValuesIterator$init for (self: MapValuesIterator[nullable Object, nullable Object]) */
void core___core__MapValuesIterator___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__MapValuesIterator___core__kernel__Object__init]))(self); /* init on <self:MapValuesIterator[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection$SequenceRead$first for (self: SequenceRead[nullable Object]): nullable Object */
val* core___core__SequenceRead___Collection__first(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
{
var1 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:SequenceRead[nullable Object]>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'not_empty\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 808);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self, long p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self, 0l); /* [] on <self:SequenceRead[nullable Object]>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$SequenceRead$last for (self: SequenceRead[nullable Object]): nullable Object */
val* core___core__SequenceRead___last(val* self) {
val* var /* : nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
val* var8 /* : nullable Object */;
{
var1 = ((short int(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__is_empty]))(self); /* is_empty on <self:SequenceRead[nullable Object]>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert \'not_empty\' failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 871);
fatal_exit(1);
}
{
var3 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:SequenceRead[nullable Object]>*/
}
{
{ /* Inline kernel$Int$- (var3,1l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var7 = var3 - 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
var8 = ((val*(*)(val* self, long p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self, var4); /* [] on <self:SequenceRead[nullable Object]>*/
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$SequenceRead$index_of for (self: SequenceRead[nullable Object], nullable Object): Int */
long core___core__SequenceRead___index_of(val* self, val* p0) {
long var /* : Int */;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
var_item = p0;
{
var1 = ((long(*)(val* self, val* p0, long p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__SequenceRead__index_of_from]))(self, var_item, 0l); /* index_of_from on <self:SequenceRead[nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$SequenceRead$last_index_of for (self: SequenceRead[nullable Object], nullable Object): Int */
long core___core__SequenceRead___last_index_of(val* self, val* p0) {
long var /* : Int */;
val* var_item /* var item: nullable Object */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var6 /* : Int */;
var_item = p0;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:SequenceRead[nullable Object]>*/
}
{
{ /* Inline kernel$Int$- (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var5 = var1 - 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
{
var6 = ((long(*)(val* self, val* p0, long p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__SequenceRead__last_index_of_from]))(self, var_item, var2); /* last_index_of_from on <self:SequenceRead[nullable Object]>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$SequenceRead$index_of_from for (self: SequenceRead[nullable Object], nullable Object, Int): Int */
long core___core__SequenceRead___index_of_from(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_item /* var item: nullable Object */;
long var_pos /* var pos: Int */;
long var_p /* var p: Int */;
val* var1 /* : Iterator[nullable Object] */;
val* var_i /* var i: IndexedIterator[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype15;
int idtype16;
const char* var_class_name17;
long var18 /* : Int */;
long var19 /* : Int */;
long var21 /* : Int */;
var_item = p0;
var_pos = p1;
var_p = 0l;
{
var1 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(self); /* iterator on <self:SequenceRead[nullable Object]>*/
}
var_i = var1;
for(;;) {
{
var2 = ((short int(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_i); /* is_ok on <var_i:IndexedIterator[nullable Object]>*/
}
if (var2){
{
{ /* Inline kernel$Int$>= (var_p,var_pos) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var6 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var7 = var_p >= var_pos;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_ = var4;
if (var4){
{
var8 = ((val*(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_i); /* item on <var_i:IndexedIterator[nullable Object]>*/
}
if (var8 == NULL) {
var9 = (var_item == NULL);
} else {
var10 = ((short int(*)(val* self, val* p0))((((long)var8&3)?class_info[((long)var8&3)]:var8->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var8, var_item); /* == on <var8:nullable Object>*/
var9 = var10;
}
var3 = var9;
} else {
var3 = var_;
}
if (var3){
{
var11 = ((long(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__IndexedIterator__index]))(var_i); /* index on <var_i:IndexedIterator[nullable Object]>*/
}
var = var11;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_i&3)?class_info[((long)var_i&3)]:var_i->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_i); /* next on <var_i:IndexedIterator[nullable Object]>*/
}
{
{ /* Inline kernel$Int$+ (var_p,1l) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name17 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name17);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var18 = var_p + 1l;
var12 = var18;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_p = var12;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var21 = -1l;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$SequenceRead$last_index_of_from for (self: SequenceRead[nullable Object], nullable Object, Int): Int */
long core___core__SequenceRead___last_index_of_from(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_item /* var item: nullable Object */;
long var_pos /* var pos: Int */;
long var_i /* var i: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
long var15 /* : Int */;
long var17 /* : Int */;
var_item = p0;
var_pos = p1;
var_i = var_pos;
for(;;) {
{
{ /* Inline kernel$Int$>= (var_i,0l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var3 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var3)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var4 = var_i >= 0l;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
if (var1){
{
var5 = ((val*(*)(val* self, long p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self, var_i); /* [] on <self:SequenceRead[nullable Object]>*/
}
if (var5 == NULL) {
var6 = (var_item == NULL);
} else {
var7 = ((short int(*)(val* self, val* p0))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var5, var_item); /* == on <var5:nullable Object>*/
var6 = var7;
}
if (var6){
var = var_i;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var14 = var_i - 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_i = var8;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var17 = -1l;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$SequenceRead$== for (self: SequenceRead[nullable Object], nullable Object): Bool */
short int core___core__SequenceRead___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var_l /* var l: Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
long var_i /* var i: Int */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var16 /* : nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype22;
int idtype23;
const char* var_class_name24;
long var25 /* : Int */;
var_o = p0;
/* <var_o:nullable Object> isa SequenceRead[nullable Object] */
cltype = type_core__SequenceRead__nullable__core__Object.color;
idtype = type_core__SequenceRead__nullable__core__Object.id;
if(var_o == NULL) {
var1 = 0;
} else {
if(cltype >= (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->table_size) {
var1 = 0;
} else {
var1 = (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var3 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:SequenceRead[nullable Object]>*/
}
var_l = var3;
{
var4 = ((long(*)(val* self))((((long)var_o&3)?class_info[((long)var_o&3)]:var_o->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_o); /* length on <var_o:nullable Object(SequenceRead[nullable Object])>*/
}
{
{ /* Inline kernel$Int$!= (var4,var_l) on <var4:Int> */
var7 = var4 == var_l;
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = 0;
goto RET_LABEL;
} else {
}
var_i = 0l;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_l:Int> isa OTHER */
/* <var_l:Int> isa OTHER */
var11 = 1; /* easy <var_l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var14 = var_i < var_l;
var9 = var14;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
{
var15 = ((val*(*)(val* self, long p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self, var_i); /* [] on <self:SequenceRead[nullable Object]>*/
}
{
var16 = ((val*(*)(val* self, long p0))((((long)var_o&3)?class_info[((long)var_o&3)]:var_o->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_o, var_i); /* [] on <var_o:nullable Object(SequenceRead[nullable Object])>*/
}
if (var15 == NULL) {
var17 = (var16 != NULL);
} else {
var18 = ((short int(*)(val* self, val* p0))((((long)var15&3)?class_info[((long)var15&3)]:var15->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var15, var16); /* != on <var15:nullable Object>*/
var17 = var18;
}
if (var17){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var21 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name24 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name24);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var25 = var_i + 1l;
var19 = var25;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_i = var19;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$SequenceRead$hash for (self: SequenceRead[nullable Object]): Int */
long core___core__SequenceRead___core__kernel__Object__hash(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_res /* var res: Int */;
val* var_ /* var : SequenceRead[nullable Object] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : IndexedIterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_e /* var e: nullable Object */;
long var10 /* : Int */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
long var26 /* : Int */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
{
var1 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:SequenceRead[nullable Object]>*/
}
{
{ /* Inline kernel$Int$+ (17l,var1) on <17l:Int> */
/* Covariant cast for argument 0 (i) <var1:Int> isa OTHER */
/* <var1:Int> isa OTHER */
var4 = 1; /* easy <var1:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var5 = 17l + var1;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_res = var2;
var_ = self;
{
var6 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[nullable Object]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:IndexedIterator[nullable Object]>*/
}
if (var8){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:IndexedIterator[nullable Object]>*/
}
var_e = var9;
{
{ /* Inline kernel$Int$* (var_res,3l) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var12 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var16 = var_res * 3l;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel$Int$/ (var10,2l) on <var10:Int> */
/* Covariant cast for argument 0 (i) <2l:Int> isa OTHER */
/* <2l:Int> isa OTHER */
var19 = 1; /* easy <2l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 733);
fatal_exit(1);
}
var23 = var10 / 2l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_res = var17;
if (var_e == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
var25 = ((short int(*)(val* self, val* p0))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable Object>*/
var24 = var25;
}
if (var24){
{
var26 = ((long(*)(val* self))((((long)var_e&3)?class_info[((long)var_e&3)]:var_e->class)->vft[COLOR_core__kernel__Object__hash]))(var_e); /* hash on <var_e:nullable Object(Object)>*/
}
{
{ /* Inline kernel$Int$+ (var_res,var26) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <var26:Int> isa OTHER */
/* <var26:Int> isa OTHER */
var29 = 1; /* easy <var26:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var33 = var_res + var26;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_res = var27;
} else {
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:IndexedIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:IndexedIterator[nullable Object]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$SequenceRead$iterator_from for (self: SequenceRead[nullable Object], Int): IndexedIterator[nullable Object] */
val* core___core__SequenceRead___iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[nullable Object] */;
long var_pos /* var pos: Int */;
val* var1 /* : Iterator[nullable Object] */;
val* var_res /* var res: IndexedIterator[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
var_pos = p0;
{
var1 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(self); /* iterator on <self:SequenceRead[nullable Object]>*/
}
var_res = var1;
for(;;) {
{
{ /* Inline kernel$Int$> (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var6 = var_pos > 0l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
{
var7 = ((short int(*)(val* self))((((long)var_res&3)?class_info[((long)var_res&3)]:var_res->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_res); /* is_ok on <var_res:IndexedIterator[nullable Object]>*/
}
var2 = var7;
} else {
var2 = var_;
}
if (var2){
{
((void(*)(val* self))((((long)var_res&3)?class_info[((long)var_res&3)]:var_res->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_res); /* next on <var_res:IndexedIterator[nullable Object]>*/
}
{
{ /* Inline kernel$Int$- (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var14 = var_pos - 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_pos = var8;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$SequenceRead$reverse_iterator for (self: SequenceRead[nullable Object]): IndexedIterator[nullable Object] */
val* core___core__SequenceRead___reverse_iterator(val* self) {
val* var /* : IndexedIterator[nullable Object] */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "reverse_iterator", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 981);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection$SequenceRead$reverse_iterator_from for (self: SequenceRead[nullable Object], Int): IndexedIterator[nullable Object] */
val* core___core__SequenceRead___reverse_iterator_from(val* self, long p0) {
val* var /* : IndexedIterator[nullable Object] */;
long var_pos /* var pos: Int */;
val* var1 /* : IndexedIterator[nullable Object] */;
val* var_res /* var res: IndexedIterator[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
var_pos = p0;
{
var1 = ((val*(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__SequenceRead__reverse_iterator]))(self); /* reverse_iterator on <self:SequenceRead[nullable Object]>*/
}
var_res = var1;
for(;;) {
{
{ /* Inline kernel$Int$> (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var5 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var6 = var_pos > 0l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_ = var3;
if (var3){
{
var7 = ((short int(*)(val* self))((((long)var_res&3)?class_info[((long)var_res&3)]:var_res->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_res); /* is_ok on <var_res:IndexedIterator[nullable Object]>*/
}
var2 = var7;
} else {
var2 = var_;
}
if (var2){
{
((void(*)(val* self))((((long)var_res&3)?class_info[((long)var_res&3)]:var_res->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_res); /* next on <var_res:IndexedIterator[nullable Object]>*/
}
{
{ /* Inline kernel$Int$- (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var14 = var_pos - 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_pos = var8;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$Sequence$first= for (self: Sequence[nullable Object], nullable Object) */
void core___core__Sequence___first_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_item /* var item: nullable Object */;
/* Covariant cast for argument 0 (item) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__Sequence___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 1008);
fatal_exit(1);
}
var_item = p0;
{
((void(*)(val* self, long p0, val* p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Sequence___91d_93d_61d]))(self, 0l, var_item); /* []= on <self:Sequence[nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection$Sequence$add for (self: Sequence[nullable Object], nullable Object) */
void core___core__Sequence___SimpleCollection__add(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
val* var_e /* var e: nullable Object */;
/* Covariant cast for argument 0 (e) <p0:nullable Object> isa E */
/* <p0:nullable Object> isa E */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__Sequence___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 1039);
fatal_exit(1);
}
var_e = p0;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Sequence__push]))(self, var_e); /* push on <self:Sequence[nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection$Sequence$append for (self: Sequence[nullable Object], Collection[nullable Object]) */
void core___core__Sequence___append(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[nullable Object] */;
/* Covariant cast for argument 0 (coll) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__Collection__core__Sequence___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 1050);
fatal_exit(1);
}
var_coll = p0;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add_all]))(self, var_coll); /* add_all on <self:Sequence[nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection$Sequence$pop for (self: Sequence[nullable Object]): nullable Object */
val* core___core__Sequence___pop(val* self) {
val* var /* : nullable Object */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "pop", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 1059);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection$Sequence$unshift for (self: Sequence[nullable Object], nullable Object) */
void core___core__Sequence___unshift(val* self, val* p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "unshift", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 1069);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_collection$Sequence$prepend for (self: Sequence[nullable Object], Collection[nullable Object]) */
void core___core__Sequence___prepend(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[nullable Object] */;
/* Covariant cast for argument 0 (coll) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__Collection__core__Sequence___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 1077);
fatal_exit(1);
}
var_coll = p0;
{
((void(*)(val* self, val* p0, long p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Sequence__insert_all]))(self, var_coll, 0l); /* insert_all on <self:Sequence[nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection$Sequence$shift for (self: Sequence[nullable Object]): nullable Object */
val* core___core__Sequence___shift(val* self) {
val* var /* : nullable Object */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "shift", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 1086);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method abstract_collection$Sequence$insert for (self: Sequence[nullable Object], nullable Object, Int) */
void core___core__Sequence___insert(val* self, val* p0, long p1) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "insert", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 1130);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_collection$Sequence$insert_all for (self: Sequence[nullable Object], Collection[nullable Object], Int) */
void core___core__Sequence___insert_all(val* self, val* p0, long p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_coll /* var coll: Collection[nullable Object] */;
long var_index /* var index: Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name7;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
long var17 /* : Int */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var_21 /* var : Collection[nullable Object] */;
val* var22 /* : Iterator[nullable Object] */;
val* var_23 /* var : Iterator[nullable Object] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_c /* var c: nullable Object */;
long var26 /* : Int */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
const char* var_class_name31;
long var32 /* : Int */;
/* Covariant cast for argument 0 (coll) <p0:Collection[nullable Object]> isa Collection[E] */
/* <p0:Collection[nullable Object]> isa Collection[E] */
type_struct = (((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__Collection__core__Sequence___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Collection[E]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 1140);
fatal_exit(1);
}
var_coll = p0;
var_index = p1;
{
{ /* Inline kernel$Int$>= (var_index,0l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var4 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name7 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name7);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var8 = var_index >= 0l;
var2 = var8;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_ = var2;
if (var2){
{
var9 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:Sequence[nullable Object]>*/
}
{
{ /* Inline kernel$Int$< (var_index,var9) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var16 = var_index < var9;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var1 = var10;
} else {
var1 = var_;
}
if (unlikely(!var1)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 1150);
fatal_exit(1);
}
{
var17 = ((long(*)(val* self))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Collection__length]))(self); /* length on <self:Sequence[nullable Object]>*/
}
{
{ /* Inline kernel$Int$== (var_index,var17) on <var_index:Int> */
var20 = var_index == var17;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
if (var18){
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add_all]))(self, var_coll); /* add_all on <self:Sequence[nullable Object]>*/
}
} else {
}
var_21 = var_coll;
{
var22 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_21); /* iterator on <var_21:Collection[nullable Object]>*/
}
var_23 = var22;
for(;;) {
{
var24 = ((short int(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_23); /* is_ok on <var_23:Iterator[nullable Object]>*/
}
if (var24){
} else {
goto BREAK_label;
}
{
var25 = ((val*(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_23); /* item on <var_23:Iterator[nullable Object]>*/
}
var_c = var25;
{
((void(*)(val* self, val* p0, long p1))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__abstract_collection__Sequence__insert]))(self, var_c, var_index); /* insert on <self:Sequence[nullable Object]>*/
}
{
{ /* Inline kernel$Int$+ (var_index,1l) on <var_index:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var28 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var28)) {
var_class_name31 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name31);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var32 = var_index + 1l;
var26 = var32;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var_index = var26;
{
((void(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_23); /* next on <var_23:Iterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_23); /* finish on <var_23:Iterator[nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection$Sequence$remove_at for (self: Sequence[nullable Object], Int) */
void core___core__Sequence___remove_at(val* self, long p0) {
const char* var_class_name;
var_class_name = self == NULL ? "null" : (((long)self&3)?type_info[((long)self&3)]:self->type)->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "remove_at", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 1160);
fatal_exit(1);
RET_LABEL:;
}
/* method abstract_collection$CoupleMap$iterator for (self: CoupleMap[nullable Object, nullable Object]): MapIterator[nullable Object, nullable Object] */
val* core___core__CoupleMap___MapRead__iterator(val* self) {
val* var /* : MapIterator[nullable Object, nullable Object] */;
val* var1 /* : CoupleMapIterator[nullable Object, nullable Object] */;
val* var2 /* : Iterator[Couple[nullable Object, nullable Object]] */;
var1 = NEW_core__abstract_collection__CoupleMapIterator((((long)self&3)?type_info[((long)self&3)]:self->type)->resolution_table->types[COLOR_core__abstract_collection__CoupleMapIterator__core__CoupleMap___35dK__core__CoupleMap___35dV]);
{
var2 = core___core__ArrayMap___core__abstract_collection__CoupleMap__couple_iterator(self);
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_collection__CoupleMapIterator__iter_61d]))(var1, var2); /* iter= on <var1:CoupleMapIterator[nullable Object, nullable Object]>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:CoupleMapIterator[nullable Object, nullable Object]>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$CoupleMap$has_key for (self: CoupleMap[nullable Object, nullable Object], nullable Object): Bool */
short int core___core__CoupleMap___MapRead__has_key(val* self, val* p0) {
short int var /* : Bool */;
val* var_key /* var key: nullable Object */;
val* var1 /* : nullable Couple[nullable Object, nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_key = p0;
{
var1 = core___core__ArrayMap___core__abstract_collection__CoupleMap__couple_at(self, var_key);
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var1,((val*)NULL)) on <var1:nullable Couple[nullable Object, nullable Object]> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable Couple[nullable Object, nullable Object](Couple[nullable Object, nullable Object])>*/
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$CoupleMapIterator$item for (self: CoupleMapIterator[nullable Object, nullable Object]): nullable Object */
val* core__abstract_collection___core__abstract_collection__CoupleMapIterator___MapIterator__item(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Iterator[Couple[nullable Object, nullable Object]] */;
val* var2 /* : nullable Object */;
val* var3 /* : nullable Object */;
val* var5 /* : nullable Object */;
var1 = self->attrs[COLOR_core__abstract_collection__CoupleMapIterator___iter].val; /* _iter on <self:CoupleMapIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 1234);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var1); /* item on <var1:Iterator[Couple[nullable Object, nullable Object]]>*/
}
{
{ /* Inline abstract_collection$Couple$second (var2) on <var2:nullable Object(Couple[nullable Object, nullable Object])> */
var5 = var2->attrs[COLOR_core__abstract_collection__Couple___second].val; /* _second on <var2:nullable Object(Couple[nullable Object, nullable Object])> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$CoupleMapIterator$key for (self: CoupleMapIterator[nullable Object, nullable Object]): nullable Object */
val* core__abstract_collection___core__abstract_collection__CoupleMapIterator___MapIterator__key(val* self) {
val* var /* : nullable Object */;
val* var1 /* : Iterator[Couple[nullable Object, nullable Object]] */;
val* var2 /* : nullable Object */;
val* var3 /* : nullable Object */;
val* var5 /* : nullable Object */;
var1 = self->attrs[COLOR_core__abstract_collection__CoupleMapIterator___iter].val; /* _iter on <self:CoupleMapIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 1238);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var1); /* item on <var1:Iterator[Couple[nullable Object, nullable Object]]>*/
}
{
{ /* Inline abstract_collection$Couple$first (var2) on <var2:nullable Object(Couple[nullable Object, nullable Object])> */
var5 = var2->attrs[COLOR_core__abstract_collection__Couple___first].val; /* _first on <var2:nullable Object(Couple[nullable Object, nullable Object])> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$CoupleMapIterator$is_ok for (self: CoupleMapIterator[nullable Object, nullable Object]): Bool */
short int core__abstract_collection___core__abstract_collection__CoupleMapIterator___MapIterator__is_ok(val* self) {
short int var /* : Bool */;
val* var1 /* : Iterator[Couple[nullable Object, nullable Object]] */;
short int var2 /* : Bool */;
var1 = self->attrs[COLOR_core__abstract_collection__CoupleMapIterator___iter].val; /* _iter on <self:CoupleMapIterator[nullable Object, nullable Object]> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 1240);
fatal_exit(1);
}
{
var2 = ((short int(*)(val* self))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var1); /* is_ok on <var1:Iterator[Couple[nullable Object, nullable Object]]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_collection$CoupleMapIterator$next for (self: CoupleMapIterator[nullable Object, nullable Object]) */
void core__abstract_collection___core__abstract_collection__CoupleMapIterator___MapIterator__next(val* self) {
val* var /* : Iterator[Couple[nullable Object, nullable Object]] */;
var = self->attrs[COLOR_core__abstract_collection__CoupleMapIterator___iter].val; /* _iter on <self:CoupleMapIterator[nullable Object, nullable Object]> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _iter");
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 1244);
fatal_exit(1);
}
{
((void(*)(val* self))((((long)var&3)?class_info[((long)var&3)]:var->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var); /* next on <var:Iterator[Couple[nullable Object, nullable Object]]>*/
}
RET_LABEL:;
}
/* method abstract_collection$CoupleMapIterator$iter= for (self: CoupleMapIterator[nullable Object, nullable Object], Iterator[Couple[nullable Object, nullable Object]]) */
void core__abstract_collection___core__abstract_collection__CoupleMapIterator___iter_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (iter) <p0:Iterator[Couple[nullable Object, nullable Object]]> isa Iterator[Couple[K, V]] */
/* <p0:Iterator[Couple[nullable Object, nullable Object]]> isa Iterator[Couple[K, V]] */
type_struct = self->type->resolution_table->types[COLOR_core__Iterator__core__Couple__core__abstract_collection__CoupleMapIterator___35dK__core__abstract_collection__CoupleMapIterator___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "Iterator[Couple[K, V]]", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 1247);
fatal_exit(1);
}
self->attrs[COLOR_core__abstract_collection__CoupleMapIterator___iter].val = p0; /* _iter on <self:CoupleMapIterator[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection$CoupleMapIterator$init for (self: CoupleMapIterator[nullable Object, nullable Object]) */
void core__abstract_collection___core__abstract_collection__CoupleMapIterator___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core__abstract_collection___core__abstract_collection__CoupleMapIterator___core__kernel__Object__init]))(self); /* init on <self:CoupleMapIterator[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
/* method abstract_collection$Couple$first for (self: Couple[nullable Object, nullable Object]): nullable Object */
val* core___core__Couple___first(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_core__abstract_collection__Couple___first].val; /* _first on <self:Couple[nullable Object, nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection$Couple$first= for (self: Couple[nullable Object, nullable Object], nullable Object) */
void core___core__Couple___first_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (first) <p0:nullable Object> isa F */
/* <p0:nullable Object> isa F */
type_struct = self->type->resolution_table->types[COLOR_core__Couple___35dF];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "F", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 1255);
fatal_exit(1);
}
self->attrs[COLOR_core__abstract_collection__Couple___first].val = p0; /* _first on <self:Couple[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection$Couple$second for (self: Couple[nullable Object, nullable Object]): nullable Object */
val* core___core__Couple___second(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_core__abstract_collection__Couple___second].val; /* _second on <self:Couple[nullable Object, nullable Object]> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_collection$Couple$second= for (self: Couple[nullable Object, nullable Object], nullable Object) */
void core___core__Couple___second_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
/* Covariant cast for argument 0 (second) <p0:nullable Object> isa S */
/* <p0:nullable Object> isa S */
type_struct = self->type->resolution_table->types[COLOR_core__Couple___35dS];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(p0 == NULL) {
var = is_nullable;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "S", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__abstract_collection, 1258);
fatal_exit(1);
}
self->attrs[COLOR_core__abstract_collection__Couple___second].val = p0; /* _second on <self:Couple[nullable Object, nullable Object]> */
RET_LABEL:;
}
/* method abstract_collection$Couple$init for (self: Couple[nullable Object, nullable Object]) */
void core___core__Couple___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Couple___core__kernel__Object__init]))(self); /* init on <self:Couple[nullable Object, nullable Object]>*/
}
RET_LABEL:;
}
