#include "nitc__toolcontext.sep.0.h"
/* method toolcontext#Message#location for (self: Message): nullable Location */
val* nitc___nitc__Message___location(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable Location */;
var1 = self->attrs[COLOR_nitc__toolcontext__Message___location].val; /* _location on <self:Message> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#location= for (self: Message, nullable Location) */
void nitc___nitc__Message___location_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__toolcontext__Message___location].val = p0; /* _location on <self:Message> */
RET_LABEL:;
}
/* method toolcontext#Message#tag for (self: Message): nullable String */
val* nitc___nitc__Message___tag(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nitc__toolcontext__Message___tag].val; /* _tag on <self:Message> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#tag= for (self: Message, nullable String) */
void nitc___nitc__Message___tag_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__toolcontext__Message___tag].val = p0; /* _tag on <self:Message> */
RET_LABEL:;
}
/* method toolcontext#Message#text for (self: Message): String */
val* nitc___nitc__Message___text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 42);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#text= for (self: Message, String) */
void nitc___nitc__Message___text_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__toolcontext__Message___text].val = p0; /* _text on <self:Message> */
RET_LABEL:;
}
/* method toolcontext#Message#< for (self: Message, Message): Bool */
short int nitc___nitc__Message___core__kernel__Comparable___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Message */;
val* var2 /* : nullable Location */;
val* var4 /* : nullable Location */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable Location */;
val* var9 /* : nullable Location */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable Location */;
val* var14 /* : nullable Location */;
val* var15 /* : nullable Location */;
val* var17 /* : nullable Location */;
short int var18 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Message> isa OTHER */
/* <p0:Message> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_core__kernel__Comparable__OTHER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 61);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline toolcontext#Message#location (self) on <self:Message> */
var4 = self->attrs[COLOR_nitc__toolcontext__Message___location].val; /* _location on <self:Message> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (var2 == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = nitc___nitc__Location___core__kernel__Object___61d_61d(var2, ((val*)NULL));
var5 = var6;
}
if (var5){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext#Message#location (var_other) on <var_other:Message> */
var9 = var_other->attrs[COLOR_nitc__toolcontext__Message___location].val; /* _location on <var_other:Message> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7 == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = nitc___nitc__Location___core__kernel__Object___61d_61d(var7, ((val*)NULL));
var10 = var11;
}
if (var10){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext#Message#location (self) on <self:Message> */
var14 = self->attrs[COLOR_nitc__toolcontext__Message___location].val; /* _location on <self:Message> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 66);
fatal_exit(1);
}
{
{ /* Inline toolcontext#Message#location (var_other) on <var_other:Message> */
var17 = var_other->attrs[COLOR_nitc__toolcontext__Message___location].val; /* _location on <var_other:Message> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 66);
fatal_exit(1);
}
{
var18 = nitc___nitc__Location___core__kernel__Comparable___60d(var12, var15);
}
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#== for (self: Message, nullable Object): Bool */
short int nitc___nitc__Message___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Location */;
val* var7 /* : nullable Location */;
val* var8 /* : nullable Location */;
val* var10 /* : nullable Location */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var_ /* var : Bool */;
val* var13 /* : nullable String */;
val* var15 /* : nullable String */;
val* var16 /* : nullable String */;
val* var18 /* : nullable String */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var_21 /* var : Bool */;
val* var22 /* : String */;
val* var24 /* : String */;
val* var25 /* : String */;
val* var27 /* : String */;
short int var28 /* : Bool */;
var_other = p0;
/* <var_other:nullable Object> isa Message */
cltype = type_nitc__Message.color;
idtype = type_nitc__Message.id;
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
{ /* Inline toolcontext#Message#location (self) on <self:Message> */
var7 = self->attrs[COLOR_nitc__toolcontext__Message___location].val; /* _location on <self:Message> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline toolcontext#Message#location (var_other) on <var_other:nullable Object(Message)> */
var10 = var_other->attrs[COLOR_nitc__toolcontext__Message___location].val; /* _location on <var_other:nullable Object(Message)> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (var5 == NULL) {
var11 = (var8 == NULL);
} else {
var12 = nitc___nitc__Location___core__kernel__Object___61d_61d(var5, var8);
var11 = var12;
}
var_ = var11;
if (var11){
{
{ /* Inline toolcontext#Message#tag (self) on <self:Message> */
var15 = self->attrs[COLOR_nitc__toolcontext__Message___tag].val; /* _tag on <self:Message> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline toolcontext#Message#tag (var_other) on <var_other:nullable Object(Message)> */
var18 = var_other->attrs[COLOR_nitc__toolcontext__Message___tag].val; /* _tag on <var_other:nullable Object(Message)> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (var13 == NULL) {
var19 = (var16 == NULL);
} else {
var20 = ((short int(*)(val* self, val* p0))(var13->class->vft[COLOR_core__kernel__Object___61d_61d]))(var13, var16); /* == on <var13:nullable String>*/
var19 = var20;
}
var4 = var19;
} else {
var4 = var_;
}
var_21 = var4;
if (var4){
{
{ /* Inline toolcontext#Message#text (self) on <self:Message> */
var24 = self->attrs[COLOR_nitc__toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 42);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline toolcontext#Message#text (var_other) on <var_other:nullable Object(Message)> */
var27 = var_other->attrs[COLOR_nitc__toolcontext__Message___text].val; /* _text on <var_other:nullable Object(Message)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 42);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = ((short int(*)(val* self, val* p0))(var22->class->vft[COLOR_core__kernel__Object___61d_61d]))(var22, var25); /* == on <var22:String>*/
}
var3 = var28;
} else {
var3 = var_21;
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#to_s for (self: Message): String */
val* nitc___nitc__Message___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : nullable Location */;
val* var3 /* : nullable Location */;
val* var_l /* var l: nullable Location */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : String */;
val* var8 /* : String */;
val* var9 /* : NativeArray[String] */;
static val* varonce;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var17 /* : String */;
val* var18 /* : String */;
{
{ /* Inline toolcontext#Message#location (self) on <self:Message> */
var3 = self->attrs[COLOR_nitc__toolcontext__Message___location].val; /* _location on <self:Message> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_l = var1;
if (var_l == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = nitc___nitc__Location___core__kernel__Object___61d_61d(var_l, ((val*)NULL));
var4 = var5;
}
if (var4){
{
{ /* Inline toolcontext#Message#text (self) on <self:Message> */
var8 = self->attrs[COLOR_nitc__toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 42);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var = var6;
goto RET_LABEL;
} else {
if (unlikely(varonce==NULL)) {
var9 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = ": ";
var13 = core__flat___NativeString___to_s_full(var12, 2l, 2l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[1]=var11;
} else {
var9 = varonce;
varonce = NULL;
}
{
var14 = ((val*(*)(val* self))(var_l->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_l); /* to_s on <var_l:nullable Location(Location)>*/
}
((struct instance_core__NativeArray*)var9)->values[0]=var14;
{
{ /* Inline toolcontext#Message#text (self) on <self:Message> */
var17 = self->attrs[COLOR_nitc__toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 42);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
((struct instance_core__NativeArray*)var9)->values[2]=var15;
{
var18 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
var = var18;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method toolcontext#Message#to_color_string for (self: Message): String */
val* nitc___nitc__Message___to_color_string(val* self) {
val* var /* : String */;
uint32_t var1 /* : Char */;
uint32_t var3 /* : Char */;
uint32_t var_esc /* var esc: Char */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : String */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var_yellow /* var yellow: String */;
val* var12 /* : NativeArray[String] */;
static val* varonce11;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var_def /* var def: String */;
val* var19 /* : nullable String */;
val* var21 /* : nullable String */;
val* var_tag /* var tag: nullable String */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var28 /* : NativeArray[String] */;
static val* varonce27;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
val* var36 /* : String */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
val* var42 /* : nullable Location */;
val* var44 /* : nullable Location */;
val* var_l /* var l: nullable Location */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
val* var48 /* : NativeArray[String] */;
static val* varonce47;
val* var49 /* : String */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : nullable SourceFile */;
val* var55 /* : nullable SourceFile */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var_other59 /* var other: nullable Object */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
val* var64 /* : NativeArray[String] */;
static val* varonce63;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : String */;
val* var69 /* : String */;
val* var70 /* : String */;
val* var72 /* : String */;
val* var73 /* : String */;
val* var75 /* : NativeArray[String] */;
static val* varonce74;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : String */;
val* var84 /* : String */;
val* var85 /* : String */;
val* var87 /* : String */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
val* var91 /* : String */;
val* var92 /* : String */;
val* var93 /* : String */;
{
{ /* Inline kernel#Int#code_point (27l) on <27l:Int> */
var3 = (uint32_t)27l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_esc = var1;
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "[0;33m";
var8 = core__flat___NativeString___to_s_full(var7, 6l, 6l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[1]=var6;
} else {
var4 = varonce;
varonce = NULL;
}
var9 = core__abstract_text___Char___Object__to_s(var_esc);
((struct instance_core__NativeArray*)var4)->values[0]=var9;
{
var10 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
var_yellow = var10;
if (unlikely(varonce11==NULL)) {
var12 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "[0m";
var16 = core__flat___NativeString___to_s_full(var15, 3l, 3l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var12)->values[1]=var14;
} else {
var12 = varonce11;
varonce11 = NULL;
}
var17 = core__abstract_text___Char___Object__to_s(var_esc);
((struct instance_core__NativeArray*)var12)->values[0]=var17;
{
var18 = ((val*(*)(val* self))(var12->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce11 = var12;
var_def = var18;
{
{ /* Inline toolcontext#Message#tag (self) on <self:Message> */
var21 = self->attrs[COLOR_nitc__toolcontext__Message___tag].val; /* _tag on <self:Message> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_tag = var19;
if (var_tag == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_tag,((val*)NULL)) on <var_tag:nullable String> */
var_other = ((val*)NULL);
{
var25 = ((short int(*)(val* self, val* p0))(var_tag->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_tag, var_other); /* == on <var_tag:nullable String(String)>*/
}
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
if (unlikely(varonce27==NULL)) {
var28 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = " (";
var32 = core__flat___NativeString___to_s_full(var31, 2l, 2l);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var28)->values[0]=var30;
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = ")";
var36 = core__flat___NativeString___to_s_full(var35, 1l, 1l);
var34 = var36;
varonce33 = var34;
}
((struct instance_core__NativeArray*)var28)->values[2]=var34;
} else {
var28 = varonce27;
varonce27 = NULL;
}
((struct instance_core__NativeArray*)var28)->values[1]=var_tag;
{
var37 = ((val*(*)(val* self))(var28->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var28); /* native_to_s on <var28:NativeArray[String]>*/
}
varonce27 = var28;
var_tag = var37;
} else {
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "";
var41 = core__flat___NativeString___to_s_full(var40, 0l, 0l);
var39 = var41;
varonce38 = var39;
}
var_tag = var39;
}
{
{ /* Inline toolcontext#Message#location (self) on <self:Message> */
var44 = self->attrs[COLOR_nitc__toolcontext__Message___location].val; /* _location on <self:Message> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
var_l = var42;
if (var_l == NULL) {
var45 = 1; /* is null */
} else {
var45 = 0; /* arg is null but recv is not */
}
if (0) {
var46 = nitc___nitc__Location___core__kernel__Object___61d_61d(var_l, ((val*)NULL));
var45 = var46;
}
if (var45){
if (unlikely(varonce47==NULL)) {
var48 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
} else {
var48 = varonce47;
varonce47 = NULL;
}
{
{ /* Inline toolcontext#Message#text (self) on <self:Message> */
var51 = self->attrs[COLOR_nitc__toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 42);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
((struct instance_core__NativeArray*)var48)->values[0]=var49;
((struct instance_core__NativeArray*)var48)->values[1]=var_tag;
{
var52 = ((val*(*)(val* self))(var48->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var48); /* native_to_s on <var48:NativeArray[String]>*/
}
varonce47 = var48;
var = var52;
goto RET_LABEL;
} else {
{
{ /* Inline location#Location#file (var_l) on <var_l:nullable Location(Location)> */
var55 = var_l->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var_l:nullable Location(Location)> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
if (var53 == NULL) {
var56 = 1; /* is null */
} else {
var56 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var53,((val*)NULL)) on <var53:nullable SourceFile> */
var_other59 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var53,var_other59) on <var53:nullable SourceFile(SourceFile)> */
var62 = var53 == var_other59;
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var57 = var60;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
var56 = var57;
}
if (var56){
if (unlikely(varonce63==NULL)) {
var64 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = ": ";
var68 = core__flat___NativeString___to_s_full(var67, 2l, 2l);
var66 = var68;
varonce65 = var66;
}
((struct instance_core__NativeArray*)var64)->values[3]=var66;
} else {
var64 = varonce63;
varonce63 = NULL;
}
((struct instance_core__NativeArray*)var64)->values[0]=var_yellow;
{
var69 = ((val*(*)(val* self))(var_l->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_l); /* to_s on <var_l:nullable Location(Location)>*/
}
((struct instance_core__NativeArray*)var64)->values[1]=var69;
((struct instance_core__NativeArray*)var64)->values[2]=var_def;
{
{ /* Inline toolcontext#Message#text (self) on <self:Message> */
var72 = self->attrs[COLOR_nitc__toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 42);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
((struct instance_core__NativeArray*)var64)->values[4]=var70;
((struct instance_core__NativeArray*)var64)->values[5]=var_tag;
{
var73 = ((val*(*)(val* self))(var64->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var64); /* native_to_s on <var64:NativeArray[String]>*/
}
varonce63 = var64;
var = var73;
goto RET_LABEL;
} else {
if (unlikely(varonce74==NULL)) {
var75 = NEW_core__NativeArray(8l, &type_core__NativeArray__core__String);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = ": ";
var79 = core__flat___NativeString___to_s_full(var78, 2l, 2l);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var75)->values[3]=var77;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "\n";
var83 = core__flat___NativeString___to_s_full(var82, 1l, 1l);
var81 = var83;
varonce80 = var81;
}
((struct instance_core__NativeArray*)var75)->values[6]=var81;
} else {
var75 = varonce74;
varonce74 = NULL;
}
((struct instance_core__NativeArray*)var75)->values[0]=var_yellow;
{
var84 = ((val*(*)(val* self))(var_l->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_l); /* to_s on <var_l:nullable Location(Location)>*/
}
((struct instance_core__NativeArray*)var75)->values[1]=var84;
((struct instance_core__NativeArray*)var75)->values[2]=var_def;
{
{ /* Inline toolcontext#Message#text (self) on <self:Message> */
var87 = self->attrs[COLOR_nitc__toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 42);
fatal_exit(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
((struct instance_core__NativeArray*)var75)->values[4]=var85;
((struct instance_core__NativeArray*)var75)->values[5]=var_tag;
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = "1;31";
var91 = core__flat___NativeString___to_s_full(var90, 4l, 4l);
var89 = var91;
varonce88 = var89;
}
{
var92 = nitc___nitc__Location___colored_line(var_l, var89);
}
((struct instance_core__NativeArray*)var75)->values[7]=var92;
{
var93 = ((val*(*)(val* self))(var75->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var75); /* native_to_s on <var75:NativeArray[String]>*/
}
varonce74 = var75;
var = var93;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method toolcontext#Message#init for (self: Message) */
void nitc___nitc__Message___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__Message___core__kernel__Object__init]))(self); /* init on <self:Message>*/
}
RET_LABEL:;
}
/* method toolcontext#Location#messages for (self: Location): nullable Array[Message] */
val* nitc__toolcontext___Location___messages(val* self) {
val* var /* : nullable Array[Message] */;
val* var1 /* : nullable Array[Message] */;
var1 = self->attrs[COLOR_nitc__toolcontext__Location___messages].val; /* _messages on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Location#messages= for (self: Location, nullable Array[Message]) */
void nitc__toolcontext___Location___messages_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__toolcontext__Location___messages].val = p0; /* _messages on <self:Location> */
RET_LABEL:;
}
/* method toolcontext#Location#add_message for (self: Location, Message) */
void nitc__toolcontext___Location___add_message(val* self, val* p0) {
val* var_m /* var m: Message */;
val* var /* : nullable Array[Message] */;
val* var2 /* : nullable Array[Message] */;
val* var_ms /* var ms: nullable Array[Message] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Array[Message] */;
var_m = p0;
{
{ /* Inline toolcontext#Location#messages (self) on <self:Location> */
var2 = self->attrs[COLOR_nitc__toolcontext__Location___messages].val; /* _messages on <self:Location> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_ms = var;
if (var_ms == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
var4 = core___core__Array___core__kernel__Object___61d_61d(var_ms, ((val*)NULL));
var3 = var4;
}
if (var3){
var5 = NEW_core__Array(&type_core__Array__nitc__Message);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[Message]>*/
}
var_ms = var5;
{
{ /* Inline toolcontext#Location#messages= (self,var_ms) on <self:Location> */
self->attrs[COLOR_nitc__toolcontext__Location___messages].val = var_ms; /* _messages on <self:Location> */
RET_LABEL6:(void)0;
}
}
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_ms, var_m); /* Direct call array#Array#add on <var_ms:nullable Array[Message](Array[Message])>*/
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#error_count for (self: ToolContext): Int */
long nitc___nitc__ToolContext___error_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#error_count= for (self: ToolContext, Int) */
void nitc___nitc__ToolContext___error_count_61d(val* self, long p0) {
self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l = p0; /* _error_count on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#warning_count for (self: ToolContext): Int */
long nitc___nitc__ToolContext___warning_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#warning_count= for (self: ToolContext, Int) */
void nitc___nitc__ToolContext___warning_count_61d(val* self, long p0) {
self->attrs[COLOR_nitc__toolcontext__ToolContext___warning_count].l = p0; /* _warning_count on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#log_directory for (self: ToolContext): String */
val* nitc___nitc__ToolContext___log_directory(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___log_directory].val; /* _log_directory on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _log_directory");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 137);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#log_directory= for (self: ToolContext, String) */
void nitc___nitc__ToolContext___log_directory_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__toolcontext__ToolContext___log_directory].val = p0; /* _log_directory on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#log_info for (self: ToolContext): nullable Writer */
val* nitc___nitc__ToolContext___log_info(val* self) {
val* var /* : nullable Writer */;
val* var1 /* : nullable Writer */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___log_info].val; /* _log_info on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#log_info= for (self: ToolContext, nullable Writer) */
void nitc___nitc__ToolContext___log_info_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__toolcontext__ToolContext___log_info].val = p0; /* _log_info on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#messages for (self: ToolContext): Array[Message] */
val* nitc___nitc__ToolContext___messages(val* self) {
val* var /* : Array[Message] */;
val* var1 /* : Array[Message] */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 143);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#message_sorter for (self: ToolContext): Comparator */
val* nitc___nitc__ToolContext___message_sorter(val* self) {
val* var /* : Comparator */;
val* var1 /* : Comparator */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___message_sorter].val; /* _message_sorter on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message_sorter");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 145);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#keep_going for (self: ToolContext): Bool */
short int nitc___nitc__ToolContext___keep_going(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___keep_going].s; /* _keep_going on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#keep_going= for (self: ToolContext, Bool) */
void nitc___nitc__ToolContext___keep_going_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__toolcontext__ToolContext___keep_going].s = p0; /* _keep_going on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#warning_blacklist for (self: ToolContext): MultiHashMap[SourceFile, String] */
val* nitc___nitc__ToolContext___warning_blacklist(val* self) {
val* var /* : MultiHashMap[SourceFile, String] */;
val* var1 /* : MultiHashMap[SourceFile, String] */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___warning_blacklist].val; /* _warning_blacklist on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _warning_blacklist");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 153);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#is_warning_blacklisted for (self: ToolContext, nullable Location, String): Bool */
short int nitc___nitc__ToolContext___is_warning_blacklisted(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_l /* var l: nullable Location */;
val* var_tag /* var tag: String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable SourceFile */;
val* var5 /* : nullable SourceFile */;
val* var_f /* var f: nullable SourceFile */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MultiHashMap[SourceFile, String] */;
val* var14 /* : MultiHashMap[SourceFile, String] */;
val* var15 /* : nullable Object */;
val* var_tags /* var tags: nullable Array[String] */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
static val* varonce;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : String */;
short int var22 /* : Bool */;
short int var_ /* var : Bool */;
short int var23 /* : Bool */;
var_l = p0;
var_tag = p1;
if (var_l == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = nitc___nitc__Location___core__kernel__Object___61d_61d(var_l, ((val*)NULL));
var1 = var2;
}
if (var1){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#file (var_l) on <var_l:nullable Location(Location)> */
var5 = var_l->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var_l:nullable Location(Location)> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_f = var3;
if (var_f == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_f,((val*)NULL)) on <var_f:nullable SourceFile> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_f,var_other) on <var_f:nullable SourceFile(SourceFile)> */
var11 = var_f == var_other;
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
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext#ToolContext#warning_blacklist (self) on <self:ToolContext> */
var14 = self->attrs[COLOR_nitc__toolcontext__ToolContext___warning_blacklist].val; /* _warning_blacklist on <self:ToolContext> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _warning_blacklist");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 153);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var12, var_f);
}
var_tags = var15;
if (var_tags == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (0) {
var17 = core___core__Array___core__kernel__Object___61d_61d(var_tags, ((val*)NULL));
var16 = var17;
}
if (var16){
var = 0;
goto RET_LABEL;
} else {
}
if (likely(varonce!=NULL)) {
var19 = varonce;
} else {
var20 = "all";
var21 = core__flat___NativeString___to_s_full(var20, 3l, 3l);
var19 = var21;
varonce = var19;
}
{
var22 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_tags, var19);
}
var_ = var22;
if (var22){
var18 = var_;
} else {
{
var23 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_tags, var_tag);
}
var18 = var23;
}
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#quit for (self: ToolContext) */
void nitc___nitc__ToolContext___quit(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
val* var8 /* : Sys */;
val* var10 /* : Sys */;
{
var = nitc___nitc__ToolContext___check_errors(self);
}
{
nitc___nitc__ToolContext___errors_info(self); /* Direct call toolcontext#ToolContext#errors_info on <self:ToolContext>*/
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var7 = var1 > 0l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
var8 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var8,1l) on <var8:Sys> */
exit(1l);
RET_LABEL9:(void)0;
}
}
} else {
var10 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var10,0l) on <var10:Sys> */
exit(0l);
RET_LABEL11:(void)0;
}
}
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#check_errors for (self: ToolContext): Bool */
short int nitc___nitc__ToolContext___check_errors(val* self) {
short int var /* : Bool */;
val* var1 /* : Array[Message] */;
val* var3 /* : Array[Message] */;
long var4 /* : Int */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : Comparator */;
val* var13 /* : Comparator */;
val* var14 /* : Array[Message] */;
val* var16 /* : Array[Message] */;
val* var17 /* : Array[Message] */;
val* var19 /* : Array[Message] */;
val* var_ /* var : Array[Message] */;
val* var20 /* : IndexedIterator[nullable Object] */;
val* var_21 /* var : IndexedIterator[Message] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_m /* var m: Message */;
val* var24 /* : OptionBool */;
val* var26 /* : OptionBool */;
val* var27 /* : nullable Object */;
val* var29 /* : nullable Object */;
short int var30 /* : Bool */;
val* var31 /* : Sys */;
val* var33 /* : Sys */;
val* var34 /* : Writer */;
val* var35 /* : NativeArray[String] */;
static val* varonce;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : String */;
val* var40 /* : String */;
val* var41 /* : String */;
val* var42 /* : Sys */;
val* var44 /* : Sys */;
val* var45 /* : Writer */;
val* var47 /* : NativeArray[String] */;
static val* varonce46;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
val* var51 /* : String */;
val* var52 /* : String */;
val* var53 /* : String */;
val* var54 /* : Array[Message] */;
val* var56 /* : Array[Message] */;
long var57 /* : Int */;
long var59 /* : Int */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
val* var71 /* : Sys */;
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 143);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var1) on <var1:Array[Message]> */
var6 = var1->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var1:Array[Message]> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var4,0l) on <var4:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var10 = var4 > 0l;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
{ /* Inline toolcontext#ToolContext#message_sorter (self) on <self:ToolContext> */
var13 = self->attrs[COLOR_nitc__toolcontext__ToolContext___message_sorter].val; /* _message_sorter on <self:ToolContext> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message_sorter");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 145);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var16 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 143);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
core___core__Comparator___sort(var11, var14); /* Direct call sorter#Comparator#sort on <var11:Comparator>*/
}
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var19 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 143);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_ = var17;
{
var20 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_21 = var20;
for(;;) {
{
var22 = ((short int(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_21); /* is_ok on <var_21:IndexedIterator[Message]>*/
}
if (var22){
} else {
goto BREAK_label;
}
{
var23 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_21); /* item on <var_21:IndexedIterator[Message]>*/
}
var_m = var23;
{
{ /* Inline toolcontext#ToolContext#opt_no_color (self) on <self:ToolContext> */
var26 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_no_color].val; /* _opt_no_color on <self:ToolContext> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_color");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 381);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline opts#Option#value (var24) on <var24:OptionBool> */
var29 = var24->attrs[COLOR_opts__Option___value].val; /* _value on <var24:OptionBool> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var30 = (short int)((long)(var27)>>2);
if (var30){
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var33 = glob_sys;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
var34 = core__file___Sys___stderr(var31);
}
if (unlikely(varonce==NULL)) {
var35 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "\n";
var39 = core__flat___NativeString___to_s_full(var38, 1l, 1l);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var35)->values[1]=var37;
} else {
var35 = varonce;
varonce = NULL;
}
{
var40 = ((val*(*)(val* self))(var_m->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_m); /* to_s on <var_m:Message>*/
}
((struct instance_core__NativeArray*)var35)->values[0]=var40;
{
var41 = ((val*(*)(val* self))(var35->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var35); /* native_to_s on <var35:NativeArray[String]>*/
}
varonce = var35;
{
core___core__FileWriter___core__stream__Writer__write(var34, var41); /* Direct call file#FileWriter#write on <var34:Writer>*/
}
} else {
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var44 = glob_sys;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
{
var45 = core__file___Sys___stderr(var42);
}
if (unlikely(varonce46==NULL)) {
var47 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "\n";
var51 = core__flat___NativeString___to_s_full(var50, 1l, 1l);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var47)->values[1]=var49;
} else {
var47 = varonce46;
varonce46 = NULL;
}
{
var52 = nitc___nitc__Message___to_color_string(var_m);
}
((struct instance_core__NativeArray*)var47)->values[0]=var52;
{
var53 = ((val*(*)(val* self))(var47->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var47); /* native_to_s on <var47:NativeArray[String]>*/
}
varonce46 = var47;
{
core___core__FileWriter___core__stream__Writer__write(var45, var53); /* Direct call file#FileWriter#write on <var45:Writer>*/
}
}
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_21); /* next on <var_21:IndexedIterator[Message]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_21); /* finish on <var_21:IndexedIterator[Message]>*/
}
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var56 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 143);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var54); /* Direct call array#AbstractArray#clear on <var54:Array[Message]>*/
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var59 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var57,0l) on <var57:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var62 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var62)) {
var_class_name65 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 730);
fatal_exit(1);
}
var66 = var57 > 0l;
var60 = var66;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
if (var60){
{
{ /* Inline toolcontext#ToolContext#keep_going (self) on <self:ToolContext> */
var69 = self->attrs[COLOR_nitc__toolcontext__ToolContext___keep_going].s; /* _keep_going on <self:ToolContext> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
var70 = !var67;
if (var70){
{
nitc___nitc__ToolContext___errors_info(self); /* Direct call toolcontext#ToolContext#errors_info on <self:ToolContext>*/
}
var71 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var71,1l) on <var71:Sys> */
exit(1l);
RET_LABEL72:(void)0;
}
}
} else {
}
var = 0;
goto RET_LABEL;
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#errors_info for (self: ToolContext) */
void nitc___nitc__ToolContext___errors_info(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var_ /* var : Bool */;
long var7 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : OptionBool */;
val* var15 /* : OptionBool */;
val* var16 /* : nullable Object */;
val* var18 /* : nullable Object */;
short int var19 /* : Bool */;
val* var20 /* : Sys */;
val* var22 /* : Sys */;
val* var23 /* : Writer */;
val* var24 /* : NativeArray[String] */;
static val* varonce;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : String */;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
val* var36 /* : String */;
long var37 /* : Int */;
long var39 /* : Int */;
val* var40 /* : String */;
long var41 /* : Int */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : String */;
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var1,0l) on <var1:Int> */
var6 = var1 == 0l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_ = var4;
if (var4){
{
{ /* Inline toolcontext#ToolContext#warning_count (self) on <self:ToolContext> */
var9 = self->attrs[COLOR_nitc__toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var7,0l) on <var7:Int> */
var12 = var7 == 0l;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var = var10;
} else {
var = var_;
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_no_color (self) on <self:ToolContext> */
var15 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_no_color].val; /* _opt_no_color on <self:ToolContext> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_color");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 381);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline opts#Option#value (var13) on <var13:OptionBool> */
var18 = var13->attrs[COLOR_opts__Option___value].val; /* _value on <var13:OptionBool> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var19 = (short int)((long)(var16)>>2);
if (var19){
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var22 = glob_sys;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
var23 = core__file___Sys___stderr(var20);
}
if (unlikely(varonce==NULL)) {
var24 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Errors: ";
var28 = core__flat___NativeString___to_s_full(var27, 8l, 8l);
var26 = var28;
varonce25 = var26;
}
((struct instance_core__NativeArray*)var24)->values[0]=var26;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = ". Warnings: ";
var32 = core__flat___NativeString___to_s_full(var31, 12l, 12l);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var24)->values[2]=var30;
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = ".\n";
var36 = core__flat___NativeString___to_s_full(var35, 2l, 2l);
var34 = var36;
varonce33 = var34;
}
((struct instance_core__NativeArray*)var24)->values[4]=var34;
} else {
var24 = varonce;
varonce = NULL;
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var39 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var40 = core__flat___Int___core__abstract_text__Object__to_s(var37);
((struct instance_core__NativeArray*)var24)->values[1]=var40;
{
{ /* Inline toolcontext#ToolContext#warning_count (self) on <self:ToolContext> */
var43 = self->attrs[COLOR_nitc__toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
var44 = core__flat___Int___core__abstract_text__Object__to_s(var41);
((struct instance_core__NativeArray*)var24)->values[3]=var44;
{
var45 = ((val*(*)(val* self))(var24->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var24); /* native_to_s on <var24:NativeArray[String]>*/
}
varonce = var24;
{
core___core__FileWriter___core__stream__Writer__write(var23, var45); /* Direct call file#FileWriter#write on <var23:Writer>*/
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#error for (self: ToolContext, nullable Location, String): Message */
val* nitc___nitc__ToolContext___error(val* self, val* p0, val* p1) {
val* var /* : Message */;
val* var_l /* var l: nullable Location */;
val* var_s /* var s: String */;
val* var1 /* : Message */;
val* var_m /* var m: Message */;
val* var2 /* : Array[Message] */;
val* var4 /* : Array[Message] */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : Array[Message] */;
val* var13 /* : Array[Message] */;
long var14 /* : Int */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var20 /* : Int */;
val* var22 /* : OptionBool */;
val* var24 /* : OptionBool */;
val* var25 /* : nullable Object */;
val* var27 /* : nullable Object */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
var_l = p0;
var_s = p1;
var1 = NEW_nitc__Message(&type_nitc__Message);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__toolcontext__Message__location_61d]))(var1, var_l); /* location= on <var1:Message>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__toolcontext__Message__tag_61d]))(var1, ((val*)NULL)); /* tag= on <var1:Message>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__toolcontext__Message__text_61d]))(var1, var_s); /* text= on <var1:Message>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Message>*/
}
var_m = var1;
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var4 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 143);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var2, var_m);
}
if (var5){
var = var_m;
goto RET_LABEL;
} else {
}
if (var_l == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_l,((val*)NULL)) on <var_l:nullable Location> */
var_other = ((val*)NULL);
{
var9 = ((short int(*)(val* self, val* p0))(var_l->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_l, var_other); /* == on <var_l:nullable Location(Location)>*/
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
nitc__toolcontext___Location___add_message(var_l, var_m); /* Direct call toolcontext#Location#add_message on <var_l:nullable Location(Location)>*/
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var13 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 143);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var11, var_m); /* Direct call array#Array#add on <var11:Array[Message]>*/
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var16 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var14,1l) on <var14:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var20 = var14 + 1l;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count= (self,var17) on <self:ToolContext> */
self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l = var17; /* _error_count on <self:ToolContext> */
RET_LABEL21:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_stop_on_first_error (self) on <self:ToolContext> */
var24 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 375);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline opts#Option#value (var22) on <var22:OptionBool> */
var27 = var22->attrs[COLOR_opts__Option___value].val; /* _value on <var22:OptionBool> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
var28 = (short int)((long)(var25)>>2);
if (var28){
{
var29 = nitc___nitc__ToolContext___check_errors(self);
}
} else {
}
var = var_m;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#fatal_error for (self: ToolContext, nullable Location, String) */
void nitc___nitc__ToolContext___fatal_error(val* self, val* p0, val* p1) {
val* var_l /* var l: nullable Location */;
val* var_s /* var s: String */;
val* var /* : Message */;
short int var1 /* : Bool */;
var_l = p0;
var_s = p1;
{
var = nitc___nitc__ToolContext___error(self, var_l, var_s);
}
{
var1 = nitc___nitc__ToolContext___check_errors(self);
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#warning for (self: ToolContext, nullable Location, String, String): nullable Message */
val* nitc___nitc__ToolContext___warning(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable Message */;
val* var_l /* var l: nullable Location */;
val* var_tag /* var tag: String */;
val* var_text /* var text: String */;
val* var1 /* : OptionArray */;
val* var3 /* : OptionArray */;
val* var4 /* : nullable Object */;
val* var6 /* : nullable Object */;
val* var7 /* : NativeArray[String] */;
static val* varonce;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
val* var12 /* : String */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : OptionArray */;
val* var17 /* : OptionArray */;
val* var18 /* : nullable Object */;
val* var20 /* : nullable Object */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var_ /* var : Bool */;
val* var23 /* : OptionCount */;
val* var25 /* : OptionCount */;
val* var26 /* : nullable Object */;
val* var28 /* : nullable Object */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
long var32 /* : Int */;
short int var33 /* : Bool */;
val* var34 /* : Message */;
val* var_m /* var m: Message */;
val* var35 /* : Array[Message] */;
val* var37 /* : Array[Message] */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : Array[Message] */;
val* var46 /* : Array[Message] */;
long var47 /* : Int */;
long var49 /* : Int */;
long var50 /* : Int */;
short int var52 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var53 /* : Int */;
val* var55 /* : OptionBool */;
val* var57 /* : OptionBool */;
val* var58 /* : nullable Object */;
val* var60 /* : nullable Object */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
var_l = p0;
var_tag = p1;
var_text = p2;
{
{ /* Inline toolcontext#ToolContext#opt_warning (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 348);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline opts#Option#value (var1) on <var1:OptionArray> */
var6 = var1->attrs[COLOR_opts__Option___value].val; /* _value on <var1:OptionArray> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var7 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "no-";
var11 = core__flat___NativeString___to_s_full(var10, 3l, 3l);
var9 = var11;
varonce8 = var9;
}
((struct instance_core__NativeArray*)var7)->values[0]=var9;
} else {
var7 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var7)->values[1]=var_tag;
{
var12 = ((val*(*)(val* self))(var7->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var7); /* native_to_s on <var7:NativeArray[String]>*/
}
varonce = var7;
{
var13 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var4, var12);
}
if (var13){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_warning (self) on <self:ToolContext> */
var17 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 348);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline opts#Option#value (var15) on <var15:OptionArray> */
var20 = var15->attrs[COLOR_opts__Option___value].val; /* _value on <var15:OptionArray> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var18, var_tag);
}
var22 = !var21;
var_ = var22;
if (var22){
{
{ /* Inline toolcontext#ToolContext#opt_warn (self) on <self:ToolContext> */
var25 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 345);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline opts#Option#value (var23) on <var23:OptionCount> */
var28 = var23->attrs[COLOR_opts__Option___value].val; /* _value on <var23:OptionCount> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var26,0l) on <var26:nullable Object(Int)> */
var32 = (long)(var26)>>2;
var31 = var32 == 0l;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var14 = var29;
} else {
var14 = var_;
}
if (var14){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var33 = nitc___nitc__ToolContext___is_warning_blacklisted(self, var_l, var_tag);
}
if (var33){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var34 = NEW_nitc__Message(&type_nitc__Message);
{
((void(*)(val* self, val* p0))(var34->class->vft[COLOR_nitc__toolcontext__Message__location_61d]))(var34, var_l); /* location= on <var34:Message>*/
}
{
((void(*)(val* self, val* p0))(var34->class->vft[COLOR_nitc__toolcontext__Message__tag_61d]))(var34, var_tag); /* tag= on <var34:Message>*/
}
{
((void(*)(val* self, val* p0))(var34->class->vft[COLOR_nitc__toolcontext__Message__text_61d]))(var34, var_text); /* text= on <var34:Message>*/
}
{
((void(*)(val* self))(var34->class->vft[COLOR_core__kernel__Object__init]))(var34); /* init on <var34:Message>*/
}
var_m = var34;
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var37 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 143);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var35, var_m);
}
if (var38){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (var_l == NULL) {
var39 = 0; /* is null */
} else {
var39 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_l,((val*)NULL)) on <var_l:nullable Location> */
var_other = ((val*)NULL);
{
var42 = ((short int(*)(val* self, val* p0))(var_l->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_l, var_other); /* == on <var_l:nullable Location(Location)>*/
}
var43 = !var42;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var39 = var40;
}
if (var39){
{
nitc__toolcontext___Location___add_message(var_l, var_m); /* Direct call toolcontext#Location#add_message on <var_l:nullable Location(Location)>*/
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var46 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 143);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var44, var_m); /* Direct call array#Array#add on <var44:Array[Message]>*/
}
{
{ /* Inline toolcontext#ToolContext#warning_count (self) on <self:ToolContext> */
var49 = self->attrs[COLOR_nitc__toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var47,1l) on <var47:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var52 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var53 = var47 + 1l;
var50 = var53;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#warning_count= (self,var50) on <self:ToolContext> */
self->attrs[COLOR_nitc__toolcontext__ToolContext___warning_count].l = var50; /* _warning_count on <self:ToolContext> */
RET_LABEL54:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_stop_on_first_error (self) on <self:ToolContext> */
var57 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 375);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline opts#Option#value (var55) on <var55:OptionBool> */
var60 = var55->attrs[COLOR_opts__Option___value].val; /* _value on <var55:OptionBool> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
var61 = (short int)((long)(var58)>>2);
if (var61){
{
var62 = nitc___nitc__ToolContext___check_errors(self);
}
} else {
}
var = var_m;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#advice for (self: ToolContext, nullable Location, String, String): nullable Message */
val* nitc___nitc__ToolContext___advice(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable Message */;
val* var_l /* var l: nullable Location */;
val* var_tag /* var tag: String */;
val* var_text /* var text: String */;
val* var1 /* : OptionArray */;
val* var3 /* : OptionArray */;
val* var4 /* : nullable Object */;
val* var6 /* : nullable Object */;
val* var7 /* : NativeArray[String] */;
static val* varonce;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
val* var11 /* : String */;
val* var12 /* : String */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : OptionArray */;
val* var17 /* : OptionArray */;
val* var18 /* : nullable Object */;
val* var20 /* : nullable Object */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var_ /* var : Bool */;
val* var23 /* : OptionCount */;
val* var25 /* : OptionCount */;
val* var26 /* : nullable Object */;
val* var28 /* : nullable Object */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var32 /* : Int */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : Message */;
val* var_m /* var m: Message */;
val* var36 /* : Array[Message] */;
val* var38 /* : Array[Message] */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var45 /* : Array[Message] */;
val* var47 /* : Array[Message] */;
long var48 /* : Int */;
long var50 /* : Int */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype54;
int idtype55;
const char* var_class_name56;
long var57 /* : Int */;
val* var59 /* : OptionBool */;
val* var61 /* : OptionBool */;
val* var62 /* : nullable Object */;
val* var64 /* : nullable Object */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
var_l = p0;
var_tag = p1;
var_text = p2;
{
{ /* Inline toolcontext#ToolContext#opt_warning (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 348);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline opts#Option#value (var1) on <var1:OptionArray> */
var6 = var1->attrs[COLOR_opts__Option___value].val; /* _value on <var1:OptionArray> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var7 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "no-";
var11 = core__flat___NativeString___to_s_full(var10, 3l, 3l);
var9 = var11;
varonce8 = var9;
}
((struct instance_core__NativeArray*)var7)->values[0]=var9;
} else {
var7 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var7)->values[1]=var_tag;
{
var12 = ((val*(*)(val* self))(var7->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var7); /* native_to_s on <var7:NativeArray[String]>*/
}
varonce = var7;
{
var13 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var4, var12);
}
if (var13){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_warning (self) on <self:ToolContext> */
var17 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 348);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline opts#Option#value (var15) on <var15:OptionArray> */
var20 = var15->attrs[COLOR_opts__Option___value].val; /* _value on <var15:OptionArray> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var18, var_tag);
}
var22 = !var21;
var_ = var22;
if (var22){
{
{ /* Inline toolcontext#ToolContext#opt_warn (self) on <self:ToolContext> */
var25 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 345);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline opts#Option#value (var23) on <var23:OptionCount> */
var28 = var23->attrs[COLOR_opts__Option___value].val; /* _value on <var23:OptionCount> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var26,1l) on <var26:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var32 = (long)(var26)>>2;
var33 = var32 <= 1l;
var29 = var33;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var14 = var29;
} else {
var14 = var_;
}
if (var14){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var34 = nitc___nitc__ToolContext___is_warning_blacklisted(self, var_l, var_tag);
}
if (var34){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var35 = NEW_nitc__Message(&type_nitc__Message);
{
((void(*)(val* self, val* p0))(var35->class->vft[COLOR_nitc__toolcontext__Message__location_61d]))(var35, var_l); /* location= on <var35:Message>*/
}
{
((void(*)(val* self, val* p0))(var35->class->vft[COLOR_nitc__toolcontext__Message__tag_61d]))(var35, var_tag); /* tag= on <var35:Message>*/
}
{
((void(*)(val* self, val* p0))(var35->class->vft[COLOR_nitc__toolcontext__Message__text_61d]))(var35, var_text); /* text= on <var35:Message>*/
}
{
((void(*)(val* self))(var35->class->vft[COLOR_core__kernel__Object__init]))(var35); /* init on <var35:Message>*/
}
var_m = var35;
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var38 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 143);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var36, var_m);
}
if (var39){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (var_l == NULL) {
var40 = 0; /* is null */
} else {
var40 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_l,((val*)NULL)) on <var_l:nullable Location> */
var_other = ((val*)NULL);
{
var43 = ((short int(*)(val* self, val* p0))(var_l->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_l, var_other); /* == on <var_l:nullable Location(Location)>*/
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
nitc__toolcontext___Location___add_message(var_l, var_m); /* Direct call toolcontext#Location#add_message on <var_l:nullable Location(Location)>*/
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var47 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 143);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var45, var_m); /* Direct call array#Array#add on <var45:Array[Message]>*/
}
{
{ /* Inline toolcontext#ToolContext#warning_count (self) on <self:ToolContext> */
var50 = self->attrs[COLOR_nitc__toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var48,1l) on <var48:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var53 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name56 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name56);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var57 = var48 + 1l;
var51 = var57;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#warning_count= (self,var51) on <self:ToolContext> */
self->attrs[COLOR_nitc__toolcontext__ToolContext___warning_count].l = var51; /* _warning_count on <self:ToolContext> */
RET_LABEL58:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_stop_on_first_error (self) on <self:ToolContext> */
var61 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 375);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline opts#Option#value (var59) on <var59:OptionBool> */
var64 = var59->attrs[COLOR_opts__Option___value].val; /* _value on <var59:OptionBool> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
var65 = (short int)((long)(var62)>>2);
if (var65){
{
var66 = nitc___nitc__ToolContext___check_errors(self);
}
} else {
}
var = var_m;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#info for (self: ToolContext, String, Int) */
void nitc___nitc__ToolContext___info(val* self, val* p0, long p1) {
val* var_s /* var s: String */;
long var_level /* var level: Int */;
long var /* : Int */;
long var2 /* : Int */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var6 /* : Bool */;
val* var7 /* : Sys */;
val* var8 /* : NativeArray[String] */;
static val* varonce;
val* var9 /* : String */;
val* var10 /* : nullable Writer */;
val* var12 /* : nullable Writer */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable Writer */;
val* var20 /* : nullable Writer */;
val* var21 /* : nullable Writer */;
val* var23 /* : nullable Writer */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
var_s = p0;
var_level = p1;
{
{ /* Inline toolcontext#ToolContext#verbose_level (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__toolcontext__ToolContext___verbose_level].l; /* _verbose_level on <self:ToolContext> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var_level,var) on <var_level:Int> */
/* Covariant cast for argument 0 (i) <var:Int> isa OTHER */
/* <var:Int> isa OTHER */
var5 = 1; /* easy <var:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var6 = var_level <= var;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var7 = glob_sys;
if (unlikely(varonce==NULL)) {
var8 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__String);
} else {
var8 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var8)->values[0]=var_s;
{
var9 = ((val*(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce = var8;
{
core__file___Sys___print(var7, var9); /* Direct call file#Sys#print on <var7:Sys>*/
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#log_info (self) on <self:ToolContext> */
var12 = self->attrs[COLOR_nitc__toolcontext__ToolContext___log_info].val; /* _log_info on <self:ToolContext> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
var13 = 0; /* is null */
} else {
var13 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var10,((val*)NULL)) on <var10:nullable Writer> */
var_other = ((val*)NULL);
{
var16 = ((short int(*)(val* self, val* p0))(var10->class->vft[COLOR_core__kernel__Object___61d_61d]))(var10, var_other); /* == on <var10:nullable Writer(Writer)>*/
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
{ /* Inline toolcontext#ToolContext#log_info (self) on <self:ToolContext> */
var20 = self->attrs[COLOR_nitc__toolcontext__ToolContext___log_info].val; /* _log_info on <self:ToolContext> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 308);
fatal_exit(1);
} else {
core___core__FileWriter___core__stream__Writer__write(var18, var_s); /* Direct call file#FileWriter#write on <var18:nullable Writer>*/
}
{
{ /* Inline toolcontext#ToolContext#log_info (self) on <self:ToolContext> */
var23 = self->attrs[COLOR_nitc__toolcontext__ToolContext___log_info].val; /* _log_info on <self:ToolContext> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "\n";
var27 = core__flat___NativeString___to_s_full(var26, 1l, 1l);
var25 = var27;
varonce24 = var25;
}
if (var21 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 309);
fatal_exit(1);
} else {
core___core__FileWriter___core__stream__Writer__write(var21, var25); /* Direct call file#FileWriter#write on <var21:nullable Writer>*/
}
} else {
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#option_context for (self: ToolContext): OptionContext */
val* nitc___nitc__ToolContext___option_context(val* self) {
val* var /* : OptionContext */;
val* var1 /* : OptionContext */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 342);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_warn for (self: ToolContext): OptionCount */
val* nitc___nitc__ToolContext___opt_warn(val* self) {
val* var /* : OptionCount */;
val* var1 /* : OptionCount */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 345);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_warning for (self: ToolContext): OptionArray */
val* nitc___nitc__ToolContext___opt_warning(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 348);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_quiet for (self: ToolContext): OptionBool */
val* nitc___nitc__ToolContext___opt_quiet(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_quiet].val; /* _opt_quiet on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_quiet");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 351);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_log for (self: ToolContext): OptionBool */
val* nitc___nitc__ToolContext___opt_log(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_log].val; /* _opt_log on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 354);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_log_dir for (self: ToolContext): OptionString */
val* nitc___nitc__ToolContext___opt_log_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_log_dir].val; /* _opt_log_dir on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_nit_dir for (self: ToolContext): OptionString */
val* nitc___nitc__ToolContext___opt_nit_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_nit_dir].val; /* _opt_nit_dir on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_nit_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 360);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_help for (self: ToolContext): OptionBool */
val* nitc___nitc__ToolContext___opt_help(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_help].val; /* _opt_help on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_help");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 363);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_version for (self: ToolContext): OptionBool */
val* nitc___nitc__ToolContext___opt_version(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_version].val; /* _opt_version on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_version");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 366);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_set_dummy_tool for (self: ToolContext): OptionBool */
val* nitc___nitc__ToolContext___opt_set_dummy_tool(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 369);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_verbose for (self: ToolContext): OptionCount */
val* nitc___nitc__ToolContext___opt_verbose(val* self) {
val* var /* : OptionCount */;
val* var1 /* : OptionCount */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_verbose].val; /* _opt_verbose on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_verbose");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 372);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_stop_on_first_error for (self: ToolContext): OptionBool */
val* nitc___nitc__ToolContext___opt_stop_on_first_error(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 375);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_keep_going for (self: ToolContext): OptionBool */
val* nitc___nitc__ToolContext___opt_keep_going(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_keep_going].val; /* _opt_keep_going on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_keep_going");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 378);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_no_color for (self: ToolContext): OptionBool */
val* nitc___nitc__ToolContext___opt_no_color(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_no_color].val; /* _opt_no_color on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_color");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 381);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_bash_completion for (self: ToolContext): OptionBool */
val* nitc___nitc__ToolContext___opt_bash_completion(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_bash_completion].val; /* _opt_bash_completion on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_bash_completion");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 384);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_stub_man for (self: ToolContext): OptionBool */
val* nitc___nitc__ToolContext___opt_stub_man(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_stub_man].val; /* _opt_stub_man on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stub_man");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 387);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#verbose_level for (self: ToolContext): Int */
long nitc___nitc__ToolContext___verbose_level(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___verbose_level].l; /* _verbose_level on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#verbose_level= for (self: ToolContext, Int) */
void nitc___nitc__ToolContext___verbose_level_61d(val* self, long p0) {
self->attrs[COLOR_nitc__toolcontext__ToolContext___verbose_level].l = p0; /* _verbose_level on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#init for (self: ToolContext) */
void nitc___nitc__ToolContext___core__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionCount */;
val* var5 /* : OptionCount */;
val* var6 /* : OptionArray */;
val* var8 /* : OptionArray */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : OptionBool */;
val* var14 /* : OptionBool */;
val* var15 /* : OptionBool */;
val* var17 /* : OptionBool */;
val* var18 /* : OptionBool */;
val* var20 /* : OptionBool */;
val* var21 /* : OptionBool */;
val* var23 /* : OptionBool */;
val* var24 /* : OptionString */;
val* var26 /* : OptionString */;
val* var27 /* : OptionString */;
val* var29 /* : OptionString */;
val* var30 /* : OptionBool */;
val* var32 /* : OptionBool */;
val* var33 /* : OptionBool */;
val* var35 /* : OptionBool */;
val* var36 /* : OptionBool */;
val* var38 /* : OptionBool */;
val* var39 /* : OptionCount */;
val* var41 /* : OptionCount */;
val* var42 /* : OptionBool */;
val* var44 /* : OptionBool */;
val* var45 /* : OptionBool */;
val* var47 /* : OptionBool */;
val* var48 /* : Array[Option] */;
val* var49 /* : NativeArray[Option] */;
val* var50 /* : OptionBool */;
val* var52 /* : OptionBool */;
val* var54 /* : OptionBool */;
val* var56 /* : OptionBool */;
val* var58 /* : OptionBool */;
val* var60 /* : OptionBool */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__ToolContext___core__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 342);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_warn (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 345);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_warning (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 348);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_quiet (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_quiet].val; /* _opt_quiet on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_quiet");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 351);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_stop_on_first_error (self) on <self:ToolContext> */
var14 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 375);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_keep_going (self) on <self:ToolContext> */
var17 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_keep_going].val; /* _opt_keep_going on <self:ToolContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_keep_going");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 378);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_no_color (self) on <self:ToolContext> */
var20 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_no_color].val; /* _opt_no_color on <self:ToolContext> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_color");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 381);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_log (self) on <self:ToolContext> */
var23 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_log].val; /* _opt_log on <self:ToolContext> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 354);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_log_dir (self) on <self:ToolContext> */
var26 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_log_dir].val; /* _opt_log_dir on <self:ToolContext> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_nit_dir (self) on <self:ToolContext> */
var29 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_nit_dir].val; /* _opt_nit_dir on <self:ToolContext> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_nit_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 360);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_help (self) on <self:ToolContext> */
var32 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_help].val; /* _opt_help on <self:ToolContext> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_help");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 363);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_version (self) on <self:ToolContext> */
var35 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_version].val; /* _opt_version on <self:ToolContext> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_version");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 366);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_set_dummy_tool (self) on <self:ToolContext> */
var38 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:ToolContext> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 369);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_verbose (self) on <self:ToolContext> */
var41 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_verbose].val; /* _opt_verbose on <self:ToolContext> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_verbose");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 372);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_bash_completion (self) on <self:ToolContext> */
var44 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_bash_completion].val; /* _opt_bash_completion on <self:ToolContext> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_bash_completion");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 384);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_stub_man (self) on <self:ToolContext> */
var47 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_stub_man].val; /* _opt_stub_man on <self:ToolContext> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stub_man");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 387);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
var48 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var48 = array_instance Array[Option] */
var49 = NEW_core__NativeArray(15l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var49)->values[0] = (val*) var3;
((struct instance_core__NativeArray*)var49)->values[1] = (val*) var6;
((struct instance_core__NativeArray*)var49)->values[2] = (val*) var9;
((struct instance_core__NativeArray*)var49)->values[3] = (val*) var12;
((struct instance_core__NativeArray*)var49)->values[4] = (val*) var15;
((struct instance_core__NativeArray*)var49)->values[5] = (val*) var18;
((struct instance_core__NativeArray*)var49)->values[6] = (val*) var21;
((struct instance_core__NativeArray*)var49)->values[7] = (val*) var24;
((struct instance_core__NativeArray*)var49)->values[8] = (val*) var27;
((struct instance_core__NativeArray*)var49)->values[9] = (val*) var30;
((struct instance_core__NativeArray*)var49)->values[10] = (val*) var33;
((struct instance_core__NativeArray*)var49)->values[11] = (val*) var36;
((struct instance_core__NativeArray*)var49)->values[12] = (val*) var39;
((struct instance_core__NativeArray*)var49)->values[13] = (val*) var42;
((struct instance_core__NativeArray*)var49)->values[14] = (val*) var45;
{
((void(*)(val* self, val* p0, long p1))(var48->class->vft[COLOR_core__array__Array__with_native]))(var48, var49, 15l); /* with_native on <var48:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var, var48); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#opt_stub_man (self) on <self:ToolContext> */
var52 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_stub_man].val; /* _opt_stub_man on <self:ToolContext> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stub_man");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 387);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline opts#Option#hidden= (var50,1) on <var50:OptionBool> */
var50->attrs[COLOR_opts__Option___hidden].s = 1; /* _hidden on <var50:OptionBool> */
RET_LABEL53:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_bash_completion (self) on <self:ToolContext> */
var56 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_bash_completion].val; /* _opt_bash_completion on <self:ToolContext> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_bash_completion");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 384);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline opts#Option#hidden= (var54,1) on <var54:OptionBool> */
var54->attrs[COLOR_opts__Option___hidden].s = 1; /* _hidden on <var54:OptionBool> */
RET_LABEL57:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_set_dummy_tool (self) on <self:ToolContext> */
var60 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:ToolContext> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 369);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline opts#Option#hidden= (var58,1) on <var58:OptionBool> */
var58->attrs[COLOR_opts__Option___hidden].s = 1; /* _hidden on <var58:OptionBool> */
RET_LABEL61:(void)0;
}
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#tooldescription for (self: ToolContext): String */
val* nitc___nitc__ToolContext___tooldescription(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 403);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#tooldescription= for (self: ToolContext, String) */
void nitc___nitc__ToolContext___tooldescription_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__toolcontext__ToolContext___tooldescription].val = p0; /* _tooldescription on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#accept_no_arguments for (self: ToolContext): Bool */
short int nitc___nitc__ToolContext___accept_no_arguments(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___accept_no_arguments].s; /* _accept_no_arguments on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#usage for (self: ToolContext) */
void nitc___nitc__ToolContext___usage(val* self) {
val* var /* : Sys */;
val* var1 /* : String */;
val* var3 /* : String */;
val* var4 /* : OptionContext */;
val* var6 /* : OptionContext */;
var = glob_sys;
{
{ /* Inline toolcontext#ToolContext#tooldescription (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 403);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
core__file___Sys___print(var, var1); /* Direct call file#Sys#print on <var:Sys>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var6 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 342);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
opts___opts__OptionContext___usage(var4); /* Direct call opts#OptionContext#usage on <var4:OptionContext>*/
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#process_options for (self: ToolContext, Sequence[String]) */
void nitc___nitc__ToolContext___process_options(val* self, val* p0) {
val* var_args /* var args: Sequence[String] */;
val* var /* : OptionCount */;
val* var2 /* : OptionCount */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var5 /* : nullable Object */;
val* var6 /* : OptionContext */;
val* var8 /* : OptionContext */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : nullable Object */;
val* var14 /* : nullable Object */;
short int var15 /* : Bool */;
val* var16 /* : Sys */;
val* var18 /* : OptionBool */;
val* var20 /* : OptionBool */;
val* var21 /* : nullable Object */;
val* var23 /* : nullable Object */;
short int var24 /* : Bool */;
val* var25 /* : Sys */;
val* var26 /* : String */;
val* var27 /* : Sys */;
val* var29 /* : OptionBool */;
val* var31 /* : OptionBool */;
val* var32 /* : nullable Object */;
val* var34 /* : nullable Object */;
short int var35 /* : Bool */;
val* var36 /* : BashCompletion */;
val* var_bash_completion /* var bash_completion: BashCompletion */;
val* var37 /* : Sys */;
val* var39 /* : Sys */;
val* var40 /* : Writer */;
val* var41 /* : Sys */;
val* var43 /* : OptionBool */;
val* var45 /* : OptionBool */;
val* var46 /* : nullable Object */;
val* var48 /* : nullable Object */;
short int var49 /* : Bool */;
val* var50 /* : Sys */;
val* var51 /* : NativeArray[String] */;
static val* varonce;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : String */;
val* var60 /* : String */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : String */;
val* var67 /* : Array[String] */;
val* var68 /* : nullable Object */;
val* var69 /* : String */;
val* var70 /* : OptionContext */;
val* var72 /* : OptionContext */;
val* var73 /* : Array[Option] */;
val* var75 /* : Array[Option] */;
val* var_ /* var : Array[Option] */;
val* var76 /* : IndexedIterator[nullable Object] */;
val* var_77 /* var : IndexedIterator[Option] */;
short int var78 /* : Bool */;
val* var79 /* : nullable Object */;
val* var_o /* var o: Option */;
short int var_first /* var first: Bool */;
val* var80 /* : Sys */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
val* var84 /* : String */;
val* var85 /* : Array[Object] */;
val* var86 /* : NativeArray[Object] */;
val* var87 /* : Array[String] */;
val* var89 /* : Array[String] */;
val* var_90 /* var : Array[String] */;
val* var91 /* : IndexedIterator[nullable Object] */;
val* var_92 /* var : IndexedIterator[String] */;
short int var93 /* : Bool */;
val* var95 /* : nullable Object */;
val* var_n /* var n: String */;
val* var96 /* : Sys */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
val* var100 /* : String */;
val* var101 /* : Array[Object] */;
val* var102 /* : NativeArray[Object] */;
val* var103 /* : Sys */;
val* var105 /* : NativeArray[String] */;
static val* varonce104;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : NativeString */;
val* var109 /* : String */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
val* var113 /* : String */;
val* var114 /* : String */;
val* var115 /* : Array[Object] */;
val* var116 /* : NativeArray[Object] */;
val* var117 /* : Sys */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
val* var121 /* : String */;
val* var122 /* : Sys */;
val* var124 /* : NativeArray[String] */;
static val* varonce123;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : NativeString */;
val* var128 /* : String */;
val* var129 /* : String */;
val* var131 /* : String */;
val* var132 /* : String */;
val* var133 /* : Sys */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : NativeString */;
val* var137 /* : String */;
val* var138 /* : Sys */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
val* var142 /* : String */;
val* var143 /* : Sys */;
val* var145 /* : OptionContext */;
val* var147 /* : OptionContext */;
val* var148 /* : Array[String] */;
val* var_errors /* var errors: Array[String] */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
val* var_151 /* var : Array[String] */;
val* var152 /* : IndexedIterator[nullable Object] */;
val* var_153 /* var : IndexedIterator[String] */;
short int var154 /* : Bool */;
val* var156 /* : nullable Object */;
val* var_e /* var e: String */;
val* var157 /* : Sys */;
val* var159 /* : NativeArray[String] */;
static val* varonce158;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
val* var163 /* : String */;
val* var164 /* : String */;
val* var165 /* : Sys */;
val* var166 /* : String */;
val* var168 /* : String */;
val* var169 /* : Sys */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : NativeString */;
val* var173 /* : String */;
val* var174 /* : Sys */;
val* var176 /* : String */;
short int var178 /* : Bool */;
val* var179 /* : OptionContext */;
val* var181 /* : OptionContext */;
val* var182 /* : Array[String] */;
val* var184 /* : Array[String] */;
short int var185 /* : Bool */;
short int var_186 /* var : Bool */;
short int var187 /* : Bool */;
short int var189 /* : Bool */;
short int var190 /* : Bool */;
val* var191 /* : Sys */;
val* var192 /* : String */;
val* var194 /* : String */;
val* var195 /* : Sys */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : NativeString */;
val* var199 /* : String */;
val* var200 /* : Sys */;
val* var202 /* : OptionCount */;
val* var204 /* : OptionCount */;
val* var205 /* : nullable Object */;
val* var207 /* : nullable Object */;
long var209 /* : Int */;
val* var210 /* : OptionBool */;
val* var212 /* : OptionBool */;
val* var213 /* : nullable Object */;
val* var215 /* : nullable Object */;
short int var216 /* : Bool */;
val* var218 /* : OptionBool */;
val* var220 /* : OptionBool */;
val* var221 /* : nullable Object */;
val* var223 /* : nullable Object */;
short int var224 /* : Bool */;
val* var225 /* : OptionCount */;
val* var227 /* : OptionCount */;
short int var229 /* : Bool */;
int cltype230;
int idtype231;
const struct type* type_struct232;
const char* var_class_name233;
val* var234 /* : nullable Object */;
val* var235 /* : OptionString */;
val* var237 /* : OptionString */;
val* var238 /* : nullable Object */;
val* var240 /* : nullable Object */;
short int var241 /* : Bool */;
short int var242 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var244 /* : Bool */;
short int var245 /* : Bool */;
val* var246 /* : OptionString */;
val* var248 /* : OptionString */;
val* var249 /* : nullable Object */;
val* var251 /* : nullable Object */;
val* var253 /* : OptionBool */;
val* var255 /* : OptionBool */;
val* var256 /* : nullable Object */;
val* var258 /* : nullable Object */;
short int var259 /* : Bool */;
val* var260 /* : String */;
val* var262 /* : String */;
val* var263 /* : nullable Error */;
val* var264 /* : String */;
val* var266 /* : String */;
static val* varonce267;
val* var268 /* : String */;
char* var269 /* : NativeString */;
val* var270 /* : String */;
val* var271 /* : String */;
val* var272 /* : Path */;
val* var273 /* : FileWriter */;
var_args = p0;
{
{ /* Inline toolcontext#ToolContext#opt_warn (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 345);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline opts#Option#value= (var,1l) on <var:OptionCount> */
/* Covariant cast for argument 0 (value) <1l:Int> isa VALUE */
/* <1l:Int> isa VALUE */
type_struct = var->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (&type_core__Int)->table_size) {
var4 = 0;
} else {
var4 = (&type_core__Int)->type_table[cltype] == idtype;
}
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var5 = (val*)(1l<<2|1);
var->attrs[COLOR_opts__Option___value].val = var5; /* _value on <var:OptionCount> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 342);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
opts___opts__OptionContext___parse(var6, var_args); /* Direct call opts#OptionContext#parse on <var6:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#opt_help (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_help].val; /* _opt_help on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_help");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 363);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline opts#Option#value (var9) on <var9:OptionBool> */
var14 = var9->attrs[COLOR_opts__Option___value].val; /* _value on <var9:OptionBool> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = (short int)((long)(var12)>>2);
if (var15){
{
nitc___nitc__ToolContext___usage(self); /* Direct call toolcontext#ToolContext#usage on <self:ToolContext>*/
}
var16 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var16,0l) on <var16:Sys> */
exit(0l);
RET_LABEL17:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_version (self) on <self:ToolContext> */
var20 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_version].val; /* _opt_version on <self:ToolContext> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_version");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 366);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline opts#Option#value (var18) on <var18:OptionBool> */
var23 = var18->attrs[COLOR_opts__Option___value].val; /* _value on <var18:OptionBool> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = (short int)((long)(var21)>>2);
if (var24){
var25 = glob_sys;
{
var26 = nitc___nitc__ToolContext___version(self);
}
{
core__file___Sys___print(var25, var26); /* Direct call file#Sys#print on <var25:Sys>*/
}
var27 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var27,0l) on <var27:Sys> */
exit(0l);
RET_LABEL28:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_bash_completion (self) on <self:ToolContext> */
var31 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_bash_completion].val; /* _opt_bash_completion on <self:ToolContext> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_bash_completion");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 384);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline opts#Option#value (var29) on <var29:OptionBool> */
var34 = var29->attrs[COLOR_opts__Option___value].val; /* _value on <var29:OptionBool> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var35 = (short int)((long)(var32)>>2);
if (var35){
var36 = NEW_nitc__BashCompletion(&type_nitc__BashCompletion);
{
((void(*)(val* self, val* p0))(var36->class->vft[COLOR_nitc__toolcontext__BashCompletion__toolcontext_61d]))(var36, self); /* toolcontext= on <var36:BashCompletion>*/
}
{
((void(*)(val* self))(var36->class->vft[COLOR_core__kernel__Object__init]))(var36); /* init on <var36:BashCompletion>*/
}
var_bash_completion = var36;
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var39 = glob_sys;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
{
var40 = core__file___Sys___stdout(var37);
}
{
template___template__Template___core__stream__Writable__write_to(var_bash_completion, var40); /* Direct call template#Template#write_to on <var_bash_completion:BashCompletion>*/
}
var41 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var41,0l) on <var41:Sys> */
exit(0l);
RET_LABEL42:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_stub_man (self) on <self:ToolContext> */
var45 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_stub_man].val; /* _opt_stub_man on <self:ToolContext> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stub_man");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 387);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline opts#Option#value (var43) on <var43:OptionBool> */
var48 = var43->attrs[COLOR_opts__Option___value].val; /* _value on <var43:OptionBool> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
var49 = (short int)((long)(var46)>>2);
if (var49){
var50 = glob_sys;
if (unlikely(varonce==NULL)) {
var51 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "# NAME\n\n";
var55 = core__flat___NativeString___to_s_full(var54, 8l, 8l);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var51)->values[0]=var53;
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "\n\n# SYNOPSYS\n\n# OPTIONS\n";
var59 = core__flat___NativeString___to_s_full(var58, 24l, 24l);
var57 = var59;
varonce56 = var57;
}
((struct instance_core__NativeArray*)var51)->values[2]=var57;
} else {
var51 = varonce;
varonce = NULL;
}
{
{ /* Inline toolcontext#ToolContext#tooldescription (self) on <self:ToolContext> */
var62 = self->attrs[COLOR_nitc__toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 403);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "\n";
var66 = core__flat___NativeString___to_s_full(var65, 1l, 1l);
var64 = var66;
varonce63 = var64;
}
{
var67 = core__string_search___Text___split(var60, var64);
}
{
var68 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var67, 1l);
}
((struct instance_core__NativeArray*)var51)->values[1]=var68;
{
var69 = ((val*(*)(val* self))(var51->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce = var51;
{
core__file___Sys___print(var50, var69); /* Direct call file#Sys#print on <var50:Sys>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var72 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 342);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline opts#OptionContext#options (var70) on <var70:OptionContext> */
var75 = var70->attrs[COLOR_opts__OptionContext___options].val; /* _options on <var70:OptionContext> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 277);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
var_ = var73;
{
var76 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_77 = var76;
for(;;) {
{
var78 = ((short int(*)(val* self))((((long)var_77&3)?class_info[((long)var_77&3)]:var_77->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_77); /* is_ok on <var_77:IndexedIterator[Option]>*/
}
if (var78){
} else {
goto BREAK_label;
}
{
var79 = ((val*(*)(val* self))((((long)var_77&3)?class_info[((long)var_77&3)]:var_77->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_77); /* item on <var_77:IndexedIterator[Option]>*/
}
var_o = var79;
var_first = 1;
var80 = glob_sys;
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "### ";
var84 = core__flat___NativeString___to_s_full(var83, 4l, 4l);
var82 = var84;
varonce81 = var82;
}
var85 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var85 = array_instance Array[Object] */
var86 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var86)->values[0] = (val*) var82;
{
((void(*)(val* self, val* p0, long p1))(var85->class->vft[COLOR_core__array__Array__with_native]))(var85, var86, 1l); /* with_native on <var85:Array[Object]>*/
}
}
{
core__file___Sys___printn(var80, var85); /* Direct call file#Sys#printn on <var80:Sys>*/
}
{
{ /* Inline opts#Option#names (var_o) on <var_o:Option> */
var89 = var_o->attrs[COLOR_opts__Option___names].val; /* _names on <var_o:Option> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 19);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
var_90 = var87;
{
var91 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_90);
}
var_92 = var91;
for(;;) {
{
var93 = ((short int(*)(val* self))((((long)var_92&3)?class_info[((long)var_92&3)]:var_92->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_92); /* is_ok on <var_92:IndexedIterator[String]>*/
}
if (var93){
} else {
goto BREAK_label94;
}
{
var95 = ((val*(*)(val* self))((((long)var_92&3)?class_info[((long)var_92&3)]:var_92->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_92); /* item on <var_92:IndexedIterator[String]>*/
}
var_n = var95;
if (var_first){
var_first = 0;
} else {
var96 = glob_sys;
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = ", ";
var100 = core__flat___NativeString___to_s_full(var99, 2l, 2l);
var98 = var100;
varonce97 = var98;
}
var101 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var101 = array_instance Array[Object] */
var102 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var102)->values[0] = (val*) var98;
{
((void(*)(val* self, val* p0, long p1))(var101->class->vft[COLOR_core__array__Array__with_native]))(var101, var102, 1l); /* with_native on <var101:Array[Object]>*/
}
}
{
core__file___Sys___printn(var96, var101); /* Direct call file#Sys#printn on <var96:Sys>*/
}
}
var103 = glob_sys;
if (unlikely(varonce104==NULL)) {
var105 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = "`";
var109 = core__flat___NativeString___to_s_full(var108, 1l, 1l);
var107 = var109;
varonce106 = var107;
}
((struct instance_core__NativeArray*)var105)->values[0]=var107;
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "`";
var113 = core__flat___NativeString___to_s_full(var112, 1l, 1l);
var111 = var113;
varonce110 = var111;
}
((struct instance_core__NativeArray*)var105)->values[2]=var111;
} else {
var105 = varonce104;
varonce104 = NULL;
}
((struct instance_core__NativeArray*)var105)->values[1]=var_n;
{
var114 = ((val*(*)(val* self))(var105->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var105); /* native_to_s on <var105:NativeArray[String]>*/
}
varonce104 = var105;
var115 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var115 = array_instance Array[Object] */
var116 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var116)->values[0] = (val*) var114;
{
((void(*)(val* self, val* p0, long p1))(var115->class->vft[COLOR_core__array__Array__with_native]))(var115, var116, 1l); /* with_native on <var115:Array[Object]>*/
}
}
{
core__file___Sys___printn(var103, var115); /* Direct call file#Sys#printn on <var103:Sys>*/
}
{
((void(*)(val* self))((((long)var_92&3)?class_info[((long)var_92&3)]:var_92->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_92); /* next on <var_92:IndexedIterator[String]>*/
}
}
BREAK_label94: (void)0;
{
((void(*)(val* self))((((long)var_92&3)?class_info[((long)var_92&3)]:var_92->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_92); /* finish on <var_92:IndexedIterator[String]>*/
}
var117 = glob_sys;
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "";
var121 = core__flat___NativeString___to_s_full(var120, 0l, 0l);
var119 = var121;
varonce118 = var119;
}
{
core__file___Sys___print(var117, var119); /* Direct call file#Sys#print on <var117:Sys>*/
}
var122 = glob_sys;
if (unlikely(varonce123==NULL)) {
var124 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = ".";
var128 = core__flat___NativeString___to_s_full(var127, 1l, 1l);
var126 = var128;
varonce125 = var126;
}
((struct instance_core__NativeArray*)var124)->values[1]=var126;
} else {
var124 = varonce123;
varonce123 = NULL;
}
{
{ /* Inline opts#Option#helptext (var_o) on <var_o:Option> */
var131 = var_o->attrs[COLOR_opts__Option___helptext].val; /* _helptext on <var_o:Option> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _helptext");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 25);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
((struct instance_core__NativeArray*)var124)->values[0]=var129;
{
var132 = ((val*(*)(val* self))(var124->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var124); /* native_to_s on <var124:NativeArray[String]>*/
}
varonce123 = var124;
{
core__file___Sys___print(var122, var132); /* Direct call file#Sys#print on <var122:Sys>*/
}
var133 = glob_sys;
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "";
var137 = core__flat___NativeString___to_s_full(var136, 0l, 0l);
var135 = var137;
varonce134 = var135;
}
{
core__file___Sys___print(var133, var135); /* Direct call file#Sys#print on <var133:Sys>*/
}
{
((void(*)(val* self))((((long)var_77&3)?class_info[((long)var_77&3)]:var_77->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_77); /* next on <var_77:IndexedIterator[Option]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_77&3)?class_info[((long)var_77&3)]:var_77->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_77); /* finish on <var_77:IndexedIterator[Option]>*/
}
var138 = glob_sys;
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = "# SEE ALSO\n\nThe Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>";
var142 = core__flat___NativeString___to_s_full(var141, 137l, 137l);
var140 = var142;
varonce139 = var140;
}
{
core__file___Sys___print(var138, var140); /* Direct call file#Sys#print on <var138:Sys>*/
}
var143 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var143,0l) on <var143:Sys> */
exit(0l);
RET_LABEL144:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var147 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var147 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 342);
fatal_exit(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
{
var148 = opts___opts__OptionContext___errors(var145);
}
var_errors = var148;
{
var149 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_errors);
}
var150 = !var149;
if (var150){
var_151 = var_errors;
{
var152 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_151);
}
var_153 = var152;
for(;;) {
{
var154 = ((short int(*)(val* self))((((long)var_153&3)?class_info[((long)var_153&3)]:var_153->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_153); /* is_ok on <var_153:IndexedIterator[String]>*/
}
if (var154){
} else {
goto BREAK_label155;
}
{
var156 = ((val*(*)(val* self))((((long)var_153&3)?class_info[((long)var_153&3)]:var_153->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_153); /* item on <var_153:IndexedIterator[String]>*/
}
var_e = var156;
var157 = glob_sys;
if (unlikely(varonce158==NULL)) {
var159 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = "Error: ";
var163 = core__flat___NativeString___to_s_full(var162, 7l, 7l);
var161 = var163;
varonce160 = var161;
}
((struct instance_core__NativeArray*)var159)->values[0]=var161;
} else {
var159 = varonce158;
varonce158 = NULL;
}
((struct instance_core__NativeArray*)var159)->values[1]=var_e;
{
var164 = ((val*(*)(val* self))(var159->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var159); /* native_to_s on <var159:NativeArray[String]>*/
}
varonce158 = var159;
{
core__file___Sys___print(var157, var164); /* Direct call file#Sys#print on <var157:Sys>*/
}
{
((void(*)(val* self))((((long)var_153&3)?class_info[((long)var_153&3)]:var_153->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_153); /* next on <var_153:IndexedIterator[String]>*/
}
}
BREAK_label155: (void)0;
{
((void(*)(val* self))((((long)var_153&3)?class_info[((long)var_153&3)]:var_153->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_153); /* finish on <var_153:IndexedIterator[String]>*/
}
var165 = glob_sys;
{
{ /* Inline toolcontext#ToolContext#tooldescription (self) on <self:ToolContext> */
var168 = self->attrs[COLOR_nitc__toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var168 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 403);
fatal_exit(1);
}
var166 = var168;
RET_LABEL167:(void)0;
}
}
{
core__file___Sys___print(var165, var166); /* Direct call file#Sys#print on <var165:Sys>*/
}
var169 = glob_sys;
if (likely(varonce170!=NULL)) {
var171 = varonce170;
} else {
var172 = "Use --help for help";
var173 = core__flat___NativeString___to_s_full(var172, 19l, 19l);
var171 = var173;
varonce170 = var171;
}
{
core__file___Sys___print(var169, var171); /* Direct call file#Sys#print on <var169:Sys>*/
}
var174 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var174,1l) on <var174:Sys> */
exit(1l);
RET_LABEL175:(void)0;
}
}
} else {
}
{
var176 = nitc___nitc__ToolContext___compute_nit_dir(self);
}
{
{ /* Inline toolcontext#ToolContext#nit_dir= (self,var176) on <self:ToolContext> */
self->attrs[COLOR_nitc__toolcontext__ToolContext___nit_dir].val = var176; /* _nit_dir on <self:ToolContext> */
RET_LABEL177:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var181 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var181 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 342);
fatal_exit(1);
}
var179 = var181;
RET_LABEL180:(void)0;
}
}
{
{ /* Inline opts#OptionContext#rest (var179) on <var179:OptionContext> */
var184 = var179->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <var179:OptionContext> */
if (unlikely(var184 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _rest");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 280);
fatal_exit(1);
}
var182 = var184;
RET_LABEL183:(void)0;
}
}
{
var185 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var182);
}
var_186 = var185;
if (var185){
{
{ /* Inline toolcontext#ToolContext#accept_no_arguments (self) on <self:ToolContext> */
var189 = self->attrs[COLOR_nitc__toolcontext__ToolContext___accept_no_arguments].s; /* _accept_no_arguments on <self:ToolContext> */
var187 = var189;
RET_LABEL188:(void)0;
}
}
var190 = !var187;
var178 = var190;
} else {
var178 = var_186;
}
if (var178){
var191 = glob_sys;
{
{ /* Inline toolcontext#ToolContext#tooldescription (self) on <self:ToolContext> */
var194 = self->attrs[COLOR_nitc__toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var194 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 403);
fatal_exit(1);
}
var192 = var194;
RET_LABEL193:(void)0;
}
}
{
core__file___Sys___print(var191, var192); /* Direct call file#Sys#print on <var191:Sys>*/
}
var195 = glob_sys;
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = "Use --help for help";
var199 = core__flat___NativeString___to_s_full(var198, 19l, 19l);
var197 = var199;
varonce196 = var197;
}
{
core__file___Sys___print(var195, var197); /* Direct call file#Sys#print on <var195:Sys>*/
}
var200 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var200,1l) on <var200:Sys> */
exit(1l);
RET_LABEL201:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_verbose (self) on <self:ToolContext> */
var204 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_verbose].val; /* _opt_verbose on <self:ToolContext> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_verbose");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 372);
fatal_exit(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
{
{ /* Inline opts#Option#value (var202) on <var202:OptionCount> */
var207 = var202->attrs[COLOR_opts__Option___value].val; /* _value on <var202:OptionCount> */
var205 = var207;
RET_LABEL206:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#verbose_level= (self,var205) on <self:ToolContext> */
var209 = (long)(var205)>>2;
self->attrs[COLOR_nitc__toolcontext__ToolContext___verbose_level].l = var209; /* _verbose_level on <self:ToolContext> */
RET_LABEL208:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_keep_going (self) on <self:ToolContext> */
var212 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_keep_going].val; /* _opt_keep_going on <self:ToolContext> */
if (unlikely(var212 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_keep_going");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 378);
fatal_exit(1);
}
var210 = var212;
RET_LABEL211:(void)0;
}
}
{
{ /* Inline opts#Option#value (var210) on <var210:OptionBool> */
var215 = var210->attrs[COLOR_opts__Option___value].val; /* _value on <var210:OptionBool> */
var213 = var215;
RET_LABEL214:(void)0;
}
}
var216 = (short int)((long)(var213)>>2);
if (var216){
{
{ /* Inline toolcontext#ToolContext#keep_going= (self,1) on <self:ToolContext> */
self->attrs[COLOR_nitc__toolcontext__ToolContext___keep_going].s = 1; /* _keep_going on <self:ToolContext> */
RET_LABEL217:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_quiet (self) on <self:ToolContext> */
var220 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_quiet].val; /* _opt_quiet on <self:ToolContext> */
if (unlikely(var220 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_quiet");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 351);
fatal_exit(1);
}
var218 = var220;
RET_LABEL219:(void)0;
}
}
{
{ /* Inline opts#Option#value (var218) on <var218:OptionBool> */
var223 = var218->attrs[COLOR_opts__Option___value].val; /* _value on <var218:OptionBool> */
var221 = var223;
RET_LABEL222:(void)0;
}
}
var224 = (short int)((long)(var221)>>2);
if (var224){
{
{ /* Inline toolcontext#ToolContext#opt_warn (self) on <self:ToolContext> */
var227 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 345);
fatal_exit(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
{ /* Inline opts#Option#value= (var225,0l) on <var225:OptionCount> */
/* Covariant cast for argument 0 (value) <0l:Int> isa VALUE */
/* <0l:Int> isa VALUE */
type_struct232 = var225->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype230 = type_struct232->color;
idtype231 = type_struct232->id;
if(cltype230 >= (&type_core__Int)->table_size) {
var229 = 0;
} else {
var229 = (&type_core__Int)->type_table[cltype230] == idtype231;
}
if (unlikely(!var229)) {
var_class_name233 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name233);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var234 = (val*)(0l<<2|1);
var225->attrs[COLOR_opts__Option___value].val = var234; /* _value on <var225:OptionCount> */
RET_LABEL228:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_log_dir (self) on <self:ToolContext> */
var237 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_log_dir].val; /* _opt_log_dir on <self:ToolContext> */
if (unlikely(var237 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var235 = var237;
RET_LABEL236:(void)0;
}
}
{
{ /* Inline opts#Option#value (var235) on <var235:OptionString> */
var240 = var235->attrs[COLOR_opts__Option___value].val; /* _value on <var235:OptionString> */
var238 = var240;
RET_LABEL239:(void)0;
}
}
if (var238 == NULL) {
var241 = 0; /* is null */
} else {
var241 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var238,((val*)NULL)) on <var238:nullable Object(nullable String)> */
var_other = ((val*)NULL);
{
var244 = ((short int(*)(val* self, val* p0))(var238->class->vft[COLOR_core__kernel__Object___61d_61d]))(var238, var_other); /* == on <var238:nullable String(String)>*/
}
var245 = !var244;
var242 = var245;
goto RET_LABEL243;
RET_LABEL243:(void)0;
}
var241 = var242;
}
if (var241){
{
{ /* Inline toolcontext#ToolContext#opt_log_dir (self) on <self:ToolContext> */
var248 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_log_dir].val; /* _opt_log_dir on <self:ToolContext> */
if (unlikely(var248 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var246 = var248;
RET_LABEL247:(void)0;
}
}
{
{ /* Inline opts#Option#value (var246) on <var246:OptionString> */
var251 = var246->attrs[COLOR_opts__Option___value].val; /* _value on <var246:OptionString> */
var249 = var251;
RET_LABEL250:(void)0;
}
}
if (unlikely(var249 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 502);
fatal_exit(1);
}
{
{ /* Inline toolcontext#ToolContext#log_directory= (self,var249) on <self:ToolContext> */
self->attrs[COLOR_nitc__toolcontext__ToolContext___log_directory].val = var249; /* _log_directory on <self:ToolContext> */
RET_LABEL252:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_log (self) on <self:ToolContext> */
var255 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_log].val; /* _opt_log on <self:ToolContext> */
if (unlikely(var255 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 354);
fatal_exit(1);
}
var253 = var255;
RET_LABEL254:(void)0;
}
}
{
{ /* Inline opts#Option#value (var253) on <var253:OptionBool> */
var258 = var253->attrs[COLOR_opts__Option___value].val; /* _value on <var253:OptionBool> */
var256 = var258;
RET_LABEL257:(void)0;
}
}
var259 = (short int)((long)(var256)>>2);
if (var259){
{
{ /* Inline toolcontext#ToolContext#log_directory (self) on <self:ToolContext> */
var262 = self->attrs[COLOR_nitc__toolcontext__ToolContext___log_directory].val; /* _log_directory on <self:ToolContext> */
if (unlikely(var262 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _log_directory");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 137);
fatal_exit(1);
}
var260 = var262;
RET_LABEL261:(void)0;
}
}
{
var263 = core__file___String___mkdir(var260);
}
{
{ /* Inline toolcontext#ToolContext#log_directory (self) on <self:ToolContext> */
var266 = self->attrs[COLOR_nitc__toolcontext__ToolContext___log_directory].val; /* _log_directory on <self:ToolContext> */
if (unlikely(var266 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _log_directory");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 137);
fatal_exit(1);
}
var264 = var266;
RET_LABEL265:(void)0;
}
}
if (likely(varonce267!=NULL)) {
var268 = varonce267;
} else {
var269 = "info.txt";
var270 = core__flat___NativeString___to_s_full(var269, 8l, 8l);
var268 = var270;
varonce267 = var268;
}
{
var271 = core__file___String____47d(var264, var268);
}
{
var272 = core__file___Text___to_path(var271);
}
{
var273 = core___core__Path___open_wo(var272);
}
{
{ /* Inline toolcontext#ToolContext#log_info= (self,var273) on <self:ToolContext> */
self->attrs[COLOR_nitc__toolcontext__ToolContext___log_info].val = var273; /* _log_info on <self:ToolContext> */
RET_LABEL274:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#version for (self: ToolContext): String */
val* nitc___nitc__ToolContext___version(val* self) {
val* var /* : String */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
val* var4 /* : nullable Object */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
val* var11 /* : Sys */;
val* var12 /* : String */;
{
{ /* Inline toolcontext#ToolContext#opt_set_dummy_tool (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 369);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline opts#Option#value (var1) on <var1:OptionBool> */
var6 = var1->attrs[COLOR_opts__Option___value].val; /* _value on <var1:OptionBool> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = (short int)((long)(var4)>>2);
if (var7){
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "DUMMY_VERSION";
var10 = core__flat___NativeString___to_s_full(var9, 13l, 13l);
var8 = var10;
varonce = var8;
}
var = var8;
goto RET_LABEL;
} else {
}
var11 = glob_sys;
{
var12 = nitc__version___core__Sys___nit_version(var11);
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#toolname for (self: ToolContext): String */
val* nitc___nitc__ToolContext___toolname(val* self) {
val* var /* : String */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
val* var4 /* : nullable Object */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : String */;
val* var11 /* : Sys */;
val* var13 /* : Sys */;
val* var14 /* : String */;
val* var15 /* : String */;
{
{ /* Inline toolcontext#ToolContext#opt_set_dummy_tool (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 369);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline opts#Option#value (var1) on <var1:OptionBool> */
var6 = var1->attrs[COLOR_opts__Option___value].val; /* _value on <var1:OptionBool> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = (short int)((long)(var4)>>2);
if (var7){
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "DUMMY_TOOL";
var10 = core__flat___NativeString___to_s_full(var9, 10l, 10l);
var8 = var10;
varonce = var8;
}
var = var8;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var13 = glob_sys;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
{
var14 = core__abstract_text___Sys___program_name(var11);
}
{
var15 = ((val*(*)(val* self, val* p0))(var14->class->vft[COLOR_core__file__String__basename]))(var14, ((val*)NULL)); /* basename on <var14:String>*/
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#nit_dir for (self: ToolContext): String */
val* nitc___nitc__ToolContext___nit_dir(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___nit_dir].val; /* _nit_dir on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nit_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 528);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#nit_dir= for (self: ToolContext, String) */
void nitc___nitc__ToolContext___nit_dir_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__toolcontext__ToolContext___nit_dir].val = p0; /* _nit_dir on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#compute_nit_dir for (self: ToolContext): String */
val* nitc___nitc__ToolContext___compute_nit_dir(val* self) {
val* var /* : String */;
val* var1 /* : OptionString */;
val* var3 /* : OptionString */;
val* var4 /* : nullable Object */;
val* var6 /* : nullable Object */;
val* var_res /* var res: nullable String */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : NativeArray[String] */;
static val* varonce;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : String */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : String */;
val* var28 /* : String */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var34 /* : NativeArray[String] */;
static val* varonce33;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var45 /* : NativeArray[String] */;
static val* varonce44;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : String */;
val* var50 /* : Sys */;
val* var52 /* : Sys */;
val* var53 /* : String */;
val* var54 /* : String */;
val* var55 /* : String */;
short int var56 /* : Bool */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
val* var_exe /* var exe: String */;
short int var62 /* : Bool */;
val* var63 /* : String */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
val* var68 /* : String */;
val* var69 /* : String */;
short int var70 /* : Bool */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : String */;
val* var76 /* : String */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
val* var80 /* : String */;
val* var81 /* : Array[String] */;
val* var_ps /* var ps: Array[String] */;
val* var_ /* var : Array[String] */;
val* var82 /* : IndexedIterator[nullable Object] */;
val* var_83 /* var : IndexedIterator[String] */;
short int var84 /* : Bool */;
val* var85 /* : nullable Object */;
val* var_p /* var p: String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : String */;
val* var90 /* : String */;
short int var91 /* : Bool */;
val* var92 /* : String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
val* var96 /* : String */;
{
{ /* Inline toolcontext#ToolContext#opt_nit_dir (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_nit_dir].val; /* _opt_nit_dir on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_nit_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 360);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline opts#Option#value (var1) on <var1:OptionString> */
var6 = var1->attrs[COLOR_opts__Option___value].val; /* _value on <var1:OptionString> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_res = var4;
if (var_res == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable String> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable String(String)>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
{
var12 = nitc___nitc__ToolContext___check_nit_dir(self, var_res);
}
var13 = !var12;
if (var13){
if (unlikely(varonce==NULL)) {
var14 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "Fatal Error: the value of --nit-dir does not seem to be a valid base Nit directory: ";
var18 = core__flat___NativeString___to_s_full(var17, 84l, 84l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var14)->values[0]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = ".";
var22 = core__flat___NativeString___to_s_full(var21, 1l, 1l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var14)->values[2]=var20;
} else {
var14 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var14)->values[1]=var_res;
{
var23 = ((val*(*)(val* self))(var14->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce = var14;
{
nitc___nitc__ToolContext___fatal_error(self, ((val*)NULL), var23); /* Direct call toolcontext#ToolContext#fatal_error on <self:ToolContext>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "NIT_DIR";
var27 = core__flat___NativeString___to_s_full(var26, 7l, 7l);
var25 = var27;
varonce24 = var25;
}
{
var28 = core__environ___String___environ(var25);
}
var_res = var28;
{
var29 = ((short int(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_res); /* is_empty on <var_res:nullable String(String)>*/
}
var30 = !var29;
if (var30){
{
var31 = nitc___nitc__ToolContext___check_nit_dir(self, var_res);
}
var32 = !var31;
if (var32){
if (unlikely(varonce33==NULL)) {
var34 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "Fatal Error: the value of NIT_DIR does not seem to be a valid base Nit directory: ";
var38 = core__flat___NativeString___to_s_full(var37, 82l, 82l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var34)->values[0]=var36;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = ".";
var42 = core__flat___NativeString___to_s_full(var41, 1l, 1l);
var40 = var42;
varonce39 = var40;
}
((struct instance_core__NativeArray*)var34)->values[2]=var40;
} else {
var34 = varonce33;
varonce33 = NULL;
}
((struct instance_core__NativeArray*)var34)->values[1]=var_res;
{
var43 = ((val*(*)(val* self))(var34->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var34); /* native_to_s on <var34:NativeArray[String]>*/
}
varonce33 = var34;
{
nitc___nitc__ToolContext___fatal_error(self, ((val*)NULL), var43); /* Direct call toolcontext#ToolContext#fatal_error on <self:ToolContext>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
if (unlikely(varonce44==NULL)) {
var45 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "/..";
var49 = core__flat___NativeString___to_s_full(var48, 3l, 3l);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var45)->values[1]=var47;
} else {
var45 = varonce44;
varonce44 = NULL;
}
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var52 = glob_sys;
var50 = var52;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
{
var53 = core__abstract_text___Sys___program_name(var50);
}
{
var54 = core__file___String___dirname(var53);
}
((struct instance_core__NativeArray*)var45)->values[0]=var54;
{
var55 = ((val*(*)(val* self))(var45->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var45); /* native_to_s on <var45:NativeArray[String]>*/
}
varonce44 = var45;
var_res = var55;
{
var56 = nitc___nitc__ToolContext___check_nit_dir(self, var_res);
}
if (var56){
{
var57 = core__file___String___simplify_path(var_res);
}
var = var57;
goto RET_LABEL;
} else {
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "/proc/self/exe";
var61 = core__flat___NativeString___to_s_full(var60, 14l, 14l);
var59 = var61;
varonce58 = var59;
}
var_exe = var59;
{
var62 = core__file___String___file_exists(var_exe);
}
if (var62){
{
var63 = core__file___String___realpath(var_exe);
}
var_res = var63;
{
var64 = core__file___String___dirname(var_res);
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "..";
var68 = core__flat___NativeString___to_s_full(var67, 2l, 2l);
var66 = var68;
varonce65 = var66;
}
{
var69 = core__file___String___join_path(var64, var66);
}
var_res = var69;
{
var70 = nitc___nitc__ToolContext___check_nit_dir(self, var_res);
}
if (var70){
{
var71 = core__file___String___simplify_path(var_res);
}
var = var71;
goto RET_LABEL;
} else {
}
} else {
}
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "PATH";
var75 = core__flat___NativeString___to_s_full(var74, 4l, 4l);
var73 = var75;
varonce72 = var73;
}
{
var76 = core__environ___String___environ(var73);
}
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = ":";
var80 = core__flat___NativeString___to_s_full(var79, 1l, 1l);
var78 = var80;
varonce77 = var78;
}
{
var81 = core__string_search___Text___split(var76, var78);
}
var_ps = var81;
var_ = var_ps;
{
var82 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_83 = var82;
for(;;) {
{
var84 = ((short int(*)(val* self))((((long)var_83&3)?class_info[((long)var_83&3)]:var_83->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_83); /* is_ok on <var_83:IndexedIterator[String]>*/
}
if (var84){
} else {
goto BREAK_label;
}
{
var85 = ((val*(*)(val* self))((((long)var_83&3)?class_info[((long)var_83&3)]:var_83->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_83); /* item on <var_83:IndexedIterator[String]>*/
}
var_p = var85;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "..";
var89 = core__flat___NativeString___to_s_full(var88, 2l, 2l);
var87 = var89;
varonce86 = var87;
}
{
var90 = core__file___String____47d(var_p, var87);
}
var_res = var90;
{
var91 = nitc___nitc__ToolContext___check_nit_dir(self, var_res);
}
if (var91){
{
var92 = core__file___String___simplify_path(var_res);
}
var = var92;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_83&3)?class_info[((long)var_83&3)]:var_83->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_83); /* next on <var_83:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_83&3)?class_info[((long)var_83&3)]:var_83->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_83); /* finish on <var_83:IndexedIterator[String]>*/
}
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "Fatal Error: cannot locate a valid base Nit directory. It is quite unexpected. Try to set the environment variable `NIT_DIR` or to use the `--nit-dir` option.";
var96 = core__flat___NativeString___to_s_full(var95, 158l, 158l);
var94 = var96;
varonce93 = var94;
}
{
nitc___nitc__ToolContext___fatal_error(self, ((val*)NULL), var94); /* Direct call toolcontext#ToolContext#fatal_error on <self:ToolContext>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 571);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#check_nit_dir for (self: ToolContext, String): Bool */
short int nitc___nitc__ToolContext___check_nit_dir(val* self, val* p0) {
short int var /* : Bool */;
val* var_res /* var res: String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
val* var3 /* : NativeArray[String] */;
static val* varonce;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : NativeString */;
val* var7 /* : String */;
val* var8 /* : String */;
short int var9 /* : Bool */;
var_res = p0;
{
var2 = core__file___String___file_exists(var_res);
}
var_ = var2;
if (var2){
if (unlikely(varonce==NULL)) {
var3 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "/src/nit.nit";
var7 = core__flat___NativeString___to_s_full(var6, 12l, 12l);
var5 = var7;
varonce4 = var5;
}
((struct instance_core__NativeArray*)var3)->values[1]=var5;
} else {
var3 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var3)->values[0]=var_res;
{
var8 = ((val*(*)(val* self))(var3->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3); /* native_to_s on <var3:NativeArray[String]>*/
}
varonce = var3;
{
var9 = core__file___String___file_exists(var8);
}
var1 = var9;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#BashCompletion#toolcontext for (self: BashCompletion): ToolContext */
val* nitc___nitc__BashCompletion___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nitc__toolcontext__BashCompletion___toolcontext].val; /* _toolcontext on <self:BashCompletion> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 602);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#BashCompletion#toolcontext= for (self: BashCompletion, ToolContext) */
void nitc___nitc__BashCompletion___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__toolcontext__BashCompletion___toolcontext].val = p0; /* _toolcontext on <self:BashCompletion> */
RET_LABEL:;
}
/* method toolcontext#BashCompletion#extract_options_names for (self: BashCompletion): Array[String] */
val* nitc___nitc__BashCompletion___extract_options_names(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var_names /* var names: Array[String] */;
val* var2 /* : ToolContext */;
val* var4 /* : ToolContext */;
val* var5 /* : OptionContext */;
val* var7 /* : OptionContext */;
val* var8 /* : Array[Option] */;
val* var10 /* : Array[Option] */;
val* var_ /* var : Array[Option] */;
val* var11 /* : IndexedIterator[nullable Object] */;
val* var_12 /* var : IndexedIterator[Option] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_option /* var option: Option */;
val* var15 /* : Array[String] */;
val* var17 /* : Array[String] */;
val* var_18 /* var : Array[String] */;
val* var19 /* : IndexedIterator[nullable Object] */;
val* var_20 /* var : IndexedIterator[String] */;
short int var21 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_name /* var name: String */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : String */;
short int var27 /* : Bool */;
var1 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[String]>*/
}
var_names = var1;
{
{ /* Inline toolcontext#BashCompletion#toolcontext (self) on <self:BashCompletion> */
var4 = self->attrs[COLOR_nitc__toolcontext__BashCompletion___toolcontext].val; /* _toolcontext on <self:BashCompletion> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 602);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#option_context (var2) on <var2:ToolContext> */
var7 = var2->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <var2:ToolContext> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 342);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline opts#OptionContext#options (var5) on <var5:OptionContext> */
var10 = var5->attrs[COLOR_opts__OptionContext___options].val; /* _options on <var5:OptionContext> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 277);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_ = var8;
{
var11 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:IndexedIterator[Option]>*/
}
if (var13){
} else {
goto BREAK_label;
}
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:IndexedIterator[Option]>*/
}
var_option = var14;
{
{ /* Inline opts#Option#names (var_option) on <var_option:Option> */
var17 = var_option->attrs[COLOR_opts__Option___names].val; /* _names on <var_option:Option> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 19);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_18 = var15;
{
var19 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_18);
}
var_20 = var19;
for(;;) {
{
var21 = ((short int(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_20); /* is_ok on <var_20:IndexedIterator[String]>*/
}
if (var21){
} else {
goto BREAK_label22;
}
{
var23 = ((val*(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_20); /* item on <var_20:IndexedIterator[String]>*/
}
var_name = var23;
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "--";
var26 = core__flat___NativeString___to_s_full(var25, 2l, 2l);
var24 = var26;
varonce = var24;
}
{
var27 = core___core__Text___has_prefix(var_name, var24);
}
if (var27){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_names, var_name); /* Direct call array#Array#add on <var_names:Array[String]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_20); /* next on <var_20:IndexedIterator[String]>*/
}
}
BREAK_label22: (void)0;
{
((void(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_20); /* finish on <var_20:IndexedIterator[String]>*/
}
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:IndexedIterator[Option]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:IndexedIterator[Option]>*/
}
var = var_names;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#BashCompletion#rendering for (self: BashCompletion) */
void nitc___nitc__BashCompletion___template__Template__rendering(val* self) {
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : String */;
val* var_name /* var name: String */;
val* var4 /* : Array[String] */;
val* var_option_names /* var option_names: Array[String] */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : String */;
val* var14 /* : ToolContext */;
val* var16 /* : ToolContext */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var20 /* : NativeArray[String] */;
static val* varonce19;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : String */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
val* var45 /* : String */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
val* var49 /* : String */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
val* var53 /* : NativeArray[String] */;
static val* varonce52;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
val* var65 /* : String */;
val* var66 /* : String */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : NativeString */;
val* var75 /* : String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
val* var87 /* : String */;
val* var89 /* : NativeArray[String] */;
static val* varonce88;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : String */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
val* var97 /* : String */;
val* var98 /* : String */;
{
{ /* Inline toolcontext#BashCompletion#toolcontext (self) on <self:BashCompletion> */
var2 = self->attrs[COLOR_nitc__toolcontext__BashCompletion___toolcontext].val; /* _toolcontext on <self:BashCompletion> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 602);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc___nitc__ToolContext___toolname(var);
}
var_name = var3;
{
var4 = nitc___nitc__BashCompletion___extract_options_names(self);
}
var_option_names = var4;
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "# generated bash completion file for ";
var9 = core__flat___NativeString___to_s_full(var8, 37l, 37l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[0]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = " ";
var13 = core__flat___NativeString___to_s_full(var12, 1l, 1l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var5)->values[2]=var11;
} else {
var5 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var5)->values[1]=var_name;
{
{ /* Inline toolcontext#BashCompletion#toolcontext (self) on <self:BashCompletion> */
var16 = self->attrs[COLOR_nitc__toolcontext__BashCompletion___toolcontext].val; /* _toolcontext on <self:BashCompletion> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 602);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = nitc___nitc__ToolContext___version(var14);
}
((struct instance_core__NativeArray*)var5)->values[3]=var17;
{
var18 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
{
template___template__Template___addn(self, var18); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (unlikely(varonce19==NULL)) {
var20 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "_";
var24 = core__flat___NativeString___to_s_full(var23, 1l, 1l);
var22 = var24;
varonce21 = var22;
}
((struct instance_core__NativeArray*)var20)->values[0]=var22;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "()";
var28 = core__flat___NativeString___to_s_full(var27, 2l, 2l);
var26 = var28;
varonce25 = var26;
}
((struct instance_core__NativeArray*)var20)->values[2]=var26;
} else {
var20 = varonce19;
varonce19 = NULL;
}
((struct instance_core__NativeArray*)var20)->values[1]=var_name;
{
var29 = ((val*(*)(val* self))(var20->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var20); /* native_to_s on <var20:NativeArray[String]>*/
}
varonce19 = var20;
{
template___template__Template___addn(self, var29); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "{";
var33 = core__flat___NativeString___to_s_full(var32, 1l, 1l);
var31 = var33;
varonce30 = var31;
}
{
template___template__Template___addn(self, var31); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "\tlocal cur prev opts";
var37 = core__flat___NativeString___to_s_full(var36, 20l, 20l);
var35 = var37;
varonce34 = var35;
}
{
template___template__Template___addn(self, var35); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "\tCOMPREPLY=()";
var41 = core__flat___NativeString___to_s_full(var40, 13l, 13l);
var39 = var41;
varonce38 = var39;
}
{
template___template__Template___addn(self, var39); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "\tcur=\"${COMP_WORDS[COMP_CWORD]}\"";
var45 = core__flat___NativeString___to_s_full(var44, 32l, 32l);
var43 = var45;
varonce42 = var43;
}
{
template___template__Template___addn(self, var43); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "\tprev=\"${COMP_WORDS[COMP_CWORD-1]}\"";
var49 = core__flat___NativeString___to_s_full(var48, 35l, 35l);
var47 = var49;
varonce46 = var47;
}
{
template___template__Template___addn(self, var47); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
{
var50 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_option_names);
}
var51 = !var50;
if (var51){
if (unlikely(varonce52==NULL)) {
var53 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "\topts=\"";
var57 = core__flat___NativeString___to_s_full(var56, 7l, 7l);
var55 = var57;
varonce54 = var55;
}
((struct instance_core__NativeArray*)var53)->values[0]=var55;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "\"";
var61 = core__flat___NativeString___to_s_full(var60, 1l, 1l);
var59 = var61;
varonce58 = var59;
}
((struct instance_core__NativeArray*)var53)->values[2]=var59;
} else {
var53 = varonce52;
varonce52 = NULL;
}
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = " ";
var65 = core__flat___NativeString___to_s_full(var64, 1l, 1l);
var63 = var65;
varonce62 = var63;
}
{
var66 = core__abstract_text___Collection___join(var_option_names, var63);
}
((struct instance_core__NativeArray*)var53)->values[1]=var66;
{
var67 = ((val*(*)(val* self))(var53->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var53); /* native_to_s on <var53:NativeArray[String]>*/
}
varonce52 = var53;
{
template___template__Template___addn(self, var67); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "\tif [[ ${cur} == -* ]] ; then";
var71 = core__flat___NativeString___to_s_full(var70, 29l, 29l);
var69 = var71;
varonce68 = var69;
}
{
template___template__Template___addn(self, var69); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "\t\tCOMPREPLY=( $(compgen -W \"${opts}\" -- ${cur}) )";
var75 = core__flat___NativeString___to_s_full(var74, 49l, 49l);
var73 = var75;
varonce72 = var73;
}
{
template___template__Template___addn(self, var73); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "\t\treturn 0";
var79 = core__flat___NativeString___to_s_full(var78, 10l, 10l);
var77 = var79;
varonce76 = var77;
}
{
template___template__Template___addn(self, var77); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "\tfi";
var83 = core__flat___NativeString___to_s_full(var82, 3l, 3l);
var81 = var83;
varonce80 = var81;
}
{
template___template__Template___addn(self, var81); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
} else {
}
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "} &&";
var87 = core__flat___NativeString___to_s_full(var86, 4l, 4l);
var85 = var87;
varonce84 = var85;
}
{
template___template__Template___addn(self, var85); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (unlikely(varonce88==NULL)) {
var89 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "complete -o default -F _";
var93 = core__flat___NativeString___to_s_full(var92, 24l, 24l);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var89)->values[0]=var91;
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = " ";
var97 = core__flat___NativeString___to_s_full(var96, 1l, 1l);
var95 = var97;
varonce94 = var95;
}
((struct instance_core__NativeArray*)var89)->values[2]=var95;
} else {
var89 = varonce88;
varonce88 = NULL;
}
((struct instance_core__NativeArray*)var89)->values[1]=var_name;
((struct instance_core__NativeArray*)var89)->values[3]=var_name;
{
var98 = ((val*(*)(val* self))(var89->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var89); /* native_to_s on <var89:NativeArray[String]>*/
}
varonce88 = var89;
{
template___template__Template___addn(self, var98); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
RET_LABEL:;
}
/* method toolcontext#BashCompletion#init for (self: BashCompletion) */
void nitc___nitc__BashCompletion___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__BashCompletion___core__kernel__Object__init]))(self); /* init on <self:BashCompletion>*/
}
RET_LABEL:;
}
