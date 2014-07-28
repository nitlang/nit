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
/* method toolcontext#Message#text for (self: Message): String */
val* toolcontext__Message__text(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 33);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 33);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 35);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 40);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 40);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 33);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 33);
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
val* var_red /* var red: String */;
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
val* var_bred /* var bred: String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[Object] */;
val* var32 /* : Object */;
val* var33 /* : String */;
val* var_green /* var green: String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
val* var39 /* : Array[Object] */;
long var40 /* : Int */;
val* var41 /* : NativeArray[Object] */;
val* var42 /* : Object */;
val* var43 /* : String */;
val* var_yellow /* var yellow: String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
val* var49 /* : Array[Object] */;
long var50 /* : Int */;
val* var51 /* : NativeArray[Object] */;
val* var52 /* : Object */;
val* var53 /* : String */;
val* var_def /* var def: String */;
val* var54 /* : nullable Location */;
val* var56 /* : nullable Location */;
val* var_l /* var l: nullable Location */;
val* var57 /* : null */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
val* var60 /* : String */;
val* var62 /* : String */;
val* var63 /* : nullable SourceFile */;
val* var65 /* : nullable SourceFile */;
val* var66 /* : null */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
val* var78 /* : String */;
val* var80 /* : String */;
val* var81 /* : Array[Object] */;
long var82 /* : Int */;
val* var83 /* : NativeArray[Object] */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
val* var90 /* : String */;
val* var92 /* : String */;
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
val* var103 /* : String */;
val* var104 /* : Array[Object] */;
long var105 /* : Int */;
val* var106 /* : NativeArray[Object] */;
val* var107 /* : String */;
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
var6 = "[0;31m";
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
var_red = var13;
if (varonce14) {
var15 = varonce14;
} else {
var16 = "[1;31m";
var17 = 6;
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
var_bred = var23;
if (varonce24) {
var25 = varonce24;
} else {
var26 = "[0;32m";
var27 = 6;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 2;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraykernel__Object);
var32 = BOX_kernel__Char(var_esc); /* autobox from Char to Object */
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var32;
((struct instance_array__NativeArray*)var31)->values[1] = (val*) var25;
{
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
}
}
{
var33 = ((val* (*)(val*))(var29->class->vft[COLOR_string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
}
var_green = var33;
if (varonce34) {
var35 = varonce34;
} else {
var36 = "[0;33m";
var37 = 6;
var38 = string__NativeString__to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
var39 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var39 = array_instance Array[Object] */
var40 = 2;
var41 = NEW_array__NativeArray(var40, &type_array__NativeArraykernel__Object);
var42 = BOX_kernel__Char(var_esc); /* autobox from Char to Object */
((struct instance_array__NativeArray*)var41)->values[0] = (val*) var42;
((struct instance_array__NativeArray*)var41)->values[1] = (val*) var35;
{
((void (*)(val*, val*, long))(var39->class->vft[COLOR_array__Array__with_native]))(var39, var41, var40) /* with_native on <var39:Array[Object]>*/;
}
}
{
var43 = ((val* (*)(val*))(var39->class->vft[COLOR_string__Object__to_s]))(var39) /* to_s on <var39:Array[Object]>*/;
}
var_yellow = var43;
if (varonce44) {
var45 = varonce44;
} else {
var46 = "[0m";
var47 = 3;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
var49 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var49 = array_instance Array[Object] */
var50 = 2;
var51 = NEW_array__NativeArray(var50, &type_array__NativeArraykernel__Object);
var52 = BOX_kernel__Char(var_esc); /* autobox from Char to Object */
((struct instance_array__NativeArray*)var51)->values[0] = (val*) var52;
((struct instance_array__NativeArray*)var51)->values[1] = (val*) var45;
{
((void (*)(val*, val*, long))(var49->class->vft[COLOR_array__Array__with_native]))(var49, var51, var50) /* with_native on <var49:Array[Object]>*/;
}
}
{
var53 = ((val* (*)(val*))(var49->class->vft[COLOR_string__Object__to_s]))(var49) /* to_s on <var49:Array[Object]>*/;
}
var_def = var53;
{
{ /* Inline toolcontext#Message#location (self) on <self:Message> */
var56 = self->attrs[COLOR_toolcontext__Message___location].val; /* _location on <self:Message> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
var_l = var54;
var57 = NULL;
if (var_l == NULL) {
var58 = 1; /* is null */
} else {
var58 = 0; /* arg is null but recv is not */
}
if (0) {
var59 = location__Location___61d_61d(var_l, var57);
var58 = var59;
}
if (var58){
{
{ /* Inline toolcontext#Message#text (self) on <self:Message> */
var62 = self->attrs[COLOR_toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 33);
show_backtrace(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
var = var60;
goto RET_LABEL;
} else {
{
{ /* Inline location#Location#file (var_l) on <var_l:nullable Location(Location)> */
var65 = var_l->attrs[COLOR_location__Location___file].val; /* _file on <var_l:nullable Location(Location)> */
var63 = var65;
RET_LABEL64:(void)0;
}
}
var66 = NULL;
if (var63 == NULL) {
var67 = 1; /* is null */
} else {
var67 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var63,var66) on <var63:nullable SourceFile> */
var_other = var66;
{
{ /* Inline kernel#Object#is_same_instance (var63,var_other) on <var63:nullable SourceFile(SourceFile)> */
var72 = var63 == var_other;
var70 = var72;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
var67 = var68;
}
if (var67){
if (varonce73) {
var74 = varonce73;
} else {
var75 = ": ";
var76 = 2;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
{
{ /* Inline toolcontext#Message#text (self) on <self:Message> */
var80 = self->attrs[COLOR_toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 33);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
var81 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var81 = array_instance Array[Object] */
var82 = 5;
var83 = NEW_array__NativeArray(var82, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var83)->values[0] = (val*) var_yellow;
((struct instance_array__NativeArray*)var83)->values[1] = (val*) var_l;
((struct instance_array__NativeArray*)var83)->values[2] = (val*) var_def;
((struct instance_array__NativeArray*)var83)->values[3] = (val*) var74;
((struct instance_array__NativeArray*)var83)->values[4] = (val*) var78;
{
((void (*)(val*, val*, long))(var81->class->vft[COLOR_array__Array__with_native]))(var81, var83, var82) /* with_native on <var81:Array[Object]>*/;
}
}
{
var84 = ((val* (*)(val*))(var81->class->vft[COLOR_string__Object__to_s]))(var81) /* to_s on <var81:Array[Object]>*/;
}
var = var84;
goto RET_LABEL;
} else {
if (varonce85) {
var86 = varonce85;
} else {
var87 = ": ";
var88 = 2;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
{
{ /* Inline toolcontext#Message#text (self) on <self:Message> */
var92 = self->attrs[COLOR_toolcontext__Message___text].val; /* _text on <self:Message> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _text");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 33);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
if (varonce93) {
var94 = varonce93;
} else {
var95 = "\n";
var96 = 1;
var97 = string__NativeString__to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
if (varonce98) {
var99 = varonce98;
} else {
var100 = "1;31";
var101 = 4;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
{
var103 = location__Location__colored_line(var_l, var99);
}
var104 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var104 = array_instance Array[Object] */
var105 = 7;
var106 = NEW_array__NativeArray(var105, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var106)->values[0] = (val*) var_yellow;
((struct instance_array__NativeArray*)var106)->values[1] = (val*) var_l;
((struct instance_array__NativeArray*)var106)->values[2] = (val*) var_def;
((struct instance_array__NativeArray*)var106)->values[3] = (val*) var86;
((struct instance_array__NativeArray*)var106)->values[4] = (val*) var90;
((struct instance_array__NativeArray*)var106)->values[5] = (val*) var94;
((struct instance_array__NativeArray*)var106)->values[6] = (val*) var103;
{
((void (*)(val*, val*, long))(var104->class->vft[COLOR_array__Array__with_native]))(var104, var106, var105) /* with_native on <var104:Array[Object]>*/;
}
}
{
var107 = ((val* (*)(val*))(var104->class->vft[COLOR_string__Object__to_s]))(var104) /* to_s on <var104:Array[Object]>*/;
}
var = var107;
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
/* method toolcontext#Message#init for (self: Message, nullable Location, String) */
void toolcontext__Message__init(val* self, val* p0, val* p1) {
self->attrs[COLOR_toolcontext__Message___location].val = p0; /* _location on <self:Message> */
self->attrs[COLOR_toolcontext__Message___text].val = p1; /* _text on <self:Message> */
RET_LABEL:;
}
/* method toolcontext#Message#init for (self: Object, nullable Location, String) */
void VIRTUAL_toolcontext__Message__init(val* self, val* p0, val* p1) {
{ /* Inline toolcontext#Message#init (self,p0,p1) on <self:Object(Message)> */
self->attrs[COLOR_toolcontext__Message___location].val = p0; /* _location on <self:Object(Message)> */
self->attrs[COLOR_toolcontext__Message___text].val = p1; /* _text on <self:Object(Message)> */
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 81);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 81);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 84);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 84);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#message_sorter for (self: ToolContext): ComparableSorter[Message] */
val* toolcontext__ToolContext__message_sorter(val* self) {
val* var /* : ComparableSorter[Message] */;
val* var1 /* : ComparableSorter[Message] */;
var1 = self->attrs[COLOR_toolcontext__ToolContext___message_sorter].val; /* _message_sorter on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message_sorter");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 86);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method toolcontext#ToolContext#message_sorter for (self: Object): ComparableSorter[Message] */
val* VIRTUAL_toolcontext__ToolContext__message_sorter(val* self) {
val* var /* : ComparableSorter[Message] */;
val* var1 /* : ComparableSorter[Message] */;
val* var3 /* : ComparableSorter[Message] */;
{ /* Inline toolcontext#ToolContext#message_sorter (self) on <self:Object(ToolContext)> */
var3 = self->attrs[COLOR_toolcontext__ToolContext___message_sorter].val; /* _message_sorter on <self:Object(ToolContext)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message_sorter");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 86);
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
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : ComparableSorter[Message] */;
val* var11 /* : ComparableSorter[Message] */;
val* var12 /* : Array[Message] */;
val* var14 /* : Array[Message] */;
val* var15 /* : Array[Message] */;
val* var17 /* : Array[Message] */;
val* var18 /* : ArrayIterator[nullable Object] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_m /* var m: Message */;
val* var21 /* : OptionBool */;
val* var23 /* : OptionBool */;
val* var24 /* : nullable Object */;
val* var26 /* : nullable Object */;
short int var27 /* : Bool */;
val* var28 /* : Sys */;
val* var30 /* : Sys */;
val* var31 /* : OStream */;
val* var33 /* : OStream */;
static val* varonce;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
val* var38 /* : Array[Object] */;
long var39 /* : Int */;
val* var40 /* : NativeArray[Object] */;
val* var41 /* : String */;
val* var42 /* : Sys */;
val* var44 /* : Sys */;
val* var45 /* : OStream */;
val* var47 /* : OStream */;
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
val* var58 /* : Array[Message] */;
val* var60 /* : Array[Message] */;
long var61 /* : Int */;
long var63 /* : Int */;
long var64 /* : Int */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
short int var71 /* : Bool */;
long var72 /* : Int */;
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 84);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = array__AbstractArrayRead__length(var);
}
var4 = 0;
{
{ /* Inline kernel#Int#> (var3,var4) on <var3:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var8 = var3 > var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
{
{ /* Inline toolcontext#ToolContext#message_sorter (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_toolcontext__ToolContext___message_sorter].val; /* _message_sorter on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message_sorter");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 86);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var14 = self->attrs[COLOR_toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 84);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
sorter__Comparator__sort(var9, var12); /* Direct call sorter#Comparator#sort on <var9:ComparableSorter[Message]>*/
}
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var17 = self->attrs[COLOR_toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 84);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = array__AbstractArrayRead__iterator(var15);
}
for(;;) {
{
var19 = array__ArrayIterator__is_ok(var18);
}
if(!var19) break;
{
var20 = array__ArrayIterator__item(var18);
}
var_m = var20;
{
{ /* Inline toolcontext#ToolContext#opt_no_color (self) on <self:ToolContext> */
var23 = self->attrs[COLOR_toolcontext__ToolContext___opt_no_color].val; /* _opt_no_color on <self:ToolContext> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_color");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 196);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline opts#Option#value (var21) on <var21:OptionBool> */
var26 = var21->attrs[COLOR_opts__Option___value].val; /* _value on <var21:OptionBool> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
var27 = ((struct instance_kernel__Bool*)var24)->value; /* autounbox from nullable Object to Bool */;
if (var27){
{
{ /* Inline kernel#Object#sys (self) on <self:ToolContext> */
var30 = glob_sys;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline file#Sys#stderr (var28) on <var28:Sys> */
var33 = var28->attrs[COLOR_file__Sys___stderr].val; /* _stderr on <var28:Sys> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stderr");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 533);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (varonce) {
var34 = varonce;
} else {
var35 = "\n";
var36 = 1;
var37 = string__NativeString__to_s_with_length(var35, var36);
var34 = var37;
varonce = var34;
}
var38 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var38 = array_instance Array[Object] */
var39 = 2;
var40 = NEW_array__NativeArray(var39, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var40)->values[0] = (val*) var_m;
((struct instance_array__NativeArray*)var40)->values[1] = (val*) var34;
{
((void (*)(val*, val*, long))(var38->class->vft[COLOR_array__Array__with_native]))(var38, var40, var39) /* with_native on <var38:Array[Object]>*/;
}
}
{
var41 = ((val* (*)(val*))(var38->class->vft[COLOR_string__Object__to_s]))(var38) /* to_s on <var38:Array[Object]>*/;
}
{
file__OFStream__write(var31, var41); /* Direct call file#OFStream#write on <var31:OStream>*/
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
{ /* Inline file#Sys#stderr (var42) on <var42:Sys> */
var47 = var42->attrs[COLOR_file__Sys___stderr].val; /* _stderr on <var42:Sys> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stderr");
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 533);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = toolcontext__Message__to_color_string(var_m);
}
if (varonce49) {
var50 = varonce49;
} else {
var51 = "\n";
var52 = 1;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
var54 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var54 = array_instance Array[Object] */
var55 = 2;
var56 = NEW_array__NativeArray(var55, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var56)->values[0] = (val*) var48;
((struct instance_array__NativeArray*)var56)->values[1] = (val*) var50;
{
((void (*)(val*, val*, long))(var54->class->vft[COLOR_array__Array__with_native]))(var54, var56, var55) /* with_native on <var54:Array[Object]>*/;
}
}
{
var57 = ((val* (*)(val*))(var54->class->vft[COLOR_string__Object__to_s]))(var54) /* to_s on <var54:Array[Object]>*/;
}
{
file__OFStream__write(var45, var57); /* Direct call file#OFStream#write on <var45:OStream>*/
}
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var18); /* Direct call array#ArrayIterator#next on <var18:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var60 = self->attrs[COLOR_toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 84);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
array__AbstractArray__clear(var58); /* Direct call array#AbstractArray#clear on <var58:Array[Message]>*/
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var63 = self->attrs[COLOR_toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
var64 = 0;
{
{ /* Inline kernel#Int#> (var61,var64) on <var61:Int> */
/* Covariant cast for argument 0 (i) <var64:Int> isa OTHER */
/* <var64:Int> isa OTHER */
var67 = 1; /* easy <var64:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 327);
show_backtrace(1);
}
var71 = var61 > var64;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
if (var65){
var72 = 1;
{
{ /* Inline kernel#Object#exit (self,var72) on <self:ToolContext> */
exit(var72);
RET_LABEL73:(void)0;
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
/* method toolcontext#ToolContext#error for (self: ToolContext, nullable Location, String) */
void toolcontext__ToolContext__error(val* self, val* p0, val* p1) {
val* var_l /* var l: nullable Location */;
val* var_s /* var s: String */;
val* var /* : Array[Message] */;
val* var2 /* : Array[Message] */;
val* var3 /* : Message */;
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 84);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = NEW_toolcontext__Message(&type_toolcontext__Message);
{
{ /* Inline toolcontext#Message#init (var3,var_l,var_s) on <var3:Message> */
var3->attrs[COLOR_toolcontext__Message___location].val = var_l; /* _location on <var3:Message> */
var3->attrs[COLOR_toolcontext__Message___text].val = var_s; /* _text on <var3:Message> */
RET_LABEL4:(void)0;
}
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 193);
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
/* method toolcontext#ToolContext#warning for (self: ToolContext, nullable Location, String) */
void toolcontext__ToolContext__warning(val* self, val* p0, val* p1) {
val* var_l /* var l: nullable Location */;
val* var_s /* var s: String */;
val* var /* : OptionCount */;
val* var2 /* : OptionCount */;
val* var3 /* : nullable Object */;
val* var5 /* : nullable Object */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
long var11 /* : Int */;
val* var12 /* : Array[Message] */;
val* var14 /* : Array[Message] */;
val* var15 /* : Message */;
long var17 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
long var21 /* : Int */;
short int var23 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var24 /* : Int */;
val* var26 /* : OptionBool */;
val* var28 /* : OptionBool */;
val* var29 /* : nullable Object */;
val* var31 /* : nullable Object */;
short int var32 /* : Bool */;
var_l = p0;
var_s = p1;
{
{ /* Inline toolcontext#ToolContext#opt_warn (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 169);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline opts#Option#value (var) on <var:OptionCount> */
var5 = var->attrs[COLOR_opts__Option___value].val; /* _value on <var:OptionCount> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var6 = 0;
{
{ /* Inline kernel#Int#== (var3,var6) on <var3:nullable Object(Int)> */
var10 = (var3 != NULL) && (var3->class == &class_kernel__Int);
if (var10) {
var11 = ((struct instance_kernel__Int*)var3)->value; /* autounbox from nullable Object to Int */;
var10 = (var11 == var6);
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
goto RET_LABEL;
} else {
}
{
{ /* Inline toolcontext#ToolContext#messages (self) on <self:ToolContext> */
var14 = self->attrs[COLOR_toolcontext__ToolContext___messages].val; /* _messages on <self:ToolContext> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _messages");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 84);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = NEW_toolcontext__Message(&type_toolcontext__Message);
{
{ /* Inline toolcontext#Message#init (var15,var_l,var_s) on <var15:Message> */
var15->attrs[COLOR_toolcontext__Message___location].val = var_l; /* _location on <var15:Message> */
var15->attrs[COLOR_toolcontext__Message___text].val = var_s; /* _text on <var15:Message> */
RET_LABEL16:(void)0;
}
}
{
array__Array__add(var12, var15); /* Direct call array#Array#add on <var12:Array[Message]>*/
}
{
{ /* Inline toolcontext#ToolContext#warning_count (self) on <self:ToolContext> */
var19 = self->attrs[COLOR_toolcontext__ToolContext___warning_count].l; /* _warning_count on <self:ToolContext> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var20 = 1;
{
{ /* Inline kernel#Int#+ (var17,var20) on <var17:Int> */
/* Covariant cast for argument 0 (i) <var20:Int> isa OTHER */
/* <var20:Int> isa OTHER */
var23 = 1; /* easy <var20:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var24 = var17 + var20;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#warning_count= (self,var21) on <self:ToolContext> */
self->attrs[COLOR_toolcontext__ToolContext___warning_count].l = var21; /* _warning_count on <self:ToolContext> */
RET_LABEL25:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_stop_on_first_error (self) on <self:ToolContext> */
var28 = self->attrs[COLOR_toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 193);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline opts#Option#value (var26) on <var26:OptionBool> */
var31 = var26->attrs[COLOR_opts__Option___value].val; /* _value on <var26:OptionBool> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
var32 = ((struct instance_kernel__Bool*)var29)->value; /* autounbox from nullable Object to Bool */;
if (var32){
{
toolcontext__ToolContext__check_errors(self); /* Direct call toolcontext#ToolContext#check_errors on <self:ToolContext>*/
}
} else {
}
RET_LABEL:;
}
/* method toolcontext#ToolContext#warning for (self: Object, nullable Location, String) */
void VIRTUAL_toolcontext__ToolContext__warning(val* self, val* p0, val* p1) {
toolcontext__ToolContext__warning(self, p0, p1); /* Direct call toolcontext#ToolContext#warning on <self:Object(ToolContext)>*/
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 324);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 169);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 169);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 172);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 172);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 175);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 175);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 178);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 178);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 181);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 181);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 184);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 184);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 187);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 187);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 190);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 190);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 193);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 193);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 196);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 196);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 199);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 199);
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
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : OptionBool */;
val* var14 /* : OptionBool */;
val* var15 /* : OptionBool */;
val* var17 /* : OptionBool */;
val* var18 /* : OptionString */;
val* var20 /* : OptionString */;
val* var21 /* : OptionBool */;
val* var23 /* : OptionBool */;
val* var24 /* : OptionBool */;
val* var26 /* : OptionBool */;
val* var27 /* : OptionBool */;
val* var29 /* : OptionBool */;
val* var30 /* : OptionCount */;
val* var32 /* : OptionCount */;
val* var33 /* : OptionBool */;
val* var35 /* : OptionBool */;
val* var36 /* : Array[Option] */;
long var37 /* : Int */;
val* var38 /* : NativeArray[Option] */;
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 169);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_quiet (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_toolcontext__ToolContext___opt_quiet].val; /* _opt_quiet on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_quiet");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 172);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_stop_on_first_error (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_toolcontext__ToolContext___opt_stop_on_first_error].val; /* _opt_stop_on_first_error on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_stop_on_first_error");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 193);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_no_color (self) on <self:ToolContext> */
var14 = self->attrs[COLOR_toolcontext__ToolContext___opt_no_color].val; /* _opt_no_color on <self:ToolContext> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_color");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 196);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_log (self) on <self:ToolContext> */
var17 = self->attrs[COLOR_toolcontext__ToolContext___opt_log].val; /* _opt_log on <self:ToolContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 175);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_log_dir (self) on <self:ToolContext> */
var20 = self->attrs[COLOR_toolcontext__ToolContext___opt_log_dir].val; /* _opt_log_dir on <self:ToolContext> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log_dir");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 178);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_help (self) on <self:ToolContext> */
var23 = self->attrs[COLOR_toolcontext__ToolContext___opt_help].val; /* _opt_help on <self:ToolContext> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_help");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 181);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_version (self) on <self:ToolContext> */
var26 = self->attrs[COLOR_toolcontext__ToolContext___opt_version].val; /* _opt_version on <self:ToolContext> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_version");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 184);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_set_dummy_tool (self) on <self:ToolContext> */
var29 = self->attrs[COLOR_toolcontext__ToolContext___opt_set_dummy_tool].val; /* _opt_set_dummy_tool on <self:ToolContext> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_set_dummy_tool");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 187);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_verbose (self) on <self:ToolContext> */
var32 = self->attrs[COLOR_toolcontext__ToolContext___opt_verbose].val; /* _opt_verbose on <self:ToolContext> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_verbose");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 190);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_bash_completion (self) on <self:ToolContext> */
var35 = self->attrs[COLOR_toolcontext__ToolContext___opt_bash_completion].val; /* _opt_bash_completion on <self:ToolContext> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_bash_completion");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 199);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
var36 = NEW_array__Array(&type_array__Arrayopts__Option);
{ /* var36 = array_instance Array[Option] */
var37 = 11;
var38 = NEW_array__NativeArray(var37, &type_array__NativeArrayopts__Option);
((struct instance_array__NativeArray*)var38)->values[0] = (val*) var3;
((struct instance_array__NativeArray*)var38)->values[1] = (val*) var6;
((struct instance_array__NativeArray*)var38)->values[2] = (val*) var9;
((struct instance_array__NativeArray*)var38)->values[3] = (val*) var12;
((struct instance_array__NativeArray*)var38)->values[4] = (val*) var15;
((struct instance_array__NativeArray*)var38)->values[5] = (val*) var18;
((struct instance_array__NativeArray*)var38)->values[6] = (val*) var21;
((struct instance_array__NativeArray*)var38)->values[7] = (val*) var24;
((struct instance_array__NativeArray*)var38)->values[8] = (val*) var27;
((struct instance_array__NativeArray*)var38)->values[9] = (val*) var30;
((struct instance_array__NativeArray*)var38)->values[10] = (val*) var33;
{
((void (*)(val*, val*, long))(var36->class->vft[COLOR_array__Array__with_native]))(var36, var38, var37) /* with_native on <var36:Array[Option]>*/;
}
}
{
opts__OptionContext__add_option(var, var36); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 210);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 210);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 210);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
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
val* var45 /* : OptionContext */;
val* var47 /* : OptionContext */;
val* var48 /* : Array[String] */;
val* var_errors /* var errors: Array[String] */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : ArrayIterator[nullable Object] */;
short int var52 /* : Bool */;
val* var53 /* : nullable Object */;
val* var_e /* var e: String */;
static val* varonce;
val* var54 /* : String */;
char* var55 /* : NativeString */;
long var56 /* : Int */;
val* var57 /* : FlatString */;
val* var58 /* : Array[Object] */;
long var59 /* : Int */;
val* var60 /* : NativeArray[Object] */;
val* var61 /* : String */;
val* var62 /* : String */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
long var70 /* : Int */;
short int var72 /* : Bool */;
val* var73 /* : OptionContext */;
val* var75 /* : OptionContext */;
val* var76 /* : Array[String] */;
val* var78 /* : Array[String] */;
short int var79 /* : Bool */;
short int var_ /* var : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
short int var83 /* : Bool */;
val* var84 /* : String */;
val* var86 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : NativeString */;
long var90 /* : Int */;
val* var91 /* : FlatString */;
long var92 /* : Int */;
val* var94 /* : OptionCount */;
val* var96 /* : OptionCount */;
val* var97 /* : nullable Object */;
val* var99 /* : nullable Object */;
long var101 /* : Int */;
val* var102 /* : OptionBool */;
val* var104 /* : OptionBool */;
val* var105 /* : nullable Object */;
val* var107 /* : nullable Object */;
short int var108 /* : Bool */;
val* var109 /* : OptionCount */;
val* var111 /* : OptionCount */;
long var112 /* : Int */;
short int var114 /* : Bool */;
int cltype115;
int idtype116;
const struct type* type_struct117;
const char* var_class_name118;
val* var119 /* : nullable Object */;
val* var120 /* : OptionString */;
val* var122 /* : OptionString */;
val* var123 /* : nullable Object */;
val* var125 /* : nullable Object */;
val* var126 /* : null */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
short int var132 /* : Bool */;
val* var133 /* : OptionString */;
val* var135 /* : OptionString */;
val* var136 /* : nullable Object */;
val* var138 /* : nullable Object */;
val* var140 /* : OptionBool */;
val* var142 /* : OptionBool */;
val* var143 /* : nullable Object */;
val* var145 /* : nullable Object */;
short int var146 /* : Bool */;
val* var147 /* : String */;
val* var149 /* : String */;
val* var150 /* : nullable String */;
var_args = p0;
{
{ /* Inline toolcontext#ToolContext#opt_warn (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 169);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 40);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 181);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 184);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 199);
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
PRINT_ERROR(" (%s:%d)\n", "lib/standard/file.nit", 530);
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
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var47 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = opts__OptionContext__get_errors(var45);
}
var_errors = var48;
{
var49 = array__AbstractArrayRead__is_empty(var_errors);
}
var50 = !var49;
if (var50){
{
var51 = array__AbstractArrayRead__iterator(var_errors);
}
for(;;) {
{
var52 = array__ArrayIterator__is_ok(var51);
}
if(!var52) break;
{
var53 = array__ArrayIterator__item(var51);
}
var_e = var53;
if (varonce) {
var54 = varonce;
} else {
var55 = "Error: ";
var56 = 7;
var57 = string__NativeString__to_s_with_length(var55, var56);
var54 = var57;
varonce = var54;
}
var58 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var58 = array_instance Array[Object] */
var59 = 2;
var60 = NEW_array__NativeArray(var59, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var60)->values[0] = (val*) var54;
((struct instance_array__NativeArray*)var60)->values[1] = (val*) var_e;
{
((void (*)(val*, val*, long))(var58->class->vft[COLOR_array__Array__with_native]))(var58, var60, var59) /* with_native on <var58:Array[Object]>*/;
}
}
{
var61 = ((val* (*)(val*))(var58->class->vft[COLOR_string__Object__to_s]))(var58) /* to_s on <var58:Array[Object]>*/;
}
{
file__Object__print(self, var61); /* Direct call file#Object#print on <self:ToolContext>*/
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var51); /* Direct call array#ArrayIterator#next on <var51:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline toolcontext#ToolContext#tooldescription (self) on <self:ToolContext> */
var64 = self->attrs[COLOR_toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 210);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
file__Object__print(self, var62); /* Direct call file#Object#print on <self:ToolContext>*/
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = "Use --help for help";
var68 = 19;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
{
file__Object__print(self, var66); /* Direct call file#Object#print on <self:ToolContext>*/
}
var70 = 1;
{
{ /* Inline kernel#Object#exit (self,var70) on <self:ToolContext> */
exit(var70);
RET_LABEL71:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var75 = self->attrs[COLOR_toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
show_backtrace(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline opts#OptionContext#rest (var73) on <var73:OptionContext> */
var78 = var73->attrs[COLOR_opts__OptionContext___rest].val; /* _rest on <var73:OptionContext> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _rest");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 250);
show_backtrace(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
var79 = array__AbstractArrayRead__is_empty(var76);
}
var_ = var79;
if (var79){
{
{ /* Inline toolcontext#ToolContext#accept_no_arguments (self) on <self:ToolContext> */
var82 = self->attrs[COLOR_toolcontext__ToolContext___accept_no_arguments].s; /* _accept_no_arguments on <self:ToolContext> */
var80 = var82;
RET_LABEL81:(void)0;
}
}
var83 = !var80;
var72 = var83;
} else {
var72 = var_;
}
if (var72){
{
{ /* Inline toolcontext#ToolContext#tooldescription (self) on <self:ToolContext> */
var86 = self->attrs[COLOR_toolcontext__ToolContext___tooldescription].val; /* _tooldescription on <self:ToolContext> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _tooldescription");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 210);
show_backtrace(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
file__Object__print(self, var84); /* Direct call file#Object#print on <self:ToolContext>*/
}
if (varonce87) {
var88 = varonce87;
} else {
var89 = "Use --help for help";
var90 = 19;
var91 = string__NativeString__to_s_with_length(var89, var90);
var88 = var91;
varonce87 = var88;
}
{
file__Object__print(self, var88); /* Direct call file#Object#print on <self:ToolContext>*/
}
var92 = 1;
{
{ /* Inline kernel#Object#exit (self,var92) on <self:ToolContext> */
exit(var92);
RET_LABEL93:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_verbose (self) on <self:ToolContext> */
var96 = self->attrs[COLOR_toolcontext__ToolContext___opt_verbose].val; /* _opt_verbose on <self:ToolContext> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_verbose");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 190);
show_backtrace(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline opts#Option#value (var94) on <var94:OptionCount> */
var99 = var94->attrs[COLOR_opts__Option___value].val; /* _value on <var94:OptionCount> */
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#verbose_level= (self,var97) on <self:ToolContext> */
var101 = ((struct instance_kernel__Int*)var97)->value; /* autounbox from nullable Object to Int */;
self->attrs[COLOR_toolcontext__ToolContext___verbose_level].l = var101; /* _verbose_level on <self:ToolContext> */
RET_LABEL100:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_quiet (self) on <self:ToolContext> */
var104 = self->attrs[COLOR_toolcontext__ToolContext___opt_quiet].val; /* _opt_quiet on <self:ToolContext> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_quiet");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 172);
show_backtrace(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
{ /* Inline opts#Option#value (var102) on <var102:OptionBool> */
var107 = var102->attrs[COLOR_opts__Option___value].val; /* _value on <var102:OptionBool> */
var105 = var107;
RET_LABEL106:(void)0;
}
}
var108 = ((struct instance_kernel__Bool*)var105)->value; /* autounbox from nullable Object to Bool */;
if (var108){
{
{ /* Inline toolcontext#ToolContext#opt_warn (self) on <self:ToolContext> */
var111 = self->attrs[COLOR_toolcontext__ToolContext___opt_warn].val; /* _opt_warn on <self:ToolContext> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_warn");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 169);
show_backtrace(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
var112 = 0;
{
{ /* Inline opts#Option#value= (var109,var112) on <var109:OptionCount> */
/* Covariant cast for argument 0 (value) <var112:Int> isa VALUE */
/* <var112:Int> isa VALUE */
type_struct117 = var109->type->resolution_table->types[COLOR_opts__Option_VTVALUE];
cltype115 = type_struct117->color;
idtype116 = type_struct117->id;
if(cltype115 >= (&type_kernel__Int)->table_size) {
var114 = 0;
} else {
var114 = (&type_kernel__Int)->type_table[cltype115] == idtype116;
}
if (unlikely(!var114)) {
var_class_name118 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name118);
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 40);
show_backtrace(1);
}
var119 = BOX_kernel__Int(var112); /* autobox from Int to nullable Object */
var109->attrs[COLOR_opts__Option___value].val = var119; /* _value on <var109:OptionCount> */
RET_LABEL113:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_log_dir (self) on <self:ToolContext> */
var122 = self->attrs[COLOR_toolcontext__ToolContext___opt_log_dir].val; /* _opt_log_dir on <self:ToolContext> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log_dir");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 178);
show_backtrace(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
{ /* Inline opts#Option#value (var120) on <var120:OptionString> */
var125 = var120->attrs[COLOR_opts__Option___value].val; /* _value on <var120:OptionString> */
var123 = var125;
RET_LABEL124:(void)0;
}
}
var126 = NULL;
if (var123 == NULL) {
var127 = 0; /* is null */
} else {
var127 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var123,var126) on <var123:nullable Object(nullable String)> */
var_other = var126;
{
var131 = ((short int (*)(val*, val*))(var123->class->vft[COLOR_kernel__Object___61d_61d]))(var123, var_other) /* == on <var123:nullable String(String)>*/;
var130 = var131;
}
var132 = !var130;
var128 = var132;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
var127 = var128;
}
if (var127){
{
{ /* Inline toolcontext#ToolContext#opt_log_dir (self) on <self:ToolContext> */
var135 = self->attrs[COLOR_toolcontext__ToolContext___opt_log_dir].val; /* _opt_log_dir on <self:ToolContext> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log_dir");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 178);
show_backtrace(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
{ /* Inline opts#Option#value (var133) on <var133:OptionString> */
var138 = var133->attrs[COLOR_opts__Option___value].val; /* _value on <var133:OptionString> */
var136 = var138;
RET_LABEL137:(void)0;
}
}
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 277);
show_backtrace(1);
}
{
{ /* Inline toolcontext#ToolContext#log_directory= (self,var136) on <self:ToolContext> */
self->attrs[COLOR_toolcontext__ToolContext___log_directory].val = var136; /* _log_directory on <self:ToolContext> */
RET_LABEL139:(void)0;
}
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#opt_log (self) on <self:ToolContext> */
var142 = self->attrs[COLOR_toolcontext__ToolContext___opt_log].val; /* _opt_log on <self:ToolContext> */
if (unlikely(var142 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 175);
show_backtrace(1);
}
var140 = var142;
RET_LABEL141:(void)0;
}
}
{
{ /* Inline opts#Option#value (var140) on <var140:OptionBool> */
var145 = var140->attrs[COLOR_opts__Option___value].val; /* _value on <var140:OptionBool> */
var143 = var145;
RET_LABEL144:(void)0;
}
}
var146 = ((struct instance_kernel__Bool*)var143)->value; /* autounbox from nullable Object to Bool */;
if (var146){
{
{ /* Inline toolcontext#ToolContext#log_directory (self) on <self:ToolContext> */
var149 = self->attrs[COLOR_toolcontext__ToolContext___log_directory].val; /* _log_directory on <self:ToolContext> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _log_directory");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 81);
show_backtrace(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
{
file__String__mkdir(var147); /* Direct call file#String#mkdir on <var147:String>*/
}
} else {
}
{
var150 = toolcontext__ToolContext__compute_nit_dir(self);
}
{
{ /* Inline toolcontext#ToolContext#nit_dir= (self,var150) on <self:ToolContext> */
self->attrs[COLOR_toolcontext__ToolContext___nit_dir].val = var150; /* _nit_dir on <self:ToolContext> */
RET_LABEL151:(void)0;
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 187);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 187);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 347);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 347);
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
{ /* Inline template#Template#init (self) on <self:BashCompletion> */
RET_LABEL1:(void)0;
}
}
var_toolcontext = p0;
{
{ /* Inline toolcontext#BashCompletion#toolcontext= (self,var_toolcontext) on <self:BashCompletion> */
self->attrs[COLOR_toolcontext__BashCompletion___toolcontext].val = var_toolcontext; /* _toolcontext on <self:BashCompletion> */
RET_LABEL2:(void)0;
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
val* var11 /* : ArrayIterator[nullable Object] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_option /* var option: Option */;
val* var14 /* : Array[String] */;
val* var16 /* : Array[String] */;
val* var17 /* : ArrayIterator[nullable Object] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_name /* var name: String */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : FlatString */;
short int var24 /* : Bool */;
var1 = NEW_array__Array(&type_array__Arraystring__String);
{
array__Array__init(var1); /* Direct call array#Array#init on <var1:Array[String]>*/
}
var_names = var1;
{
{ /* Inline toolcontext#BashCompletion#toolcontext (self) on <self:BashCompletion> */
var4 = self->attrs[COLOR_toolcontext__BashCompletion___toolcontext].val; /* _toolcontext on <self:BashCompletion> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 347);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 166);
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
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 247);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = array__AbstractArrayRead__iterator(var8);
}
for(;;) {
{
var12 = array__ArrayIterator__is_ok(var11);
}
if(!var12) break;
{
var13 = array__ArrayIterator__item(var11);
}
var_option = var13;
{
{ /* Inline opts#Option#names (var_option) on <var_option:Option> */
var16 = var_option->attrs[COLOR_opts__Option___names].val; /* _names on <var_option:Option> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", "lib/opts.nit", 19);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = array__AbstractArrayRead__iterator(var14);
}
for(;;) {
{
var18 = array__ArrayIterator__is_ok(var17);
}
if(!var18) break;
{
var19 = array__ArrayIterator__item(var17);
}
var_name = var19;
if (varonce) {
var20 = varonce;
} else {
var21 = "--";
var22 = 2;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce = var20;
}
{
var24 = string__Text__has_prefix(var_name, var20);
}
if (var24){
{
array__Array__add(var_names, var_name); /* Direct call array#Array#add on <var_names:Array[String]>*/
}
} else {
}
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var17); /* Direct call array#ArrayIterator#next on <var17:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
CONTINUE_label25: (void)0;
{
array__ArrayIterator__next(var11); /* Direct call array#ArrayIterator#next on <var11:ArrayIterator[nullable Object]>*/
}
}
BREAK_label25: (void)0;
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
val* var61 /* : null */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : FlatString */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : NativeString */;
long var76 /* : Int */;
val* var77 /* : FlatString */;
val* var78 /* : String */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : FlatString */;
val* var84 /* : Array[Object] */;
long var85 /* : Int */;
val* var86 /* : NativeArray[Object] */;
val* var87 /* : String */;
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
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : NativeString */;
long var121 /* : Int */;
val* var122 /* : FlatString */;
val* var123 /* : Array[Object] */;
long var124 /* : Int */;
val* var125 /* : NativeArray[Object] */;
val* var126 /* : String */;
{
{ /* Inline toolcontext#BashCompletion#toolcontext (self) on <self:BashCompletion> */
var2 = self->attrs[COLOR_toolcontext__BashCompletion___toolcontext].val; /* _toolcontext on <self:BashCompletion> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 347);
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
PRINT_ERROR(" (%s:%d)\n", "src/toolcontext.nit", 347);
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
var61 = NULL;
{
var62 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_option_names,var61) on <var_option_names:Array[String]> */
var_other = var61;
{
var66 = ((short int (*)(val*, val*))(var_option_names->class->vft[COLOR_kernel__Object___61d_61d]))(var_option_names, var_other) /* == on <var_option_names:Array[String]>*/;
var65 = var66;
}
var67 = !var65;
var63 = var67;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
var62 = var63;
}
if (var62){
if (varonce68) {
var69 = varonce68;
} else {
var70 = "\11opts=\"";
var71 = 7;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
if (varonce73) {
var74 = varonce73;
} else {
var75 = " ";
var76 = 1;
var77 = string__NativeString__to_s_with_length(var75, var76);
var74 = var77;
varonce73 = var74;
}
{
var78 = string__Collection__join(var_option_names, var74);
}
if (varonce79) {
var80 = varonce79;
} else {
var81 = "\"";
var82 = 1;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
var84 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var84 = array_instance Array[Object] */
var85 = 3;
var86 = NEW_array__NativeArray(var85, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var86)->values[0] = (val*) var69;
((struct instance_array__NativeArray*)var86)->values[1] = (val*) var78;
((struct instance_array__NativeArray*)var86)->values[2] = (val*) var80;
{
((void (*)(val*, val*, long))(var84->class->vft[COLOR_array__Array__with_native]))(var84, var86, var85) /* with_native on <var84:Array[Object]>*/;
}
}
{
var87 = ((val* (*)(val*))(var84->class->vft[COLOR_string__Object__to_s]))(var84) /* to_s on <var84:Array[Object]>*/;
}
{
template__Template__addn(self, var87); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce88) {
var89 = varonce88;
} else {
var90 = "\11if [[ ${cur} == -* ]] ; then";
var91 = 29;
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
var95 = "\11\11COMPREPLY=( $(compgen -W \"${opts}\" -- ${cur}) )";
var96 = 49;
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
var100 = "\11\11return 0";
var101 = 10;
var102 = string__NativeString__to_s_with_length(var100, var101);
var99 = var102;
varonce98 = var99;
}
{
template__Template__addn(self, var99); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce103) {
var104 = varonce103;
} else {
var105 = "\11fi";
var106 = 3;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
{
template__Template__addn(self, var104); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
} else {
}
if (varonce108) {
var109 = varonce108;
} else {
var110 = "} &&";
var111 = 4;
var112 = string__NativeString__to_s_with_length(var110, var111);
var109 = var112;
varonce108 = var109;
}
{
template__Template__addn(self, var109); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
if (varonce113) {
var114 = varonce113;
} else {
var115 = "complete -o default -F _";
var116 = 24;
var117 = string__NativeString__to_s_with_length(var115, var116);
var114 = var117;
varonce113 = var114;
}
if (varonce118) {
var119 = varonce118;
} else {
var120 = " ";
var121 = 1;
var122 = string__NativeString__to_s_with_length(var120, var121);
var119 = var122;
varonce118 = var119;
}
var123 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var123 = array_instance Array[Object] */
var124 = 4;
var125 = NEW_array__NativeArray(var124, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var125)->values[0] = (val*) var114;
((struct instance_array__NativeArray*)var125)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var125)->values[2] = (val*) var119;
((struct instance_array__NativeArray*)var125)->values[3] = (val*) var_name;
{
((void (*)(val*, val*, long))(var123->class->vft[COLOR_array__Array__with_native]))(var123, var125, var124) /* with_native on <var123:Array[Object]>*/;
}
}
{
var126 = ((val* (*)(val*))(var123->class->vft[COLOR_string__Object__to_s]))(var123) /* to_s on <var123:Array[Object]>*/;
}
{
template__Template__addn(self, var126); /* Direct call template#Template#addn on <self:BashCompletion>*/
}
RET_LABEL:;
}
/* method toolcontext#BashCompletion#rendering for (self: Object) */
void VIRTUAL_toolcontext__BashCompletion__rendering(val* self) {
toolcontext__BashCompletion__rendering(self); /* Direct call toolcontext#BashCompletion#rendering on <self:Object(BashCompletion)>*/
RET_LABEL:;
}
