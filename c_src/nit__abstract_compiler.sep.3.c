#include "nit__abstract_compiler.sep.0.h"
/* method abstract_compiler#AbstractCompilerVisitor#string_instance for (self: AbstractCompilerVisitor, String): RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___string_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_string /* var string: String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
val* var5 /* : MClass */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var_mtype /* var mtype: MClassType */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : String */;
val* var_name /* var name: String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
val* var31 /* : Array[Object] */;
long var32 /* : Int */;
val* var33 /* : NativeArray[Object] */;
val* var34 /* : String */;
val* var35 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
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
val* var46 /* : Array[Object] */;
long var47 /* : Int */;
val* var48 /* : NativeArray[Object] */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
long var53 /* : Int */;
val* var54 /* : FlatString */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
long var58 /* : Int */;
val* var59 /* : FlatString */;
val* var60 /* : Array[Object] */;
long var61 /* : Int */;
val* var62 /* : NativeArray[Object] */;
val* var63 /* : String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
val* var74 /* : MClass */;
val* var75 /* : MClassType */;
val* var77 /* : MClassType */;
val* var_native_mtype /* var native_mtype: MClassType */;
val* var78 /* : RuntimeVariable */;
val* var_nat /* var nat: RuntimeVariable */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : FlatString */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
val* var90 /* : Array[Object] */;
long var91 /* : Int */;
val* var92 /* : NativeArray[Object] */;
val* var93 /* : String */;
long var94 /* : Int */;
val* var95 /* : RuntimeVariable */;
val* var_length /* var length: RuntimeVariable */;
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
val* var106 /* : MMethod */;
val* var107 /* : Array[RuntimeVariable] */;
long var108 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var109 /* : nullable RuntimeVariable */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : FlatString */;
val* var115 /* : Array[Object] */;
long var116 /* : Int */;
val* var117 /* : NativeArray[Object] */;
val* var118 /* : String */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
long var122 /* : Int */;
val* var123 /* : FlatString */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : FlatString */;
val* var129 /* : Array[Object] */;
long var130 /* : Int */;
val* var131 /* : NativeArray[Object] */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : FlatString */;
var_string = p0;
if (varonce) {
var1 = varonce;
} else {
var2 = "String";
var3 = 6;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
{
var5 = nit___nit__AbstractCompilerVisitor___get_class(self, var1);
}
{
{ /* Inline model#MClass#mclass_type (var5) on <var5:MClass> */
var8 = var5->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var5:MClass> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_mtype = var6;
if (varonce9) {
var10 = varonce9;
} else {
var11 = "varonce";
var12 = 7;
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce9 = var10;
}
{
var14 = nit___nit__AbstractCompilerVisitor___get_name(self, var10);
}
var_name = var14;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "static ";
var18 = 7;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
{
var20 = nit__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = " ";
var24 = 1;
var25 = standard___standard__NativeString___to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = ";";
var29 = 1;
var30 = standard___standard__NativeString___to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
var31 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var31 = array_instance Array[Object] */
var32 = 5;
var33 = NEW_standard__NativeArray(var32, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var33)->values[0] = (val*) var16;
((struct instance_standard__NativeArray*)var33)->values[1] = (val*) var20;
((struct instance_standard__NativeArray*)var33)->values[2] = (val*) var22;
((struct instance_standard__NativeArray*)var33)->values[3] = (val*) var_name;
((struct instance_standard__NativeArray*)var33)->values[4] = (val*) var27;
{
((void (*)(val* self, val* p0, long p1))(var31->class->vft[COLOR_standard__array__Array__with_native]))(var31, var33, var32) /* with_native on <var31:Array[Object]>*/;
}
}
{
var34 = ((val* (*)(val* self))(var31->class->vft[COLOR_standard__string__Object__to_s]))(var31) /* to_s on <var31:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add_decl(self, var34); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
{
var35 = nit___nit__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var35;
if (varonce36) {
var37 = varonce36;
} else {
var38 = "if (";
var39 = 4;
var40 = standard___standard__NativeString___to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
if (varonce41) {
var42 = varonce41;
} else {
var43 = ") {";
var44 = 3;
var45 = standard___standard__NativeString___to_s_with_length(var43, var44);
var42 = var45;
varonce41 = var42;
}
var46 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var46 = array_instance Array[Object] */
var47 = 3;
var48 = NEW_standard__NativeArray(var47, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var48)->values[0] = (val*) var37;
((struct instance_standard__NativeArray*)var48)->values[1] = (val*) var_name;
((struct instance_standard__NativeArray*)var48)->values[2] = (val*) var42;
{
((void (*)(val* self, val* p0, long p1))(var46->class->vft[COLOR_standard__array__Array__with_native]))(var46, var48, var47) /* with_native on <var46:Array[Object]>*/;
}
}
{
var49 = ((val* (*)(val* self))(var46->class->vft[COLOR_standard__string__Object__to_s]))(var46) /* to_s on <var46:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var49); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = " = ";
var53 = 3;
var54 = standard___standard__NativeString___to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
if (varonce55) {
var56 = varonce55;
} else {
var57 = ";";
var58 = 1;
var59 = standard___standard__NativeString___to_s_with_length(var57, var58);
var56 = var59;
varonce55 = var56;
}
var60 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var60 = array_instance Array[Object] */
var61 = 4;
var62 = NEW_standard__NativeArray(var61, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var62)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var62)->values[1] = (val*) var51;
((struct instance_standard__NativeArray*)var62)->values[2] = (val*) var_name;
((struct instance_standard__NativeArray*)var62)->values[3] = (val*) var56;
{
((void (*)(val* self, val* p0, long p1))(var60->class->vft[COLOR_standard__array__Array__with_native]))(var60, var62, var61) /* with_native on <var60:Array[Object]>*/;
}
}
{
var63 = ((val* (*)(val* self))(var60->class->vft[COLOR_standard__string__Object__to_s]))(var60) /* to_s on <var60:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var63); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = "} else {";
var67 = 8;
var68 = standard___standard__NativeString___to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var65); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = "NativeString";
var72 = 12;
var73 = standard___standard__NativeString___to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
{
var74 = nit___nit__AbstractCompilerVisitor___get_class(self, var70);
}
{
{ /* Inline model#MClass#mclass_type (var74) on <var74:MClass> */
var77 = var74->attrs[COLOR_nit__model__MClass___mclass_type].val; /* _mclass_type on <var74:MClass> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 438);
show_backtrace(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
var_native_mtype = var75;
{
var78 = nit___nit__AbstractCompilerVisitor___new_var(self, var_native_mtype);
}
var_nat = var78;
if (varonce79) {
var80 = varonce79;
} else {
var81 = " = \"";
var82 = 4;
var83 = standard___standard__NativeString___to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
{
var84 = standard___standard__Text___escape_to_c(var_string);
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = "\";";
var88 = 2;
var89 = standard___standard__NativeString___to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var90 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var90 = array_instance Array[Object] */
var91 = 4;
var92 = NEW_standard__NativeArray(var91, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var92)->values[0] = (val*) var_nat;
((struct instance_standard__NativeArray*)var92)->values[1] = (val*) var80;
((struct instance_standard__NativeArray*)var92)->values[2] = (val*) var84;
((struct instance_standard__NativeArray*)var92)->values[3] = (val*) var86;
{
((void (*)(val* self, val* p0, long p1))(var90->class->vft[COLOR_standard__array__Array__with_native]))(var90, var92, var91) /* with_native on <var90:Array[Object]>*/;
}
}
{
var93 = ((val* (*)(val* self))(var90->class->vft[COLOR_standard__string__Object__to_s]))(var90) /* to_s on <var90:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var93); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
{
var94 = ((long (*)(val* self))(var_string->class->vft[COLOR_standard__string__Text__length]))(var_string) /* length on <var_string:String>*/;
}
{
var95 = nit___nit__AbstractCompilerVisitor___int_instance(self, var94);
}
var_length = var95;
if (varonce96) {
var97 = varonce96;
} else {
var98 = " = ";
var99 = 3;
var100 = standard___standard__NativeString___to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
if (varonce101) {
var102 = varonce101;
} else {
var103 = "to_s_with_length";
var104 = 16;
var105 = standard___standard__NativeString___to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
{
var106 = nit___nit__AbstractCompilerVisitor___get_property(self, var102, var_native_mtype);
}
var107 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var108 = 2;
{
standard___standard__Array___with_capacity(var107, var108); /* Direct call array#Array#with_capacity on <var107:Array[RuntimeVariable]>*/
}
var_ = var107;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_nat); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_length); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var109 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__send(self, var106, var_);
}
if (unlikely(var109 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1453);
show_backtrace(1);
}
if (varonce110) {
var111 = varonce110;
} else {
var112 = ";";
var113 = 1;
var114 = standard___standard__NativeString___to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
var115 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var115 = array_instance Array[Object] */
var116 = 4;
var117 = NEW_standard__NativeArray(var116, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var117)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var117)->values[1] = (val*) var97;
((struct instance_standard__NativeArray*)var117)->values[2] = (val*) var109;
((struct instance_standard__NativeArray*)var117)->values[3] = (val*) var111;
{
((void (*)(val* self, val* p0, long p1))(var115->class->vft[COLOR_standard__array__Array__with_native]))(var115, var117, var116) /* with_native on <var115:Array[Object]>*/;
}
}
{
var118 = ((val* (*)(val* self))(var115->class->vft[COLOR_standard__string__Object__to_s]))(var115) /* to_s on <var115:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var118); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (varonce119) {
var120 = varonce119;
} else {
var121 = " = ";
var122 = 3;
var123 = standard___standard__NativeString___to_s_with_length(var121, var122);
var120 = var123;
varonce119 = var120;
}
if (varonce124) {
var125 = varonce124;
} else {
var126 = ";";
var127 = 1;
var128 = standard___standard__NativeString___to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
var129 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var129 = array_instance Array[Object] */
var130 = 4;
var131 = NEW_standard__NativeArray(var130, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var131)->values[0] = (val*) var_name;
((struct instance_standard__NativeArray*)var131)->values[1] = (val*) var120;
((struct instance_standard__NativeArray*)var131)->values[2] = (val*) var_res;
((struct instance_standard__NativeArray*)var131)->values[3] = (val*) var125;
{
((void (*)(val* self, val* p0, long p1))(var129->class->vft[COLOR_standard__array__Array__with_native]))(var129, var131, var130) /* with_native on <var129:Array[Object]>*/;
}
}
{
var132 = ((val* (*)(val* self))(var129->class->vft[COLOR_standard__string__Object__to_s]))(var129) /* to_s on <var129:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var132); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (varonce133) {
var134 = varonce133;
} else {
var135 = "}";
var136 = 1;
var137 = standard___standard__NativeString___to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var134); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#value_instance for (self: AbstractCompilerVisitor, Object): RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___value_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_object /* var object: Object */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : RuntimeVariable */;
long var3 /* : Int */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
val* var7 /* : RuntimeVariable */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
val* var12 /* : RuntimeVariable */;
var_object = p0;
/* <var_object:Object> isa Int */
cltype = type_standard__Int.color;
idtype = type_standard__Int.id;
if(cltype >= var_object->type->table_size) {
var1 = 0;
} else {
var1 = var_object->type->type_table[cltype] == idtype;
}
if (var1){
{
var3 = ((struct instance_standard__Int*)var_object)->value; /* autounbox from Object to Int */;
var2 = nit___nit__AbstractCompilerVisitor___int_instance(self, var3);
}
var = var2;
goto RET_LABEL;
} else {
/* <var_object:Object> isa Bool */
cltype5 = type_standard__Bool.color;
idtype6 = type_standard__Bool.id;
if(cltype5 >= var_object->type->table_size) {
var4 = 0;
} else {
var4 = var_object->type->type_table[cltype5] == idtype6;
}
if (var4){
{
var8 = ((struct instance_standard__Bool*)var_object)->value; /* autounbox from Object to Bool */;
var7 = nit___nit__AbstractCompilerVisitor___bool_instance(self, var8);
}
var = var7;
goto RET_LABEL;
} else {
/* <var_object:Object> isa String */
cltype10 = type_standard__String.color;
idtype11 = type_standard__String.id;
if(cltype10 >= var_object->type->table_size) {
var9 = 0;
} else {
var9 = var_object->type->type_table[cltype10] == idtype11;
}
if (var9){
{
var12 = nit___nit__AbstractCompilerVisitor___string_instance(self, var_object);
}
var = var12;
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1468);
show_backtrace(1);
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#add for (self: AbstractCompilerVisitor, String) */
void nit___nit__AbstractCompilerVisitor___add(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
val* var3 /* : List[String] */;
val* var5 /* : List[String] */;
var_s = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#writer (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1074);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#lines (var) on <var:CodeWriter> */
var5 = var->attrs[COLOR_nit__abstract_compiler__CodeWriter___lines].val; /* _lines on <var:CodeWriter> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1038);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
standard___standard__Sequence___SimpleCollection__add(var3, var_s); /* Direct call abstract_collection#Sequence#add on <var3:List[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_decl for (self: AbstractCompilerVisitor, String) */
void nit___nit__AbstractCompilerVisitor___add_decl(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
val* var3 /* : List[String] */;
val* var5 /* : List[String] */;
var_s = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#writer (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1074);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (var) on <var:CodeWriter> */
var5 = var->attrs[COLOR_nit__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var:CodeWriter> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1039);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
standard___standard__Sequence___SimpleCollection__add(var3, var_s); /* Direct call abstract_collection#Sequence#add on <var3:List[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#require_declaration for (self: AbstractCompilerVisitor, String) */
void nit___nit__AbstractCompilerVisitor___require_declaration(val* self, val* p0) {
val* var_key /* var key: String */;
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
val* var3 /* : CodeFile */;
val* var5 /* : CodeFile */;
val* var6 /* : HashSet[String] */;
val* var8 /* : HashSet[String] */;
val* var_reqs /* var reqs: HashSet[String] */;
short int var9 /* : Bool */;
val* var10 /* : nullable ANode */;
val* var12 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : AbstractCompiler */;
val* var21 /* : AbstractCompiler */;
val* var22 /* : HashMap[String, ANode] */;
val* var24 /* : HashMap[String, ANode] */;
var_key = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#writer (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1074);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#file (var) on <var:CodeWriter> */
var5 = var->attrs[COLOR_nit__abstract_compiler__CodeWriter___file].val; /* _file on <var:CodeWriter> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1037);
show_backtrace(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeFile#required_declarations (var3) on <var3:CodeFile> */
var8 = var3->attrs[COLOR_nit__abstract_compiler__CodeFile___required_declarations].val; /* _required_declarations on <var3:CodeFile> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _required_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1032);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_reqs = var6;
{
var9 = standard___standard__HashSet___standard__abstract_collection__Collection__has(var_reqs, var_key);
}
if (var9){
goto RET_LABEL;
} else {
}
{
standard___standard__HashSet___standard__abstract_collection__SimpleCollection__add(var_reqs, var_key); /* Direct call hash_collection#HashSet#add on <var_reqs:HashSet[String]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var12 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_node = var10;
var13 = NULL;
if (var_node == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,var13) on <var_node:nullable ANode> */
var_other = var13;
{
var17 = ((short int (*)(val* self, val* p0))(var_node->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_node, var_other) /* == on <var_node:nullable ANode(ANode)>*/;
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var21 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#requirers_of_declarations (var19) on <var19:AbstractCompiler> */
var24 = var19->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___requirers_of_declarations].val; /* _requirers_of_declarations on <var19:AbstractCompiler> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _requirers_of_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 541);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
standard___standard__HashMap___standard__abstract_collection__Map___91d_93d_61d(var22, var_key, var_node); /* Direct call hash_collection#HashMap#[]= on <var22:HashMap[String, ANode]>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#declare_once for (self: AbstractCompilerVisitor, String) */
void nit___nit__AbstractCompilerVisitor___declare_once(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
var_s = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nit___nit__AbstractCompiler___provide_declaration(var, var_s, var_s); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <var:AbstractCompiler>*/
}
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var_s); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_extern for (self: AbstractCompilerVisitor, MModule) */
void nit___nit__AbstractCompilerVisitor___add_extern(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
val* var /* : Location */;
val* var2 /* : Location */;
val* var3 /* : nullable SourceFile */;
val* var5 /* : nullable SourceFile */;
val* var6 /* : String */;
val* var8 /* : String */;
val* var_file /* var file: String */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
val* var19 /* : String */;
val* var_tryfile /* var tryfile: String */;
short int var20 /* : Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : FlatString */;
val* var37 /* : Array[Object] */;
long var38 /* : Int */;
val* var39 /* : NativeArray[Object] */;
val* var40 /* : String */;
val* var41 /* : AbstractCompiler */;
val* var43 /* : AbstractCompiler */;
val* var44 /* : Array[String] */;
val* var46 /* : Array[String] */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : NativeString */;
long var50 /* : Int */;
val* var51 /* : FlatString */;
val* var52 /* : String */;
short int var53 /* : Bool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
long var57 /* : Int */;
val* var58 /* : FlatString */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
val* var70 /* : Array[Object] */;
long var71 /* : Int */;
val* var72 /* : NativeArray[Object] */;
val* var73 /* : String */;
val* var74 /* : AbstractCompiler */;
val* var76 /* : AbstractCompiler */;
val* var77 /* : Array[String] */;
val* var79 /* : Array[String] */;
val* var80 /* : AbstractCompiler */;
val* var82 /* : AbstractCompiler */;
val* var83 /* : ArraySet[String] */;
val* var85 /* : ArraySet[String] */;
short int var86 /* : Bool */;
val* var87 /* : AbstractCompiler */;
val* var89 /* : AbstractCompiler */;
val* var90 /* : ArraySet[String] */;
val* var92 /* : ArraySet[String] */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : NativeString */;
long var96 /* : Int */;
val* var97 /* : FlatString */;
val* var98 /* : String */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : FlatString */;
val* var106 /* : String */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
val* var109 /* : ExternCFile */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : NativeString */;
long var113 /* : Int */;
val* var114 /* : FlatString */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
long var119 /* : Int */;
val* var120 /* : FlatString */;
val* var_f /* var f: ExternCFile */;
val* var121 /* : AbstractCompiler */;
val* var123 /* : AbstractCompiler */;
val* var124 /* : Array[ExternFile] */;
val* var126 /* : Array[ExternFile] */;
val* var127 /* : AbstractCompiler */;
val* var129 /* : AbstractCompiler */;
val* var130 /* : Array[String] */;
val* var132 /* : Array[String] */;
var_mmodule = p0;
{
{ /* Inline mmodule#MModule#location (var_mmodule) on <var_mmodule:MModule> */
var2 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___location].val; /* _location on <var_mmodule:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 90);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline location#Location#file (var) on <var:Location> */
var5 = var->attrs[COLOR_nit__location__Location___file].val; /* _file on <var:Location> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (var3 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1509);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var3) on <var3:nullable SourceFile> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
show_backtrace(1);
}
var8 = var3->attrs[COLOR_nit__location__SourceFile___filename].val; /* _filename on <var3:nullable SourceFile> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_file = var6;
if (varonce) {
var9 = varonce;
} else {
var10 = ".nit";
var11 = 4;
var12 = standard___standard__NativeString___to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
{
var13 = standard__file___String___strip_extension(var_file, var9);
}
var_file = var13;
if (varonce14) {
var15 = varonce14;
} else {
var16 = ".nit.h";
var17 = 6;
var18 = standard___standard__NativeString___to_s_with_length(var16, var17);
var15 = var18;
varonce14 = var15;
}
{
var19 = ((val* (*)(val* self, val* p0))(var_file->class->vft[COLOR_standard__string__String___43d]))(var_file, var15) /* + on <var_file:String>*/;
}
var_tryfile = var19;
{
var20 = standard__file___String___file_exists(var_tryfile);
}
if (var20){
if (varonce21) {
var22 = varonce21;
} else {
var23 = "#include \"";
var24 = 10;
var25 = standard___standard__NativeString___to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = "";
var29 = 0;
var30 = standard___standard__NativeString___to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
{
var31 = standard__file___String___basename(var_tryfile, var27);
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = "\"";
var35 = 1;
var36 = standard___standard__NativeString___to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var37 = array_instance Array[Object] */
var38 = 3;
var39 = NEW_standard__NativeArray(var38, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var39)->values[0] = (val*) var22;
((struct instance_standard__NativeArray*)var39)->values[1] = (val*) var31;
((struct instance_standard__NativeArray*)var39)->values[2] = (val*) var33;
{
((void (*)(val* self, val* p0, long p1))(var37->class->vft[COLOR_standard__array__Array__with_native]))(var37, var39, var38) /* with_native on <var37:Array[Object]>*/;
}
}
{
var40 = ((val* (*)(val* self))(var37->class->vft[COLOR_standard__string__Object__to_s]))(var37) /* to_s on <var37:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___declare_once(self, var40); /* Direct call abstract_compiler#AbstractCompilerVisitor#declare_once on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var43 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var41) on <var41:AbstractCompiler> */
var46 = var41->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var41:AbstractCompiler> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 931);
show_backtrace(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var44, var_tryfile); /* Direct call array#Array#add on <var44:Array[String]>*/
}
} else {
}
if (varonce47) {
var48 = varonce47;
} else {
var49 = "_nit.h";
var50 = 6;
var51 = standard___standard__NativeString___to_s_with_length(var49, var50);
var48 = var51;
varonce47 = var48;
}
{
var52 = ((val* (*)(val* self, val* p0))(var_file->class->vft[COLOR_standard__string__String___43d]))(var_file, var48) /* + on <var_file:String>*/;
}
var_tryfile = var52;
{
var53 = standard__file___String___file_exists(var_tryfile);
}
if (var53){
if (varonce54) {
var55 = varonce54;
} else {
var56 = "#include \"";
var57 = 10;
var58 = standard___standard__NativeString___to_s_with_length(var56, var57);
var55 = var58;
varonce54 = var55;
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = "";
var62 = 0;
var63 = standard___standard__NativeString___to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
{
var64 = standard__file___String___basename(var_tryfile, var60);
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = "\"";
var68 = 1;
var69 = standard___standard__NativeString___to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var70 = array_instance Array[Object] */
var71 = 3;
var72 = NEW_standard__NativeArray(var71, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var72)->values[0] = (val*) var55;
((struct instance_standard__NativeArray*)var72)->values[1] = (val*) var64;
((struct instance_standard__NativeArray*)var72)->values[2] = (val*) var66;
{
((void (*)(val* self, val* p0, long p1))(var70->class->vft[COLOR_standard__array__Array__with_native]))(var70, var72, var71) /* with_native on <var70:Array[Object]>*/;
}
}
{
var73 = ((val* (*)(val* self))(var70->class->vft[COLOR_standard__string__Object__to_s]))(var70) /* to_s on <var70:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___declare_once(self, var73); /* Direct call abstract_compiler#AbstractCompilerVisitor#declare_once on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var76 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var74) on <var74:AbstractCompiler> */
var79 = var74->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var74:AbstractCompiler> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 931);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var77, var_tryfile); /* Direct call array#Array#add on <var77:Array[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var82 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#seen_extern (var80) on <var80:AbstractCompiler> */
var85 = var80->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___seen_extern].val; /* _seen_extern on <var80:AbstractCompiler> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen_extern");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 934);
show_backtrace(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
{
var86 = standard___standard__ArraySet___standard__abstract_collection__Collection__has(var83, var_file);
}
if (var86){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var89 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#seen_extern (var87) on <var87:AbstractCompiler> */
var92 = var87->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___seen_extern].val; /* _seen_extern on <var87:AbstractCompiler> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen_extern");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 934);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
standard___standard__ArraySet___standard__abstract_collection__SimpleCollection__add(var90, var_file); /* Direct call array#ArraySet#add on <var90:ArraySet[String]>*/
}
if (varonce93) {
var94 = varonce93;
} else {
var95 = ".nit.c";
var96 = 6;
var97 = standard___standard__NativeString___to_s_with_length(var95, var96);
var94 = var97;
varonce93 = var94;
}
{
var98 = ((val* (*)(val* self, val* p0))(var_file->class->vft[COLOR_standard__string__String___43d]))(var_file, var94) /* + on <var_file:String>*/;
}
var_tryfile = var98;
{
var99 = standard__file___String___file_exists(var_tryfile);
}
var100 = !var99;
if (var100){
if (varonce101) {
var102 = varonce101;
} else {
var103 = "_nit.c";
var104 = 6;
var105 = standard___standard__NativeString___to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
{
var106 = ((val* (*)(val* self, val* p0))(var_file->class->vft[COLOR_standard__string__String___43d]))(var_file, var102) /* + on <var_file:String>*/;
}
var_tryfile = var106;
{
var107 = standard__file___String___file_exists(var_tryfile);
}
var108 = !var107;
if (var108){
goto RET_LABEL;
} else {
}
} else {
}
var109 = NEW_nit__ExternCFile(&type_nit__ExternCFile);
if (varonce110) {
var111 = varonce110;
} else {
var112 = "";
var113 = 0;
var114 = standard___standard__NativeString___to_s_with_length(var112, var113);
var111 = var114;
varonce110 = var111;
}
{
var115 = standard__file___String___basename(var_tryfile, var111);
}
if (varonce116) {
var117 = varonce116;
} else {
var118 = "";
var119 = 0;
var120 = standard___standard__NativeString___to_s_with_length(var118, var119);
var117 = var120;
varonce116 = var117;
}
{
((void (*)(val* self, val* p0))(var109->class->vft[COLOR_nit__c_tools__ExternFile__filename_61d]))(var109, var115) /* filename= on <var109:ExternCFile>*/;
}
{
((void (*)(val* self, val* p0))(var109->class->vft[COLOR_nit__c_tools__ExternCFile__cflags_61d]))(var109, var117) /* cflags= on <var109:ExternCFile>*/;
}
{
((void (*)(val* self))(var109->class->vft[COLOR_standard__kernel__Object__init]))(var109) /* init on <var109:ExternCFile>*/;
}
var_f = var109;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var123 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var121) on <var121:AbstractCompiler> */
var126 = var121->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var121:AbstractCompiler> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 928);
show_backtrace(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var124, var_f); /* Direct call array#Array#add on <var124:Array[ExternFile]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var129 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var127 = var129;
RET_LABEL128:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var127) on <var127:AbstractCompiler> */
var132 = var127->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var127:AbstractCompiler> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 931);
show_backtrace(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var130, var_tryfile); /* Direct call array#Array#add on <var130:Array[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_expr for (self: AbstractCompilerVisitor, String, MType): RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___new_expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_cexpr /* var cexpr: String */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : NativeString */;
long var4 /* : Int */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
val* var11 /* : Array[Object] */;
long var12 /* : Int */;
val* var13 /* : NativeArray[Object] */;
val* var14 /* : String */;
var_cexpr = p0;
var_mtype = p1;
{
var1 = nit___nit__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = " = ";
var4 = 3;
var5 = standard___standard__NativeString___to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = ";";
var9 = 1;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 4;
var13 = NEW_standard__NativeArray(var12, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var13)->values[0] = (val*) var_res;
((struct instance_standard__NativeArray*)var13)->values[1] = (val*) var2;
((struct instance_standard__NativeArray*)var13)->values[2] = (val*) var_cexpr;
((struct instance_standard__NativeArray*)var13)->values[3] = (val*) var7;
{
((void (*)(val* self, val* p0, long p1))(var11->class->vft[COLOR_standard__array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val* self))(var11->class->vft[COLOR_standard__string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var14); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_abort for (self: AbstractCompilerVisitor, String) */
void nit___nit__AbstractCompilerVisitor___add_abort(val* self, val* p0) {
val* var_message /* var message: String */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
val* var10 /* : Array[Object] */;
long var11 /* : Int */;
val* var12 /* : NativeArray[Object] */;
val* var13 /* : String */;
var_message = p0;
if (varonce) {
var = varonce;
} else {
var1 = "PRINT_ERROR(\"Runtime error: %s\", \"";
var2 = 34;
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = standard___standard__Text___escape_to_c(var_message);
}
if (varonce5) {
var6 = varonce5;
} else {
var7 = "\");";
var8 = 3;
var9 = standard___standard__NativeString___to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
var10 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var10 = array_instance Array[Object] */
var11 = 3;
var12 = NEW_standard__NativeArray(var11, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var12)->values[0] = (val*) var;
((struct instance_standard__NativeArray*)var12)->values[1] = (val*) var4;
((struct instance_standard__NativeArray*)var12)->values[2] = (val*) var6;
{
((void (*)(val* self, val* p0, long p1))(var10->class->vft[COLOR_standard__array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Object]>*/;
}
}
{
var13 = ((val* (*)(val* self))(var10->class->vft[COLOR_standard__string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var13); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
{
nit___nit__AbstractCompilerVisitor___add_raw_abort(self); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_raw_abort on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_raw_abort for (self: AbstractCompilerVisitor) */
void nit___nit__AbstractCompilerVisitor___add_raw_abort(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : nullable ANode */;
val* var4 /* : nullable ANode */;
val* var5 /* : null */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
val* var11 /* : nullable ANode */;
val* var13 /* : nullable ANode */;
val* var14 /* : Location */;
val* var16 /* : Location */;
val* var17 /* : nullable SourceFile */;
val* var19 /* : nullable SourceFile */;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var_26 /* var : Bool */;
val* var27 /* : nullable ANode */;
val* var29 /* : nullable ANode */;
val* var30 /* : Location */;
val* var32 /* : Location */;
val* var33 /* : nullable SourceFile */;
val* var35 /* : nullable SourceFile */;
val* var36 /* : nullable MModule */;
val* var38 /* : nullable MModule */;
val* var39 /* : null */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
static val* varonce;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
val* var49 /* : nullable ANode */;
val* var51 /* : nullable ANode */;
val* var52 /* : Location */;
val* var54 /* : Location */;
val* var55 /* : nullable SourceFile */;
val* var57 /* : nullable SourceFile */;
val* var58 /* : nullable MModule */;
val* var60 /* : nullable MModule */;
val* var61 /* : String */;
val* var62 /* : Array[Object] */;
long var63 /* : Int */;
val* var64 /* : NativeArray[Object] */;
val* var65 /* : String */;
val* var_f /* var f: String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
long var69 /* : Int */;
val* var70 /* : FlatString */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : FlatString */;
val* var76 /* : nullable ANode */;
val* var78 /* : nullable ANode */;
val* var79 /* : Location */;
val* var81 /* : Location */;
long var82 /* : Int */;
long var84 /* : Int */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
val* var90 /* : Array[Object] */;
long var91 /* : Int */;
val* var92 /* : NativeArray[Object] */;
val* var93 /* : Object */;
val* var94 /* : String */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : FlatString */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var5 = NULL;
if (var2 == NULL) {
var6 = 0; /* is null */
} else {
var6 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var2,var5) on <var2:nullable ANode> */
var_other = var5;
{
var9 = ((short int (*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var2, var_other) /* == on <var2:nullable ANode(ANode)>*/;
}
var10 = !var9;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
var_ = var6;
if (var6){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var13 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (var11 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1552);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#location (var11) on <var11:nullable ANode> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var16 = var11->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var11:nullable ANode> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline location#Location#file (var14) on <var14:Location> */
var19 = var14->attrs[COLOR_nit__location__Location___file].val; /* _file on <var14:Location> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var20 = NULL;
if (var17 == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var17,var20) on <var17:nullable SourceFile> */
var_other = var20;
{
var24 = ((short int (*)(val* self, val* p0))(var17->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var17, var_other) /* == on <var17:nullable SourceFile(SourceFile)>*/;
}
var25 = !var24;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
var1 = var21;
} else {
var1 = var_;
}
var_26 = var1;
if (var1){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var29 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (var27 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1553);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#location (var27) on <var27:nullable ANode> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var32 = var27->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var27:nullable ANode> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline location#Location#file (var30) on <var30:Location> */
var35 = var30->attrs[COLOR_nit__location__Location___file].val; /* _file on <var30:Location> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (var33 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1553);
show_backtrace(1);
} else {
{ /* Inline loader#SourceFile#mmodule (var33) on <var33:nullable SourceFile> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 696);
show_backtrace(1);
}
var38 = var33->attrs[COLOR_nit__loader__SourceFile___mmodule].val; /* _mmodule on <var33:nullable SourceFile> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
var39 = NULL;
if (var36 == NULL) {
var40 = 0; /* is null */
} else {
var40 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var36,var39) on <var36:nullable MModule> */
var_other = var39;
{
var43 = ((short int (*)(val* self, val* p0))(var36->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var36, var_other) /* == on <var36:nullable MModule(MModule)>*/;
}
var44 = !var43;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
var = var40;
} else {
var = var_26;
}
if (var){
if (varonce) {
var45 = varonce;
} else {
var46 = "FILE_";
var47 = 5;
var48 = standard___standard__NativeString___to_s_with_length(var46, var47);
var45 = var48;
varonce = var45;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var51 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
if (var49 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1554);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#location (var49) on <var49:nullable ANode> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var54 = var49->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var49:nullable ANode> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline location#Location#file (var52) on <var52:Location> */
var57 = var52->attrs[COLOR_nit__location__Location___file].val; /* _file on <var52:Location> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (var55 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1554);
show_backtrace(1);
} else {
{ /* Inline loader#SourceFile#mmodule (var55) on <var55:nullable SourceFile> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 696);
show_backtrace(1);
}
var60 = var55->attrs[COLOR_nit__loader__SourceFile___mmodule].val; /* _mmodule on <var55:nullable SourceFile> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (var58 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1554);
show_backtrace(1);
} else {
var61 = nit___nit__MModule___nit__model_base__MEntity__c_name(var58);
}
var62 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var62 = array_instance Array[Object] */
var63 = 2;
var64 = NEW_standard__NativeArray(var63, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var64)->values[0] = (val*) var45;
((struct instance_standard__NativeArray*)var64)->values[1] = (val*) var61;
{
((void (*)(val* self, val* p0, long p1))(var62->class->vft[COLOR_standard__array__Array__with_native]))(var62, var64, var63) /* with_native on <var62:Array[Object]>*/;
}
}
{
var65 = ((val* (*)(val* self))(var62->class->vft[COLOR_standard__string__Object__to_s]))(var62) /* to_s on <var62:Array[Object]>*/;
}
var_f = var65;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var_f); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:AbstractCompilerVisitor>*/
}
if (varonce66) {
var67 = varonce66;
} else {
var68 = "PRINT_ERROR(\" (%s:%d)\\n\", ";
var69 = 26;
var70 = standard___standard__NativeString___to_s_with_length(var68, var69);
var67 = var70;
varonce66 = var67;
}
if (varonce71) {
var72 = varonce71;
} else {
var73 = ", ";
var74 = 2;
var75 = standard___standard__NativeString___to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var78 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (var76 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1556);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ANode#location (var76) on <var76:nullable ANode> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var81 = var76->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var76:nullable ANode> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var79) on <var79:Location> */
var84 = var79->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <var79:Location> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = ");";
var88 = 2;
var89 = standard___standard__NativeString___to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var90 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var90 = array_instance Array[Object] */
var91 = 5;
var92 = NEW_standard__NativeArray(var91, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var92)->values[0] = (val*) var67;
((struct instance_standard__NativeArray*)var92)->values[1] = (val*) var_f;
((struct instance_standard__NativeArray*)var92)->values[2] = (val*) var72;
var93 = BOX_standard__Int(var82); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var92)->values[3] = (val*) var93;
((struct instance_standard__NativeArray*)var92)->values[4] = (val*) var86;
{
((void (*)(val* self, val* p0, long p1))(var90->class->vft[COLOR_standard__array__Array__with_native]))(var90, var92, var91) /* with_native on <var90:Array[Object]>*/;
}
}
{
var94 = ((val* (*)(val* self))(var90->class->vft[COLOR_standard__string__Object__to_s]))(var90) /* to_s on <var90:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var94); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
} else {
if (varonce95) {
var96 = varonce95;
} else {
var97 = "PRINT_ERROR(\"\\n\");";
var98 = 18;
var99 = standard___standard__NativeString___to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var96); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
}
if (varonce100) {
var101 = varonce100;
} else {
var102 = "show_backtrace(1);";
var103 = 18;
var104 = standard___standard__NativeString___to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var101); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_cast for (self: AbstractCompilerVisitor, RuntimeVariable, MType, String) */
void nit___nit__AbstractCompilerVisitor___add_cast(val* self, val* p0, val* p1, val* p2) {
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_tag /* var tag: String */;
val* var /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
val* var10 /* : Array[Object] */;
long var11 /* : Int */;
val* var12 /* : NativeArray[Object] */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_cn /* var cn: String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : FlatString */;
val* var20 /* : String */;
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
var_value = p0;
var_mtype = p1;
var_tag = p2;
{
var = ((val* (*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__type_test]))(self, var_value, var_mtype, var_tag) /* type_test on <self:AbstractCompilerVisitor>*/;
}
var_res = var;
if (varonce) {
var1 = varonce;
} else {
var2 = "if (unlikely(!";
var3 = 14;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
if (varonce5) {
var6 = varonce5;
} else {
var7 = ")) {";
var8 = 4;
var9 = standard___standard__NativeString___to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
var10 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var10 = array_instance Array[Object] */
var11 = 3;
var12 = NEW_standard__NativeArray(var11, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var12)->values[0] = (val*) var1;
((struct instance_standard__NativeArray*)var12)->values[1] = (val*) var_res;
((struct instance_standard__NativeArray*)var12)->values[2] = (val*) var6;
{
((void (*)(val* self, val* p0, long p1))(var10->class->vft[COLOR_standard__array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Object]>*/;
}
}
{
var13 = ((val* (*)(val* self))(var10->class->vft[COLOR_standard__string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var13); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
{
var14 = ((val* (*)(val* self, val* p0))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(self, var_value) /* class_name_string on <self:AbstractCompilerVisitor>*/;
}
var_cn = var14;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "PRINT_ERROR(\"Runtime error: Cast failed. Expected `%s`, got `%s`\", \"";
var18 = 68;
var19 = standard___standard__NativeString___to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
{
var20 = ((val* (*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype) /* to_s on <var_mtype:MType>*/;
}
{
var21 = standard___standard__Text___escape_to_c(var20);
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "\", ";
var25 = 3;
var26 = standard___standard__NativeString___to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = ");";
var30 = 2;
var31 = standard___standard__NativeString___to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 5;
var34 = NEW_standard__NativeArray(var33, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var34)->values[0] = (val*) var16;
((struct instance_standard__NativeArray*)var34)->values[1] = (val*) var21;
((struct instance_standard__NativeArray*)var34)->values[2] = (val*) var23;
((struct instance_standard__NativeArray*)var34)->values[3] = (val*) var_cn;
((struct instance_standard__NativeArray*)var34)->values[4] = (val*) var28;
{
((void (*)(val* self, val* p0, long p1))(var32->class->vft[COLOR_standard__array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
}
{
var35 = ((val* (*)(val* self))(var32->class->vft[COLOR_standard__string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var35); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
{
nit___nit__AbstractCompilerVisitor___add_raw_abort(self); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_raw_abort on <self:AbstractCompilerVisitor>*/
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = "}";
var39 = 1;
var40 = standard___standard__NativeString___to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#ret for (self: AbstractCompilerVisitor, RuntimeVariable) */
void nit___nit__AbstractCompilerVisitor___ret(val* self, val* p0) {
val* var_s /* var s: RuntimeVariable */;
val* var /* : nullable StaticFrame */;
val* var2 /* : nullable StaticFrame */;
val* var3 /* : nullable RuntimeVariable */;
val* var5 /* : nullable RuntimeVariable */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
val* var10 /* : nullable StaticFrame */;
val* var12 /* : nullable StaticFrame */;
val* var13 /* : nullable String */;
val* var15 /* : nullable String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
val* var21 /* : Array[Object] */;
long var22 /* : Int */;
val* var23 /* : NativeArray[Object] */;
val* var24 /* : String */;
var_s = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1577);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#returnvar (var) on <var:nullable StaticFrame> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1734);
show_backtrace(1);
}
var5 = var->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var:nullable StaticFrame> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1577);
show_backtrace(1);
}
{
nit___nit__AbstractCompilerVisitor___assign(self, var3, var_s); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <self:AbstractCompilerVisitor>*/
}
if (varonce) {
var6 = varonce;
} else {
var7 = "goto ";
var8 = 5;
var9 = standard___standard__NativeString___to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var12 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1578);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#returnlabel (var10) on <var10:nullable StaticFrame> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1737);
show_backtrace(1);
}
var15 = var10->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var10:nullable StaticFrame> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1578);
show_backtrace(1);
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = ";";
var19 = 1;
var20 = standard___standard__NativeString___to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var21 = array_instance Array[Object] */
var22 = 3;
var23 = NEW_standard__NativeArray(var22, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var23)->values[0] = (val*) var6;
((struct instance_standard__NativeArray*)var23)->values[1] = (val*) var13;
((struct instance_standard__NativeArray*)var23)->values[2] = (val*) var17;
{
((void (*)(val* self, val* p0, long p1))(var21->class->vft[COLOR_standard__array__Array__with_native]))(var21, var23, var22) /* with_native on <var21:Array[Object]>*/;
}
}
{
var24 = ((val* (*)(val* self))(var21->class->vft[COLOR_standard__string__Object__to_s]))(var21) /* to_s on <var21:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#stmt for (self: AbstractCompilerVisitor, nullable AExpr) */
void nit___nit__AbstractCompilerVisitor___stmt(val* self, val* p0) {
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable AArrayExpr */;
val* var9 /* : nullable AArrayExpr */;
val* var_narray /* var narray: nullable AArrayExpr */;
val* var10 /* : null */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other14 /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable StaticFrame */;
val* var19 /* : nullable StaticFrame */;
val* var20 /* : nullable RuntimeVariable */;
val* var22 /* : nullable RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var23 /* : nullable MType */;
val* var25 /* : nullable MType */;
val* var26 /* : RuntimeVariable */;
val* var_val /* var val: RuntimeVariable */;
val* var27 /* : nullable CallSite */;
val* var29 /* : nullable CallSite */;
val* var30 /* : Array[RuntimeVariable] */;
long var31 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var32 /* : nullable RuntimeVariable */;
val* var33 /* : nullable ANode */;
val* var35 /* : nullable ANode */;
val* var_old /* var old: nullable ANode */;
var_nexpr = p0;
var = NULL;
if (var_nexpr == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nexpr,var) on <var_nexpr:nullable AExpr> */
var_other = var;
{
{ /* Inline kernel#Object#is_same_instance (var_nexpr,var_other) on <var_nexpr:nullable AExpr(AExpr)> */
var6 = var_nexpr == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AExpr#comprehension (var_nexpr) on <var_nexpr:nullable AExpr(AExpr)> */
var9 = var_nexpr->attrs[COLOR_nit__typing__AExpr___comprehension].val; /* _comprehension on <var_nexpr:nullable AExpr(AExpr)> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_narray = var7;
var10 = NULL;
if (var_narray == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_narray,var10) on <var_narray:nullable AArrayExpr> */
var_other14 = var10;
{
var15 = ((short int (*)(val* self, val* p0))(var_narray->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_narray, var_other14) /* == on <var_narray:nullable AArrayExpr(AArrayExpr)>*/;
}
var16 = !var15;
var12 = var16;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var19 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (var17 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1588);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#comprehension (var17) on <var17:nullable StaticFrame> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1744);
show_backtrace(1);
}
var22 = var17->attrs[COLOR_nit__abstract_compiler__StaticFrame___comprehension].val; /* _comprehension on <var17:nullable StaticFrame> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1588);
show_backtrace(1);
}
var_recv = var20;
{
{ /* Inline typing#AArrayExpr#element_mtype (var_narray) on <var_narray:nullable AArrayExpr(AArrayExpr)> */
var25 = var_narray->attrs[COLOR_nit__typing__AArrayExpr___element_mtype].val; /* _element_mtype on <var_narray:nullable AArrayExpr(AArrayExpr)> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nit___nit__AbstractCompilerVisitor___expr(self, var_nexpr, var23);
}
var_val = var26;
{
{ /* Inline typing#AArrayExpr#push_callsite (var_narray) on <var_narray:nullable AArrayExpr(AArrayExpr)> */
var29 = var_narray->attrs[COLOR_nit__typing__AArrayExpr___push_callsite].val; /* _push_callsite on <var_narray:nullable AArrayExpr(AArrayExpr)> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1590);
show_backtrace(1);
}
var30 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var31 = 2;
{
standard___standard__Array___with_capacity(var30, var31); /* Direct call array#Array#with_capacity on <var30:Array[RuntimeVariable]>*/
}
var_ = var30;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_recv); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var_val); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var32 = ((val* (*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(self, var27, var_) /* compile_callsite on <self:AbstractCompilerVisitor>*/;
}
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var35 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
var_old = var33;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (self,var_nexpr) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_nexpr; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL36:(void)0;
}
}
{
((void (*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_nit__abstract_compiler__AExpr__stmt]))(var_nexpr, self) /* stmt on <var_nexpr:nullable AExpr(AExpr)>*/;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (self,var_old) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_old; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL37:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#expr for (self: AbstractCompilerVisitor, AExpr, nullable MType): RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_nexpr /* var nexpr: AExpr */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : nullable ANode */;
val* var3 /* : nullable ANode */;
val* var_old /* var old: nullable ANode */;
val* var5 /* : nullable RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var6 /* : null */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MType */;
val* var13 /* : RuntimeVariable */;
val* var14 /* : nullable MType */;
val* var15 /* : RuntimeVariable */;
val* var16 /* : nullable MType */;
val* var18 /* : nullable MType */;
val* var_implicit_cast_to /* var implicit_cast_to: nullable MType */;
short int var19 /* : Bool */;
val* var20 /* : null */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var_ /* var : Bool */;
val* var26 /* : AbstractCompiler */;
val* var28 /* : AbstractCompiler */;
val* var29 /* : ModelBuilder */;
val* var31 /* : ModelBuilder */;
val* var32 /* : ToolContext */;
val* var34 /* : ToolContext */;
val* var35 /* : OptionBool */;
val* var37 /* : OptionBool */;
val* var38 /* : nullable Object */;
val* var40 /* : nullable Object */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
static val* varonce;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
val* var47 /* : RuntimeVariable */;
var_nexpr = p0;
var_mtype = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_old = var1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (self,var_nexpr) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_nexpr; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL4:(void)0;
}
}
{
var5 = ((val* (*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_nit__abstract_compiler__AExpr__expr]))(var_nexpr, self) /* expr on <var_nexpr:AExpr>*/;
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1606);
show_backtrace(1);
}
var_res = var5;
var6 = NULL;
if (var_mtype == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,var6) on <var_mtype:nullable MType> */
var_other = var6;
{
var10 = ((short int (*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other) /* == on <var_mtype:nullable MType(MType)>*/;
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
var12 = nit___nit__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var12;
{
var13 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_res, var_mtype);
}
var_res = var13;
} else {
}
{
var14 = ((val* (*)(val* self))(var_nexpr->class->vft[COLOR_nit__typing__AExpr__mtype]))(var_nexpr) /* mtype on <var_nexpr:AExpr>*/;
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1611);
show_backtrace(1);
}
{
var15 = nit___nit__AbstractCompilerVisitor___autoadapt(self, var_res, var14);
}
var_res = var15;
{
{ /* Inline typing#AExpr#implicit_cast_to (var_nexpr) on <var_nexpr:AExpr> */
var18 = var_nexpr->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val; /* _implicit_cast_to on <var_nexpr:AExpr> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_implicit_cast_to = var16;
var20 = NULL;
if (var_implicit_cast_to == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_implicit_cast_to,var20) on <var_implicit_cast_to:nullable MType> */
var_other = var20;
{
var24 = ((short int (*)(val* self, val* p0))(var_implicit_cast_to->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_implicit_cast_to, var_other) /* == on <var_implicit_cast_to:nullable MType(MType)>*/;
}
var25 = !var24;
var22 = var25;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
var_ = var21;
if (var21){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var28 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var26) on <var26:AbstractCompiler> */
var31 = var26->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var26:AbstractCompiler> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var29) on <var29:ModelBuilder> */
var34 = var29->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var29:ModelBuilder> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_autocast (var32) on <var32:ToolContext> */
var37 = var32->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <var32:ToolContext> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 53);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline opts#Option#value (var35) on <var35:OptionBool> */
var40 = var35->attrs[COLOR_opts__Option___value].val; /* _value on <var35:OptionBool> */
var38 = var40;
RET_LABEL39:(void)0;
}
}
var41 = ((struct instance_standard__Bool*)var38)->value; /* autounbox from nullable Object to Bool */;
var42 = !var41;
var19 = var42;
} else {
var19 = var_;
}
if (var19){
if (varonce) {
var43 = varonce;
} else {
var44 = "auto";
var45 = 4;
var46 = standard___standard__NativeString___to_s_with_length(var44, var45);
var43 = var46;
varonce = var43;
}
{
nit___nit__AbstractCompilerVisitor___add_cast(self, var_res, var_implicit_cast_to, var43); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_cast on <self:AbstractCompilerVisitor>*/
}
{
var47 = nit___nit__AbstractCompilerVisitor___autoadapt(self, var_res, var_implicit_cast_to);
}
var_res = var47;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (self,var_old) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_old; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL48:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#expr_bool for (self: AbstractCompilerVisitor, AExpr): RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___expr_bool(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_nexpr /* var nexpr: AExpr */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
var_nexpr = p0;
{
var1 = nit___nit__AbstractCompilerVisitor___bool_type(self);
}
{
var2 = nit___nit__AbstractCompilerVisitor___expr(self, var_nexpr, var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#debug for (self: AbstractCompilerVisitor, String) */
void nit___nit__AbstractCompilerVisitor___debug(val* self, val* p0) {
val* var_message /* var message: String */;
val* var /* : nullable ANode */;
val* var2 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
val* var3 /* : null */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : NativeString */;
long var12 /* : Int */;
val* var13 /* : FlatString */;
val* var14 /* : Array[Object] */;
long var15 /* : Int */;
val* var16 /* : NativeArray[Object] */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
long var21 /* : Int */;
val* var22 /* : FlatString */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
val* var28 /* : Array[Object] */;
long var29 /* : Int */;
val* var30 /* : NativeArray[Object] */;
val* var31 /* : String */;
var_message = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_node = var;
var3 = NULL;
if (var_node == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node,var3) on <var_node:nullable ANode> */
var_other = var3;
{
{ /* Inline kernel#Object#is_same_instance (var_node,var_other) on <var_node:nullable ANode(ANode)> */
var9 = var_node == var_other;
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
if (varonce) {
var10 = varonce;
} else {
var11 = "?: ";
var12 = 3;
var13 = standard___standard__NativeString___to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
var14 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var14 = array_instance Array[Object] */
var15 = 2;
var16 = NEW_standard__NativeArray(var15, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var16)->values[0] = (val*) var10;
((struct instance_standard__NativeArray*)var16)->values[1] = (val*) var_message;
{
((void (*)(val* self, val* p0, long p1))(var14->class->vft[COLOR_standard__array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
}
}
{
var17 = ((val* (*)(val* self))(var14->class->vft[COLOR_standard__string__Object__to_s]))(var14) /* to_s on <var14:Array[Object]>*/;
}
{
standard__file___Object___print(self, var17); /* Direct call file#Object#print on <self:AbstractCompilerVisitor>*/
}
} else {
{
nit___nit__ANode___debug(var_node, var_message); /* Direct call parser_nodes#ANode#debug on <var_node:nullable ANode(ANode)>*/
}
}
if (varonce18) {
var19 = varonce18;
} else {
var20 = "/* DEBUG: ";
var21 = 10;
var22 = standard___standard__NativeString___to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = " */";
var26 = 3;
var27 = standard___standard__NativeString___to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var28 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 3;
var30 = NEW_standard__NativeArray(var29, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var30)->values[0] = (val*) var19;
((struct instance_standard__NativeArray*)var30)->values[1] = (val*) var_message;
((struct instance_standard__NativeArray*)var30)->values[2] = (val*) var24;
{
((void (*)(val* self, val* p0, long p1))(var28->class->vft[COLOR_standard__array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[Object]>*/;
}
}
{
var31 = ((val* (*)(val* self))(var28->class->vft[COLOR_standard__string__Object__to_s]))(var28) /* to_s on <var28:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#mmethoddef for (self: AbstractRuntimeFunction): MMethodDef */
val* nit___nit__AbstractRuntimeFunction___mmethoddef(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:AbstractRuntimeFunction> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1644);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#mmethoddef= for (self: AbstractRuntimeFunction, MMethodDef) */
void nit___nit__AbstractRuntimeFunction___mmethoddef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___mmethoddef].val = p0; /* _mmethoddef on <self:AbstractRuntimeFunction> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name for (self: AbstractRuntimeFunction): String */
val* nit___nit__AbstractRuntimeFunction___c_name(val* self) {
val* var /* : String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
val* var_res /* var res: nullable String */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : String */;
val* var12 /* : String */;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#c_name_cache (self) on <self:AbstractRuntimeFunction> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___c_name_cache].val; /* _c_name_cache on <self:AbstractRuntimeFunction> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
var4 = NULL;
if (var_res == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,var4) on <var_res:nullable String> */
var_other = var4;
{
var8 = ((short int (*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#build_c_name (self) on <self:AbstractRuntimeFunction> */
var12 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___build_c_name].val; /* _build_c_name on <self:AbstractRuntimeFunction> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _build_c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 1851);
show_backtrace(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_res = var10;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#c_name_cache= (self,var_res) on <self:AbstractRuntimeFunction> */
self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___c_name_cache].val = var_res; /* _c_name_cache on <self:AbstractRuntimeFunction> */
RET_LABEL13:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name_cache for (self: AbstractRuntimeFunction): nullable String */
val* nit___nit__AbstractRuntimeFunction___c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___c_name_cache].val; /* _c_name_cache on <self:AbstractRuntimeFunction> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name_cache= for (self: AbstractRuntimeFunction, nullable String) */
void nit___nit__AbstractRuntimeFunction___c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___c_name_cache].val = p0; /* _c_name_cache on <self:AbstractRuntimeFunction> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#init for (self: AbstractRuntimeFunction) */
void nit___nit__AbstractRuntimeFunction___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__AbstractRuntimeFunction___standard__kernel__Object__init]))(self) /* init on <self:AbstractRuntimeFunction>*/;
}
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#name for (self: RuntimeVariable): String */
val* nit___nit__RuntimeVariable___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___name].val; /* _name on <self:RuntimeVariable> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1677);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#name= for (self: RuntimeVariable, String) */
void nit___nit__RuntimeVariable___name_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___name].val = p0; /* _name on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#mtype for (self: RuntimeVariable): MType */
val* nit___nit__RuntimeVariable___mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#mtype= for (self: RuntimeVariable, MType) */
void nit___nit__RuntimeVariable___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val = p0; /* _mtype on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#mcasttype for (self: RuntimeVariable): MType */
val* nit___nit__RuntimeVariable___mcasttype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:RuntimeVariable> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#mcasttype= for (self: RuntimeVariable, MType) */
void nit___nit__RuntimeVariable___mcasttype_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val = p0; /* _mcasttype on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#is_exact for (self: RuntimeVariable): Bool */
short int nit___nit__RuntimeVariable___is_exact(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___is_exact].s; /* _is_exact on <self:RuntimeVariable> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#is_exact= for (self: RuntimeVariable, Bool) */
void nit___nit__RuntimeVariable___is_exact_61d(val* self, short int p0) {
self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___is_exact].s = p0; /* _is_exact on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#init for (self: RuntimeVariable) */
void nit___nit__RuntimeVariable___standard__kernel__Object__init(val* self) {
val* var /* : MType */;
val* var2 /* : MType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : MType */;
val* var7 /* : MType */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (self) on <self:RuntimeVariable> */
var2 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((short int (*)(val* self))(var->class->vft[COLOR_nit__model__MType__need_anchor]))(var) /* need_anchor on <var:MType>*/;
}
var4 = !var3;
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1692);
show_backtrace(1);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (self) on <self:RuntimeVariable> */
var7 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:RuntimeVariable> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((short int (*)(val* self))(var5->class->vft[COLOR_nit__model__MType__need_anchor]))(var5) /* need_anchor on <var5:MType>*/;
}
var9 = !var8;
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1693);
show_backtrace(1);
}
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#to_s for (self: RuntimeVariable): String */
val* nit___nit__RuntimeVariable___standard__string__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline abstract_compiler#RuntimeVariable#name (self) on <self:RuntimeVariable> */
var3 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___name].val; /* _name on <self:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1677);
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
/* method abstract_compiler#RuntimeVariable#inspect for (self: RuntimeVariable): String */
val* nit___nit__RuntimeVariable___standard__string__Object__inspect(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : NativeString */;
long var6 /* : Int */;
val* var7 /* : FlatString */;
val* var_exact_str /* var exact_str: nullable Object */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : FlatString */;
val* var13 /* : MType */;
val* var15 /* : MType */;
val* var16 /* : MType */;
val* var18 /* : MType */;
short int var19 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : MType */;
val* var26 /* : MType */;
val* var27 /* : Array[Object] */;
long var28 /* : Int */;
val* var29 /* : NativeArray[Object] */;
val* var30 /* : String */;
val* var_type_str /* var type_str: nullable Object */;
val* var31 /* : MType */;
val* var33 /* : MType */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : NativeString */;
long var37 /* : Int */;
val* var38 /* : FlatString */;
val* var39 /* : MType */;
val* var41 /* : MType */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
val* var47 /* : Array[Object] */;
long var48 /* : Int */;
val* var49 /* : NativeArray[Object] */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : FlatString */;
val* var56 /* : String */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : NativeString */;
long var62 /* : Int */;
val* var63 /* : FlatString */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
val* var69 /* : Array[Object] */;
long var70 /* : Int */;
val* var71 /* : NativeArray[Object] */;
val* var72 /* : String */;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact (self) on <self:RuntimeVariable> */
var3 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___is_exact].s; /* _is_exact on <self:RuntimeVariable> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
if (varonce) {
var4 = varonce;
} else {
var5 = " exact";
var6 = 6;
var7 = standard___standard__NativeString___to_s_with_length(var5, var6);
var4 = var7;
varonce = var4;
}
var_exact_str = var4;
} else {
if (varonce8) {
var9 = varonce8;
} else {
var10 = "";
var11 = 0;
var12 = standard___standard__NativeString___to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
var_exact_str = var9;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (self) on <self:RuntimeVariable> */
var15 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (self) on <self:RuntimeVariable> */
var18 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:RuntimeVariable> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var13,var16) on <var13:MType> */
var_other = var16;
{
{ /* Inline kernel#Object#is_same_instance (var13,var_other) on <var13:MType> */
var23 = var13 == var_other;
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
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (self) on <self:RuntimeVariable> */
var26 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var27 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var27 = array_instance Array[Object] */
var28 = 2;
var29 = NEW_standard__NativeArray(var28, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var29)->values[0] = (val*) var24;
((struct instance_standard__NativeArray*)var29)->values[1] = (val*) var_exact_str;
{
((void (*)(val* self, val* p0, long p1))(var27->class->vft[COLOR_standard__array__Array__with_native]))(var27, var29, var28) /* with_native on <var27:Array[Object]>*/;
}
}
{
var30 = ((val* (*)(val* self))(var27->class->vft[COLOR_standard__string__Object__to_s]))(var27) /* to_s on <var27:Array[Object]>*/;
}
var_type_str = var30;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (self) on <self:RuntimeVariable> */
var33 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (varonce34) {
var35 = varonce34;
} else {
var36 = "(";
var37 = 1;
var38 = standard___standard__NativeString___to_s_with_length(var36, var37);
var35 = var38;
varonce34 = var35;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (self) on <self:RuntimeVariable> */
var41 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:RuntimeVariable> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = ")";
var45 = 1;
var46 = standard___standard__NativeString___to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
var47 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var47 = array_instance Array[Object] */
var48 = 5;
var49 = NEW_standard__NativeArray(var48, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var49)->values[0] = (val*) var31;
((struct instance_standard__NativeArray*)var49)->values[1] = (val*) var35;
((struct instance_standard__NativeArray*)var49)->values[2] = (val*) var39;
((struct instance_standard__NativeArray*)var49)->values[3] = (val*) var_exact_str;
((struct instance_standard__NativeArray*)var49)->values[4] = (val*) var43;
{
((void (*)(val* self, val* p0, long p1))(var47->class->vft[COLOR_standard__array__Array__with_native]))(var47, var49, var48) /* with_native on <var47:Array[Object]>*/;
}
}
{
var50 = ((val* (*)(val* self))(var47->class->vft[COLOR_standard__string__Object__to_s]))(var47) /* to_s on <var47:Array[Object]>*/;
}
var_type_str = var50;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = "<";
var54 = 1;
var55 = standard___standard__NativeString___to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#name (self) on <self:RuntimeVariable> */
var58 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___name].val; /* _name on <self:RuntimeVariable> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1677);
show_backtrace(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
if (varonce59) {
var60 = varonce59;
} else {
var61 = ":";
var62 = 1;
var63 = standard___standard__NativeString___to_s_with_length(var61, var62);
var60 = var63;
varonce59 = var60;
}
if (varonce64) {
var65 = varonce64;
} else {
var66 = ">";
var67 = 1;
var68 = standard___standard__NativeString___to_s_with_length(var66, var67);
var65 = var68;
varonce64 = var65;
}
var69 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var69 = array_instance Array[Object] */
var70 = 5;
var71 = NEW_standard__NativeArray(var70, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var71)->values[0] = (val*) var52;
((struct instance_standard__NativeArray*)var71)->values[1] = (val*) var56;
((struct instance_standard__NativeArray*)var71)->values[2] = (val*) var60;
((struct instance_standard__NativeArray*)var71)->values[3] = (val*) var_type_str;
((struct instance_standard__NativeArray*)var71)->values[4] = (val*) var65;
{
((void (*)(val* self, val* p0, long p1))(var69->class->vft[COLOR_standard__array__Array__with_native]))(var69, var71, var70) /* with_native on <var69:Array[Object]>*/;
}
}
{
var72 = ((val* (*)(val* self))(var69->class->vft[COLOR_standard__string__Object__to_s]))(var69) /* to_s on <var69:Array[Object]>*/;
}
var = var72;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#StaticFrame#visitor= for (self: StaticFrame, AbstractCompilerVisitor) */
void nit___nit__StaticFrame___visitor_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (visitor) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nit__abstract_compiler__StaticFrame__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1721);
show_backtrace(1);
}
self->attrs[COLOR_nit__abstract_compiler__StaticFrame___visitor].val = p0; /* _visitor on <self:StaticFrame> */
RET_LABEL:;
}
/* method abstract_compiler#StaticFrame#mpropdef for (self: StaticFrame): MPropDef */
val* nit___nit__StaticFrame___mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = self->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val; /* _mpropdef on <self:StaticFrame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1724);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#StaticFrame#mpropdef= for (self: StaticFrame, MPropDef) */
void nit___nit__StaticFrame___mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__StaticFrame___mpropdef].val = p0; /* _mpropdef on <self:StaticFrame> */
RET_LABEL:;
}
/* method abstract_compiler#StaticFrame#receiver for (self: StaticFrame): MClassType */
val* nit___nit__StaticFrame___receiver(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_nit__abstract_compiler__StaticFrame___receiver].val; /* _receiver on <self:StaticFrame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1728);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#StaticFrame#receiver= for (self: StaticFrame, MClassType) */
void nit___nit__StaticFrame___receiver_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__StaticFrame___receiver].val = p0; /* _receiver on <self:StaticFrame> */
RET_LABEL:;
}
/* method abstract_compiler#StaticFrame#arguments for (self: StaticFrame): Array[RuntimeVariable] */
val* nit___nit__StaticFrame___arguments(val* self) {
val* var /* : Array[RuntimeVariable] */;
val* var1 /* : Array[RuntimeVariable] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__StaticFrame___arguments].val; /* _arguments on <self:StaticFrame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1731);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#StaticFrame#arguments= for (self: StaticFrame, Array[RuntimeVariable]) */
void nit___nit__StaticFrame___arguments_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__StaticFrame___arguments].val = p0; /* _arguments on <self:StaticFrame> */
RET_LABEL:;
}
/* method abstract_compiler#StaticFrame#returnvar for (self: StaticFrame): nullable RuntimeVariable */
val* nit___nit__StaticFrame___returnvar(val* self) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = self->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <self:StaticFrame> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#StaticFrame#returnvar= for (self: StaticFrame, nullable RuntimeVariable) */
void nit___nit__StaticFrame___returnvar_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnvar].val = p0; /* _returnvar on <self:StaticFrame> */
RET_LABEL:;
}
/* method abstract_compiler#StaticFrame#returnlabel for (self: StaticFrame): nullable String */
val* nit___nit__StaticFrame___returnlabel(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <self:StaticFrame> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#StaticFrame#returnlabel= for (self: StaticFrame, nullable String) */
void nit___nit__StaticFrame___returnlabel_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnlabel].val = p0; /* _returnlabel on <self:StaticFrame> */
RET_LABEL:;
}
/* method abstract_compiler#StaticFrame#escapemark_names for (self: StaticFrame): HashMap[EscapeMark, String] */
val* nit___nit__StaticFrame___escapemark_names(val* self) {
val* var /* : HashMap[EscapeMark, String] */;
val* var1 /* : HashMap[EscapeMark, String] */;
var1 = self->attrs[COLOR_nit__abstract_compiler__StaticFrame___escapemark_names].val; /* _escapemark_names on <self:StaticFrame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1740);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#StaticFrame#comprehension for (self: StaticFrame): nullable RuntimeVariable */
val* nit___nit__StaticFrame___comprehension(val* self) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = self->attrs[COLOR_nit__abstract_compiler__StaticFrame___comprehension].val; /* _comprehension on <self:StaticFrame> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#StaticFrame#comprehension= for (self: StaticFrame, nullable RuntimeVariable) */
void nit___nit__StaticFrame___comprehension_61d(val* self, val* p0) {
self->attrs[COLOR_nit__abstract_compiler__StaticFrame___comprehension].val = p0; /* _comprehension on <self:StaticFrame> */
RET_LABEL:;
}
/* method abstract_compiler#StaticFrame#init for (self: StaticFrame) */
void nit___nit__StaticFrame___standard__kernel__Object__init(val* self) {
{
((void (*)(val* self))(self->class->vft[COLOR_nit___nit__StaticFrame___standard__kernel__Object__init]))(self) /* init on <self:StaticFrame>*/;
}
RET_LABEL:;
}
/* method abstract_compiler#MType#ctype for (self: MType): String */
val* nit__abstract_compiler___MType___ctype(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "val*";
var3 = 4;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#ctype_extern for (self: MType): String */
val* nit__abstract_compiler___MType___ctype_extern(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "val*";
var3 = 4;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#ctypename for (self: MType): String */
val* nit__abstract_compiler___MType___ctypename(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : FlatString */;
if (varonce) {
var1 = varonce;
} else {
var2 = "val";
var3 = 3;
var4 = standard___standard__NativeString___to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctype for (self: MClassType): String */
val* nit__abstract_compiler___MClassType___MType__ctype(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : String */;
val* var6 /* : String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
short int var11 /* : Bool */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
val* var17 /* : MClass */;
val* var19 /* : MClass */;
val* var20 /* : String */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
short int var28 /* : Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : MClass */;
val* var36 /* : MClass */;
val* var37 /* : String */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
short int var45 /* : Bool */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
val* var51 /* : MClass */;
val* var53 /* : MClass */;
val* var54 /* : String */;
val* var56 /* : String */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : FlatString */;
short int var62 /* : Bool */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : FlatString */;
val* var68 /* : MClass */;
val* var70 /* : MClass */;
val* var71 /* : String */;
val* var73 /* : String */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
short int var79 /* : Bool */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : FlatString */;
val* var85 /* : MClass */;
val* var87 /* : MClass */;
val* var88 /* : String */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : FlatString */;
short int var96 /* : Bool */;
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
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClass#name (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var1:MClass> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (varonce) {
var7 = varonce;
} else {
var8 = "Int";
var9 = 3;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
{
var11 = ((short int (*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var7) /* == on <var4:String>*/;
}
if (var11){
if (varonce12) {
var13 = varonce12;
} else {
var14 = "long";
var15 = 4;
var16 = standard___standard__NativeString___to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var = var13;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var19 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MClass#name (var17) on <var17:MClass> */
var22 = var17->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var17:MClass> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "Bool";
var26 = 4;
var27 = standard___standard__NativeString___to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
{
var28 = ((short int (*)(val* self, val* p0))(var20->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var20, var24) /* == on <var20:String>*/;
}
if (var28){
if (varonce29) {
var30 = varonce29;
} else {
var31 = "short int";
var32 = 9;
var33 = standard___standard__NativeString___to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
var = var30;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var36 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model#MClass#name (var34) on <var34:MClass> */
var39 = var34->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var34:MClass> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "Char";
var43 = 4;
var44 = standard___standard__NativeString___to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
{
var45 = ((short int (*)(val* self, val* p0))(var37->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var37, var41) /* == on <var37:String>*/;
}
if (var45){
if (varonce46) {
var47 = varonce46;
} else {
var48 = "char";
var49 = 4;
var50 = standard___standard__NativeString___to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var = var47;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var53 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline model#MClass#name (var51) on <var51:MClass> */
var56 = var51->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var51:MClass> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
if (varonce57) {
var58 = varonce57;
} else {
var59 = "Float";
var60 = 5;
var61 = standard___standard__NativeString___to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
{
var62 = ((short int (*)(val* self, val* p0))(var54->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var54, var58) /* == on <var54:String>*/;
}
if (var62){
if (varonce63) {
var64 = varonce63;
} else {
var65 = "double";
var66 = 6;
var67 = standard___standard__NativeString___to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
var = var64;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var70 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline model#MClass#name (var68) on <var68:MClass> */
var73 = var68->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var68:MClass> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = "NativeString";
var77 = 12;
var78 = standard___standard__NativeString___to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
{
var79 = ((short int (*)(val* self, val* p0))(var71->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var71, var75) /* == on <var71:String>*/;
}
if (var79){
if (varonce80) {
var81 = varonce80;
} else {
var82 = "char*";
var83 = 5;
var84 = standard___standard__NativeString___to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
var = var81;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var87 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
{ /* Inline model#MClass#name (var85) on <var85:MClass> */
var90 = var85->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var85:MClass> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
if (varonce91) {
var92 = varonce91;
} else {
var93 = "NativeArray";
var94 = 11;
var95 = standard___standard__NativeString___to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
{
var96 = ((short int (*)(val* self, val* p0))(var88->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var88, var92) /* == on <var88:String>*/;
}
if (var96){
if (varonce97) {
var98 = varonce97;
} else {
var99 = "val*";
var100 = 4;
var101 = standard___standard__NativeString___to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
var = var98;
goto RET_LABEL;
} else {
if (varonce102) {
var103 = varonce102;
} else {
var104 = "val*";
var105 = 4;
var106 = standard___standard__NativeString___to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
var = var103;
goto RET_LABEL;
}
}
}
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctype_extern for (self: MClassType): String */
val* nit__abstract_compiler___MClassType___MType__ctype_extern(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : MClassKind */;
val* var6 /* : MClassKind */;
val* var7 /* : MClassKind */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
val* var17 /* : String */;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_nit__model__MClass___kind].val; /* _kind on <var1:MClass> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 399);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nit__model___standard__Object___extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var4,var7) on <var4:MClassKind> */
var_other = var7;
{
{ /* Inline kernel#Object#is_same_instance (var4,var_other) on <var4:MClassKind> */
var12 = var4 == var_other;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
if (var8){
if (varonce) {
var13 = varonce;
} else {
var14 = "void*";
var15 = 5;
var16 = standard___standard__NativeString___to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
var = var13;
goto RET_LABEL;
} else {
{
var17 = nit__abstract_compiler___MClassType___MType__ctype(self);
}
var = var17;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctypename for (self: MClassType): String */
val* nit__abstract_compiler___MClassType___MType__ctypename(val* self) {
val* var /* : String */;
val* var1 /* : MClass */;
val* var3 /* : MClass */;
val* var4 /* : String */;
val* var6 /* : String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : FlatString */;
short int var11 /* : Bool */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
val* var17 /* : MClass */;
val* var19 /* : MClass */;
val* var20 /* : String */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
short int var28 /* : Bool */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
long var32 /* : Int */;
val* var33 /* : FlatString */;
val* var34 /* : MClass */;
val* var36 /* : MClass */;
val* var37 /* : String */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
short int var45 /* : Bool */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : FlatString */;
val* var51 /* : MClass */;
val* var53 /* : MClass */;
val* var54 /* : String */;
val* var56 /* : String */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
long var60 /* : Int */;
val* var61 /* : FlatString */;
short int var62 /* : Bool */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : FlatString */;
val* var68 /* : MClass */;
val* var70 /* : MClass */;
val* var71 /* : String */;
val* var73 /* : String */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
long var77 /* : Int */;
val* var78 /* : FlatString */;
short int var79 /* : Bool */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : FlatString */;
val* var85 /* : MClass */;
val* var87 /* : MClass */;
val* var88 /* : String */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : NativeString */;
long var94 /* : Int */;
val* var95 /* : FlatString */;
short int var96 /* : Bool */;
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
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClass#name (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var1:MClass> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (varonce) {
var7 = varonce;
} else {
var8 = "Int";
var9 = 3;
var10 = standard___standard__NativeString___to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
{
var11 = ((short int (*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var7) /* == on <var4:String>*/;
}
if (var11){
if (varonce12) {
var13 = varonce12;
} else {
var14 = "l";
var15 = 1;
var16 = standard___standard__NativeString___to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
var = var13;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var19 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MClass#name (var17) on <var17:MClass> */
var22 = var17->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var17:MClass> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "Bool";
var26 = 4;
var27 = standard___standard__NativeString___to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
{
var28 = ((short int (*)(val* self, val* p0))(var20->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var20, var24) /* == on <var20:String>*/;
}
if (var28){
if (varonce29) {
var30 = varonce29;
} else {
var31 = "s";
var32 = 1;
var33 = standard___standard__NativeString___to_s_with_length(var31, var32);
var30 = var33;
varonce29 = var30;
}
var = var30;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var36 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model#MClass#name (var34) on <var34:MClass> */
var39 = var34->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var34:MClass> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "Char";
var43 = 4;
var44 = standard___standard__NativeString___to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
{
var45 = ((short int (*)(val* self, val* p0))(var37->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var37, var41) /* == on <var37:String>*/;
}
if (var45){
if (varonce46) {
var47 = varonce46;
} else {
var48 = "c";
var49 = 1;
var50 = standard___standard__NativeString___to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
var = var47;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var53 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline model#MClass#name (var51) on <var51:MClass> */
var56 = var51->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var51:MClass> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
if (varonce57) {
var58 = varonce57;
} else {
var59 = "Float";
var60 = 5;
var61 = standard___standard__NativeString___to_s_with_length(var59, var60);
var58 = var61;
varonce57 = var58;
}
{
var62 = ((short int (*)(val* self, val* p0))(var54->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var54, var58) /* == on <var54:String>*/;
}
if (var62){
if (varonce63) {
var64 = varonce63;
} else {
var65 = "d";
var66 = 1;
var67 = standard___standard__NativeString___to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
var = var64;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var70 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
{ /* Inline model#MClass#name (var68) on <var68:MClass> */
var73 = var68->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var68:MClass> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (varonce74) {
var75 = varonce74;
} else {
var76 = "NativeString";
var77 = 12;
var78 = standard___standard__NativeString___to_s_with_length(var76, var77);
var75 = var78;
varonce74 = var75;
}
{
var79 = ((short int (*)(val* self, val* p0))(var71->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var71, var75) /* == on <var71:String>*/;
}
if (var79){
if (varonce80) {
var81 = varonce80;
} else {
var82 = "str";
var83 = 3;
var84 = standard___standard__NativeString___to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
var = var81;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var87 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1058);
show_backtrace(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
{ /* Inline model#MClass#name (var85) on <var85:MClass> */
var90 = var85->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var85:MClass> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
if (varonce91) {
var92 = varonce91;
} else {
var93 = "NativeArray";
var94 = 11;
var95 = standard___standard__NativeString___to_s_with_length(var93, var94);
var92 = var95;
varonce91 = var92;
}
{
var96 = ((short int (*)(val* self, val* p0))(var88->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var88, var92) /* == on <var88:String>*/;
}
if (var96){
if (varonce97) {
var98 = varonce97;
} else {
var99 = "val";
var100 = 3;
var101 = standard___standard__NativeString___to_s_with_length(var99, var100);
var98 = var101;
varonce97 = var98;
}
var = var98;
goto RET_LABEL;
} else {
if (varonce102) {
var103 = varonce102;
} else {
var104 = "val";
var105 = 3;
var106 = standard___standard__NativeString___to_s_with_length(var104, var105);
var103 = var106;
varonce102 = var103;
}
var = var103;
goto RET_LABEL;
}
}
}
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#can_inline for (self: MMethodDef, AbstractCompilerVisitor): Bool */
short int nit__abstract_compiler___MMethodDef___can_inline(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : AbstractCompiler */;
val* var8 /* : AbstractCompiler */;
val* var9 /* : ModelBuilder */;
val* var11 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var12 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
short int var20 /* : Bool */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nit__abstract_compiler__MPropDef__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1815);
show_backtrace(1);
}
var_v = p0;
{
{ /* Inline model#MMethodDef#is_abstract (self) on <self:MMethodDef> */
var4 = self->attrs[COLOR_nit__model__MMethodDef___is_abstract].s; /* _is_abstract on <self:MMethodDef> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (var2){
var5 = 1;
var = var5;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var8 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var6) on <var6:AbstractCompiler> */
var11 = var6->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var6:AbstractCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_modelbuilder = var9;
{
var12 = nit__modelize_property___ModelBuilder___mpropdef2node(var_modelbuilder, self);
}
var_node = var12;
/* <var_node:nullable ANode> isa APropdef */
cltype14 = type_nit__APropdef.color;
idtype15 = type_nit__APropdef.id;
if(var_node == NULL) {
var13 = 0;
} else {
if(cltype14 >= var_node->type->table_size) {
var13 = 0;
} else {
var13 = var_node->type->type_table[cltype14] == idtype15;
}
}
if (var13){
{
var16 = ((short int (*)(val* self))(var_node->class->vft[COLOR_nit__abstract_compiler__APropdef__can_inline]))(var_node) /* can_inline on <var_node:nullable ANode(APropdef)>*/;
}
var = var16;
goto RET_LABEL;
} else {
/* <var_node:nullable ANode> isa AClassdef */
cltype18 = type_nit__AClassdef.color;
idtype19 = type_nit__AClassdef.id;
if(var_node == NULL) {
var17 = 0;
} else {
if(cltype18 >= var_node->type->table_size) {
var17 = 0;
} else {
var17 = var_node->type->type_table[cltype18] == idtype19;
}
}
if (var17){
var20 = 1;
var = var20;
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1827);
show_backtrace(1);
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#compile_inside_to_c for (self: MMethodDef, AbstractCompilerVisitor, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nit__abstract_compiler___MMethodDef___compile_inside_to_c(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
short int var1 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var2 /* : AbstractCompiler */;
val* var4 /* : AbstractCompiler */;
val* var5 /* : ModelBuilder */;
val* var7 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var8 /* : nullable Object */;
val* var10 /* : nullable Object */;
val* var_val /* var val: nullable Object */;
val* var11 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
val* var15 /* : nullable ANode */;
val* var17 /* : nullable ANode */;
val* var_oldnode /* var oldnode: nullable ANode */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
val* var23 /* : nullable ANode */;
val* var25 /* : nullable ANode */;
val* var_oldnode26 /* var oldnode: nullable ANode */;
val* var29 /* : null */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : RuntimeVariable */;
val* var33 /* : null */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nit__abstract_compiler__MPropDef__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var1 = 0;
} else {
var1 = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1831);
show_backtrace(1);
}
var_v = p0;
var_arguments = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var4 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_modelbuilder = var5;
{
{ /* Inline model#MMethodDef#constant_value (self) on <self:MMethodDef> */
var10 = self->attrs[COLOR_nit__model__MMethodDef___constant_value].val; /* _constant_value on <self:MMethodDef> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_val = var8;
{
var11 = nit__modelize_property___ModelBuilder___mpropdef2node(var_modelbuilder, self);
}
var_node = var11;
/* <var_node:nullable ANode> isa APropdef */
cltype13 = type_nit__APropdef.color;
idtype14 = type_nit__APropdef.id;
if(var_node == NULL) {
var12 = 0;
} else {
if(cltype13 >= var_node->type->table_size) {
var12 = 0;
} else {
var12 = var_node->type->type_table[cltype13] == idtype14;
}
}
if (var12){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (var_v) on <var_v:AbstractCompilerVisitor> */
var17 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <var_v:AbstractCompilerVisitor> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_oldnode = var15;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_node) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_node; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL18:(void)0;
}
}
{
nit__abstract_compiler___MMethodDef___compile_parameter_check(self, var_v, var_arguments); /* Direct call abstract_compiler#MMethodDef#compile_parameter_check on <self:MMethodDef>*/
}
{
((void (*)(val* self, val* p0, val* p1, val* p2))(var_node->class->vft[COLOR_nit__abstract_compiler__APropdef__compile_to_c]))(var_node, var_v, self, var_arguments) /* compile_to_c on <var_node:nullable ANode(APropdef)>*/;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_oldnode) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_oldnode; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL19:(void)0;
}
}
} else {
/* <var_node:nullable ANode> isa AClassdef */
cltype21 = type_nit__AClassdef.color;
idtype22 = type_nit__AClassdef.id;
if(var_node == NULL) {
var20 = 0;
} else {
if(cltype21 >= var_node->type->table_size) {
var20 = 0;
} else {
var20 = var_node->type->type_table[cltype21] == idtype22;
}
}
if (var20){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (var_v) on <var_v:AbstractCompilerVisitor> */
var25 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <var_v:AbstractCompilerVisitor> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_oldnode26 = var23;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_node) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_node; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL27:(void)0;
}
}
{
nit__abstract_compiler___MMethodDef___compile_parameter_check(self, var_v, var_arguments); /* Direct call abstract_compiler#MMethodDef#compile_parameter_check on <self:MMethodDef>*/
}
{
nit__abstract_compiler___AClassdef___compile_to_c(var_node, var_v, self, var_arguments); /* Direct call abstract_compiler#AClassdef#compile_to_c on <var_node:nullable ANode(AClassdef)>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_oldnode26) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_oldnode26; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL28:(void)0;
}
}
} else {
var29 = NULL;
if (var_val == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (0) {
var31 = ((short int (*)(val* self, val* p0))(var_val->class->vft[COLOR_standard__kernel__Object___33d_61d]))(var_val, var29) /* != on <var_val:nullable Object>*/;
var30 = var31;
}
if (var30){
{
var32 = nit___nit__AbstractCompilerVisitor___value_instance(var_v, var_val);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1852);
show_backtrace(1);
}
}
}
var33 = NULL;
var = var33;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#compile_parameter_check for (self: MMethodDef, AbstractCompilerVisitor, Array[RuntimeVariable]) */
void nit__abstract_compiler___MMethodDef___compile_parameter_check(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : ModelBuilder */;
val* var6 /* : ModelBuilder */;
val* var7 /* : ToolContext */;
val* var9 /* : ToolContext */;
val* var10 /* : OptionBool */;
val* var12 /* : OptionBool */;
val* var13 /* : nullable Object */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var_i /* var i: Int */;
val* var18 /* : nullable MSignature */;
val* var20 /* : nullable MSignature */;
long var21 /* : Int */;
long var_ /* var : Int */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
const char* var_class_name27;
short int var28 /* : Bool */;
val* var29 /* : nullable MSignature */;
val* var31 /* : nullable MSignature */;
long var32 /* : Int */;
long var34 /* : Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : MProperty */;
val* var40 /* : MProperty */;
val* var41 /* : MPropDef */;
val* var43 /* : MPropDef */;
val* var44 /* : nullable MSignature */;
val* var46 /* : nullable MSignature */;
val* var47 /* : Array[MParameter] */;
val* var49 /* : Array[MParameter] */;
val* var50 /* : nullable Object */;
val* var51 /* : MType */;
val* var53 /* : MType */;
val* var_origmtype /* var origmtype: MType */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
val* var56 /* : nullable MSignature */;
val* var58 /* : nullable MSignature */;
val* var59 /* : Array[MParameter] */;
val* var61 /* : Array[MParameter] */;
val* var62 /* : nullable Object */;
val* var63 /* : MType */;
val* var65 /* : MType */;
val* var_mtype /* var mtype: MType */;
static val* varonce;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : FlatString */;
val* var75 /* : nullable MSignature */;
val* var77 /* : nullable MSignature */;
val* var78 /* : Array[MParameter] */;
val* var80 /* : Array[MParameter] */;
val* var81 /* : nullable Object */;
val* var82 /* : String */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
long var90 /* : Int */;
long var91 /* : Int */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
long var97 /* : Int */;
val* var98 /* : nullable Object */;
val* var99 /* : String */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : FlatString */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
long var108 /* : Int */;
val* var109 /* : FlatString */;
val* var110 /* : Array[Object] */;
long var111 /* : Int */;
val* var112 /* : NativeArray[Object] */;
val* var113 /* : Object */;
val* var114 /* : String */;
long var115 /* : Int */;
long var116 /* : Int */;
short int var118 /* : Bool */;
int cltype119;
int idtype120;
const char* var_class_name121;
long var122 /* : Int */;
val* var123 /* : nullable Object */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : NativeString */;
long var127 /* : Int */;
val* var128 /* : FlatString */;
long var129 /* : Int */;
long var130 /* : Int */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nit__abstract_compiler__MPropDef__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1857);
show_backtrace(1);
}
var_v = p0;
var_arguments = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1059);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 481);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var4) on <var4:ModelBuilder> */
var9 = var4->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var4:ModelBuilder> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_covariance (var7) on <var7:ToolContext> */
var12 = var7->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_covariance].val; /* _opt_no_check_covariance on <var7:ToolContext> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_covariance");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 47);
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
goto RET_LABEL;
} else {
}
var17 = 0;
var_i = var17;
{
{ /* Inline model#MMethodDef#msignature (self) on <self:MMethodDef> */
var20 = self->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1862);
show_backtrace(1);
} else {
var21 = nit___nit__MSignature___arity(var18);
}
var_ = var21;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var24 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var24)) {
var_class_name27 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name27);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var28 = var_i < var_;
var22 = var28;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
if (var22){
{
{ /* Inline model#MMethodDef#msignature (self) on <self:MMethodDef> */
var31 = self->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1864);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#vararg_rank (var29) on <var29:nullable MSignature> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1635);
show_backtrace(1);
}
var34 = var29->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <var29:nullable MSignature> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var32,var_i) on <var32:Int> */
var37 = var32 == var_i;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MMethodDef> */
var40 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MMethodDef> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var38) on <var38:MProperty(MMethod)> */
var43 = var38->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var38:MProperty(MMethod)> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1773);
show_backtrace(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var41) on <var41:MPropDef(MMethodDef)> */
var46 = var41->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var41:MPropDef(MMethodDef)> */
var44 = var46;
RET_LABEL45:(void)0;
}
}
if (var44 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1867);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#mparameters (var44) on <var44:nullable MSignature> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var49 = var44->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var44:nullable MSignature> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
var50 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var47, var_i);
}
{
{ /* Inline model#MParameter#mtype (var50) on <var50:nullable Object(MParameter)> */
var53 = var50->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var50:nullable Object(MParameter)> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
var_origmtype = var51;
{
var54 = ((short int (*)(val* self))(var_origmtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_origmtype) /* need_anchor on <var_origmtype:MType>*/;
}
var55 = !var54;
if (var55){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MMethodDef#msignature (self) on <self:MMethodDef> */
var58 = self->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
if (var56 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1871);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#mparameters (var56) on <var56:nullable MSignature> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var61 = var56->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var56:nullable MSignature> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var59, var_i);
}
{
{ /* Inline model#MParameter#mtype (var62) on <var62:nullable Object(MParameter)> */
var65 = var62->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var62:nullable Object(MParameter)> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1690);
show_backtrace(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
var_mtype = var63;
if (varonce) {
var66 = varonce;
} else {
var67 = "/* Covariant cast for argument ";
var68 = 31;
var69 = standard___standard__NativeString___to_s_with_length(var67, var68);
var66 = var69;
varonce = var66;
}
if (varonce70) {
var71 = varonce70;
} else {
var72 = " (";
var73 = 2;
var74 = standard___standard__NativeString___to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
{
{ /* Inline model#MMethodDef#msignature (self) on <self:MMethodDef> */
var77 = self->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (var75 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1875);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#mparameters (var75) on <var75:nullable MSignature> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var80 = var75->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var75:nullable MSignature> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1592);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var81 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var78, var_i);
}
{
{ /* Inline model#MParameter#name (var81) on <var81:nullable Object(MParameter)> */
var84 = var81->attrs[COLOR_nit__model__MParameter___name].val; /* _name on <var81:nullable Object(MParameter)> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1687);
show_backtrace(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = ") ";
var88 = 2;
var89 = standard___standard__NativeString___to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var90 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var90) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var90:Int> isa OTHER */
/* <var90:Int> isa OTHER */
var93 = 1; /* easy <var90:Int> isa OTHER*/
if (unlikely(!var93)) {
var_class_name96 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var97 = var_i + var90;
var91 = var97;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
{
var98 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var91);
}
{
var99 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var98);
}
if (varonce100) {
var101 = varonce100;
} else {
var102 = " isa ";
var103 = 5;
var104 = standard___standard__NativeString___to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
if (varonce105) {
var106 = varonce105;
} else {
var107 = " */";
var108 = 3;
var109 = standard___standard__NativeString___to_s_with_length(var107, var108);
var106 = var109;
varonce105 = var106;
}
var110 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var110 = array_instance Array[Object] */
var111 = 9;
var112 = NEW_standard__NativeArray(var111, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var112)->values[0] = (val*) var66;
var113 = BOX_standard__Int(var_i); /* autobox from Int to Object */
((struct instance_standard__NativeArray*)var112)->values[1] = (val*) var113;
((struct instance_standard__NativeArray*)var112)->values[2] = (val*) var71;
((struct instance_standard__NativeArray*)var112)->values[3] = (val*) var82;
((struct instance_standard__NativeArray*)var112)->values[4] = (val*) var86;
((struct instance_standard__NativeArray*)var112)->values[5] = (val*) var99;
((struct instance_standard__NativeArray*)var112)->values[6] = (val*) var101;
((struct instance_standard__NativeArray*)var112)->values[7] = (val*) var_mtype;
((struct instance_standard__NativeArray*)var112)->values[8] = (val*) var106;
{
((void (*)(val* self, val* p0, long p1))(var110->class->vft[COLOR_standard__array__Array__with_native]))(var110, var112, var111) /* with_native on <var110:Array[Object]>*/;
}
}
{
var114 = ((val* (*)(val* self))(var110->class->vft[COLOR_standard__string__Object__to_s]))(var110) /* to_s on <var110:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var114); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var115 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var115) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var115:Int> isa OTHER */
/* <var115:Int> isa OTHER */
var118 = 1; /* easy <var115:Int> isa OTHER*/
if (unlikely(!var118)) {
var_class_name121 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name121);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var122 = var_i + var115;
var116 = var122;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
}
{
var123 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var116);
}
if (varonce124) {
var125 = varonce124;
} else {
var126 = "covariance";
var127 = 10;
var128 = standard___standard__NativeString___to_s_with_length(var126, var127);
var125 = var128;
varonce124 = var125;
}
{
nit___nit__AbstractCompilerVisitor___add_cast(var_v, var123, var_mtype, var125); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_cast on <var_v:AbstractCompilerVisitor>*/
}
BREAK_label: (void)0;
var129 = 1;
{
var130 = standard___standard__Int___Discrete__successor(var_i, var129);
}
var_i = var130;
} else {
goto BREAK_label131;
}
}
BREAK_label131: (void)0;
RET_LABEL:;
}
/* method abstract_compiler#APropdef#compile_to_c for (self: APropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nit__abstract_compiler___APropdef___compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
static val* varonce;
val* var /* : String */;
char* var1 /* : NativeString */;
long var2 /* : Int */;
val* var3 /* : FlatString */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
val* var15 /* : Location */;
val* var17 /* : Location */;
val* var18 /* : String */;
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
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
if (varonce) {
var = varonce;
} else {
var1 = "PRINT_ERROR(\"NOT YET IMPLEMENTED ";
var2 = 33;
var3 = standard___standard__NativeString___to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = standard__string___Object___class_name(self);
}
if (varonce5) {
var6 = varonce5;
} else {
var7 = " ";
var8 = 1;
var9 = standard___standard__NativeString___to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
if (varonce10) {
var11 = varonce10;
} else {
var12 = " at ";
var13 = 4;
var14 = standard___standard__NativeString___to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
{
{ /* Inline parser_nodes#ANode#location (self) on <self:APropdef> */
var17 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:APropdef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 23);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nit___nit__Location___standard__string__Object__to_s(var15);
}
if (varonce19) {
var20 = varonce19;
} else {
var21 = "\\n\");";
var22 = 5;
var23 = standard___standard__NativeString___to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
var24 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var24 = array_instance Array[Object] */
var25 = 7;
var26 = NEW_standard__NativeArray(var25, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var26)->values[0] = (val*) var;
((struct instance_standard__NativeArray*)var26)->values[1] = (val*) var4;
((struct instance_standard__NativeArray*)var26)->values[2] = (val*) var6;
((struct instance_standard__NativeArray*)var26)->values[3] = (val*) var_mpropdef;
((struct instance_standard__NativeArray*)var26)->values[4] = (val*) var11;
((struct instance_standard__NativeArray*)var26)->values[5] = (val*) var18;
((struct instance_standard__NativeArray*)var26)->values[6] = (val*) var20;
{
((void (*)(val* self, val* p0, long p1))(var24->class->vft[COLOR_standard__array__Array__with_native]))(var24, var26, var25) /* with_native on <var24:Array[Object]>*/;
}
}
{
var27 = ((val* (*)(val* self))(var24->class->vft[COLOR_standard__string__Object__to_s]))(var24) /* to_s on <var24:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce28) {
var29 = varonce28;
} else {
var30 = "Not yet implemented";
var31 = 19;
var32 = standard___standard__NativeString___to_s_with_length(var30, var31);
var29 = var32;
varonce28 = var29;
}
{
nit___nit__ANode___debug(self, var29); /* Direct call parser_nodes#ANode#debug on <self:APropdef>*/
}
RET_LABEL:;
}
/* method abstract_compiler#APropdef#can_inline for (self: APropdef): Bool */
short int nit__abstract_compiler___APropdef___can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AMethPropdef#compile_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nit__abstract_compiler___AMethPropdef___APropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable Object */;
val* var4 /* : String */;
val* var_cn /* var cn: String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : NativeString */;
long var7 /* : Int */;
val* var8 /* : FlatString */;
val* var9 /* : MProperty */;
val* var11 /* : MProperty */;
val* var12 /* : String */;
val* var14 /* : String */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : NativeString */;
long var19 /* : Int */;
val* var20 /* : FlatString */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
val* var26 /* : Array[Object] */;
long var27 /* : Int */;
val* var28 /* : NativeArray[Object] */;
val* var29 /* : String */;
val* var30 /* : nullable Array[CallSite] */;
val* var32 /* : nullable Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: nullable Array[CallSite] */;
val* var33 /* : null */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : Array[RuntimeVariable] */;
long var40 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var41 /* : nullable Object */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var_42 /* var : Array[CallSite] */;
val* var43 /* : ArrayIterator[nullable Object] */;
val* var_44 /* var : ArrayIterator[CallSite] */;
short int var45 /* : Bool */;
val* var46 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: CallSite */;
val* var47 /* : MMethod */;
val* var49 /* : MMethod */;
val* var50 /* : MProperty */;
val* var52 /* : MProperty */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
long var57 /* : Int */;
long var_i /* var i: Int */;
val* var58 /* : MSignature */;
val* var60 /* : MSignature */;
long var61 /* : Int */;
long var62 /* : Int */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var66 /* : Int */;
long var_67 /* var : Int */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
int cltype71;
int idtype72;
const char* var_class_name73;
short int var74 /* : Bool */;
val* var75 /* : nullable Object */;
long var76 /* : Int */;
long var77 /* : Int */;
val* var78 /* : MMethod */;
val* var80 /* : MMethod */;
val* var81 /* : MProperty */;
val* var83 /* : MProperty */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
val* var88 /* : nullable RuntimeVariable */;
short int var91 /* : Bool */;
short int var93 /* : Bool */;
val* var94 /* : nullable Object */;
val* var95 /* : MType */;
val* var97 /* : MType */;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
const char* var_class_name101;
val* var102 /* : nullable RuntimeVariable */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
val* var110 /* : MProperty */;
val* var112 /* : MProperty */;
short int var113 /* : Bool */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
val* var118 /* : nullable AExpr */;
val* var120 /* : nullable AExpr */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var121 /* : null */;
short int var122 /* : Bool */;
short int var123 /* : Bool */;
short int var125 /* : Bool */;
short int var126 /* : Bool */;
long var127 /* : Int */;
long var_i128 /* var i: Int */;
val* var129 /* : nullable MSignature */;
val* var131 /* : nullable MSignature */;
long var132 /* : Int */;
long var_133 /* var : Int */;
short int var134 /* : Bool */;
short int var136 /* : Bool */;
int cltype137;
int idtype138;
const char* var_class_name139;
short int var140 /* : Bool */;
val* var141 /* : nullable ASignature */;
val* var143 /* : nullable ASignature */;
val* var144 /* : ANodes[AParam] */;
val* var146 /* : ANodes[AParam] */;
val* var147 /* : ANode */;
val* var148 /* : nullable Variable */;
val* var150 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var151 /* : RuntimeVariable */;
long var152 /* : Int */;
long var153 /* : Int */;
short int var155 /* : Bool */;
int cltype156;
int idtype157;
const char* var_class_name158;
long var159 /* : Int */;
val* var160 /* : nullable Object */;
long var161 /* : Int */;
long var162 /* : Int */;
val* var164 /* : nullable Object */;
val* var165 /* : String */;
val* var_cn166 /* var cn: String */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : NativeString */;
long var170 /* : Int */;
val* var171 /* : FlatString */;
val* var172 /* : MProperty */;
val* var174 /* : MProperty */;
val* var175 /* : String */;
val* var177 /* : String */;
val* var178 /* : String */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : NativeString */;
long var182 /* : Int */;
val* var183 /* : FlatString */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : NativeString */;
long var187 /* : Int */;
val* var188 /* : FlatString */;
val* var189 /* : Array[Object] */;
long var190 /* : Int */;
val* var191 /* : NativeArray[Object] */;
val* var192 /* : String */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline model#MMethodDef#is_abstract (var_mpropdef) on <var_mpropdef:MMethodDef> */
var2 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___is_abstract].s; /* _is_abstract on <var_mpropdef:MMethodDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
{
var3 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var4 = ((val* (*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var3) /* class_name_string on <var_v:AbstractCompilerVisitor>*/;
}
var_cn = var4;
if (varonce) {
var5 = varonce;
} else {
var6 = "PRINT_ERROR(\"Runtime error: Abstract method `%s` called on `%s`\", \"";
var7 = 67;
var8 = standard___standard__NativeString___to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var11 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var9) on <var9:MProperty(MMethod)> */
var14 = var9->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var9:MProperty(MMethod)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = standard___standard__Text___escape_to_c(var12);
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = "\", ";
var19 = 3;
var20 = standard___standard__NativeString___to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = ");";
var24 = 2;
var25 = standard___standard__NativeString___to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var26 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var26 = array_instance Array[Object] */
var27 = 5;
var28 = NEW_standard__NativeArray(var27, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var28)->values[0] = (val*) var5;
((struct instance_standard__NativeArray*)var28)->values[1] = (val*) var15;
((struct instance_standard__NativeArray*)var28)->values[2] = (val*) var17;
((struct instance_standard__NativeArray*)var28)->values[3] = (val*) var_cn;
((struct instance_standard__NativeArray*)var28)->values[4] = (val*) var22;
{
((void (*)(val* self, val* p0, long p1))(var26->class->vft[COLOR_standard__array__Array__with_native]))(var26, var28, var27) /* with_native on <var26:Array[Object]>*/;
}
}
{
var29 = ((val* (*)(val* self))(var26->class->vft[COLOR_standard__string__Object__to_s]))(var26) /* to_s on <var26:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
nit___nit__AbstractCompilerVisitor___add_raw_abort(var_v); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_raw_abort on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_inits (self) on <self:AMethPropdef> */
var32 = self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <self:AMethPropdef> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_auto_super_inits = var30;
var33 = NULL;
if (var_auto_super_inits == NULL) {
var34 = 0; /* is null */
} else {
var34 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_auto_super_inits,var33) on <var_auto_super_inits:nullable Array[CallSite]> */
var_other = var33;
{
var37 = ((short int (*)(val* self, val* p0))(var_auto_super_inits->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_auto_super_inits, var_other) /* == on <var_auto_super_inits:nullable Array[CallSite](Array[CallSite])>*/;
}
var38 = !var37;
var35 = var38;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
var39 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
var40 = 1;
{
standard___standard__Array___with_capacity(var39, var40); /* Direct call array#Array#with_capacity on <var39:Array[RuntimeVariable]>*/
}
var_ = var39;
{
var41 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var41); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
var_args = var_;
var_42 = var_auto_super_inits;
{
var43 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_42);
}
var_44 = var43;
for(;;) {
{
var45 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__is_ok(var_44);
}
if (var45){
{
var46 = standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__item(var_44);
}
var_auto_super_init = var46;
{
{ /* Inline typing#CallSite#mproperty (var_auto_super_init) on <var_auto_super_init:CallSite> */
var49 = var_auto_super_init->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_auto_super_init:CallSite> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 487);
show_backtrace(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var52 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var47,var50) on <var47:MMethod> */
var_other = var50;
{
var55 = ((short int (*)(val* self, val* p0))(var47->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var47, var_other) /* == on <var47:MMethod>*/;
}
var56 = !var55;
var53 = var56;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
if (unlikely(!var53)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1908);
show_backtrace(1);
}
{
standard___standard__AbstractArray___standard__abstract_collection__RemovableCollection__clear(var_args); /* Direct call array#AbstractArray#clear on <var_args:Array[RuntimeVariable]>*/
}
var57 = 0;
var_i = var57;
{
{ /* Inline typing#CallSite#msignature (var_auto_super_init) on <var_auto_super_init:CallSite> */
var60 = var_auto_super_init->attrs[COLOR_nit__typing__CallSite___msignature].val; /* _msignature on <var_auto_super_init:CallSite> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 494);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = nit___nit__MSignature___arity(var58);
}
var62 = 1;
{
{ /* Inline kernel#Int#+ (var61,var62) on <var61:Int> */
/* Covariant cast for argument 0 (i) <var62:Int> isa OTHER */
/* <var62:Int> isa OTHER */
var65 = 1; /* easy <var62:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var66 = var61 + var62;
var63 = var66;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var_67 = var63;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_67) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_67:Int> isa OTHER */
/* <var_67:Int> isa OTHER */
var70 = 1; /* easy <var_67:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name73 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name73);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var74 = var_i < var_67;
var68 = var74;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
if (var68){
{
var75 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var_i);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_args, var75); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
var76 = 1;
{
var77 = standard___standard__Int___Discrete__successor(var_i, var76);
}
var_i = var77;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline typing#CallSite#mproperty (var_auto_super_init) on <var_auto_super_init:CallSite> */
var80 = var_auto_super_init->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_auto_super_init:CallSite> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 487);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var83 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var78,var81) on <var78:MMethod> */
var_other = var81;
{
var86 = ((short int (*)(val* self, val* p0))(var78->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var78, var_other) /* == on <var78:MMethod>*/;
}
var87 = !var86;
var84 = var87;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
if (unlikely(!var84)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1913);
show_backtrace(1);
}
{
var88 = ((val* (*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_auto_super_init, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_44); /* Direct call array#ArrayIterator#next on <var_44:ArrayIterator[CallSite]>*/
}
} else {
goto BREAK_label89;
}
}
BREAK_label89: (void)0;
{
{ /* Inline abstract_collection#Iterator#finish (var_44) on <var_44:ArrayIterator[CallSite]> */
RET_LABEL90:(void)0;
}
}
} else {
}
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_call (self) on <self:AMethPropdef> */
var93 = self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_call].s; /* _auto_super_call on <self:AMethPropdef> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
if (var91){
{
var94 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var94) on <var94:nullable Object(RuntimeVariable)> */
var97 = var94->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var94:nullable Object(RuntimeVariable)> */
if (unlikely(var97 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1680);
show_backtrace(1);
}
var95 = var97;
RET_LABEL96:(void)0;
}
}
/* <var95:MType> isa MClassType */
cltype99 = type_nit__MClassType.color;
idtype100 = type_nit__MClassType.id;
if(cltype99 >= var95->type->table_size) {
var98 = 0;
} else {
var98 = var95->type->type_table[cltype99] == idtype100;
}
if (unlikely(!var98)) {
var_class_name101 = var95 == NULL ? "null" : var95->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1918);
show_backtrace(1);
}
{
var102 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__supercall(var_v, var_mpropdef, var95, var_arguments);
}
} else {
}
{
{ /* Inline model#MMethodDef#is_intern (var_mpropdef) on <var_mpropdef:MMethodDef> */
var105 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___is_intern].s; /* _is_intern on <var_mpropdef:MMethodDef> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
if (var103){
{
var106 = nit__abstract_compiler___AMethPropdef___compile_intern_to_c(self, var_v, var_mpropdef, var_arguments);
}
if (var106){
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline model#MMethodDef#is_extern (var_mpropdef) on <var_mpropdef:MMethodDef> */
var109 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___is_extern].s; /* _is_extern on <var_mpropdef:MMethodDef> */
var107 = var109;
RET_LABEL108:(void)0;
}
}
if (var107){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var112 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var110) on <var110:MProperty(MMethod)> */
var115 = var110->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var110:MProperty(MMethod)> */
var113 = var115;
RET_LABEL114:(void)0;
}
}
if (var113){
{
var116 = nit__abstract_compiler___AMethPropdef___compile_externinit_to_c(self, var_v, var_mpropdef, var_arguments);
}
if (var116){
goto RET_LABEL;
} else {
}
} else {
{
var117 = nit__abstract_compiler___AMethPropdef___compile_externmeth_to_c(self, var_v, var_mpropdef, var_arguments);
}
if (var117){
goto RET_LABEL;
} else {
}
}
} else {
}
}
{
{ /* Inline parser_nodes#AMethPropdef#n_block (self) on <self:AMethPropdef> */
var120 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var118 = var120;
RET_LABEL119:(void)0;
}
}
var_n_block = var118;
var121 = NULL;
if (var_n_block == NULL) {
var122 = 0; /* is null */
} else {
var122 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,var121) on <var_n_block:nullable AExpr> */
var_other = var121;
{
var125 = ((short int (*)(val* self, val* p0))(var_n_block->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
}
var126 = !var125;
var123 = var126;
goto RET_LABEL124;
RET_LABEL124:(void)0;
}
var122 = var123;
}
if (var122){
var127 = 0;
var_i128 = var127;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var131 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var129 = var131;
RET_LABEL130:(void)0;
}
}
if (var129 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1935);
show_backtrace(1);
} else {
var132 = nit___nit__MSignature___arity(var129);
}
var_133 = var132;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i128,var_133) on <var_i128:Int> */
/* Covariant cast for argument 0 (i) <var_133:Int> isa OTHER */
/* <var_133:Int> isa OTHER */
var136 = 1; /* easy <var_133:Int> isa OTHER*/
if (unlikely(!var136)) {
var_class_name139 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name139);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 410);
show_backtrace(1);
}
var140 = var_i128 < var_133;
var134 = var140;
goto RET_LABEL135;
RET_LABEL135:(void)0;
}
}
if (var134){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var143 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var141 = var143;
RET_LABEL142:(void)0;
}
}
if (var141 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1936);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var141) on <var141:nullable ASignature> */
if (unlikely(var141 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
show_backtrace(1);
}
var146 = var141->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <var141:nullable ASignature> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1506);
show_backtrace(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
var147 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(var144, var_i128);
}
{
{ /* Inline scope#AParam#variable (var147) on <var147:ANode(AParam)> */
var150 = var147->attrs[COLOR_nit__scope__AParam___variable].val; /* _variable on <var147:ANode(AParam)> */
var148 = var150;
RET_LABEL149:(void)0;
}
}
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1936);
show_backtrace(1);
}
var_variable = var148;
{
var151 = nit___nit__AbstractCompilerVisitor___variable(var_v, var_variable);
}
var152 = 1;
{
{ /* Inline kernel#Int#+ (var_i128,var152) on <var_i128:Int> */
/* Covariant cast for argument 0 (i) <var152:Int> isa OTHER */
/* <var152:Int> isa OTHER */
var155 = 1; /* easy <var152:Int> isa OTHER*/
if (unlikely(!var155)) {
var_class_name158 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name158);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 413);
show_backtrace(1);
}
var159 = var_i128 + var152;
var153 = var159;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
}
{
var160 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var153);
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var151, var160); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
var161 = 1;
{
var162 = standard___standard__Int___Discrete__successor(var_i128, var161);
}
var_i128 = var162;
} else {
goto BREAK_label163;
}
}
BREAK_label163: (void)0;
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var_n_block); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var164 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var165 = ((val* (*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var164) /* class_name_string on <var_v:AbstractCompilerVisitor>*/;
}
var_cn166 = var165;
if (varonce167) {
var168 = varonce167;
} else {
var169 = "PRINT_ERROR(\"Runtime error: uncompiled method `%s` called on `%s`. NOT YET IMPLEMENTED\", \"";
var170 = 90;
var171 = standard___standard__NativeString___to_s_with_length(var169, var170);
var168 = var171;
varonce167 = var168;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var174 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var174 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var172 = var174;
RET_LABEL173:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var172) on <var172:MProperty(MMethod)> */
var177 = var172->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var172:MProperty(MMethod)> */
if (unlikely(var177 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var175 = var177;
RET_LABEL176:(void)0;
}
}
{
var178 = standard___standard__Text___escape_to_c(var175);
}
if (varonce179) {
var180 = varonce179;
} else {
var181 = "\", ";
var182 = 3;
var183 = standard___standard__NativeString___to_s_with_length(var181, var182);
var180 = var183;
varonce179 = var180;
}
if (varonce184) {
var185 = varonce184;
} else {
var186 = ");";
var187 = 2;
var188 = standard___standard__NativeString___to_s_with_length(var186, var187);
var185 = var188;
varonce184 = var185;
}
var189 = NEW_standard__Array(&type_standard__Array__standard__Object);
{ /* var189 = array_instance Array[Object] */
var190 = 5;
var191 = NEW_standard__NativeArray(var190, &type_standard__NativeArray__standard__Object);
((struct instance_standard__NativeArray*)var191)->values[0] = (val*) var168;
((struct instance_standard__NativeArray*)var191)->values[1] = (val*) var178;
((struct instance_standard__NativeArray*)var191)->values[2] = (val*) var180;
((struct instance_standard__NativeArray*)var191)->values[3] = (val*) var_cn166;
((struct instance_standard__NativeArray*)var191)->values[4] = (val*) var185;
{
((void (*)(val* self, val* p0, long p1))(var189->class->vft[COLOR_standard__array__Array__with_native]))(var189, var191, var190) /* with_native on <var189:Array[Object]>*/;
}
}
{
var192 = ((val* (*)(val* self))(var189->class->vft[COLOR_standard__string__Object__to_s]))(var189) /* to_s on <var189:Array[Object]>*/;
}
{
nit___nit__AbstractCompilerVisitor___add(var_v, var192); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
nit___nit__AbstractCompilerVisitor___add_raw_abort(var_v); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_raw_abort on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AMethPropdef#can_inline for (self: AMethPropdef): Bool */
short int nit__abstract_compiler___AMethPropdef___APropdef__can_inline(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable Array[CallSite] */;
val* var3 /* : nullable Array[CallSite] */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable AExpr */;
val* var13 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
val* var14 /* : null */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var_other18 /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : nullable MPropDef */;
val* var27 /* : nullable MPropDef */;
val* var28 /* : MProperty */;
val* var30 /* : MProperty */;
val* var31 /* : String */;
val* var33 /* : String */;
static val* varonce;
val* var34 /* : String */;
char* var35 /* : NativeString */;
long var36 /* : Int */;
val* var37 /* : FlatString */;
short int var38 /* : Bool */;
short int var_ /* var : Bool */;
val* var39 /* : nullable MPropDef */;
val* var41 /* : nullable MPropDef */;
val* var42 /* : MProperty */;
val* var44 /* : MProperty */;
val* var45 /* : String */;
val* var47 /* : String */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : NativeString */;
long var51 /* : Int */;
val* var52 /* : FlatString */;
short int var53 /* : Bool */;
short int var_54 /* var : Bool */;
val* var55 /* : nullable MPropDef */;
val* var57 /* : nullable MPropDef */;
val* var58 /* : MClassDef */;
val* var60 /* : MClassDef */;
val* var61 /* : MClass */;
val* var63 /* : MClass */;
val* var64 /* : String */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
int cltype;
int idtype;
short int var_76 /* var : Bool */;
val* var77 /* : ANodes[AExpr] */;
val* var79 /* : ANodes[AExpr] */;
long var80 /* : Int */;
long var81 /* : Int */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_inits (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <self:AMethPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = NULL;
if (var1 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,var4) on <var1:nullable Array[CallSite]> */
var_other = var4;
{
var8 = ((short int (*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable Array[CallSite](Array[CallSite])>*/;
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var10 = 0;
var = var10;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_block (self) on <self:AMethPropdef> */
var13 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_nblock = var11;
var14 = NULL;
if (var_nblock == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nblock,var14) on <var_nblock:nullable AExpr> */
var_other18 = var14;
{
{ /* Inline kernel#Object#is_same_instance (var_nblock,var_other18) on <var_nblock:nullable AExpr(AExpr)> */
var21 = var_nblock == var_other18;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
var22 = 1;
var = var22;
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var27 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (var25 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1954);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var25) on <var25:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var30 = var25->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var25:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var28) on <var28:MProperty(MMethod)> */
var33 = var28->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var28:MProperty(MMethod)> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (varonce) {
var34 = varonce;
} else {
var35 = "==";
var36 = 2;
var37 = standard___standard__NativeString___to_s_with_length(var35, var36);
var34 = var37;
varonce = var34;
}
{
var38 = ((short int (*)(val* self, val* p0))(var31->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var31, var34) /* == on <var31:String>*/;
}
var_ = var38;
if (var38){
var24 = var_;
} else {
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var41 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (var39 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1954);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var39) on <var39:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var44 = var39->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var39:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2013);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var42) on <var42:MProperty(MMethod)> */
var47 = var42->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var42:MProperty(MMethod)> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1741);
show_backtrace(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
if (varonce48) {
var49 = varonce48;
} else {
var50 = "!=";
var51 = 2;
var52 = standard___standard__NativeString___to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
{
var53 = ((short int (*)(val* self, val* p0))(var45->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var45, var49) /* == on <var45:String>*/;
}
var24 = var53;
}
var_54 = var24;
if (var24){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var57 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (var55 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1954);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var55) on <var55:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var60 = var55->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var55:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2010);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var58) on <var58:MClassDef> */
var63 = var58->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var58:MClassDef> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 492);
show_backtrace(1);
}
var61 = var63;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline model#MClass#name (var61) on <var61:MClass> */
var66 = var61->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var61:MClass> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 348);
show_backtrace(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (varonce67) {
var68 = varonce67;
} else {
var69 = "Object";
var70 = 6;
var71 = standard___standard__NativeString___to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
{
var72 = ((short int (*)(val* self, val* p0))(var64->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var64, var68) /* == on <var64:String>*/;
}
var23 = var72;
} else {
var23 = var_54;
}
if (var23){
var73 = 1;
var = var73;
goto RET_LABEL;
} else {
}
/* <var_nblock:nullable AExpr(AExpr)> isa ABlockExpr */
cltype = type_nit__ABlockExpr.color;
idtype = type_nit__ABlockExpr.id;
if(cltype >= var_nblock->type->table_size) {
var75 = 0;
} else {
var75 = var_nblock->type->type_table[cltype] == idtype;
}
var_76 = var75;
if (var75){
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (var_nblock) on <var_nblock:nullable AExpr(ABlockExpr)> */
var79 = var_nblock->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <var_nblock:nullable AExpr(ABlockExpr)> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1565);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
var80 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var77);
}
var81 = 0;
{
{ /* Inline kernel#Int#== (var80,var81) on <var80:Int> */
var84 = var80 == var81;
var82 = var84;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
var74 = var82;
} else {
var74 = var_76;
}
if (var74){
var85 = 1;
var = var85;
goto RET_LABEL;
} else {
}
var86 = 0;
var = var86;
goto RET_LABEL;
RET_LABEL:;
return var;
}
