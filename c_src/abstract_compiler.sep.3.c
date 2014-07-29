#include "abstract_compiler.sep.0.h"
/* method abstract_compiler#AbstractCompilerVisitor#add_extern for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__add_extern(val* self, val* p0) {
val* var_file /* var file: String */;
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
val* var10 /* : String */;
val* var_tryfile /* var tryfile: String */;
short int var11 /* : Bool */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : FlatString */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
long var26 /* : Int */;
val* var27 /* : FlatString */;
val* var28 /* : Array[Object] */;
long var29 /* : Int */;
val* var30 /* : NativeArray[Object] */;
val* var31 /* : String */;
val* var32 /* : AbstractCompiler */;
val* var34 /* : AbstractCompiler */;
val* var35 /* : Array[String] */;
val* var37 /* : Array[String] */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : NativeString */;
long var41 /* : Int */;
val* var42 /* : FlatString */;
val* var43 /* : String */;
short int var44 /* : Bool */;
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
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
long var59 /* : Int */;
val* var60 /* : FlatString */;
val* var61 /* : Array[Object] */;
long var62 /* : Int */;
val* var63 /* : NativeArray[Object] */;
val* var64 /* : String */;
val* var65 /* : AbstractCompiler */;
val* var67 /* : AbstractCompiler */;
val* var68 /* : Array[String] */;
val* var70 /* : Array[String] */;
val* var71 /* : AbstractCompiler */;
val* var73 /* : AbstractCompiler */;
val* var74 /* : ArraySet[String] */;
val* var76 /* : ArraySet[String] */;
short int var77 /* : Bool */;
val* var78 /* : AbstractCompiler */;
val* var80 /* : AbstractCompiler */;
val* var81 /* : ArraySet[String] */;
val* var83 /* : ArraySet[String] */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : FlatString */;
val* var89 /* : String */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
static val* varonce92;
val* var93 /* : String */;
char* var94 /* : NativeString */;
long var95 /* : Int */;
val* var96 /* : FlatString */;
val* var97 /* : String */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
val* var100 /* : ExternCFile */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
long var104 /* : Int */;
val* var105 /* : FlatString */;
val* var106 /* : String */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : FlatString */;
val* var_f /* var f: ExternCFile */;
val* var112 /* : AbstractCompiler */;
val* var114 /* : AbstractCompiler */;
val* var115 /* : Array[ExternFile] */;
val* var117 /* : Array[ExternFile] */;
val* var118 /* : AbstractCompiler */;
val* var120 /* : AbstractCompiler */;
val* var121 /* : Array[String] */;
val* var123 /* : Array[String] */;
var_file = p0;
if (varonce) {
var = varonce;
} else {
var1 = ".nit";
var2 = 4;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = file__String__strip_extension(var_file, var);
}
var_file = var4;
if (varonce5) {
var6 = varonce5;
} else {
var7 = ".nit.h";
var8 = 6;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
{
var10 = string__FlatString___43d(var_file, var6);
}
var_tryfile = var10;
{
var11 = file__String__file_exists(var_tryfile);
}
if (var11){
if (varonce12) {
var13 = varonce12;
} else {
var14 = "#include \"";
var15 = 10;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "";
var20 = 0;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
{
var22 = file__String__basename(var_tryfile, var18);
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = "\"";
var26 = 1;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 3;
var30 = NEW_array__NativeArray(var29, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var30)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var30)->values[1] = (val*) var22;
((struct instance_array__NativeArray*)var30)->values[2] = (val*) var24;
{
((void (*)(val*, val*, long))(var28->class->vft[COLOR_array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[Object]>*/;
}
}
{
var31 = ((val* (*)(val*))(var28->class->vft[COLOR_string__Object__to_s]))(var28) /* to_s on <var28:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__declare_once(self, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#declare_once on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var34 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var32) on <var32:AbstractCompiler> */
var37 = var32->attrs[COLOR_abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var32:AbstractCompiler> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 850);
show_backtrace(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
array__Array__add(var35, var_tryfile); /* Direct call array#Array#add on <var35:Array[String]>*/
}
} else {
}
if (varonce38) {
var39 = varonce38;
} else {
var40 = "_nit.h";
var41 = 6;
var42 = string__NativeString__to_s_with_length(var40, var41);
var39 = var42;
varonce38 = var39;
}
{
var43 = string__FlatString___43d(var_file, var39);
}
var_tryfile = var43;
{
var44 = file__String__file_exists(var_tryfile);
}
if (var44){
if (varonce45) {
var46 = varonce45;
} else {
var47 = "#include \"";
var48 = 10;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
if (varonce50) {
var51 = varonce50;
} else {
var52 = "";
var53 = 0;
var54 = string__NativeString__to_s_with_length(var52, var53);
var51 = var54;
varonce50 = var51;
}
{
var55 = file__String__basename(var_tryfile, var51);
}
if (varonce56) {
var57 = varonce56;
} else {
var58 = "\"";
var59 = 1;
var60 = string__NativeString__to_s_with_length(var58, var59);
var57 = var60;
varonce56 = var57;
}
var61 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var61 = array_instance Array[Object] */
var62 = 3;
var63 = NEW_array__NativeArray(var62, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var63)->values[0] = (val*) var46;
((struct instance_array__NativeArray*)var63)->values[1] = (val*) var55;
((struct instance_array__NativeArray*)var63)->values[2] = (val*) var57;
{
((void (*)(val*, val*, long))(var61->class->vft[COLOR_array__Array__with_native]))(var61, var63, var62) /* with_native on <var61:Array[Object]>*/;
}
}
{
var64 = ((val* (*)(val*))(var61->class->vft[COLOR_string__Object__to_s]))(var61) /* to_s on <var61:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__declare_once(self, var64); /* Direct call abstract_compiler#AbstractCompilerVisitor#declare_once on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var67 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var65) on <var65:AbstractCompiler> */
var70 = var65->attrs[COLOR_abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var65:AbstractCompiler> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 850);
show_backtrace(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
array__Array__add(var68, var_tryfile); /* Direct call array#Array#add on <var68:Array[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var73 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#seen_extern (var71) on <var71:AbstractCompiler> */
var76 = var71->attrs[COLOR_abstract_compiler__AbstractCompiler___seen_extern].val; /* _seen_extern on <var71:AbstractCompiler> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen_extern");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 853);
show_backtrace(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
var77 = array__ArraySet__has(var74, var_file);
}
if (var77){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var80 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#seen_extern (var78) on <var78:AbstractCompiler> */
var83 = var78->attrs[COLOR_abstract_compiler__AbstractCompiler___seen_extern].val; /* _seen_extern on <var78:AbstractCompiler> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen_extern");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 853);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
array__ArraySet__add(var81, var_file); /* Direct call array#ArraySet#add on <var81:ArraySet[String]>*/
}
if (varonce84) {
var85 = varonce84;
} else {
var86 = ".nit.c";
var87 = 6;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
{
var89 = string__FlatString___43d(var_file, var85);
}
var_tryfile = var89;
{
var90 = file__String__file_exists(var_tryfile);
}
var91 = !var90;
if (var91){
if (varonce92) {
var93 = varonce92;
} else {
var94 = "_nit.c";
var95 = 6;
var96 = string__NativeString__to_s_with_length(var94, var95);
var93 = var96;
varonce92 = var93;
}
{
var97 = string__FlatString___43d(var_file, var93);
}
var_tryfile = var97;
{
var98 = file__String__file_exists(var_tryfile);
}
var99 = !var98;
if (var99){
goto RET_LABEL;
} else {
}
} else {
}
var100 = NEW_c_tools__ExternCFile(&type_c_tools__ExternCFile);
if (varonce101) {
var102 = varonce101;
} else {
var103 = "";
var104 = 0;
var105 = string__NativeString__to_s_with_length(var103, var104);
var102 = var105;
varonce101 = var102;
}
{
var106 = file__String__basename(var_tryfile, var102);
}
if (varonce107) {
var108 = varonce107;
} else {
var109 = "";
var110 = 0;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
{
c_tools__ExternCFile__init(var100, var106, var108); /* Direct call c_tools#ExternCFile#init on <var100:ExternCFile>*/
}
var_f = var100;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var114 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var112) on <var112:AbstractCompiler> */
var117 = var112->attrs[COLOR_abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var112:AbstractCompiler> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 847);
show_backtrace(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
array__Array__add(var115, var_f); /* Direct call array#Array#add on <var115:Array[ExternFile]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var120 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var120 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var118) on <var118:AbstractCompiler> */
var123 = var118->attrs[COLOR_abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var118:AbstractCompiler> */
if (unlikely(var123 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 850);
show_backtrace(1);
}
var121 = var123;
RET_LABEL122:(void)0;
}
}
{
array__Array__add(var121, var_tryfile); /* Direct call array#Array#add on <var121:Array[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_extern for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_extern(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__add_extern(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_extern on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_expr for (self: AbstractCompilerVisitor, String, MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__new_expr(val* self, val* p0, val* p1) {
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
var1 = abstract_compiler__AbstractCompilerVisitor__new_var(self, var_mtype);
}
var_res = var1;
if (varonce) {
var2 = varonce;
} else {
var3 = " = ";
var4 = 3;
var5 = string__NativeString__to_s_with_length(var3, var4);
var2 = var5;
varonce = var2;
}
if (varonce6) {
var7 = varonce6;
} else {
var8 = ";";
var9 = 1;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var11 = array_instance Array[Object] */
var12 = 4;
var13 = NEW_array__NativeArray(var12, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var13)->values[0] = (val*) var_res;
((struct instance_array__NativeArray*)var13)->values[1] = (val*) var2;
((struct instance_array__NativeArray*)var13)->values[2] = (val*) var_cexpr;
((struct instance_array__NativeArray*)var13)->values[3] = (val*) var7;
{
((void (*)(val*, val*, long))(var11->class->vft[COLOR_array__Array__with_native]))(var11, var13, var12) /* with_native on <var11:Array[Object]>*/;
}
}
{
var14 = ((val* (*)(val*))(var11->class->vft[COLOR_string__Object__to_s]))(var11) /* to_s on <var11:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var14); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_expr for (self: Object, String, MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__new_expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__new_expr(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_abort for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__add_abort(val* self, val* p0) {
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
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = string__Text__escape_to_c(var_message);
}
if (varonce5) {
var6 = varonce5;
} else {
var7 = "\");";
var8 = 3;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var10 = array_instance Array[Object] */
var11 = 3;
var12 = NEW_array__NativeArray(var11, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var12)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var12)->values[1] = (val*) var4;
((struct instance_array__NativeArray*)var12)->values[2] = (val*) var6;
{
((void (*)(val*, val*, long))(var10->class->vft[COLOR_array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Object]>*/;
}
}
{
var13 = ((val* (*)(val*))(var10->class->vft[COLOR_string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var13); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
{
abstract_compiler__AbstractCompilerVisitor__add_raw_abort(self); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_raw_abort on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_abort for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_abort(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__add_abort(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_raw_abort for (self: AbstractCompilerVisitor) */
void abstract_compiler__AbstractCompilerVisitor__add_raw_abort(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable ANode */;
val* var3 /* : nullable ANode */;
val* var4 /* : null */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
val* var11 /* : nullable ANode */;
val* var13 /* : nullable ANode */;
val* var14 /* : Location */;
val* var15 /* : nullable SourceFile */;
val* var17 /* : nullable SourceFile */;
val* var18 /* : null */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
val* var29 /* : nullable ANode */;
val* var31 /* : nullable ANode */;
val* var32 /* : Location */;
val* var33 /* : nullable SourceFile */;
val* var35 /* : nullable SourceFile */;
val* var36 /* : String */;
val* var38 /* : String */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : FlatString */;
val* var45 /* : nullable ANode */;
val* var47 /* : nullable ANode */;
val* var48 /* : Location */;
long var49 /* : Int */;
long var51 /* : Int */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : FlatString */;
val* var57 /* : Array[Object] */;
long var58 /* : Int */;
val* var59 /* : NativeArray[Object] */;
val* var60 /* : Object */;
val* var61 /* : String */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : NativeString */;
long var65 /* : Int */;
val* var66 /* : FlatString */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
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
{ /* Inline kernel#Object#!= (var1,var4) on <var1:nullable ANode> */
var_other = var4;
{
var9 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable ANode(ANode)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
var_ = var5;
if (var5){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var13 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (var11 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1368);
show_backtrace(1);
} else {
var14 = parser_nodes__ANode__location(var11);
}
{
{ /* Inline location#Location#file (var14) on <var14:Location> */
var17 = var14->attrs[COLOR_location__Location___file].val; /* _file on <var14:Location> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var18 = NULL;
if (var15 == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var15,var18) on <var15:nullable SourceFile> */
var_other = var18;
{
var23 = ((short int (*)(val*, val*))(var15->class->vft[COLOR_kernel__Object___61d_61d]))(var15, var_other) /* == on <var15:nullable SourceFile(SourceFile)>*/;
var22 = var23;
}
var24 = !var22;
var20 = var24;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
var = var19;
} else {
var = var_;
}
if (var){
if (varonce) {
var25 = varonce;
} else {
var26 = "PRINT_ERROR(\" (%s:%d)\\n\", \"";
var27 = 27;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce = var25;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var31 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1369);
show_backtrace(1);
} else {
var32 = parser_nodes__ANode__location(var29);
}
{
{ /* Inline location#Location#file (var32) on <var32:Location> */
var35 = var32->attrs[COLOR_location__Location___file].val; /* _file on <var32:Location> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (var33 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1369);
show_backtrace(1);
} else {
{ /* Inline location#SourceFile#filename (var33) on <var33:nullable SourceFile> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/location.nit", 22);
show_backtrace(1);
}
var38 = var33->attrs[COLOR_location__SourceFile___filename].val; /* _filename on <var33:nullable SourceFile> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", "src/location.nit", 22);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = string__Text__escape_to_c(var36);
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "\", ";
var43 = 3;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var47 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
if (var45 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1369);
show_backtrace(1);
} else {
var48 = parser_nodes__ANode__location(var45);
}
{
{ /* Inline location#Location#line_start (var48) on <var48:Location> */
var51 = var48->attrs[COLOR_location__Location___line_start].l; /* _line_start on <var48:Location> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
if (varonce52) {
var53 = varonce52;
} else {
var54 = ");";
var55 = 2;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var57 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var57 = array_instance Array[Object] */
var58 = 5;
var59 = NEW_array__NativeArray(var58, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var59)->values[0] = (val*) var25;
((struct instance_array__NativeArray*)var59)->values[1] = (val*) var39;
((struct instance_array__NativeArray*)var59)->values[2] = (val*) var41;
var60 = BOX_kernel__Int(var49); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var59)->values[3] = (val*) var60;
((struct instance_array__NativeArray*)var59)->values[4] = (val*) var53;
{
((void (*)(val*, val*, long))(var57->class->vft[COLOR_array__Array__with_native]))(var57, var59, var58) /* with_native on <var57:Array[Object]>*/;
}
}
{
var61 = ((val* (*)(val*))(var57->class->vft[COLOR_string__Object__to_s]))(var57) /* to_s on <var57:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var61); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
} else {
if (varonce62) {
var63 = varonce62;
} else {
var64 = "PRINT_ERROR(\"\\n\");";
var65 = 18;
var66 = string__NativeString__to_s_with_length(var64, var65);
var63 = var66;
varonce62 = var63;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var63); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
}
if (varonce67) {
var68 = varonce67;
} else {
var69 = "show_backtrace(1);";
var70 = 18;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var68); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_raw_abort for (self: Object) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_raw_abort(val* self) {
abstract_compiler__AbstractCompilerVisitor__add_raw_abort(self); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_raw_abort on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_cast for (self: AbstractCompilerVisitor, RuntimeVariable, MType, String) */
void abstract_compiler__AbstractCompilerVisitor__add_cast(val* self, val* p0, val* p1, val* p2) {
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
var = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__type_test]))(self, var_value, var_mtype, var_tag) /* type_test on <self:AbstractCompilerVisitor>*/;
}
var_res = var;
if (varonce) {
var1 = varonce;
} else {
var2 = "if (unlikely(!";
var3 = 14;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
if (varonce5) {
var6 = varonce5;
} else {
var7 = ")) {";
var8 = 4;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
var10 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var10 = array_instance Array[Object] */
var11 = 3;
var12 = NEW_array__NativeArray(var11, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var12)->values[0] = (val*) var1;
((struct instance_array__NativeArray*)var12)->values[1] = (val*) var_res;
((struct instance_array__NativeArray*)var12)->values[2] = (val*) var6;
{
((void (*)(val*, val*, long))(var10->class->vft[COLOR_array__Array__with_native]))(var10, var12, var11) /* with_native on <var10:Array[Object]>*/;
}
}
{
var13 = ((val* (*)(val*))(var10->class->vft[COLOR_string__Object__to_s]))(var10) /* to_s on <var10:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var13); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
{
var14 = ((val* (*)(val*, val*))(self->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__class_name_string]))(self, var_value) /* class_name_string on <self:AbstractCompilerVisitor>*/;
}
var_cn = var14;
if (varonce15) {
var16 = varonce15;
} else {
var17 = "PRINT_ERROR(\"Runtime error: Cast failed. Expected `%s`, got `%s`\", \"";
var18 = 68;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
{
var20 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_string__Object__to_s]))(var_mtype) /* to_s on <var_mtype:MType>*/;
}
{
var21 = string__Text__escape_to_c(var20);
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "\", ";
var25 = 3;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = ");";
var30 = 2;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 5;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var21;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var23;
((struct instance_array__NativeArray*)var34)->values[3] = (val*) var_cn;
((struct instance_array__NativeArray*)var34)->values[4] = (val*) var28;
{
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
}
{
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var35); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
{
abstract_compiler__AbstractCompilerVisitor__add_raw_abort(self); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_raw_abort on <self:AbstractCompilerVisitor>*/
}
if (varonce36) {
var37 = varonce36;
} else {
var38 = "}";
var39 = 1;
var40 = string__NativeString__to_s_with_length(var38, var39);
var37 = var40;
varonce36 = var37;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_cast for (self: Object, RuntimeVariable, MType, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__add_cast(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AbstractCompilerVisitor__add_cast(self, p0, p1, p2); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_cast on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#ret for (self: AbstractCompilerVisitor, RuntimeVariable) */
void abstract_compiler__AbstractCompilerVisitor__ret(val* self, val* p0) {
val* var_s /* var s: RuntimeVariable */;
val* var /* : nullable Frame */;
val* var2 /* : nullable Frame */;
val* var3 /* : nullable RuntimeVariable */;
val* var5 /* : nullable RuntimeVariable */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
long var8 /* : Int */;
val* var9 /* : FlatString */;
val* var10 /* : nullable Frame */;
val* var12 /* : nullable Frame */;
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
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1390);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#returnvar (var) on <var:nullable Frame> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1541);
show_backtrace(1);
}
var5 = var->attrs[COLOR_abstract_compiler__Frame___returnvar].val; /* _returnvar on <var:nullable Frame> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1390);
show_backtrace(1);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(self, var3, var_s); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <self:AbstractCompilerVisitor>*/
}
if (varonce) {
var6 = varonce;
} else {
var7 = "goto ";
var8 = 5;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce = var6;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var12 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1391);
show_backtrace(1);
} else {
{ /* Inline abstract_compiler#Frame#returnlabel (var10) on <var10:nullable Frame> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1544);
show_backtrace(1);
}
var15 = var10->attrs[COLOR_abstract_compiler__Frame___returnlabel].val; /* _returnlabel on <var10:nullable Frame> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1391);
show_backtrace(1);
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = ";";
var19 = 1;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
var21 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var21 = array_instance Array[Object] */
var22 = 3;
var23 = NEW_array__NativeArray(var22, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var23)->values[0] = (val*) var6;
((struct instance_array__NativeArray*)var23)->values[1] = (val*) var13;
((struct instance_array__NativeArray*)var23)->values[2] = (val*) var17;
{
((void (*)(val*, val*, long))(var21->class->vft[COLOR_array__Array__with_native]))(var21, var23, var22) /* with_native on <var21:Array[Object]>*/;
}
}
{
var24 = ((val* (*)(val*))(var21->class->vft[COLOR_string__Object__to_s]))(var21) /* to_s on <var21:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#ret for (self: Object, RuntimeVariable) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__ret(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__ret(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#stmt for (self: AbstractCompilerVisitor, nullable AExpr) */
void abstract_compiler__AbstractCompilerVisitor__stmt(val* self, val* p0) {
val* var_nexpr /* var nexpr: nullable AExpr */;
val* var /* : null */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable ANode */;
val* var9 /* : nullable ANode */;
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
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var9 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_old = var7;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (self,var_nexpr) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = var_nexpr; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL10:(void)0;
}
}
{
((void (*)(val*, val*))(var_nexpr->class->vft[COLOR_abstract_compiler__AExpr__stmt]))(var_nexpr, self) /* stmt on <var_nexpr:nullable AExpr(AExpr)>*/;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (self,var_old) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = var_old; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL11:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#stmt for (self: Object, nullable AExpr) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__stmt(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__stmt(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#expr for (self: AbstractCompilerVisitor, AExpr, nullable MType): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__expr(val* self, val* p0, val* p1) {
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
short int var12 /* : Bool */;
val* var13 /* : MType */;
val* var14 /* : RuntimeVariable */;
val* var15 /* : nullable MType */;
val* var16 /* : RuntimeVariable */;
val* var17 /* : nullable MType */;
val* var19 /* : nullable MType */;
val* var_implicit_cast_to /* var implicit_cast_to: nullable MType */;
short int var20 /* : Bool */;
val* var21 /* : null */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var_ /* var : Bool */;
val* var28 /* : AbstractCompiler */;
val* var30 /* : AbstractCompiler */;
val* var31 /* : ModelBuilder */;
val* var33 /* : ModelBuilder */;
val* var34 /* : ToolContext */;
val* var36 /* : ToolContext */;
val* var37 /* : OptionBool */;
val* var39 /* : OptionBool */;
val* var40 /* : nullable Object */;
val* var42 /* : nullable Object */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
static val* varonce;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : FlatString */;
val* var49 /* : RuntimeVariable */;
var_nexpr = p0;
var_mtype = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_old = var1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (self,var_nexpr) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = var_nexpr; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL4:(void)0;
}
}
{
var5 = ((val* (*)(val*, val*))(var_nexpr->class->vft[COLOR_abstract_compiler__AExpr__expr]))(var_nexpr, self) /* expr on <var_nexpr:AExpr>*/;
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1410);
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
var11 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___61d_61d]))(var_mtype, var_other) /* == on <var_mtype:nullable MType(MType)>*/;
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
var13 = abstract_compiler__AbstractCompilerVisitor__anchor(self, var_mtype);
}
var_mtype = var13;
{
var14 = separate_compiler__SeparateCompilerVisitor__autobox(self, var_res, var_mtype);
}
var_res = var14;
} else {
}
{
var15 = ((val* (*)(val*))(var_nexpr->class->vft[COLOR_typing__AExpr__mtype]))(var_nexpr) /* mtype on <var_nexpr:AExpr>*/;
}
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1415);
show_backtrace(1);
}
{
var16 = abstract_compiler__AbstractCompilerVisitor__autoadapt(self, var_res, var15);
}
var_res = var16;
{
{ /* Inline typing#AExpr#implicit_cast_to (var_nexpr) on <var_nexpr:AExpr> */
var19 = var_nexpr->attrs[COLOR_typing__AExpr___implicit_cast_to].val; /* _implicit_cast_to on <var_nexpr:AExpr> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_implicit_cast_to = var17;
var21 = NULL;
if (var_implicit_cast_to == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_implicit_cast_to,var21) on <var_implicit_cast_to:nullable MType> */
var_other = var21;
{
var26 = ((short int (*)(val*, val*))(var_implicit_cast_to->class->vft[COLOR_kernel__Object___61d_61d]))(var_implicit_cast_to, var_other) /* == on <var_implicit_cast_to:nullable MType(MType)>*/;
var25 = var26;
}
var27 = !var25;
var23 = var27;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
var_ = var22;
if (var22){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var30 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var28) on <var28:AbstractCompiler> */
var33 = var28->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var28:AbstractCompiler> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
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
{ /* Inline abstract_compiler#ToolContext#opt_no_check_autocast (var34) on <var34:ToolContext> */
var39 = var34->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <var34:ToolContext> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 52);
show_backtrace(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline opts#Option#value (var37) on <var37:OptionBool> */
var42 = var37->attrs[COLOR_opts__Option___value].val; /* _value on <var37:OptionBool> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var43 = ((struct instance_kernel__Bool*)var40)->value; /* autounbox from nullable Object to Bool */;
var44 = !var43;
var20 = var44;
} else {
var20 = var_;
}
if (var20){
if (varonce) {
var45 = varonce;
} else {
var46 = "auto";
var47 = 4;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce = var45;
}
{
abstract_compiler__AbstractCompilerVisitor__add_cast(self, var_res, var_implicit_cast_to, var45); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_cast on <self:AbstractCompilerVisitor>*/
}
{
var49 = abstract_compiler__AbstractCompilerVisitor__autoadapt(self, var_res, var_implicit_cast_to);
}
var_res = var49;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (self,var_old) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = var_old; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL50:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#expr for (self: Object, AExpr, nullable MType): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__expr(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#expr_bool for (self: AbstractCompilerVisitor, AExpr): RuntimeVariable */
val* abstract_compiler__AbstractCompilerVisitor__expr_bool(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_nexpr /* var nexpr: AExpr */;
val* var1 /* : MClassType */;
val* var2 /* : RuntimeVariable */;
var_nexpr = p0;
{
var1 = abstract_compiler__AbstractCompilerVisitor__bool_type(self);
}
{
var2 = abstract_compiler__AbstractCompilerVisitor__expr(self, var_nexpr, var1);
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#expr_bool for (self: Object, AExpr): RuntimeVariable */
val* VIRTUAL_abstract_compiler__AbstractCompilerVisitor__expr_bool(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var1 /* : RuntimeVariable */;
var1 = abstract_compiler__AbstractCompilerVisitor__expr_bool(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#debug for (self: AbstractCompilerVisitor, String) */
void abstract_compiler__AbstractCompilerVisitor__debug(val* self, val* p0) {
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
var2 = self->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
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
var13 = string__NativeString__to_s_with_length(var11, var12);
var10 = var13;
varonce = var10;
}
var14 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var14 = array_instance Array[Object] */
var15 = 2;
var16 = NEW_array__NativeArray(var15, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var16)->values[0] = (val*) var10;
((struct instance_array__NativeArray*)var16)->values[1] = (val*) var_message;
{
((void (*)(val*, val*, long))(var14->class->vft[COLOR_array__Array__with_native]))(var14, var16, var15) /* with_native on <var14:Array[Object]>*/;
}
}
{
var17 = ((val* (*)(val*))(var14->class->vft[COLOR_string__Object__to_s]))(var14) /* to_s on <var14:Array[Object]>*/;
}
{
file__Object__print(self, var17); /* Direct call file#Object#print on <self:AbstractCompilerVisitor>*/
}
} else {
{
parser_nodes__ANode__debug(var_node, var_message); /* Direct call parser_nodes#ANode#debug on <var_node:nullable ANode(ANode)>*/
}
}
if (varonce18) {
var19 = varonce18;
} else {
var20 = "/* DEBUG: ";
var21 = 10;
var22 = string__NativeString__to_s_with_length(var20, var21);
var19 = var22;
varonce18 = var19;
}
if (varonce23) {
var24 = varonce23;
} else {
var25 = " */";
var26 = 3;
var27 = string__NativeString__to_s_with_length(var25, var26);
var24 = var27;
varonce23 = var24;
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 3;
var30 = NEW_array__NativeArray(var29, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var30)->values[0] = (val*) var19;
((struct instance_array__NativeArray*)var30)->values[1] = (val*) var_message;
((struct instance_array__NativeArray*)var30)->values[2] = (val*) var24;
{
((void (*)(val*, val*, long))(var28->class->vft[COLOR_array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[Object]>*/;
}
}
{
var31 = ((val* (*)(val*))(var28->class->vft[COLOR_string__Object__to_s]))(var28) /* to_s on <var28:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(self, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#debug for (self: Object, String) */
void VIRTUAL_abstract_compiler__AbstractCompilerVisitor__debug(val* self, val* p0) {
abstract_compiler__AbstractCompilerVisitor__debug(self, p0); /* Direct call abstract_compiler#AbstractCompilerVisitor#debug on <self:Object(AbstractCompilerVisitor)>*/
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#mmethoddef for (self: AbstractRuntimeFunction): MMethodDef */
val* abstract_compiler__AbstractRuntimeFunction__mmethoddef(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:AbstractRuntimeFunction> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1448);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#mmethoddef for (self: Object): MMethodDef */
val* VIRTUAL_abstract_compiler__AbstractRuntimeFunction__mmethoddef(val* self) {
val* var /* : MMethodDef */;
val* var1 /* : MMethodDef */;
val* var3 /* : MMethodDef */;
{ /* Inline abstract_compiler#AbstractRuntimeFunction#mmethoddef (self) on <self:Object(AbstractRuntimeFunction)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val; /* _mmethoddef on <self:Object(AbstractRuntimeFunction)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmethoddef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1448);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name for (self: AbstractRuntimeFunction): String */
val* abstract_compiler__AbstractRuntimeFunction__c_name(val* self) {
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
short int var10 /* : Bool */;
val* var11 /* : String */;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#c_name_cache (self) on <self:AbstractRuntimeFunction> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___c_name_cache].val; /* _c_name_cache on <self:AbstractRuntimeFunction> */
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
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
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
var11 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__AbstractRuntimeFunction__build_c_name]))(self) /* build_c_name on <self:AbstractRuntimeFunction>*/;
}
var_res = var11;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#c_name_cache= (self,var_res) on <self:AbstractRuntimeFunction> */
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___c_name_cache].val = var_res; /* _c_name_cache on <self:AbstractRuntimeFunction> */
RET_LABEL12:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__AbstractRuntimeFunction__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name_cache for (self: AbstractRuntimeFunction): nullable String */
val* abstract_compiler__AbstractRuntimeFunction__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___c_name_cache].val; /* _c_name_cache on <self:AbstractRuntimeFunction> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name_cache for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
{ /* Inline abstract_compiler#AbstractRuntimeFunction#c_name_cache (self) on <self:Object(AbstractRuntimeFunction)> */
var3 = self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___c_name_cache].val; /* _c_name_cache on <self:Object(AbstractRuntimeFunction)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name_cache= for (self: AbstractRuntimeFunction, nullable String) */
void abstract_compiler__AbstractRuntimeFunction__c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___c_name_cache].val = p0; /* _c_name_cache on <self:AbstractRuntimeFunction> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#c_name_cache= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__AbstractRuntimeFunction__c_name_cache_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#AbstractRuntimeFunction#c_name_cache= (self,p0) on <self:Object(AbstractRuntimeFunction)> */
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___c_name_cache].val = p0; /* _c_name_cache on <self:Object(AbstractRuntimeFunction)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#init for (self: AbstractRuntimeFunction, MMethodDef) */
void abstract_compiler__AbstractRuntimeFunction__init(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val = p0; /* _mmethoddef on <self:AbstractRuntimeFunction> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractRuntimeFunction#init for (self: Object, MMethodDef) */
void VIRTUAL_abstract_compiler__AbstractRuntimeFunction__init(val* self, val* p0) {
{ /* Inline abstract_compiler#AbstractRuntimeFunction#init (self,p0) on <self:Object(AbstractRuntimeFunction)> */
self->attrs[COLOR_abstract_compiler__AbstractRuntimeFunction___mmethoddef].val = p0; /* _mmethoddef on <self:Object(AbstractRuntimeFunction)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#name for (self: RuntimeVariable): String */
val* abstract_compiler__RuntimeVariable__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___name].val; /* _name on <self:RuntimeVariable> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1481);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#name for (self: Object): String */
val* VIRTUAL_abstract_compiler__RuntimeVariable__name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{ /* Inline abstract_compiler#RuntimeVariable#name (self) on <self:Object(RuntimeVariable)> */
var3 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___name].val; /* _name on <self:Object(RuntimeVariable)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1481);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#name= for (self: RuntimeVariable, String) */
void abstract_compiler__RuntimeVariable__name_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__RuntimeVariable___name].val = p0; /* _name on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#name= for (self: Object, String) */
void VIRTUAL_abstract_compiler__RuntimeVariable__name_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#RuntimeVariable#name= (self,p0) on <self:Object(RuntimeVariable)> */
self->attrs[COLOR_abstract_compiler__RuntimeVariable___name].val = p0; /* _name on <self:Object(RuntimeVariable)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#mtype for (self: RuntimeVariable): MType */
val* abstract_compiler__RuntimeVariable__mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#mtype for (self: Object): MType */
val* VIRTUAL_abstract_compiler__RuntimeVariable__mtype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
{ /* Inline abstract_compiler#RuntimeVariable#mtype (self) on <self:Object(RuntimeVariable)> */
var3 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:Object(RuntimeVariable)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#mtype= for (self: RuntimeVariable, MType) */
void abstract_compiler__RuntimeVariable__mtype_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val = p0; /* _mtype on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#mtype= for (self: Object, MType) */
void VIRTUAL_abstract_compiler__RuntimeVariable__mtype_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#RuntimeVariable#mtype= (self,p0) on <self:Object(RuntimeVariable)> */
self->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val = p0; /* _mtype on <self:Object(RuntimeVariable)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#mcasttype for (self: RuntimeVariable): MType */
val* abstract_compiler__RuntimeVariable__mcasttype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:RuntimeVariable> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#mcasttype for (self: Object): MType */
val* VIRTUAL_abstract_compiler__RuntimeVariable__mcasttype(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
val* var3 /* : MType */;
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (self) on <self:Object(RuntimeVariable)> */
var3 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:Object(RuntimeVariable)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#mcasttype= for (self: RuntimeVariable, MType) */
void abstract_compiler__RuntimeVariable__mcasttype_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val = p0; /* _mcasttype on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#mcasttype= for (self: Object, MType) */
void VIRTUAL_abstract_compiler__RuntimeVariable__mcasttype_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype= (self,p0) on <self:Object(RuntimeVariable)> */
self->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val = p0; /* _mcasttype on <self:Object(RuntimeVariable)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#is_exact for (self: RuntimeVariable): Bool */
short int abstract_compiler__RuntimeVariable__is_exact(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___is_exact].s; /* _is_exact on <self:RuntimeVariable> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#is_exact for (self: Object): Bool */
short int VIRTUAL_abstract_compiler__RuntimeVariable__is_exact(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
{ /* Inline abstract_compiler#RuntimeVariable#is_exact (self) on <self:Object(RuntimeVariable)> */
var3 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___is_exact].s; /* _is_exact on <self:Object(RuntimeVariable)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#is_exact= for (self: RuntimeVariable, Bool) */
void abstract_compiler__RuntimeVariable__is_exact_61d(val* self, short int p0) {
self->attrs[COLOR_abstract_compiler__RuntimeVariable___is_exact].s = p0; /* _is_exact on <self:RuntimeVariable> */
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#is_exact= for (self: Object, Bool) */
void VIRTUAL_abstract_compiler__RuntimeVariable__is_exact_61d(val* self, short int p0) {
{ /* Inline abstract_compiler#RuntimeVariable#is_exact= (self,p0) on <self:Object(RuntimeVariable)> */
self->attrs[COLOR_abstract_compiler__RuntimeVariable___is_exact].s = p0; /* _is_exact on <self:Object(RuntimeVariable)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#init for (self: RuntimeVariable, String, MType, MType) */
void abstract_compiler__RuntimeVariable__init(val* self, val* p0, val* p1, val* p2) {
val* var_name /* var name: String */;
val* var_mtype /* var mtype: MType */;
val* var_mcasttype /* var mcasttype: MType */;
short int var /* : Bool */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
var_name = p0;
var_mtype = p1;
var_mcasttype = p2;
{
{ /* Inline abstract_compiler#RuntimeVariable#name= (self,var_name) on <self:RuntimeVariable> */
self->attrs[COLOR_abstract_compiler__RuntimeVariable___name].val = var_name; /* _name on <self:RuntimeVariable> */
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype= (self,var_mtype) on <self:RuntimeVariable> */
self->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val = var_mtype; /* _mtype on <self:RuntimeVariable> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype= (self,var_mcasttype) on <self:RuntimeVariable> */
self->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val = var_mcasttype; /* _mcasttype on <self:RuntimeVariable> */
RET_LABEL3:(void)0;
}
}
{
var = ((short int (*)(val*))(var_mtype->class->vft[COLOR_model__MType__need_anchor]))(var_mtype) /* need_anchor on <var_mtype:MType>*/;
}
var4 = !var;
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1499);
show_backtrace(1);
}
{
var5 = ((short int (*)(val*))(var_mcasttype->class->vft[COLOR_model__MType__need_anchor]))(var_mcasttype) /* need_anchor on <var_mcasttype:MType>*/;
}
var6 = !var5;
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1500);
show_backtrace(1);
}
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#init for (self: Object, String, MType, MType) */
void VIRTUAL_abstract_compiler__RuntimeVariable__init(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__RuntimeVariable__init(self, p0, p1, p2); /* Direct call abstract_compiler#RuntimeVariable#init on <self:Object(RuntimeVariable)>*/
RET_LABEL:;
}
/* method abstract_compiler#RuntimeVariable#to_s for (self: RuntimeVariable): String */
val* abstract_compiler__RuntimeVariable__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline abstract_compiler#RuntimeVariable#name (self) on <self:RuntimeVariable> */
var3 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___name].val; /* _name on <self:RuntimeVariable> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1481);
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
/* method abstract_compiler#RuntimeVariable#to_s for (self: Object): String */
val* VIRTUAL_abstract_compiler__RuntimeVariable__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__RuntimeVariable__to_s(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#inspect for (self: RuntimeVariable): String */
val* abstract_compiler__RuntimeVariable__inspect(val* self) {
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
short int var20 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
val* var25 /* : MType */;
val* var27 /* : MType */;
val* var28 /* : Array[Object] */;
long var29 /* : Int */;
val* var30 /* : NativeArray[Object] */;
val* var31 /* : String */;
val* var_type_str /* var type_str: nullable Object */;
val* var32 /* : MType */;
val* var34 /* : MType */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
val* var40 /* : MType */;
val* var42 /* : MType */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
long var46 /* : Int */;
val* var47 /* : FlatString */;
val* var48 /* : Array[Object] */;
long var49 /* : Int */;
val* var50 /* : NativeArray[Object] */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : FlatString */;
val* var57 /* : String */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : FlatString */;
val* var70 /* : Array[Object] */;
long var71 /* : Int */;
val* var72 /* : NativeArray[Object] */;
val* var73 /* : String */;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact (self) on <self:RuntimeVariable> */
var3 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___is_exact].s; /* _is_exact on <self:RuntimeVariable> */
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
var7 = string__NativeString__to_s_with_length(var5, var6);
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
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce8 = var9;
}
var_exact_str = var9;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (self) on <self:RuntimeVariable> */
var15 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (self) on <self:RuntimeVariable> */
var18 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:RuntimeVariable> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
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
var24 = var13 == var_other;
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
if (var19){
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (self) on <self:RuntimeVariable> */
var27 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var28 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var28 = array_instance Array[Object] */
var29 = 2;
var30 = NEW_array__NativeArray(var29, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var30)->values[0] = (val*) var25;
((struct instance_array__NativeArray*)var30)->values[1] = (val*) var_exact_str;
{
((void (*)(val*, val*, long))(var28->class->vft[COLOR_array__Array__with_native]))(var28, var30, var29) /* with_native on <var28:Array[Object]>*/;
}
}
{
var31 = ((val* (*)(val*))(var28->class->vft[COLOR_string__Object__to_s]))(var28) /* to_s on <var28:Array[Object]>*/;
}
var_type_str = var31;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (self) on <self:RuntimeVariable> */
var34 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1484);
show_backtrace(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = "(";
var38 = 1;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (self) on <self:RuntimeVariable> */
var42 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:RuntimeVariable> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1487);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (varonce43) {
var44 = varonce43;
} else {
var45 = ")";
var46 = 1;
var47 = string__NativeString__to_s_with_length(var45, var46);
var44 = var47;
varonce43 = var44;
}
var48 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var48 = array_instance Array[Object] */
var49 = 5;
var50 = NEW_array__NativeArray(var49, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var50)->values[0] = (val*) var32;
((struct instance_array__NativeArray*)var50)->values[1] = (val*) var36;
((struct instance_array__NativeArray*)var50)->values[2] = (val*) var40;
((struct instance_array__NativeArray*)var50)->values[3] = (val*) var_exact_str;
((struct instance_array__NativeArray*)var50)->values[4] = (val*) var44;
{
((void (*)(val*, val*, long))(var48->class->vft[COLOR_array__Array__with_native]))(var48, var50, var49) /* with_native on <var48:Array[Object]>*/;
}
}
{
var51 = ((val* (*)(val*))(var48->class->vft[COLOR_string__Object__to_s]))(var48) /* to_s on <var48:Array[Object]>*/;
}
var_type_str = var51;
}
if (varonce52) {
var53 = varonce52;
} else {
var54 = "<";
var55 = 1;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#name (self) on <self:RuntimeVariable> */
var59 = self->attrs[COLOR_abstract_compiler__RuntimeVariable___name].val; /* _name on <self:RuntimeVariable> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1481);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (varonce60) {
var61 = varonce60;
} else {
var62 = ":";
var63 = 1;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = ">";
var68 = 1;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var70 = array_instance Array[Object] */
var71 = 5;
var72 = NEW_array__NativeArray(var71, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var72)->values[0] = (val*) var53;
((struct instance_array__NativeArray*)var72)->values[1] = (val*) var57;
((struct instance_array__NativeArray*)var72)->values[2] = (val*) var61;
((struct instance_array__NativeArray*)var72)->values[3] = (val*) var_type_str;
((struct instance_array__NativeArray*)var72)->values[4] = (val*) var66;
{
((void (*)(val*, val*, long))(var70->class->vft[COLOR_array__Array__with_native]))(var70, var72, var71) /* with_native on <var70:Array[Object]>*/;
}
}
{
var73 = ((val* (*)(val*))(var70->class->vft[COLOR_string__Object__to_s]))(var70) /* to_s on <var70:Array[Object]>*/;
}
var = var73;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#RuntimeVariable#inspect for (self: Object): String */
val* VIRTUAL_abstract_compiler__RuntimeVariable__inspect(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__RuntimeVariable__inspect(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#mpropdef for (self: Frame): MPropDef */
val* abstract_compiler__Frame__mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <self:Frame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#mpropdef for (self: Object): MPropDef */
val* VIRTUAL_abstract_compiler__Frame__mpropdef(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
val* var3 /* : MPropDef */;
{ /* Inline abstract_compiler#Frame#mpropdef (self) on <self:Object(Frame)> */
var3 = self->attrs[COLOR_abstract_compiler__Frame___mpropdef].val; /* _mpropdef on <self:Object(Frame)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1531);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#receiver for (self: Frame): MClassType */
val* abstract_compiler__Frame__receiver(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___receiver].val; /* _receiver on <self:Frame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1535);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#receiver for (self: Object): MClassType */
val* VIRTUAL_abstract_compiler__Frame__receiver(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
val* var3 /* : MClassType */;
{ /* Inline abstract_compiler#Frame#receiver (self) on <self:Object(Frame)> */
var3 = self->attrs[COLOR_abstract_compiler__Frame___receiver].val; /* _receiver on <self:Object(Frame)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1535);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#arguments for (self: Frame): Array[RuntimeVariable] */
val* abstract_compiler__Frame__arguments(val* self) {
val* var /* : Array[RuntimeVariable] */;
val* var1 /* : Array[RuntimeVariable] */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___arguments].val; /* _arguments on <self:Frame> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1538);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#arguments for (self: Object): Array[RuntimeVariable] */
val* VIRTUAL_abstract_compiler__Frame__arguments(val* self) {
val* var /* : Array[RuntimeVariable] */;
val* var1 /* : Array[RuntimeVariable] */;
val* var3 /* : Array[RuntimeVariable] */;
{ /* Inline abstract_compiler#Frame#arguments (self) on <self:Object(Frame)> */
var3 = self->attrs[COLOR_abstract_compiler__Frame___arguments].val; /* _arguments on <self:Object(Frame)> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1538);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#returnvar for (self: Frame): nullable RuntimeVariable */
val* abstract_compiler__Frame__returnvar(val* self) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___returnvar].val; /* _returnvar on <self:Frame> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#returnvar for (self: Object): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__Frame__returnvar(val* self) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
val* var3 /* : nullable RuntimeVariable */;
{ /* Inline abstract_compiler#Frame#returnvar (self) on <self:Object(Frame)> */
var3 = self->attrs[COLOR_abstract_compiler__Frame___returnvar].val; /* _returnvar on <self:Object(Frame)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#returnvar= for (self: Frame, nullable RuntimeVariable) */
void abstract_compiler__Frame__returnvar_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__Frame___returnvar].val = p0; /* _returnvar on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#returnvar= for (self: Object, nullable RuntimeVariable) */
void VIRTUAL_abstract_compiler__Frame__returnvar_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#Frame#returnvar= (self,p0) on <self:Object(Frame)> */
self->attrs[COLOR_abstract_compiler__Frame___returnvar].val = p0; /* _returnvar on <self:Object(Frame)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#Frame#returnlabel for (self: Frame): nullable String */
val* abstract_compiler__Frame__returnlabel(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__Frame___returnlabel].val; /* _returnlabel on <self:Frame> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#returnlabel for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__Frame__returnlabel(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
{ /* Inline abstract_compiler#Frame#returnlabel (self) on <self:Object(Frame)> */
var3 = self->attrs[COLOR_abstract_compiler__Frame___returnlabel].val; /* _returnlabel on <self:Object(Frame)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Frame#returnlabel= for (self: Frame, nullable String) */
void abstract_compiler__Frame__returnlabel_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__Frame___returnlabel].val = p0; /* _returnlabel on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#returnlabel= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__Frame__returnlabel_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#Frame#returnlabel= (self,p0) on <self:Object(Frame)> */
self->attrs[COLOR_abstract_compiler__Frame___returnlabel].val = p0; /* _returnlabel on <self:Object(Frame)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#Frame#init for (self: Frame, AbstractCompilerVisitor, MPropDef, MClassType, Array[RuntimeVariable]) */
void abstract_compiler__Frame__init(val* self, val* p0, val* p1, val* p2, val* p3) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (visitor) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__Frame_VTVISITOR];
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1523);
show_backtrace(1);
}
self->attrs[COLOR_abstract_compiler__Frame___visitor].val = p0; /* _visitor on <self:Frame> */
self->attrs[COLOR_abstract_compiler__Frame___mpropdef].val = p1; /* _mpropdef on <self:Frame> */
self->attrs[COLOR_abstract_compiler__Frame___receiver].val = p2; /* _receiver on <self:Frame> */
self->attrs[COLOR_abstract_compiler__Frame___arguments].val = p3; /* _arguments on <self:Frame> */
RET_LABEL:;
}
/* method abstract_compiler#Frame#init for (self: Object, AbstractCompilerVisitor, MPropDef, MClassType, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__Frame__init(val* self, val* p0, val* p1, val* p2, val* p3) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
{ /* Inline abstract_compiler#Frame#init (self,p0,p1,p2,p3) on <self:Object(Frame)> */
/* Covariant cast for argument 0 (visitor) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_abstract_compiler__Frame_VTVISITOR];
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1523);
show_backtrace(1);
}
self->attrs[COLOR_abstract_compiler__Frame___visitor].val = p0; /* _visitor on <self:Object(Frame)> */
self->attrs[COLOR_abstract_compiler__Frame___mpropdef].val = p1; /* _mpropdef on <self:Object(Frame)> */
self->attrs[COLOR_abstract_compiler__Frame___receiver].val = p2; /* _receiver on <self:Object(Frame)> */
self->attrs[COLOR_abstract_compiler__Frame___arguments].val = p3; /* _arguments on <self:Object(Frame)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#MType#ctype for (self: MType): String */
val* abstract_compiler__MType__ctype(val* self) {
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
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#ctype for (self: Object): String */
val* VIRTUAL_abstract_compiler__MType__ctype(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MType__ctype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#ctypename for (self: MType): String */
val* abstract_compiler__MType__ctypename(val* self) {
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
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#ctypename for (self: Object): String */
val* VIRTUAL_abstract_compiler__MType__ctypename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MType__ctypename(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#c_name for (self: MType): String */
val* abstract_compiler__MType__c_name(val* self) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "c_name", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1554);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
const char* var_class_name;
{ /* Inline abstract_compiler#MType#c_name (self) on <self:Object(MType)> */
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: Abstract method `%s` called on `%s`", "c_name", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1554);
show_backtrace(1);
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#c_name_cache for (self: MType): nullable String */
val* abstract_compiler__MType__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val; /* _c_name_cache on <self:MType> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#c_name_cache for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__MType__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
{ /* Inline abstract_compiler#MType#c_name_cache (self) on <self:Object(MType)> */
var3 = self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val; /* _c_name_cache on <self:Object(MType)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#c_name_cache= for (self: MType, nullable String) */
void abstract_compiler__MType__c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val = p0; /* _c_name_cache on <self:MType> */
RET_LABEL:;
}
/* method abstract_compiler#MType#c_name_cache= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__MType__c_name_cache_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#MType#c_name_cache= (self,p0) on <self:Object(MType)> */
self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val = p0; /* _c_name_cache on <self:Object(MType)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#MClassType#c_name for (self: MClassType): String */
val* abstract_compiler__MClassType__c_name(val* self) {
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
short int var10 /* : Bool */;
val* var11 /* : MClass */;
val* var13 /* : MClass */;
val* var14 /* : MModule */;
val* var16 /* : MModule */;
val* var17 /* : String */;
val* var19 /* : String */;
val* var20 /* : String */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
val* var25 /* : MClass */;
val* var27 /* : MClass */;
val* var28 /* : String */;
val* var30 /* : String */;
val* var31 /* : String */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
{
{ /* Inline abstract_compiler#MType#c_name_cache (self) on <self:MClassType> */
var3 = self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val; /* _c_name_cache on <self:MClassType> */
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
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
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
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var13 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MClass#intro_mmodule (var11) on <var11:MClass> */
var16 = var11->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <var11:MClass> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 335);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var14) on <var14:MModule> */
var19 = var14->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var14:MModule> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = string__Text__to_cmangle(var17);
}
if (varonce) {
var21 = varonce;
} else {
var22 = "__";
var23 = 2;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce = var21;
}
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var27 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline model#MClass#name (var25) on <var25:MClass> */
var30 = var25->attrs[COLOR_model__MClass___name].val; /* _name on <var25:MClass> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
var31 = string__Text__to_cmangle(var28);
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 3;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var20;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var21;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var31;
{
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
}
{
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
}
var_res = var35;
{
{ /* Inline abstract_compiler#MType#c_name_cache= (self,var_res) on <self:MClassType> */
self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val = var_res; /* _c_name_cache on <self:MClassType> */
RET_LABEL36:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MClassType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MClassType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctype for (self: MClassType): String */
val* abstract_compiler__MClassType__ctype(val* self) {
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
short int var12 /* : Bool */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : String */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
val* var36 /* : MClass */;
val* var38 /* : MClass */;
val* var39 /* : String */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : FlatString */;
val* var54 /* : MClass */;
val* var56 /* : MClass */;
val* var57 /* : String */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
val* var72 /* : MClass */;
val* var74 /* : MClass */;
val* var75 /* : String */;
val* var77 /* : String */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : FlatString */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
val* var90 /* : MClass */;
val* var92 /* : MClass */;
val* var93 /* : String */;
val* var95 /* : String */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : FlatString */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : FlatString */;
val* var108 /* : MClass */;
val* var110 /* : MClass */;
val* var111 /* : MClassKind */;
val* var113 /* : MClassKind */;
val* var114 /* : MClassKind */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : FlatString */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : FlatString */;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClass#name (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_model__MClass___name].val; /* _name on <var1:MClass> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
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
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
{
var12 = string__FlatString___61d_61d(var4, var7);
var11 = var12;
}
if (var11){
if (varonce13) {
var14 = varonce13;
} else {
var15 = "long";
var16 = 4;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var = var14;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var20 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MClass#name (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_model__MClass___name].val; /* _name on <var18:MClass> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = "Bool";
var27 = 4;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
{
var30 = string__FlatString___61d_61d(var21, var25);
var29 = var30;
}
if (var29){
if (varonce31) {
var32 = varonce31;
} else {
var33 = "short int";
var34 = 9;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var = var32;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var38 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline model#MClass#name (var36) on <var36:MClass> */
var41 = var36->attrs[COLOR_model__MClass___name].val; /* _name on <var36:MClass> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = "Char";
var45 = 4;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
var48 = string__FlatString___61d_61d(var39, var43);
var47 = var48;
}
if (var47){
if (varonce49) {
var50 = varonce49;
} else {
var51 = "char";
var52 = 4;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
var = var50;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var56 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline model#MClass#name (var54) on <var54:MClass> */
var59 = var54->attrs[COLOR_model__MClass___name].val; /* _name on <var54:MClass> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (varonce60) {
var61 = varonce60;
} else {
var62 = "Float";
var63 = 5;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
{
var66 = string__FlatString___61d_61d(var57, var61);
var65 = var66;
}
if (var65){
if (varonce67) {
var68 = varonce67;
} else {
var69 = "double";
var70 = 6;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var = var68;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var74 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline model#MClass#name (var72) on <var72:MClass> */
var77 = var72->attrs[COLOR_model__MClass___name].val; /* _name on <var72:MClass> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (varonce78) {
var79 = varonce78;
} else {
var80 = "NativeString";
var81 = 12;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
{
var84 = string__FlatString___61d_61d(var75, var79);
var83 = var84;
}
if (var83){
if (varonce85) {
var86 = varonce85;
} else {
var87 = "char*";
var88 = 5;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var = var86;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var92 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline model#MClass#name (var90) on <var90:MClass> */
var95 = var90->attrs[COLOR_model__MClass___name].val; /* _name on <var90:MClass> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
if (varonce96) {
var97 = varonce96;
} else {
var98 = "NativeArray";
var99 = 11;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
{
var102 = string__FlatString___61d_61d(var93, var97);
var101 = var102;
}
if (var101){
if (varonce103) {
var104 = varonce103;
} else {
var105 = "val*";
var106 = 4;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
var = var104;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var110 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var108) on <var108:MClass> */
var113 = var108->attrs[COLOR_model__MClass___kind].val; /* _kind on <var108:MClass> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
var114 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var111,var114) on <var111:MClassKind> */
var_other = var114;
{
{ /* Inline kernel#Object#is_same_instance (var111,var_other) on <var111:MClassKind> */
var120 = var111 == var_other;
var118 = var120;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
var116 = var118;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
var115 = var116;
}
if (var115){
if (varonce121) {
var122 = varonce121;
} else {
var123 = "void*";
var124 = 5;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
var = var122;
goto RET_LABEL;
} else {
if (varonce126) {
var127 = varonce126;
} else {
var128 = "val*";
var129 = 4;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
var = var127;
goto RET_LABEL;
}
}
}
}
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctype for (self: Object): String */
val* VIRTUAL_abstract_compiler__MClassType__ctype(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MClassType__ctype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctypename for (self: MClassType): String */
val* abstract_compiler__MClassType__ctypename(val* self) {
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
short int var12 /* : Bool */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : FlatString */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : String */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : FlatString */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : FlatString */;
val* var36 /* : MClass */;
val* var38 /* : MClass */;
val* var39 /* : String */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : FlatString */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
long var52 /* : Int */;
val* var53 /* : FlatString */;
val* var54 /* : MClass */;
val* var56 /* : MClass */;
val* var57 /* : String */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : FlatString */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
long var70 /* : Int */;
val* var71 /* : FlatString */;
val* var72 /* : MClass */;
val* var74 /* : MClass */;
val* var75 /* : String */;
val* var77 /* : String */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
long var81 /* : Int */;
val* var82 /* : FlatString */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : FlatString */;
val* var90 /* : MClass */;
val* var92 /* : MClass */;
val* var93 /* : String */;
val* var95 /* : String */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
long var99 /* : Int */;
val* var100 /* : FlatString */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : NativeString */;
long var106 /* : Int */;
val* var107 /* : FlatString */;
val* var108 /* : MClass */;
val* var110 /* : MClass */;
val* var111 /* : MClassKind */;
val* var113 /* : MClassKind */;
val* var114 /* : MClassKind */;
short int var115 /* : Bool */;
short int var116 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : NativeString */;
long var124 /* : Int */;
val* var125 /* : FlatString */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : FlatString */;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MClass#name (var1) on <var1:MClass> */
var6 = var1->attrs[COLOR_model__MClass___name].val; /* _name on <var1:MClass> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
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
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
{
var12 = string__FlatString___61d_61d(var4, var7);
var11 = var12;
}
if (var11){
if (varonce13) {
var14 = varonce13;
} else {
var15 = "l";
var16 = 1;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var = var14;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var20 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MClass#name (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_model__MClass___name].val; /* _name on <var18:MClass> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = "Bool";
var27 = 4;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
{
var30 = string__FlatString___61d_61d(var21, var25);
var29 = var30;
}
if (var29){
if (varonce31) {
var32 = varonce31;
} else {
var33 = "s";
var34 = 1;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
var = var32;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var38 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline model#MClass#name (var36) on <var36:MClass> */
var41 = var36->attrs[COLOR_model__MClass___name].val; /* _name on <var36:MClass> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (varonce42) {
var43 = varonce42;
} else {
var44 = "Char";
var45 = 4;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
{
var48 = string__FlatString___61d_61d(var39, var43);
var47 = var48;
}
if (var47){
if (varonce49) {
var50 = varonce49;
} else {
var51 = "c";
var52 = 1;
var53 = string__NativeString__to_s_with_length(var51, var52);
var50 = var53;
varonce49 = var50;
}
var = var50;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var56 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline model#MClass#name (var54) on <var54:MClass> */
var59 = var54->attrs[COLOR_model__MClass___name].val; /* _name on <var54:MClass> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (varonce60) {
var61 = varonce60;
} else {
var62 = "Float";
var63 = 5;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
{
var66 = string__FlatString___61d_61d(var57, var61);
var65 = var66;
}
if (var65){
if (varonce67) {
var68 = varonce67;
} else {
var69 = "d";
var70 = 1;
var71 = string__NativeString__to_s_with_length(var69, var70);
var68 = var71;
varonce67 = var68;
}
var = var68;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var74 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline model#MClass#name (var72) on <var72:MClass> */
var77 = var72->attrs[COLOR_model__MClass___name].val; /* _name on <var72:MClass> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (varonce78) {
var79 = varonce78;
} else {
var80 = "NativeString";
var81 = 12;
var82 = string__NativeString__to_s_with_length(var80, var81);
var79 = var82;
varonce78 = var79;
}
{
var84 = string__FlatString___61d_61d(var75, var79);
var83 = var84;
}
if (var83){
if (varonce85) {
var86 = varonce85;
} else {
var87 = "str";
var88 = 3;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var = var86;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var92 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline model#MClass#name (var90) on <var90:MClass> */
var95 = var90->attrs[COLOR_model__MClass___name].val; /* _name on <var90:MClass> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
if (varonce96) {
var97 = varonce96;
} else {
var98 = "NativeArray";
var99 = 11;
var100 = string__NativeString__to_s_with_length(var98, var99);
var97 = var100;
varonce96 = var97;
}
{
var102 = string__FlatString___61d_61d(var93, var97);
var101 = var102;
}
if (var101){
if (varonce103) {
var104 = varonce103;
} else {
var105 = "val";
var106 = 3;
var107 = string__NativeString__to_s_with_length(var105, var106);
var104 = var107;
varonce103 = var104;
}
var = var104;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var110 = self->attrs[COLOR_model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 969);
show_backtrace(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var108) on <var108:MClass> */
var113 = var108->attrs[COLOR_model__MClass___kind].val; /* _kind on <var108:MClass> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 355);
show_backtrace(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
var114 = model__Object__extern_kind(self);
}
{
{ /* Inline kernel#Object#== (var111,var114) on <var111:MClassKind> */
var_other = var114;
{
{ /* Inline kernel#Object#is_same_instance (var111,var_other) on <var111:MClassKind> */
var120 = var111 == var_other;
var118 = var120;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
}
var116 = var118;
goto RET_LABEL117;
RET_LABEL117:(void)0;
}
var115 = var116;
}
if (var115){
if (varonce121) {
var122 = varonce121;
} else {
var123 = "ptr";
var124 = 3;
var125 = string__NativeString__to_s_with_length(var123, var124);
var122 = var125;
varonce121 = var122;
}
var = var122;
goto RET_LABEL;
} else {
if (varonce126) {
var127 = varonce126;
} else {
var128 = "val";
var129 = 3;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
var = var127;
goto RET_LABEL;
}
}
}
}
}
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctypename for (self: Object): String */
val* VIRTUAL_abstract_compiler__MClassType__ctypename(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MClassType__ctypename(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MGenericType#c_name for (self: MGenericType): String */
val* abstract_compiler__MGenericType__c_name(val* self) {
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
short int var10 /* : Bool */;
val* var11 /* : String */;
val* var12 /* : Array[MType] */;
val* var14 /* : Array[MType] */;
val* var15 /* : ArrayIterator[nullable Object] */;
short int var16 /* : Bool */;
val* var17 /* : nullable Object */;
val* var_t /* var t: MType */;
val* var18 /* : String */;
val* var19 /* : String */;
{
{ /* Inline abstract_compiler#MType#c_name_cache (self) on <self:MGenericType> */
var3 = self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val; /* _c_name_cache on <self:MGenericType> */
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
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
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
var11 = ((val* (*)(val*))(self->class->vft[COLOR_abstract_compiler__MGenericType__c_name]))(self) /* c_name on <self:MGenericType>*/;
}
var_res = var11;
{
{ /* Inline model#MClassType#arguments (self) on <self:MGenericType> */
var14 = self->attrs[COLOR_model__MClassType___arguments].val; /* _arguments on <self:MGenericType> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _arguments");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 979);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = array__AbstractArrayRead__iterator(var12);
}
for(;;) {
{
var16 = array__ArrayIterator__is_ok(var15);
}
if(!var16) break;
{
var17 = array__ArrayIterator__item(var15);
}
var_t = var17;
{
var18 = ((val* (*)(val*))(var_t->class->vft[COLOR_abstract_compiler__MType__c_name]))(var_t) /* c_name on <var_t:MType>*/;
}
{
var19 = string__FlatString___43d(var_res, var18);
}
var_res = var19;
CONTINUE_label: (void)0;
{
array__ArrayIterator__next(var15); /* Direct call array#ArrayIterator#next on <var15:ArrayIterator[nullable Object]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_compiler#MType#c_name_cache= (self,var_res) on <self:MGenericType> */
self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val = var_res; /* _c_name_cache on <self:MGenericType> */
RET_LABEL20:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MGenericType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MGenericType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MGenericType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MParameterType#c_name for (self: MParameterType): String */
val* abstract_compiler__MParameterType__c_name(val* self) {
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
short int var10 /* : Bool */;
val* var11 /* : MClass */;
val* var13 /* : MClass */;
val* var14 /* : String */;
static val* varonce;
val* var15 /* : String */;
char* var16 /* : NativeString */;
long var17 /* : Int */;
val* var18 /* : FlatString */;
long var19 /* : Int */;
long var21 /* : Int */;
val* var22 /* : Array[Object] */;
long var23 /* : Int */;
val* var24 /* : NativeArray[Object] */;
val* var25 /* : Object */;
val* var26 /* : String */;
{
{ /* Inline abstract_compiler#MType#c_name_cache (self) on <self:MParameterType> */
var3 = self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val; /* _c_name_cache on <self:MParameterType> */
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
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
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
{ /* Inline model#MParameterType#mclass (self) on <self:MParameterType> */
var13 = self->attrs[COLOR_model__MParameterType___mclass].val; /* _mclass on <self:MParameterType> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1265);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = abstract_compiler__MClass__c_name(var11);
}
if (varonce) {
var15 = varonce;
} else {
var16 = "_FT";
var17 = 3;
var18 = string__NativeString__to_s_with_length(var16, var17);
var15 = var18;
varonce = var15;
}
{
{ /* Inline model#MParameterType#rank (self) on <self:MParameterType> */
var21 = self->attrs[COLOR_model__MParameterType___rank].l; /* _rank on <self:MParameterType> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var22 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var22 = array_instance Array[Object] */
var23 = 3;
var24 = NEW_array__NativeArray(var23, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var24)->values[0] = (val*) var14;
((struct instance_array__NativeArray*)var24)->values[1] = (val*) var15;
var25 = BOX_kernel__Int(var19); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var24)->values[2] = (val*) var25;
{
((void (*)(val*, val*, long))(var22->class->vft[COLOR_array__Array__with_native]))(var22, var24, var23) /* with_native on <var22:Array[Object]>*/;
}
}
{
var26 = ((val* (*)(val*))(var22->class->vft[COLOR_string__Object__to_s]))(var22) /* to_s on <var22:Array[Object]>*/;
}
var_res = var26;
{
{ /* Inline abstract_compiler#MType#c_name_cache= (self,var_res) on <self:MParameterType> */
self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val = var_res; /* _c_name_cache on <self:MParameterType> */
RET_LABEL27:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MParameterType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MParameterType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MParameterType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MVirtualType#c_name for (self: MVirtualType): String */
val* abstract_compiler__MVirtualType__c_name(val* self) {
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
short int var10 /* : Bool */;
val* var11 /* : MProperty */;
val* var13 /* : MProperty */;
val* var14 /* : MPropDef */;
val* var15 /* : MClassDef */;
val* var17 /* : MClassDef */;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : String */;
static val* varonce;
val* var22 /* : String */;
char* var23 /* : NativeString */;
long var24 /* : Int */;
val* var25 /* : FlatString */;
val* var26 /* : MProperty */;
val* var28 /* : MProperty */;
val* var29 /* : String */;
val* var31 /* : String */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
{
{ /* Inline abstract_compiler#MType#c_name_cache (self) on <self:MVirtualType> */
var3 = self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val; /* _c_name_cache on <self:MVirtualType> */
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
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
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
{ /* Inline model#MVirtualType#mproperty (self) on <self:MVirtualType> */
var13 = self->attrs[COLOR_model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1135);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var14 = model__MProperty__intro(var11);
}
{
{ /* Inline model#MPropDef#mclassdef (var14) on <var14:MPropDef> */
var17 = var14->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var14:MPropDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var15) on <var15:MClassDef> */
var20 = var15->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var15:MClassDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = abstract_compiler__MClass__c_name(var18);
}
if (varonce) {
var22 = varonce;
} else {
var23 = "_VT";
var24 = 3;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce = var22;
}
{
{ /* Inline model#MVirtualType#mproperty (self) on <self:MVirtualType> */
var28 = self->attrs[COLOR_model__MVirtualType___mproperty].val; /* _mproperty on <self:MVirtualType> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1135);
show_backtrace(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var26) on <var26:MProperty> */
var31 = var26->attrs[COLOR_model__MProperty___name].val; /* _name on <var26:MProperty> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 3;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var21;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var22;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var29;
{
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
}
{
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
}
var_res = var35;
{
{ /* Inline abstract_compiler#MType#c_name_cache= (self,var_res) on <self:MVirtualType> */
self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val = var_res; /* _c_name_cache on <self:MVirtualType> */
RET_LABEL36:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MVirtualType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MVirtualType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MVirtualType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MNullableType#c_name for (self: MNullableType): String */
val* abstract_compiler__MNullableType__c_name(val* self) {
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
short int var10 /* : Bool */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
long var13 /* : Int */;
val* var14 /* : FlatString */;
val* var15 /* : MType */;
val* var17 /* : MType */;
val* var18 /* : String */;
val* var19 /* : Array[Object] */;
long var20 /* : Int */;
val* var21 /* : NativeArray[Object] */;
val* var22 /* : String */;
{
{ /* Inline abstract_compiler#MType#c_name_cache (self) on <self:MNullableType> */
var3 = self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val; /* _c_name_cache on <self:MNullableType> */
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
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
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
if (varonce) {
var11 = varonce;
} else {
var12 = "nullable_";
var13 = 9;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce = var11;
}
{
{ /* Inline model#MNullableType#mtype (self) on <self:MNullableType> */
var17 = self->attrs[COLOR_model__MNullableType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1375);
show_backtrace(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = ((val* (*)(val*))(var15->class->vft[COLOR_abstract_compiler__MType__c_name]))(var15) /* c_name on <var15:MType>*/;
}
var19 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var19 = array_instance Array[Object] */
var20 = 2;
var21 = NEW_array__NativeArray(var20, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var21)->values[0] = (val*) var11;
((struct instance_array__NativeArray*)var21)->values[1] = (val*) var18;
{
((void (*)(val*, val*, long))(var19->class->vft[COLOR_array__Array__with_native]))(var19, var21, var20) /* with_native on <var19:Array[Object]>*/;
}
}
{
var22 = ((val* (*)(val*))(var19->class->vft[COLOR_string__Object__to_s]))(var19) /* to_s on <var19:Array[Object]>*/;
}
var_res = var22;
{
{ /* Inline abstract_compiler#MType#c_name_cache= (self,var_res) on <self:MNullableType> */
self->attrs[COLOR_abstract_compiler__MType___c_name_cache].val = var_res; /* _c_name_cache on <self:MNullableType> */
RET_LABEL23:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MNullableType#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MNullableType__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MNullableType__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClass#c_name for (self: MClass): String */
val* abstract_compiler__MClass__c_name(val* self) {
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
short int var10 /* : Bool */;
val* var11 /* : MModule */;
val* var13 /* : MModule */;
val* var14 /* : String */;
val* var16 /* : String */;
val* var17 /* : String */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
val* var22 /* : String */;
val* var24 /* : String */;
val* var25 /* : String */;
val* var26 /* : Array[Object] */;
long var27 /* : Int */;
val* var28 /* : NativeArray[Object] */;
val* var29 /* : String */;
{
{ /* Inline abstract_compiler#MClass#c_name_cache (self) on <self:MClass> */
var3 = self->attrs[COLOR_abstract_compiler__MClass___c_name_cache].val; /* _c_name_cache on <self:MClass> */
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
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
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
{ /* Inline model#MClass#intro_mmodule (self) on <self:MClass> */
var13 = self->attrs[COLOR_model__MClass___intro_mmodule].val; /* _intro_mmodule on <self:MClass> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro_mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 335);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var11) on <var11:MModule> */
var16 = var11->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var11:MModule> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = string__Text__to_cmangle(var14);
}
if (varonce) {
var18 = varonce;
} else {
var19 = "__";
var20 = 2;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce = var18;
}
{
{ /* Inline model#MClass#name (self) on <self:MClass> */
var24 = self->attrs[COLOR_model__MClass___name].val; /* _name on <self:MClass> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = string__Text__to_cmangle(var22);
}
var26 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var26 = array_instance Array[Object] */
var27 = 3;
var28 = NEW_array__NativeArray(var27, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var28)->values[0] = (val*) var17;
((struct instance_array__NativeArray*)var28)->values[1] = (val*) var18;
((struct instance_array__NativeArray*)var28)->values[2] = (val*) var25;
{
((void (*)(val*, val*, long))(var26->class->vft[COLOR_array__Array__with_native]))(var26, var28, var27) /* with_native on <var26:Array[Object]>*/;
}
}
{
var29 = ((val* (*)(val*))(var26->class->vft[COLOR_string__Object__to_s]))(var26) /* to_s on <var26:Array[Object]>*/;
}
var_res = var29;
{
{ /* Inline abstract_compiler#MClass#c_name_cache= (self,var_res) on <self:MClass> */
self->attrs[COLOR_abstract_compiler__MClass___c_name_cache].val = var_res; /* _c_name_cache on <self:MClass> */
RET_LABEL30:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClass#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MClass__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MClass__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClass#c_name_cache for (self: MClass): nullable String */
val* abstract_compiler__MClass__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__MClass___c_name_cache].val; /* _c_name_cache on <self:MClass> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClass#c_name_cache for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__MClass__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
{ /* Inline abstract_compiler#MClass#c_name_cache (self) on <self:Object(MClass)> */
var3 = self->attrs[COLOR_abstract_compiler__MClass___c_name_cache].val; /* _c_name_cache on <self:Object(MClass)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClass#c_name_cache= for (self: MClass, nullable String) */
void abstract_compiler__MClass__c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__MClass___c_name_cache].val = p0; /* _c_name_cache on <self:MClass> */
RET_LABEL:;
}
/* method abstract_compiler#MClass#c_name_cache= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__MClass__c_name_cache_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#MClass#c_name_cache= (self,p0) on <self:Object(MClass)> */
self->attrs[COLOR_abstract_compiler__MClass___c_name_cache].val = p0; /* _c_name_cache on <self:Object(MClass)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#MProperty#c_name for (self: MProperty): String */
val* abstract_compiler__MProperty__c_name(val* self) {
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
short int var10 /* : Bool */;
val* var11 /* : MPropDef */;
val* var12 /* : String */;
val* var13 /* : Array[Object] */;
long var14 /* : Int */;
val* var15 /* : NativeArray[Object] */;
val* var16 /* : String */;
{
{ /* Inline abstract_compiler#MProperty#c_name_cache (self) on <self:MProperty> */
var3 = self->attrs[COLOR_abstract_compiler__MProperty___c_name_cache].val; /* _c_name_cache on <self:MProperty> */
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
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
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
var11 = model__MProperty__intro(self);
}
{
var12 = abstract_compiler__MPropDef__c_name(var11);
}
var13 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var13 = array_instance Array[Object] */
var14 = 1;
var15 = NEW_array__NativeArray(var14, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var15)->values[0] = (val*) var12;
{
((void (*)(val*, val*, long))(var13->class->vft[COLOR_array__Array__with_native]))(var13, var15, var14) /* with_native on <var13:Array[Object]>*/;
}
}
{
var16 = ((val* (*)(val*))(var13->class->vft[COLOR_string__Object__to_s]))(var13) /* to_s on <var13:Array[Object]>*/;
}
var_res = var16;
{
{ /* Inline abstract_compiler#MProperty#c_name_cache= (self,var_res) on <self:MProperty> */
self->attrs[COLOR_abstract_compiler__MProperty___c_name_cache].val = var_res; /* _c_name_cache on <self:MProperty> */
RET_LABEL17:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MProperty#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MProperty__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MProperty__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MProperty#c_name_cache for (self: MProperty): nullable String */
val* abstract_compiler__MProperty__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__MProperty___c_name_cache].val; /* _c_name_cache on <self:MProperty> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MProperty#c_name_cache for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__MProperty__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
{ /* Inline abstract_compiler#MProperty#c_name_cache (self) on <self:Object(MProperty)> */
var3 = self->attrs[COLOR_abstract_compiler__MProperty___c_name_cache].val; /* _c_name_cache on <self:Object(MProperty)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MProperty#c_name_cache= for (self: MProperty, nullable String) */
void abstract_compiler__MProperty__c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__MProperty___c_name_cache].val = p0; /* _c_name_cache on <self:MProperty> */
RET_LABEL:;
}
/* method abstract_compiler#MProperty#c_name_cache= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__MProperty__c_name_cache_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#MProperty#c_name_cache= (self,p0) on <self:Object(MProperty)> */
self->attrs[COLOR_abstract_compiler__MProperty___c_name_cache].val = p0; /* _c_name_cache on <self:Object(MProperty)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#MPropDef#c_name_cache for (self: MPropDef): nullable String */
val* abstract_compiler__MPropDef__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_abstract_compiler__MPropDef___c_name_cache].val; /* _c_name_cache on <self:MPropDef> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MPropDef#c_name_cache for (self: Object): nullable String */
val* VIRTUAL_abstract_compiler__MPropDef__c_name_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
val* var3 /* : nullable String */;
{ /* Inline abstract_compiler#MPropDef#c_name_cache (self) on <self:Object(MPropDef)> */
var3 = self->attrs[COLOR_abstract_compiler__MPropDef___c_name_cache].val; /* _c_name_cache on <self:Object(MPropDef)> */
var1 = var3;
RET_LABEL2:(void)0;
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MPropDef#c_name_cache= for (self: MPropDef, nullable String) */
void abstract_compiler__MPropDef__c_name_cache_61d(val* self, val* p0) {
self->attrs[COLOR_abstract_compiler__MPropDef___c_name_cache].val = p0; /* _c_name_cache on <self:MPropDef> */
RET_LABEL:;
}
/* method abstract_compiler#MPropDef#c_name_cache= for (self: Object, nullable String) */
void VIRTUAL_abstract_compiler__MPropDef__c_name_cache_61d(val* self, val* p0) {
{ /* Inline abstract_compiler#MPropDef#c_name_cache= (self,p0) on <self:Object(MPropDef)> */
self->attrs[COLOR_abstract_compiler__MPropDef___c_name_cache].val = p0; /* _c_name_cache on <self:Object(MPropDef)> */
RET_LABEL1:(void)0;
}
RET_LABEL:;
}
/* method abstract_compiler#MPropDef#c_name for (self: MPropDef): String */
val* abstract_compiler__MPropDef__c_name(val* self) {
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
short int var10 /* : Bool */;
val* var11 /* : MClassDef */;
val* var13 /* : MClassDef */;
val* var14 /* : MModule */;
val* var16 /* : MModule */;
val* var17 /* : String */;
val* var19 /* : String */;
val* var20 /* : String */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : FlatString */;
val* var25 /* : MClassDef */;
val* var27 /* : MClassDef */;
val* var28 /* : MClass */;
val* var30 /* : MClass */;
val* var31 /* : String */;
val* var33 /* : String */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : FlatString */;
val* var40 /* : MProperty */;
val* var42 /* : MProperty */;
val* var43 /* : String */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : Array[Object] */;
long var48 /* : Int */;
val* var49 /* : NativeArray[Object] */;
val* var50 /* : String */;
{
{ /* Inline abstract_compiler#MPropDef#c_name_cache (self) on <self:MPropDef> */
var3 = self->attrs[COLOR_abstract_compiler__MPropDef___c_name_cache].val; /* _c_name_cache on <self:MPropDef> */
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
var9 = ((short int (*)(val*, val*))(var_res->class->vft[COLOR_kernel__Object___61d_61d]))(var_res, var_other) /* == on <var_res:nullable String(String)>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
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
{ /* Inline model#MPropDef#mclassdef (self) on <self:MPropDef> */
var13 = self->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var11) on <var11:MClassDef> */
var16 = var11->attrs[COLOR_model__MClassDef___mmodule].val; /* _mmodule on <var11:MClassDef> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 471);
show_backtrace(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var14) on <var14:MModule> */
var19 = var14->attrs[COLOR_mmodule__MModule___name].val; /* _name on <var14:MModule> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/mmodule.nit", 86);
show_backtrace(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = string__Text__to_cmangle(var17);
}
if (varonce) {
var21 = varonce;
} else {
var22 = "__";
var23 = 2;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce = var21;
}
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MPropDef> */
var27 = self->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <self:MPropDef> */
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
{ /* Inline model#MClassDef#mclass (var25) on <var25:MClassDef> */
var30 = var25->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var25:MClassDef> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline model#MClass#name (var28) on <var28:MClass> */
var33 = var28->attrs[COLOR_model__MClass___name].val; /* _name on <var28:MClass> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
var34 = string__Text__to_cmangle(var31);
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = "__";
var38 = 2;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MPropDef> */
var42 = self->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <self:MPropDef> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var40) on <var40:MProperty> */
var45 = var40->attrs[COLOR_model__MProperty___name].val; /* _name on <var40:MProperty> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = string__Text__to_cmangle(var43);
}
var47 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var47 = array_instance Array[Object] */
var48 = 5;
var49 = NEW_array__NativeArray(var48, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var49)->values[0] = (val*) var20;
((struct instance_array__NativeArray*)var49)->values[1] = (val*) var21;
((struct instance_array__NativeArray*)var49)->values[2] = (val*) var34;
((struct instance_array__NativeArray*)var49)->values[3] = (val*) var36;
((struct instance_array__NativeArray*)var49)->values[4] = (val*) var46;
{
((void (*)(val*, val*, long))(var47->class->vft[COLOR_array__Array__with_native]))(var47, var49, var48) /* with_native on <var47:Array[Object]>*/;
}
}
{
var50 = ((val* (*)(val*))(var47->class->vft[COLOR_string__Object__to_s]))(var47) /* to_s on <var47:Array[Object]>*/;
}
var_res = var50;
{
{ /* Inline abstract_compiler#MPropDef#c_name_cache= (self,var_res) on <self:MPropDef> */
self->attrs[COLOR_abstract_compiler__MPropDef___c_name_cache].val = var_res; /* _c_name_cache on <self:MPropDef> */
RET_LABEL51:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MPropDef#c_name for (self: Object): String */
val* VIRTUAL_abstract_compiler__MPropDef__c_name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = abstract_compiler__MPropDef__c_name(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#can_inline for (self: MMethodDef, AbstractCompilerVisitor): Bool */
short int abstract_compiler__MMethodDef__can_inline(val* self, val* p0) {
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
val* var12 /* : HashMap[MPropDef, APropdef] */;
val* var14 /* : HashMap[MPropDef, APropdef] */;
short int var15 /* : Bool */;
val* var16 /* : HashMap[MPropDef, APropdef] */;
val* var18 /* : HashMap[MPropDef, APropdef] */;
val* var19 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
short int var20 /* : Bool */;
val* var21 /* : MProperty */;
val* var23 /* : MProperty */;
val* var24 /* : String */;
val* var26 /* : String */;
static val* varonce;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTVISITOR];
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1700);
show_backtrace(1);
}
var_v = p0;
{
{ /* Inline model#MMethodDef#is_abstract (self) on <self:MMethodDef> */
var4 = self->attrs[COLOR_model__MMethodDef___is_abstract].s; /* _is_abstract on <self:MMethodDef> */
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
var8 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var6) on <var6:AbstractCompiler> */
var11 = var6->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var6:AbstractCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_modelbuilder = var9;
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var14 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 39);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = abstract_collection__MapRead__has_key(var12, self);
}
if (var15){
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var18 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 39);
show_backtrace(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = hash_collection__HashMap___91d_93d(var16, self);
}
var_npropdef = var19;
{
var20 = ((short int (*)(val*))(var_npropdef->class->vft[COLOR_abstract_compiler__APropdef__can_inline]))(var_npropdef) /* can_inline on <var_npropdef:APropdef>*/;
}
var = var20;
goto RET_LABEL;
} else {
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MMethodDef> */
var23 = self->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <self:MMethodDef> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var21) on <var21:MProperty(MMethod)> */
var26 = var21->attrs[COLOR_model__MProperty___name].val; /* _name on <var21:MProperty(MMethod)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (varonce) {
var27 = varonce;
} else {
var28 = "init";
var29 = 4;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce = var27;
}
{
var32 = string__FlatString___61d_61d(var24, var27);
var31 = var32;
}
if (var31){
var33 = 1;
var = var33;
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1712);
show_backtrace(1);
}
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#can_inline for (self: Object, AbstractCompilerVisitor): Bool */
short int VIRTUAL_abstract_compiler__MMethodDef__can_inline(val* self, val* p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_compiler__MMethodDef__can_inline(self, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#compile_inside_to_c for (self: MMethodDef, AbstractCompilerVisitor, Array[RuntimeVariable]): nullable RuntimeVariable */
val* abstract_compiler__MMethodDef__compile_inside_to_c(val* self, val* p0, val* p1) {
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
val* var8 /* : HashMap[MPropDef, APropdef] */;
val* var10 /* : HashMap[MPropDef, APropdef] */;
short int var11 /* : Bool */;
val* var12 /* : HashMap[MPropDef, APropdef] */;
val* var14 /* : HashMap[MPropDef, APropdef] */;
val* var15 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
val* var16 /* : nullable ANode */;
val* var18 /* : nullable ANode */;
val* var_oldnode /* var oldnode: nullable ANode */;
val* var21 /* : MProperty */;
val* var23 /* : MProperty */;
val* var24 /* : String */;
val* var26 /* : String */;
static val* varonce;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : HashMap[MClassDef, AClassdef] */;
val* var35 /* : HashMap[MClassDef, AClassdef] */;
val* var36 /* : MClassDef */;
val* var38 /* : MClassDef */;
val* var39 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var40 /* : nullable ANode */;
val* var42 /* : nullable ANode */;
val* var_oldnode43 /* var oldnode: nullable ANode */;
val* var46 /* : null */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTVISITOR];
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1716);
show_backtrace(1);
}
var_v = p0;
var_arguments = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var4 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_modelbuilder = var5;
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var10 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 39);
show_backtrace(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = abstract_collection__MapRead__has_key(var8, self);
}
if (var11){
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var14 = var_modelbuilder->attrs[COLOR_modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_property.nit", 39);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = hash_collection__HashMap___91d_93d(var12, self);
}
var_npropdef = var15;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (var_v) on <var_v:AbstractCompilerVisitor> */
var18 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <var_v:AbstractCompilerVisitor> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_oldnode = var16;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_npropdef) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = var_npropdef; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL19:(void)0;
}
}
{
abstract_compiler__MMethodDef__compile_parameter_check(self, var_v, var_arguments); /* Direct call abstract_compiler#MMethodDef#compile_parameter_check on <self:MMethodDef>*/
}
{
((void (*)(val*, val*, val*, val*))(var_npropdef->class->vft[COLOR_abstract_compiler__APropdef__compile_to_c]))(var_npropdef, var_v, self, var_arguments) /* compile_to_c on <var_npropdef:APropdef>*/;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_oldnode) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = var_oldnode; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL20:(void)0;
}
}
} else {
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MMethodDef> */
var23 = self->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <self:MMethodDef> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var21) on <var21:MProperty(MMethod)> */
var26 = var21->attrs[COLOR_model__MProperty___name].val; /* _name on <var21:MProperty(MMethod)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (varonce) {
var27 = varonce;
} else {
var28 = "init";
var29 = 4;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce = var27;
}
{
var32 = string__FlatString___61d_61d(var24, var27);
var31 = var32;
}
if (var31){
{
{ /* Inline modelize_class#ModelBuilder#mclassdef2nclassdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var35 = var_modelbuilder->attrs[COLOR_modelize_class__ModelBuilder___mclassdef2nclassdef].val; /* _mclassdef2nclassdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef2nclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/modelize_class.nit", 399);
show_backtrace(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (self) on <self:MMethodDef> */
var38 = self->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <self:MMethodDef> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = hash_collection__HashMap___91d_93d(var33, var36);
}
var_nclassdef = var39;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (var_v) on <var_v:AbstractCompilerVisitor> */
var42 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <var_v:AbstractCompilerVisitor> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_oldnode43 = var40;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_nclassdef) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = var_nclassdef; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL44:(void)0;
}
}
{
abstract_compiler__MMethodDef__compile_parameter_check(self, var_v, var_arguments); /* Direct call abstract_compiler#MMethodDef#compile_parameter_check on <self:MMethodDef>*/
}
{
abstract_compiler__AClassdef__compile_to_c(var_nclassdef, var_v, self, var_arguments); /* Direct call abstract_compiler#AClassdef#compile_to_c on <var_nclassdef:AClassdef>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_oldnode43) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___current_node].val = var_oldnode43; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL45:(void)0;
}
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1735);
show_backtrace(1);
}
}
var46 = NULL;
var = var46;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#compile_inside_to_c for (self: Object, AbstractCompilerVisitor, Array[RuntimeVariable]): nullable RuntimeVariable */
val* VIRTUAL_abstract_compiler__MMethodDef__compile_inside_to_c(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var1 /* : nullable RuntimeVariable */;
var1 = abstract_compiler__MMethodDef__compile_inside_to_c(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MMethodDef#compile_parameter_check for (self: MMethodDef, AbstractCompilerVisitor, Array[RuntimeVariable]) */
void abstract_compiler__MMethodDef__compile_parameter_check(val* self, val* p0, val* p1) {
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
val* var17 /* : Range[Int] */;
long var18 /* : Int */;
val* var19 /* : nullable MSignature */;
val* var21 /* : nullable MSignature */;
long var22 /* : Int */;
val* var23 /* : Discrete */;
val* var24 /* : Discrete */;
val* var25 /* : Iterator[Discrete] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
long var_i /* var i: Int */;
long var28 /* : Int */;
val* var29 /* : nullable MSignature */;
val* var31 /* : nullable MSignature */;
long var32 /* : Int */;
long var34 /* : Int */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : MProperty */;
val* var41 /* : MProperty */;
val* var42 /* : MPropDef */;
val* var43 /* : nullable MSignature */;
val* var45 /* : nullable MSignature */;
val* var46 /* : Array[MParameter] */;
val* var48 /* : Array[MParameter] */;
val* var49 /* : nullable Object */;
val* var50 /* : MType */;
val* var52 /* : MType */;
val* var_origmtype /* var origmtype: MType */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
val* var55 /* : nullable MSignature */;
val* var57 /* : nullable MSignature */;
val* var58 /* : Array[MParameter] */;
val* var60 /* : Array[MParameter] */;
val* var61 /* : nullable Object */;
val* var62 /* : MType */;
val* var64 /* : MType */;
val* var_mtype /* var mtype: MType */;
static val* varonce;
val* var65 /* : String */;
char* var66 /* : NativeString */;
long var67 /* : Int */;
val* var68 /* : FlatString */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : NativeString */;
long var72 /* : Int */;
val* var73 /* : FlatString */;
val* var74 /* : nullable MSignature */;
val* var76 /* : nullable MSignature */;
val* var77 /* : Array[MParameter] */;
val* var79 /* : Array[MParameter] */;
val* var80 /* : nullable Object */;
val* var81 /* : String */;
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : NativeString */;
long var87 /* : Int */;
val* var88 /* : FlatString */;
long var89 /* : Int */;
long var90 /* : Int */;
short int var92 /* : Bool */;
int cltype93;
int idtype94;
const char* var_class_name95;
long var96 /* : Int */;
val* var97 /* : nullable Object */;
val* var98 /* : String */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : NativeString */;
long var102 /* : Int */;
val* var103 /* : FlatString */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : NativeString */;
long var107 /* : Int */;
val* var108 /* : FlatString */;
val* var109 /* : Array[Object] */;
long var110 /* : Int */;
val* var111 /* : NativeArray[Object] */;
val* var112 /* : Object */;
val* var113 /* : String */;
long var114 /* : Int */;
long var115 /* : Int */;
short int var117 /* : Bool */;
int cltype118;
int idtype119;
const char* var_class_name120;
long var121 /* : Int */;
val* var122 /* : nullable Object */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : NativeString */;
long var126 /* : Int */;
val* var127 /* : FlatString */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_model__MPropDef_VTVISITOR];
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
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1740);
show_backtrace(1);
}
var_v = p0;
var_arguments = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 984);
show_backtrace(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 443);
show_backtrace(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline modelbuilder#ModelBuilder#toolcontext (var4) on <var4:ModelBuilder> */
var9 = var4->attrs[COLOR_modelbuilder__ModelBuilder___toolcontext].val; /* _toolcontext on <var4:ModelBuilder> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", "src/modelbuilder.nit", 101);
show_backtrace(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_covariance (var7) on <var7:ToolContext> */
var12 = var7->attrs[COLOR_abstract_compiler__ToolContext___opt_no_check_covariance].val; /* _opt_no_check_covariance on <var7:ToolContext> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_covariance");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 46);
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
goto RET_LABEL;
} else {
}
var17 = NEW_range__Range(&type_range__Rangekernel__Int);
var18 = 0;
{
{ /* Inline model#MMethodDef#msignature (self) on <self:MMethodDef> */
var21 = self->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var19 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1745);
show_backtrace(1);
} else {
var22 = model__MSignature__arity(var19);
}
{
var23 = BOX_kernel__Int(var18); /* autobox from Int to Discrete */
var24 = BOX_kernel__Int(var22); /* autobox from Int to Discrete */
range__Range__without_last(var17, var23, var24); /* Direct call range#Range#without_last on <var17:Range[Int]>*/
}
{
var25 = range__Range__iterator(var17);
}
for(;;) {
{
var26 = ((short int (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var25) /* is_ok on <var25:Iterator[Discrete]>*/;
}
if(!var26) break;
{
var27 = ((val* (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__item]))(var25) /* item on <var25:Iterator[Discrete]>*/;
}
var28 = ((struct instance_kernel__Int*)var27)->value; /* autounbox from nullable Object to Int */;
var_i = var28;
{
{ /* Inline model#MMethodDef#msignature (self) on <self:MMethodDef> */
var31 = self->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1747);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#vararg_rank (var29) on <var29:nullable MSignature> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1497);
show_backtrace(1);
}
var34 = var29->attrs[COLOR_model__MSignature___vararg_rank].l; /* _vararg_rank on <var29:nullable MSignature> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var32,var_i) on <var32:Int> */
var38 = var32 == var_i;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
var35 = var36;
}
if (var35){
goto CONTINUE_label;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MMethodDef> */
var41 = self->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <self:MMethodDef> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = model__MProperty__intro(var39);
}
{
{ /* Inline model#MMethodDef#msignature (var42) on <var42:MPropDef(MMethodDef)> */
var45 = var42->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var42:MPropDef(MMethodDef)> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
if (var43 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1750);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#mparameters (var43) on <var43:nullable MSignature> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var48 = var43->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var43:nullable MSignature> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = array__Array___91d_93d(var46, var_i);
}
{
{ /* Inline model#MParameter#mtype (var49) on <var49:nullable Object(MParameter)> */
var52 = var49->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var49:nullable Object(MParameter)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
var_origmtype = var50;
{
var53 = ((short int (*)(val*))(var_origmtype->class->vft[COLOR_model__MType__need_anchor]))(var_origmtype) /* need_anchor on <var_origmtype:MType>*/;
}
var54 = !var53;
if (var54){
goto CONTINUE_label;
} else {
}
{
{ /* Inline model#MMethodDef#msignature (self) on <self:MMethodDef> */
var57 = self->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (var55 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1754);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#mparameters (var55) on <var55:nullable MSignature> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var60 = var55->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var55:nullable MSignature> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = array__Array___91d_93d(var58, var_i);
}
{
{ /* Inline model#MParameter#mtype (var61) on <var61:nullable Object(MParameter)> */
var64 = var61->attrs[COLOR_model__MParameter___mtype].val; /* _mtype on <var61:nullable Object(MParameter)> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1552);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_mtype = var62;
if (varonce) {
var65 = varonce;
} else {
var66 = "/* Covariant cast for argument ";
var67 = 31;
var68 = string__NativeString__to_s_with_length(var66, var67);
var65 = var68;
varonce = var65;
}
if (varonce69) {
var70 = varonce69;
} else {
var71 = " (";
var72 = 2;
var73 = string__NativeString__to_s_with_length(var71, var72);
var70 = var73;
varonce69 = var70;
}
{
{ /* Inline model#MMethodDef#msignature (self) on <self:MMethodDef> */
var76 = self->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var74 = var76;
RET_LABEL75:(void)0;
}
}
if (var74 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1758);
show_backtrace(1);
} else {
{ /* Inline model#MSignature#mparameters (var74) on <var74:nullable MSignature> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var79 = var74->attrs[COLOR_model__MSignature___mparameters].val; /* _mparameters on <var74:nullable MSignature> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1452);
show_backtrace(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
{
var80 = array__Array___91d_93d(var77, var_i);
}
{
{ /* Inline model#MParameter#name (var80) on <var80:nullable Object(MParameter)> */
var83 = var80->attrs[COLOR_model__MParameter___name].val; /* _name on <var80:nullable Object(MParameter)> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1549);
show_backtrace(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
if (varonce84) {
var85 = varonce84;
} else {
var86 = ") ";
var87 = 2;
var88 = string__NativeString__to_s_with_length(var86, var87);
var85 = var88;
varonce84 = var85;
}
var89 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var89) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var89:Int> isa OTHER */
/* <var89:Int> isa OTHER */
var92 = 1; /* easy <var89:Int> isa OTHER*/
if (unlikely(!var92)) {
var_class_name95 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name95);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var96 = var_i + var89;
var90 = var96;
goto RET_LABEL91;
RET_LABEL91:(void)0;
}
}
{
var97 = array__Array___91d_93d(var_arguments, var90);
}
{
var98 = abstract_compiler__RuntimeVariable__inspect(var97);
}
if (varonce99) {
var100 = varonce99;
} else {
var101 = " isa ";
var102 = 5;
var103 = string__NativeString__to_s_with_length(var101, var102);
var100 = var103;
varonce99 = var100;
}
if (varonce104) {
var105 = varonce104;
} else {
var106 = " */";
var107 = 3;
var108 = string__NativeString__to_s_with_length(var106, var107);
var105 = var108;
varonce104 = var105;
}
var109 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var109 = array_instance Array[Object] */
var110 = 9;
var111 = NEW_array__NativeArray(var110, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var111)->values[0] = (val*) var65;
var112 = BOX_kernel__Int(var_i); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var111)->values[1] = (val*) var112;
((struct instance_array__NativeArray*)var111)->values[2] = (val*) var70;
((struct instance_array__NativeArray*)var111)->values[3] = (val*) var81;
((struct instance_array__NativeArray*)var111)->values[4] = (val*) var85;
((struct instance_array__NativeArray*)var111)->values[5] = (val*) var98;
((struct instance_array__NativeArray*)var111)->values[6] = (val*) var100;
((struct instance_array__NativeArray*)var111)->values[7] = (val*) var_mtype;
((struct instance_array__NativeArray*)var111)->values[8] = (val*) var105;
{
((void (*)(val*, val*, long))(var109->class->vft[COLOR_array__Array__with_native]))(var109, var111, var110) /* with_native on <var109:Array[Object]>*/;
}
}
{
var113 = ((val* (*)(val*))(var109->class->vft[COLOR_string__Object__to_s]))(var109) /* to_s on <var109:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var113); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var114 = 1;
{
{ /* Inline kernel#Int#+ (var_i,var114) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var114:Int> isa OTHER */
/* <var114:Int> isa OTHER */
var117 = 1; /* easy <var114:Int> isa OTHER*/
if (unlikely(!var117)) {
var_class_name120 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name120);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var121 = var_i + var114;
var115 = var121;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
}
{
var122 = array__Array___91d_93d(var_arguments, var115);
}
if (varonce123) {
var124 = varonce123;
} else {
var125 = "covariance";
var126 = 10;
var127 = string__NativeString__to_s_with_length(var125, var126);
var124 = var127;
varonce123 = var124;
}
{
abstract_compiler__AbstractCompilerVisitor__add_cast(var_v, var122, var_mtype, var124); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_cast on <var_v:AbstractCompilerVisitor>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__next]))(var25) /* next on <var25:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method abstract_compiler#MMethodDef#compile_parameter_check for (self: Object, AbstractCompilerVisitor, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__MMethodDef__compile_parameter_check(val* self, val* p0, val* p1) {
abstract_compiler__MMethodDef__compile_parameter_check(self, p0, p1); /* Direct call abstract_compiler#MMethodDef#compile_parameter_check on <self:Object(MMethodDef)>*/
RET_LABEL:;
}
/* method abstract_compiler#APropdef#compile_to_c for (self: APropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__APropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
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
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : FlatString */;
val* var22 /* : Array[Object] */;
long var23 /* : Int */;
val* var24 /* : NativeArray[Object] */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
long var29 /* : Int */;
val* var30 /* : FlatString */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
if (varonce) {
var = varonce;
} else {
var1 = "PRINT_ERROR(\"NOT YET IMPLEMENTED ";
var2 = 33;
var3 = string__NativeString__to_s_with_length(var1, var2);
var = var3;
varonce = var;
}
{
var4 = string__Object__class_name(self);
}
if (varonce5) {
var6 = varonce5;
} else {
var7 = " ";
var8 = 1;
var9 = string__NativeString__to_s_with_length(var7, var8);
var6 = var9;
varonce5 = var6;
}
if (varonce10) {
var11 = varonce10;
} else {
var12 = " at ";
var13 = 4;
var14 = string__NativeString__to_s_with_length(var12, var13);
var11 = var14;
varonce10 = var11;
}
{
var15 = parser_nodes__ANode__location(self);
}
{
var16 = location__Location__to_s(var15);
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = "\\n\");";
var20 = 5;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
var22 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var22 = array_instance Array[Object] */
var23 = 7;
var24 = NEW_array__NativeArray(var23, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var24)->values[0] = (val*) var;
((struct instance_array__NativeArray*)var24)->values[1] = (val*) var4;
((struct instance_array__NativeArray*)var24)->values[2] = (val*) var6;
((struct instance_array__NativeArray*)var24)->values[3] = (val*) var_mpropdef;
((struct instance_array__NativeArray*)var24)->values[4] = (val*) var11;
((struct instance_array__NativeArray*)var24)->values[5] = (val*) var16;
((struct instance_array__NativeArray*)var24)->values[6] = (val*) var18;
{
((void (*)(val*, val*, long))(var22->class->vft[COLOR_array__Array__with_native]))(var22, var24, var23) /* with_native on <var22:Array[Object]>*/;
}
}
{
var25 = ((val* (*)(val*))(var22->class->vft[COLOR_string__Object__to_s]))(var22) /* to_s on <var22:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var25); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (varonce26) {
var27 = varonce26;
} else {
var28 = "Not yet implemented";
var29 = 19;
var30 = string__NativeString__to_s_with_length(var28, var29);
var27 = var30;
varonce26 = var27;
}
{
parser_nodes__ANode__debug(self, var27); /* Direct call parser_nodes#ANode#debug on <self:APropdef>*/
}
RET_LABEL:;
}
/* method abstract_compiler#APropdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__APropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__APropdef__compile_to_c(self, p0, p1, p2); /* Direct call abstract_compiler#APropdef#compile_to_c on <self:Object(APropdef)>*/
RET_LABEL:;
}
/* method abstract_compiler#APropdef#can_inline for (self: APropdef): Bool */
short int abstract_compiler__APropdef__can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = 1;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#APropdef#can_inline for (self: Object): Bool */
short int VIRTUAL_abstract_compiler__APropdef__can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_compiler__APropdef__can_inline(self);
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AMethPropdef#compile_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void abstract_compiler__AMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
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
short int var39 /* : Bool */;
val* var40 /* : Array[RuntimeVariable] */;
long var41 /* : Int */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var42 /* : nullable Object */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var43 /* : ArrayIterator[nullable Object] */;
short int var44 /* : Bool */;
val* var45 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: CallSite */;
val* var46 /* : Range[Int] */;
long var47 /* : Int */;
val* var48 /* : MSignature */;
val* var50 /* : MSignature */;
long var51 /* : Int */;
long var52 /* : Int */;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var56 /* : Int */;
val* var57 /* : Discrete */;
val* var58 /* : Discrete */;
val* var59 /* : Iterator[Discrete] */;
short int var60 /* : Bool */;
val* var61 /* : nullable Object */;
long var_i /* var i: Int */;
long var62 /* : Int */;
val* var63 /* : nullable Object */;
val* var64 /* : nullable RuntimeVariable */;
val* var66 /* : nullable AExpr */;
val* var_n_block /* var n_block: nullable AExpr */;
val* var67 /* : null */;
short int var68 /* : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
val* var74 /* : Range[Int] */;
long var75 /* : Int */;
val* var76 /* : nullable MSignature */;
val* var78 /* : nullable MSignature */;
long var79 /* : Int */;
val* var80 /* : Discrete */;
val* var81 /* : Discrete */;
val* var82 /* : Iterator[Discrete] */;
short int var83 /* : Bool */;
val* var84 /* : nullable Object */;
long var_i85 /* var i: Int */;
long var86 /* : Int */;
val* var87 /* : nullable ASignature */;
val* var88 /* : ANodes[AParam] */;
val* var90 /* : ANodes[AParam] */;
val* var91 /* : ANode */;
val* var92 /* : nullable Variable */;
val* var94 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var95 /* : RuntimeVariable */;
long var96 /* : Int */;
long var97 /* : Int */;
short int var99 /* : Bool */;
int cltype100;
int idtype101;
const char* var_class_name102;
long var103 /* : Int */;
val* var104 /* : nullable Object */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
val* var112 /* : MProperty */;
val* var114 /* : MProperty */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline model#MMethodDef#is_abstract (var_mpropdef) on <var_mpropdef:MMethodDef> */
var2 = var_mpropdef->attrs[COLOR_model__MMethodDef___is_abstract].s; /* _is_abstract on <var_mpropdef:MMethodDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var){
{
var3 = abstract_collection__SequenceRead__first(var_arguments);
}
{
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var3) /* class_name_string on <var_v:AbstractCompilerVisitor>*/;
}
var_cn = var4;
if (varonce) {
var5 = varonce;
} else {
var6 = "PRINT_ERROR(\"Runtime error: Abstract method `%s` called on `%s`\", \"";
var7 = 67;
var8 = string__NativeString__to_s_with_length(var6, var7);
var5 = var8;
varonce = var5;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var11 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var9) on <var9:MProperty(MMethod)> */
var14 = var9->attrs[COLOR_model__MProperty___name].val; /* _name on <var9:MProperty(MMethod)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = string__Text__escape_to_c(var12);
}
if (varonce16) {
var17 = varonce16;
} else {
var18 = "\", ";
var19 = 3;
var20 = string__NativeString__to_s_with_length(var18, var19);
var17 = var20;
varonce16 = var17;
}
if (varonce21) {
var22 = varonce21;
} else {
var23 = ");";
var24 = 2;
var25 = string__NativeString__to_s_with_length(var23, var24);
var22 = var25;
varonce21 = var22;
}
var26 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var26 = array_instance Array[Object] */
var27 = 5;
var28 = NEW_array__NativeArray(var27, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var28)->values[0] = (val*) var5;
((struct instance_array__NativeArray*)var28)->values[1] = (val*) var15;
((struct instance_array__NativeArray*)var28)->values[2] = (val*) var17;
((struct instance_array__NativeArray*)var28)->values[3] = (val*) var_cn;
((struct instance_array__NativeArray*)var28)->values[4] = (val*) var22;
{
((void (*)(val*, val*, long))(var26->class->vft[COLOR_array__Array__with_native]))(var26, var28, var27) /* with_native on <var26:Array[Object]>*/;
}
}
{
var29 = ((val* (*)(val*))(var26->class->vft[COLOR_string__Object__to_s]))(var26) /* to_s on <var26:Array[Object]>*/;
}
{
abstract_compiler__AbstractCompilerVisitor__add(var_v, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
abstract_compiler__AbstractCompilerVisitor__add_raw_abort(var_v); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_raw_abort on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_inits (self) on <self:AMethPropdef> */
var32 = self->attrs[COLOR_auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <self:AMethPropdef> */
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
var38 = ((short int (*)(val*, val*))(var_auto_super_inits->class->vft[COLOR_kernel__Object___61d_61d]))(var_auto_super_inits, var_other) /* == on <var_auto_super_inits:nullable Array[CallSite](Array[CallSite])>*/;
var37 = var38;
}
var39 = !var37;
var35 = var39;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
var40 = NEW_array__Array(&type_array__Arrayabstract_compiler__RuntimeVariable);
var41 = 1;
{
array__Array__with_capacity(var40, var41); /* Direct call array#Array#with_capacity on <var40:Array[RuntimeVariable]>*/
}
var_ = var40;
{
var42 = abstract_collection__SequenceRead__first(var_arguments);
}
{
array__AbstractArray__push(var_, var42); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
var_args = var_;
{
var43 = array__AbstractArrayRead__iterator(var_auto_super_inits);
}
for(;;) {
{
var44 = array__ArrayIterator__is_ok(var43);
}
if(!var44) break;
{
var45 = array__ArrayIterator__item(var43);
}
var_auto_super_init = var45;
{
array__AbstractArray__clear(var_args); /* Direct call array#AbstractArray#clear on <var_args:Array[RuntimeVariable]>*/
}
var46 = NEW_range__Range(&type_range__Rangekernel__Int);
var47 = 0;
{
{ /* Inline typing#CallSite#msignature (var_auto_super_init) on <var_auto_super_init:CallSite> */
var50 = var_auto_super_init->attrs[COLOR_typing__CallSite___msignature].val; /* _msignature on <var_auto_super_init:CallSite> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", "src/typing.nit", 429);
show_backtrace(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
{
var51 = model__MSignature__arity(var48);
}
var52 = 1;
{
{ /* Inline kernel#Int#+ (var51,var52) on <var51:Int> */
/* Covariant cast for argument 0 (i) <var52:Int> isa OTHER */
/* <var52:Int> isa OTHER */
var55 = 1; /* easy <var52:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var56 = var51 + var52;
var53 = var56;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
{
var57 = BOX_kernel__Int(var47); /* autobox from Int to Discrete */
var58 = BOX_kernel__Int(var53); /* autobox from Int to Discrete */
range__Range__without_last(var46, var57, var58); /* Direct call range#Range#without_last on <var46:Range[Int]>*/
}
{
var59 = range__Range__iterator(var46);
}
for(;;) {
{
var60 = ((short int (*)(val*))(var59->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var59) /* is_ok on <var59:Iterator[Discrete]>*/;
}
if(!var60) break;
{
var61 = ((val* (*)(val*))(var59->class->vft[COLOR_abstract_collection__Iterator__item]))(var59) /* item on <var59:Iterator[Discrete]>*/;
}
var62 = ((struct instance_kernel__Int*)var61)->value; /* autounbox from nullable Object to Int */;
var_i = var62;
{
var63 = array__Array___91d_93d(var_arguments, var_i);
}
{
array__Array__add(var_args, var63); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
CONTINUE_label: (void)0;
{
((void (*)(val*))(var59->class->vft[COLOR_abstract_collection__Iterator__next]))(var59) /* next on <var59:Iterator[Discrete]>*/;
}
}
BREAK_label: (void)0;
{
var64 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_auto_super_init, var_args) /* compile_callsite on <var_v:AbstractCompilerVisitor>*/;
}
var64;
CONTINUE_label65: (void)0;
{
array__ArrayIterator__next(var43); /* Direct call array#ArrayIterator#next on <var43:ArrayIterator[nullable Object]>*/
}
}
BREAK_label65: (void)0;
} else {
}
{
var66 = parser_nodes__AMethPropdef__n_block(self);
}
var_n_block = var66;
var67 = NULL;
if (var_n_block == NULL) {
var68 = 0; /* is null */
} else {
var68 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,var67) on <var_n_block:nullable AExpr> */
var_other = var67;
{
var72 = ((short int (*)(val*, val*))(var_n_block->class->vft[COLOR_kernel__Object___61d_61d]))(var_n_block, var_other) /* == on <var_n_block:nullable AExpr(AExpr)>*/;
var71 = var72;
}
var73 = !var71;
var69 = var73;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
var68 = var69;
}
if (var68){
var74 = NEW_range__Range(&type_range__Rangekernel__Int);
var75 = 0;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var78 = var_mpropdef->attrs[COLOR_model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (var76 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1801);
show_backtrace(1);
} else {
var79 = model__MSignature__arity(var76);
}
{
var80 = BOX_kernel__Int(var75); /* autobox from Int to Discrete */
var81 = BOX_kernel__Int(var79); /* autobox from Int to Discrete */
range__Range__without_last(var74, var80, var81); /* Direct call range#Range#without_last on <var74:Range[Int]>*/
}
{
var82 = range__Range__iterator(var74);
}
for(;;) {
{
var83 = ((short int (*)(val*))(var82->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var82) /* is_ok on <var82:Iterator[Discrete]>*/;
}
if(!var83) break;
{
var84 = ((val* (*)(val*))(var82->class->vft[COLOR_abstract_collection__Iterator__item]))(var82) /* item on <var82:Iterator[Discrete]>*/;
}
var86 = ((struct instance_kernel__Int*)var84)->value; /* autounbox from nullable Object to Int */;
var_i85 = var86;
{
var87 = parser_nodes__AMethPropdef__n_signature(self);
}
if (var87 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1802);
show_backtrace(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var87) on <var87:nullable ASignature> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1360);
show_backtrace(1);
}
var90 = var87->attrs[COLOR_parser_nodes__ASignature___n_params].val; /* _n_params on <var87:nullable ASignature> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1360);
show_backtrace(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
var91 = parser_nodes__ANodes___91d_93d(var88, var_i85);
}
{
{ /* Inline scope#AParam#variable (var91) on <var91:ANode(AParam)> */
var94 = var91->attrs[COLOR_scope__AParam___variable].val; /* _variable on <var91:ANode(AParam)> */
var92 = var94;
RET_LABEL93:(void)0;
}
}
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1802);
show_backtrace(1);
}
var_variable = var92;
{
var95 = abstract_compiler__AbstractCompilerVisitor__variable(var_v, var_variable);
}
var96 = 1;
{
{ /* Inline kernel#Int#+ (var_i85,var96) on <var_i85:Int> */
/* Covariant cast for argument 0 (i) <var96:Int> isa OTHER */
/* <var96:Int> isa OTHER */
var99 = 1; /* easy <var96:Int> isa OTHER*/
if (unlikely(!var99)) {
var_class_name102 = type_kernel__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name102);
PRINT_ERROR(" (%s:%d)\n", "lib/standard/kernel.nit", 328);
show_backtrace(1);
}
var103 = var_i85 + var96;
var97 = var103;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
{
var104 = array__Array___91d_93d(var_arguments, var97);
}
{
abstract_compiler__AbstractCompilerVisitor__assign(var_v, var95, var104); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
CONTINUE_label105: (void)0;
{
((void (*)(val*))(var82->class->vft[COLOR_abstract_collection__Iterator__next]))(var82) /* next on <var82:Iterator[Discrete]>*/;
}
}
BREAK_label105: (void)0;
{
abstract_compiler__AbstractCompilerVisitor__stmt(var_v, var_n_block); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline model#MMethodDef#is_intern (var_mpropdef) on <var_mpropdef:MMethodDef> */
var108 = var_mpropdef->attrs[COLOR_model__MMethodDef___is_intern].s; /* _is_intern on <var_mpropdef:MMethodDef> */
var106 = var108;
RET_LABEL107:(void)0;
}
}
if (var106){
{
abstract_compiler__AMethPropdef__compile_intern_to_c(self, var_v, var_mpropdef, var_arguments); /* Direct call abstract_compiler#AMethPropdef#compile_intern_to_c on <self:AMethPropdef>*/
}
} else {
{
{ /* Inline model#MMethodDef#is_extern (var_mpropdef) on <var_mpropdef:MMethodDef> */
var111 = var_mpropdef->attrs[COLOR_model__MMethodDef___is_extern].s; /* _is_extern on <var_mpropdef:MMethodDef> */
var109 = var111;
RET_LABEL110:(void)0;
}
}
if (var109){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var114 = var_mpropdef->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var112) on <var112:MProperty(MMethod)> */
var117 = var112->attrs[COLOR_model__MMethod___is_init].s; /* _is_init on <var112:MProperty(MMethod)> */
var115 = var117;
RET_LABEL116:(void)0;
}
}
if (var115){
{
abstract_compiler__AMethPropdef__compile_externinit_to_c(self, var_v, var_mpropdef, var_arguments); /* Direct call abstract_compiler#AMethPropdef#compile_externinit_to_c on <self:AMethPropdef>*/
}
} else {
{
abstract_compiler__AMethPropdef__compile_externmeth_to_c(self, var_v, var_mpropdef, var_arguments); /* Direct call abstract_compiler#AMethPropdef#compile_externmeth_to_c on <self:AMethPropdef>*/
}
}
} else {
}
}
}
RET_LABEL:;
}
/* method abstract_compiler#AMethPropdef#compile_to_c for (self: Object, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void VIRTUAL_abstract_compiler__AMethPropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
abstract_compiler__AMethPropdef__compile_to_c(self, p0, p1, p2); /* Direct call abstract_compiler#AMethPropdef#compile_to_c on <self:Object(AMethPropdef)>*/
RET_LABEL:;
}
/* method abstract_compiler#AMethPropdef#can_inline for (self: AMethPropdef): Bool */
short int abstract_compiler__AMethPropdef__can_inline(val* self) {
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
short int var11 /* : Bool */;
val* var12 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
val* var13 /* : null */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other17 /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : nullable MPropDef */;
val* var26 /* : nullable MPropDef */;
val* var27 /* : MProperty */;
val* var29 /* : MProperty */;
val* var30 /* : String */;
val* var32 /* : String */;
static val* varonce;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : FlatString */;
short int var37 /* : Bool */;
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
short int var54 /* : Bool */;
short int var_55 /* var : Bool */;
val* var56 /* : nullable MPropDef */;
val* var58 /* : nullable MPropDef */;
val* var59 /* : MClassDef */;
val* var61 /* : MClassDef */;
val* var62 /* : MClass */;
val* var64 /* : MClass */;
val* var65 /* : String */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : NativeString */;
long var71 /* : Int */;
val* var72 /* : FlatString */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
int cltype;
int idtype;
short int var_78 /* var : Bool */;
val* var79 /* : ANodes[AExpr] */;
val* var81 /* : ANodes[AExpr] */;
long var82 /* : Int */;
long var83 /* : Int */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_inits (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <self:AMethPropdef> */
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
var9 = ((short int (*)(val*, val*))(var1->class->vft[COLOR_kernel__Object___61d_61d]))(var1, var_other) /* == on <var1:nullable Array[CallSite](Array[CallSite])>*/;
var8 = var9;
}
var10 = !var8;
var6 = var10;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
var11 = 0;
var = var11;
goto RET_LABEL;
} else {
}
{
var12 = parser_nodes__AMethPropdef__n_block(self);
}
var_nblock = var12;
var13 = NULL;
if (var_nblock == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nblock,var13) on <var_nblock:nullable AExpr> */
var_other17 = var13;
{
{ /* Inline kernel#Object#is_same_instance (var_nblock,var_other17) on <var_nblock:nullable AExpr(AExpr)> */
var20 = var_nblock == var_other17;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
var21 = 1;
var = var21;
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var26 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var24 = var26;
RET_LABEL25:(void)0;
}
}
if (var24 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1822);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var24) on <var24:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var29 = var24->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var24:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var27) on <var27:MProperty(MMethod)> */
var32 = var27->attrs[COLOR_model__MProperty___name].val; /* _name on <var27:MProperty(MMethod)> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
show_backtrace(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (varonce) {
var33 = varonce;
} else {
var34 = "==";
var35 = 2;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce = var33;
}
{
var38 = string__FlatString___61d_61d(var30, var33);
var37 = var38;
}
var_ = var37;
if (var37){
var23 = var_;
} else {
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var41 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (var39 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1822);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mproperty (var39) on <var39:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var44 = var39->attrs[COLOR_model__MPropDef___mproperty].val; /* _mproperty on <var39:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1882);
show_backtrace(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var42) on <var42:MProperty(MMethod)> */
var47 = var42->attrs[COLOR_model__MProperty___name].val; /* _name on <var42:MProperty(MMethod)> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1607);
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
var52 = string__NativeString__to_s_with_length(var50, var51);
var49 = var52;
varonce48 = var49;
}
{
var54 = string__FlatString___61d_61d(var45, var49);
var53 = var54;
}
var23 = var53;
}
var_55 = var23;
if (var23){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var58 = self->attrs[COLOR_modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
if (var56 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/abstract_compiler.nit", 1822);
show_backtrace(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var56) on <var56:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var61 = var56->attrs[COLOR_model__MPropDef___mclassdef].val; /* _mclassdef on <var56:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 1879);
show_backtrace(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var59) on <var59:MClassDef> */
var64 = var59->attrs[COLOR_model__MClassDef___mclass].val; /* _mclass on <var59:MClassDef> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 474);
show_backtrace(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline model#MClass#name (var62) on <var62:MClass> */
var67 = var62->attrs[COLOR_model__MClass___name].val; /* _name on <var62:MClass> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", "src/model/model.nit", 340);
show_backtrace(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
if (varonce68) {
var69 = varonce68;
} else {
var70 = "Object";
var71 = 6;
var72 = string__NativeString__to_s_with_length(var70, var71);
var69 = var72;
varonce68 = var69;
}
{
var74 = string__FlatString___61d_61d(var65, var69);
var73 = var74;
}
var22 = var73;
} else {
var22 = var_55;
}
if (var22){
var75 = 1;
var = var75;
goto RET_LABEL;
} else {
}
/* <var_nblock:nullable AExpr(AExpr)> isa ABlockExpr */
cltype = type_parser_nodes__ABlockExpr.color;
idtype = type_parser_nodes__ABlockExpr.id;
if(cltype >= var_nblock->type->table_size) {
var77 = 0;
} else {
var77 = var_nblock->type->type_table[cltype] == idtype;
}
var_78 = var77;
if (var77){
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (var_nblock) on <var_nblock:nullable AExpr(ABlockExpr)> */
var81 = var_nblock->attrs[COLOR_parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <var_nblock:nullable AExpr(ABlockExpr)> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", "src/parser/parser_nodes.nit", 1424);
show_backtrace(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
var82 = parser_nodes__ANodes__length(var79);
}
var83 = 0;
{
{ /* Inline kernel#Int#== (var82,var83) on <var82:Int> */
var87 = var82 == var83;
var85 = var87;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var84 = var85;
}
var76 = var84;
} else {
var76 = var_78;
}
if (var76){
var88 = 1;
var = var88;
goto RET_LABEL;
} else {
}
var89 = 0;
var = var89;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AMethPropdef#can_inline for (self: Object): Bool */
short int VIRTUAL_abstract_compiler__AMethPropdef__can_inline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = abstract_compiler__AMethPropdef__can_inline(self);
var = var1;
RET_LABEL:;
return var;
}
