#include "toolcontext.sep.0.h"
/* method toolcontext#Message#location for (self: Message): nullable Location */
val* toolcontext__Message__location(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable Location */;
var1 = self->attrs[COLOR_toolcontext__Message___location].val; /* _location on <self:Message> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#location for (self: Object): nullable Location */
val* VIRTUAL_toolcontext__Message__location(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable Location */;
val* var3 /* : nullable Location */;
{ /* Inline toolcontext#Message#location (self) on <self:Object(Message)> */
var3 = self->attrs[COLOR_toolcontext__Message___location].val; /* _location on <self:Object(Message)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#location= for (self: Message, nullable Location) */
void toolcontext__Message__location_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__Message___location].val = p0; /* _location on <self:Message> */
RET_LABEL:;
}
/* method toolcontext#Message#location= for (self: Object, nullable Location) */
void VIRTUAL_toolcontext__Message__location_61d(val* self, val* p0) {
{ /* Inline toolcontext#Message#location= (self,p0) on <self:Object(Message)> */
self->attrs[COLOR_toolcontext__Message___location].val = p0; /* _location on <self:Object(Message)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method toolcontext#Message#tag for (self: Message): nullable String */
val* toolcontext__Message__tag(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_toolcontext__Message___tag].val; /* _tag on <self:Message> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#tag for (self: Object): nullable String */
val* VIRTUAL_toolcontext__Message__tag(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
{ /* Inline toolcontext#Message#tag (self) on <self:Object(Message)> */
var3 = self->attrs[COLOR_toolcontext__Message___tag].val; /* _tag on <self:Object(Message)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#tag= for (self: Message, nullable String) */
void toolcontext__Message__tag_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__Message___tag].val = p0; /* _tag on <self:Message> */
RET_LABEL:;
}
/* method toolcontext#Message#tag= for (self: Object, nullable String) */
void VIRTUAL_toolcontext__Message__tag_61d(val* self, val* p0) {
{ /* Inline toolcontext#Message#tag= (self,p0) on <self:Object(Message)> */
self->attrs[COLOR_toolcontext__Message___tag].val = p0; /* _tag on <self:Object(Message)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method toolcontext#Message#text for (self: Message): String */
val* toolcontext__Message__text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 41);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#text for (self: Object): String */
val* VIRTUAL_toolcontext__Message__text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline toolcontext#Message#text (self) on <self:Object(Message)> */
var3 = self->attrs[COLOR_toolcontext__Message___text].val; /* _text on <self:Object(Message)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 41);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#text= for (self: Message, String) */
void toolcontext__Message__text_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__Message___text].val = p0; /* _text on <self:Message> */
RET_LABEL:;
}
/* method toolcontext#Message#text= for (self: Object, String) */
void VIRTUAL_toolcontext__Message__text_61d(val* self, val* p0) {
{ /* Inline toolcontext#Message#text= (self,p0) on <self:Object(Message)> */
self->attrs[COLOR_toolcontext__Message___text].val = p0; /* _text on <self:Object(Message)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method toolcontext#Message#< for (self: Message, Message): Bool */
short int toolcontext__Message___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_other /* var other: Message */;
val* var2 /* : nullable Location */;
val* var4 /* : nullable Location */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable Location */;
val* var11 /* : nullable Location */;
val* var12 /* : null */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : nullable Location */;
val* var18 /* : nullable Location */;
val* var19 /* : nullable Location */;
val* var21 /* : nullable Location */;
short int var22 /* : Bool */;
/* Covariant cast for argument 0 (other) <p0:Message> isa OTHER */
/* <p0:Message> isa OTHER */
type_struct = self->type->resolution_table->types[COLOR_kernel__Comparable_VTOTHER];
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
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 48);
show_backtrace(1);
}
var_other = p0;
{
{ /* Inline toolcontext#Message#location (self) on <self:Message> */
var4 = self->attrs[COLOR_toolcontext__Message___location].val; /* _location on <self:Message> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var5 = NULL;
if (var2 == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = location__Location___61d_61d(var2, var5);
var6 = var7;
}
if (var6){
var8 = 1;
var = var8;
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext#Message#location (var_other) on <var_other:Message> */
var11 = var_other->attrs[COLOR_toolcontext__Message___location].val; /* _location on <var_other:Message> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = NULL;
if (var9 == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (0) {
var14 = location__Location___61d_61d(var9, var12);
var13 = var14;
}
if (var13){
var15 = 0;
var = var15;
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext#Message#location (self) on <self:Message> */
var18 = self->attrs[COLOR_toolcontext__Message___location].val; /* _location on <self:Message> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 53);
show_backtrace(1);
}
{
{ /* Inline toolcontext#Message#location (var_other) on <var_other:Message> */
var21 = var_other->attrs[COLOR_toolcontext__Message___location].val; /* _location on <var_other:Message> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 53);
show_backtrace(1);
}
{
var22 = location__Location___60d(var16, var19);
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#< for (self: Object, Comparable): Bool */
short int VIRTUAL_toolcontext__Message___60d(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = toolcontext__Message___60d(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#to_s for (self: Message): String */
val* toolcontext__Message__to_s(val* self) {
val* var /* : String */;
val* var1 /* : nullable Location */;
val* var3 /* : nullable Location */;
val* var_l /* var l: nullable Location */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : String */;
val* var9 /* : String */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : String */;
val* var16 /* : String */;
val* var17 /* : Array[Object] */;
long var18 /* : Int */;
val* var19 /* : NativeArray[Object] */;
val* var20 /* : String */;
{
{ /* Inline toolcontext#Message#location (self) on <self:Message> */
var3 = self->attrs[COLOR_toolcontext__Message___location].val; /* _location on <self:Message> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_l = var1;
var4 = NULL;
if (var_l == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
var6 = location__Location___61d_61d(var_l, var4);
var5 = var6;
}
if (var5){
{
{ /* Inline toolcontext#Message#text (self) on <self:Message> */
var9 = self->attrs[COLOR_toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 41);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var = var7;
goto RET_LABEL;
} else {
if (varonce) {
var10 = varonce;
} else {
var11 = ": ";
var12 = 2;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
{
{ /* Inline toolcontext#Message#text (self) on <self:Message> */
var16 = self->attrs[COLOR_toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 41);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var17 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var17 = array_instance Array[Object] */
var18 = 3;
var19 = NEW_array__NativeArray(var18, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var19)->values[0] = (val*) var_l;
((struct instance_array__NativeArray*)var19)->values[1] = (val*) var10;
((struct instance_array__NativeArray*)var19)->values[2] = (val*) var14;
{
((void (*)(val*, val*, long))(var17->class->vft[COLOR_array__Array__with_native]))(var17, var19, var18) /* with_native on <var17:Array[Object]>*/;
}
}
{
var20 = ((val* (*)(val*))(var17->class->vft[COLOR_string__Object__to_s]))(var17) /* to_s on <var17:Array[Object]>*/;
}
var = var20;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method toolcontext#Message#to_s for (self: Object): String */
val* VIRTUAL_toolcontext__Message__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = toolcontext__Message__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#to_color_string for (self: Message): String */
val* toolcontext__Message__to_color_string(val* self) {
val* var /* : String */;
long var1 /* : Int */;
char var2 /* : Char */;
char var4 /* : Char */;
char var_esc /* var esc: Char */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
val* var9 /* : Array[Object] */;
long var10 /* : Int */;
val* var11 /* : NativeArray[Object] */;
val* var12 /* : Object */;
val* var13 /* : String */;
val* var_yellow /* var yellow: String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
val* var19 /* : Array[Object] */;
long var20 /* : Int */;
val* var21 /* : NativeArray[Object] */;
val* var22 /* : Object */;
val* var23 /* : String */;
val* var_def /* var def: String */;
val* var24 /* : nullable String */;
val* var26 /* : nullable String */;
val* var_tag /* var tag: nullable String */;
val* var27 /* : null */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : FlatString */;
val* var44 /* : Array[Object] */;
long var45 /* : Int */;
val* var46 /* : NativeArray[Object] */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
val* var53 /* : nullable Location */;
val* var55 /* : nullable Location */;
val* var_l /* var l: nullable Location */;
val* var56 /* : null */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : String */;
val* var61 /* : String */;
val* var62 /* : Array[Object] */;
long var63 /* : Int */;
val* var64 /* : NativeArray[Object] */;
val* var65 /* : String */;
val* var66 /* : nullable SourceFile */;
val* var68 /* : nullable SourceFile */;
val* var69 /* : null */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
val* var_other73 /* var other: nullable Object */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : NativeString */;
long var80 /* : Int */;
val* var81 /* : FlatString */;
val* var82 /* : String */;
val* var84 /* : String */;
val* var85 /* : Array[Object] */;
long var86 /* : Int */;
val* var87 /* : NativeArray[Object] */;
val* var88 /* : String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : FlatString */;
val* var94 /* : String */;
val* var96 /* : String */;
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
val* var107 /* : String */;
val* var108 /* : Array[Object] */;
long var109 /* : Int */;
val* var110 /* : NativeArray[Object] */;
val* var111 /* : String */;
var1 = 27;
{
{ /* Inline kernel#Int#ascii (var1) on <var1:Int> */
var4 = var1;
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_esc = var2;
if (varonce) {
var5 = varonce;
} else {
var6 = "[0;33m";
var7 = 6;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var9 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var9 = array_instance Array[Object] */
var10 = 2;
var11 = NEW_array__NativeArray(var10, &type_array__NativeArraykernel__Object);
var12 = BOX_kernel__Char(var_esc); /* autobox from Char to Object */
((struct instance_array__NativeArray*)var11)->values[0] = (val*) var12;
((struct instance_array__NativeArray*)var11)->values[1] = (val*) var5;
{
((void (*)(val*, val*, long))(var9->class->vft[COLOR_array__Array__with_native]))(var9, var11, var10) /* with_native on <var9:Array[Object]>*/;
}
}
{
var13 = ((val* (*)(val*))(var9->class->vft[COLOR_string__Object__to_s]))(var9) /* to_s on <var9:Array[Object]>*/;
}
var_yellow = var13;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "[0m";
var17 = 3;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 2;
var21 = NEW_array__NativeArray(var20, &type_array__NativeArraykernel__Object);
var22 = BOX_kernel__Char(var_esc); /* autobox from Char to Object */
((struct instance_array__NativeArray*)var21)->values[0] = (val*) var22;
((struct instance_array__NativeArray*)var21)->values[1] = (val*) var15;
{
((void (*)(val*, val*, long))(var19->class->vft[COLOR_array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
}
{
var23 = ((val* (*)(val*))(var19->class->vft[COLOR_string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
}
var_def = var23;
{
{ /* Inline toolcontext#Message#tag (self) on <self:Message> */
var26 = self->attrs[COLOR_toolcontext__Message___tag].val; /* _tag on <self:Message> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_tag = var24;
var27 = NULL;
if (var_tag == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_tag,var27) on <var_tag:nullable String> */
var_other = var27;
{
var32 = ((short int (*)(val*, val*))(var_tag->class->vft[COLOR_kernel__Object___61d_61d]))(var_tag, var_other) /* == on <var_tag:nullable String(String)>*/;
var31 = var32;
}
var33 = !var31;
var29 = var33;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
if (varonce34) {
var35 = varonce34;
} else {
var36 = " (";
var37 = 2;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
if (varonce39) {
var40 = varonce39;
} else {
var41 = ")";
var42 = 1;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var44 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var44 = array_instance Array[Object] */
var45 = 3;
var46 = NEW_array__NativeArray(var45, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var46)->values[0] = (val*) var35;
((struct instance_array__NativeArray*)var46)->values[1] = (val*) var_tag;
((struct instance_array__NativeArray*)var46)->values[2] = (val*) var40;
{
((void (*)(val*, val*, long))(var44->class->vft[COLOR_array__Array__with_native]))(var44, var46, var45) /* with_native on <var44:Array[Object]>*/;
}
}
{
var47 = ((val* (*)(val*))(var44->class->vft[COLOR_string__Object__to_s]))(var44) /* to_s on <var44:Array[Object]>*/;
}
var_tag = var47;
} else {
if (varonce48) {
var49 = varonce48;
} else {
var50 = "";
var51 = 0;
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
var_tag = var49;
}
{
{ /* Inline toolcontext#Message#location (self) on <self:Message> */
var55 = self->attrs[COLOR_toolcontext__Message___location].val; /* _location on <self:Message> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
var_l = var53;
var56 = NULL;
if (var_l == NULL) {
var57 = 1; /* is null */
} else {
var57 = 0; /* arg is null but recv is not */
}
if (0) {
var58 = location__Location___61d_61d(var_l, var56);
var57 = var58;
}
if (var57){
{
{ /* Inline toolcontext#Message#text (self) on <self:Message> */
var61 = self->attrs[COLOR_toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 41);
show_backtrace(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
var62 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var62 = array_instance Array[Object] */
var63 = 2;
var64 = NEW_array__NativeArray(var63, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var64)->values[0] = (val*) var59;
((struct instance_array__NativeArray*)var64)->values[1] = (val*) var_tag;
{
((void (*)(val*, val*, long))(var62->class->vft[COLOR_array__Array__with_native]))(var62, var64, var63) /* with_native on <var62:Array[Object]>*/;
}
}
{
var65 = ((val* (*)(val*))(var62->class->vft[COLOR_string__Object__to_s]))(var62) /* to_s on <var62:Array[Object]>*/;
}
var = var65;
goto RET_LABEL;
} else {
{
{ /* Inline location#Location#file (var_l) on <var_l:nullable Location(Location)> */
var68 = var_l->attrs[COLOR_location__Location___file].val; /* _file on <var_l:nullable Location(Location)> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
var69 = NULL;
if (var66 == NULL) {
var70 = 1; /* is null */
} else {
var70 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var66,var69) on <var66:nullable SourceFile> */
var_other73 = var69;
{
{ /* Inline kernel#Object#is_same_instance (var66,var_other73) on <var66:nullable SourceFile(SourceFile)> */
var76 = var66 == var_other73;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
var71 = var74;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
var70 = var71;
}
if (var70){
if (varonce77) {
var78 = varonce77;
} else {
var79 = ": ";
var80 = 2;
var81 = string__NativeString__to_s_with_length(var79, var80);
var78 = var81;
varonce77 = var78;
}
{
{ /* Inline toolcontext#Message#text (self) on <self:Message> */
var84 = self->attrs[COLOR_toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 41);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
var85 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var85 = array_instance Array[Object] */
var86 = 6;
var87 = NEW_array__NativeArray(var86, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var87)->values[0] = (val*) var_yellow;
((struct instance_array__NativeArray*)var87)->values[1] = (val*) var_l;
((struct instance_array__NativeArray*)var87)->values[2] = (val*) var_def;
((struct instance_array__NativeArray*)var87)->values[3] = (val*) var78;
((struct instance_array__NativeArray*)var87)->values[4] = (val*) var82;
((struct instance_array__NativeArray*)var87)->values[5] = (val*) var_tag;
{
((void (*)(val*, val*, long))(var85->class->vft[COLOR_array__Array__with_native]))(var85, var87, var86) /* with_native on <var85:Array[Object]>*/;
}
}
{
var88 = ((val* (*)(val*))(var85->class->vft[COLOR_string__Object__to_s]))(var85) /* to_s on <var85:Array[Object]>*/;
}
var = var88;
goto RET_LABEL;
} else {
if (varonce89) {
var90 = varonce89;
} else {
var91 = ": ";
var92 = 2;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
{
{ /* Inline toolcontext#Message#text (self) on <self:Message> */
var96 = self->attrs[COLOR_toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 41);
show_backtrace(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
if (varonce97) {
var98 = varonce97;
} else {
var99 = "\n";
var100 = 1;
var101 = string__NativeString__to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
if (varonce102) {
var103 = varonce102;
} else {
var104 = "1;31";
var105 = 4;
var106 = string__NativeString__to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
{
var107 = location__Location__colored_line(var_l, var103);
}
var108 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var108 = array_instance Array[Object] */
var109 = 8;
var110 = NEW_array__NativeArray(var109, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var110)->values[0] = (val*) var_yellow;
((struct instance_array__NativeArray*)var110)->values[1] = (val*) var_l;
((struct instance_array__NativeArray*)var110)->values[2] = (val*) var_def;
((struct instance_array__NativeArray*)var110)->values[3] = (val*) var90;
((struct instance_array__NativeArray*)var110)->values[4] = (val*) var94;
((struct instance_array__NativeArray*)var110)->values[5] = (val*) var_tag;
((struct instance_array__NativeArray*)var110)->values[6] = (val*) var98;
((struct instance_array__NativeArray*)var110)->values[7] = (val*) var107;
{
((void (*)(val*, val*, long))(var108->class->vft[COLOR_array__Array__with_native]))(var108, var110, var109) /* with_native on <var108:Array[Object]>*/;
}
}
{
var111 = ((val* (*)(val*))(var108->class->vft[COLOR_string__Object__to_s]))(var108) /* to_s on <var108:Array[Object]>*/;
}
var = var111;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method toolcontext#Message#to_color_string for (self: Object): String */
val* VIRTUAL_toolcontext__Message__to_color_string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = toolcontext__Message__to_color_string(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#init for (self: Message) */
void toolcontext__Message__init(val* self) {
{
((void (*)(val*))(self->class->vft[COLOR_toolcontext__Message__init]))(self) /* init on <self:Message>*/;
}
RET_LABEL:;
}
/* method toolcontext#Message#init for (self: Object) */
void VIRTUAL_toolcontext__Message__init(val* self) {
{ /* Inline toolcontext#Message#init (self) on <self:Object(Message)> */
{
((void (*)(val*))(self->class->vft[COLOR_toolcontext__Message__init]))(self) /* init on <self:Object(Message)>*/;
}
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#error_count for (self: ToolContext): Int */
long toolcontext__ToolContext__error_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#error_count for (self: Object): Int */
long VIRTUAL_toolcontext__ToolContext__error_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <self:Object(ToolContext)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#error_count= for (self: ToolContext, Int) */
void toolcontext__ToolContext__error_count_61d(val* self, long p0) {
self->attrs[COLOR_toolcontext__ToolContext___error_count].l = p0; /* _error_count on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#error_count= for (self: Object, Int) */
void VIRTUAL_toolcontext__ToolContext__error_count_61d(val* self, long p0) {
{ /* Inline toolcontext#ToolContext#error_count= (self,p0) on <self:Object(ToolContext)> */
self->attrs[COLOR_toolcontext__ToolContext___error_count].l = p0; /* _error_count on <self:Object(ToolContext)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#warning_count for (self: ToolContext): Int */
long toolcontext__ToolContext__warning_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#warning_count for (self: Object): Int */
long VIRTUAL_toolcontext__ToolContext__warning_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline toolcontext#ToolContext#warning_count (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:Object(ToolContext)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#warning_count= for (self: ToolContext, Int) */
void toolcontext__ToolContext__warning_count_61d(val* self, long p0) {
self->attrs[COLOR_toolcontext__ToolContext___warning_count].l = p0; /* _warning_count on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#warning_count= for (self: Object, Int) */
void VIRTUAL_toolcontext__ToolContext__warning_count_61d(val* self, long p0) {
{ /* Inline toolcontext#ToolContext#warning_count= (self,p0) on <self:Object(ToolContext)> */
self->attrs[COLOR_toolcontext__ToolContext___warning_count].l = p0; /* _warning_count on <self:Object(ToolContext)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#log_directory for (self: ToolContext): String */
val* toolcontext__ToolContext__log_directory(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___log_directory].val; /* _log_directory on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _log_directory");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 101);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#log_directory for (self: Object): String */
val* VIRTUAL_toolcontext__ToolContext__log_directory(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline toolcontext#ToolContext#log_directory (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___log_directory].val; /* _log_directory on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _log_directory");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 101);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#log_directory= for (self: ToolContext, String) */
void toolcontext__ToolContext__log_directory_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__ToolContext___log_directory].val = p0; /* _log_directory on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#log_directory= for (self: Object, String) */
void VIRTUAL_toolcontext__ToolContext__log_directory_61d(val* self, val* p0) {
{ /* Inline toolcontext#ToolContext#log_directory= (self,p0) on <self:Object(ToolContext)> */
self->attrs[COLOR_toolcontext__ToolContext___log_directory].val = p0; /* _log_directory on <self:Object(ToolContext)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#messages for (self: ToolContext): Array[Message] */
val* toolcontext__ToolContext__messages(val* self) {
val* var /* : Array[Message] */;
val* var1 /* : Array[Message] */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 104);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#messages for (self: Object): Array[Message] */
val* VIRTUAL_toolcontext__ToolContext__messages(val* self) {
val* var /* : Array[Message] */;
val* var1 /* : Array[Message] */;
val* var3 /* : Array[Message] */;
{ /* Inline toolcontext#ToolContext#messages (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___messages].val; /* _messages on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 104);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#message_sorter for (self: ToolContext): Comparator */
val* toolcontext__ToolContext__message_sorter(val* self) {
val* var /* : Comparator */;
val* var1 /* : Comparator */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___message_sorter].val; /* _message_sorter on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message_sorter");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 106);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#message_sorter for (self: Object): Comparator */
val* VIRTUAL_toolcontext__ToolContext__message_sorter(val* self) {
val* var /* : Comparator */;
val* var1 /* : Comparator */;
val* var3 /* : Comparator */;
{ /* Inline toolcontext#ToolContext#message_sorter (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___message_sorter].val; /* _message_sorter on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message_sorter");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 106);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#check_errors for (self: ToolContext) */
void toolcontext__ToolContext__check_errors(val* self) {
val* var /* : Array[Message] */;
val* var2 /* : Array[Message] */;
long var3 /* : Int */;
long var5 /* : Int */;
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
val* var20 /* : ArrayIterator[nullable Object] */;
val* var_21 /* var : ArrayIterator[Message] */;
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
val* var34 /* : OStream */;
val* var36 /* : OStream */;
static val* varonce;
val* var37 /* : String */;
char* var38 /* : NativeString */;
long var39 /* : Int */;
val* var40 /* : FlatString */;
val* var41 /* : Array[Object] */;
long var42 /* : Int */;
val* var43 /* : NativeArray[Object] */;
val* var44 /* : String */;
val* var45 /* : Sys */;
val* var47 /* : Sys */;
val* var48 /* : OStream */;
val* var50 /* : OStream */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : FlatString */;
val* var57 /* : Array[Object] */;
long var58 /* : Int */;
val* var59 /* : NativeArray[Object] */;
val* var60 /* : String */;
val* var62 /* : Array[Message] */;
val* var64 /* : Array[Message] */;
long var65 /* : Int */;
long var67 /* : Int */;
long var68 /* : Int */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
short int var75 /* : Bool */;
long var76 /* : Int */;
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 104);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var) on <var:Array[Message]> */
var5 = var->attrs[COLOR_array__AbstractArrayRead___length].l; /* _length on <var:Array[Message]> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = 0;
{
{ /* Inline kernel#Int#> (var3,var6) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var6:Int> isa OTHER */
/* <var6:Int> isa OTHER */
var9 = 1; /* easy <var6:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var10 = var3 > var6;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
{ /* Inline toolcontext#ToolContext#message_sorter (self) on <self:ToolContext> */
var13 = self->attrs[COLOR_toolcontext__ToolContext___message_sorter].val; /* _message_sorter on <self:ToolContext> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message_sorter");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 106);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var16 = self->attrs[COLOR_toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 104);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
sorter__Comparator__sort(var11, var14); /* Direct call sorter#Comparator#sort on <var11:Comparator>*/
}
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var19 = self->attrs[COLOR_toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 104);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_ = var17;
{
var20 = array__AbstractArrayRead__iterator(var_);
}
var_21 = var20;
for(;;) {
{
var22 = array__ArrayIterator__is_ok(var_21);
}
if (var22){
{
var23 = array__ArrayIterator__item(var_21);
}
var_m = var23;
{
{ /* Inline toolcontext#ToolContext#opt_no_color (self) on <self:ToolContext> */
var26 = self->attrs[COLOR_toolcontext__ToolContext___opt_no_color].val; /* _opt_no_color on <self:ToolContext> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_color");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 264);
show_backtrace(1);
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
var30 = ((struct instance_kernel__Bool*)var27)->value; /* autounbox from nullable Object to Bool */;
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
{ /* Inline file#Sys#stderr (var31) on <var31:Sys> */
var36 = var31->attrs[COLOR_file__Sys___stderr].val; /* _stderr on <var31:Sys> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stderr");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 637);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (varonce) {
var37 = varonce;
} else {
var38 = "\n";
var39 = 1;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce = var37;
}
var41 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var41 = array_instance Array[Object] */
var42 = 2;
var43 = NEW_array__NativeArray(var42, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var43)->values[0] = (val*) var_m;
((struct instance_array__NativeArray*)var43)->values[1] = (val*) var37;
{
((void (*)(val*, val*, long))(var41->class->vft[COLOR_array__Array__with_native]))(var41, var43, var42) /* with_native on <var41:Array[Object]>*/;
}
}
{
var44 = ((val* (*)(val*))(var41->class->vft[COLOR_string__Object__to_s]))(var41) /* to_s on <var41:Array[Object]>*/;
}
{
file__OFStream__write(var34, var44); /* Direct call file#OFStream#write on <var34:OStream>*/
}
} else {
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var47 = glob_sys;
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline file#Sys#stderr (var45) on <var45:Sys> */
var50 = var45->attrs[COLOR_file__Sys___stderr].val; /* _stderr on <var45:Sys> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stderr");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 637);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = toolcontext__Message__to_color_string(var_m);
}
if (varonce52) {
var53 = varonce52;
} else {
var54 = "\n";
var55 = 1;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var57 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var57 = array_instance Array[Object] */
var58 = 2;
var59 = NEW_array__NativeArray(var58, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var59)->values[0] = (val*) var51;
((struct instance_array__NativeArray*)var59)->values[1] = (val*) var53;
{
((void (*)(val*, val*, long))(var57->class->vft[COLOR_array__Array__with_native]))(var57, var59, var58) /* with_native on <var57:Array[Object]>*/;
}
}
{
var60 = ((val* (*)(val*))(var57->class->vft[COLOR_string__Object__to_s]))(var57) /* to_s on <var57:Array[Object]>*/;
}
{
file__OFStream__write(var48, var60); /* Direct call file#OFStream#write on <var48:OStream>*/
}
}
{
array__ArrayIterator__next(var_21); /* Direct call array#ArrayIterator#next on <var_21:ArrayIterator[Message]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_21) on <var_21:ArrayIterator[Message]> */
RET_LABEL61:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var64 = self->attrs[COLOR_toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 104);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
array__AbstractArray__clear(var62); /* Direct call array#AbstractArray#clear on <var62:Array[Message]>*/
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var67 = self->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
var68 = 0;
{
{ /* Inline kernel#Int#> (var65,var68) on <var65:Int> */
/* Covariant cast for argument 0 (i) <var68:Int> isa OTHER */
/* <var68:Int> isa OTHER */
var71 = 1; /* easy <var68:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 373);
show_backtrace(1);
}
var75 = var65 > var68;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
if (var69){
{
toolcontext__ToolContext__errors_info(self); /* Direct call toolcontext#ToolContext#errors_info on <self:ToolContext>*/
}
var76 = 1;
{
{ /* Inline kernel#Object#exit (self,var76) on <self:ToolContext> */
exit(var76);
RET_LABEL77:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#check_errors for (self: Object) */
void VIRTUAL_toolcontext__ToolContext__check_errors(val* self) {
toolcontext__ToolContext__check_errors(self); /* Direct call toolcontext#ToolContext#check_errors on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method toolcontext#ToolContext#errors_info for (self: ToolContext) */
void toolcontext__ToolContext__errors_info(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
long var9 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : OptionBool */;
val* var19 /* : OptionBool */;
val* var20 /* : nullable Object */;
val* var22 /* : nullable Object */;
short int var23 /* : Bool */;
val* var24 /* : Sys */;
val* var26 /* : Sys */;
val* var27 /* : OStream */;
val* var29 /* : OStream */;
static val* varonce;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
long var34 /* : Int */;
long var36 /* : Int */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : FlatString */;
long var42 /* : Int */;
long var44 /* : Int */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : FlatString */;
val* var50 /* : Array[Object] */;
long var51 /* : Int */;
val* var52 /* : NativeArray[Object] */;
val* var53 /* : Object */;
val* var54 /* : Object */;
val* var55 /* : String */;
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = 0;
{
{ /* Inline kernel#Int#== (var1,var4) on <var1:Int> */
var8 = var1 == var4;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
var_ = var5;
if (var5){
{
{ /* Inline toolcontext#ToolContext#warning_count (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = 0;
{
{ /* Inline kernel#Int#== (var9,var12) on <var9:Int> */
var16 = var9 == var12;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
var = var13;
} else {
var = var_;
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_no_color (self) on <self:ToolContext> */
var19 = self->attrs[COLOR_toolcontext__ToolContext___opt_no_color].val; /* _opt_no_color on <self:ToolContext> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_color");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 264);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline opts#Option#value (var17) on <var17:OptionBool> */
var22 = var17->attrs[COLOR_opts__Option___value].val; /* _value on <var17:OptionBool> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var23 = ((struct instance_kernel__Bool*)var20)->value; /* autounbox from nullable Object to Bool */;
if (var23){
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var26 = glob_sys;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline file#Sys#stderr (var24) on <var24:Sys> */
var29 = var24->attrs[COLOR_file__Sys___stderr].val; /* _stderr on <var24:Sys> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stderr");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 637);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (varonce) {
var30 = varonce;
} else {
var31 = "Errors: ";
var32 = 8;
var33 = string__NativeString__to_s_with_length(var31, var32);
var30 = var33;
varonce = var30;
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var36 = self->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (varonce37) {
var38 = varonce37;
} else {
var39 = ". Warnings: ";
var40 = 12;
var41 = string__NativeString__to_s_with_length(var39, var40);
var38 = var41;
varonce37 = var38;
}
{
{ /* Inline toolcontext#ToolContext#warning_count (self) on <self:ToolContext> */
var44 = self->attrs[COLOR_toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = ".\n";
var48 = 2;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var50 = array_instance Array[Object] */
var51 = 5;
var52 = NEW_array__NativeArray(var51, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var52)->values[0] = (val*) var30;
var53 = BOX_kernel__Int(var34); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var52)->values[1] = (val*) var53;
((struct instance_array__NativeArray*)var52)->values[2] = (val*) var38;
var54 = BOX_kernel__Int(var42); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var52)->values[3] = (val*) var54;
((struct instance_array__NativeArray*)var52)->values[4] = (val*) var46;
{
((void (*)(val*, val*, long))(var50->class->vft[COLOR_array__Array__with_native]))(var50, var52, var51) /* with_native on <var50:Array[Object]>*/;
}
}
{
var55 = ((val* (*)(val*))(var50->class->vft[COLOR_string__Object__to_s]))(var50) /* to_s on <var50:Array[Object]>*/;
}
{
file__OFStream__write(var27, var55); /* Direct call file#OFStream#write on <var27:OStream>*/
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#errors_info for (self: Object) */
void VIRTUAL_toolcontext__ToolContext__errors_info(val* self) {
toolcontext__ToolContext__errors_info(self); /* Direct call toolcontext#ToolContext#errors_info on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method toolcontext#ToolContext#error for (self: ToolContext, nullable Location, String) */
void toolcontext__ToolContext__error(val* self, val* p0, val* p1) {
val* var_l /* var l: nullable Location */;
val* var_s /* var s: String */;
val* var /* : Array[Message] */;
val* var2 /* : Array[Message] */;
val* var3 /* : Message */;
val* var4 /* : null */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
val* var14 /* : OptionBool */;
val* var16 /* : OptionBool */;
val* var17 /* : nullable Object */;
val* var19 /* : nullable Object */;
short int var20 /* : Bool */;
var_l = p0;
var_s = p1;
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 104);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = NEW_toolcontext__Message(&type_toolcontext__Message);
var4 = NULL;
{
((void (*)(val*, val*))(var3->class->vft[COLOR_toolcontext__Message__location_61d]))(var3, var_l) /* location= on <var3:Message>*/;
}
{
((void (*)(val*, val*))(var3->class->vft[COLOR_toolcontext__Message__tag_61d]))(var3, var4) /* tag= on <var3:Message>*/;
}
{
((void (*)(val*, val*))(var3->class->vft[COLOR_toolcontext__Message__text_61d]))(var3, var_s) /* text= on <var3:Message>*/;
}
{
((void (*)(val*))(var3->class->vft[COLOR_kernel__Object__init]))(var3) /* init on <var3:Message>*/;
}
{
array__Array__add(var, var3); /* Direct call array#Array#add on <var:Array[Message]>*/
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var7 = self->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var8 = 1;
{
{ /* Inline kernel#Int#+ (var5,var8) on <var5:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var12 = var5 + var8;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#error_count= (self,var9) on <self:ToolContext> */
self->attrs[COLOR_toolcontext__ToolContext___error_count].l = var9; /* _error_count on <self:ToolContext> */
RET_LABEL13:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_stop_on_first_error (self) on <self:ToolContext> */
var16 = self->attrs[COLOR_toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 261);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline opts#Option#value (var14) on <var14:OptionBool> */
var19 = var14->attrs[COLOR_opts__Option___value].val; /* _value on <var14:OptionBool> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var20 = ((struct instance_kernel__Bool*)var17)->value; /* autounbox from nullable Object to Bool */;
if (var20){
{
toolcontext__ToolContext__check_errors(self); /* Direct call toolcontext#ToolContext#check_errors on <self:ToolContext>*/
}
} else {
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#error for (self: Object, nullable Location, String) */
void VIRTUAL_toolcontext__ToolContext__error(val* self, val* p0, val* p1) {
toolcontext__ToolContext__error(self, p0, p1); /* Direct call toolcontext#ToolContext#error on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method toolcontext#ToolContext#fatal_error for (self: ToolContext, nullable Location, String) */
void toolcontext__ToolContext__fatal_error(val* self, val* p0, val* p1) {
val* var_l /* var l: nullable Location */;
val* var_s /* var s: String */;
var_l = p0;
var_s = p1;
{
toolcontext__ToolContext__error(self, var_l, var_s); /* Direct call toolcontext#ToolContext#error on <self:ToolContext>*/
}
{
toolcontext__ToolContext__check_errors(self); /* Direct call toolcontext#ToolContext#check_errors on <self:ToolContext>*/
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#fatal_error for (self: Object, nullable Location, String) */
void VIRTUAL_toolcontext__ToolContext__fatal_error(val* self, val* p0, val* p1) {
toolcontext__ToolContext__fatal_error(self, p0, p1); /* Direct call toolcontext#ToolContext#fatal_error on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method toolcontext#ToolContext#warning for (self: ToolContext, nullable Location, String, String) */
void toolcontext__ToolContext__warning(val* self, val* p0, val* p1, val* p2) {
val* var_l /* var l: nullable Location */;
val* var_tag /* var tag: String */;
val* var_text /* var text: String */;
val* var /* : OptionArray */;
val* var2 /* : OptionArray */;
val* var3 /* : nullable Object */;
val* var5 /* : nullable Object */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
val* var10 /* : Array[Object] */;
long var11 /* : Int */;
val* var12 /* : NativeArray[Object] */;
val* var13 /* : String */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : OptionArray */;
val* var18 /* : OptionArray */;
val* var19 /* : nullable Object */;
val* var21 /* : nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var_ /* var : Bool */;
val* var24 /* : OptionCount */;
val* var26 /* : OptionCount */;
val* var27 /* : nullable Object */;
val* var29 /* : nullable Object */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
long var35 /* : Int */;
val* var36 /* : Array[Message] */;
val* var38 /* : Array[Message] */;
val* var39 /* : Message */;
long var40 /* : Int */;
long var42 /* : Int */;
long var43 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var47 /* : Int */;
val* var49 /* : OptionBool */;
val* var51 /* : OptionBool */;
val* var52 /* : nullable Object */;
val* var54 /* : nullable Object */;
short int var55 /* : Bool */;
var_l = p0;
var_tag = p1;
var_text = p2;
{
{ /* Inline toolcontext#ToolContext#opt_warning (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 237);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline opts#Option#value (var) on <var:OptionArray> */
var5 = var->attrs[COLOR_opts__Option___value].val; /* _value on <var:OptionArray> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (varonce) {
var6 = varonce;
} else {
var7 = "no-";
var8 = 3;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var10 = array_instance Array[Object] */
var11 = 2;
var12 = NEW_array__NativeArray(var11, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var12)->values[0] = (val*) var6;
((struct instance_array__NativeArray*)var12)->values[1] = (val*) var_tag;
{
((void (*)(val*, val*, long))(var10->class->vft[COLOR_array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Object]>*/;
}
}
{
var13 = ((val* (*)(val*))(var10->class->vft[COLOR_string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
}
{
var14 = array__AbstractArrayRead__has(var3, var13);
}
if (var14){
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_warning (self) on <self:ToolContext> */
var18 = self->attrs[COLOR_toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 237);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline opts#Option#value (var16) on <var16:OptionArray> */
var21 = var16->attrs[COLOR_opts__Option___value].val; /* _value on <var16:OptionArray> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = array__AbstractArrayRead__has(var19, var_tag);
}
var23 = !var22;
var_ = var23;
if (var23){
{
{ /* Inline toolcontext#ToolContext#opt_warn (self) on <self:ToolContext> */
var26 = self->attrs[COLOR_toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 234);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline opts#Option#value (var24) on <var24:OptionCount> */
var29 = var24->attrs[COLOR_opts__Option___value].val; /* _value on <var24:OptionCount> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var30 = 0;
{
{ /* Inline kernel#Int#== (var27,var30) on <var27:nullable Object(Int)> */
var34 = (var27 != NULL) && (var27->class == &class_kernel__Int);
if (var34) {
var35 = ((struct instance_kernel__Int*)var27)->value; /* autounbox from nullable Object to Int */;
var34 = (var35 == var30);
}
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
var15 = var31;
} else {
var15 = var_;
}
if (var15){
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var38 = self->attrs[COLOR_toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 104);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
var39 = NEW_toolcontext__Message(&type_toolcontext__Message);
{
((void (*)(val*, val*))(var39->class->vft[COLOR_toolcontext__Message__location_61d]))(var39, var_l) /* location= on <var39:Message>*/;
}
{
((void (*)(val*, val*))(var39->class->vft[COLOR_toolcontext__Message__tag_61d]))(var39, var_tag) /* tag= on <var39:Message>*/;
}
{
((void (*)(val*, val*))(var39->class->vft[COLOR_toolcontext__Message__text_61d]))(var39, var_text) /* text= on <var39:Message>*/;
}
{
((void (*)(val*))(var39->class->vft[COLOR_kernel__Object__init]))(var39) /* init on <var39:Message>*/;
}
{
array__Array__add(var36, var39); /* Direct call array#Array#add on <var36:Array[Message]>*/
}
{
{ /* Inline toolcontext#ToolContext#warning_count (self) on <self:ToolContext> */
var42 = self->attrs[COLOR_toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var43 = 1;
{
{ /* Inline kernel#Int#+ (var40,var43) on <var40:Int> */
/* Covariant cast for argument 0 (i) <var43:Int> isa OTHER */
/* <var43:Int> isa OTHER */
var46 = 1; /* easy <var43:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var47 = var40 + var43;
var44 = var47;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#warning_count= (self,var44) on <self:ToolContext> */
self->attrs[COLOR_toolcontext__ToolContext___warning_count].l = var44; /* _warning_count on <self:ToolContext> */
RET_LABEL48:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_stop_on_first_error (self) on <self:ToolContext> */
var51 = self->attrs[COLOR_toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 261);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline opts#Option#value (var49) on <var49:OptionBool> */
var54 = var49->attrs[COLOR_opts__Option___value].val; /* _value on <var49:OptionBool> */
var52 = var54;
RET_LABEL53:(void)0;
}
}
var55 = ((struct instance_kernel__Bool*)var52)->value; /* autounbox from nullable Object to Bool */;
if (var55){
{
toolcontext__ToolContext__check_errors(self); /* Direct call toolcontext#ToolContext#check_errors on <self:ToolContext>*/
}
} else {
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#warning for (self: Object, nullable Location, String, String) */
void VIRTUAL_toolcontext__ToolContext__warning(val* self, val* p0, val* p1, val* p2) {
toolcontext__ToolContext__warning(self, p0, p1, p2); /* Direct call toolcontext#ToolContext#warning on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method toolcontext#ToolContext#advice for (self: ToolContext, nullable Location, String, String) */
void toolcontext__ToolContext__advice(val* self, val* p0, val* p1, val* p2) {
val* var_l /* var l: nullable Location */;
val* var_tag /* var tag: String */;
val* var_text /* var text: String */;
val* var /* : OptionArray */;
val* var2 /* : OptionArray */;
val* var3 /* : nullable Object */;
val* var5 /* : nullable Object */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
val* var10 /* : Array[Object] */;
long var11 /* : Int */;
val* var12 /* : NativeArray[Object] */;
val* var13 /* : String */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : OptionArray */;
val* var18 /* : OptionArray */;
val* var19 /* : nullable Object */;
val* var21 /* : nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var_ /* var : Bool */;
val* var24 /* : OptionCount */;
val* var26 /* : OptionCount */;
val* var27 /* : nullable Object */;
val* var29 /* : nullable Object */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var34 /* : Int */;
short int var35 /* : Bool */;
val* var36 /* : Array[Message] */;
val* var38 /* : Array[Message] */;
val* var39 /* : Message */;
long var40 /* : Int */;
long var42 /* : Int */;
long var43 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
val* var52 /* : OptionBool */;
val* var54 /* : OptionBool */;
val* var55 /* : nullable Object */;
val* var57 /* : nullable Object */;
short int var58 /* : Bool */;
var_l = p0;
var_tag = p1;
var_text = p2;
{
{ /* Inline toolcontext#ToolContext#opt_warning (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 237);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline opts#Option#value (var) on <var:OptionArray> */
var5 = var->attrs[COLOR_opts__Option___value].val; /* _value on <var:OptionArray> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (varonce) {
var6 = varonce;
} else {
var7 = "no-";
var8 = 3;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var10 = array_instance Array[Object] */
var11 = 2;
var12 = NEW_array__NativeArray(var11, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var12)->values[0] = (val*) var6;
((struct instance_array__NativeArray*)var12)->values[1] = (val*) var_tag;
{
((void (*)(val*, val*, long))(var10->class->vft[COLOR_array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Object]>*/;
}
}
{
var13 = ((val* (*)(val*))(var10->class->vft[COLOR_string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
}
{
var14 = array__AbstractArrayRead__has(var3, var13);
}
if (var14){
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_warning (self) on <self:ToolContext> */
var18 = self->attrs[COLOR_toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 237);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline opts#Option#value (var16) on <var16:OptionArray> */
var21 = var16->attrs[COLOR_opts__Option___value].val; /* _value on <var16:OptionArray> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = array__AbstractArrayRead__has(var19, var_tag);
}
var23 = !var22;
var_ = var23;
if (var23){
{
{ /* Inline toolcontext#ToolContext#opt_warn (self) on <self:ToolContext> */
var26 = self->attrs[COLOR_toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 234);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline opts#Option#value (var24) on <var24:OptionCount> */
var29 = var24->attrs[COLOR_opts__Option___value].val; /* _value on <var24:OptionCount> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
var30 = 1;
{
{ /* Inline kernel#Int#<= (var27,var30) on <var27:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var30:Int> isa OTHER */
/* <var30:Int> isa OTHER */
var33 = 1; /* easy <var30:Int> isa OTHER*/
if (unlikely(!var33)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var34 = ((struct instance_kernel__Int*)var27)->value; /* autounbox from nullable Object to Int */;
var35 = var34 <= var30;
var31 = var35;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var15 = var31;
} else {
var15 = var_;
}
if (var15){
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var38 = self->attrs[COLOR_toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 104);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
var39 = NEW_toolcontext__Message(&type_toolcontext__Message);
{
((void (*)(val*, val*))(var39->class->vft[COLOR_toolcontext__Message__location_61d]))(var39, var_l) /* location= on <var39:Message>*/;
}
{
((void (*)(val*, val*))(var39->class->vft[COLOR_toolcontext__Message__tag_61d]))(var39, var_tag) /* tag= on <var39:Message>*/;
}
{
((void (*)(val*, val*))(var39->class->vft[COLOR_toolcontext__Message__text_61d]))(var39, var_text) /* text= on <var39:Message>*/;
}
{
((void (*)(val*))(var39->class->vft[COLOR_kernel__Object__init]))(var39) /* init on <var39:Message>*/;
}
{
array__Array__add(var36, var39); /* Direct call array#Array#add on <var36:Array[Message]>*/
}
{
{ /* Inline toolcontext#ToolContext#warning_count (self) on <self:ToolContext> */
var42 = self->attrs[COLOR_toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var43 = 1;
{
{ /* Inline kernel#Int#+ (var40,var43) on <var40:Int> */
/* Covariant cast for argument 0 (i) <var43:Int> isa OTHER */
/* <var43:Int> isa OTHER */
var46 = 1; /* easy <var43:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 374);
show_backtrace(1);
}
var50 = var40 + var43;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#warning_count= (self,var44) on <self:ToolContext> */
self->attrs[COLOR_toolcontext__ToolContext___warning_count].l = var44; /* _warning_count on <self:ToolContext> */
RET_LABEL51:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_stop_on_first_error (self) on <self:ToolContext> */
var54 = self->attrs[COLOR_toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 261);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline opts#Option#value (var52) on <var52:OptionBool> */
var57 = var52->attrs[COLOR_opts__Option___value].val; /* _value on <var52:OptionBool> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
var58 = ((struct instance_kernel__Bool*)var55)->value; /* autounbox from nullable Object to Bool */;
if (var58){
{
toolcontext__ToolContext__check_errors(self); /* Direct call toolcontext#ToolContext#check_errors on <self:ToolContext>*/
}
} else {
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#advice for (self: Object, nullable Location, String, String) */
void VIRTUAL_toolcontext__ToolContext__advice(val* self, val* p0, val* p1, val* p2) {
toolcontext__ToolContext__advice(self, p0, p1, p2); /* Direct call toolcontext#ToolContext#advice on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method toolcontext#ToolContext#info for (self: ToolContext, String, Int) */
void toolcontext__ToolContext__info(val* self, val* p0, long p1) {
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
val* var7 /* : Array[Object] */;
long var8 /* : Int */;
val* var9 /* : NativeArray[Object] */;
val* var10 /* : String */;
var_s = p0;
var_level = p1;
{
{ /* Inline toolcontext#ToolContext#verbose_level (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_toolcontext__ToolContext___verbose_level].l; /* _verbose_level on <self:ToolContext> */
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
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/kernel.nit", 370);
show_backtrace(1);
}
var6 = var_level <= var;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var7 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var7 = array_instance Array[Object] */
var8 = 1;
var9 = NEW_array__NativeArray(var8, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var9)->values[0] = (val*) var_s;
{
((void (*)(val*, val*, long))(var7->class->vft[COLOR_array__Array__with_native]))(var7, var9, var8) /* with_native on <var7:Array[Object]>*/;
}
}
{
var10 = ((val* (*)(val*))(var7->class->vft[COLOR_string__Object__to_s]))(var7) /* to_s on <var7:Array[Object]>*/;
}
{
file__Object__print(self, var10); /* Direct call file#Object#print on <self:ToolContext>*/
}
} else {
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#info for (self: Object, String, Int) */
void VIRTUAL_toolcontext__ToolContext__info(val* self, val* p0, long p1) {
toolcontext__ToolContext__info(self, p0, p1); /* Direct call toolcontext#ToolContext#info on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method toolcontext#ToolContext#option_context for (self: ToolContext): OptionContext */
val* toolcontext__ToolContext__option_context(val* self) {
val* var /* : OptionContext */;
val* var1 /* : OptionContext */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#option_context for (self: Object): OptionContext */
val* VIRTUAL_toolcontext__ToolContext__option_context(val* self) {
val* var /* : OptionContext */;
val* var1 /* : OptionContext */;
val* var3 /* : OptionContext */;
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_warn for (self: ToolContext): OptionCount */
val* toolcontext__ToolContext__opt_warn(val* self) {
val* var /* : OptionCount */;
val* var1 /* : OptionCount */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 234);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_warn for (self: Object): OptionCount */
val* VIRTUAL_toolcontext__ToolContext__opt_warn(val* self) {
val* var /* : OptionCount */;
val* var1 /* : OptionCount */;
val* var3 /* : OptionCount */;
{ /* Inline toolcontext#ToolContext#opt_warn (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 234);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_warning for (self: ToolContext): OptionArray */
val* toolcontext__ToolContext__opt_warning(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 237);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_warning for (self: Object): OptionArray */
val* VIRTUAL_toolcontext__ToolContext__opt_warning(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
val* var3 /* : OptionArray */;
{ /* Inline toolcontext#ToolContext#opt_warning (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 237);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_quiet for (self: ToolContext): OptionBool */
val* toolcontext__ToolContext__opt_quiet(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___opt_quiet].val; /* _opt_quiet on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_quiet");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 240);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_quiet for (self: Object): OptionBool */
val* VIRTUAL_toolcontext__ToolContext__opt_quiet(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline toolcontext#ToolContext#opt_quiet (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___opt_quiet].val; /* _opt_quiet on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_quiet");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 240);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_log for (self: ToolContext): OptionBool */
val* toolcontext__ToolContext__opt_log(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___opt_log].val; /* _opt_log on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 243);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_log for (self: Object): OptionBool */
val* VIRTUAL_toolcontext__ToolContext__opt_log(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline toolcontext#ToolContext#opt_log (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___opt_log].val; /* _opt_log on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 243);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_log_dir for (self: ToolContext): OptionString */
val* toolcontext__ToolContext__opt_log_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___opt_log_dir].val; /* _opt_log_dir on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log_dir");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 246);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_log_dir for (self: Object): OptionString */
val* VIRTUAL_toolcontext__ToolContext__opt_log_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
val* var3 /* : OptionString */;
{ /* Inline toolcontext#ToolContext#opt_log_dir (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___opt_log_dir].val; /* _opt_log_dir on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log_dir");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 246);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_help for (self: ToolContext): OptionBool */
val* toolcontext__ToolContext__opt_help(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___opt_help].val; /* _opt_help on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_help");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 249);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_help for (self: Object): OptionBool */
val* VIRTUAL_toolcontext__ToolContext__opt_help(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline toolcontext#ToolContext#opt_help (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___opt_help].val; /* _opt_help on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_help");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 249);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_version for (self: ToolContext): OptionBool */
val* toolcontext__ToolContext__opt_version(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___opt_version].val; /* _opt_version on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_version");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 252);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_version for (self: Object): OptionBool */
val* VIRTUAL_toolcontext__ToolContext__opt_version(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline toolcontext#ToolContext#opt_version (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___opt_version].val; /* _opt_version on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_version");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 252);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_set_dummy_tool for (self: ToolContext): OptionBool */
val* toolcontext__ToolContext__opt_set_dummy_tool(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 255);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_set_dummy_tool for (self: Object): OptionBool */
val* VIRTUAL_toolcontext__ToolContext__opt_set_dummy_tool(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline toolcontext#ToolContext#opt_set_dummy_tool (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 255);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_verbose for (self: ToolContext): OptionCount */
val* toolcontext__ToolContext__opt_verbose(val* self) {
val* var /* : OptionCount */;
val* var1 /* : OptionCount */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___opt_verbose].val; /* _opt_verbose on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_verbose");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 258);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_verbose for (self: Object): OptionCount */
val* VIRTUAL_toolcontext__ToolContext__opt_verbose(val* self) {
val* var /* : OptionCount */;
val* var1 /* : OptionCount */;
val* var3 /* : OptionCount */;
{ /* Inline toolcontext#ToolContext#opt_verbose (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___opt_verbose].val; /* _opt_verbose on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_verbose");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 258);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_stop_on_first_error for (self: ToolContext): OptionBool */
val* toolcontext__ToolContext__opt_stop_on_first_error(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 261);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_stop_on_first_error for (self: Object): OptionBool */
val* VIRTUAL_toolcontext__ToolContext__opt_stop_on_first_error(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline toolcontext#ToolContext#opt_stop_on_first_error (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 261);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_no_color for (self: ToolContext): OptionBool */
val* toolcontext__ToolContext__opt_no_color(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___opt_no_color].val; /* _opt_no_color on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_color");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 264);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_no_color for (self: Object): OptionBool */
val* VIRTUAL_toolcontext__ToolContext__opt_no_color(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline toolcontext#ToolContext#opt_no_color (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___opt_no_color].val; /* _opt_no_color on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_color");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 264);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_bash_completion for (self: ToolContext): OptionBool */
val* toolcontext__ToolContext__opt_bash_completion(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___opt_bash_completion].val; /* _opt_bash_completion on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_bash_completion");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 267);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_bash_completion for (self: Object): OptionBool */
val* VIRTUAL_toolcontext__ToolContext__opt_bash_completion(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline toolcontext#ToolContext#opt_bash_completion (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___opt_bash_completion].val; /* _opt_bash_completion on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_bash_completion");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 267);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_stub_man for (self: ToolContext): OptionBool */
val* toolcontext__ToolContext__opt_stub_man(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___opt_stub_man].val; /* _opt_stub_man on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stub_man");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 270);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_stub_man for (self: Object): OptionBool */
val* VIRTUAL_toolcontext__ToolContext__opt_stub_man(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
{ /* Inline toolcontext#ToolContext#opt_stub_man (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___opt_stub_man].val; /* _opt_stub_man on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stub_man");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 270);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#verbose_level for (self: ToolContext): Int */
long toolcontext__ToolContext__verbose_level(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___verbose_level].l; /* _verbose_level on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#verbose_level for (self: Object): Int */
long VIRTUAL_toolcontext__ToolContext__verbose_level(val* self) {
long var /* : Int */;
long var1 /* : Int */;
long var3 /* : Int */;
{ /* Inline toolcontext#ToolContext#verbose_level (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___verbose_level].l; /* _verbose_level on <self:Object(ToolContext)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#verbose_level= for (self: ToolContext, Int) */
void toolcontext__ToolContext__verbose_level_61d(val* self, long p0) {
self->attrs[COLOR_toolcontext__ToolContext___verbose_level].l = p0; /* _verbose_level on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#verbose_level= for (self: Object, Int) */
void VIRTUAL_toolcontext__ToolContext__verbose_level_61d(val* self, long p0) {
{ /* Inline toolcontext#ToolContext#verbose_level= (self,p0) on <self:Object(ToolContext)> */
self->attrs[COLOR_toolcontext__ToolContext___verbose_level].l = p0; /* _verbose_level on <self:Object(ToolContext)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#init for (self: ToolContext) */
void toolcontext__ToolContext__init(val* self) {
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
val* var21 /* : OptionString */;
val* var23 /* : OptionString */;
val* var24 /* : OptionBool */;
val* var26 /* : OptionBool */;
val* var27 /* : OptionBool */;
val* var29 /* : OptionBool */;
val* var30 /* : OptionBool */;
val* var32 /* : OptionBool */;
val* var33 /* : OptionCount */;
val* var35 /* : OptionCount */;
val* var36 /* : OptionBool */;
val* var38 /* : OptionBool */;
val* var39 /* : OptionBool */;
val* var41 /* : OptionBool */;
val* var42 /* : Array[Option] */;
long var43 /* : Int */;
val* var44 /* : NativeArray[Option] */;
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_warn (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 234);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_warning (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 237);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_quiet (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_toolcontext__ToolContext___opt_quiet].val; /* _opt_quiet on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_quiet");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 240);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_stop_on_first_error (self) on <self:ToolContext> */
var14 = self->attrs[COLOR_toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 261);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_no_color (self) on <self:ToolContext> */
var17 = self->attrs[COLOR_toolcontext__ToolContext___opt_no_color].val; /* _opt_no_color on <self:ToolContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_color");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 264);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_log (self) on <self:ToolContext> */
var20 = self->attrs[COLOR_toolcontext__ToolContext___opt_log].val; /* _opt_log on <self:ToolContext> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 243);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_log_dir (self) on <self:ToolContext> */
var23 = self->attrs[COLOR_toolcontext__ToolContext___opt_log_dir].val; /* _opt_log_dir on <self:ToolContext> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log_dir");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 246);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_help (self) on <self:ToolContext> */
var26 = self->attrs[COLOR_toolcontext__ToolContext___opt_help].val; /* _opt_help on <self:ToolContext> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_help");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 249);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_version (self) on <self:ToolContext> */
var29 = self->attrs[COLOR_toolcontext__ToolContext___opt_version].val; /* _opt_version on <self:ToolContext> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_version");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 252);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_set_dummy_tool (self) on <self:ToolContext> */
var32 = self->attrs[COLOR_toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:ToolContext> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 255);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_verbose (self) on <self:ToolContext> */
var35 = self->attrs[COLOR_toolcontext__ToolContext___opt_verbose].val; /* _opt_verbose on <self:ToolContext> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_verbose");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 258);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_bash_completion (self) on <self:ToolContext> */
var38 = self->attrs[COLOR_toolcontext__ToolContext___opt_bash_completion].val; /* _opt_bash_completion on <self:ToolContext> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_bash_completion");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 267);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_stub_man (self) on <self:ToolContext> */
var41 = self->attrs[COLOR_toolcontext__ToolContext___opt_stub_man].val; /* _opt_stub_man on <self:ToolContext> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stub_man");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 270);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
var42 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var42 = array_instance Array[Option] */
var43 = 13;
var44 = NEW_array__NativeArray(var43, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var44)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var44)->values[1] = (val*) var6;
((struct instance_array__NativeArray*)var44)->values[2] = (val*) var9;
((struct instance_array__NativeArray*)var44)->values[3] = (val*) var12;
((struct instance_array__NativeArray*)var44)->values[4] = (val*) var15;
((struct instance_array__NativeArray*)var44)->values[5] = (val*) var18;
((struct instance_array__NativeArray*)var44)->values[6] = (val*) var21;
((struct instance_array__NativeArray*)var44)->values[7] = (val*) var24;
((struct instance_array__NativeArray*)var44)->values[8] = (val*) var27;
((struct instance_array__NativeArray*)var44)->values[9] = (val*) var30;
((struct instance_array__NativeArray*)var44)->values[10] = (val*) var33;
((struct instance_array__NativeArray*)var44)->values[11] = (val*) var36;
((struct instance_array__NativeArray*)var44)->values[12] = (val*) var39;
{
((void (*)(val*, val*, long))(var42->class->vft[COLOR_array__Array__with_native]))(var42, var44, var43) /* with_native on <var42:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var, var42); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#init for (self: Object) */
void VIRTUAL_toolcontext__ToolContext__init(val* self) {
toolcontext__ToolContext__init(self); /* Direct call toolcontext#ToolContext#init on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method toolcontext#ToolContext#tooldescription for (self: ToolContext): String */
val* toolcontext__ToolContext__tooldescription(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 281);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#tooldescription for (self: Object): String */
val* VIRTUAL_toolcontext__ToolContext__tooldescription(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline toolcontext#ToolContext#tooldescription (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 281);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#tooldescription= for (self: ToolContext, String) */
void toolcontext__ToolContext__tooldescription_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__ToolContext___tooldescription].val = p0; /* _tooldescription on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#tooldescription= for (self: Object, String) */
void VIRTUAL_toolcontext__ToolContext__tooldescription_61d(val* self, val* p0) {
{ /* Inline toolcontext#ToolContext#tooldescription= (self,p0) on <self:Object(ToolContext)> */
self->attrs[COLOR_toolcontext__ToolContext___tooldescription].val = p0; /* _tooldescription on <self:Object(ToolContext)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#accept_no_arguments for (self: ToolContext): Bool */
short int toolcontext__ToolContext__accept_no_arguments(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___accept_no_arguments].s; /* _accept_no_arguments on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#accept_no_arguments for (self: Object): Bool */
short int VIRTUAL_toolcontext__ToolContext__accept_no_arguments(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline toolcontext#ToolContext#accept_no_arguments (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___accept_no_arguments].s; /* _accept_no_arguments on <self:Object(ToolContext)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#usage for (self: ToolContext) */
void toolcontext__ToolContext__usage(val* self) {
val* var /* : String */;
val* var2 /* : String */;
val* var3 /* : OptionContext */;
val* var5 /* : OptionContext */;
{
{ /* Inline toolcontext#ToolContext#tooldescription (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 281);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
file__Object__print(self, var); /* Direct call file#Object#print on <self:ToolContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
opts__OptionContext__usage(var3); /* Direct call opts#OptionContext#usage on <var3:OptionContext>*/
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#usage for (self: Object) */
void VIRTUAL_toolcontext__ToolContext__usage(val* self) {
toolcontext__ToolContext__usage(self); /* Direct call toolcontext#ToolContext#usage on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method toolcontext#ToolContext#process_options for (self: ToolContext, Sequence[String]) */
void toolcontext__ToolContext__process_options(val* self, val* p0) {
val* var_args /* var args: Sequence[String] */;
val* var /* : OptionCount */;
val* var2 /* : OptionCount */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var6 /* : nullable Object */;
val* var7 /* : OptionContext */;
val* var9 /* : OptionContext */;
val* var10 /* : OptionBool */;
val* var12 /* : OptionBool */;
val* var13 /* : nullable Object */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
long var17 /* : Int */;
val* var19 /* : OptionBool */;
val* var21 /* : OptionBool */;
val* var22 /* : nullable Object */;
val* var24 /* : nullable Object */;
short int var25 /* : Bool */;
val* var26 /* : String */;
long var27 /* : Int */;
val* var29 /* : OptionBool */;
val* var31 /* : OptionBool */;
val* var32 /* : nullable Object */;
val* var34 /* : nullable Object */;
short int var35 /* : Bool */;
val* var36 /* : BashCompletion */;
val* var_bash_completion /* var bash_completion: BashCompletion */;
val* var37 /* : Sys */;
val* var39 /* : Sys */;
val* var40 /* : OStream */;
val* var42 /* : OStream */;
long var43 /* : Int */;
val* var45 /* : OptionBool */;
val* var47 /* : OptionBool */;
val* var48 /* : nullable Object */;
val* var50 /* : nullable Object */;
short int var51 /* : Bool */;
static val* varonce;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
val* var56 /* : String */;
val* var57 /* : String */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : FlatString */;
val* var63 /* : String */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
val* var71 /* : Array[Text] */;
long var72 /* : Int */;
val* var73 /* : nullable Object */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : FlatString */;
val* var85 /* : Array[Object] */;
long var86 /* : Int */;
val* var87 /* : NativeArray[Object] */;
val* var88 /* : String */;
val* var89 /* : OptionContext */;
val* var91 /* : OptionContext */;
val* var92 /* : Array[Option] */;
val* var94 /* : Array[Option] */;
val* var_ /* var : Array[Option] */;
val* var95 /* : ArrayIterator[nullable Object] */;
val* var_96 /* var : ArrayIterator[Option] */;
short int var97 /* : Bool */;
val* var98 /* : nullable Object */;
val* var_o /* var o: Option */;
short int var99 /* : Bool */;
short int var_first /* var first: Bool */;
val* var100 /* : Array[String] */;
val* var102 /* : Array[String] */;
val* var_103 /* var : Array[String] */;
val* var104 /* : ArrayIterator[nullable Object] */;
val* var_105 /* var : ArrayIterator[String] */;
short int var106 /* : Bool */;
val* var107 /* : nullable Object */;
val* var_n /* var n: String */;
short int var108 /* : Bool */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
val* var113 /* : FlatString */;
val* var114 /* : Array[Object] */;
long var115 /* : Int */;
val* var116 /* : NativeArray[Object] */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
long var120 /* : Int */;
val* var121 /* : FlatString */;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : NativeString */;
long var125 /* : Int */;
val* var126 /* : FlatString */;
val* var127 /* : Array[Object] */;
long var128 /* : Int */;
val* var129 /* : NativeArray[Object] */;
val* var130 /* : String */;
val* var131 /* : Array[Object] */;
long var132 /* : Int */;
val* var133 /* : NativeArray[Object] */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
long var138 /* : Int */;
val* var139 /* : FlatString */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : NativeString */;
long var143 /* : Int */;
val* var144 /* : FlatString */;
val* var145 /* : String */;
val* var147 /* : String */;
val* var148 /* : Array[Object] */;
long var149 /* : Int */;
val* var150 /* : NativeArray[Object] */;
val* var151 /* : String */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : FlatString */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : FlatString */;
long var164 /* : Int */;
val* var166 /* : OptionContext */;
val* var168 /* : OptionContext */;
val* var169 /* : Array[String] */;
val* var_errors /* var errors: Array[String] */;
short int var170 /* : Bool */;
short int var171 /* : Bool */;
val* var_172 /* var : Array[String] */;
val* var173 /* : ArrayIterator[nullable Object] */;
val* var_174 /* var : ArrayIterator[String] */;
short int var175 /* : Bool */;
val* var176 /* : nullable Object */;
val* var_e /* var e: String */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : NativeString */;
long var180 /* : Int */;
val* var181 /* : FlatString */;
val* var182 /* : Array[Object] */;
long var183 /* : Int */;
val* var184 /* : NativeArray[Object] */;
val* var185 /* : String */;
val* var188 /* : String */;
val* var190 /* : String */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : NativeString */;
long var194 /* : Int */;
val* var195 /* : FlatString */;
long var196 /* : Int */;
short int var198 /* : Bool */;
val* var199 /* : OptionContext */;
val* var201 /* : OptionContext */;
val* var202 /* : Array[String] */;
val* var204 /* : Array[String] */;
short int var205 /* : Bool */;
short int var_206 /* var : Bool */;
short int var207 /* : Bool */;
short int var209 /* : Bool */;
short int var210 /* : Bool */;
val* var211 /* : String */;
val* var213 /* : String */;
static val* varonce214;
val* var215 /* : String */;
char* var216 /* : NativeString */;
long var217 /* : Int */;
val* var218 /* : FlatString */;
long var219 /* : Int */;
val* var221 /* : OptionCount */;
val* var223 /* : OptionCount */;
val* var224 /* : nullable Object */;
val* var226 /* : nullable Object */;
long var228 /* : Int */;
val* var229 /* : OptionBool */;
val* var231 /* : OptionBool */;
val* var232 /* : nullable Object */;
val* var234 /* : nullable Object */;
short int var235 /* : Bool */;
val* var236 /* : OptionCount */;
val* var238 /* : OptionCount */;
long var239 /* : Int */;
short int var241 /* : Bool */;
int cltype242;
int idtype243;
const struct type* type_struct244;
const char* var_class_name245;
val* var246 /* : nullable Object */;
val* var247 /* : OptionString */;
val* var249 /* : OptionString */;
val* var250 /* : nullable Object */;
val* var252 /* : nullable Object */;
val* var253 /* : null */;
short int var254 /* : Bool */;
short int var255 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var257 /* : Bool */;
short int var258 /* : Bool */;
short int var259 /* : Bool */;
val* var260 /* : OptionString */;
val* var262 /* : OptionString */;
val* var263 /* : nullable Object */;
val* var265 /* : nullable Object */;
val* var267 /* : OptionBool */;
val* var269 /* : OptionBool */;
val* var270 /* : nullable Object */;
val* var272 /* : nullable Object */;
short int var273 /* : Bool */;
val* var274 /* : String */;
val* var276 /* : String */;
val* var277 /* : nullable String */;
var_args = p0;
{
{ /* Inline toolcontext#ToolContext#opt_warn (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 234);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = 1;
{
{ /* Inline opts#Option#value= (var,var3) on <var:OptionCount> */
/* Covariant cast for argument 0 (value) <var3:Int> isa VALUE */
/* <var3:Int> isa VALUE */
type_struct = var->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (&type_kernel__Int)->table_size) {
var5 = 0;
} else {
var5 = (&type_kernel__Int)->type_table[cltype] == idtype;
}
if (unlikely(!var5)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 40);
show_backtrace(1);
}
var6 = BOX_kernel__Int(var3); /* autobox from Int to nullable Object */
var->attrs[COLOR_opts__Option___value].val = var6; /* _value on <var:OptionCount> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var9 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
opts__OptionContext__parse(var7, var_args); /* Direct call opts#OptionContext#parse on <var7:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#opt_help (self) on <self:ToolContext> */
var12 = self->attrs[COLOR_toolcontext__ToolContext___opt_help].val; /* _opt_help on <self:ToolContext> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_help");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 249);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline opts#Option#value (var10) on <var10:OptionBool> */
var15 = var10->attrs[COLOR_opts__Option___value].val; /* _value on <var10:OptionBool> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
var16 = ((struct instance_kernel__Bool*)var13)->value; /* autounbox from nullable Object to Bool */;
if (var16){
{
toolcontext__ToolContext__usage(self); /* Direct call toolcontext#ToolContext#usage on <self:ToolContext>*/
}
var17 = 0;
{
{ /* Inline kernel#Object#exit (self,var17) on <self:ToolContext> */
exit(var17);
RET_LABEL18:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_version (self) on <self:ToolContext> */
var21 = self->attrs[COLOR_toolcontext__ToolContext___opt_version].val; /* _opt_version on <self:ToolContext> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_version");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 252);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline opts#Option#value (var19) on <var19:OptionBool> */
var24 = var19->attrs[COLOR_opts__Option___value].val; /* _value on <var19:OptionBool> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var25 = ((struct instance_kernel__Bool*)var22)->value; /* autounbox from nullable Object to Bool */;
if (var25){
{
var26 = toolcontext__ToolContext__version(self);
}
{
file__Object__print(self, var26); /* Direct call file#Object#print on <self:ToolContext>*/
}
var27 = 0;
{
{ /* Inline kernel#Object#exit (self,var27) on <self:ToolContext> */
exit(var27);
RET_LABEL28:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_bash_completion (self) on <self:ToolContext> */
var31 = self->attrs[COLOR_toolcontext__ToolContext___opt_bash_completion].val; /* _opt_bash_completion on <self:ToolContext> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_bash_completion");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 267);
show_backtrace(1);
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
var35 = ((struct instance_kernel__Bool*)var32)->value; /* autounbox from nullable Object to Bool */;
if (var35){
var36 = NEW_toolcontext__BashCompletion(&type_toolcontext__BashCompletion);
{
toolcontext__BashCompletion__init(var36, self); /* Direct call toolcontext#BashCompletion#init on <var36:BashCompletion>*/
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
{ /* Inline file#Sys#stdout (var37) on <var37:Sys> */
var42 = var37->attrs[COLOR_file__Sys___stdout].val; /* _stdout on <var37:Sys> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdout");
PRINT_ERROR(" (%s:%d)\n", "../lib/standard/file.nit", 634);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
template__Template__write_to(var_bash_completion, var40); /* Direct call template#Template#write_to on <var_bash_completion:BashCompletion>*/
}
var43 = 0;
{
{ /* Inline kernel#Object#exit (self,var43) on <self:ToolContext> */
exit(var43);
RET_LABEL44:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_stub_man (self) on <self:ToolContext> */
var47 = self->attrs[COLOR_toolcontext__ToolContext___opt_stub_man].val; /* _opt_stub_man on <self:ToolContext> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stub_man");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 270);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline opts#Option#value (var45) on <var45:OptionBool> */
var50 = var45->attrs[COLOR_opts__Option___value].val; /* _value on <var45:OptionBool> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
var51 = ((struct instance_kernel__Bool*)var48)->value; /* autounbox from nullable Object to Bool */;
if (var51){
if (varonce) {
var52 = varonce;
} else {
var53 = "% ";
var54 = 2;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce = var52;
}
{
var56 = toolcontext__ToolContext__toolname(self);
}
{
var57 = string__FlatString__to_upper(var56);
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = "(1)\n\n# NAME\n\n";
var61 = 13;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
{
{ /* Inline toolcontext#ToolContext#tooldescription (self) on <self:ToolContext> */
var65 = self->attrs[COLOR_toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 281);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = "\n";
var69 = 1;
var70 = string__NativeString__to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
{
var71 = string_search__Text__split(var63, var67);
}
var72 = 1;
{
var73 = array__Array___91d_93d(var71, var72);
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = "\n\n# SYNOPSYS\n\n";
var77 = 14;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
{
var79 = toolcontext__ToolContext__toolname(self);
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = " [*options*]...\n\n# OPTIONS\n";
var83 = 27;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
var85 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var85 = array_instance Array[Object] */
var86 = 7;
var87 = NEW_array__NativeArray(var86, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var87)->values[0] = (val*) var52;
((struct instance_array__NativeArray*)var87)->values[1] = (val*) var57;
((struct instance_array__NativeArray*)var87)->values[2] = (val*) var59;
((struct instance_array__NativeArray*)var87)->values[3] = (val*) var73;
((struct instance_array__NativeArray*)var87)->values[4] = (val*) var75;
((struct instance_array__NativeArray*)var87)->values[5] = (val*) var79;
((struct instance_array__NativeArray*)var87)->values[6] = (val*) var81;
{
((void (*)(val*, val*, long))(var85->class->vft[COLOR_array__Array__with_native]))(var85, var87, var86) /* with_native on <var85:Array[Object]>*/;
}
}
{
var88 = ((val* (*)(val*))(var85->class->vft[COLOR_string__Object__to_s]))(var85) /* to_s on <var85:Array[Object]>*/;
}
{
file__Object__print(self, var88); /* Direct call file#Object#print on <self:ToolContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var91 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
show_backtrace(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline opts#OptionContext#options (var89) on <var89:OptionContext> */
var94 = var89->attrs[COLOR_opts__OptionContext___options].val; /* _options on <var89:OptionContext> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _options");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 243);
show_backtrace(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
var_ = var92;
{
var95 = array__AbstractArrayRead__iterator(var_);
}
var_96 = var95;
for(;;) {
{
var97 = array__ArrayIterator__is_ok(var_96);
}
if (var97){
{
var98 = array__ArrayIterator__item(var_96);
}
var_o = var98;
var99 = 1;
var_first = var99;
{
{ /* Inline opts#Option#names (var_o) on <var_o:Option> */
var102 = var_o->attrs[COLOR_opts__Option___names].val; /* _names on <var_o:Option> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 19);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
var_103 = var100;
{
var104 = array__AbstractArrayRead__iterator(var_103);
}
var_105 = var104;
for(;;) {
{
var106 = array__ArrayIterator__is_ok(var_105);
}
if (var106){
{
var107 = array__ArrayIterator__item(var_105);
}
var_n = var107;
if (var_first){
var108 = 0;
var_first = var108;
} else {
if (varonce109) {
var110 = varonce109;
} else {
var111 = ", ";
var112 = 2;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
var114 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var114 = array_instance Array[Object] */
var115 = 1;
var116 = NEW_array__NativeArray(var115, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var116)->values[0] = (val*) var110;
{
((void (*)(val*, val*, long))(var114->class->vft[COLOR_array__Array__with_native]))(var114, var116, var115) /* with_native on <var114:Array[Object]>*/;
}
}
{
file__Object__printn(self, var114); /* Direct call file#Object#printn on <self:ToolContext>*/
}
}
if (varonce117) {
var118 = varonce117;
} else {
var119 = "`";
var120 = 1;
var121 = string__NativeString__to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
if (varonce122) {
var123 = varonce122;
} else {
var124 = "`";
var125 = 1;
var126 = string__NativeString__to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
var127 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var127 = array_instance Array[Object] */
var128 = 3;
var129 = NEW_array__NativeArray(var128, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var129)->values[0] = (val*) var118;
((struct instance_array__NativeArray*)var129)->values[1] = (val*) var_n;
((struct instance_array__NativeArray*)var129)->values[2] = (val*) var123;
{
((void (*)(val*, val*, long))(var127->class->vft[COLOR_array__Array__with_native]))(var127, var129, var128) /* with_native on <var127:Array[Object]>*/;
}
}
{
var130 = ((val* (*)(val*))(var127->class->vft[COLOR_string__Object__to_s]))(var127) /* to_s on <var127:Array[Object]>*/;
}
var131 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var131 = array_instance Array[Object] */
var132 = 1;
var133 = NEW_array__NativeArray(var132, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var133)->values[0] = (val*) var130;
{
((void (*)(val*, val*, long))(var131->class->vft[COLOR_array__Array__with_native]))(var131, var133, var132) /* with_native on <var131:Array[Object]>*/;
}
}
{
file__Object__printn(self, var131); /* Direct call file#Object#printn on <self:ToolContext>*/
}
{
array__ArrayIterator__next(var_105); /* Direct call array#ArrayIterator#next on <var_105:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_105) on <var_105:ArrayIterator[String]> */
RET_LABEL134:(void)0;
}
}
if (varonce135) {
var136 = varonce135;
} else {
var137 = "";
var138 = 0;
var139 = string__NativeString__to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
{
file__Object__print(self, var136); /* Direct call file#Object#print on <self:ToolContext>*/
}
if (varonce140) {
var141 = varonce140;
} else {
var142 = ":   ";
var143 = 4;
var144 = string__NativeString__to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
{
{ /* Inline opts#Option#helptext (var_o) on <var_o:Option> */
var147 = var_o->attrs[COLOR_opts__Option___helptext].val; /* _helptext on <var_o:Option> */
if (unlikely(var147 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _helptext");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 25);
show_backtrace(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
var148 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var148 = array_instance Array[Object] */
var149 = 2;
var150 = NEW_array__NativeArray(var149, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var150)->values[0] = (val*) var141;
((struct instance_array__NativeArray*)var150)->values[1] = (val*) var145;
{
((void (*)(val*, val*, long))(var148->class->vft[COLOR_array__Array__with_native]))(var148, var150, var149) /* with_native on <var148:Array[Object]>*/;
}
}
{
var151 = ((val* (*)(val*))(var148->class->vft[COLOR_string__Object__to_s]))(var148) /* to_s on <var148:Array[Object]>*/;
}
{
file__Object__print(self, var151); /* Direct call file#Object#print on <self:ToolContext>*/
}
if (varonce152) {
var153 = varonce152;
} else {
var154 = "";
var155 = 0;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
{
file__Object__print(self, var153); /* Direct call file#Object#print on <self:ToolContext>*/
}
{
array__ArrayIterator__next(var_96); /* Direct call array#ArrayIterator#next on <var_96:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label157;
}
}
BREAK_label157: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_96) on <var_96:ArrayIterator[Option]> */
RET_LABEL158:(void)0;
}
}
if (varonce159) {
var160 = varonce159;
} else {
var161 = "# SEE ALSO\n\nThe Nit language documentation and the source code of its tools and libraries may be downloaded from <http://nitlanguage.org>";
var162 = 137;
var163 = string__NativeString__to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
{
file__Object__print(self, var160); /* Direct call file#Object#print on <self:ToolContext>*/
}
var164 = 0;
{
{ /* Inline kernel#Object#exit (self,var164) on <self:ToolContext> */
exit(var164);
RET_LABEL165:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var168 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var168 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
show_backtrace(1);
}
var166 = var168;
RET_LABEL167:(void)0;
}
}
{
var169 = opts__OptionContext__get_errors(var166);
}
var_errors = var169;
{
var170 = array__AbstractArrayRead__is_empty(var_errors);
}
var171 = !var170;
if (var171){
var_172 = var_errors;
{
var173 = array__AbstractArrayRead__iterator(var_172);
}
var_174 = var173;
for(;;) {
{
var175 = array__ArrayIterator__is_ok(var_174);
}
if (var175){
{
var176 = array__ArrayIterator__item(var_174);
}
var_e = var176;
if (varonce177) {
var178 = varonce177;
} else {
var179 = "Error: ";
var180 = 7;
var181 = string__NativeString__to_s_with_length(var179, var180);
var178 = var181;
varonce177 = var178;
}
var182 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var182 = array_instance Array[Object] */
var183 = 2;
var184 = NEW_array__NativeArray(var183, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var184)->values[0] = (val*) var178;
((struct instance_array__NativeArray*)var184)->values[1] = (val*) var_e;
{
((void (*)(val*, val*, long))(var182->class->vft[COLOR_array__Array__with_native]))(var182, var184, var183) /* with_native on <var182:Array[Object]>*/;
}
}
{
var185 = ((val* (*)(val*))(var182->class->vft[COLOR_string__Object__to_s]))(var182) /* to_s on <var182:Array[Object]>*/;
}
{
file__Object__print(self, var185); /* Direct call file#Object#print on <self:ToolContext>*/
}
{
array__ArrayIterator__next(var_174); /* Direct call array#ArrayIterator#next on <var_174:ArrayIterator[String]>*/
}
} else {
goto BREAK_label186;
}
}
BREAK_label186: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_174) on <var_174:ArrayIterator[String]> */
RET_LABEL187:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#tooldescription (self) on <self:ToolContext> */
var190 = self->attrs[COLOR_toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var190 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 281);
show_backtrace(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
{
file__Object__print(self, var188); /* Direct call file#Object#print on <self:ToolContext>*/
}
if (varonce191) {
var192 = varonce191;
} else {
var193 = "Use --help for help";
var194 = 19;
var195 = string__NativeString__to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
{
file__Object__print(self, var192); /* Direct call file#Object#print on <self:ToolContext>*/
}
var196 = 1;
{
{ /* Inline kernel#Object#exit (self,var196) on <self:ToolContext> */
exit(var196);
RET_LABEL197:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var201 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
show_backtrace(1);
}
var199 = var201;
RET_LABEL200:(void)0;
}
}
{
{ /* Inline opts#OptionContext#rest (var199) on <var199:OptionContext> */
var204 = var199->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <var199:OptionContext> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _rest");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 246);
show_backtrace(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
{
var205 = array__AbstractArrayRead__is_empty(var202);
}
var_206 = var205;
if (var205){
{
{ /* Inline toolcontext#ToolContext#accept_no_arguments (self) on <self:ToolContext> */
var209 = self->attrs[COLOR_toolcontext__ToolContext___accept_no_arguments].s; /* _accept_no_arguments on <self:ToolContext> */
var207 = var209;
RET_LABEL208:(void)0;
}
}
var210 = !var207;
var198 = var210;
} else {
var198 = var_206;
}
if (var198){
{
{ /* Inline toolcontext#ToolContext#tooldescription (self) on <self:ToolContext> */
var213 = self->attrs[COLOR_toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var213 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 281);
show_backtrace(1);
}
var211 = var213;
RET_LABEL212:(void)0;
}
}
{
file__Object__print(self, var211); /* Direct call file#Object#print on <self:ToolContext>*/
}
if (varonce214) {
var215 = varonce214;
} else {
var216 = "Use --help for help";
var217 = 19;
var218 = string__NativeString__to_s_with_length(var216, var217);
var215 = var218;
varonce214 = var215;
}
{
file__Object__print(self, var215); /* Direct call file#Object#print on <self:ToolContext>*/
}
var219 = 1;
{
{ /* Inline kernel#Object#exit (self,var219) on <self:ToolContext> */
exit(var219);
RET_LABEL220:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_verbose (self) on <self:ToolContext> */
var223 = self->attrs[COLOR_toolcontext__ToolContext___opt_verbose].val; /* _opt_verbose on <self:ToolContext> */
if (unlikely(var223 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_verbose");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 258);
show_backtrace(1);
}
var221 = var223;
RET_LABEL222:(void)0;
}
}
{
{ /* Inline opts#Option#value (var221) on <var221:OptionCount> */
var226 = var221->attrs[COLOR_opts__Option___value].val; /* _value on <var221:OptionCount> */
var224 = var226;
RET_LABEL225:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#verbose_level= (self,var224) on <self:ToolContext> */
var228 = ((struct instance_kernel__Int*)var224)->value; /* autounbox from nullable Object to Int */;
self->attrs[COLOR_toolcontext__ToolContext___verbose_level].l = var228; /* _verbose_level on <self:ToolContext> */
RET_LABEL227:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_quiet (self) on <self:ToolContext> */
var231 = self->attrs[COLOR_toolcontext__ToolContext___opt_quiet].val; /* _opt_quiet on <self:ToolContext> */
if (unlikely(var231 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_quiet");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 240);
show_backtrace(1);
}
var229 = var231;
RET_LABEL230:(void)0;
}
}
{
{ /* Inline opts#Option#value (var229) on <var229:OptionBool> */
var234 = var229->attrs[COLOR_opts__Option___value].val; /* _value on <var229:OptionBool> */
var232 = var234;
RET_LABEL233:(void)0;
}
}
var235 = ((struct instance_kernel__Bool*)var232)->value; /* autounbox from nullable Object to Bool */;
if (var235){
{
{ /* Inline toolcontext#ToolContext#opt_warn (self) on <self:ToolContext> */
var238 = self->attrs[COLOR_toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var238 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 234);
show_backtrace(1);
}
var236 = var238;
RET_LABEL237:(void)0;
}
}
var239 = 0;
{
{ /* Inline opts#Option#value= (var236,var239) on <var236:OptionCount> */
/* Covariant cast for argument 0 (value) <var239:Int> isa VALUE */
/* <var239:Int> isa VALUE */
type_struct244 = var236->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype242 = type_struct244->color;
idtype243 = type_struct244->id;
if(cltype242 >= (&type_kernel__Int)->table_size) {
var241 = 0;
} else {
var241 = (&type_kernel__Int)->type_table[cltype242] == idtype243;
}
if (unlikely(!var241)) {
var_class_name245 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name245);
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 40);
show_backtrace(1);
}
var246 = BOX_kernel__Int(var239); /* autobox from Int to nullable Object */
var236->attrs[COLOR_opts__Option___value].val = var246; /* _value on <var236:OptionCount> */
RET_LABEL240:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_log_dir (self) on <self:ToolContext> */
var249 = self->attrs[COLOR_toolcontext__ToolContext___opt_log_dir].val; /* _opt_log_dir on <self:ToolContext> */
if (unlikely(var249 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log_dir");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 246);
show_backtrace(1);
}
var247 = var249;
RET_LABEL248:(void)0;
}
}
{
{ /* Inline opts#Option#value (var247) on <var247:OptionString> */
var252 = var247->attrs[COLOR_opts__Option___value].val; /* _value on <var247:OptionString> */
var250 = var252;
RET_LABEL251:(void)0;
}
}
var253 = NULL;
if (var250 == NULL) {
var254 = 0; /* is null */
} else {
var254 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var250,var253) on <var250:nullable Object(nullable String)> */
var_other = var253;
{
var258 = ((short int (*)(val*, val*))(var250->class->vft[COLOR_kernel__Object___61d_61d]))(var250, var_other) /* == on <var250:nullable String(String)>*/;
var257 = var258;
}
var259 = !var257;
var255 = var259;
goto RET_LABEL256;
RET_LABEL256:(void)0;
}
var254 = var255;
}
if (var254){
{
{ /* Inline toolcontext#ToolContext#opt_log_dir (self) on <self:ToolContext> */
var262 = self->attrs[COLOR_toolcontext__ToolContext___opt_log_dir].val; /* _opt_log_dir on <self:ToolContext> */
if (unlikely(var262 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log_dir");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 246);
show_backtrace(1);
}
var260 = var262;
RET_LABEL261:(void)0;
}
}
{
{ /* Inline opts#Option#value (var260) on <var260:OptionString> */
var265 = var260->attrs[COLOR_opts__Option___value].val; /* _value on <var260:OptionString> */
var263 = var265;
RET_LABEL264:(void)0;
}
}
if (unlikely(var263 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 379);
show_backtrace(1);
}
{
{ /* Inline toolcontext#ToolContext#log_directory= (self,var263) on <self:ToolContext> */
self->attrs[COLOR_toolcontext__ToolContext___log_directory].val = var263; /* _log_directory on <self:ToolContext> */
RET_LABEL266:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_log (self) on <self:ToolContext> */
var269 = self->attrs[COLOR_toolcontext__ToolContext___opt_log].val; /* _opt_log on <self:ToolContext> */
if (unlikely(var269 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 243);
show_backtrace(1);
}
var267 = var269;
RET_LABEL268:(void)0;
}
}
{
{ /* Inline opts#Option#value (var267) on <var267:OptionBool> */
var272 = var267->attrs[COLOR_opts__Option___value].val; /* _value on <var267:OptionBool> */
var270 = var272;
RET_LABEL271:(void)0;
}
}
var273 = ((struct instance_kernel__Bool*)var270)->value; /* autounbox from nullable Object to Bool */;
if (var273){
{
{ /* Inline toolcontext#ToolContext#log_directory (self) on <self:ToolContext> */
var276 = self->attrs[COLOR_toolcontext__ToolContext___log_directory].val; /* _log_directory on <self:ToolContext> */
if (unlikely(var276 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _log_directory");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 101);
show_backtrace(1);
}
var274 = var276;
RET_LABEL275:(void)0;
}
}
{
file__String__mkdir(var274); /* Direct call file#String#mkdir on <var274:String>*/
}
} else {
}
{
var277 = toolcontext__ToolContext__compute_nit_dir(self);
}
{
{ /* Inline toolcontext#ToolContext#nit_dir= (self,var277) on <self:ToolContext> */
self->attrs[COLOR_toolcontext__ToolContext___nit_dir].val = var277; /* _nit_dir on <self:ToolContext> */
RET_LABEL278:(void)0;
}
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#process_options for (self: Object, Sequence[String]) */
void VIRTUAL_toolcontext__ToolContext__process_options(val* self, val* p0) {
toolcontext__ToolContext__process_options(self, p0); /* Direct call toolcontext#ToolContext#process_options on <self:Object(ToolContext)>*/
RET_LABEL:;
}
/* method toolcontext#ToolContext#version for (self: ToolContext): String */
val* toolcontext__ToolContext__version(val* self) {
val* var /* : String */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
val* var4 /* : nullable Object */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : FlatString */;
val* var12 /* : String */;
{
{ /* Inline toolcontext#ToolContext#opt_set_dummy_tool (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 255);
show_backtrace(1);
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
var7 = ((struct instance_kernel__Bool*)var4)->value; /* autounbox from nullable Object to Bool */;
if (var7){
if (varonce) {
var8 = varonce;
} else {
var9 = "DUMMY_VERSION";
var10 = 13;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
var = var8;
goto RET_LABEL;
} else {
}
{
var12 = version__Object__nit_version(self);
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#version for (self: Object): String */
val* VIRTUAL_toolcontext__ToolContext__version(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = toolcontext__ToolContext__version(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#toolname for (self: ToolContext): String */
val* toolcontext__ToolContext__toolname(val* self) {
val* var /* : String */;
val* var1 /* : OptionBool */;
val* var3 /* : OptionBool */;
val* var4 /* : nullable Object */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : FlatString */;
val* var12 /* : Sys */;
val* var14 /* : Sys */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
val* var21 /* : String */;
{
{ /* Inline toolcontext#ToolContext#opt_set_dummy_tool (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 255);
show_backtrace(1);
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
var7 = ((struct instance_kernel__Bool*)var4)->value; /* autounbox from nullable Object to Bool */;
if (var7){
if (varonce) {
var8 = varonce;
} else {
var9 = "DUMMY_TOOL";
var10 = 10;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
var = var8;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var14 = glob_sys;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
{
var15 = string__Sys__program_name(var12);
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = "";
var19 = 0;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
{
var21 = file__String__basename(var15, var17);
}
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#toolname for (self: Object): String */
val* VIRTUAL_toolcontext__ToolContext__toolname(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = toolcontext__ToolContext__toolname(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#nit_dir for (self: ToolContext): nullable String */
val* toolcontext__ToolContext__nit_dir(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___nit_dir].val; /* _nit_dir on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#nit_dir for (self: Object): nullable String */
val* VIRTUAL_toolcontext__ToolContext__nit_dir(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
{ /* Inline toolcontext#ToolContext#nit_dir (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___nit_dir].val; /* _nit_dir on <self:Object(ToolContext)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#nit_dir= for (self: ToolContext, nullable String) */
void toolcontext__ToolContext__nit_dir_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__ToolContext___nit_dir].val = p0; /* _nit_dir on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#nit_dir= for (self: Object, nullable String) */
void VIRTUAL_toolcontext__ToolContext__nit_dir_61d(val* self, val* p0) {
{ /* Inline toolcontext#ToolContext#nit_dir= (self,p0) on <self:Object(ToolContext)> */
self->attrs[COLOR_toolcontext__ToolContext___nit_dir].val = p0; /* _nit_dir on <self:Object(ToolContext)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#compute_nit_dir for (self: ToolContext): nullable String */
val* toolcontext__ToolContext__compute_nit_dir(val* self) {
val* var /* : nullable String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : String */;
val* var_res /* var res: String */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : Sys */;
val* var10 /* : Sys */;
val* var11 /* : String */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[Object] */;
val* var32 /* : String */;
short int var33 /* : Bool */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
val* var_exe /* var exe: String */;
short int var40 /* : Bool */;
val* var41 /* : String */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : FlatString */;
val* var48 /* : String */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var_51 /* var : Bool */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : FlatString */;
val* var57 /* : Array[Object] */;
long var58 /* : Int */;
val* var59 /* : NativeArray[Object] */;
val* var60 /* : String */;
short int var61 /* : Bool */;
val* var62 /* : String */;
val* var63 /* : null */;
if (varonce) {
var1 = varonce;
} else {
var2 = "NIT_DIR";
var3 = 7;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = environ__String__environ(var1);
}
var_res = var5;
{
var6 = string__Text__is_empty(var_res);
}
var7 = !var6;
if (var7){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var10 = glob_sys;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
var11 = string__Sys__program_name(var8);
}
{
var12 = file__String__dirname(var11);
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = "/..";
var16 = 3;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 2;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var12;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var14;
{
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
var_res = var21;
{
var23 = file__String__file_exists(var_res);
}
var_ = var23;
if (var23){
if (varonce24) {
var25 = varonce24;
} else {
var26 = "/src/nit.nit";
var27 = 12;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 2;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var31)->values[1] = (val*) var25;
{
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
}
}
{
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
}
{
var33 = file__String__file_exists(var32);
}
var22 = var33;
} else {
var22 = var_;
}
if (var22){
{
var34 = file__String__simplify_path(var_res);
}
var = var34;
goto RET_LABEL;
} else {
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = "/proc/self/exe";
var38 = 14;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
var_exe = var36;
{
var40 = file__String__file_exists(var_exe);
}
if (var40){
{
var41 = file__String__realpath(var_exe);
}
var_res = var41;
{
var42 = file__String__dirname(var_res);
}
if (varonce43) {
var44 = varonce43;
} else {
var45 = "..";
var46 = 2;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
{
var48 = file__String__join_path(var42, var44);
}
var_res = var48;
{
var50 = file__String__file_exists(var_res);
}
var_51 = var50;
if (var50){
if (varonce52) {
var53 = varonce52;
} else {
var54 = "/src/nit.nit";
var55 = 12;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var57 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var57 = array_instance Array[Object] */
var58 = 2;
var59 = NEW_array__NativeArray(var58, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var59)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var59)->values[1] = (val*) var53;
{
((void (*)(val*, val*, long))(var57->class->vft[COLOR_array__Array__with_native]))(var57, var59, var58) /* with_native on <var57:Array[Object]>*/;
}
}
{
var60 = ((val* (*)(val*))(var57->class->vft[COLOR_string__Object__to_s]))(var57) /* to_s on <var57:Array[Object]>*/;
}
{
var61 = file__String__file_exists(var60);
}
var49 = var61;
} else {
var49 = var_51;
}
if (var49){
{
var62 = file__String__simplify_path(var_res);
}
var = var62;
goto RET_LABEL;
} else {
}
} else {
}
var63 = NULL;
var = var63;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#compute_nit_dir for (self: Object): nullable String */
val* VIRTUAL_toolcontext__ToolContext__compute_nit_dir(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = toolcontext__ToolContext__compute_nit_dir(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#BashCompletion#toolcontext for (self: BashCompletion): ToolContext */
val* toolcontext__BashCompletion__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_toolcontext__BashCompletion___toolcontext].val; /* _toolcontext on <self:BashCompletion> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 449);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#BashCompletion#toolcontext for (self: Object): ToolContext */
val* VIRTUAL_toolcontext__BashCompletion__toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
val* var3 /* : ToolContext */;
{ /* Inline toolcontext#BashCompletion#toolcontext (self) on <self:Object(BashCompletion)> */
var3 = self->attrs[COLOR_toolcontext__BashCompletion___toolcontext].val; /* _toolcontext on <self:Object(BashCompletion)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 449);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#BashCompletion#toolcontext= for (self: BashCompletion, ToolContext) */
void toolcontext__BashCompletion__toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_toolcontext__BashCompletion___toolcontext].val = p0; /* _toolcontext on <self:BashCompletion> */
RET_LABEL:;
}
/* method toolcontext#BashCompletion#toolcontext= for (self: Object, ToolContext) */
void VIRTUAL_toolcontext__BashCompletion__toolcontext_61d(val* self, val* p0) {
{ /* Inline toolcontext#BashCompletion#toolcontext= (self,p0) on <self:Object(BashCompletion)> */
self->attrs[COLOR_toolcontext__BashCompletion___toolcontext].val = p0; /* _toolcontext on <self:Object(BashCompletion)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method toolcontext#BashCompletion#init for (self: BashCompletion, ToolContext) */
void toolcontext__BashCompletion__init(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
{
((void (*)(val*))(self->class->vft[COLOR_kernel__Object__init]))(self) /* init on <self:BashCompletion>*/;
}
var_toolcontext = p0;
{
{ /* Inline toolcontext#BashCompletion#toolcontext= (self,var_toolcontext) on <self:BashCompletion> */
self->attrs[COLOR_toolcontext__BashCompletion___toolcontext].val = var_toolcontext; /* _toolcontext on <self:BashCompletion> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method toolcontext#BashCompletion#init for (self: Object, ToolContext) */
void VIRTUAL_toolcontext__BashCompletion__init(val* self, val* p0) {
toolcontext__BashCompletion__init(self, p0); /* Direct call toolcontext#BashCompletion#init on <self:Object(BashCompletion)>*/
RET_LABEL:;
}
/* method toolcontext#BashCompletion#extract_options_names for (self: BashCompletion): Array[String] */
val* toolcontext__BashCompletion__extract_options_names(val* self) {
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
val* var11 /* : ArrayIterator[nullable Object] */;
val* var_12 /* var : ArrayIterator[Option] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_option /* var option: Option */;
val* var15 /* : Array[String] */;
val* var17 /* : Array[String] */;
val* var_18 /* var : Array[String] */;
val* var19 /* : ArrayIterator[nullable Object] */;
val* var_20 /* var : ArrayIterator[String] */;
short int var21 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_name /* var name: String */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : FlatString */;
short int var27 /* : Bool */;
var1 = NEW_array__Array(&type_array__Arraystring__String);
{
((void (*)(val*))(var1->class->vft[COLOR_kernel__Object__init]))(var1) /* init on <var1:Array[String]>*/;
}
var_names = var1;
{
{ /* Inline toolcontext#BashCompletion#toolcontext (self) on <self:BashCompletion> */
var4 = self->attrs[COLOR_toolcontext__BashCompletion___toolcontext].val; /* _toolcontext on <self:BashCompletion> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 449);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#option_context (var2) on <var2:ToolContext> */
var7 = var2->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <var2:ToolContext> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 231);
show_backtrace(1);
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
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 243);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_ = var8;
{
var11 = array__AbstractArrayRead__iterator(var_);
}
var_12 = var11;
for(;;) {
{
var13 = array__ArrayIterator__is_ok(var_12);
}
if (var13){
{
var14 = array__ArrayIterator__item(var_12);
}
var_option = var14;
{
{ /* Inline opts#Option#names (var_option) on <var_option:Option> */
var17 = var_option->attrs[COLOR_opts__Option___names].val; /* _names on <var_option:Option> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "../lib/opts.nit", 19);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_18 = var15;
{
var19 = array__AbstractArrayRead__iterator(var_18);
}
var_20 = var19;
for(;;) {
{
var21 = array__ArrayIterator__is_ok(var_20);
}
if (var21){
{
var22 = array__ArrayIterator__item(var_20);
}
var_name = var22;
if (varonce) {
var23 = varonce;
} else {
var24 = "--";
var25 = 2;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
{
var27 = string__Text__has_prefix(var_name, var23);
}
if (var27){
{
array__Array__add(var_names, var_name); /* Direct call array#Array#add on <var_names:Array[String]>*/
}
} else {
}
{
array__ArrayIterator__next(var_20); /* Direct call array#ArrayIterator#next on <var_20:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_20) on <var_20:ArrayIterator[String]> */
RET_LABEL28:(void)0;
}
}
{
array__ArrayIterator__next(var_12); /* Direct call array#ArrayIterator#next on <var_12:ArrayIterator[Option]>*/
}
} else {
goto BREAK_label29;
}
}
BREAK_label29: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_12) on <var_12:ArrayIterator[Option]> */
RET_LABEL30:(void)0;
}
}
var = var_names;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#BashCompletion#extract_options_names for (self: Object): Array[String] */
val* VIRTUAL_toolcontext__BashCompletion__extract_options_names(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = toolcontext__BashCompletion__extract_options_names(self);
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#BashCompletion#rendering for (self: BashCompletion) */
void toolcontext__BashCompletion__rendering(val* self) {
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : String */;
val* var_name /* var name: String */;
val* var4 /* : Array[String] */;
val* var_option_names /* var option_names: Array[String] */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : ToolContext */;
val* var16 /* : ToolContext */;
val* var17 /* : String */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
static val* varonce22;
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
static val* varonce36;
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
short int var61 /* : Bool */;
short int var62 /* : Bool */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : FlatString */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : FlatString */;
val* var73 /* : String */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
val* var79 /* : Array[Object] */;
long var80 /* : Int */;
val* var81 /* : NativeArray[Object] */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : NativeString */;
long var86 /* : Int */;
val* var87 /* : FlatString */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : FlatString */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : FlatString */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : NativeString */;
long var101 /* : Int */;
val* var102 /* : FlatString */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : FlatString */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : NativeString */;
long var111 /* : Int */;
val* var112 /* : FlatString */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : NativeString */;
long var116 /* : Int */;
val* var117 /* : FlatString */;
val* var118 /* : Array[Object] */;
long var119 /* : Int */;
val* var120 /* : NativeArray[Object] */;
val* var121 /* : String */;
{
{ /* Inline toolcontext#BashCompletion#toolcontext (self) on <self:BashCompletion> */
var2 = self->attrs[COLOR_toolcontext__BashCompletion___toolcontext].val; /* _toolcontext on <self:BashCompletion> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 449);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = toolcontext__ToolContext__toolname(var);
}
var_name = var3;
{
var4 = toolcontext__BashCompletion__extract_options_names(self);
}
var_option_names = var4;
if (varonce) {
var5 = varonce;
} else {
var6 = "# generated bash completion file for ";
var7 = 37;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = " ";
var12 = 1;
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
{
{ /* Inline toolcontext#BashCompletion#toolcontext (self) on <self:BashCompletion> */
var16 = self->attrs[COLOR_toolcontext__BashCompletion___toolcontext].val; /* _toolcontext on <self:BashCompletion> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "toolcontext.nit", 449);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = toolcontext__ToolContext__version(var14);
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 4;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var10;
((struct instance_array__NativeArray*)var20)->values[3] = (val*) var17;
{
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
{
template__Template__addn(self, var21); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "_";
var25 = 1;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = "()";
var30 = 2;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 3;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var23;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var28;
{
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
}
{
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
}
{
template__Template__addn(self, var35); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = "{";
var39 = 1;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
{
template__Template__addn(self, var37); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = "\11local cur prev opts";
var44 = 20;
var45 = string__NativeString__to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
{
template__Template__addn(self, var42); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "\11COMPREPLY=()";
var49 = 13;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
{
template__Template__addn(self, var47); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = "\11cur=\"${COMP_WORDS[COMP_CWORD]}\"";
var54 = 32;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
{
template__Template__addn(self, var52); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = "\11prev=\"${COMP_WORDS[COMP_CWORD-1]}\"";
var59 = 35;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
{
template__Template__addn(self, var57); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
{
var61 = array__AbstractArrayRead__is_empty(var_option_names);
}
var62 = !var61;
if (var62){
if (varonce63) {
var64 = varonce63;
} else {
var65 = "\11opts=\"";
var66 = 7;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = " ";
var71 = 1;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
{
var73 = string__Collection__join(var_option_names, var69);
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = "\"";
var77 = 1;
var78 = string__NativeString__to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
var79 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var79 = array_instance Array[Object] */
var80 = 3;
var81 = NEW_array__NativeArray(var80, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var81)->values[0] = (val*) var64;
((struct instance_array__NativeArray*)var81)->values[1] = (val*) var73;
((struct instance_array__NativeArray*)var81)->values[2] = (val*) var75;
{
((void (*)(val*, val*, long))(var79->class->vft[COLOR_array__Array__with_native]))(var79, var81, var80) /* with_native on <var79:Array[Object]>*/;
}
}
{
var82 = ((val* (*)(val*))(var79->class->vft[COLOR_string__Object__to_s]))(var79) /* to_s on <var79:Array[Object]>*/;
}
{
template__Template__addn(self, var82); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce83) {
var84 = varonce83;
} else {
var85 = "\11if [[ ${cur} == -* ]] ; then";
var86 = 29;
var87 = string__NativeString__to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
{
template__Template__addn(self, var84); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce88) {
var89 = varonce88;
} else {
var90 = "\11\11COMPREPLY=( $(compgen -W \"${opts}\" -- ${cur}) )";
var91 = 49;
var92 = string__NativeString__to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
{
template__Template__addn(self, var89); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce93) {
var94 = varonce93;
} else {
var95 = "\11\11return 0";
var96 = 10;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
{
template__Template__addn(self, var94); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce98) {
var99 = varonce98;
} else {
var100 = "\11fi";
var101 = 3;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
{
template__Template__addn(self, var99); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
} else {
}
if (varonce103) {
var104 = varonce103;
} else {
var105 = "} &&";
var106 = 4;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
{
template__Template__addn(self, var104); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce108) {
var109 = varonce108;
} else {
var110 = "complete -o default -F _";
var111 = 24;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = " ";
var116 = 1;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
var118 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var118 = array_instance Array[Object] */
var119 = 4;
var120 = NEW_array__NativeArray(var119, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var120)->values[0] = (val*) var109;
((struct instance_array__NativeArray*)var120)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var120)->values[2] = (val*) var114;
((struct instance_array__NativeArray*)var120)->values[3] = (val*) var_name;
{
((void (*)(val*, val*, long))(var118->class->vft[COLOR_array__Array__with_native]))(var118, var120, var119) /* with_native on <var118:Array[Object]>*/;
}
}
{
var121 = ((val* (*)(val*))(var118->class->vft[COLOR_string__Object__to_s]))(var118) /* to_s on <var118:Array[Object]>*/;
}
{
template__Template__addn(self, var121); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
RET_LABEL:;
}
/* method toolcontext#BashCompletion#rendering for (self: Object) */
void VIRTUAL_toolcontext__BashCompletion__rendering(val* self) {
toolcontext__BashCompletion__rendering(self); /* Direct call toolcontext#BashCompletion#rendering on <self:Object(BashCompletion)>*/
RET_LABEL:;
}
