#include "nit__toolcontext.sep.0.h"
/* method toolcontext#Message#location for (self: Message): nullable Location */
val* nit___nit__Message___location(val* self) {
val* var /* : nullable Location */;
val* var1 /* : nullable Location */;
var1 = self->attrs[COLOR_nit__toolcontext__Message___location].val; /* _location on <self:Message> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#location= for (self: Message, nullable Location) */
void nit___nit__Message___location_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__Message___location].val = p0; /* _location on <self:Message> */
RET_LABEL:;
}
/* method toolcontext#Message#tag for (self: Message): nullable String */
val* nit___nit__Message___tag(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nit__toolcontext__Message___tag].val; /* _tag on <self:Message> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#tag= for (self: Message, nullable String) */
void nit___nit__Message___tag_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__Message___tag].val = p0; /* _tag on <self:Message> */
RET_LABEL:;
}
/* method toolcontext#Message#text for (self: Message): String */
val* nit___nit__Message___text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 42);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#text= for (self: Message, String) */
void nit___nit__Message___text_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__Message___text].val = p0; /* _text on <self:Message> */
RET_LABEL:;
}
/* method toolcontext#Message#< for (self: Message, Message): Bool */
short int nit___nit__Message___standard__kernel__Comparable___60d(val* self, val* p0) {
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
type_struct = self->type->resolution_table->types[COLOR_standard__kernel__Comparable__OTHER];
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 49);
show_backtrace(1);
}
var_other = p0;
{
{ /* Inline toolcontext#Message#location (self) on <self:Message> */
var4 = self->attrs[COLOR_nit__toolcontext__Message___location].val; /* _location on <self:Message> */
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
var7 = nit___nit__Location___standard__kernel__Object___61d_61d(var2, var5);
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
var11 = var_other->attrs[COLOR_nit__toolcontext__Message___location].val; /* _location on <var_other:Message> */
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
var14 = nit___nit__Location___standard__kernel__Object___61d_61d(var9, var12);
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
var18 = self->attrs[COLOR_nit__toolcontext__Message___location].val; /* _location on <self:Message> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 54);
show_backtrace(1);
}
{
{ /* Inline toolcontext#Message#location (var_other) on <var_other:Message> */
var21 = var_other->attrs[COLOR_nit__toolcontext__Message___location].val; /* _location on <var_other:Message> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 54);
show_backtrace(1);
}
{
var22 = nit___nit__Location___standard__kernel__Comparable___60d(var16, var19);
}
var = var22;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#Message#to_s for (self: Message): String */
val* nit___nit__Message___standard__string__Object__to_s(val* self) {
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
var3 = self->attrs[COLOR_nit__toolcontext__Message___location].val; /* _location on <self:Message> */
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
var6 = nit___nit__Location___standard__kernel__Object___61d_61d(var_l, var4);
var5 = var6;
}
if (var5){
{
{ /* Inline toolcontext#Message#text (self) on <self:Message> */
var9 = self->attrs[COLOR_nit__toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 42);
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
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
{
{ /* Inline toolcontext#Message#text (self) on <self:Message> */
var16 = self->attrs[COLOR_nit__toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 42);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
var17 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var17 = array_instance Array[Object] */
var18 = 3;
var19 = NEW_standard__NativeArray(var18, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var19)->values[0] = (val*) var_l;
((struct instance_standard__NativeArray*)var19)->values[1] = (val*) var10;
((struct instance_standard__NativeArray*)var19)->values[2] = (val*) var14;
{
((void (*)(val* self, val* p0, long p1))(var17->class->vft[COLOR_standard__array__Array__with_native]))(var17, var19, var18) /* with_native on <var17:Array[Object]>*/;
}
}
{
var20 = ((val* (*)(val* self))(var17->class->vft[COLOR_standard__string__Object__to_s]))(var17) /* to_s on <var17:Array[Object]>*/;
}
var = var20;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method toolcontext#Message#to_color_string for (self: Message): String */
val* nit___nit__Message___to_color_string(val* self) {
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
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : FlatString */;
val* var43 /* : Array[Object] */;
long var44 /* : Int */;
val* var45 /* : NativeArray[Object] */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
val* var52 /* : nullable Location */;
val* var54 /* : nullable Location */;
val* var_l /* var l: nullable Location */;
val* var55 /* : null */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : String */;
val* var60 /* : String */;
val* var61 /* : Array[Object] */;
long var62 /* : Int */;
val* var63 /* : NativeArray[Object] */;
val* var64 /* : String */;
val* var65 /* : nullable SourceFile */;
val* var67 /* : nullable SourceFile */;
val* var68 /* : null */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
val* var_other72 /* var other: nullable Object */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
val* var81 /* : String */;
val* var83 /* : String */;
val* var84 /* : Array[Object] */;
long var85 /* : Int */;
val* var86 /* : NativeArray[Object] */;
val* var87 /* : String */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : NativeString */;
long var91 /* : Int */;
val* var92 /* : FlatString */;
val* var93 /* : String */;
val* var95 /* : String */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : FlatString */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : FlatString */;
val* var106 /* : String */;
val* var107 /* : Array[Object] */;
long var108 /* : Int */;
val* var109 /* : NativeArray[Object] */;
val* var110 /* : String */;
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
var8 = standard___standard__NativeString___to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
var9 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var9 = array_instance Array[Object] */
var10 = 2;
var11 = NEW_standard__NativeArray(var10, &type_standard__NativeArray__standard__Object);
var12 = BOX_standard__Char(var_esc); /* autobox from Char to Object */
((struct instance_standard__NativeArray*)var11)->values[0] = (val*) var12;
((struct instance_standard__NativeArray*)var11)->values[1] = (val*) var5;
{
((void (*)(val* self, val* p0, long p1))(var9->class->vft[COLOR_standard__array__Array__with_native]))(var9, var11, var10) /* with_native on <var9:Array[Object]>*/;
}
}
{
var13 = ((val* (*)(val* self))(var9->class->vft[COLOR_standard__string__Object__to_s]))(var9) /* to_s on <var9:Array[Object]>*/;
}
var_yellow = var13;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "[0m";
var17 = 3;
var18 = standard___standard__NativeString___to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
var19 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 2;
var21 = NEW_standard__NativeArray(var20, &type_standard__NativeArray__standard__Object);
var22 = BOX_standard__Char(var_esc); /* autobox from Char to Object */
((struct instance_standard__NativeArray*)var21)->values[0] = (val*) var22;
((struct instance_standard__NativeArray*)var21)->values[1] = (val*) var15;
{
((void (*)(val* self, val* p0, long p1))(var19->class->vft[COLOR_standard__array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
}
{
var23 = ((val* (*)(val* self))(var19->class->vft[COLOR_standard__string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
}
var_def = var23;
{
{ /* Inline toolcontext#Message#tag (self) on <self:Message> */
var26 = self->attrs[COLOR_nit__toolcontext__Message___tag].val; /* _tag on <self:Message> */
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
var31 = ((short int (*)(val* self, val* p0))(var_tag->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_tag, var_other) /* == on <var_tag:nullable String(String)>*/;
}
var32 = !var31;
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
if (varonce33) {
var34 = varonce33;
} else {
var35 = " (";
var36 = 2;
var37 = standard___standard__NativeString___to_s_with_length(var35, var36);
var34 = var37;
varonce33 = var34;
}
if (varonce38) {
var39 = varonce38;
} else {
var40 = ")";
var41 = 1;
var42 = standard___standard__NativeString___to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
var43 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var43 = array_instance Array[Object] */
var44 = 3;
var45 = NEW_standard__NativeArray(var44, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var45)->values[0] = (val*) var34;
((struct instance_standard__NativeArray*)var45)->values[1] = (val*) var_tag;
((struct instance_standard__NativeArray*)var45)->values[2] = (val*) var39;
{
((void (*)(val* self, val* p0, long p1))(var43->class->vft[COLOR_standard__array__Array__with_native]))(var43, var45, var44) /* with_native on <var43:Array[Object]>*/;
}
}
{
var46 = ((val* (*)(val* self))(var43->class->vft[COLOR_standard__string__Object__to_s]))(var43) /* to_s on <var43:Array[Object]>*/;
}
var_tag = var46;
} else {
if (varonce47) {
var48 = varonce47;
} else {
var49 = "";
var50 = 0;
var51 = standard___standard__NativeString___to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
var_tag = var48;
}
{
{ /* Inline toolcontext#Message#location (self) on <self:Message> */
var54 = self->attrs[COLOR_nit__toolcontext__Message___location].val; /* _location on <self:Message> */
var52 = var54;
RET_LABEL53:(void)0;
}
}
var_l = var52;
var55 = NULL;
if (var_l == NULL) {
var56 = 1; /* is null */
} else {
var56 = 0; /* arg is null but recv is not */
}
if (0) {
var57 = nit___nit__Location___standard__kernel__Object___61d_61d(var_l, var55);
var56 = var57;
}
if (var56){
{
{ /* Inline toolcontext#Message#text (self) on <self:Message> */
var60 = self->attrs[COLOR_nit__toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 42);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
var61 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var61 = array_instance Array[Object] */
var62 = 2;
var63 = NEW_standard__NativeArray(var62, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var63)->values[0] = (val*) var58;
((struct instance_standard__NativeArray*)var63)->values[1] = (val*) var_tag;
{
((void (*)(val* self, val* p0, long p1))(var61->class->vft[COLOR_standard__array__Array__with_native]))(var61, var63, var62) /* with_native on <var61:Array[Object]>*/;
}
}
{
var64 = ((val* (*)(val* self))(var61->class->vft[COLOR_standard__string__Object__to_s]))(var61) /* to_s on <var61:Array[Object]>*/;
}
var = var64;
goto RET_LABEL;
} else {
{
{ /* Inline location#Location#file (var_l) on <var_l:nullable Location(Location)> */
var67 = var_l->attrs[COLOR_nit__location__Location___file].val; /* _file on <var_l:nullable Location(Location)> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
var68 = NULL;
if (var65 == NULL) {
var69 = 1; /* is null */
} else {
var69 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var65,var68) on <var65:nullable SourceFile> */
var_other72 = var68;
{
{ /* Inline kernel#Object#is_same_instance (var65,var_other72) on <var65:nullable SourceFile(SourceFile)> */
var75 = var65 == var_other72;
var73 = var75;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var70 = var73;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
var69 = var70;
}
if (var69){
if (varonce76) {
var77 = varonce76;
} else {
var78 = ": ";
var79 = 2;
var80 = standard___standard__NativeString___to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
{
{ /* Inline toolcontext#Message#text (self) on <self:Message> */
var83 = self->attrs[COLOR_nit__toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 42);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
var84 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var84 = array_instance Array[Object] */
var85 = 6;
var86 = NEW_standard__NativeArray(var85, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var86)->values[0] = (val*) var_yellow;
((struct instance_standard__NativeArray*)var86)->values[1] = (val*) var_l;
((struct instance_standard__NativeArray*)var86)->values[2] = (val*) var_def;
((struct instance_standard__NativeArray*)var86)->values[3] = (val*) var77;
((struct instance_standard__NativeArray*)var86)->values[4] = (val*) var81;
((struct instance_standard__NativeArray*)var86)->values[5] = (val*) var_tag;
{
((void (*)(val* self, val* p0, long p1))(var84->class->vft[COLOR_standard__array__Array__with_native]))(var84, var86, var85) /* with_native on <var84:Array[Object]>*/;
}
}
{
var87 = ((val* (*)(val* self))(var84->class->vft[COLOR_standard__string__Object__to_s]))(var84) /* to_s on <var84:Array[Object]>*/;
}
var = var87;
goto RET_LABEL;
} else {
if (varonce88) {
var89 = varonce88;
} else {
var90 = ": ";
var91 = 2;
var92 = standard___standard__NativeString___to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
{
{ /* Inline toolcontext#Message#text (self) on <self:Message> */
var95 = self->attrs[COLOR_nit__toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 42);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
if (varonce96) {
var97 = varonce96;
} else {
var98 = "\n";
var99 = 1;
var100 = standard___standard__NativeString___to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = "1;31";
var104 = 4;
var105 = standard___standard__NativeString___to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
{
var106 = nit___nit__Location___colored_line(var_l, var102);
}
var107 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var107 = array_instance Array[Object] */
var108 = 8;
var109 = NEW_standard__NativeArray(var108, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var109)->values[0] = (val*) var_yellow;
((struct instance_standard__NativeArray*)var109)->values[1] = (val*) var_l;
((struct instance_standard__NativeArray*)var109)->values[2] = (val*) var_def;
((struct instance_standard__NativeArray*)var109)->values[3] = (val*) var89;
((struct instance_standard__NativeArray*)var109)->values[4] = (val*) var93;
((struct instance_standard__NativeArray*)var109)->values[5] = (val*) var_tag;
((struct instance_standard__NativeArray*)var109)->values[6] = (val*) var97;
((struct instance_standard__NativeArray*)var109)->values[7] = (val*) var106;
{
((void (*)(val* self, val* p0, long p1))(var107->class->vft[COLOR_standard__array__Array__with_native]))(var107, var109, var108) /* with_native on <var107:Array[Object]>*/;
}
}
{
var110 = ((val* (*)(val* self))(var107->class->vft[COLOR_standard__string__Object__to_s]))(var107) /* to_s on <var107:Array[Object]>*/;
}
var = var110;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method toolcontext#Message#init for (self: Message) */
void nit___nit__Message___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__Message___standard__kernel__Object__init]))(self) /* init on <self:Message>*/;
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#error_count for (self: ToolContext): Int */
long nit___nit__ToolContext___error_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#error_count= for (self: ToolContext, Int) */
void nit___nit__ToolContext___error_count_61d(val* self, long p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l = p0; /* _error_count on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#warning_count for (self: ToolContext): Int */
long nit___nit__ToolContext___warning_count(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#warning_count= for (self: ToolContext, Int) */
void nit___nit__ToolContext___warning_count_61d(val* self, long p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___warning_count].l = p0; /* _warning_count on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#log_directory for (self: ToolContext): String */
val* nit___nit__ToolContext___log_directory(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___log_directory].val; /* _log_directory on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _log_directory");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 102);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#log_directory= for (self: ToolContext, String) */
void nit___nit__ToolContext___log_directory_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___log_directory].val = p0; /* _log_directory on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#messages for (self: ToolContext): Array[Message] */
val* nit___nit__ToolContext___messages(val* self) {
val* var /* : Array[Message] */;
val* var1 /* : Array[Message] */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 105);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#message_sorter for (self: ToolContext): Comparator */
val* nit___nit__ToolContext___message_sorter(val* self) {
val* var /* : Comparator */;
val* var1 /* : Comparator */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___message_sorter].val; /* _message_sorter on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message_sorter");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 107);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#keep_going for (self: ToolContext): Bool */
short int nit___nit__ToolContext___keep_going(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___keep_going].s; /* _keep_going on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#warning_blacklist for (self: ToolContext): MultiHashMap[SourceFile, String] */
val* nit___nit__ToolContext___warning_blacklist(val* self) {
val* var /* : MultiHashMap[SourceFile, String] */;
val* var1 /* : MultiHashMap[SourceFile, String] */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___warning_blacklist].val; /* _warning_blacklist on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _warning_blacklist");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 115);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#is_warning_blacklisted for (self: ToolContext, nullable Location, String): Bool */
short int nit___nit__ToolContext___is_warning_blacklisted(val* self, val* p0, val* p1) {
short int var /* : Bool */;
val* var_l /* var l: nullable Location */;
val* var_tag /* var tag: String */;
val* var1 /* : null */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable SourceFile */;
val* var7 /* : nullable SourceFile */;
val* var_f /* var f: nullable SourceFile */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : MultiHashMap[SourceFile, String] */;
val* var18 /* : MultiHashMap[SourceFile, String] */;
val* var19 /* : nullable Object */;
val* var_tags /* var tags: nullable Array[String] */;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
short int var29 /* : Bool */;
short int var_ /* var : Bool */;
short int var30 /* : Bool */;
var_l = p0;
var_tag = p1;
var1 = NULL;
if (var_l == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = nit___nit__Location___standard__kernel__Object___61d_61d(var_l, var1);
var2 = var3;
}
if (var2){
var4 = 0;
var = var4;
goto RET_LABEL;
} else {
}
{
{ /* Inline location#Location#file (var_l) on <var_l:nullable Location(Location)> */
var7 = var_l->attrs[COLOR_nit__location__Location___file].val; /* _file on <var_l:nullable Location(Location)> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_f = var5;
var8 = NULL;
if (var_f == NULL) {
var9 = 1; /* is null */
} else {
var9 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_f,var8) on <var_f:nullable SourceFile> */
var_other = var8;
{
{ /* Inline kernel#Object#is_same_instance (var_f,var_other) on <var_f:nullable SourceFile(SourceFile)> */
var14 = var_f == var_other;
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
var15 = 0;
var = var15;
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext#ToolContext#warning_blacklist (self) on <self:ToolContext> */
var18 = self->attrs[COLOR_nit__toolcontext__ToolContext___warning_blacklist].val; /* _warning_blacklist on <self:ToolContext> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _warning_blacklist");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 115);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = standard___standard__HashMap___standard__abstract_collection__MapRead__get_or_null(var16, var_f);
}
var_tags = var19;
var20 = NULL;
if (var_tags == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
var22 = standard___standard__Array___standard__kernel__Object___61d_61d(var_tags, var20);
var21 = var22;
}
if (var21){
var23 = 0;
var = var23;
goto RET_LABEL;
} else {
}
if (varonce) {
var25 = varonce;
} else {
var26 = "all";
var27 = 3;
var28 = standard___standard__NativeString___to_s_with_length(var26, var27);
var25 = var28;
varonce = var25;
}
{
var29 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var_tags, var25);
}
var_ = var29;
if (var29){
var24 = var_;
} else {
{
var30 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var_tags, var_tag);
}
var24 = var30;
}
var = var24;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#check_errors for (self: ToolContext): Bool */
short int nit___nit__ToolContext___check_errors(val* self) {
short int var /* : Bool */;
val* var1 /* : Array[Message] */;
val* var3 /* : Array[Message] */;
long var4 /* : Int */;
long var6 /* : Int */;
long var7 /* : Int */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
val* var12 /* : Comparator */;
val* var14 /* : Comparator */;
val* var15 /* : Array[Message] */;
val* var17 /* : Array[Message] */;
val* var18 /* : Array[Message] */;
val* var20 /* : Array[Message] */;
val* var_ /* var : Array[Message] */;
val* var21 /* : ArrayIterator[nullable Object] */;
val* var_22 /* var : ArrayIterator[Message] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_m /* var m: Message */;
val* var25 /* : OptionBool */;
val* var27 /* : OptionBool */;
val* var28 /* : nullable Object */;
val* var30 /* : nullable Object */;
short int var31 /* : Bool */;
val* var32 /* : Sys */;
val* var34 /* : Sys */;
val* var35 /* : OStream */;
val* var37 /* : OStream */;
static val* varonce;
val* var38 /* : String */;
char* var39 /* : NativeString */;
long var40 /* : Int */;
val* var41 /* : FlatString */;
val* var42 /* : Array[Object] */;
long var43 /* : Int */;
val* var44 /* : NativeArray[Object] */;
val* var45 /* : String */;
val* var46 /* : Sys */;
val* var48 /* : Sys */;
val* var49 /* : OStream */;
val* var51 /* : OStream */;
val* var52 /* : String */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
val* var58 /* : Array[Object] */;
long var59 /* : Int */;
val* var60 /* : NativeArray[Object] */;
val* var61 /* : String */;
val* var63 /* : Array[Message] */;
val* var65 /* : Array[Message] */;
long var66 /* : Int */;
long var68 /* : Int */;
long var69 /* : Int */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
long var81 /* : Int */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nit__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 105);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var1) on <var1:Array[Message]> */
var6 = var1->attrs[COLOR_standard__array__AbstractArrayRead___length].l; /* _length on <var1:Array[Message]> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = 0;
{
{ /* Inline kernel#Int#> (var4,var7) on <var4:Int> */
/* Covariant cast for argument 0 (i) <var7:Int> isa OTHER */
/* <var7:Int> isa OTHER */
var10 = 1; /* easy <var7:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var11 = var4 > var7;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
{
{ /* Inline toolcontext#ToolContext#message_sorter (self) on <self:ToolContext> */
var14 = self->attrs[COLOR_nit__toolcontext__ToolContext___message_sorter].val; /* _message_sorter on <self:ToolContext> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message_sorter");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 107);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var17 = self->attrs[COLOR_nit__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 105);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
standard___standard__Comparator___sort(var12, var15); /* Direct call sorter#Comparator#sort on <var12:Comparator>*/
}
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var20 = self->attrs[COLOR_nit__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 105);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_ = var18;
{
var21 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_22 = var21;
for(;;) {
{
var23 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_22);
}
if (var23){
{
var24 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_22);
}
var_m = var24;
{
{ /* Inline toolcontext#ToolContext#opt_no_color (self) on <self:ToolContext> */
var27 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_no_color].val; /* _opt_no_color on <self:ToolContext> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_color");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 306);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline opts#Option#value (var25) on <var25:OptionBool> */
var30 = var25->attrs[COLOR_opts__Option___value].val; /* _value on <var25:OptionBool> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
var31 = ((struct instance_standard__Bool*)var28)->value; /* autounbox from nullable Object to Bool */;
if (var31){
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var34 = glob_sys;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline file#Sys#stderr (var32) on <var32:Sys> */
var37 = var32->attrs[COLOR_standard__file__Sys___stderr].val; /* _stderr on <var32:Sys> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stderr");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 1011);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
if (varonce) {
var38 = varonce;
} else {
var39 = "\n";
var40 = 1;
var41 = standard___standard__NativeString___to_s_with_length(var39, var40);
var38 = var41;
varonce = var38;
}
var42 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var42 = array_instance Array[Object] */
var43 = 2;
var44 = NEW_standard__NativeArray(var43, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var44)->values[0] = (val*) var_m;
((struct instance_standard__NativeArray*)var44)->values[1] = (val*) var38;
{
((void (*)(val* self, val* p0, long p1))(var42->class->vft[COLOR_standard__array__Array__with_native]))(var42, var44, var43) /* with_native on <var42:Array[Object]>*/;
}
}
{
var45 = ((val* (*)(val* self))(var42->class->vft[COLOR_standard__string__Object__to_s]))(var42) /* to_s on <var42:Array[Object]>*/;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var35, var45); /* Direct call file#OFStream#write on <var35:OStream>*/
}
} else {
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var48 = glob_sys;
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline file#Sys#stderr (var46) on <var46:Sys> */
var51 = var46->attrs[COLOR_standard__file__Sys___stderr].val; /* _stderr on <var46:Sys> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stderr");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 1011);
show_backtrace(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
var52 = nit___nit__Message___to_color_string(var_m);
}
if (varonce53) {
var54 = varonce53;
} else {
var55 = "\n";
var56 = 1;
var57 = standard___standard__NativeString___to_s_with_length(var55, var56);
var54 = var57;
varonce53 = var54;
}
var58 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var58 = array_instance Array[Object] */
var59 = 2;
var60 = NEW_standard__NativeArray(var59, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var60)->values[0] = (val*) var52;
((struct instance_standard__NativeArray*)var60)->values[1] = (val*) var54;
{
((void (*)(val* self, val* p0, long p1))(var58->class->vft[COLOR_standard__array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[Object]>*/;
}
}
{
var61 = ((val* (*)(val* self))(var58->class->vft[COLOR_standard__string__Object__to_s]))(var58) /* to_s on <var58:Array[Object]>*/;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var49, var61); /* Direct call file#OFStream#write on <var49:OStream>*/
}
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_22); /* Direct call array#ArrayIterator#next on <var_22:ArrayIterator[Message]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_22) on <var_22:ArrayIterator[Message]> */
RET_LABEL62:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var65 = self->attrs[COLOR_nit__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 105);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
standard___standard__AbstractArray___standard__abstract_collection__RemovableCollection__clear(var63); /* Direct call array#AbstractArray#clear on <var63:Array[Message]>*/
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var68 = self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
var69 = 0;
{
{ /* Inline kernel#Int#> (var66,var69) on <var66:Int> */
/* Covariant cast for argument 0 (i) <var69:Int> isa OTHER */
/* <var69:Int> isa OTHER */
var72 = 1; /* easy <var69:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 412);
show_backtrace(1);
}
var76 = var66 > var69;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
if (var70){
{
nit___nit__ToolContext___errors_info(self); /* Direct call toolcontext#ToolContext#errors_info on <self:ToolContext>*/
}
{
{ /* Inline toolcontext#ToolContext#keep_going (self) on <self:ToolContext> */
var79 = self->attrs[COLOR_nit__toolcontext__ToolContext___keep_going].s; /* _keep_going on <self:ToolContext> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
var80 = !var77;
if (var80){
var81 = 1;
{
{ /* Inline kernel#Object#exit (self,var81) on <self:ToolContext> */
exit(var81);
RET_LABEL82:(void)0;
}
}
} else {
}
var83 = 0;
var = var83;
goto RET_LABEL;
} else {
}
var84 = 1;
var = var84;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#errors_info for (self: ToolContext) */
void nit___nit__ToolContext___errors_info(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
long var8 /* : Int */;
long var10 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : OptionBool */;
val* var17 /* : OptionBool */;
val* var18 /* : nullable Object */;
val* var20 /* : nullable Object */;
short int var21 /* : Bool */;
val* var22 /* : Sys */;
val* var24 /* : Sys */;
val* var25 /* : OStream */;
val* var27 /* : OStream */;
static val* varonce;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : FlatString */;
long var32 /* : Int */;
long var34 /* : Int */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
long var40 /* : Int */;
long var42 /* : Int */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : FlatString */;
val* var48 /* : Array[Object] */;
long var49 /* : Int */;
val* var50 /* : NativeArray[Object] */;
val* var51 /* : Object */;
val* var52 /* : Object */;
val* var53 /* : String */;
long var54 /* : Int */;
long var56 /* : Int */;
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = 0;
{
{ /* Inline kernel#Int#== (var1,var4) on <var1:Int> */
var7 = var1 == var4;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_ = var5;
if (var5){
{
{ /* Inline toolcontext#ToolContext#warning_count (self) on <self:ToolContext> */
var10 = self->attrs[COLOR_nit__toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = 0;
{
{ /* Inline kernel#Int#== (var8,var11) on <var8:Int> */
var14 = var8 == var11;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var = var12;
} else {
var = var_;
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_no_color (self) on <self:ToolContext> */
var17 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_no_color].val; /* _opt_no_color on <self:ToolContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_color");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 306);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline opts#Option#value (var15) on <var15:OptionBool> */
var20 = var15->attrs[COLOR_opts__Option___value].val; /* _value on <var15:OptionBool> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = ((struct instance_standard__Bool*)var18)->value; /* autounbox from nullable Object to Bool */;
if (var21){
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var24 = glob_sys;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline file#Sys#stderr (var22) on <var22:Sys> */
var27 = var22->attrs[COLOR_standard__file__Sys___stderr].val; /* _stderr on <var22:Sys> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stderr");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 1011);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (varonce) {
var28 = varonce;
} else {
var29 = "Errors: ";
var30 = 8;
var31 = standard___standard__NativeString___to_s_with_length(var29, var30);
var28 = var31;
varonce = var28;
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var34 = self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = ". Warnings: ";
var38 = 12;
var39 = standard___standard__NativeString___to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
{
{ /* Inline toolcontext#ToolContext#warning_count (self) on <self:ToolContext> */
var42 = self->attrs[COLOR_nit__toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (varonce43) {
var44 = varonce43;
} else {
var45 = ".\n";
var46 = 2;
var47 = standard___standard__NativeString___to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
var48 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var48 = array_instance Array[Object] */
var49 = 5;
var50 = NEW_standard__NativeArray(var49, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var50)->values[0] = (val*) var28;
var51 = BOX_standard__Int(var32); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var50)->values[1] = (val*) var51;
((struct instance_standard__NativeArray*)var50)->values[2] = (val*) var36;
var52 = BOX_standard__Int(var40); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var50)->values[3] = (val*) var52;
((struct instance_standard__NativeArray*)var50)->values[4] = (val*) var44;
{
((void (*)(val* self, val* p0, long p1))(var48->class->vft[COLOR_standard__array__Array__with_native]))(var48, var50, var49) /* with_native on <var48:Array[Object]>*/;
}
}
{
var53 = ((val* (*)(val* self))(var48->class->vft[COLOR_standard__string__Object__to_s]))(var48) /* to_s on <var48:Array[Object]>*/;
}
{
standard___standard__OFStream___standard__stream__OStream__write(var25, var53); /* Direct call file#OFStream#write on <var25:OStream>*/
}
var54 = 0;
{
{ /* Inline toolcontext#ToolContext#error_count= (self,var54) on <self:ToolContext> */
self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l = var54; /* _error_count on <self:ToolContext> */
RET_LABEL55:(void)0;
}
}
var56 = 0;
{
{ /* Inline toolcontext#ToolContext#warning_count= (self,var56) on <self:ToolContext> */
self->attrs[COLOR_nit__toolcontext__ToolContext___warning_count].l = var56; /* _warning_count on <self:ToolContext> */
RET_LABEL57:(void)0;
}
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#error for (self: ToolContext, nullable Location, String) */
void nit___nit__ToolContext___error(val* self, val* p0, val* p1) {
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
short int var21 /* : Bool */;
var_l = p0;
var_s = p1;
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nit__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 105);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = NEW_nit__Message(&type_nit__Message);
var4 = NULL;
{
((void (*)(val* self, val* p0))(var3->class->vft[COLOR_nit__toolcontext__Message__location_61d]))(var3, var_l) /* location= on <var3:Message>*/;
}
{
((void (*)(val* self, val* p0))(var3->class->vft[COLOR_nit__toolcontext__Message__tag_61d]))(var3, var4) /* tag= on <var3:Message>*/;
}
{
((void (*)(val* self, val* p0))(var3->class->vft[COLOR_nit__toolcontext__Message__text_61d]))(var3, var_s) /* text= on <var3:Message>*/;
}
{
((void (*)(val* self))(var3->class->vft[COLOR_standard__kernel__Object__init]))(var3) /* init on <var3:Message>*/;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var, var3); /* Direct call array#Array#add on <var:Array[Message]>*/
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var7 = self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
self->attrs[COLOR_nit__toolcontext__ToolContext___error_count].l = var9; /* _error_count on <self:ToolContext> */
RET_LABEL13:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_stop_on_first_error (self) on <self:ToolContext> */
var16 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 303);
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
var20 = ((struct instance_standard__Bool*)var17)->value; /* autounbox from nullable Object to Bool */;
if (var20){
{
var21 = nit___nit__ToolContext___check_errors(self);
}
} else {
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#fatal_error for (self: ToolContext, nullable Location, String) */
void nit___nit__ToolContext___fatal_error(val* self, val* p0, val* p1) {
val* var_l /* var l: nullable Location */;
val* var_s /* var s: String */;
short int var /* : Bool */;
var_l = p0;
var_s = p1;
{
nit___nit__ToolContext___error(self, var_l, var_s); /* Direct call toolcontext#ToolContext#error on <self:ToolContext>*/
}
{
var = nit___nit__ToolContext___check_errors(self);
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#warning for (self: ToolContext, nullable Location, String, String) */
void nit___nit__ToolContext___warning(val* self, val* p0, val* p1, val* p2) {
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
int cltype;
int idtype;
const char* var_class_name;
long var47 /* : Int */;
val* var49 /* : OptionBool */;
val* var51 /* : OptionBool */;
val* var52 /* : nullable Object */;
val* var54 /* : nullable Object */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
var_l = p0;
var_tag = p1;
var_text = p2;
{
{ /* Inline toolcontext#ToolContext#opt_warning (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 276);
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
var9 = standard___standard__NativeString___to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
var10 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var10 = array_instance Array[Object] */
var11 = 2;
var12 = NEW_standard__NativeArray(var11, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var12)->values[0] = (val*) var6;
((struct instance_standard__NativeArray*)var12)->values[1] = (val*) var_tag;
{
((void (*)(val* self, val* p0, long p1))(var10->class->vft[COLOR_standard__array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Object]>*/;
}
}
{
var13 = ((val* (*)(val* self))(var10->class->vft[COLOR_standard__string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
}
{
var14 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var3, var13);
}
if (var14){
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_warning (self) on <self:ToolContext> */
var18 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 276);
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
var22 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var19, var_tag);
}
var23 = !var22;
var_ = var23;
if (var23){
{
{ /* Inline toolcontext#ToolContext#opt_warn (self) on <self:ToolContext> */
var26 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 273);
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
var33 = (var27 != NULL) && (var27->class == &class_standard__Int);
if (var33) {
var34 = ((struct instance_standard__Int*)var27)->value; /* autounbox from nullable Object to Int */;
var33 = (var34 == var30);
}
var31 = var33;
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
var35 = nit___nit__ToolContext___is_warning_blacklisted(self, var_l, var_tag);
}
if (var35){
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var38 = self->attrs[COLOR_nit__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 105);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
var39 = NEW_nit__Message(&type_nit__Message);
{
((void (*)(val* self, val* p0))(var39->class->vft[COLOR_nit__toolcontext__Message__location_61d]))(var39, var_l) /* location= on <var39:Message>*/;
}
{
((void (*)(val* self, val* p0))(var39->class->vft[COLOR_nit__toolcontext__Message__tag_61d]))(var39, var_tag) /* tag= on <var39:Message>*/;
}
{
((void (*)(val* self, val* p0))(var39->class->vft[COLOR_nit__toolcontext__Message__text_61d]))(var39, var_text) /* text= on <var39:Message>*/;
}
{
((void (*)(val* self))(var39->class->vft[COLOR_standard__kernel__Object__init]))(var39) /* init on <var39:Message>*/;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var36, var39); /* Direct call array#Array#add on <var36:Array[Message]>*/
}
{
{ /* Inline toolcontext#ToolContext#warning_count (self) on <self:ToolContext> */
var42 = self->attrs[COLOR_nit__toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
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
self->attrs[COLOR_nit__toolcontext__ToolContext___warning_count].l = var44; /* _warning_count on <self:ToolContext> */
RET_LABEL48:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_stop_on_first_error (self) on <self:ToolContext> */
var51 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 303);
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
var55 = ((struct instance_standard__Bool*)var52)->value; /* autounbox from nullable Object to Bool */;
if (var55){
{
var56 = nit___nit__ToolContext___check_errors(self);
}
} else {
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#advice for (self: ToolContext, nullable Location, String, String) */
void nit___nit__ToolContext___advice(val* self, val* p0, val* p1, val* p2) {
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
short int var36 /* : Bool */;
val* var37 /* : Array[Message] */;
val* var39 /* : Array[Message] */;
val* var40 /* : Message */;
long var41 /* : Int */;
long var43 /* : Int */;
long var44 /* : Int */;
long var45 /* : Int */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
const char* var_class_name50;
long var51 /* : Int */;
val* var53 /* : OptionBool */;
val* var55 /* : OptionBool */;
val* var56 /* : nullable Object */;
val* var58 /* : nullable Object */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
var_l = p0;
var_tag = p1;
var_text = p2;
{
{ /* Inline toolcontext#ToolContext#opt_warning (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 276);
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
var9 = standard___standard__NativeString___to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
var10 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var10 = array_instance Array[Object] */
var11 = 2;
var12 = NEW_standard__NativeArray(var11, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var12)->values[0] = (val*) var6;
((struct instance_standard__NativeArray*)var12)->values[1] = (val*) var_tag;
{
((void (*)(val* self, val* p0, long p1))(var10->class->vft[COLOR_standard__array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Object]>*/;
}
}
{
var13 = ((val* (*)(val* self))(var10->class->vft[COLOR_standard__string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
}
{
var14 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var3, var13);
}
if (var14){
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_warning (self) on <self:ToolContext> */
var18 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 276);
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
var22 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__has(var19, var_tag);
}
var23 = !var22;
var_ = var23;
if (var23){
{
{ /* Inline toolcontext#ToolContext#opt_warn (self) on <self:ToolContext> */
var26 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 273);
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var34 = ((struct instance_standard__Int*)var27)->value; /* autounbox from nullable Object to Int */;
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
var36 = nit___nit__ToolContext___is_warning_blacklisted(self, var_l, var_tag);
}
if (var36){
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var39 = self->attrs[COLOR_nit__toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 105);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
var40 = NEW_nit__Message(&type_nit__Message);
{
((void (*)(val* self, val* p0))(var40->class->vft[COLOR_nit__toolcontext__Message__location_61d]))(var40, var_l) /* location= on <var40:Message>*/;
}
{
((void (*)(val* self, val* p0))(var40->class->vft[COLOR_nit__toolcontext__Message__tag_61d]))(var40, var_tag) /* tag= on <var40:Message>*/;
}
{
((void (*)(val* self, val* p0))(var40->class->vft[COLOR_nit__toolcontext__Message__text_61d]))(var40, var_text) /* text= on <var40:Message>*/;
}
{
((void (*)(val* self))(var40->class->vft[COLOR_standard__kernel__Object__init]))(var40) /* init on <var40:Message>*/;
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var37, var40); /* Direct call array#Array#add on <var37:Array[Message]>*/
}
{
{ /* Inline toolcontext#ToolContext#warning_count (self) on <self:ToolContext> */
var43 = self->attrs[COLOR_nit__toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
var44 = 1;
{
{ /* Inline kernel#Int#+ (var41,var44) on <var41:Int> */
/* Covariant cast for argument 0 (i) <var44:Int> isa OTHER */
/* <var44:Int> isa OTHER */
var47 = 1; /* easy <var44:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name50 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var51 = var41 + var44;
var45 = var51;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#warning_count= (self,var45) on <self:ToolContext> */
self->attrs[COLOR_nit__toolcontext__ToolContext___warning_count].l = var45; /* _warning_count on <self:ToolContext> */
RET_LABEL52:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_stop_on_first_error (self) on <self:ToolContext> */
var55 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 303);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline opts#Option#value (var53) on <var53:OptionBool> */
var58 = var53->attrs[COLOR_opts__Option___value].val; /* _value on <var53:OptionBool> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
var59 = ((struct instance_standard__Bool*)var56)->value; /* autounbox from nullable Object to Bool */;
if (var59){
{
var60 = nit___nit__ToolContext___check_errors(self);
}
} else {
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#info for (self: ToolContext, String, Int) */
void nit___nit__ToolContext___info(val* self, val* p0, long p1) {
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
var2 = self->attrs[COLOR_nit__toolcontext__ToolContext___verbose_level].l; /* _verbose_level on <self:ToolContext> */
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
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 409);
show_backtrace(1);
}
var6 = var_level <= var;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
if (var3){
var7 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var7 = array_instance Array[Object] */
var8 = 1;
var9 = NEW_standard__NativeArray(var8, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var9)->values[0] = (val*) var_s;
{
((void (*)(val* self, val* p0, long p1))(var7->class->vft[COLOR_standard__array__Array__with_native]))(var7, var9, var8) /* with_native on <var7:Array[Object]>*/;
}
}
{
var10 = ((val* (*)(val* self))(var7->class->vft[COLOR_standard__string__Object__to_s]))(var7) /* to_s on <var7:Array[Object]>*/;
}
{
standard__file___Object___print(self, var10); /* Direct call file#Object#print on <self:ToolContext>*/
}
} else {
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#option_context for (self: ToolContext): OptionContext */
val* nit___nit__ToolContext___option_context(val* self) {
val* var /* : OptionContext */;
val* var1 /* : OptionContext */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 270);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_warn for (self: ToolContext): OptionCount */
val* nit___nit__ToolContext___opt_warn(val* self) {
val* var /* : OptionCount */;
val* var1 /* : OptionCount */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 273);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_warning for (self: ToolContext): OptionArray */
val* nit___nit__ToolContext___opt_warning(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 276);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_quiet for (self: ToolContext): OptionBool */
val* nit___nit__ToolContext___opt_quiet(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_quiet].val; /* _opt_quiet on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_quiet");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 279);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_log for (self: ToolContext): OptionBool */
val* nit___nit__ToolContext___opt_log(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_log].val; /* _opt_log on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 282);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_log_dir for (self: ToolContext): OptionString */
val* nit___nit__ToolContext___opt_log_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_log_dir].val; /* _opt_log_dir on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 285);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_nit_dir for (self: ToolContext): OptionString */
val* nit___nit__ToolContext___opt_nit_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_nit_dir].val; /* _opt_nit_dir on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_nit_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 288);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_help for (self: ToolContext): OptionBool */
val* nit___nit__ToolContext___opt_help(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_help].val; /* _opt_help on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_help");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 291);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_version for (self: ToolContext): OptionBool */
val* nit___nit__ToolContext___opt_version(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_version].val; /* _opt_version on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_version");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 294);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_set_dummy_tool for (self: ToolContext): OptionBool */
val* nit___nit__ToolContext___opt_set_dummy_tool(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 297);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_verbose for (self: ToolContext): OptionCount */
val* nit___nit__ToolContext___opt_verbose(val* self) {
val* var /* : OptionCount */;
val* var1 /* : OptionCount */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_verbose].val; /* _opt_verbose on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_verbose");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 300);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_stop_on_first_error for (self: ToolContext): OptionBool */
val* nit___nit__ToolContext___opt_stop_on_first_error(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 303);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_no_color for (self: ToolContext): OptionBool */
val* nit___nit__ToolContext___opt_no_color(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_no_color].val; /* _opt_no_color on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_color");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 306);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_bash_completion for (self: ToolContext): OptionBool */
val* nit___nit__ToolContext___opt_bash_completion(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_bash_completion].val; /* _opt_bash_completion on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_bash_completion");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 309);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#opt_stub_man for (self: ToolContext): OptionBool */
val* nit___nit__ToolContext___opt_stub_man(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_stub_man].val; /* _opt_stub_man on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stub_man");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 312);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#verbose_level for (self: ToolContext): Int */
long nit___nit__ToolContext___verbose_level(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___verbose_level].l; /* _verbose_level on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#verbose_level= for (self: ToolContext, Int) */
void nit___nit__ToolContext___verbose_level_61d(val* self, long p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___verbose_level].l = p0; /* _verbose_level on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#init for (self: ToolContext) */
void nit___nit__ToolContext___standard__kernel__Object__init(val* self) {
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
val* var24 /* : OptionString */;
val* var26 /* : OptionString */;
val* var27 /* : OptionBool */;
val* var29 /* : OptionBool */;
val* var30 /* : OptionBool */;
val* var32 /* : OptionBool */;
val* var33 /* : OptionBool */;
val* var35 /* : OptionBool */;
val* var36 /* : OptionCount */;
val* var38 /* : OptionCount */;
val* var39 /* : OptionBool */;
val* var41 /* : OptionBool */;
val* var42 /* : OptionBool */;
val* var44 /* : OptionBool */;
val* var45 /* : Array[Option] */;
long var46 /* : Int */;
val* var47 /* : NativeArray[Option] */;
val* var48 /* : OptionBool */;
val* var50 /* : OptionBool */;
short int var51 /* : Bool */;
val* var53 /* : OptionBool */;
val* var55 /* : OptionBool */;
short int var56 /* : Bool */;
val* var58 /* : OptionBool */;
val* var60 /* : OptionBool */;
short int var61 /* : Bool */;
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 270);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_warn (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 273);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_warning (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_warning].val; /* _opt_warning on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warning");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 276);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_quiet (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_quiet].val; /* _opt_quiet on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_quiet");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 279);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_stop_on_first_error (self) on <self:ToolContext> */
var14 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 303);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_no_color (self) on <self:ToolContext> */
var17 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_no_color].val; /* _opt_no_color on <self:ToolContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_color");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 306);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_log (self) on <self:ToolContext> */
var20 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_log].val; /* _opt_log on <self:ToolContext> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 282);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_log_dir (self) on <self:ToolContext> */
var23 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_log_dir].val; /* _opt_log_dir on <self:ToolContext> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 285);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_nit_dir (self) on <self:ToolContext> */
var26 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_nit_dir].val; /* _opt_nit_dir on <self:ToolContext> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_nit_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 288);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_help (self) on <self:ToolContext> */
var29 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_help].val; /* _opt_help on <self:ToolContext> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_help");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 291);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_version (self) on <self:ToolContext> */
var32 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_version].val; /* _opt_version on <self:ToolContext> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_version");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 294);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_set_dummy_tool (self) on <self:ToolContext> */
var35 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:ToolContext> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 297);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_verbose (self) on <self:ToolContext> */
var38 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_verbose].val; /* _opt_verbose on <self:ToolContext> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_verbose");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 300);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_bash_completion (self) on <self:ToolContext> */
var41 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_bash_completion].val; /* _opt_bash_completion on <self:ToolContext> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_bash_completion");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 309);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_stub_man (self) on <self:ToolContext> */
var44 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_stub_man].val; /* _opt_stub_man on <self:ToolContext> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stub_man");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 312);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
var45 = NEW_standard__Array(&type_standard__Array__opts__Option);
{ /* var45 = array_instance Array[Option] */
var46 = 14;
var47 = NEW_standard__NativeArray(var46, &type_standard__NativeArray__opts__Option);
((struct instance_standard__NativeArray*)var47)->values[0] = (val*) var3;
((struct instance_standard__NativeArray*)var47)->values[1] = (val*) var6;
((struct instance_standard__NativeArray*)var47)->values[2] = (val*) var9;
((struct instance_standard__NativeArray*)var47)->values[3] = (val*) var12;
((struct instance_standard__NativeArray*)var47)->values[4] = (val*) var15;
((struct instance_standard__NativeArray*)var47)->values[5] = (val*) var18;
((struct instance_standard__NativeArray*)var47)->values[6] = (val*) var21;
((struct instance_standard__NativeArray*)var47)->values[7] = (val*) var24;
((struct instance_standard__NativeArray*)var47)->values[8] = (val*) var27;
((struct instance_standard__NativeArray*)var47)->values[9] = (val*) var30;
((struct instance_standard__NativeArray*)var47)->values[10] = (val*) var33;
((struct instance_standard__NativeArray*)var47)->values[11] = (val*) var36;
((struct instance_standard__NativeArray*)var47)->values[12] = (val*) var39;
((struct instance_standard__NativeArray*)var47)->values[13] = (val*) var42;
{
((void (*)(val* self, val* p0, long p1))(var45->class->vft[COLOR_standard__array__Array__with_native]))(var45, var47, var46) /* with_native on <var45:Array[Option]>*/;
}
}
{
opts___opts__OptionContext___add_option(var, var45); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#opt_stub_man (self) on <self:ToolContext> */
var50 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_stub_man].val; /* _opt_stub_man on <self:ToolContext> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stub_man");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 312);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
var51 = 1;
{
{ /* Inline opts#Option#hidden= (var48,var51) on <var48:OptionBool> */
var48->attrs[COLOR_opts__Option___hidden].s = var51; /* _hidden on <var48:OptionBool> */
RET_LABEL52:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_bash_completion (self) on <self:ToolContext> */
var55 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_bash_completion].val; /* _opt_bash_completion on <self:ToolContext> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_bash_completion");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 309);
show_backtrace(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
var56 = 1;
{
{ /* Inline opts#Option#hidden= (var53,var56) on <var53:OptionBool> */
var53->attrs[COLOR_opts__Option___hidden].s = var56; /* _hidden on <var53:OptionBool> */
RET_LABEL57:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_set_dummy_tool (self) on <self:ToolContext> */
var60 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:ToolContext> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 297);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
var61 = 1;
{
{ /* Inline opts#Option#hidden= (var58,var61) on <var58:OptionBool> */
var58->attrs[COLOR_opts__Option___hidden].s = var61; /* _hidden on <var58:OptionBool> */
RET_LABEL62:(void)0;
}
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#tooldescription for (self: ToolContext): String */
val* nit___nit__ToolContext___tooldescription(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 328);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#tooldescription= for (self: ToolContext, String) */
void nit___nit__ToolContext___tooldescription_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___tooldescription].val = p0; /* _tooldescription on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#accept_no_arguments for (self: ToolContext): Bool */
short int nit___nit__ToolContext___accept_no_arguments(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___accept_no_arguments].s; /* _accept_no_arguments on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#usage for (self: ToolContext) */
void nit___nit__ToolContext___usage(val* self) {
val* var /* : String */;
val* var2 /* : String */;
val* var3 /* : OptionContext */;
val* var5 /* : OptionContext */;
{
{ /* Inline toolcontext#ToolContext#tooldescription (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nit__toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 328);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
standard__file___Object___print(self, var); /* Direct call file#Object#print on <self:ToolContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 270);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
opts___opts__OptionContext___usage(var3); /* Direct call opts#OptionContext#usage on <var3:OptionContext>*/
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#process_options for (self: ToolContext, Sequence[String]) */
void nit___nit__ToolContext___process_options(val* self, val* p0) {
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
val* var71 /* : Array[String] */;
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
val* var198 /* : String */;
short int var200 /* : Bool */;
val* var201 /* : OptionContext */;
val* var203 /* : OptionContext */;
val* var204 /* : Array[String] */;
val* var206 /* : Array[String] */;
short int var207 /* : Bool */;
short int var_208 /* var : Bool */;
short int var209 /* : Bool */;
short int var211 /* : Bool */;
short int var212 /* : Bool */;
val* var213 /* : String */;
val* var215 /* : String */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : NativeString */;
long var219 /* : Int */;
val* var220 /* : FlatString */;
long var221 /* : Int */;
val* var223 /* : OptionCount */;
val* var225 /* : OptionCount */;
val* var226 /* : nullable Object */;
val* var228 /* : nullable Object */;
long var230 /* : Int */;
val* var231 /* : OptionBool */;
val* var233 /* : OptionBool */;
val* var234 /* : nullable Object */;
val* var236 /* : nullable Object */;
short int var237 /* : Bool */;
val* var238 /* : OptionCount */;
val* var240 /* : OptionCount */;
long var241 /* : Int */;
short int var243 /* : Bool */;
int cltype244;
int idtype245;
const struct type* type_struct246;
const char* var_class_name247;
val* var248 /* : nullable Object */;
val* var249 /* : OptionString */;
val* var251 /* : OptionString */;
val* var252 /* : nullable Object */;
val* var254 /* : nullable Object */;
val* var255 /* : null */;
short int var256 /* : Bool */;
short int var257 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var259 /* : Bool */;
short int var260 /* : Bool */;
val* var261 /* : OptionString */;
val* var263 /* : OptionString */;
val* var264 /* : nullable Object */;
val* var266 /* : nullable Object */;
val* var268 /* : OptionBool */;
val* var270 /* : OptionBool */;
val* var271 /* : nullable Object */;
val* var273 /* : nullable Object */;
short int var274 /* : Bool */;
val* var275 /* : String */;
val* var277 /* : String */;
var_args = p0;
{
{ /* Inline toolcontext#ToolContext#opt_warn (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 273);
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
type_struct = var->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (&type_standard__Int)->table_size) {
var5 = 0;
} else {
var5 = (&type_standard__Int)->type_table[cltype] == idtype;
}
if (unlikely(!var5)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
show_backtrace(1);
}
var6 = BOX_standard__Int(var3); /* autobox from Int to nullable Object */
var->attrs[COLOR_opts__Option___value].val = var6; /* _value on <var:OptionCount> */
RET_LABEL4:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var9 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 270);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
opts___opts__OptionContext___parse(var7, var_args); /* Direct call opts#OptionContext#parse on <var7:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#opt_help (self) on <self:ToolContext> */
var12 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_help].val; /* _opt_help on <self:ToolContext> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_help");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 291);
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
var16 = ((struct instance_standard__Bool*)var13)->value; /* autounbox from nullable Object to Bool */;
if (var16){
{
nit___nit__ToolContext___usage(self); /* Direct call toolcontext#ToolContext#usage on <self:ToolContext>*/
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
var21 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_version].val; /* _opt_version on <self:ToolContext> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_version");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 294);
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
var25 = ((struct instance_standard__Bool*)var22)->value; /* autounbox from nullable Object to Bool */;
if (var25){
{
var26 = nit___nit__ToolContext___version(self);
}
{
standard__file___Object___print(self, var26); /* Direct call file#Object#print on <self:ToolContext>*/
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
var31 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_bash_completion].val; /* _opt_bash_completion on <self:ToolContext> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_bash_completion");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 309);
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
var35 = ((struct instance_standard__Bool*)var32)->value; /* autounbox from nullable Object to Bool */;
if (var35){
var36 = NEW_nit__BashCompletion(&type_nit__BashCompletion);
{
((void (*)(val* self, val* p0))(var36->class->vft[COLOR_nit__toolcontext__BashCompletion__toolcontext_61d]))(var36, self) /* toolcontext= on <var36:BashCompletion>*/;
}
{
((void (*)(val* self))(var36->class->vft[COLOR_standard__kernel__Object__init]))(var36) /* init on <var36:BashCompletion>*/;
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
var42 = var37->attrs[COLOR_standard__file__Sys___stdout].val; /* _stdout on <var37:Sys> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdout");
PRINT_ERROR(" (%s:%d)\n", FILE_standard__file, 1008);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
template___template__Template___standard__stream__Streamable__write_to(var_bash_completion, var40); /* Direct call template#Template#write_to on <var_bash_completion:BashCompletion>*/
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
var47 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_stub_man].val; /* _opt_stub_man on <self:ToolContext> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stub_man");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 312);
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
var51 = ((struct instance_standard__Bool*)var48)->value; /* autounbox from nullable Object to Bool */;
if (var51){
if (varonce) {
var52 = varonce;
} else {
var53 = "% ";
var54 = 2;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce = var52;
}
{
var56 = nit___nit__ToolContext___toolname(self);
}
{
var57 = ((val* (*)(val* self))(var56->class->vft[COLOR_standard__string__String__to_upper]))(var56) /* to_upper on <var56:String>*/;
}
if (varonce58) {
var59 = varonce58;
} else {
var60 = "(1)\n\n# NAME\n\n";
var61 = 13;
var62 = standard___standard__NativeString___to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
{
{ /* Inline toolcontext#ToolContext#tooldescription (self) on <self:ToolContext> */
var65 = self->attrs[COLOR_nit__toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 328);
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
var70 = standard___standard__NativeString___to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
{
var71 = standard__string_search___Text___split(var63, var67);
}
var72 = 1;
{
var73 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var71, var72);
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = "\n\n# SYNOPSYS\n\n";
var77 = 14;
var78 = standard___standard__NativeString___to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
{
var79 = nit___nit__ToolContext___toolname(self);
}
if (varonce80) {
var81 = varonce80;
} else {
var82 = " [*options*]...\n\n# OPTIONS\n";
var83 = 27;
var84 = standard___standard__NativeString___to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
var85 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var85 = array_instance Array[Object] */
var86 = 7;
var87 = NEW_standard__NativeArray(var86, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var87)->values[0] = (val*) var52;
((struct instance_standard__NativeArray*)var87)->values[1] = (val*) var57;
((struct instance_standard__NativeArray*)var87)->values[2] = (val*) var59;
((struct instance_standard__NativeArray*)var87)->values[3] = (val*) var73;
((struct instance_standard__NativeArray*)var87)->values[4] = (val*) var75;
((struct instance_standard__NativeArray*)var87)->values[5] = (val*) var79;
((struct instance_standard__NativeArray*)var87)->values[6] = (val*) var81;
{
((void (*)(val* self, val* p0, long p1))(var85->class->vft[COLOR_standard__array__Array__with_native]))(var85, var87, var86) /* with_native on <var85:Array[Object]>*/;
}
}
{
var88 = ((val* (*)(val* self))(var85->class->vft[COLOR_standard__string__Object__to_s]))(var85) /* to_s on <var85:Array[Object]>*/;
}
{
standard__file___Object___print(self, var88); /* Direct call file#Object#print on <self:ToolContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var91 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 270);
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 264);
show_backtrace(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
var_ = var92;
{
var95 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_96 = var95;
for(;;) {
{
var97 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_96);
}
if (var97){
{
var98 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_96);
}
var_o = var98;
var99 = 1;
var_first = var99;
{
{ /* Inline opts#Option#names (var_o) on <var_o:Option> */
var102 = var_o->attrs[COLOR_opts__Option___names].val; /* _names on <var_o:Option> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 19);
show_backtrace(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
var_103 = var100;
{
var104 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_103);
}
var_105 = var104;
for(;;) {
{
var106 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_105);
}
if (var106){
{
var107 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_105);
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
var113 = standard___standard__NativeString___to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
var114 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var114 = array_instance Array[Object] */
var115 = 1;
var116 = NEW_standard__NativeArray(var115, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var116)->values[0] = (val*) var110;
{
((void (*)(val* self, val* p0, long p1))(var114->class->vft[COLOR_standard__array__Array__with_native]))(var114, var116, var115) /* with_native on <var114:Array[Object]>*/;
}
}
{
standard__file___Object___printn(self, var114); /* Direct call file#Object#printn on <self:ToolContext>*/
}
}
if (varonce117) {
var118 = varonce117;
} else {
var119 = "`";
var120 = 1;
var121 = standard___standard__NativeString___to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
if (varonce122) {
var123 = varonce122;
} else {
var124 = "`";
var125 = 1;
var126 = standard___standard__NativeString___to_s_with_length(var124, var125);
var123 = var126;
varonce122 = var123;
}
var127 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var127 = array_instance Array[Object] */
var128 = 3;
var129 = NEW_standard__NativeArray(var128, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var129)->values[0] = (val*) var118;
((struct instance_standard__NativeArray*)var129)->values[1] = (val*) var_n;
((struct instance_standard__NativeArray*)var129)->values[2] = (val*) var123;
{
((void (*)(val* self, val* p0, long p1))(var127->class->vft[COLOR_standard__array__Array__with_native]))(var127, var129, var128) /* with_native on <var127:Array[Object]>*/;
}
}
{
var130 = ((val* (*)(val* self))(var127->class->vft[COLOR_standard__string__Object__to_s]))(var127) /* to_s on <var127:Array[Object]>*/;
}
var131 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var131 = array_instance Array[Object] */
var132 = 1;
var133 = NEW_standard__NativeArray(var132, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var133)->values[0] = (val*) var130;
{
((void (*)(val* self, val* p0, long p1))(var131->class->vft[COLOR_standard__array__Array__with_native]))(var131, var133, var132) /* with_native on <var131:Array[Object]>*/;
}
}
{
standard__file___Object___printn(self, var131); /* Direct call file#Object#printn on <self:ToolContext>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_105); /* Direct call array#ArrayIterator#next on <var_105:ArrayIterator[String]>*/
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
var139 = standard___standard__NativeString___to_s_with_length(var137, var138);
var136 = var139;
varonce135 = var136;
}
{
standard__file___Object___print(self, var136); /* Direct call file#Object#print on <self:ToolContext>*/
}
if (varonce140) {
var141 = varonce140;
} else {
var142 = ":   ";
var143 = 4;
var144 = standard___standard__NativeString___to_s_with_length(var142, var143);
var141 = var144;
varonce140 = var141;
}
{
{ /* Inline opts#Option#helptext (var_o) on <var_o:Option> */
var147 = var_o->attrs[COLOR_opts__Option___helptext].val; /* _helptext on <var_o:Option> */
if (unlikely(var147 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _helptext");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 25);
show_backtrace(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
var148 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var148 = array_instance Array[Object] */
var149 = 2;
var150 = NEW_standard__NativeArray(var149, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var150)->values[0] = (val*) var141;
((struct instance_standard__NativeArray*)var150)->values[1] = (val*) var145;
{
((void (*)(val* self, val* p0, long p1))(var148->class->vft[COLOR_standard__array__Array__with_native]))(var148, var150, var149) /* with_native on <var148:Array[Object]>*/;
}
}
{
var151 = ((val* (*)(val* self))(var148->class->vft[COLOR_standard__string__Object__to_s]))(var148) /* to_s on <var148:Array[Object]>*/;
}
{
standard__file___Object___print(self, var151); /* Direct call file#Object#print on <self:ToolContext>*/
}
if (varonce152) {
var153 = varonce152;
} else {
var154 = "";
var155 = 0;
var156 = standard___standard__NativeString___to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
{
standard__file___Object___print(self, var153); /* Direct call file#Object#print on <self:ToolContext>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_96); /* Direct call array#ArrayIterator#next on <var_96:ArrayIterator[Option]>*/
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
var163 = standard___standard__NativeString___to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
{
standard__file___Object___print(self, var160); /* Direct call file#Object#print on <self:ToolContext>*/
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
var168 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var168 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 270);
show_backtrace(1);
}
var166 = var168;
RET_LABEL167:(void)0;
}
}
{
var169 = opts___opts__OptionContext___get_errors(var166);
}
var_errors = var169;
{
var170 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_errors);
}
var171 = !var170;
if (var171){
var_172 = var_errors;
{
var173 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_172);
}
var_174 = var173;
for(;;) {
{
var175 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_174);
}
if (var175){
{
var176 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_174);
}
var_e = var176;
if (varonce177) {
var178 = varonce177;
} else {
var179 = "Error: ";
var180 = 7;
var181 = standard___standard__NativeString___to_s_with_length(var179, var180);
var178 = var181;
varonce177 = var178;
}
var182 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var182 = array_instance Array[Object] */
var183 = 2;
var184 = NEW_standard__NativeArray(var183, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var184)->values[0] = (val*) var178;
((struct instance_standard__NativeArray*)var184)->values[1] = (val*) var_e;
{
((void (*)(val* self, val* p0, long p1))(var182->class->vft[COLOR_standard__array__Array__with_native]))(var182, var184, var183) /* with_native on <var182:Array[Object]>*/;
}
}
{
var185 = ((val* (*)(val* self))(var182->class->vft[COLOR_standard__string__Object__to_s]))(var182) /* to_s on <var182:Array[Object]>*/;
}
{
standard__file___Object___print(self, var185); /* Direct call file#Object#print on <self:ToolContext>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_174); /* Direct call array#ArrayIterator#next on <var_174:ArrayIterator[String]>*/
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
var190 = self->attrs[COLOR_nit__toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var190 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 328);
show_backtrace(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
{
standard__file___Object___print(self, var188); /* Direct call file#Object#print on <self:ToolContext>*/
}
if (varonce191) {
var192 = varonce191;
} else {
var193 = "Use --help for help";
var194 = 19;
var195 = standard___standard__NativeString___to_s_with_length(var193, var194);
var192 = var195;
varonce191 = var192;
}
{
standard__file___Object___print(self, var192); /* Direct call file#Object#print on <self:ToolContext>*/
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
var198 = nit___nit__ToolContext___compute_nit_dir(self);
}
{
{ /* Inline toolcontext#ToolContext#nit_dir= (self,var198) on <self:ToolContext> */
self->attrs[COLOR_nit__toolcontext__ToolContext___nit_dir].val = var198; /* _nit_dir on <self:ToolContext> */
RET_LABEL199:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var203 = self->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var203 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 270);
show_backtrace(1);
}
var201 = var203;
RET_LABEL202:(void)0;
}
}
{
{ /* Inline opts#OptionContext#rest (var201) on <var201:OptionContext> */
var206 = var201->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <var201:OptionContext> */
if (unlikely(var206 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _rest");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 267);
show_backtrace(1);
}
var204 = var206;
RET_LABEL205:(void)0;
}
}
{
var207 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var204);
}
var_208 = var207;
if (var207){
{
{ /* Inline toolcontext#ToolContext#accept_no_arguments (self) on <self:ToolContext> */
var211 = self->attrs[COLOR_nit__toolcontext__ToolContext___accept_no_arguments].s; /* _accept_no_arguments on <self:ToolContext> */
var209 = var211;
RET_LABEL210:(void)0;
}
}
var212 = !var209;
var200 = var212;
} else {
var200 = var_208;
}
if (var200){
{
{ /* Inline toolcontext#ToolContext#tooldescription (self) on <self:ToolContext> */
var215 = self->attrs[COLOR_nit__toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var215 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 328);
show_backtrace(1);
}
var213 = var215;
RET_LABEL214:(void)0;
}
}
{
standard__file___Object___print(self, var213); /* Direct call file#Object#print on <self:ToolContext>*/
}
if (varonce216) {
var217 = varonce216;
} else {
var218 = "Use --help for help";
var219 = 19;
var220 = standard___standard__NativeString___to_s_with_length(var218, var219);
var217 = var220;
varonce216 = var217;
}
{
standard__file___Object___print(self, var217); /* Direct call file#Object#print on <self:ToolContext>*/
}
var221 = 1;
{
{ /* Inline kernel#Object#exit (self,var221) on <self:ToolContext> */
exit(var221);
RET_LABEL222:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_verbose (self) on <self:ToolContext> */
var225 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_verbose].val; /* _opt_verbose on <self:ToolContext> */
if (unlikely(var225 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_verbose");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 300);
show_backtrace(1);
}
var223 = var225;
RET_LABEL224:(void)0;
}
}
{
{ /* Inline opts#Option#value (var223) on <var223:OptionCount> */
var228 = var223->attrs[COLOR_opts__Option___value].val; /* _value on <var223:OptionCount> */
var226 = var228;
RET_LABEL227:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#verbose_level= (self,var226) on <self:ToolContext> */
var230 = ((struct instance_standard__Int*)var226)->value; /* autounbox from nullable Object to Int */;
self->attrs[COLOR_nit__toolcontext__ToolContext___verbose_level].l = var230; /* _verbose_level on <self:ToolContext> */
RET_LABEL229:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_quiet (self) on <self:ToolContext> */
var233 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_quiet].val; /* _opt_quiet on <self:ToolContext> */
if (unlikely(var233 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_quiet");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 279);
show_backtrace(1);
}
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
{ /* Inline opts#Option#value (var231) on <var231:OptionBool> */
var236 = var231->attrs[COLOR_opts__Option___value].val; /* _value on <var231:OptionBool> */
var234 = var236;
RET_LABEL235:(void)0;
}
}
var237 = ((struct instance_standard__Bool*)var234)->value; /* autounbox from nullable Object to Bool */;
if (var237){
{
{ /* Inline toolcontext#ToolContext#opt_warn (self) on <self:ToolContext> */
var240 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var240 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 273);
show_backtrace(1);
}
var238 = var240;
RET_LABEL239:(void)0;
}
}
var241 = 0;
{
{ /* Inline opts#Option#value= (var238,var241) on <var238:OptionCount> */
/* Covariant cast for argument 0 (value) <var241:Int> isa VALUE */
/* <var241:Int> isa VALUE */
type_struct246 = var238->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype244 = type_struct246->color;
idtype245 = type_struct246->id;
if(cltype244 >= (&type_standard__Int)->table_size) {
var243 = 0;
} else {
var243 = (&type_standard__Int)->type_table[cltype244] == idtype245;
}
if (unlikely(!var243)) {
var_class_name247 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name247);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
show_backtrace(1);
}
var248 = BOX_standard__Int(var241); /* autobox from Int to nullable Object */
var238->attrs[COLOR_opts__Option___value].val = var248; /* _value on <var238:OptionCount> */
RET_LABEL242:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_log_dir (self) on <self:ToolContext> */
var251 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_log_dir].val; /* _opt_log_dir on <self:ToolContext> */
if (unlikely(var251 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 285);
show_backtrace(1);
}
var249 = var251;
RET_LABEL250:(void)0;
}
}
{
{ /* Inline opts#Option#value (var249) on <var249:OptionString> */
var254 = var249->attrs[COLOR_opts__Option___value].val; /* _value on <var249:OptionString> */
var252 = var254;
RET_LABEL253:(void)0;
}
}
var255 = NULL;
if (var252 == NULL) {
var256 = 0; /* is null */
} else {
var256 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var252,var255) on <var252:nullable Object(nullable String)> */
var_other = var255;
{
var259 = ((short int (*)(val* self, val* p0))(var252->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var252, var_other) /* == on <var252:nullable String(String)>*/;
}
var260 = !var259;
var257 = var260;
goto RET_LABEL258;
RET_LABEL258:(void)0;
}
var256 = var257;
}
if (var256){
{
{ /* Inline toolcontext#ToolContext#opt_log_dir (self) on <self:ToolContext> */
var263 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_log_dir].val; /* _opt_log_dir on <self:ToolContext> */
if (unlikely(var263 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 285);
show_backtrace(1);
}
var261 = var263;
RET_LABEL262:(void)0;
}
}
{
{ /* Inline opts#Option#value (var261) on <var261:OptionString> */
var266 = var261->attrs[COLOR_opts__Option___value].val; /* _value on <var261:OptionString> */
var264 = var266;
RET_LABEL265:(void)0;
}
}
if (unlikely(var264 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 428);
show_backtrace(1);
}
{
{ /* Inline toolcontext#ToolContext#log_directory= (self,var264) on <self:ToolContext> */
self->attrs[COLOR_nit__toolcontext__ToolContext___log_directory].val = var264; /* _log_directory on <self:ToolContext> */
RET_LABEL267:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_log (self) on <self:ToolContext> */
var270 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_log].val; /* _opt_log on <self:ToolContext> */
if (unlikely(var270 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 282);
show_backtrace(1);
}
var268 = var270;
RET_LABEL269:(void)0;
}
}
{
{ /* Inline opts#Option#value (var268) on <var268:OptionBool> */
var273 = var268->attrs[COLOR_opts__Option___value].val; /* _value on <var268:OptionBool> */
var271 = var273;
RET_LABEL272:(void)0;
}
}
var274 = ((struct instance_standard__Bool*)var271)->value; /* autounbox from nullable Object to Bool */;
if (var274){
{
{ /* Inline toolcontext#ToolContext#log_directory (self) on <self:ToolContext> */
var277 = self->attrs[COLOR_nit__toolcontext__ToolContext___log_directory].val; /* _log_directory on <self:ToolContext> */
if (unlikely(var277 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _log_directory");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 102);
show_backtrace(1);
}
var275 = var277;
RET_LABEL276:(void)0;
}
}
{
standard__file___String___mkdir(var275); /* Direct call file#String#mkdir on <var275:String>*/
}
} else {
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#version for (self: ToolContext): String */
val* nit___nit__ToolContext___version(val* self) {
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
var3 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 297);
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
var7 = ((struct instance_standard__Bool*)var4)->value; /* autounbox from nullable Object to Bool */;
if (var7){
if (varonce) {
var8 = varonce;
} else {
var9 = "DUMMY_VERSION";
var10 = 13;
var11 = standard___standard__NativeString___to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
var = var8;
goto RET_LABEL;
} else {
}
{
var12 = nit__version___standard__Object___nit_version(self);
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#toolname for (self: ToolContext): String */
val* nit___nit__ToolContext___toolname(val* self) {
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
var3 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 297);
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
var7 = ((struct instance_standard__Bool*)var4)->value; /* autounbox from nullable Object to Bool */;
if (var7){
if (varonce) {
var8 = varonce;
} else {
var9 = "DUMMY_TOOL";
var10 = 10;
var11 = standard___standard__NativeString___to_s_with_length(var9, var10);
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
var15 = standard__string___Sys___program_name(var12);
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = "";
var19 = 0;
var20 = standard___standard__NativeString___to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
{
var21 = standard__file___String___basename(var15, var17);
}
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#nit_dir for (self: ToolContext): String */
val* nit___nit__ToolContext___nit_dir(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__toolcontext__ToolContext___nit_dir].val; /* _nit_dir on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _nit_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 452);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#nit_dir= for (self: ToolContext, String) */
void nit___nit__ToolContext___nit_dir_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__ToolContext___nit_dir].val = p0; /* _nit_dir on <self:ToolContext> */
RET_LABEL:;
}
/* method toolcontext#ToolContext#compute_nit_dir for (self: ToolContext): String */
val* nit___nit__ToolContext___compute_nit_dir(val* self) {
val* var /* : String */;
val* var1 /* : OptionString */;
val* var3 /* : OptionString */;
val* var4 /* : nullable Object */;
val* var6 /* : nullable Object */;
val* var_res /* var res: nullable String */;
val* var7 /* : null */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : null */;
static val* varonce;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : Array[Object] */;
long var21 /* : Int */;
val* var22 /* : NativeArray[Object] */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
val* var29 /* : String */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : null */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
val* var40 /* : Array[Object] */;
long var41 /* : Int */;
val* var42 /* : NativeArray[Object] */;
val* var43 /* : String */;
val* var44 /* : Sys */;
val* var46 /* : Sys */;
val* var47 /* : String */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : FlatString */;
val* var54 /* : Array[Object] */;
long var55 /* : Int */;
val* var56 /* : NativeArray[Object] */;
val* var57 /* : String */;
short int var58 /* : Bool */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
val* var_exe /* var exe: String */;
short int var65 /* : Bool */;
val* var66 /* : String */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : FlatString */;
val* var73 /* : String */;
short int var74 /* : Bool */;
val* var75 /* : String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : FlatString */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
long var85 /* : Int */;
val* var86 /* : FlatString */;
val* var87 /* : Array[String] */;
val* var_ps /* var ps: Array[String] */;
val* var_ /* var : Array[String] */;
val* var88 /* : ArrayIterator[nullable Object] */;
val* var_89 /* var : ArrayIterator[String] */;
short int var90 /* : Bool */;
val* var91 /* : nullable Object */;
val* var_p /* var p: String */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : FlatString */;
val* var97 /* : String */;
short int var98 /* : Bool */;
val* var99 /* : String */;
val* var101 /* : null */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
long var105 /* : Int */;
val* var106 /* : FlatString */;
{
{ /* Inline toolcontext#ToolContext#opt_nit_dir (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nit__toolcontext__ToolContext___opt_nit_dir].val; /* _opt_nit_dir on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_nit_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 288);
show_backtrace(1);
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
var7 = NULL;
if (var_res == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var7) on <var_res:nullable String> */
var_other = var7;
{
var11 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
{
var13 = nit___nit__ToolContext___check_nit_dir(self, var_res);
}
var14 = !var13;
if (var14){
var15 = NULL;
if (varonce) {
var16 = varonce;
} else {
var17 = "Fatal Error: the value of --nit-dir does not seem to be a valid base Nit directory: ";
var18 = 84;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce = var16;
}
var20 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var20 = array_instance Array[Object] */
var21 = 2;
var22 = NEW_standard__NativeArray(var21, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var22)->values[0] = (val*) var16;
((struct instance_standard__NativeArray*)var22)->values[1] = (val*) var_res;
{
((void (*)(val* self, val* p0, long p1))(var20->class->vft[COLOR_standard__array__Array__with_native]))(var20, var22, var21) /* with_native on <var20:Array[Object]>*/;
}
}
{
var23 = ((val* (*)(val* self))(var20->class->vft[COLOR_standard__string__Object__to_s]))(var20) /* to_s on <var20:Array[Object]>*/;
}
{
nit___nit__ToolContext___fatal_error(self, var15, var23); /* Direct call toolcontext#ToolContext#fatal_error on <self:ToolContext>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = "NIT_DIR";
var27 = 7;
var28 = standard___standard__NativeString___to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
{
var29 = standard__environ___String___environ(var25);
}
var_res = var29;
{
var30 = standard___standard__Text___is_empty(var_res);
}
var31 = !var30;
if (var31){
{
var32 = nit___nit__ToolContext___check_nit_dir(self, var_res);
}
var33 = !var32;
if (var33){
var34 = NULL;
if (varonce35) {
var36 = varonce35;
} else {
var37 = "Fatal Error: the value of NIT_DIR does not seem to be a valid base Nit directory: ";
var38 = 82;
var39 = standard___standard__NativeString___to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
var40 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var40 = array_instance Array[Object] */
var41 = 2;
var42 = NEW_standard__NativeArray(var41, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var42)->values[0] = (val*) var36;
((struct instance_standard__NativeArray*)var42)->values[1] = (val*) var_res;
{
((void (*)(val* self, val* p0, long p1))(var40->class->vft[COLOR_standard__array__Array__with_native]))(var40, var42, var41) /* with_native on <var40:Array[Object]>*/;
}
}
{
var43 = ((val* (*)(val* self))(var40->class->vft[COLOR_standard__string__Object__to_s]))(var40) /* to_s on <var40:Array[Object]>*/;
}
{
nit___nit__ToolContext___fatal_error(self, var34, var43); /* Direct call toolcontext#ToolContext#fatal_error on <self:ToolContext>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var46 = glob_sys;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
var47 = standard__string___Sys___program_name(var44);
}
{
var48 = standard__file___String___dirname(var47);
}
if (varonce49) {
var50 = varonce49;
} else {
var51 = "/..";
var52 = 3;
var53 = standard___standard__NativeString___to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
var54 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var54 = array_instance Array[Object] */
var55 = 2;
var56 = NEW_standard__NativeArray(var55, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var56)->values[0] = (val*) var48;
((struct instance_standard__NativeArray*)var56)->values[1] = (val*) var50;
{
((void (*)(val* self, val* p0, long p1))(var54->class->vft[COLOR_standard__array__Array__with_native]))(var54, var56, var55) /* with_native on <var54:Array[Object]>*/;
}
}
{
var57 = ((val* (*)(val* self))(var54->class->vft[COLOR_standard__string__Object__to_s]))(var54) /* to_s on <var54:Array[Object]>*/;
}
var_res = var57;
{
var58 = nit___nit__ToolContext___check_nit_dir(self, var_res);
}
if (var58){
{
var59 = standard__file___String___simplify_path(var_res);
}
var = var59;
goto RET_LABEL;
} else {
}
if (varonce60) {
var61 = varonce60;
} else {
var62 = "/proc/self/exe";
var63 = 14;
var64 = standard___standard__NativeString___to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
var_exe = var61;
{
var65 = standard__file___String___file_exists(var_exe);
}
if (var65){
{
var66 = standard__file___String___realpath(var_exe);
}
var_res = var66;
{
var67 = standard__file___String___dirname(var_res);
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = "..";
var71 = 2;
var72 = standard___standard__NativeString___to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
{
var73 = standard__file___String___join_path(var67, var69);
}
var_res = var73;
{
var74 = nit___nit__ToolContext___check_nit_dir(self, var_res);
}
if (var74){
{
var75 = standard__file___String___simplify_path(var_res);
}
var = var75;
goto RET_LABEL;
} else {
}
} else {
}
if (varonce76) {
var77 = varonce76;
} else {
var78 = "PATH";
var79 = 4;
var80 = standard___standard__NativeString___to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
{
var81 = standard__environ___String___environ(var77);
}
if (varonce82) {
var83 = varonce82;
} else {
var84 = ":";
var85 = 1;
var86 = standard___standard__NativeString___to_s_with_length(var84, var85);
var83 = var86;
varonce82 = var83;
}
{
var87 = standard__string_search___Text___split(var81, var83);
}
var_ps = var87;
var_ = var_ps;
{
var88 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_89 = var88;
for(;;) {
{
var90 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_89);
}
if (var90){
{
var91 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_89);
}
var_p = var91;
if (varonce92) {
var93 = varonce92;
} else {
var94 = "..";
var95 = 2;
var96 = standard___standard__NativeString___to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
{
var97 = standard__file___String____47d(var_p, var93);
}
var_res = var97;
{
var98 = nit___nit__ToolContext___check_nit_dir(self, var_res);
}
if (var98){
{
var99 = standard__file___String___simplify_path(var_res);
}
var = var99;
goto RET_LABEL;
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_89); /* Direct call array#ArrayIterator#next on <var_89:ArrayIterator[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_89) on <var_89:ArrayIterator[String]> */
RET_LABEL100:(void)0;
}
}
var101 = NULL;
if (varonce102) {
var103 = varonce102;
} else {
var104 = "Fatal Error: Cannot locate a valid base nit directory. It is quite unexpected. Try to set the environment variable `NIT_DIR` or to use the `--nit-dir` option.";
var105 = 158;
var106 = standard___standard__NativeString___to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
{
nit___nit__ToolContext___fatal_error(self, var101, var103); /* Direct call toolcontext#ToolContext#fatal_error on <self:ToolContext>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 495);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#check_nit_dir for (self: ToolContext, String): Bool */
short int nit___nit__ToolContext___check_nit_dir(val* self, val* p0) {
short int var /* : Bool */;
val* var_res /* var res: String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : FlatString */;
val* var7 /* : Array[Object] */;
long var8 /* : Int */;
val* var9 /* : NativeArray[Object] */;
val* var10 /* : String */;
short int var11 /* : Bool */;
var_res = p0;
{
var2 = standard__file___String___file_exists(var_res);
}
var_ = var2;
if (var2){
if (varonce) {
var3 = varonce;
} else {
var4 = "/src/nit.nit";
var5 = 12;
var6 = standard___standard__NativeString___to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var7 = array_instance Array[Object] */
var8 = 2;
var9 = NEW_standard__NativeArray(var8, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var9)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var9)->values[1] = (val*) var3;
{
((void (*)(val* self, val* p0, long p1))(var7->class->vft[COLOR_standard__array__Array__with_native]))(var7, var9, var8) /* with_native on <var7:Array[Object]>*/;
}
}
{
var10 = ((val* (*)(val* self))(var7->class->vft[COLOR_standard__string__Object__to_s]))(var7) /* to_s on <var7:Array[Object]>*/;
}
{
var11 = standard__file___String___file_exists(var10);
}
var1 = var11;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method toolcontext#BashCompletion#toolcontext for (self: BashCompletion): ToolContext */
val* nit___nit__BashCompletion___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nit__toolcontext__BashCompletion___toolcontext].val; /* _toolcontext on <self:BashCompletion> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 524);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#BashCompletion#toolcontext= for (self: BashCompletion, ToolContext) */
void nit___nit__BashCompletion___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nit__toolcontext__BashCompletion___toolcontext].val = p0; /* _toolcontext on <self:BashCompletion> */
RET_LABEL:;
}
/* method toolcontext#BashCompletion#extract_options_names for (self: BashCompletion): Array[String] */
val* nit___nit__BashCompletion___extract_options_names(val* self) {
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
var1 = NEW_standard__Array(&type_standard__Array__standard__String);
{
standard___standard__Array___standard__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[String]>*/
}
var_names = var1;
{
{ /* Inline toolcontext#BashCompletion#toolcontext (self) on <self:BashCompletion> */
var4 = self->attrs[COLOR_nit__toolcontext__BashCompletion___toolcontext].val; /* _toolcontext on <self:BashCompletion> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 524);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#option_context (var2) on <var2:ToolContext> */
var7 = var2->attrs[COLOR_nit__toolcontext__ToolContext___option_context].val; /* _option_context on <var2:ToolContext> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 270);
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
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 264);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_ = var8;
{
var11 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_);
}
var_12 = var11;
for(;;) {
{
var13 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_12);
}
if (var13){
{
var14 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_12);
}
var_option = var14;
{
{ /* Inline opts#Option#names (var_option) on <var_option:Option> */
var17 = var_option->attrs[COLOR_opts__Option___names].val; /* _names on <var_option:Option> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 19);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_18 = var15;
{
var19 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_18);
}
var_20 = var19;
for(;;) {
{
var21 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_20);
}
if (var21){
{
var22 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_20);
}
var_name = var22;
if (varonce) {
var23 = varonce;
} else {
var24 = "--";
var25 = 2;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce = var23;
}
{
var27 = standard___standard__Text___has_prefix(var_name, var23);
}
if (var27){
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_names, var_name); /* Direct call array#Array#add on <var_names:Array[String]>*/
}
} else {
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_20); /* Direct call array#ArrayIterator#next on <var_20:ArrayIterator[String]>*/
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
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_12); /* Direct call array#ArrayIterator#next on <var_12:ArrayIterator[Option]>*/
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
/* method toolcontext#BashCompletion#rendering for (self: BashCompletion) */
void nit___nit__BashCompletion___template__Template__rendering(val* self) {
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
var2 = self->attrs[COLOR_nit__toolcontext__BashCompletion___toolcontext].val; /* _toolcontext on <self:BashCompletion> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 524);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nit___nit__ToolContext___toolname(var);
}
var_name = var3;
{
var4 = nit___nit__BashCompletion___extract_options_names(self);
}
var_option_names = var4;
if (varonce) {
var5 = varonce;
} else {
var6 = "# generated bash completion file for ";
var7 = 37;
var8 = standard___standard__NativeString___to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
if (varonce9) {
var10 = varonce9;
} else {
var11 = " ";
var12 = 1;
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
{
{ /* Inline toolcontext#BashCompletion#toolcontext (self) on <self:BashCompletion> */
var16 = self->attrs[COLOR_nit__toolcontext__BashCompletion___toolcontext].val; /* _toolcontext on <self:BashCompletion> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__toolcontext, 524);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = nit___nit__ToolContext___version(var14);
}
var18 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 4;
var20 = NEW_standard__NativeArray(var19, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var20)->values[0] = (val*) var5;
((struct instance_standard__NativeArray*)var20)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var20)->values[2] = (val*) var10;
((struct instance_standard__NativeArray*)var20)->values[3] = (val*) var17;
{
((void (*)(val* self, val* p0, long p1))(var18->class->vft[COLOR_standard__array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
}
{
var21 = ((val* (*)(val* self))(var18->class->vft[COLOR_standard__string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
}
{
template___template__Template___addn(self, var21); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "_";
var25 = 1;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = "()";
var30 = 2;
var31 = standard___standard__NativeString___to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 3;
var34 = NEW_standard__NativeArray(var33, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var34)->values[0] = (val*) var23;
((struct instance_standard__NativeArray*)var34)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var34)->values[2] = (val*) var28;
{
((void (*)(val* self, val* p0, long p1))(var32->class->vft[COLOR_standard__array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
}
{
var35 = ((val* (*)(val* self))(var32->class->vft[COLOR_standard__string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
}
{
template___template__Template___addn(self, var35); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = "{";
var39 = 1;
var40 = standard___standard__NativeString___to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
{
template___template__Template___addn(self, var37); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = "\11local cur prev opts";
var44 = 20;
var45 = standard___standard__NativeString___to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
{
template___template__Template___addn(self, var42); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce46) {
var47 = varonce46;
} else {
var48 = "\11COMPREPLY=()";
var49 = 13;
var50 = standard___standard__NativeString___to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
{
template___template__Template___addn(self, var47); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = "\11cur=\"${COMP_WORDS[COMP_CWORD]}\"";
var54 = 32;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
{
template___template__Template___addn(self, var52); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = "\11prev=\"${COMP_WORDS[COMP_CWORD-1]}\"";
var59 = 35;
var60 = standard___standard__NativeString___to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
{
template___template__Template___addn(self, var57); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
{
var61 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__is_empty(var_option_names);
}
var62 = !var61;
if (var62){
if (varonce63) {
var64 = varonce63;
} else {
var65 = "\11opts=\"";
var66 = 7;
var67 = standard___standard__NativeString___to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = " ";
var71 = 1;
var72 = standard___standard__NativeString___to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
{
var73 = standard__string___Collection___join(var_option_names, var69);
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = "\"";
var77 = 1;
var78 = standard___standard__NativeString___to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
var79 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var79 = array_instance Array[Object] */
var80 = 3;
var81 = NEW_standard__NativeArray(var80, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var81)->values[0] = (val*) var64;
((struct instance_standard__NativeArray*)var81)->values[1] = (val*) var73;
((struct instance_standard__NativeArray*)var81)->values[2] = (val*) var75;
{
((void (*)(val* self, val* p0, long p1))(var79->class->vft[COLOR_standard__array__Array__with_native]))(var79, var81, var80) /* with_native on <var79:Array[Object]>*/;
}
}
{
var82 = ((val* (*)(val* self))(var79->class->vft[COLOR_standard__string__Object__to_s]))(var79) /* to_s on <var79:Array[Object]>*/;
}
{
template___template__Template___addn(self, var82); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce83) {
var84 = varonce83;
} else {
var85 = "\11if [[ ${cur} == -* ]] ; then";
var86 = 29;
var87 = standard___standard__NativeString___to_s_with_length(var85, var86);
var84 = var87;
varonce83 = var84;
}
{
template___template__Template___addn(self, var84); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce88) {
var89 = varonce88;
} else {
var90 = "\11\11COMPREPLY=( $(compgen -W \"${opts}\" -- ${cur}) )";
var91 = 49;
var92 = standard___standard__NativeString___to_s_with_length(var90, var91);
var89 = var92;
varonce88 = var89;
}
{
template___template__Template___addn(self, var89); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce93) {
var94 = varonce93;
} else {
var95 = "\11\11return 0";
var96 = 10;
var97 = standard___standard__NativeString___to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
{
template___template__Template___addn(self, var94); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce98) {
var99 = varonce98;
} else {
var100 = "\11fi";
var101 = 3;
var102 = standard___standard__NativeString___to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
{
template___template__Template___addn(self, var99); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
} else {
}
if (varonce103) {
var104 = varonce103;
} else {
var105 = "} &&";
var106 = 4;
var107 = standard___standard__NativeString___to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
{
template___template__Template___addn(self, var104); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce108) {
var109 = varonce108;
} else {
var110 = "complete -o default -F _";
var111 = 24;
var112 = standard___standard__NativeString___to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = " ";
var116 = 1;
var117 = standard___standard__NativeString___to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
var118 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var118 = array_instance Array[Object] */
var119 = 4;
var120 = NEW_standard__NativeArray(var119, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var120)->values[0] = (val*) var109;
((struct instance_standard__NativeArray*)var120)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var120)->values[2] = (val*) var114;
((struct instance_standard__NativeArray*)var120)->values[3] = (val*) var_name;
{
((void (*)(val* self, val* p0, long p1))(var118->class->vft[COLOR_standard__array__Array__with_native]))(var118, var120, var119) /* with_native on <var118:Array[Object]>*/;
}
}
{
var121 = ((val* (*)(val* self))(var118->class->vft[COLOR_standard__string__Object__to_s]))(var118) /* to_s on <var118:Array[Object]>*/;
}
{
template___template__Template___addn(self, var121); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
RET_LABEL:;
}
/* method toolcontext#BashCompletion#init for (self: BashCompletion) */
void nit___nit__BashCompletion___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__BashCompletion___standard__kernel__Object__init]))(self) /* init on <self:BashCompletion>*/;
}
RET_LABEL:;
}
