#include "nitc__toolcontext.sep.0.h"
/* method toolcontext$Message$location for (self: Message): nullable Location */
val* nitc___nitc__Message___location(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable Location */;
var1 = self->attrs[COLOR_nitc__toolcontext__Message___location].val; /* _location on <self:Message> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$Message$location= for (self: Message, nullable Location) */
void nitc___nitc__Message___location_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__toolcontext__Message___location].val = p0; /* _location on <self:Message> */
RET_LABEL:;
}
/* method toolcontext$Message$tag for (self: Message): nullable String */
val* nitc___nitc__Message___tag(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nitc__toolcontext__Message___tag].val; /* _tag on <self:Message> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$Message$tag= for (self: Message, nullable String) */
void nitc___nitc__Message___tag_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__toolcontext__Message___tag].val = p0; /* _tag on <self:Message> */
RET_LABEL:;
}
/* method toolcontext$Message$text for (self: Message): String */
val* nitc___nitc__Message___text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 42);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$Message$text= for (self: Message, String) */
void nitc___nitc__Message___text_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__toolcontext__Message___text].val = p0; /* _text on <self:Message> */
RET_LABEL:;
}
/* method toolcontext$Message$level= for (self: Message, Int) */
void nitc___nitc__Message___level_61d(val* self, long p0) {
self->attrs[COLOR_nitc__toolcontext__Message___level].l = p0; /* _level on <self:Message> */
RET_LABEL:;
}
/* method toolcontext$Message$< for (self: Message, Message): Bool */
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
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 68);
fatal_exit(1);
}
var_other = p0;
{
{ /* Inline toolcontext$Message$location (self) on <self:Message> */
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
{ /* Inline toolcontext$Message$location (var_other) on <var_other:Message> */
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
{ /* Inline toolcontext$Message$location (self) on <self:Message> */
var14 = self->attrs[COLOR_nitc__toolcontext__Message___location].val; /* _location on <self:Message> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (unlikely(var12 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 73);
fatal_exit(1);
}
{
{ /* Inline toolcontext$Message$location (var_other) on <var_other:Message> */
var17 = var_other->attrs[COLOR_nitc__toolcontext__Message___location].val; /* _location on <var_other:Message> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 73);
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
/* method toolcontext$Message$== for (self: Message, nullable Object): Bool */
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
{ /* Inline toolcontext$Message$location (self) on <self:Message> */
var7 = self->attrs[COLOR_nitc__toolcontext__Message___location].val; /* _location on <self:Message> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline toolcontext$Message$location (var_other) on <var_other:nullable Object(Message)> */
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
{ /* Inline toolcontext$Message$tag (self) on <self:Message> */
var15 = self->attrs[COLOR_nitc__toolcontext__Message___tag].val; /* _tag on <self:Message> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline toolcontext$Message$tag (var_other) on <var_other:nullable Object(Message)> */
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
{ /* Inline toolcontext$Message$text (self) on <self:Message> */
var24 = self->attrs[COLOR_nitc__toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 42);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline toolcontext$Message$text (var_other) on <var_other:nullable Object(Message)> */
var27 = var_other->attrs[COLOR_nitc__toolcontext__Message___text].val; /* _text on <var_other:nullable Object(Message)> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
/* method toolcontext$Message$to_s for (self: Message): String */
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
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
{
{ /* Inline toolcontext$Message$location (self) on <self:Message> */
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
{ /* Inline toolcontext$Message$text (self) on <self:Message> */
var8 = self->attrs[COLOR_nitc__toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
var9 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = ": ";
var14 = (val*)(2l<<2|1);
var15 = (val*)(2l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[1]=var11;
} else {
var9 = varonce;
varonce = NULL;
}
{
var18 = ((val*(*)(val* self))(var_l->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_l); /* to_s on <var_l:nullable Location(Location)>*/
}
((struct instance_core__NativeArray*)var9)->values[0]=var18;
{
{ /* Inline toolcontext$Message$text (self) on <self:Message> */
var21 = self->attrs[COLOR_nitc__toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var21 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 42);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
((struct instance_core__NativeArray*)var9)->values[2]=var19;
{
var22 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
var = var22;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method toolcontext$Message$to_color_string for (self: Message): String */
val* nitc___nitc__Message___to_color_string(val* self) {
val* var /* : String */;
uint32_t var1 /* : Char */;
uint32_t var3 /* : Char */;
uint32_t var_esc /* var esc: Char */;
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
val* var_yellow /* var yellow: String */;
val* var16 /* : NativeArray[String] */;
static val* varonce15;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Bool */;
val* var24 /* : nullable Bool */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var_def /* var def: String */;
val* var27 /* : nullable String */;
val* var29 /* : nullable String */;
val* var_tag /* var tag: nullable String */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var36 /* : NativeArray[String] */;
static val* varonce35;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Bool */;
val* var44 /* : nullable Bool */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
val* var49 /* : nullable Int */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Bool */;
val* var52 /* : nullable Bool */;
val* var53 /* : String */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Bool */;
val* var61 /* : nullable Bool */;
val* var62 /* : nullable Location */;
val* var64 /* : nullable Location */;
val* var_l /* var l: nullable Location */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
val* var68 /* : NativeArray[String] */;
static val* varonce67;
val* var69 /* : String */;
val* var71 /* : String */;
val* var72 /* : String */;
val* var73 /* : nullable SourceFile */;
val* var75 /* : nullable SourceFile */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
val* var_other79 /* var other: nullable Object */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
val* var84 /* : NativeArray[String] */;
static val* varonce83;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Int */;
val* var91 /* : nullable Bool */;
val* var92 /* : nullable Bool */;
val* var93 /* : String */;
val* var94 /* : String */;
val* var96 /* : String */;
val* var97 /* : String */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : CString */;
val* var103 /* : String */;
val* var104 /* : nullable Int */;
val* var105 /* : nullable Int */;
val* var106 /* : nullable Bool */;
val* var107 /* : nullable Bool */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : CString */;
val* var111 /* : String */;
val* var112 /* : nullable Int */;
val* var113 /* : nullable Int */;
val* var114 /* : nullable Bool */;
val* var115 /* : nullable Bool */;
val* var116 /* : String */;
val* var117 /* : String */;
val* var119 /* : String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : CString */;
val* var123 /* : String */;
val* var124 /* : nullable Int */;
val* var125 /* : nullable Int */;
val* var126 /* : nullable Bool */;
val* var127 /* : nullable Bool */;
val* var128 /* : String */;
val* var129 /* : String */;
{
{ /* Inline kernel$Int$code_point (27l) on <27l:Int> */
var3 = (uint32_t)27l;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_esc = var1;
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "[0;33m";
var9 = (val*)(6l<<2|1);
var10 = (val*)(6l<<2|1);
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
var13 = core__abstract_text___Char___Object__to_s(var_esc);
((struct instance_core__NativeArray*)var4)->values[0]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
var_yellow = var14;
if (unlikely(varonce15==NULL)) {
var16 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "[0m";
var21 = (val*)(3l<<2|1);
var22 = (val*)(3l<<2|1);
var23 = (val*)((long)(0)<<2|3);
var24 = (val*)((long)(0)<<2|3);
var20 = core__flat___CString___to_s_unsafe(var19, var21, var22, var23, var24);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var16)->values[1]=var18;
} else {
var16 = varonce15;
varonce15 = NULL;
}
var25 = core__abstract_text___Char___Object__to_s(var_esc);
((struct instance_core__NativeArray*)var16)->values[0]=var25;
{
var26 = ((val*(*)(val* self))(var16->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce15 = var16;
var_def = var26;
{
{ /* Inline toolcontext$Message$tag (self) on <self:Message> */
var29 = self->attrs[COLOR_nitc__toolcontext__Message___tag].val; /* _tag on <self:Message> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_tag = var27;
if (var_tag == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_tag,((val*)NULL)) on <var_tag:nullable String> */
var_other = ((val*)NULL);
{
var33 = ((short int(*)(val* self, val* p0))(var_tag->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_tag, var_other); /* == on <var_tag:nullable String(String)>*/
}
var34 = !var33;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
if (unlikely(varonce35==NULL)) {
var36 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = " (";
var41 = (val*)(2l<<2|1);
var42 = (val*)(2l<<2|1);
var43 = (val*)((long)(0)<<2|3);
var44 = (val*)((long)(0)<<2|3);
var40 = core__flat___CString___to_s_unsafe(var39, var41, var42, var43, var44);
var38 = var40;
varonce37 = var38;
}
((struct instance_core__NativeArray*)var36)->values[0]=var38;
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = ")";
var49 = (val*)(1l<<2|1);
var50 = (val*)(1l<<2|1);
var51 = (val*)((long)(0)<<2|3);
var52 = (val*)((long)(0)<<2|3);
var48 = core__flat___CString___to_s_unsafe(var47, var49, var50, var51, var52);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var36)->values[2]=var46;
} else {
var36 = varonce35;
varonce35 = NULL;
}
((struct instance_core__NativeArray*)var36)->values[1]=var_tag;
{
var53 = ((val*(*)(val* self))(var36->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var36); /* native_to_s on <var36:NativeArray[String]>*/
}
varonce35 = var36;
var_tag = var53;
} else {
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "";
var58 = (val*)(0l<<2|1);
var59 = (val*)(0l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
var_tag = var55;
}
{
{ /* Inline toolcontext$Message$location (self) on <self:Message> */
var64 = self->attrs[COLOR_nitc__toolcontext__Message___location].val; /* _location on <self:Message> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_l = var62;
if (var_l == NULL) {
var65 = 1; /* is null */
} else {
var65 = 0; /* arg is null but recv is not */
}
if (0) {
var66 = nitc___nitc__Location___core__kernel__Object___61d_61d(var_l, ((val*)NULL));
var65 = var66;
}
if (var65){
if (unlikely(varonce67==NULL)) {
var68 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
} else {
var68 = varonce67;
varonce67 = NULL;
}
{
{ /* Inline toolcontext$Message$text (self) on <self:Message> */
var71 = self->attrs[COLOR_nitc__toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var71 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 42);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
((struct instance_core__NativeArray*)var68)->values[0]=var69;
((struct instance_core__NativeArray*)var68)->values[1]=var_tag;
{
var72 = ((val*(*)(val* self))(var68->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var68); /* native_to_s on <var68:NativeArray[String]>*/
}
varonce67 = var68;
var = var72;
goto RET_LABEL;
} else {
{
{ /* Inline location$Location$file (var_l) on <var_l:nullable Location(Location)> */
var75 = var_l->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var_l:nullable Location(Location)> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
if (var73 == NULL) {
var76 = 1; /* is null */
} else {
var76 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Object$== (var73,((val*)NULL)) on <var73:nullable SourceFile> */
var_other79 = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var73,var_other79) on <var73:nullable SourceFile(SourceFile)> */
var82 = var73 == var_other79;
var80 = var82;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
var77 = var80;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
var76 = var77;
}
if (var76){
if (unlikely(varonce83==NULL)) {
var84 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = ": ";
var89 = (val*)(2l<<2|1);
var90 = (val*)(2l<<2|1);
var91 = (val*)((long)(0)<<2|3);
var92 = (val*)((long)(0)<<2|3);
var88 = core__flat___CString___to_s_unsafe(var87, var89, var90, var91, var92);
var86 = var88;
varonce85 = var86;
}
((struct instance_core__NativeArray*)var84)->values[3]=var86;
} else {
var84 = varonce83;
varonce83 = NULL;
}
((struct instance_core__NativeArray*)var84)->values[0]=var_yellow;
{
var93 = ((val*(*)(val* self))(var_l->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_l); /* to_s on <var_l:nullable Location(Location)>*/
}
((struct instance_core__NativeArray*)var84)->values[1]=var93;
((struct instance_core__NativeArray*)var84)->values[2]=var_def;
{
{ /* Inline toolcontext$Message$text (self) on <self:Message> */
var96 = self->attrs[COLOR_nitc__toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var96 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 42);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
((struct instance_core__NativeArray*)var84)->values[4]=var94;
((struct instance_core__NativeArray*)var84)->values[5]=var_tag;
{
var97 = ((val*(*)(val* self))(var84->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var84); /* native_to_s on <var84:NativeArray[String]>*/
}
varonce83 = var84;
var = var97;
goto RET_LABEL;
} else {
if (unlikely(varonce98==NULL)) {
var99 = NEW_core__NativeArray((int)8l, &type_core__NativeArray__core__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = ": ";
var104 = (val*)(2l<<2|1);
var105 = (val*)(2l<<2|1);
var106 = (val*)((long)(0)<<2|3);
var107 = (val*)((long)(0)<<2|3);
var103 = core__flat___CString___to_s_unsafe(var102, var104, var105, var106, var107);
var101 = var103;
varonce100 = var101;
}
((struct instance_core__NativeArray*)var99)->values[3]=var101;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "\n";
var112 = (val*)(1l<<2|1);
var113 = (val*)(1l<<2|1);
var114 = (val*)((long)(0)<<2|3);
var115 = (val*)((long)(0)<<2|3);
var111 = core__flat___CString___to_s_unsafe(var110, var112, var113, var114, var115);
var109 = var111;
varonce108 = var109;
}
((struct instance_core__NativeArray*)var99)->values[6]=var109;
} else {
var99 = varonce98;
varonce98 = NULL;
}
((struct instance_core__NativeArray*)var99)->values[0]=var_yellow;
{
var116 = ((val*(*)(val* self))(var_l->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_l); /* to_s on <var_l:nullable Location(Location)>*/
}
((struct instance_core__NativeArray*)var99)->values[1]=var116;
((struct instance_core__NativeArray*)var99)->values[2]=var_def;
{
{ /* Inline toolcontext$Message$text (self) on <self:Message> */
var119 = self->attrs[COLOR_nitc__toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var119 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 42);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
((struct instance_core__NativeArray*)var99)->values[4]=var117;
((struct instance_core__NativeArray*)var99)->values[5]=var_tag;
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "1;31";
var124 = (val*)(4l<<2|1);
var125 = (val*)(4l<<2|1);
var126 = (val*)((long)(0)<<2|3);
var127 = (val*)((long)(0)<<2|3);
var123 = core__flat___CString___to_s_unsafe(var122, var124, var125, var126, var127);
var121 = var123;
varonce120 = var121;
}
{
var128 = nitc___nitc__Location___colored_line(var_l, var121);
}
((struct instance_core__NativeArray*)var99)->values[7]=var128;
{
var129 = ((val*(*)(val* self))(var99->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
var = var129;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method toolcontext$Message$init for (self: Message) */
void nitc___nitc__Message___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__Message___core__kernel__Object__init]))(self); /* init on <self:Message>*/
}
RET_LABEL:;
}
/* method toolcontext$Location$messages for (self: Location): nullable Array[Message] */
val* nitc__toolcontext___Location___messages(val* self) {
val* var /* : nullable Array[Message] */;
val* var1 /* : nullable Array[Message] */;
var1 = self->attrs[COLOR_nitc__toolcontext__Location___messages].val; /* _messages on <self:Location> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$Location$messages= for (self: Location, nullable Array[Message]) */
void nitc__toolcontext___Location___messages_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__toolcontext__Location___messages].val = p0; /* _messages on <self:Location> */
RET_LABEL:;
}
/* method toolcontext$Location$add_message for (self: Location, Message) */
void nitc__toolcontext___Location___add_message(val* self, val* p0) {
val* var_m /* var m: Message */;
val* var /* : nullable Array[Message] */;
val* var2 /* : nullable Array[Message] */;
val* var_ms /* var ms: nullable Array[Message] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Array[Message] */;
val* var7 /* : nullable SourceFile */;
val* var9 /* : nullable SourceFile */;
val* var_s /* var s: nullable SourceFile */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : Array[Message] */;
val* var17 /* : Array[Message] */;
var_m = p0;
{
{ /* Inline toolcontext$Location$messages (self) on <self:Location> */
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
core___core__Array___core__kernel__Object__init(var5); /* Direct call array$Array$init on <var5:Array[Message]>*/
}
var_ms = var5;
{
{ /* Inline toolcontext$Location$messages= (self,var_ms) on <self:Location> */
self->attrs[COLOR_nitc__toolcontext__Location___messages].val = var_ms; /* _messages on <self:Location> */
RET_LABEL6:(void)0;
}
}
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_ms, var_m); /* Direct call array$Array$add on <var_ms:nullable Array[Message](Array[Message])>*/
}
{
{ /* Inline location$Location$file (self) on <self:Location> */
var9 = self->attrs[COLOR_nitc__location__Location___file].val; /* _file on <self:Location> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_s = var7;
if (var_s == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_s,((val*)NULL)) on <var_s:nullable SourceFile> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_s, var_other); /* == on <var_s:nullable SourceFile(SourceFile)>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
{
{ /* Inline toolcontext$SourceFile$messages (var_s) on <var_s:nullable SourceFile(SourceFile)> */
var17 = var_s->attrs[COLOR_nitc__toolcontext__SourceFile___messages].val; /* _messages on <var_s:nullable SourceFile(SourceFile)> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 139);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var15, var_m); /* Direct call array$Array$add on <var15:Array[Message]>*/
}
} else {
}
RET_LABEL:;
}
/* method toolcontext$SourceFile$messages for (self: SourceFile): Array[Message] */
val* nitc__toolcontext___SourceFile___messages(val* self) {
val* var /* : Array[Message] */;
val* var1 /* : Array[Message] */;
var1 = self->attrs[COLOR_nitc__toolcontext__SourceFile___messages].val; /* _messages on <self:SourceFile> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 139);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$error_count for (self: ToolContext): Int */
long nitc___nitc__ToolContext___error_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$error_count= for (self: ToolContext, Int) */
void nitc___nitc__ToolContext___error_count_61d(val* self, long p0) {
self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l = p0; /* _error_count on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext$ToolContext$warning_count for (self: ToolContext): Int */
long nitc___nitc__ToolContext___warning_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$warning_count= for (self: ToolContext, Int) */
void nitc___nitc__ToolContext___warning_count_61d(val* self, long p0) {
self->attrs[COLOR_nitc__toolcontext__ToolContext___warning_count].l = p0; /* _warning_count on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext$ToolContext$log_directory for (self: ToolContext): String */
val* nitc___nitc__ToolContext___log_directory(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___log_directory].val; /* _log_directory on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _log_directory");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 151);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$log_directory= for (self: ToolContext, String) */
void nitc___nitc__ToolContext___log_directory_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__toolcontext__ToolContext___log_directory].val = p0; /* _log_directory on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext$ToolContext$log_info for (self: ToolContext): nullable Writer */
val* nitc___nitc__ToolContext___log_info(val* self) {
val* var /* : nullable Writer */;
val* var1 /* : nullable Writer */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___log_info].val; /* _log_info on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$log_info= for (self: ToolContext, nullable Writer) */
void nitc___nitc__ToolContext___log_info_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__toolcontext__ToolContext___log_info].val = p0; /* _log_info on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext$ToolContext$messages for (self: ToolContext): Array[Message] */
val* nitc___nitc__ToolContext___messages(val* self) {
val* var /* : Array[Message] */;
val* var1 /* : Array[Message] */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 157);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$message_sorter for (self: ToolContext): Comparator */
val* nitc___nitc__ToolContext___message_sorter(val* self) {
val* var /* : Comparator */;
val* var1 /* : Comparator */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___message_sorter].val; /* _message_sorter on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message_sorter");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 159);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$keep_going for (self: ToolContext): Bool */
short int nitc___nitc__ToolContext___keep_going(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___keep_going].s; /* _keep_going on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$keep_going= for (self: ToolContext, Bool) */
void nitc___nitc__ToolContext___keep_going_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__toolcontext__ToolContext___keep_going].s = p0; /* _keep_going on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext$ToolContext$warning_blacklist for (self: ToolContext): MultiHashMap[SourceFile, String] */
val* nitc___nitc__ToolContext___warning_blacklist(val* self) {
val* var /* : MultiHashMap[SourceFile, String] */;
val* var1 /* : MultiHashMap[SourceFile, String] */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___warning_blacklist].val; /* _warning_blacklist on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _warning_blacklist");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 167);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$is_warning_blacklisted for (self: ToolContext, nullable Location, String): Bool */
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
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
short int var26 /* : Bool */;
short int var_ /* var : Bool */;
short int var27 /* : Bool */;
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
{ /* Inline location$Location$file (var_l) on <var_l:nullable Location(Location)> */
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
{ /* Inline kernel$Object$== (var_f,((val*)NULL)) on <var_f:nullable SourceFile> */
var_other = ((val*)NULL);
{
{ /* Inline kernel$Object$is_same_instance (var_f,var_other) on <var_f:nullable SourceFile(SourceFile)> */
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
{ /* Inline toolcontext$ToolContext$warning_blacklist (self) on <self:ToolContext> */
var14 = self->attrs[COLOR_nitc__toolcontext__ToolContext___warning_blacklist].val; /* _warning_blacklist on <self:ToolContext> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _warning_blacklist");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 167);
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
var22 = (val*)(3l<<2|1);
var23 = (val*)(3l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce = var19;
}
{
var26 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_tags, var19);
}
var_ = var26;
if (var26){
var18 = var_;
} else {
{
var27 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_tags, var_tag);
}
var18 = var27;
}
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$quit for (self: ToolContext) */
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
nitc___nitc__ToolContext___errors_info(self); /* Direct call toolcontext$ToolContext$errors_info on <self:ToolContext>*/
}
{
{ /* Inline toolcontext$ToolContext$error_count (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var1,0l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
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
{ /* Inline kernel$Sys$exit (var8,1l) on <var8:Sys> */
exit((int)1l);
RET_LABEL9:(void)0;
}
}
} else {
var10 = glob_sys;
{
{ /* Inline kernel$Sys$exit (var10,0l) on <var10:Sys> */
exit((int)0l);
RET_LABEL11:(void)0;
}
}
}
RET_LABEL:;
}
/* method toolcontext$ToolContext$check_errors for (self: ToolContext): Bool */
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
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : Sys */;
val* var48 /* : Sys */;
val* var49 /* : Writer */;
val* var51 /* : NativeArray[String] */;
static val* varonce50;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Bool */;
val* var59 /* : nullable Bool */;
val* var60 /* : String */;
val* var61 /* : String */;
val* var62 /* : Array[Message] */;
val* var64 /* : Array[Message] */;
long var65 /* : Int */;
long var67 /* : Int */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
val* var79 /* : Sys */;
{
{ /* Inline toolcontext$ToolContext$messages (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 157);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline array$AbstractArrayRead$length (var1) on <var1:Array[Message]> */
var6 = var1->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var1:Array[Message]> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var4,0l) on <var4:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
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
{ /* Inline toolcontext$ToolContext$message_sorter (self) on <self:ToolContext> */
var13 = self->attrs[COLOR_nitc__toolcontext__ToolContext___message_sorter].val; /* _message_sorter on <self:ToolContext> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message_sorter");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 159);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$messages (self) on <self:ToolContext> */
var16 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var16 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 157);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
core___core__Comparator___sort(var11, var14); /* Direct call sorter$Comparator$sort on <var11:Comparator>*/
}
{
{ /* Inline toolcontext$ToolContext$messages (self) on <self:ToolContext> */
var19 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var19 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 157);
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
{ /* Inline toolcontext$ToolContext$opt_no_color (self) on <self:ToolContext> */
var26 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_no_color].val; /* _opt_no_color on <self:ToolContext> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_color");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 399);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline opts$Option$value (var24) on <var24:OptionBool> */
var29 = var24->attrs[COLOR_opts__Option___value].val; /* _value on <var24:OptionBool> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var30 = (short int)((long)(var27)>>2);
if (var30){
{
{ /* Inline kernel$Object$sys (self) on <self:ToolContext> */
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
var35 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "\n";
var40 = (val*)(1l<<2|1);
var41 = (val*)(1l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var35)->values[1]=var37;
} else {
var35 = varonce;
varonce = NULL;
}
{
var44 = ((val*(*)(val* self))(var_m->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_m); /* to_s on <var_m:Message>*/
}
((struct instance_core__NativeArray*)var35)->values[0]=var44;
{
var45 = ((val*(*)(val* self))(var35->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var35); /* native_to_s on <var35:NativeArray[String]>*/
}
varonce = var35;
{
core___core__FileWriter___core__stream__Writer__write(var34, var45); /* Direct call file$FileWriter$write on <var34:Writer>*/
}
} else {
{
{ /* Inline kernel$Object$sys (self) on <self:ToolContext> */
var48 = glob_sys;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
{
var49 = core__file___Sys___stderr(var46);
}
if (unlikely(varonce50==NULL)) {
var51 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "\n";
var56 = (val*)(1l<<2|1);
var57 = (val*)(1l<<2|1);
var58 = (val*)((long)(0)<<2|3);
var59 = (val*)((long)(0)<<2|3);
var55 = core__flat___CString___to_s_unsafe(var54, var56, var57, var58, var59);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var51)->values[1]=var53;
} else {
var51 = varonce50;
varonce50 = NULL;
}
{
var60 = nitc___nitc__Message___to_color_string(var_m);
}
((struct instance_core__NativeArray*)var51)->values[0]=var60;
{
var61 = ((val*(*)(val* self))(var51->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce50 = var51;
{
core___core__FileWriter___core__stream__Writer__write(var49, var61); /* Direct call file$FileWriter$write on <var49:Writer>*/
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
{ /* Inline toolcontext$ToolContext$messages (self) on <self:ToolContext> */
var64 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var64 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 157);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var62); /* Direct call array$AbstractArray$clear on <var62:Array[Message]>*/
}
} else {
}
{
{ /* Inline toolcontext$ToolContext$error_count (self) on <self:ToolContext> */
var67 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline kernel$Int$> (var65,0l) on <var65:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var70 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var74 = var65 > 0l;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
if (var68){
{
{ /* Inline toolcontext$ToolContext$keep_going (self) on <self:ToolContext> */
var77 = self->attrs[COLOR_nitc__toolcontext__ToolContext___keep_going].s; /* _keep_going on <self:ToolContext> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
var78 = !var75;
if (var78){
{
nitc___nitc__ToolContext___errors_info(self); /* Direct call toolcontext$ToolContext$errors_info on <self:ToolContext>*/
}
var79 = glob_sys;
{
{ /* Inline kernel$Sys$exit (var79,1l) on <var79:Sys> */
exit((int)1l);
RET_LABEL80:(void)0;
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
/* method toolcontext$ToolContext$errors_info for (self: ToolContext) */
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
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Bool */;
val* var48 /* : nullable Bool */;
long var49 /* : Int */;
long var51 /* : Int */;
val* var52 /* : String */;
long var53 /* : Int */;
long var55 /* : Int */;
val* var56 /* : String */;
val* var57 /* : String */;
{
{ /* Inline toolcontext$ToolContext$error_count (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var1,0l) on <var1:Int> */
var6 = var1 == 0l;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_ = var4;
if (var4){
{
{ /* Inline toolcontext$ToolContext$warning_count (self) on <self:ToolContext> */
var9 = self->attrs[COLOR_nitc__toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var7,0l) on <var7:Int> */
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
{ /* Inline toolcontext$ToolContext$opt_no_color (self) on <self:ToolContext> */
var15 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_no_color].val; /* _opt_no_color on <self:ToolContext> */
if (unlikely(var15 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_color");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 399);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline opts$Option$value (var13) on <var13:OptionBool> */
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
{ /* Inline kernel$Object$sys (self) on <self:ToolContext> */
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
var24 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Errors: ";
var29 = (val*)(8l<<2|1);
var30 = (val*)(8l<<2|1);
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
var35 = ". Warnings: ";
var37 = (val*)(12l<<2|1);
var38 = (val*)(12l<<2|1);
var39 = (val*)((long)(0)<<2|3);
var40 = (val*)((long)(0)<<2|3);
var36 = core__flat___CString___to_s_unsafe(var35, var37, var38, var39, var40);
var34 = var36;
varonce33 = var34;
}
((struct instance_core__NativeArray*)var24)->values[2]=var34;
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = ".\n";
var45 = (val*)(2l<<2|1);
var46 = (val*)(2l<<2|1);
var47 = (val*)((long)(0)<<2|3);
var48 = (val*)((long)(0)<<2|3);
var44 = core__flat___CString___to_s_unsafe(var43, var45, var46, var47, var48);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var24)->values[4]=var42;
} else {
var24 = varonce;
varonce = NULL;
}
{
{ /* Inline toolcontext$ToolContext$error_count (self) on <self:ToolContext> */
var51 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
var52 = core__flat___Int___core__abstract_text__Object__to_s(var49);
((struct instance_core__NativeArray*)var24)->values[1]=var52;
{
{ /* Inline toolcontext$ToolContext$warning_count (self) on <self:ToolContext> */
var55 = self->attrs[COLOR_nitc__toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
var56 = core__flat___Int___core__abstract_text__Object__to_s(var53);
((struct instance_core__NativeArray*)var24)->values[3]=var56;
{
var57 = ((val*(*)(val* self))(var24->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var24); /* native_to_s on <var24:NativeArray[String]>*/
}
varonce = var24;
{
core___core__FileWriter___core__stream__Writer__write(var23, var57); /* Direct call file$FileWriter$write on <var23:Writer>*/
}
RET_LABEL:;
}
/* method toolcontext$ToolContext$error for (self: ToolContext, nullable Location, String): Message */
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
val* var11 /* : OptionCount */;
val* var13 /* : OptionCount */;
val* var14 /* : nullable Object */;
val* var16 /* : nullable Object */;
long var17 /* : Int */;
long var19 /* : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var23 /* : Int */;
short int var24 /* : Bool */;
val* var25 /* : Array[Message] */;
val* var27 /* : Array[Message] */;
long var28 /* : Int */;
long var30 /* : Int */;
long var31 /* : Int */;
short int var33 /* : Bool */;
int cltype34;
int idtype35;
const char* var_class_name36;
long var37 /* : Int */;
val* var39 /* : OptionBool */;
val* var41 /* : OptionBool */;
val* var42 /* : nullable Object */;
val* var44 /* : nullable Object */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
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
((void(*)(val* self, long p0))(var1->class->vft[COLOR_nitc__toolcontext__Message__level_61d]))(var1, 2l); /* level= on <var1:Message>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Message>*/
}
var_m = var1;
{
{ /* Inline toolcontext$ToolContext$messages (self) on <self:ToolContext> */
var4 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 157);
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
{ /* Inline kernel$Object$!= (var_l,((val*)NULL)) on <var_l:nullable Location> */
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
nitc__toolcontext___Location___add_message(var_l, var_m); /* Direct call toolcontext$Location$add_message on <var_l:nullable Location(Location)>*/
}
} else {
}
{
{ /* Inline toolcontext$ToolContext$opt_warn (self) on <self:ToolContext> */
var13 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 360);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline opts$Option$value (var11) on <var11:OptionCount> */
var16 = var11->attrs[COLOR_opts__Option___value].val; /* _value on <var11:OptionCount> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var19 = -1l;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel$Int$<= (var14,var17) on <var14:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var22 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var23 = (long)(var14)>>2;
var24 = var23 <= var17;
var20 = var24;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
var = var_m;
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext$ToolContext$messages (self) on <self:ToolContext> */
var27 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var27 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 157);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var25, var_m); /* Direct call array$Array$add on <var25:Array[Message]>*/
}
{
{ /* Inline toolcontext$ToolContext$error_count (self) on <self:ToolContext> */
var30 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var28,1l) on <var28:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var33 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name36 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name36);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var37 = var28 + 1l;
var31 = var37;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$error_count= (self,var31) on <self:ToolContext> */
self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l = var31; /* _error_count on <self:ToolContext> */
RET_LABEL38:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_stop_on_first_error (self) on <self:ToolContext> */
var41 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 393);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline opts$Option$value (var39) on <var39:OptionBool> */
var44 = var39->attrs[COLOR_opts__Option___value].val; /* _value on <var39:OptionBool> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
var45 = (short int)((long)(var42)>>2);
if (var45){
{
var46 = nitc___nitc__ToolContext___check_errors(self);
}
} else {
}
var = var_m;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$fatal_error for (self: ToolContext, nullable Location, String) */
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
/* method toolcontext$ToolContext$warning for (self: ToolContext, nullable Location, String, String): nullable Message */
val* nitc___nitc__ToolContext___warning(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable Message */;
val* var_l /* var l: nullable Location */;
val* var_tag /* var tag: String */;
val* var_text /* var text: String */;
short int var1 /* : Bool */;
val* var2 /* : Message */;
val* var_m /* var m: Message */;
val* var3 /* : Array[Message] */;
val* var5 /* : Array[Message] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : OptionArray */;
val* var14 /* : OptionArray */;
val* var15 /* : nullable Object */;
val* var17 /* : nullable Object */;
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
val* var27 /* : String */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : OptionArray */;
val* var32 /* : OptionArray */;
val* var33 /* : nullable Object */;
val* var35 /* : nullable Object */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var_ /* var : Bool */;
val* var38 /* : OptionCount */;
val* var40 /* : OptionCount */;
val* var41 /* : nullable Object */;
val* var43 /* : nullable Object */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var47 /* : Int */;
short int var48 /* : Bool */;
val* var49 /* : Array[Message] */;
val* var51 /* : Array[Message] */;
long var52 /* : Int */;
long var54 /* : Int */;
long var55 /* : Int */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
long var61 /* : Int */;
val* var63 /* : OptionBool */;
val* var65 /* : OptionBool */;
val* var66 /* : nullable Object */;
val* var68 /* : nullable Object */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
var_l = p0;
var_tag = p1;
var_text = p2;
{
var1 = nitc___nitc__ToolContext___is_warning_blacklisted(self, var_l, var_tag);
}
if (var1){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var2 = NEW_nitc__Message(&type_nitc__Message);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__toolcontext__Message__location_61d]))(var2, var_l); /* location= on <var2:Message>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__toolcontext__Message__tag_61d]))(var2, var_tag); /* tag= on <var2:Message>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__toolcontext__Message__text_61d]))(var2, var_text); /* text= on <var2:Message>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nitc__toolcontext__Message__level_61d]))(var2, 1l); /* level= on <var2:Message>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:Message>*/
}
var_m = var2;
{
{ /* Inline toolcontext$ToolContext$messages (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 157);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var3, var_m);
}
if (var6){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (var_l == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_l,((val*)NULL)) on <var_l:nullable Location> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_l->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_l, var_other); /* == on <var_l:nullable Location(Location)>*/
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
nitc__toolcontext___Location___add_message(var_l, var_m); /* Direct call toolcontext$Location$add_message on <var_l:nullable Location(Location)>*/
}
} else {
}
{
{ /* Inline toolcontext$ToolContext$opt_warning (self) on <self:ToolContext> */
var14 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 363);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline opts$Option$value (var12) on <var12:OptionArray> */
var17 = var12->attrs[COLOR_opts__Option___value].val; /* _value on <var12:OptionArray> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var18 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "no-";
var23 = (val*)(3l<<2|1);
var24 = (val*)(3l<<2|1);
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
((struct instance_core__NativeArray*)var18)->values[1]=var_tag;
{
var27 = ((val*(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce = var18;
{
var28 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var15, var27);
}
if (var28){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext$ToolContext$opt_warning (self) on <self:ToolContext> */
var32 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 363);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline opts$Option$value (var30) on <var30:OptionArray> */
var35 = var30->attrs[COLOR_opts__Option___value].val; /* _value on <var30:OptionArray> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var33, var_tag);
}
var37 = !var36;
var_ = var37;
if (var37){
{
{ /* Inline toolcontext$ToolContext$opt_warn (self) on <self:ToolContext> */
var40 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 360);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline opts$Option$value (var38) on <var38:OptionCount> */
var43 = var38->attrs[COLOR_opts__Option___value].val; /* _value on <var38:OptionCount> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline kernel$Int$<= (var41,0l) on <var41:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var46 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var47 = (long)(var41)>>2;
var48 = var47 <= 0l;
var44 = var48;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var29 = var44;
} else {
var29 = var_;
}
if (var29){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext$ToolContext$messages (self) on <self:ToolContext> */
var51 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var51 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 157);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var49, var_m); /* Direct call array$Array$add on <var49:Array[Message]>*/
}
{
{ /* Inline toolcontext$ToolContext$warning_count (self) on <self:ToolContext> */
var54 = self->attrs[COLOR_nitc__toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var52,1l) on <var52:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var57 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var61 = var52 + 1l;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$warning_count= (self,var55) on <self:ToolContext> */
self->attrs[COLOR_nitc__toolcontext__ToolContext___warning_count].l = var55; /* _warning_count on <self:ToolContext> */
RET_LABEL62:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_stop_on_first_error (self) on <self:ToolContext> */
var65 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var65 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 393);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline opts$Option$value (var63) on <var63:OptionBool> */
var68 = var63->attrs[COLOR_opts__Option___value].val; /* _value on <var63:OptionBool> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
var69 = (short int)((long)(var66)>>2);
if (var69){
{
var70 = nitc___nitc__ToolContext___check_errors(self);
}
} else {
}
var = var_m;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$advice for (self: ToolContext, nullable Location, String, String): nullable Message */
val* nitc___nitc__ToolContext___advice(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable Message */;
val* var_l /* var l: nullable Location */;
val* var_tag /* var tag: String */;
val* var_text /* var text: String */;
short int var1 /* : Bool */;
val* var2 /* : Message */;
val* var_m /* var m: Message */;
val* var3 /* : Array[Message] */;
val* var5 /* : Array[Message] */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : OptionArray */;
val* var14 /* : OptionArray */;
val* var15 /* : nullable Object */;
val* var17 /* : nullable Object */;
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
val* var27 /* : String */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : OptionArray */;
val* var32 /* : OptionArray */;
val* var33 /* : nullable Object */;
val* var35 /* : nullable Object */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var_ /* var : Bool */;
val* var38 /* : OptionCount */;
val* var40 /* : OptionCount */;
val* var41 /* : nullable Object */;
val* var43 /* : nullable Object */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var47 /* : Int */;
short int var48 /* : Bool */;
val* var49 /* : Array[Message] */;
val* var51 /* : Array[Message] */;
long var52 /* : Int */;
long var54 /* : Int */;
long var55 /* : Int */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
long var61 /* : Int */;
val* var63 /* : OptionBool */;
val* var65 /* : OptionBool */;
val* var66 /* : nullable Object */;
val* var68 /* : nullable Object */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
var_l = p0;
var_tag = p1;
var_text = p2;
{
var1 = nitc___nitc__ToolContext___is_warning_blacklisted(self, var_l, var_tag);
}
if (var1){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var2 = NEW_nitc__Message(&type_nitc__Message);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__toolcontext__Message__location_61d]))(var2, var_l); /* location= on <var2:Message>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__toolcontext__Message__tag_61d]))(var2, var_tag); /* tag= on <var2:Message>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__toolcontext__Message__text_61d]))(var2, var_text); /* text= on <var2:Message>*/
}
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_nitc__toolcontext__Message__level_61d]))(var2, 0l); /* level= on <var2:Message>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:Message>*/
}
var_m = var2;
{
{ /* Inline toolcontext$ToolContext$messages (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 157);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var3, var_m);
}
if (var6){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
if (var_l == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var_l,((val*)NULL)) on <var_l:nullable Location> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_l->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_l, var_other); /* == on <var_l:nullable Location(Location)>*/
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
nitc__toolcontext___Location___add_message(var_l, var_m); /* Direct call toolcontext$Location$add_message on <var_l:nullable Location(Location)>*/
}
} else {
}
{
{ /* Inline toolcontext$ToolContext$opt_warning (self) on <self:ToolContext> */
var14 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 363);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline opts$Option$value (var12) on <var12:OptionArray> */
var17 = var12->attrs[COLOR_opts__Option___value].val; /* _value on <var12:OptionArray> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var18 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "no-";
var23 = (val*)(3l<<2|1);
var24 = (val*)(3l<<2|1);
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
((struct instance_core__NativeArray*)var18)->values[1]=var_tag;
{
var27 = ((val*(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce = var18;
{
var28 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var15, var27);
}
if (var28){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext$ToolContext$opt_warning (self) on <self:ToolContext> */
var32 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 363);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline opts$Option$value (var30) on <var30:OptionArray> */
var35 = var30->attrs[COLOR_opts__Option___value].val; /* _value on <var30:OptionArray> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
var36 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var33, var_tag);
}
var37 = !var36;
var_ = var37;
if (var37){
{
{ /* Inline toolcontext$ToolContext$opt_warn (self) on <self:ToolContext> */
var40 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var40 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 360);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline opts$Option$value (var38) on <var38:OptionCount> */
var43 = var38->attrs[COLOR_opts__Option___value].val; /* _value on <var38:OptionCount> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline kernel$Int$<= (var41,1l) on <var41:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var47 = (long)(var41)>>2;
var48 = var47 <= 1l;
var44 = var48;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var29 = var44;
} else {
var29 = var_;
}
if (var29){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext$ToolContext$messages (self) on <self:ToolContext> */
var51 = self->attrs[COLOR_nitc__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var51 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 157);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var49, var_m); /* Direct call array$Array$add on <var49:Array[Message]>*/
}
{
{ /* Inline toolcontext$ToolContext$warning_count (self) on <self:ToolContext> */
var54 = self->attrs[COLOR_nitc__toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var52,1l) on <var52:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var57 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var57)) {
var_class_name60 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var61 = var52 + 1l;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$warning_count= (self,var55) on <self:ToolContext> */
self->attrs[COLOR_nitc__toolcontext__ToolContext___warning_count].l = var55; /* _warning_count on <self:ToolContext> */
RET_LABEL62:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_stop_on_first_error (self) on <self:ToolContext> */
var65 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var65 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 393);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline opts$Option$value (var63) on <var63:OptionBool> */
var68 = var63->attrs[COLOR_opts__Option___value].val; /* _value on <var63:OptionBool> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
var69 = (short int)((long)(var66)>>2);
if (var69){
{
var70 = nitc___nitc__ToolContext___check_errors(self);
}
} else {
}
var = var_m;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$info for (self: ToolContext, String, Int) */
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
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
var_s = p0;
var_level = p1;
{
{ /* Inline toolcontext$ToolContext$verbose_level (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__toolcontext__ToolContext___verbose_level].l; /* _verbose_level on <self:ToolContext> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline kernel$Int$<= (var_level,var) on <var_level:Int> */
/* Covariant cast for argument 0 (i) <var:Int> isa OTHER */
/* <var:Int> isa OTHER */
var5 = 1; /* easy <var:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
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
var8 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__core__String);
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
core__file___Sys___print(var7, var9); /* Direct call file$Sys$print on <var7:Sys>*/
}
} else {
}
{
{ /* Inline toolcontext$ToolContext$log_info (self) on <self:ToolContext> */
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
{ /* Inline kernel$Object$!= (var10,((val*)NULL)) on <var10:nullable Writer> */
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
{ /* Inline toolcontext$ToolContext$log_info (self) on <self:ToolContext> */
var20 = self->attrs[COLOR_nitc__toolcontext__ToolContext___log_info].val; /* _log_info on <self:ToolContext> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 323);
fatal_exit(1);
} else {
core___core__FileWriter___core__stream__Writer__write(var18, var_s); /* Direct call file$FileWriter$write on <var18:nullable Writer>*/
}
{
{ /* Inline toolcontext$ToolContext$log_info (self) on <self:ToolContext> */
var23 = self->attrs[COLOR_nitc__toolcontext__ToolContext___log_info].val; /* _log_info on <self:ToolContext> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "\n";
var28 = (val*)(1l<<2|1);
var29 = (val*)(1l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce24 = var25;
}
if (var21 == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 324);
fatal_exit(1);
} else {
core___core__FileWriter___core__stream__Writer__write(var21, var25); /* Direct call file$FileWriter$write on <var21:nullable Writer>*/
}
} else {
}
RET_LABEL:;
}
/* method toolcontext$ToolContext$option_context for (self: ToolContext): OptionContext */
val* nitc___nitc__ToolContext___option_context(val* self) {
val* var /* : OptionContext */;
val* var1 /* : OptionContext */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$opt_warn for (self: ToolContext): OptionCount */
val* nitc___nitc__ToolContext___opt_warn(val* self) {
val* var /* : OptionCount */;
val* var1 /* : OptionCount */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 360);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$opt_warning for (self: ToolContext): OptionArray */
val* nitc___nitc__ToolContext___opt_warning(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 363);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$opt_quiet for (self: ToolContext): OptionBool */
val* nitc___nitc__ToolContext___opt_quiet(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_quiet].val; /* _opt_quiet on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_quiet");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 366);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$opt_log for (self: ToolContext): OptionBool */
val* nitc___nitc__ToolContext___opt_log(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_log].val; /* _opt_log on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 369);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$opt_log_dir for (self: ToolContext): OptionString */
val* nitc___nitc__ToolContext___opt_log_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_log_dir].val; /* _opt_log_dir on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 372);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$opt_nit_dir for (self: ToolContext): OptionString */
val* nitc___nitc__ToolContext___opt_nit_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_nit_dir].val; /* _opt_nit_dir on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_nit_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 375);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$opt_share_dir for (self: ToolContext): OptionString */
val* nitc___nitc__ToolContext___opt_share_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_share_dir].val; /* _opt_share_dir on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_share_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 378);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$opt_help for (self: ToolContext): OptionBool */
val* nitc___nitc__ToolContext___opt_help(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_help].val; /* _opt_help on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_help");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 381);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$opt_version for (self: ToolContext): OptionBool */
val* nitc___nitc__ToolContext___opt_version(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_version].val; /* _opt_version on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_version");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 384);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$opt_set_dummy_tool for (self: ToolContext): OptionBool */
val* nitc___nitc__ToolContext___opt_set_dummy_tool(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 387);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$opt_verbose for (self: ToolContext): OptionCount */
val* nitc___nitc__ToolContext___opt_verbose(val* self) {
val* var /* : OptionCount */;
val* var1 /* : OptionCount */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_verbose].val; /* _opt_verbose on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_verbose");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 390);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$opt_stop_on_first_error for (self: ToolContext): OptionBool */
val* nitc___nitc__ToolContext___opt_stop_on_first_error(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 393);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$opt_keep_going for (self: ToolContext): OptionBool */
val* nitc___nitc__ToolContext___opt_keep_going(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_keep_going].val; /* _opt_keep_going on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_keep_going");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 396);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$opt_no_color for (self: ToolContext): OptionBool */
val* nitc___nitc__ToolContext___opt_no_color(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_no_color].val; /* _opt_no_color on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_color");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 399);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$opt_bash_completion for (self: ToolContext): OptionBool */
val* nitc___nitc__ToolContext___opt_bash_completion(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_bash_completion].val; /* _opt_bash_completion on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_bash_completion");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 402);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$opt_stub_man for (self: ToolContext): OptionBool */
val* nitc___nitc__ToolContext___opt_stub_man(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_stub_man].val; /* _opt_stub_man on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stub_man");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 405);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$verbose_level for (self: ToolContext): Int */
long nitc___nitc__ToolContext___verbose_level(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___verbose_level].l; /* _verbose_level on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$verbose_level= for (self: ToolContext, Int) */
void nitc___nitc__ToolContext___verbose_level_61d(val* self, long p0) {
self->attrs[COLOR_nitc__toolcontext__ToolContext___verbose_level].l = p0; /* _verbose_level on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext$ToolContext$init for (self: ToolContext) */
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
{ /* Inline toolcontext$ToolContext$option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_warn (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 360);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_warning (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 363);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_quiet (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_quiet].val; /* _opt_quiet on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_quiet");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 366);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_stop_on_first_error (self) on <self:ToolContext> */
var14 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var14 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 393);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_keep_going (self) on <self:ToolContext> */
var17 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_keep_going].val; /* _opt_keep_going on <self:ToolContext> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_keep_going");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 396);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_no_color (self) on <self:ToolContext> */
var20 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_no_color].val; /* _opt_no_color on <self:ToolContext> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_color");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 399);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_log (self) on <self:ToolContext> */
var23 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_log].val; /* _opt_log on <self:ToolContext> */
if (unlikely(var23 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 369);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_log_dir (self) on <self:ToolContext> */
var26 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_log_dir].val; /* _opt_log_dir on <self:ToolContext> */
if (unlikely(var26 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 372);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_nit_dir (self) on <self:ToolContext> */
var29 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_nit_dir].val; /* _opt_nit_dir on <self:ToolContext> */
if (unlikely(var29 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_nit_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 375);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_help (self) on <self:ToolContext> */
var32 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_help].val; /* _opt_help on <self:ToolContext> */
if (unlikely(var32 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_help");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 381);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_version (self) on <self:ToolContext> */
var35 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_version].val; /* _opt_version on <self:ToolContext> */
if (unlikely(var35 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_version");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 384);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_set_dummy_tool (self) on <self:ToolContext> */
var38 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:ToolContext> */
if (unlikely(var38 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 387);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_verbose (self) on <self:ToolContext> */
var41 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_verbose].val; /* _opt_verbose on <self:ToolContext> */
if (unlikely(var41 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_verbose");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 390);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_bash_completion (self) on <self:ToolContext> */
var44 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_bash_completion].val; /* _opt_bash_completion on <self:ToolContext> */
if (unlikely(var44 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_bash_completion");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 402);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_stub_man (self) on <self:ToolContext> */
var47 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_stub_man].val; /* _opt_stub_man on <self:ToolContext> */
if (unlikely(var47 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stub_man");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 405);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
var48 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var48 = array_instance Array[Option] */
var49 = NEW_core__NativeArray((int)15l, &type_core__NativeArray__opts__Option);
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
opts___opts__OptionContext___add_option(var, var48); /* Direct call opts$OptionContext$add_option on <var:OptionContext>*/
}
{
{ /* Inline toolcontext$ToolContext$opt_stub_man (self) on <self:ToolContext> */
var52 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_stub_man].val; /* _opt_stub_man on <self:ToolContext> */
if (unlikely(var52 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stub_man");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 405);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline opts$Option$hidden= (var50,1) on <var50:OptionBool> */
var50->attrs[COLOR_opts__Option___hidden].s = 1; /* _hidden on <var50:OptionBool> */
RET_LABEL53:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_bash_completion (self) on <self:ToolContext> */
var56 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_bash_completion].val; /* _opt_bash_completion on <self:ToolContext> */
if (unlikely(var56 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_bash_completion");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 402);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline opts$Option$hidden= (var54,1) on <var54:OptionBool> */
var54->attrs[COLOR_opts__Option___hidden].s = 1; /* _hidden on <var54:OptionBool> */
RET_LABEL57:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_set_dummy_tool (self) on <self:ToolContext> */
var60 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:ToolContext> */
if (unlikely(var60 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 387);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline opts$Option$hidden= (var58,1) on <var58:OptionBool> */
var58->attrs[COLOR_opts__Option___hidden].s = 1; /* _hidden on <var58:OptionBool> */
RET_LABEL61:(void)0;
}
}
RET_LABEL:;
}
/* method toolcontext$ToolContext$tooldescription for (self: ToolContext): String */
val* nitc___nitc__ToolContext___tooldescription(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 421);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$tooldescription= for (self: ToolContext, String) */
void nitc___nitc__ToolContext___tooldescription_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__toolcontext__ToolContext___tooldescription].val = p0; /* _tooldescription on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext$ToolContext$accept_no_arguments for (self: ToolContext): Bool */
short int nitc___nitc__ToolContext___accept_no_arguments(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___accept_no_arguments].s; /* _accept_no_arguments on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$usage for (self: ToolContext) */
void nitc___nitc__ToolContext___usage(val* self) {
val* var /* : Sys */;
val* var1 /* : String */;
val* var3 /* : String */;
val* var4 /* : OptionContext */;
val* var6 /* : OptionContext */;
var = glob_sys;
{
{ /* Inline toolcontext$ToolContext$tooldescription (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 421);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
core__file___Sys___print(var, var1); /* Direct call file$Sys$print on <var:Sys>*/
}
{
{ /* Inline toolcontext$ToolContext$option_context (self) on <self:ToolContext> */
var6 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var6 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
opts___opts__OptionContext___usage(var4); /* Direct call opts$OptionContext$usage on <var4:OptionContext>*/
}
RET_LABEL:;
}
/* method toolcontext$ToolContext$process_options for (self: ToolContext, Sequence[String]) */
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
char* var54 /* : CString */;
val* var55 /* : String */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Int */;
val* var58 /* : nullable Bool */;
val* var59 /* : nullable Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : CString */;
val* var63 /* : String */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Int */;
val* var66 /* : nullable Bool */;
val* var67 /* : nullable Bool */;
val* var68 /* : String */;
val* var70 /* : String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : CString */;
val* var74 /* : String */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Int */;
val* var77 /* : nullable Bool */;
val* var78 /* : nullable Bool */;
val* var79 /* : Array[String] */;
val* var80 /* : nullable Object */;
val* var81 /* : String */;
val* var82 /* : OptionContext */;
val* var84 /* : OptionContext */;
val* var85 /* : Array[Option] */;
val* var87 /* : Array[Option] */;
val* var_ /* var : Array[Option] */;
val* var88 /* : IndexedIterator[nullable Object] */;
val* var_89 /* var : IndexedIterator[Option] */;
short int var90 /* : Bool */;
val* var91 /* : nullable Object */;
val* var_o /* var o: Option */;
short int var_first /* var first: Bool */;
val* var92 /* : Sys */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : CString */;
val* var96 /* : String */;
val* var97 /* : nullable Int */;
val* var98 /* : nullable Int */;
val* var99 /* : nullable Bool */;
val* var100 /* : nullable Bool */;
val* var101 /* : Array[Object] */;
val* var102 /* : NativeArray[Object] */;
val* var103 /* : Array[String] */;
val* var105 /* : Array[String] */;
val* var_106 /* var : Array[String] */;
val* var107 /* : IndexedIterator[nullable Object] */;
val* var_108 /* var : IndexedIterator[String] */;
short int var109 /* : Bool */;
val* var111 /* : nullable Object */;
val* var_n /* var n: String */;
val* var112 /* : Sys */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : CString */;
val* var116 /* : String */;
val* var117 /* : nullable Int */;
val* var118 /* : nullable Int */;
val* var119 /* : nullable Bool */;
val* var120 /* : nullable Bool */;
val* var121 /* : Array[Object] */;
val* var122 /* : NativeArray[Object] */;
val* var123 /* : Sys */;
val* var125 /* : NativeArray[String] */;
static val* varonce124;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : CString */;
val* var129 /* : String */;
val* var130 /* : nullable Int */;
val* var131 /* : nullable Int */;
val* var132 /* : nullable Bool */;
val* var133 /* : nullable Bool */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : CString */;
val* var137 /* : String */;
val* var138 /* : nullable Int */;
val* var139 /* : nullable Int */;
val* var140 /* : nullable Bool */;
val* var141 /* : nullable Bool */;
val* var142 /* : String */;
val* var143 /* : Array[Object] */;
val* var144 /* : NativeArray[Object] */;
val* var145 /* : Sys */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : CString */;
val* var149 /* : String */;
val* var150 /* : nullable Int */;
val* var151 /* : nullable Int */;
val* var152 /* : nullable Bool */;
val* var153 /* : nullable Bool */;
val* var154 /* : Sys */;
val* var156 /* : NativeArray[String] */;
static val* varonce155;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : CString */;
val* var160 /* : String */;
val* var161 /* : nullable Int */;
val* var162 /* : nullable Int */;
val* var163 /* : nullable Bool */;
val* var164 /* : nullable Bool */;
val* var165 /* : String */;
val* var167 /* : String */;
val* var168 /* : String */;
val* var169 /* : Sys */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : CString */;
val* var173 /* : String */;
val* var174 /* : nullable Int */;
val* var175 /* : nullable Int */;
val* var176 /* : nullable Bool */;
val* var177 /* : nullable Bool */;
val* var178 /* : Sys */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : CString */;
val* var182 /* : String */;
val* var183 /* : nullable Int */;
val* var184 /* : nullable Int */;
val* var185 /* : nullable Bool */;
val* var186 /* : nullable Bool */;
val* var187 /* : Sys */;
val* var189 /* : OptionContext */;
val* var191 /* : OptionContext */;
val* var192 /* : Array[String] */;
val* var_errors /* var errors: Array[String] */;
short int var193 /* : Bool */;
short int var194 /* : Bool */;
val* var_195 /* var : Array[String] */;
val* var196 /* : IndexedIterator[nullable Object] */;
val* var_197 /* var : IndexedIterator[String] */;
short int var198 /* : Bool */;
val* var200 /* : nullable Object */;
val* var_e /* var e: String */;
val* var201 /* : Sys */;
val* var203 /* : NativeArray[String] */;
static val* varonce202;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : CString */;
val* var207 /* : String */;
val* var208 /* : nullable Int */;
val* var209 /* : nullable Int */;
val* var210 /* : nullable Bool */;
val* var211 /* : nullable Bool */;
val* var212 /* : String */;
val* var213 /* : Sys */;
val* var214 /* : String */;
val* var216 /* : String */;
val* var217 /* : Sys */;
static val* varonce218;
val* var219 /* : String */;
char* var220 /* : CString */;
val* var221 /* : String */;
val* var222 /* : nullable Int */;
val* var223 /* : nullable Int */;
val* var224 /* : nullable Bool */;
val* var225 /* : nullable Bool */;
val* var226 /* : Sys */;
val* var228 /* : String */;
short int var230 /* : Bool */;
val* var231 /* : OptionContext */;
val* var233 /* : OptionContext */;
val* var234 /* : Array[String] */;
val* var236 /* : Array[String] */;
short int var237 /* : Bool */;
short int var_238 /* var : Bool */;
short int var239 /* : Bool */;
short int var241 /* : Bool */;
short int var242 /* : Bool */;
val* var243 /* : Sys */;
val* var244 /* : String */;
val* var246 /* : String */;
val* var247 /* : Sys */;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : CString */;
val* var251 /* : String */;
val* var252 /* : nullable Int */;
val* var253 /* : nullable Int */;
val* var254 /* : nullable Bool */;
val* var255 /* : nullable Bool */;
val* var256 /* : Sys */;
val* var258 /* : OptionCount */;
val* var260 /* : OptionCount */;
val* var261 /* : nullable Object */;
val* var263 /* : nullable Object */;
long var265 /* : Int */;
val* var266 /* : OptionBool */;
val* var268 /* : OptionBool */;
val* var269 /* : nullable Object */;
val* var271 /* : nullable Object */;
short int var272 /* : Bool */;
val* var274 /* : OptionBool */;
val* var276 /* : OptionBool */;
val* var277 /* : nullable Object */;
val* var279 /* : nullable Object */;
short int var280 /* : Bool */;
val* var281 /* : OptionCount */;
val* var283 /* : OptionCount */;
short int var285 /* : Bool */;
int cltype286;
int idtype287;
const struct type* type_struct288;
const char* var_class_name289;
val* var290 /* : nullable Object */;
val* var291 /* : OptionString */;
val* var293 /* : OptionString */;
val* var294 /* : nullable Object */;
val* var296 /* : nullable Object */;
short int var297 /* : Bool */;
short int var298 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var300 /* : Bool */;
short int var301 /* : Bool */;
val* var302 /* : OptionString */;
val* var304 /* : OptionString */;
val* var305 /* : nullable Object */;
val* var307 /* : nullable Object */;
val* var309 /* : OptionBool */;
val* var311 /* : OptionBool */;
val* var312 /* : nullable Object */;
val* var314 /* : nullable Object */;
short int var315 /* : Bool */;
val* var316 /* : String */;
val* var318 /* : String */;
val* var319 /* : nullable Error */;
val* var320 /* : String */;
val* var322 /* : String */;
static val* varonce323;
val* var324 /* : String */;
char* var325 /* : CString */;
val* var326 /* : String */;
val* var327 /* : nullable Int */;
val* var328 /* : nullable Int */;
val* var329 /* : nullable Bool */;
val* var330 /* : nullable Bool */;
val* var331 /* : String */;
val* var332 /* : Path */;
val* var333 /* : FileWriter */;
var_args = p0;
{
{ /* Inline toolcontext$ToolContext$opt_warn (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 360);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline opts$Option$value= (var,1l) on <var:OptionCount> */
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
{ /* Inline toolcontext$ToolContext$option_context (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
opts___opts__OptionContext___parse(var6, var_args); /* Direct call opts$OptionContext$parse on <var6:OptionContext>*/
}
{
{ /* Inline toolcontext$ToolContext$opt_help (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_help].val; /* _opt_help on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_help");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 381);
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
{
nitc___nitc__ToolContext___usage(self); /* Direct call toolcontext$ToolContext$usage on <self:ToolContext>*/
}
var16 = glob_sys;
{
{ /* Inline kernel$Sys$exit (var16,0l) on <var16:Sys> */
exit((int)0l);
RET_LABEL17:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext$ToolContext$opt_version (self) on <self:ToolContext> */
var20 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_version].val; /* _opt_version on <self:ToolContext> */
if (unlikely(var20 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_version");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 384);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline opts$Option$value (var18) on <var18:OptionBool> */
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
core__file___Sys___print(var25, var26); /* Direct call file$Sys$print on <var25:Sys>*/
}
var27 = glob_sys;
{
{ /* Inline kernel$Sys$exit (var27,0l) on <var27:Sys> */
exit((int)0l);
RET_LABEL28:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext$ToolContext$opt_bash_completion (self) on <self:ToolContext> */
var31 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_bash_completion].val; /* _opt_bash_completion on <self:ToolContext> */
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_bash_completion");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 402);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline opts$Option$value (var29) on <var29:OptionBool> */
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
{ /* Inline kernel$Object$sys (self) on <self:ToolContext> */
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
template___template__Template___core__stream__Writable__write_to(var_bash_completion, var40); /* Direct call template$Template$write_to on <var_bash_completion:BashCompletion>*/
}
var41 = glob_sys;
{
{ /* Inline kernel$Sys$exit (var41,0l) on <var41:Sys> */
exit((int)0l);
RET_LABEL42:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext$ToolContext$opt_stub_man (self) on <self:ToolContext> */
var45 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_stub_man].val; /* _opt_stub_man on <self:ToolContext> */
if (unlikely(var45 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stub_man");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 405);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline opts$Option$value (var43) on <var43:OptionBool> */
var48 = var43->attrs[COLOR_opts__Option___value].val; /* _value on <var43:OptionBool> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
var49 = (short int)((long)(var46)>>2);
if (var49){
var50 = glob_sys;
if (unlikely(varonce==NULL)) {
var51 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "# NAME\n\n";
var56 = (val*)(8l<<2|1);
var57 = (val*)(8l<<2|1);
var58 = (val*)((long)(0)<<2|3);
var59 = (val*)((long)(0)<<2|3);
var55 = core__flat___CString___to_s_unsafe(var54, var56, var57, var58, var59);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var51)->values[0]=var53;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "\n\n# SYNOPSYS\n\n# OPTIONS\n";
var64 = (val*)(24l<<2|1);
var65 = (val*)(24l<<2|1);
var66 = (val*)((long)(0)<<2|3);
var67 = (val*)((long)(0)<<2|3);
var63 = core__flat___CString___to_s_unsafe(var62, var64, var65, var66, var67);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var51)->values[2]=var61;
} else {
var51 = varonce;
varonce = NULL;
}
{
{ /* Inline toolcontext$ToolContext$tooldescription (self) on <self:ToolContext> */
var70 = self->attrs[COLOR_nitc__toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var70 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 421);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "\n";
var75 = (val*)(1l<<2|1);
var76 = (val*)(1l<<2|1);
var77 = (val*)((long)(0)<<2|3);
var78 = (val*)((long)(0)<<2|3);
var74 = core__flat___CString___to_s_unsafe(var73, var75, var76, var77, var78);
var72 = var74;
varonce71 = var72;
}
{
var79 = core__string_search___Text___split(var68, var72);
}
{
var80 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var79, 1l);
}
((struct instance_core__NativeArray*)var51)->values[1]=var80;
{
var81 = ((val*(*)(val* self))(var51->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce = var51;
{
core__file___Sys___print(var50, var81); /* Direct call file$Sys$print on <var50:Sys>*/
}
{
{ /* Inline toolcontext$ToolContext$option_context (self) on <self:ToolContext> */
var84 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var84 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline opts$OptionContext$options (var82) on <var82:OptionContext> */
var87 = var82->attrs[COLOR_opts__OptionContext___options].val; /* _options on <var82:OptionContext> */
if (unlikely(var87 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 283);
fatal_exit(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
var_ = var85;
{
var88 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_89 = var88;
for(;;) {
{
var90 = ((short int(*)(val* self))((((long)var_89&3)?class_info[((long)var_89&3)]:var_89->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_89); /* is_ok on <var_89:IndexedIterator[Option]>*/
}
if (var90){
} else {
goto BREAK_label;
}
{
var91 = ((val*(*)(val* self))((((long)var_89&3)?class_info[((long)var_89&3)]:var_89->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_89); /* item on <var_89:IndexedIterator[Option]>*/
}
var_o = var91;
var_first = 1;
var92 = glob_sys;
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "### ";
var97 = (val*)(4l<<2|1);
var98 = (val*)(4l<<2|1);
var99 = (val*)((long)(0)<<2|3);
var100 = (val*)((long)(0)<<2|3);
var96 = core__flat___CString___to_s_unsafe(var95, var97, var98, var99, var100);
var94 = var96;
varonce93 = var94;
}
var101 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var101 = array_instance Array[Object] */
var102 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var102)->values[0] = (val*) var94;
{
((void(*)(val* self, val* p0, long p1))(var101->class->vft[COLOR_core__array__Array__with_native]))(var101, var102, 1l); /* with_native on <var101:Array[Object]>*/
}
}
{
core__file___Sys___printn(var92, var101); /* Direct call file$Sys$printn on <var92:Sys>*/
}
{
{ /* Inline opts$Option$names (var_o) on <var_o:Option> */
var105 = var_o->attrs[COLOR_opts__Option___names].val; /* _names on <var_o:Option> */
if (unlikely(var105 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 19);
fatal_exit(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
var_106 = var103;
{
var107 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_106);
}
var_108 = var107;
for(;;) {
{
var109 = ((short int(*)(val* self))((((long)var_108&3)?class_info[((long)var_108&3)]:var_108->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_108); /* is_ok on <var_108:IndexedIterator[String]>*/
}
if (var109){
} else {
goto BREAK_label110;
}
{
var111 = ((val*(*)(val* self))((((long)var_108&3)?class_info[((long)var_108&3)]:var_108->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_108); /* item on <var_108:IndexedIterator[String]>*/
}
var_n = var111;
if (var_first){
var_first = 0;
} else {
var112 = glob_sys;
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = ", ";
var117 = (val*)(2l<<2|1);
var118 = (val*)(2l<<2|1);
var119 = (val*)((long)(0)<<2|3);
var120 = (val*)((long)(0)<<2|3);
var116 = core__flat___CString___to_s_unsafe(var115, var117, var118, var119, var120);
var114 = var116;
varonce113 = var114;
}
var121 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var121 = array_instance Array[Object] */
var122 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var122)->values[0] = (val*) var114;
{
((void(*)(val* self, val* p0, long p1))(var121->class->vft[COLOR_core__array__Array__with_native]))(var121, var122, 1l); /* with_native on <var121:Array[Object]>*/
}
}
{
core__file___Sys___printn(var112, var121); /* Direct call file$Sys$printn on <var112:Sys>*/
}
}
var123 = glob_sys;
if (unlikely(varonce124==NULL)) {
var125 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = "`";
var130 = (val*)(1l<<2|1);
var131 = (val*)(1l<<2|1);
var132 = (val*)((long)(0)<<2|3);
var133 = (val*)((long)(0)<<2|3);
var129 = core__flat___CString___to_s_unsafe(var128, var130, var131, var132, var133);
var127 = var129;
varonce126 = var127;
}
((struct instance_core__NativeArray*)var125)->values[0]=var127;
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "`";
var138 = (val*)(1l<<2|1);
var139 = (val*)(1l<<2|1);
var140 = (val*)((long)(0)<<2|3);
var141 = (val*)((long)(0)<<2|3);
var137 = core__flat___CString___to_s_unsafe(var136, var138, var139, var140, var141);
var135 = var137;
varonce134 = var135;
}
((struct instance_core__NativeArray*)var125)->values[2]=var135;
} else {
var125 = varonce124;
varonce124 = NULL;
}
((struct instance_core__NativeArray*)var125)->values[1]=var_n;
{
var142 = ((val*(*)(val* self))(var125->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var125); /* native_to_s on <var125:NativeArray[String]>*/
}
varonce124 = var125;
var143 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var143 = array_instance Array[Object] */
var144 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var144)->values[0] = (val*) var142;
{
((void(*)(val* self, val* p0, long p1))(var143->class->vft[COLOR_core__array__Array__with_native]))(var143, var144, 1l); /* with_native on <var143:Array[Object]>*/
}
}
{
core__file___Sys___printn(var123, var143); /* Direct call file$Sys$printn on <var123:Sys>*/
}
{
((void(*)(val* self))((((long)var_108&3)?class_info[((long)var_108&3)]:var_108->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_108); /* next on <var_108:IndexedIterator[String]>*/
}
}
BREAK_label110: (void)0;
{
((void(*)(val* self))((((long)var_108&3)?class_info[((long)var_108&3)]:var_108->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_108); /* finish on <var_108:IndexedIterator[String]>*/
}
var145 = glob_sys;
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "";
var150 = (val*)(0l<<2|1);
var151 = (val*)(0l<<2|1);
var152 = (val*)((long)(0)<<2|3);
var153 = (val*)((long)(0)<<2|3);
var149 = core__flat___CString___to_s_unsafe(var148, var150, var151, var152, var153);
var147 = var149;
varonce146 = var147;
}
{
core__file___Sys___print(var145, var147); /* Direct call file$Sys$print on <var145:Sys>*/
}
var154 = glob_sys;
if (unlikely(varonce155==NULL)) {
var156 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce157!=NULL)) {
var158 = varonce157;
} else {
var159 = ".";
var161 = (val*)(1l<<2|1);
var162 = (val*)(1l<<2|1);
var163 = (val*)((long)(0)<<2|3);
var164 = (val*)((long)(0)<<2|3);
var160 = core__flat___CString___to_s_unsafe(var159, var161, var162, var163, var164);
var158 = var160;
varonce157 = var158;
}
((struct instance_core__NativeArray*)var156)->values[1]=var158;
} else {
var156 = varonce155;
varonce155 = NULL;
}
{
{ /* Inline opts$Option$helptext (var_o) on <var_o:Option> */
var167 = var_o->attrs[COLOR_opts__Option___helptext].val; /* _helptext on <var_o:Option> */
if (unlikely(var167 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _helptext");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 25);
fatal_exit(1);
}
var165 = var167;
RET_LABEL166:(void)0;
}
}
((struct instance_core__NativeArray*)var156)->values[0]=var165;
{
var168 = ((val*(*)(val* self))(var156->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var156); /* native_to_s on <var156:NativeArray[String]>*/
}
varonce155 = var156;
{
core__file___Sys___print(var154, var168); /* Direct call file$Sys$print on <var154:Sys>*/
}
var169 = glob_sys;
if (likely(varonce170!=NULL)) {
var171 = varonce170;
} else {
var172 = "";
var174 = (val*)(0l<<2|1);
var175 = (val*)(0l<<2|1);
var176 = (val*)((long)(0)<<2|3);
var177 = (val*)((long)(0)<<2|3);
var173 = core__flat___CString___to_s_unsafe(var172, var174, var175, var176, var177);
var171 = var173;
varonce170 = var171;
}
{
core__file___Sys___print(var169, var171); /* Direct call file$Sys$print on <var169:Sys>*/
}
{
((void(*)(val* self))((((long)var_89&3)?class_info[((long)var_89&3)]:var_89->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_89); /* next on <var_89:IndexedIterator[Option]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_89&3)?class_info[((long)var_89&3)]:var_89->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_89); /* finish on <var_89:IndexedIterator[Option]>*/
}
var178 = glob_sys;
if (likely(varonce179!=NULL)) {
var180 = varonce179;
} else {
var181 = "# SEE ALSO\n\nThe Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>";
var183 = (val*)(137l<<2|1);
var184 = (val*)(137l<<2|1);
var185 = (val*)((long)(0)<<2|3);
var186 = (val*)((long)(0)<<2|3);
var182 = core__flat___CString___to_s_unsafe(var181, var183, var184, var185, var186);
var180 = var182;
varonce179 = var180;
}
{
core__file___Sys___print(var178, var180); /* Direct call file$Sys$print on <var178:Sys>*/
}
var187 = glob_sys;
{
{ /* Inline kernel$Sys$exit (var187,0l) on <var187:Sys> */
exit((int)0l);
RET_LABEL188:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext$ToolContext$option_context (self) on <self:ToolContext> */
var191 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var191 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var189 = var191;
RET_LABEL190:(void)0;
}
}
{
var192 = opts___opts__OptionContext___errors(var189);
}
var_errors = var192;
{
var193 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_errors);
}
var194 = !var193;
if (var194){
var_195 = var_errors;
{
var196 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_195);
}
var_197 = var196;
for(;;) {
{
var198 = ((short int(*)(val* self))((((long)var_197&3)?class_info[((long)var_197&3)]:var_197->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_197); /* is_ok on <var_197:IndexedIterator[String]>*/
}
if (var198){
} else {
goto BREAK_label199;
}
{
var200 = ((val*(*)(val* self))((((long)var_197&3)?class_info[((long)var_197&3)]:var_197->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_197); /* item on <var_197:IndexedIterator[String]>*/
}
var_e = var200;
var201 = glob_sys;
if (unlikely(varonce202==NULL)) {
var203 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce204!=NULL)) {
var205 = varonce204;
} else {
var206 = "Error: ";
var208 = (val*)(7l<<2|1);
var209 = (val*)(7l<<2|1);
var210 = (val*)((long)(0)<<2|3);
var211 = (val*)((long)(0)<<2|3);
var207 = core__flat___CString___to_s_unsafe(var206, var208, var209, var210, var211);
var205 = var207;
varonce204 = var205;
}
((struct instance_core__NativeArray*)var203)->values[0]=var205;
} else {
var203 = varonce202;
varonce202 = NULL;
}
((struct instance_core__NativeArray*)var203)->values[1]=var_e;
{
var212 = ((val*(*)(val* self))(var203->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var203); /* native_to_s on <var203:NativeArray[String]>*/
}
varonce202 = var203;
{
core__file___Sys___print(var201, var212); /* Direct call file$Sys$print on <var201:Sys>*/
}
{
((void(*)(val* self))((((long)var_197&3)?class_info[((long)var_197&3)]:var_197->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_197); /* next on <var_197:IndexedIterator[String]>*/
}
}
BREAK_label199: (void)0;
{
((void(*)(val* self))((((long)var_197&3)?class_info[((long)var_197&3)]:var_197->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_197); /* finish on <var_197:IndexedIterator[String]>*/
}
var213 = glob_sys;
{
{ /* Inline toolcontext$ToolContext$tooldescription (self) on <self:ToolContext> */
var216 = self->attrs[COLOR_nitc__toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var216 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 421);
fatal_exit(1);
}
var214 = var216;
RET_LABEL215:(void)0;
}
}
{
core__file___Sys___print(var213, var214); /* Direct call file$Sys$print on <var213:Sys>*/
}
var217 = glob_sys;
if (likely(varonce218!=NULL)) {
var219 = varonce218;
} else {
var220 = "Use --help for help";
var222 = (val*)(19l<<2|1);
var223 = (val*)(19l<<2|1);
var224 = (val*)((long)(0)<<2|3);
var225 = (val*)((long)(0)<<2|3);
var221 = core__flat___CString___to_s_unsafe(var220, var222, var223, var224, var225);
var219 = var221;
varonce218 = var219;
}
{
core__file___Sys___print(var217, var219); /* Direct call file$Sys$print on <var217:Sys>*/
}
var226 = glob_sys;
{
{ /* Inline kernel$Sys$exit (var226,1l) on <var226:Sys> */
exit((int)1l);
RET_LABEL227:(void)0;
}
}
} else {
}
{
var228 = nitc___nitc__ToolContext___locate_nit_dir(self);
}
{
{ /* Inline toolcontext$ToolContext$nit_dir= (self,var228) on <self:ToolContext> */
self->attrs[COLOR_nitc__toolcontext__ToolContext___nit_dir].val = var228; /* _nit_dir on <self:ToolContext> */
RET_LABEL229:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$option_context (self) on <self:ToolContext> */
var233 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var233 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
{ /* Inline opts$OptionContext$rest (var231) on <var231:OptionContext> */
var236 = var231->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <var231:OptionContext> */
if (unlikely(var236 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _rest");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 286);
fatal_exit(1);
}
var234 = var236;
RET_LABEL235:(void)0;
}
}
{
var237 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var234);
}
var_238 = var237;
if (var237){
{
{ /* Inline toolcontext$ToolContext$accept_no_arguments (self) on <self:ToolContext> */
var241 = self->attrs[COLOR_nitc__toolcontext__ToolContext___accept_no_arguments].s; /* _accept_no_arguments on <self:ToolContext> */
var239 = var241;
RET_LABEL240:(void)0;
}
}
var242 = !var239;
var230 = var242;
} else {
var230 = var_238;
}
if (var230){
var243 = glob_sys;
{
{ /* Inline toolcontext$ToolContext$tooldescription (self) on <self:ToolContext> */
var246 = self->attrs[COLOR_nitc__toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var246 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 421);
fatal_exit(1);
}
var244 = var246;
RET_LABEL245:(void)0;
}
}
{
core__file___Sys___print(var243, var244); /* Direct call file$Sys$print on <var243:Sys>*/
}
var247 = glob_sys;
if (likely(varonce248!=NULL)) {
var249 = varonce248;
} else {
var250 = "Use --help for help";
var252 = (val*)(19l<<2|1);
var253 = (val*)(19l<<2|1);
var254 = (val*)((long)(0)<<2|3);
var255 = (val*)((long)(0)<<2|3);
var251 = core__flat___CString___to_s_unsafe(var250, var252, var253, var254, var255);
var249 = var251;
varonce248 = var249;
}
{
core__file___Sys___print(var247, var249); /* Direct call file$Sys$print on <var247:Sys>*/
}
var256 = glob_sys;
{
{ /* Inline kernel$Sys$exit (var256,1l) on <var256:Sys> */
exit((int)1l);
RET_LABEL257:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext$ToolContext$opt_verbose (self) on <self:ToolContext> */
var260 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_verbose].val; /* _opt_verbose on <self:ToolContext> */
if (unlikely(var260 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_verbose");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 390);
fatal_exit(1);
}
var258 = var260;
RET_LABEL259:(void)0;
}
}
{
{ /* Inline opts$Option$value (var258) on <var258:OptionCount> */
var263 = var258->attrs[COLOR_opts__Option___value].val; /* _value on <var258:OptionCount> */
var261 = var263;
RET_LABEL262:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$verbose_level= (self,var261) on <self:ToolContext> */
var265 = (long)(var261)>>2;
self->attrs[COLOR_nitc__toolcontext__ToolContext___verbose_level].l = var265; /* _verbose_level on <self:ToolContext> */
RET_LABEL264:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$opt_keep_going (self) on <self:ToolContext> */
var268 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_keep_going].val; /* _opt_keep_going on <self:ToolContext> */
if (unlikely(var268 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_keep_going");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 396);
fatal_exit(1);
}
var266 = var268;
RET_LABEL267:(void)0;
}
}
{
{ /* Inline opts$Option$value (var266) on <var266:OptionBool> */
var271 = var266->attrs[COLOR_opts__Option___value].val; /* _value on <var266:OptionBool> */
var269 = var271;
RET_LABEL270:(void)0;
}
}
var272 = (short int)((long)(var269)>>2);
if (var272){
{
{ /* Inline toolcontext$ToolContext$keep_going= (self,1) on <self:ToolContext> */
self->attrs[COLOR_nitc__toolcontext__ToolContext___keep_going].s = 1; /* _keep_going on <self:ToolContext> */
RET_LABEL273:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext$ToolContext$opt_quiet (self) on <self:ToolContext> */
var276 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_quiet].val; /* _opt_quiet on <self:ToolContext> */
if (unlikely(var276 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_quiet");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 366);
fatal_exit(1);
}
var274 = var276;
RET_LABEL275:(void)0;
}
}
{
{ /* Inline opts$Option$value (var274) on <var274:OptionBool> */
var279 = var274->attrs[COLOR_opts__Option___value].val; /* _value on <var274:OptionBool> */
var277 = var279;
RET_LABEL278:(void)0;
}
}
var280 = (short int)((long)(var277)>>2);
if (var280){
{
{ /* Inline toolcontext$ToolContext$opt_warn (self) on <self:ToolContext> */
var283 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var283 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 360);
fatal_exit(1);
}
var281 = var283;
RET_LABEL282:(void)0;
}
}
{
{ /* Inline opts$Option$value= (var281,0l) on <var281:OptionCount> */
/* Covariant cast for argument 0 (value) <0l:Int> isa VALUE */
/* <0l:Int> isa VALUE */
type_struct288 = var281->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype286 = type_struct288->color;
idtype287 = type_struct288->id;
if(cltype286 >= (&type_core__Int)->table_size) {
var285 = 0;
} else {
var285 = (&type_core__Int)->type_table[cltype286] == idtype287;
}
if (unlikely(!var285)) {
var_class_name289 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name289);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var290 = (val*)(0l<<2|1);
var281->attrs[COLOR_opts__Option___value].val = var290; /* _value on <var281:OptionCount> */
RET_LABEL284:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext$ToolContext$opt_log_dir (self) on <self:ToolContext> */
var293 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_log_dir].val; /* _opt_log_dir on <self:ToolContext> */
if (unlikely(var293 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 372);
fatal_exit(1);
}
var291 = var293;
RET_LABEL292:(void)0;
}
}
{
{ /* Inline opts$Option$value (var291) on <var291:OptionString> */
var296 = var291->attrs[COLOR_opts__Option___value].val; /* _value on <var291:OptionString> */
var294 = var296;
RET_LABEL295:(void)0;
}
}
if (var294 == NULL) {
var297 = 0; /* is null */
} else {
var297 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel$Object$!= (var294,((val*)NULL)) on <var294:nullable Object(nullable String)> */
var_other = ((val*)NULL);
{
var300 = ((short int(*)(val* self, val* p0))(var294->class->vft[COLOR_core__kernel__Object___61d_61d]))(var294, var_other); /* == on <var294:nullable Object(String)>*/
}
var301 = !var300;
var298 = var301;
goto RET_LABEL299;
RET_LABEL299:(void)0;
}
var297 = var298;
}
if (var297){
{
{ /* Inline toolcontext$ToolContext$opt_log_dir (self) on <self:ToolContext> */
var304 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_log_dir].val; /* _opt_log_dir on <self:ToolContext> */
if (unlikely(var304 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 372);
fatal_exit(1);
}
var302 = var304;
RET_LABEL303:(void)0;
}
}
{
{ /* Inline opts$Option$value (var302) on <var302:OptionString> */
var307 = var302->attrs[COLOR_opts__Option___value].val; /* _value on <var302:OptionString> */
var305 = var307;
RET_LABEL306:(void)0;
}
}
if (unlikely(var305 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 520);
fatal_exit(1);
}
{
{ /* Inline toolcontext$ToolContext$log_directory= (self,var305) on <self:ToolContext> */
self->attrs[COLOR_nitc__toolcontext__ToolContext___log_directory].val = var305; /* _log_directory on <self:ToolContext> */
RET_LABEL308:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext$ToolContext$opt_log (self) on <self:ToolContext> */
var311 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_log].val; /* _opt_log on <self:ToolContext> */
if (unlikely(var311 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 369);
fatal_exit(1);
}
var309 = var311;
RET_LABEL310:(void)0;
}
}
{
{ /* Inline opts$Option$value (var309) on <var309:OptionBool> */
var314 = var309->attrs[COLOR_opts__Option___value].val; /* _value on <var309:OptionBool> */
var312 = var314;
RET_LABEL313:(void)0;
}
}
var315 = (short int)((long)(var312)>>2);
if (var315){
{
{ /* Inline toolcontext$ToolContext$log_directory (self) on <self:ToolContext> */
var318 = self->attrs[COLOR_nitc__toolcontext__ToolContext___log_directory].val; /* _log_directory on <self:ToolContext> */
if (unlikely(var318 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _log_directory");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 151);
fatal_exit(1);
}
var316 = var318;
RET_LABEL317:(void)0;
}
}
{
var319 = core__file___String___mkdir(var316, ((val*)NULL));
}
{
{ /* Inline toolcontext$ToolContext$log_directory (self) on <self:ToolContext> */
var322 = self->attrs[COLOR_nitc__toolcontext__ToolContext___log_directory].val; /* _log_directory on <self:ToolContext> */
if (unlikely(var322 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _log_directory");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 151);
fatal_exit(1);
}
var320 = var322;
RET_LABEL321:(void)0;
}
}
if (likely(varonce323!=NULL)) {
var324 = varonce323;
} else {
var325 = "info.txt";
var327 = (val*)(8l<<2|1);
var328 = (val*)(8l<<2|1);
var329 = (val*)((long)(0)<<2|3);
var330 = (val*)((long)(0)<<2|3);
var326 = core__flat___CString___to_s_unsafe(var325, var327, var328, var329, var330);
var324 = var326;
varonce323 = var324;
}
{
var331 = core__file___String____47d(var320, var324);
}
{
var332 = core__file___Text___to_path(var331);
}
{
var333 = core___core__Path___open_wo(var332);
}
{
{ /* Inline toolcontext$ToolContext$log_info= (self,var333) on <self:ToolContext> */
self->attrs[COLOR_nitc__toolcontext__ToolContext___log_info].val = var333; /* _log_info on <self:ToolContext> */
RET_LABEL334:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method toolcontext$ToolContext$version for (self: ToolContext): String */
val* nitc___nitc__ToolContext___version(val* self) {
val* var /* : String */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
val* var4 /* : nullable Object */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
val* var15 /* : Sys */;
val* var16 /* : String */;
{
{ /* Inline toolcontext$ToolContext$opt_set_dummy_tool (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 387);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline opts$Option$value (var1) on <var1:OptionBool> */
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
var11 = (val*)(13l<<2|1);
var12 = (val*)(13l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce = var8;
}
var = var8;
goto RET_LABEL;
} else {
}
var15 = glob_sys;
{
var16 = nitc__version___core__Sys___nit_version(var15);
}
var = var16;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$toolname for (self: ToolContext): String */
val* nitc___nitc__ToolContext___toolname(val* self) {
val* var /* : String */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
val* var4 /* : nullable Object */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
val* var15 /* : Sys */;
val* var17 /* : Sys */;
val* var18 /* : String */;
val* var19 /* : String */;
{
{ /* Inline toolcontext$ToolContext$opt_set_dummy_tool (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 387);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline opts$Option$value (var1) on <var1:OptionBool> */
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
var11 = (val*)(10l<<2|1);
var12 = (val*)(10l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce = var8;
}
var = var8;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel$Object$sys (self) on <self:ToolContext> */
var17 = glob_sys;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
var18 = core__abstract_text___Sys___program_name(var15);
}
{
var19 = ((val*(*)(val* self, val* p0))(var18->class->vft[COLOR_core__file__String__basename]))(var18, ((val*)NULL)); /* basename on <var18:String>*/
}
var = var19;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$nit_dir for (self: ToolContext): nullable String */
val* nitc___nitc__ToolContext___nit_dir(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nitc__toolcontext__ToolContext___nit_dir].val; /* _nit_dir on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$nit_dir= for (self: ToolContext, nullable String) */
void nitc___nitc__ToolContext___nit_dir_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__toolcontext__ToolContext___nit_dir].val = p0; /* _nit_dir on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext$ToolContext$locate_nit_dir for (self: ToolContext): String */
val* nitc___nitc__ToolContext___locate_nit_dir(val* self) {
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
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Bool */;
val* var39 /* : nullable Bool */;
val* var40 /* : String */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
val* var46 /* : NativeArray[String] */;
static val* varonce45;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Bool */;
val* var54 /* : nullable Bool */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : CString */;
val* var58 /* : String */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Bool */;
val* var62 /* : nullable Bool */;
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
val* var74 /* : Sys */;
val* var76 /* : Sys */;
val* var77 /* : String */;
val* var78 /* : String */;
val* var79 /* : String */;
short int var80 /* : Bool */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
val* var86 /* : nullable Int */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Bool */;
val* var89 /* : nullable Bool */;
val* var_exe /* var exe: String */;
short int var90 /* : Bool */;
val* var91 /* : String */;
val* var92 /* : String */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : CString */;
val* var96 /* : String */;
val* var97 /* : nullable Int */;
val* var98 /* : nullable Int */;
val* var99 /* : nullable Bool */;
val* var100 /* : nullable Bool */;
val* var101 /* : String */;
short int var102 /* : Bool */;
val* var103 /* : String */;
val* var104 /* : String */;
val* var105 /* : Sys */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : CString */;
val* var112 /* : String */;
val* var113 /* : nullable Int */;
val* var114 /* : nullable Int */;
val* var115 /* : nullable Bool */;
val* var116 /* : nullable Bool */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : CString */;
val* var120 /* : String */;
val* var121 /* : nullable Int */;
val* var122 /* : nullable Int */;
val* var123 /* : nullable Bool */;
val* var124 /* : nullable Bool */;
val* var_path_sep /* var path_sep: String */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : CString */;
val* var128 /* : String */;
val* var129 /* : nullable Int */;
val* var130 /* : nullable Int */;
val* var131 /* : nullable Bool */;
val* var132 /* : nullable Bool */;
val* var133 /* : String */;
val* var134 /* : Array[String] */;
val* var_ps /* var ps: Array[String] */;
val* var_ /* var : Array[String] */;
val* var135 /* : IndexedIterator[nullable Object] */;
val* var_136 /* var : IndexedIterator[String] */;
short int var137 /* : Bool */;
val* var138 /* : nullable Object */;
val* var_p /* var p: String */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : CString */;
val* var142 /* : String */;
val* var143 /* : nullable Int */;
val* var144 /* : nullable Int */;
val* var145 /* : nullable Bool */;
val* var146 /* : nullable Bool */;
val* var147 /* : String */;
short int var148 /* : Bool */;
val* var149 /* : String */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : CString */;
val* var153 /* : String */;
val* var154 /* : nullable Int */;
val* var155 /* : nullable Int */;
val* var156 /* : nullable Bool */;
val* var157 /* : nullable Bool */;
{
{ /* Inline toolcontext$ToolContext$opt_nit_dir (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__toolcontext__ToolContext___opt_nit_dir].val; /* _opt_nit_dir on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_nit_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 375);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline opts$Option$value (var1) on <var1:OptionString> */
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
{ /* Inline kernel$Object$!= (var_res,((val*)NULL)) on <var_res:nullable String> */
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
var14 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "Fatal Error: the value of --nit-dir does not seem to be a valid base Nit directory: ";
var19 = (val*)(84l<<2|1);
var20 = (val*)(84l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var14)->values[0]=var16;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = ".";
var27 = (val*)(1l<<2|1);
var28 = (val*)(1l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var14)->values[2]=var24;
} else {
var14 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var14)->values[1]=var_res;
{
var31 = ((val*(*)(val* self))(var14->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce = var14;
{
nitc___nitc__ToolContext___fatal_error(self, ((val*)NULL), var31); /* Direct call toolcontext$ToolContext$fatal_error on <self:ToolContext>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "NIT_DIR";
var36 = (val*)(7l<<2|1);
var37 = (val*)(7l<<2|1);
var38 = (val*)((long)(0)<<2|3);
var39 = (val*)((long)(0)<<2|3);
var35 = core__flat___CString___to_s_unsafe(var34, var36, var37, var38, var39);
var33 = var35;
varonce32 = var33;
}
{
var40 = core__environ___String___environ(var33);
}
var_res = var40;
{
var41 = ((short int(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_res); /* is_empty on <var_res:nullable String(String)>*/
}
var42 = !var41;
if (var42){
{
var43 = nitc___nitc__ToolContext___check_nit_dir(self, var_res);
}
var44 = !var43;
if (var44){
if (unlikely(varonce45==NULL)) {
var46 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "Fatal Error: the value of NIT_DIR does not seem to be a valid base Nit directory: ";
var51 = (val*)(82l<<2|1);
var52 = (val*)(82l<<2|1);
var53 = (val*)((long)(0)<<2|3);
var54 = (val*)((long)(0)<<2|3);
var50 = core__flat___CString___to_s_unsafe(var49, var51, var52, var53, var54);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var46)->values[0]=var48;
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = ".";
var59 = (val*)(1l<<2|1);
var60 = (val*)(1l<<2|1);
var61 = (val*)((long)(0)<<2|3);
var62 = (val*)((long)(0)<<2|3);
var58 = core__flat___CString___to_s_unsafe(var57, var59, var60, var61, var62);
var56 = var58;
varonce55 = var56;
}
((struct instance_core__NativeArray*)var46)->values[2]=var56;
} else {
var46 = varonce45;
varonce45 = NULL;
}
((struct instance_core__NativeArray*)var46)->values[1]=var_res;
{
var63 = ((val*(*)(val* self))(var46->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var46); /* native_to_s on <var46:NativeArray[String]>*/
}
varonce45 = var46;
{
nitc___nitc__ToolContext___fatal_error(self, ((val*)NULL), var63); /* Direct call toolcontext$ToolContext$fatal_error on <self:ToolContext>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
if (unlikely(varonce64==NULL)) {
var65 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "/..";
var70 = (val*)(3l<<2|1);
var71 = (val*)(3l<<2|1);
var72 = (val*)((long)(0)<<2|3);
var73 = (val*)((long)(0)<<2|3);
var69 = core__flat___CString___to_s_unsafe(var68, var70, var71, var72, var73);
var67 = var69;
varonce66 = var67;
}
((struct instance_core__NativeArray*)var65)->values[1]=var67;
} else {
var65 = varonce64;
varonce64 = NULL;
}
{
{ /* Inline kernel$Object$sys (self) on <self:ToolContext> */
var76 = glob_sys;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
{
var77 = core__abstract_text___Sys___program_name(var74);
}
{
var78 = core__file___String___dirname(var77);
}
((struct instance_core__NativeArray*)var65)->values[0]=var78;
{
var79 = ((val*(*)(val* self))(var65->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var65); /* native_to_s on <var65:NativeArray[String]>*/
}
varonce64 = var65;
var_res = var79;
{
var80 = nitc___nitc__ToolContext___check_nit_dir(self, var_res);
}
if (var80){
{
var81 = core__file___String___simplify_path(var_res);
}
var = var81;
goto RET_LABEL;
} else {
}
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "/proc/self/exe";
var86 = (val*)(14l<<2|1);
var87 = (val*)(14l<<2|1);
var88 = (val*)((long)(0)<<2|3);
var89 = (val*)((long)(0)<<2|3);
var85 = core__flat___CString___to_s_unsafe(var84, var86, var87, var88, var89);
var83 = var85;
varonce82 = var83;
}
var_exe = var83;
{
var90 = core__file___Text___file_exists(var_exe);
}
if (var90){
{
var91 = core__file___String___realpath(var_exe);
}
var_res = var91;
{
var92 = core__file___String___dirname(var_res);
}
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "..";
var97 = (val*)(2l<<2|1);
var98 = (val*)(2l<<2|1);
var99 = (val*)((long)(0)<<2|3);
var100 = (val*)((long)(0)<<2|3);
var96 = core__flat___CString___to_s_unsafe(var95, var97, var98, var99, var100);
var94 = var96;
varonce93 = var94;
}
{
var101 = core__file___String___join_path(var92, var94);
}
var_res = var101;
{
var102 = nitc___nitc__ToolContext___check_nit_dir(self, var_res);
}
if (var102){
{
var103 = core__file___String___simplify_path(var_res);
}
var = var103;
goto RET_LABEL;
} else {
}
} else {
}
var105 = glob_sys;
{
{ /* Inline kernel$Sys$is_windows (var105) on <var105:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var105;
var108 = core__kernel___Sys_is_windows___impl(var_for_c_0);
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
if (var106){
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = ";";
var113 = (val*)(1l<<2|1);
var114 = (val*)(1l<<2|1);
var115 = (val*)((long)(0)<<2|3);
var116 = (val*)((long)(0)<<2|3);
var112 = core__flat___CString___to_s_unsafe(var111, var113, var114, var115, var116);
var110 = var112;
varonce109 = var110;
}
var104 = var110;
} else {
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = ":";
var121 = (val*)(1l<<2|1);
var122 = (val*)(1l<<2|1);
var123 = (val*)((long)(0)<<2|3);
var124 = (val*)((long)(0)<<2|3);
var120 = core__flat___CString___to_s_unsafe(var119, var121, var122, var123, var124);
var118 = var120;
varonce117 = var118;
}
var104 = var118;
}
var_path_sep = var104;
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "PATH";
var129 = (val*)(4l<<2|1);
var130 = (val*)(4l<<2|1);
var131 = (val*)((long)(0)<<2|3);
var132 = (val*)((long)(0)<<2|3);
var128 = core__flat___CString___to_s_unsafe(var127, var129, var130, var131, var132);
var126 = var128;
varonce125 = var126;
}
{
var133 = core__environ___String___environ(var126);
}
{
var134 = core__string_search___Text___split(var133, var_path_sep);
}
var_ps = var134;
var_ = var_ps;
{
var135 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_136 = var135;
for(;;) {
{
var137 = ((short int(*)(val* self))((((long)var_136&3)?class_info[((long)var_136&3)]:var_136->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_136); /* is_ok on <var_136:IndexedIterator[String]>*/
}
if (var137){
} else {
goto BREAK_label;
}
{
var138 = ((val*(*)(val* self))((((long)var_136&3)?class_info[((long)var_136&3)]:var_136->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_136); /* item on <var_136:IndexedIterator[String]>*/
}
var_p = var138;
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = "..";
var143 = (val*)(2l<<2|1);
var144 = (val*)(2l<<2|1);
var145 = (val*)((long)(0)<<2|3);
var146 = (val*)((long)(0)<<2|3);
var142 = core__flat___CString___to_s_unsafe(var141, var143, var144, var145, var146);
var140 = var142;
varonce139 = var140;
}
{
var147 = core__file___String____47d(var_p, var140);
}
var_res = var147;
{
var148 = nitc___nitc__ToolContext___check_nit_dir(self, var_res);
}
if (var148){
{
var149 = core__file___String___simplify_path(var_res);
}
var = var149;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_136&3)?class_info[((long)var_136&3)]:var_136->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_136); /* next on <var_136:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_136&3)?class_info[((long)var_136&3)]:var_136->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_136); /* finish on <var_136:IndexedIterator[String]>*/
}
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = "Fatal Error: cannot locate a valid base Nit directory. It is quite unexpected. Try to set the environment variable `NIT_DIR` or to use the `--nit-dir` option.";
var154 = (val*)(158l<<2|1);
var155 = (val*)(158l<<2|1);
var156 = (val*)((long)(0)<<2|3);
var157 = (val*)((long)(0)<<2|3);
var153 = core__flat___CString___to_s_unsafe(var152, var154, var155, var156, var157);
var151 = var153;
varonce150 = var151;
}
{
nitc___nitc__ToolContext___fatal_error(self, ((val*)NULL), var151); /* Direct call toolcontext$ToolContext$fatal_error on <self:ToolContext>*/
}
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 621);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method toolcontext$ToolContext$check_nit_dir for (self: ToolContext, String): Bool */
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
char* var6 /* : CString */;
val* var7 /* : String */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Bool */;
val* var11 /* : nullable Bool */;
val* var12 /* : String */;
short int var13 /* : Bool */;
var_res = p0;
{
var2 = core__file___Text___file_exists(var_res);
}
var_ = var2;
if (var2){
if (unlikely(varonce==NULL)) {
var3 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "/src/nit.nit";
var8 = (val*)(12l<<2|1);
var9 = (val*)(12l<<2|1);
var10 = (val*)((long)(0)<<2|3);
var11 = (val*)((long)(0)<<2|3);
var7 = core__flat___CString___to_s_unsafe(var6, var8, var9, var10, var11);
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
var12 = ((val*(*)(val* self))(var3->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3); /* native_to_s on <var3:NativeArray[String]>*/
}
varonce = var3;
{
var13 = core__file___Text___file_exists(var12);
}
var1 = var13;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext$BashCompletion$toolcontext for (self: BashCompletion): ToolContext */
val* nitc___nitc__BashCompletion___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nitc__toolcontext__BashCompletion___toolcontext].val; /* _toolcontext on <self:BashCompletion> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 652);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext$BashCompletion$toolcontext= for (self: BashCompletion, ToolContext) */
void nitc___nitc__BashCompletion___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__toolcontext__BashCompletion___toolcontext].val = p0; /* _toolcontext on <self:BashCompletion> */
RET_LABEL:;
}
/* method toolcontext$BashCompletion$extract_options_names for (self: BashCompletion): Array[String] */
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
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
short int var31 /* : Bool */;
var1 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array$Array$init on <var1:Array[String]>*/
}
var_names = var1;
{
{ /* Inline toolcontext$BashCompletion$toolcontext (self) on <self:BashCompletion> */
var4 = self->attrs[COLOR_nitc__toolcontext__BashCompletion___toolcontext].val; /* _toolcontext on <self:BashCompletion> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 652);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline toolcontext$ToolContext$option_context (var2) on <var2:ToolContext> */
var7 = var2->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <var2:ToolContext> */
if (unlikely(var7 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline opts$OptionContext$options (var5) on <var5:OptionContext> */
var10 = var5->attrs[COLOR_opts__OptionContext___options].val; /* _options on <var5:OptionContext> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 283);
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
{ /* Inline opts$Option$names (var_option) on <var_option:Option> */
var17 = var_option->attrs[COLOR_opts__Option___names].val; /* _names on <var_option:Option> */
if (unlikely(var17 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
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
var27 = (val*)(2l<<2|1);
var28 = (val*)(2l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce = var24;
}
{
var31 = core___core__Text___has_prefix(var_name, var24);
}
if (var31){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_names, var_name); /* Direct call array$Array$add on <var_names:Array[String]>*/
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
/* method toolcontext$BashCompletion$rendering for (self: BashCompletion) */
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
val* var22 /* : ToolContext */;
val* var24 /* : ToolContext */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var28 /* : NativeArray[String] */;
static val* varonce27;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Int */;
val* var35 /* : nullable Bool */;
val* var36 /* : nullable Bool */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Bool */;
val* var44 /* : nullable Bool */;
val* var45 /* : String */;
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
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Int */;
val* var68 /* : nullable Bool */;
val* var69 /* : nullable Bool */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Bool */;
val* var77 /* : nullable Bool */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Bool */;
val* var85 /* : nullable Bool */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
val* var89 /* : NativeArray[String] */;
static val* varonce88;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : CString */;
val* var93 /* : String */;
val* var94 /* : nullable Int */;
val* var95 /* : nullable Int */;
val* var96 /* : nullable Bool */;
val* var97 /* : nullable Bool */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Bool */;
val* var105 /* : nullable Bool */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : CString */;
val* var109 /* : String */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Int */;
val* var112 /* : nullable Bool */;
val* var113 /* : nullable Bool */;
val* var114 /* : String */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : CString */;
val* var119 /* : String */;
val* var120 /* : nullable Int */;
val* var121 /* : nullable Int */;
val* var122 /* : nullable Bool */;
val* var123 /* : nullable Bool */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : CString */;
val* var127 /* : String */;
val* var128 /* : nullable Int */;
val* var129 /* : nullable Int */;
val* var130 /* : nullable Bool */;
val* var131 /* : nullable Bool */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : CString */;
val* var135 /* : String */;
val* var136 /* : nullable Int */;
val* var137 /* : nullable Int */;
val* var138 /* : nullable Bool */;
val* var139 /* : nullable Bool */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : CString */;
val* var143 /* : String */;
val* var144 /* : nullable Int */;
val* var145 /* : nullable Int */;
val* var146 /* : nullable Bool */;
val* var147 /* : nullable Bool */;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : CString */;
val* var151 /* : String */;
val* var152 /* : nullable Int */;
val* var153 /* : nullable Int */;
val* var154 /* : nullable Bool */;
val* var155 /* : nullable Bool */;
val* var157 /* : NativeArray[String] */;
static val* varonce156;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : CString */;
val* var161 /* : String */;
val* var162 /* : nullable Int */;
val* var163 /* : nullable Int */;
val* var164 /* : nullable Bool */;
val* var165 /* : nullable Bool */;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : CString */;
val* var169 /* : String */;
val* var170 /* : nullable Int */;
val* var171 /* : nullable Int */;
val* var172 /* : nullable Bool */;
val* var173 /* : nullable Bool */;
val* var174 /* : String */;
{
{ /* Inline toolcontext$BashCompletion$toolcontext (self) on <self:BashCompletion> */
var2 = self->attrs[COLOR_nitc__toolcontext__BashCompletion___toolcontext].val; /* _toolcontext on <self:BashCompletion> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 652);
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
var5 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "# generated bash completion file for ";
var10 = (val*)(37l<<2|1);
var11 = (val*)(37l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[0]=var7;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = " ";
var18 = (val*)(1l<<2|1);
var19 = (val*)(1l<<2|1);
var20 = (val*)((long)(0)<<2|3);
var21 = (val*)((long)(0)<<2|3);
var17 = core__flat___CString___to_s_unsafe(var16, var18, var19, var20, var21);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var5)->values[2]=var15;
} else {
var5 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var5)->values[1]=var_name;
{
{ /* Inline toolcontext$BashCompletion$toolcontext (self) on <self:BashCompletion> */
var24 = self->attrs[COLOR_nitc__toolcontext__BashCompletion___toolcontext].val; /* _toolcontext on <self:BashCompletion> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 652);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = nitc___nitc__ToolContext___version(var22);
}
((struct instance_core__NativeArray*)var5)->values[3]=var25;
{
var26 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
{
template___template__Template___addn(self, var26); /* Direct call template$Template$addn on <self:BashCompletion>*/
}
if (unlikely(varonce27==NULL)) {
var28 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "_";
var33 = (val*)(1l<<2|1);
var34 = (val*)(1l<<2|1);
var35 = (val*)((long)(0)<<2|3);
var36 = (val*)((long)(0)<<2|3);
var32 = core__flat___CString___to_s_unsafe(var31, var33, var34, var35, var36);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var28)->values[0]=var30;
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "()";
var41 = (val*)(2l<<2|1);
var42 = (val*)(2l<<2|1);
var43 = (val*)((long)(0)<<2|3);
var44 = (val*)((long)(0)<<2|3);
var40 = core__flat___CString___to_s_unsafe(var39, var41, var42, var43, var44);
var38 = var40;
varonce37 = var38;
}
((struct instance_core__NativeArray*)var28)->values[2]=var38;
} else {
var28 = varonce27;
varonce27 = NULL;
}
((struct instance_core__NativeArray*)var28)->values[1]=var_name;
{
var45 = ((val*(*)(val* self))(var28->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var28); /* native_to_s on <var28:NativeArray[String]>*/
}
varonce27 = var28;
{
template___template__Template___addn(self, var45); /* Direct call template$Template$addn on <self:BashCompletion>*/
}
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "{";
var50 = (val*)(1l<<2|1);
var51 = (val*)(1l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce46 = var47;
}
{
template___template__Template___addn(self, var47); /* Direct call template$Template$addn on <self:BashCompletion>*/
}
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "\tlocal cur prev opts";
var58 = (val*)(20l<<2|1);
var59 = (val*)(20l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
{
template___template__Template___addn(self, var55); /* Direct call template$Template$addn on <self:BashCompletion>*/
}
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = "\tCOMPREPLY=()";
var66 = (val*)(13l<<2|1);
var67 = (val*)(13l<<2|1);
var68 = (val*)((long)(0)<<2|3);
var69 = (val*)((long)(0)<<2|3);
var65 = core__flat___CString___to_s_unsafe(var64, var66, var67, var68, var69);
var63 = var65;
varonce62 = var63;
}
{
template___template__Template___addn(self, var63); /* Direct call template$Template$addn on <self:BashCompletion>*/
}
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "\tcur=\"${COMP_WORDS[COMP_CWORD]}\"";
var74 = (val*)(32l<<2|1);
var75 = (val*)(32l<<2|1);
var76 = (val*)((long)(0)<<2|3);
var77 = (val*)((long)(0)<<2|3);
var73 = core__flat___CString___to_s_unsafe(var72, var74, var75, var76, var77);
var71 = var73;
varonce70 = var71;
}
{
template___template__Template___addn(self, var71); /* Direct call template$Template$addn on <self:BashCompletion>*/
}
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "\tprev=\"${COMP_WORDS[COMP_CWORD-1]}\"";
var82 = (val*)(35l<<2|1);
var83 = (val*)(35l<<2|1);
var84 = (val*)((long)(0)<<2|3);
var85 = (val*)((long)(0)<<2|3);
var81 = core__flat___CString___to_s_unsafe(var80, var82, var83, var84, var85);
var79 = var81;
varonce78 = var79;
}
{
template___template__Template___addn(self, var79); /* Direct call template$Template$addn on <self:BashCompletion>*/
}
{
var86 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_option_names);
}
var87 = !var86;
if (var87){
if (unlikely(varonce88==NULL)) {
var89 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "\topts=\"";
var94 = (val*)(7l<<2|1);
var95 = (val*)(7l<<2|1);
var96 = (val*)((long)(0)<<2|3);
var97 = (val*)((long)(0)<<2|3);
var93 = core__flat___CString___to_s_unsafe(var92, var94, var95, var96, var97);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var89)->values[0]=var91;
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "\"";
var102 = (val*)(1l<<2|1);
var103 = (val*)(1l<<2|1);
var104 = (val*)((long)(0)<<2|3);
var105 = (val*)((long)(0)<<2|3);
var101 = core__flat___CString___to_s_unsafe(var100, var102, var103, var104, var105);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var89)->values[2]=var99;
} else {
var89 = varonce88;
varonce88 = NULL;
}
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = " ";
var110 = (val*)(1l<<2|1);
var111 = (val*)(1l<<2|1);
var112 = (val*)((long)(0)<<2|3);
var113 = (val*)((long)(0)<<2|3);
var109 = core__flat___CString___to_s_unsafe(var108, var110, var111, var112, var113);
var107 = var109;
varonce106 = var107;
}
{
var114 = core__abstract_text___Collection___join(var_option_names, var107, ((val*)NULL));
}
((struct instance_core__NativeArray*)var89)->values[1]=var114;
{
var115 = ((val*(*)(val* self))(var89->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var89); /* native_to_s on <var89:NativeArray[String]>*/
}
varonce88 = var89;
{
template___template__Template___addn(self, var115); /* Direct call template$Template$addn on <self:BashCompletion>*/
}
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = "\tif [[ ${cur} == -* ]] ; then";
var120 = (val*)(29l<<2|1);
var121 = (val*)(29l<<2|1);
var122 = (val*)((long)(0)<<2|3);
var123 = (val*)((long)(0)<<2|3);
var119 = core__flat___CString___to_s_unsafe(var118, var120, var121, var122, var123);
var117 = var119;
varonce116 = var117;
}
{
template___template__Template___addn(self, var117); /* Direct call template$Template$addn on <self:BashCompletion>*/
}
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = "\t\tCOMPREPLY=( $(compgen -W \"${opts}\" -- ${cur}) )";
var128 = (val*)(49l<<2|1);
var129 = (val*)(49l<<2|1);
var130 = (val*)((long)(0)<<2|3);
var131 = (val*)((long)(0)<<2|3);
var127 = core__flat___CString___to_s_unsafe(var126, var128, var129, var130, var131);
var125 = var127;
varonce124 = var125;
}
{
template___template__Template___addn(self, var125); /* Direct call template$Template$addn on <self:BashCompletion>*/
}
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = "\t\treturn 0";
var136 = (val*)(10l<<2|1);
var137 = (val*)(10l<<2|1);
var138 = (val*)((long)(0)<<2|3);
var139 = (val*)((long)(0)<<2|3);
var135 = core__flat___CString___to_s_unsafe(var134, var136, var137, var138, var139);
var133 = var135;
varonce132 = var133;
}
{
template___template__Template___addn(self, var133); /* Direct call template$Template$addn on <self:BashCompletion>*/
}
if (likely(varonce140!=NULL)) {
var141 = varonce140;
} else {
var142 = "\tfi";
var144 = (val*)(3l<<2|1);
var145 = (val*)(3l<<2|1);
var146 = (val*)((long)(0)<<2|3);
var147 = (val*)((long)(0)<<2|3);
var143 = core__flat___CString___to_s_unsafe(var142, var144, var145, var146, var147);
var141 = var143;
varonce140 = var141;
}
{
template___template__Template___addn(self, var141); /* Direct call template$Template$addn on <self:BashCompletion>*/
}
} else {
}
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = "} &&";
var152 = (val*)(4l<<2|1);
var153 = (val*)(4l<<2|1);
var154 = (val*)((long)(0)<<2|3);
var155 = (val*)((long)(0)<<2|3);
var151 = core__flat___CString___to_s_unsafe(var150, var152, var153, var154, var155);
var149 = var151;
varonce148 = var149;
}
{
template___template__Template___addn(self, var149); /* Direct call template$Template$addn on <self:BashCompletion>*/
}
if (unlikely(varonce156==NULL)) {
var157 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = "complete -o default -F _";
var162 = (val*)(24l<<2|1);
var163 = (val*)(24l<<2|1);
var164 = (val*)((long)(0)<<2|3);
var165 = (val*)((long)(0)<<2|3);
var161 = core__flat___CString___to_s_unsafe(var160, var162, var163, var164, var165);
var159 = var161;
varonce158 = var159;
}
((struct instance_core__NativeArray*)var157)->values[0]=var159;
if (likely(varonce166!=NULL)) {
var167 = varonce166;
} else {
var168 = " ";
var170 = (val*)(1l<<2|1);
var171 = (val*)(1l<<2|1);
var172 = (val*)((long)(0)<<2|3);
var173 = (val*)((long)(0)<<2|3);
var169 = core__flat___CString___to_s_unsafe(var168, var170, var171, var172, var173);
var167 = var169;
varonce166 = var167;
}
((struct instance_core__NativeArray*)var157)->values[2]=var167;
} else {
var157 = varonce156;
varonce156 = NULL;
}
((struct instance_core__NativeArray*)var157)->values[1]=var_name;
((struct instance_core__NativeArray*)var157)->values[3]=var_name;
{
var174 = ((val*(*)(val* self))(var157->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var157); /* native_to_s on <var157:NativeArray[String]>*/
}
varonce156 = var157;
{
template___template__Template___addn(self, var174); /* Direct call template$Template$addn on <self:BashCompletion>*/
}
RET_LABEL:;
}
/* method toolcontext$BashCompletion$init for (self: BashCompletion) */
void nitc___nitc__BashCompletion___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__BashCompletion___core__kernel__Object__init]))(self); /* init on <self:BashCompletion>*/
}
RET_LABEL:;
}
