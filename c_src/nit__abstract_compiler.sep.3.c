#include "nit__abstract_compiler.sep.0.h"
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
val* var11 /* : FlatString */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var17 /* : String */;
val* var_tryfile /* var tryfile: String */;
short int var18 /* : Bool */;
val* var20 /* : NativeArray[String] */;
static val* varonce19;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var35 /* : AbstractCompiler */;
val* var37 /* : AbstractCompiler */;
val* var38 /* : Array[String] */;
val* var40 /* : Array[String] */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : FlatString */;
val* var45 /* : String */;
short int var46 /* : Bool */;
val* var48 /* : NativeArray[String] */;
static val* varonce47;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : NativeString */;
val* var52 /* : FlatString */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : NativeString */;
val* var56 /* : FlatString */;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : NativeString */;
val* var60 /* : FlatString */;
val* var61 /* : String */;
val* var62 /* : String */;
val* var63 /* : AbstractCompiler */;
val* var65 /* : AbstractCompiler */;
val* var66 /* : Array[String] */;
val* var68 /* : Array[String] */;
val* var69 /* : AbstractCompiler */;
val* var71 /* : AbstractCompiler */;
val* var72 /* : ArraySet[String] */;
val* var74 /* : ArraySet[String] */;
short int var75 /* : Bool */;
val* var76 /* : AbstractCompiler */;
val* var78 /* : AbstractCompiler */;
val* var79 /* : ArraySet[String] */;
val* var81 /* : ArraySet[String] */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : FlatString */;
val* var86 /* : String */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
val* var92 /* : FlatString */;
val* var93 /* : String */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
val* var96 /* : ExternCFile */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : NativeString */;
val* var100 /* : FlatString */;
val* var101 /* : String */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : NativeString */;
val* var105 /* : FlatString */;
val* var_f /* var f: ExternCFile */;
val* var106 /* : AbstractCompiler */;
val* var108 /* : AbstractCompiler */;
val* var109 /* : Array[ExternFile] */;
val* var111 /* : Array[ExternFile] */;
val* var112 /* : AbstractCompiler */;
val* var114 /* : AbstractCompiler */;
val* var115 /* : Array[String] */;
val* var117 /* : Array[String] */;
var_mmodule = p0;
{
{ /* Inline mmodule#MModule#location (var_mmodule) on <var_mmodule:MModule> */
var2 = var_mmodule->attrs[COLOR_nit__mmodule__MModule___location].val; /* _location on <var_mmodule:MModule> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__mmodule, 90);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1597);
fatal_exit(1);
} else {
{ /* Inline location#SourceFile#filename (var3) on <var3:nullable SourceFile> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
fatal_exit(1);
}
var8 = var3->attrs[COLOR_nit__location__SourceFile___filename].val; /* _filename on <var3:nullable SourceFile> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__location, 22);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_file = var6;
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = ".nit";
var11 = standard___standard__NativeString___to_s_with_length(var10, 4l);
var9 = var11;
varonce = var9;
}
{
var12 = standard__file___String___strip_extension(var_file, var9);
}
var_file = var12;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = ".nit.h";
var16 = standard___standard__NativeString___to_s_with_length(var15, 6l);
var14 = var16;
varonce13 = var14;
}
{
var17 = ((val*(*)(val* self, val* p0))(var_file->class->vft[COLOR_standard__string__String___43d]))(var_file, var14); /* + on <var_file:String>*/
}
var_tryfile = var17;
{
var18 = standard__file___String___file_exists(var_tryfile);
}
if (var18){
if (unlikely(varonce19==NULL)) {
var20 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "#include \"";
var24 = standard___standard__NativeString___to_s_with_length(var23, 10l);
var22 = var24;
varonce21 = var22;
}
((struct instance_standard__NativeArray*)var20)->values[0]=var22;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "\"";
var28 = standard___standard__NativeString___to_s_with_length(var27, 1l);
var26 = var28;
varonce25 = var26;
}
((struct instance_standard__NativeArray*)var20)->values[2]=var26;
} else {
var20 = varonce19;
varonce19 = NULL;
}
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = "";
var32 = standard___standard__NativeString___to_s_with_length(var31, 0l);
var30 = var32;
varonce29 = var30;
}
{
var33 = standard__file___String___basename(var_tryfile, var30);
}
((struct instance_standard__NativeArray*)var20)->values[1]=var33;
{
var34 = ((val*(*)(val* self))(var20->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var20); /* native_to_s on <var20:NativeArray[String]>*/
}
varonce19 = var20;
{
nit___nit__AbstractCompilerVisitor___declare_once(self, var34); /* Direct call abstract_compiler#AbstractCompilerVisitor#declare_once on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var37 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var35) on <var35:AbstractCompiler> */
var40 = var35->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var35:AbstractCompiler> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 982);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var38, var_tryfile); /* Direct call array#Array#add on <var38:Array[String]>*/
}
} else {
}
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "_nit.h";
var44 = standard___standard__NativeString___to_s_with_length(var43, 6l);
var42 = var44;
varonce41 = var42;
}
{
var45 = ((val*(*)(val* self, val* p0))(var_file->class->vft[COLOR_standard__string__String___43d]))(var_file, var42); /* + on <var_file:String>*/
}
var_tryfile = var45;
{
var46 = standard__file___String___file_exists(var_tryfile);
}
if (var46){
if (unlikely(varonce47==NULL)) {
var48 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "#include \"";
var52 = standard___standard__NativeString___to_s_with_length(var51, 10l);
var50 = var52;
varonce49 = var50;
}
((struct instance_standard__NativeArray*)var48)->values[0]=var50;
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "\"";
var56 = standard___standard__NativeString___to_s_with_length(var55, 1l);
var54 = var56;
varonce53 = var54;
}
((struct instance_standard__NativeArray*)var48)->values[2]=var54;
} else {
var48 = varonce47;
varonce47 = NULL;
}
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "";
var60 = standard___standard__NativeString___to_s_with_length(var59, 0l);
var58 = var60;
varonce57 = var58;
}
{
var61 = standard__file___String___basename(var_tryfile, var58);
}
((struct instance_standard__NativeArray*)var48)->values[1]=var61;
{
var62 = ((val*(*)(val* self))(var48->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var48); /* native_to_s on <var48:NativeArray[String]>*/
}
varonce47 = var48;
{
nit___nit__AbstractCompilerVisitor___declare_once(self, var62); /* Direct call abstract_compiler#AbstractCompilerVisitor#declare_once on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var65 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var63) on <var63:AbstractCompiler> */
var68 = var63->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var63:AbstractCompiler> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 982);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var66, var_tryfile); /* Direct call array#Array#add on <var66:Array[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var71 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#seen_extern (var69) on <var69:AbstractCompiler> */
var74 = var69->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___seen_extern].val; /* _seen_extern on <var69:AbstractCompiler> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen_extern");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 985);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
var75 = standard___standard__ArraySet___standard__abstract_collection__Collection__has(var72, var_file);
}
if (var75){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var78 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#seen_extern (var76) on <var76:AbstractCompiler> */
var81 = var76->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___seen_extern].val; /* _seen_extern on <var76:AbstractCompiler> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen_extern");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 985);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
standard___standard__ArraySet___standard__abstract_collection__SimpleCollection__add(var79, var_file); /* Direct call array#ArraySet#add on <var79:ArraySet[String]>*/
}
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = ".nit.c";
var85 = standard___standard__NativeString___to_s_with_length(var84, 6l);
var83 = var85;
varonce82 = var83;
}
{
var86 = ((val*(*)(val* self, val* p0))(var_file->class->vft[COLOR_standard__string__String___43d]))(var_file, var83); /* + on <var_file:String>*/
}
var_tryfile = var86;
{
var87 = standard__file___String___file_exists(var_tryfile);
}
var88 = !var87;
if (var88){
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "_nit.c";
var92 = standard___standard__NativeString___to_s_with_length(var91, 6l);
var90 = var92;
varonce89 = var90;
}
{
var93 = ((val*(*)(val* self, val* p0))(var_file->class->vft[COLOR_standard__string__String___43d]))(var_file, var90); /* + on <var_file:String>*/
}
var_tryfile = var93;
{
var94 = standard__file___String___file_exists(var_tryfile);
}
var95 = !var94;
if (var95){
goto RET_LABEL;
} else {
}
} else {
}
var96 = NEW_nit__ExternCFile(&type_nit__ExternCFile);
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = "";
var100 = standard___standard__NativeString___to_s_with_length(var99, 0l);
var98 = var100;
varonce97 = var98;
}
{
var101 = standard__file___String___basename(var_tryfile, var98);
}
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "";
var105 = standard___standard__NativeString___to_s_with_length(var104, 0l);
var103 = var105;
varonce102 = var103;
}
{
((void(*)(val* self, val* p0))(var96->class->vft[COLOR_nit__c_tools__ExternFile__filename_61d]))(var96, var101); /* filename= on <var96:ExternCFile>*/
}
{
((void(*)(val* self, val* p0))(var96->class->vft[COLOR_nit__c_tools__ExternCFile__cflags_61d]))(var96, var103); /* cflags= on <var96:ExternCFile>*/
}
{
((void(*)(val* self))(var96->class->vft[COLOR_standard__kernel__Object__init]))(var96); /* init on <var96:ExternCFile>*/
}
var_f = var96;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var108 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var106) on <var106:AbstractCompiler> */
var111 = var106->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var106:AbstractCompiler> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 979);
fatal_exit(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var109, var_f); /* Direct call array#Array#add on <var109:Array[ExternFile]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var114 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var112) on <var112:AbstractCompiler> */
var117 = var112->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var112:AbstractCompiler> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 982);
fatal_exit(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var115, var_tryfile); /* Direct call array#Array#add on <var115:Array[String]>*/
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
val* var2 /* : NativeArray[String] */;
static val* varonce;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : NativeString */;
val* var6 /* : FlatString */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
val* var11 /* : String */;
val* var12 /* : String */;
var_cexpr = p0;
var_mtype = p1;
{
var1 = nit___nit__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var_res = var1;
if (unlikely(varonce==NULL)) {
var2 = NEW_standard__NativeArray(4l, &type_standard__NativeArray__standard__String);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = " = ";
var6 = standard___standard__NativeString___to_s_with_length(var5, 3l);
var4 = var6;
varonce3 = var4;
}
((struct instance_standard__NativeArray*)var2)->values[1]=var4;
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = ";";
var10 = standard___standard__NativeString___to_s_with_length(var9, 1l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var2)->values[3]=var8;
} else {
var2 = varonce;
varonce = NULL;
}
{
var11 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var2)->values[0]=var11;
((struct instance_standard__NativeArray*)var2)->values[2]=var_cexpr;
{
var12 = ((val*(*)(val* self))(var2->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var2); /* native_to_s on <var2:NativeArray[String]>*/
}
varonce = var2;
{
nit___nit__AbstractCompilerVisitor___add(self, var12); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_abort for (self: AbstractCompilerVisitor, String) */
void nit___nit__AbstractCompilerVisitor___add_abort(val* self, val* p0) {
val* var_message /* var message: String */;
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
val* var9 /* : String */;
val* var10 /* : String */;
var_message = p0;
if (unlikely(varonce==NULL)) {
var = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "PRINT_ERROR(\"Runtime error: %s\", \"";
var4 = standard___standard__NativeString___to_s_with_length(var3, 34l);
var2 = var4;
varonce1 = var2;
}
((struct instance_standard__NativeArray*)var)->values[0]=var2;
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "\");";
var8 = standard___standard__NativeString___to_s_with_length(var7, 3l);
var6 = var8;
varonce5 = var6;
}
((struct instance_standard__NativeArray*)var)->values[2]=var6;
} else {
var = varonce;
varonce = NULL;
}
{
var9 = standard___standard__Text___escape_to_c(var_message);
}
((struct instance_standard__NativeArray*)var)->values[1]=var9;
{
var10 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
{
nit___nit__AbstractCompilerVisitor___add(self, var10); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
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
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
val* var10 /* : nullable ANode */;
val* var12 /* : nullable ANode */;
val* var13 /* : Location */;
val* var15 /* : Location */;
val* var16 /* : nullable SourceFile */;
val* var18 /* : nullable SourceFile */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var_24 /* var : Bool */;
val* var25 /* : nullable ANode */;
val* var27 /* : nullable ANode */;
val* var28 /* : Location */;
val* var30 /* : Location */;
val* var31 /* : nullable SourceFile */;
val* var33 /* : nullable SourceFile */;
val* var34 /* : nullable MModule */;
val* var36 /* : nullable MModule */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : NativeArray[String] */;
static val* varonce;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
val* var47 /* : nullable ANode */;
val* var49 /* : nullable ANode */;
val* var50 /* : Location */;
val* var52 /* : Location */;
val* var53 /* : nullable SourceFile */;
val* var55 /* : nullable SourceFile */;
val* var56 /* : nullable MModule */;
val* var58 /* : nullable MModule */;
val* var59 /* : String */;
val* var60 /* : String */;
val* var_f /* var f: String */;
val* var62 /* : NativeArray[String] */;
static val* varonce61;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
val* var66 /* : FlatString */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : NativeString */;
val* var70 /* : FlatString */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
val* var74 /* : FlatString */;
val* var75 /* : nullable ANode */;
val* var77 /* : nullable ANode */;
val* var78 /* : Location */;
val* var80 /* : Location */;
long var81 /* : Int */;
long var83 /* : Int */;
val* var84 /* : String */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : FlatString */;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (var2 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var2,((val*)NULL)) on <var2:nullable ANode> */
var_other = ((val*)NULL);
{
var8 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var2, var_other); /* == on <var2:nullable ANode(ANode)>*/
}
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
var_ = var5;
if (var5){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var12 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1640);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#location (var10) on <var10:nullable ANode> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var15 = var10->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var10:nullable ANode> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline location#Location#file (var13) on <var13:Location> */
var18 = var13->attrs[COLOR_nit__location__Location___file].val; /* _file on <var13:Location> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (var16 == NULL) {
var19 = 0; /* is null */
} else {
var19 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var16,((val*)NULL)) on <var16:nullable SourceFile> */
var_other = ((val*)NULL);
{
var22 = ((short int(*)(val* self, val* p0))(var16->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var16, var_other); /* == on <var16:nullable SourceFile(SourceFile)>*/
}
var23 = !var22;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
var1 = var19;
} else {
var1 = var_;
}
var_24 = var1;
if (var1){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var27 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
if (var25 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1641);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#location (var25) on <var25:nullable ANode> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var30 = var25->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var25:nullable ANode> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline location#Location#file (var28) on <var28:Location> */
var33 = var28->attrs[COLOR_nit__location__Location___file].val; /* _file on <var28:Location> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (var31 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1641);
fatal_exit(1);
} else {
{ /* Inline loader#SourceFile#mmodule (var31) on <var31:nullable SourceFile> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 820);
fatal_exit(1);
}
var36 = var31->attrs[COLOR_nit__loader__SourceFile___mmodule].val; /* _mmodule on <var31:nullable SourceFile> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
var37 = 0; /* is null */
} else {
var37 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var34,((val*)NULL)) on <var34:nullable MModule> */
var_other = ((val*)NULL);
{
var40 = ((short int(*)(val* self, val* p0))(var34->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var34, var_other); /* == on <var34:nullable MModule(MModule)>*/
}
var41 = !var40;
var38 = var41;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
var37 = var38;
}
var = var37;
} else {
var = var_24;
}
if (var){
if (unlikely(varonce==NULL)) {
var42 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "FILE_";
var46 = standard___standard__NativeString___to_s_with_length(var45, 5l);
var44 = var46;
varonce43 = var44;
}
((struct instance_standard__NativeArray*)var42)->values[0]=var44;
} else {
var42 = varonce;
varonce = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var49 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var47 = var49;
RET_LABEL48:(void)0;
}
}
if (var47 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1642);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#location (var47) on <var47:nullable ANode> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var52 = var47->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var47:nullable ANode> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline location#Location#file (var50) on <var50:Location> */
var55 = var50->attrs[COLOR_nit__location__Location___file].val; /* _file on <var50:Location> */
var53 = var55;
RET_LABEL54:(void)0;
}
}
if (var53 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1642);
fatal_exit(1);
} else {
{ /* Inline loader#SourceFile#mmodule (var53) on <var53:nullable SourceFile> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__loader, 820);
fatal_exit(1);
}
var58 = var53->attrs[COLOR_nit__loader__SourceFile___mmodule].val; /* _mmodule on <var53:nullable SourceFile> */
var56 = var58;
RET_LABEL57:(void)0;
}
}
if (var56 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1642);
fatal_exit(1);
} else {
var59 = nit___nit__MModule___nit__model_base__MEntity__c_name(var56);
}
((struct instance_standard__NativeArray*)var42)->values[1]=var59;
{
var60 = ((val*(*)(val* self))(var42->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var42); /* native_to_s on <var42:NativeArray[String]>*/
}
varonce = var42;
var_f = var60;
{
nit___nit__AbstractCompilerVisitor___require_declaration(self, var_f); /* Direct call abstract_compiler#AbstractCompilerVisitor#require_declaration on <self:AbstractCompilerVisitor>*/
}
if (unlikely(varonce61==NULL)) {
var62 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "PRINT_ERROR(\" (%s:%d)\\n\", ";
var66 = standard___standard__NativeString___to_s_with_length(var65, 26l);
var64 = var66;
varonce63 = var64;
}
((struct instance_standard__NativeArray*)var62)->values[0]=var64;
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = ", ";
var70 = standard___standard__NativeString___to_s_with_length(var69, 2l);
var68 = var70;
varonce67 = var68;
}
((struct instance_standard__NativeArray*)var62)->values[2]=var68;
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = ");";
var74 = standard___standard__NativeString___to_s_with_length(var73, 2l);
var72 = var74;
varonce71 = var72;
}
((struct instance_standard__NativeArray*)var62)->values[4]=var72;
} else {
var62 = varonce61;
varonce61 = NULL;
}
((struct instance_standard__NativeArray*)var62)->values[1]=var_f;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var77 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
if (var75 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1644);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ANode#location (var75) on <var75:nullable ANode> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var80 = var75->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <var75:nullable ANode> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
{ /* Inline location#Location#line_start (var78) on <var78:Location> */
var83 = var78->attrs[COLOR_nit__location__Location___line_start].l; /* _line_start on <var78:Location> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
var84 = standard__string___Int___Object__to_s(var81);
((struct instance_standard__NativeArray*)var62)->values[3]=var84;
{
var85 = ((val*(*)(val* self))(var62->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var62); /* native_to_s on <var62:NativeArray[String]>*/
}
varonce61 = var62;
{
nit___nit__AbstractCompilerVisitor___add(self, var85); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
} else {
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "PRINT_ERROR(\"\\n\");";
var89 = standard___standard__NativeString___to_s_with_length(var88, 18l);
var87 = var89;
varonce86 = var87;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var87); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
}
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "fatal_exit(1);";
var93 = standard___standard__NativeString___to_s_with_length(var92, 14l);
var91 = var93;
varonce90 = var91;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var91); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
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
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : NativeString */;
val* var5 /* : FlatString */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
val* var9 /* : FlatString */;
val* var10 /* : String */;
val* var11 /* : String */;
val* var12 /* : String */;
val* var_cn /* var cn: String */;
val* var14 /* : NativeArray[String] */;
static val* varonce13;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
var_value = p0;
var_mtype = p1;
var_tag = p2;
{
var = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__type_test]))(self, var_value, var_mtype, var_tag); /* type_test on <self:AbstractCompilerVisitor>*/
}
var_res = var;
if (unlikely(varonce==NULL)) {
var1 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "if (unlikely(!";
var5 = standard___standard__NativeString___to_s_with_length(var4, 14l);
var3 = var5;
varonce2 = var3;
}
((struct instance_standard__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = ")) {";
var9 = standard___standard__NativeString___to_s_with_length(var8, 4l);
var7 = var9;
varonce6 = var7;
}
((struct instance_standard__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
var10 = ((val*(*)(val* self))(var_res->class->vft[COLOR_standard__string__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_standard__NativeArray*)var1)->values[1]=var10;
{
var11 = ((val*(*)(val* self))(var1->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
nit___nit__AbstractCompilerVisitor___add(self, var11); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
{
var12 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(self, var_value); /* class_name_string on <self:AbstractCompilerVisitor>*/
}
var_cn = var12;
if (unlikely(varonce13==NULL)) {
var14 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "PRINT_ERROR(\"Runtime error: Cast failed. Expected `%s`, got `%s`\", \"";
var18 = standard___standard__NativeString___to_s_with_length(var17, 68l);
var16 = var18;
varonce15 = var16;
}
((struct instance_standard__NativeArray*)var14)->values[0]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "\", ";
var22 = standard___standard__NativeString___to_s_with_length(var21, 3l);
var20 = var22;
varonce19 = var20;
}
((struct instance_standard__NativeArray*)var14)->values[2]=var20;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = ");";
var26 = standard___standard__NativeString___to_s_with_length(var25, 2l);
var24 = var26;
varonce23 = var24;
}
((struct instance_standard__NativeArray*)var14)->values[4]=var24;
} else {
var14 = varonce13;
varonce13 = NULL;
}
{
var27 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
{
var28 = standard___standard__Text___escape_to_c(var27);
}
((struct instance_standard__NativeArray*)var14)->values[1]=var28;
((struct instance_standard__NativeArray*)var14)->values[3]=var_cn;
{
var29 = ((val*(*)(val* self))(var14->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce13 = var14;
{
nit___nit__AbstractCompilerVisitor___add(self, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
{
nit___nit__AbstractCompilerVisitor___add_raw_abort(self); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_raw_abort on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "}";
var33 = standard___standard__NativeString___to_s_with_length(var32, 1l);
var31 = var33;
varonce30 = var31;
}
{
nit___nit__AbstractCompilerVisitor___add(self, var31); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
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
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var15 /* : nullable StaticFrame */;
val* var17 /* : nullable StaticFrame */;
val* var18 /* : nullable String */;
val* var20 /* : nullable String */;
val* var21 /* : String */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1665);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#returnvar (var) on <var:nullable StaticFrame> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1838);
fatal_exit(1);
}
var5 = var->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnvar].val; /* _returnvar on <var:nullable StaticFrame> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1665);
fatal_exit(1);
}
{
nit___nit__AbstractCompilerVisitor___assign(self, var3, var_s); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <self:AbstractCompilerVisitor>*/
}
if (unlikely(varonce==NULL)) {
var6 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "goto ";
var10 = standard___standard__NativeString___to_s_with_length(var9, 5l);
var8 = var10;
varonce7 = var8;
}
((struct instance_standard__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = ";";
var14 = standard___standard__NativeString___to_s_with_length(var13, 1l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var6)->values[2]=var12;
} else {
var6 = varonce;
varonce = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var17 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (var15 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1666);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#returnlabel (var15) on <var15:nullable StaticFrame> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1841);
fatal_exit(1);
}
var20 = var15->attrs[COLOR_nit__abstract_compiler__StaticFrame___returnlabel].val; /* _returnlabel on <var15:nullable StaticFrame> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1666);
fatal_exit(1);
}
((struct instance_standard__NativeArray*)var6)->values[1]=var18;
{
var21 = ((val*(*)(val* self))(var6->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
nit___nit__AbstractCompilerVisitor___add(self, var21); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#stmt for (self: AbstractCompilerVisitor, nullable AExpr) */
void nit___nit__AbstractCompilerVisitor___stmt(val* self, val* p0) {
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : nullable MType */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
static val* varonce;
val* var18 /* : String */;
char* var19 /* : NativeString */;
val* var20 /* : FlatString */;
val* var21 /* : nullable AArrayExpr */;
val* var23 /* : nullable AArrayExpr */;
val* var_narray /* var narray: nullable AArrayExpr */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other27 /* var other: nullable Object */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : nullable StaticFrame */;
val* var32 /* : nullable StaticFrame */;
val* var33 /* : nullable RuntimeVariable */;
val* var35 /* : nullable RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var36 /* : nullable MType */;
val* var38 /* : nullable MType */;
val* var39 /* : RuntimeVariable */;
val* var_val /* var val: RuntimeVariable */;
val* var40 /* : nullable CallSite */;
val* var42 /* : nullable CallSite */;
val* var43 /* : Array[RuntimeVariable] */;
val* var_44 /* var : Array[RuntimeVariable] */;
val* var45 /* : nullable RuntimeVariable */;
val* var46 /* : nullable ANode */;
val* var48 /* : nullable ANode */;
val* var_old /* var old: nullable ANode */;
var_nexpr = p0;
if (var_nexpr == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nexpr,var_other) on <var_nexpr:nullable AExpr(AExpr)> */
var5 = var_nexpr == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
goto RET_LABEL;
} else {
}
{
var7 = ((val*(*)(val* self))(var_nexpr->class->vft[COLOR_nit__typing__AExpr__mtype]))(var_nexpr); /* mtype on <var_nexpr:nullable AExpr(AExpr)>*/
}
if (var7 == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var7,((val*)NULL)) on <var7:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var7,var_other) on <var7:nullable MType(MType)> */
var13 = var7 == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
var_ = var8;
if (var8){
{
{ /* Inline typing#AExpr#is_typed (var_nexpr) on <var_nexpr:nullable AExpr(AExpr)> */
var16 = var_nexpr->attrs[COLOR_nit__typing__AExpr___is_typed].s; /* _is_typed on <var_nexpr:nullable AExpr(AExpr)> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
var17 = !var14;
var6 = var17;
} else {
var6 = var_;
}
if (var6){
if (likely(varonce!=NULL)) {
var18 = varonce;
} else {
var19 = "FATAL: bad statement executed.";
var20 = standard___standard__NativeString___to_s_with_length(var19, 30l);
var18 = var20;
varonce = var18;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(self, var18); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#AExpr#comprehension (var_nexpr) on <var_nexpr:nullable AExpr(AExpr)> */
var23 = var_nexpr->attrs[COLOR_nit__typing__AExpr___comprehension].val; /* _comprehension on <var_nexpr:nullable AExpr(AExpr)> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_narray = var21;
if (var_narray == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_narray,((val*)NULL)) on <var_narray:nullable AArrayExpr> */
var_other27 = ((val*)NULL);
{
var28 = ((short int(*)(val* self, val* p0))(var_narray->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_narray, var_other27); /* == on <var_narray:nullable AArrayExpr(AArrayExpr)>*/
}
var29 = !var28;
var25 = var29;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var32 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (var30 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#comprehension (var30) on <var30:nullable StaticFrame> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1848);
fatal_exit(1);
}
var35 = var30->attrs[COLOR_nit__abstract_compiler__StaticFrame___comprehension].val; /* _comprehension on <var30:nullable StaticFrame> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1683);
fatal_exit(1);
}
var_recv = var33;
{
{ /* Inline typing#AArrayExpr#element_mtype (var_narray) on <var_narray:nullable AArrayExpr(AArrayExpr)> */
var38 = var_narray->attrs[COLOR_nit__typing__AArrayExpr___element_mtype].val; /* _element_mtype on <var_narray:nullable AArrayExpr(AArrayExpr)> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
var39 = nit___nit__AbstractCompilerVisitor___expr(self, var_nexpr, var36);
}
var_val = var39;
{
{ /* Inline typing#AArrayExpr#push_callsite (var_narray) on <var_narray:nullable AArrayExpr(AArrayExpr)> */
var42 = var_narray->attrs[COLOR_nit__typing__AArrayExpr___push_callsite].val; /* _push_callsite on <var_narray:nullable AArrayExpr(AArrayExpr)> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1685);
fatal_exit(1);
}
var43 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var43, 2l); /* Direct call array#Array#with_capacity on <var43:Array[RuntimeVariable]>*/
}
var_44 = var43;
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_44, var_recv); /* Direct call array#AbstractArray#push on <var_44:Array[RuntimeVariable]>*/
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_44, var_val); /* Direct call array#AbstractArray#push on <var_44:Array[RuntimeVariable]>*/
}
{
var45 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(self, var40, var_44); /* compile_callsite on <self:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var48 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
var_old = var46;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (self,var_nexpr) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_nexpr; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL49:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_nit__abstract_compiler__AExpr__stmt]))(var_nexpr, self); /* stmt on <var_nexpr:nullable AExpr(AExpr)>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (self,var_old) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_old; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL50:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#expr for (self: AbstractCompilerVisitor, AExpr, nullable MType): RuntimeVariable */
val* nit___nit__AbstractCompilerVisitor___expr(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_nexpr /* var nexpr: AExpr */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : nullable MType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : AbstractCompiler */;
val* var19 /* : AbstractCompiler */;
val* var20 /* : MModule */;
val* var22 /* : MModule */;
val* var23 /* : MClassType */;
val* var24 /* : RuntimeVariable */;
val* var25 /* : nullable ANode */;
val* var27 /* : nullable ANode */;
val* var_old /* var old: nullable ANode */;
val* var29 /* : nullable RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var_other33 /* var other: nullable Object */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : MType */;
val* var37 /* : RuntimeVariable */;
val* var38 /* : nullable MType */;
val* var39 /* : RuntimeVariable */;
val* var40 /* : nullable MType */;
val* var42 /* : nullable MType */;
val* var_implicit_cast_to /* var implicit_cast_to: nullable MType */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
short int var_ /* var : Bool */;
val* var49 /* : AbstractCompiler */;
val* var51 /* : AbstractCompiler */;
val* var52 /* : ModelBuilder */;
val* var54 /* : ModelBuilder */;
val* var55 /* : ToolContext */;
val* var57 /* : ToolContext */;
val* var58 /* : OptionBool */;
val* var60 /* : OptionBool */;
val* var61 /* : nullable Object */;
val* var63 /* : nullable Object */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : FlatString */;
val* var70 /* : RuntimeVariable */;
var_nexpr = p0;
var_mtype = p1;
{
var1 = ((val*(*)(val* self))(var_nexpr->class->vft[COLOR_nit__typing__AExpr__mtype]))(var_nexpr); /* mtype on <var_nexpr:AExpr>*/
}
if (var1 == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var1,((val*)NULL)) on <var1:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var1,var_other) on <var1:nullable MType(MType)> */
var7 = var1 == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (var2){
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "FATAL: bad expression executed.";
var10 = standard___standard__NativeString___to_s_with_length(var9, 31l);
var8 = var10;
varonce = var8;
}
{
nit___nit__AbstractCompilerVisitor___add_abort(self, var8); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:AbstractCompilerVisitor>*/
}
if (var_mtype == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var16 = var_mtype == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var19 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var17) on <var17:AbstractCompiler> */
var22 = var17->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var17:AbstractCompiler> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 515);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nit__model___MModule___object_type(var20);
}
var_mtype = var23;
} else {
}
{
var24 = nit___nit__AbstractCompilerVisitor___new_var(self, var_mtype);
}
var = var24;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var27 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_old = var25;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (self,var_nexpr) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_nexpr; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL28:(void)0;
}
}
{
var29 = ((val*(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_nit__abstract_compiler__AExpr__expr]))(var_nexpr, self); /* expr on <var_nexpr:AExpr>*/
}
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1710);
fatal_exit(1);
}
var_res = var29;
if (var_mtype == NULL) {
var30 = 0; /* is null */
} else {
var30 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other33 = ((val*)NULL);
{
var34 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_mtype, var_other33); /* == on <var_mtype:nullable MType(MType)>*/
}
var35 = !var34;
var31 = var35;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
{
var36 = nit___nit__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var36;
{
var37 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__autobox(self, var_res, var_mtype);
}
var_res = var37;
} else {
}
{
var38 = ((val*(*)(val* self))(var_nexpr->class->vft[COLOR_nit__typing__AExpr__mtype]))(var_nexpr); /* mtype on <var_nexpr:AExpr>*/
}
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1715);
fatal_exit(1);
}
{
var39 = nit___nit__AbstractCompilerVisitor___autoadapt(self, var_res, var38);
}
var_res = var39;
{
{ /* Inline typing#AExpr#implicit_cast_to (var_nexpr) on <var_nexpr:AExpr> */
var42 = var_nexpr->attrs[COLOR_nit__typing__AExpr___implicit_cast_to].val; /* _implicit_cast_to on <var_nexpr:AExpr> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_implicit_cast_to = var40;
if (var_implicit_cast_to == NULL) {
var44 = 0; /* is null */
} else {
var44 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_implicit_cast_to,((val*)NULL)) on <var_implicit_cast_to:nullable MType> */
var_other33 = ((val*)NULL);
{
var47 = ((short int(*)(val* self, val* p0))(var_implicit_cast_to->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_implicit_cast_to, var_other33); /* == on <var_implicit_cast_to:nullable MType(MType)>*/
}
var48 = !var47;
var45 = var48;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
var44 = var45;
}
var_ = var44;
if (var44){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var51 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var49) on <var49:AbstractCompiler> */
var54 = var49->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var49:AbstractCompiler> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var52) on <var52:ModelBuilder> */
var57 = var52->attrs[COLOR_nit__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var52:ModelBuilder> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__modelbuilder_base, 47);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_autocast (var55) on <var55:ToolContext> */
var60 = var55->attrs[COLOR_nit__abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <var55:ToolContext> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 54);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
{ /* Inline opts#Option#value (var58) on <var58:OptionBool> */
var63 = var58->attrs[COLOR_opts__Option___value].val; /* _value on <var58:OptionBool> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
var64 = (short int)((long)(var61)>>2);
var65 = !var64;
var43 = var65;
} else {
var43 = var_;
}
if (var43){
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "auto";
var69 = standard___standard__NativeString___to_s_with_length(var68, 4l);
var67 = var69;
varonce66 = var67;
}
{
nit___nit__AbstractCompilerVisitor___add_cast(self, var_res, var_implicit_cast_to, var67); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_cast on <self:AbstractCompilerVisitor>*/
}
{
var70 = nit___nit__AbstractCompilerVisitor___autoadapt(self, var_res, var_implicit_cast_to);
}
var_res = var70;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (self,var_old) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_old; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL71:(void)0;
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
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Sys */;
val* var10 /* : NativeArray[String] */;
static val* varonce;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var15 /* : String */;
val* var17 /* : NativeArray[String] */;
static val* varonce16;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : NativeString */;
val* var21 /* : FlatString */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
val* var25 /* : FlatString */;
val* var26 /* : String */;
var_message = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_node = var;
if (var_node == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node,((val*)NULL)) on <var_node:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_node,var_other) on <var_node:nullable ANode(ANode)> */
var8 = var_node == var_other;
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
var9 = glob_sys;
if (unlikely(varonce==NULL)) {
var10 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "?: ";
var14 = standard___standard__NativeString___to_s_with_length(var13, 3l);
var12 = var14;
varonce11 = var12;
}
((struct instance_standard__NativeArray*)var10)->values[0]=var12;
} else {
var10 = varonce;
varonce = NULL;
}
((struct instance_standard__NativeArray*)var10)->values[1]=var_message;
{
var15 = ((val*(*)(val* self))(var10->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
standard__file___Sys___print(var9, var15); /* Direct call file#Sys#print on <var9:Sys>*/
}
} else {
{
nit___nit__ANode___debug(var_node, var_message); /* Direct call parser_nodes#ANode#debug on <var_node:nullable ANode(ANode)>*/
}
}
if (unlikely(varonce16==NULL)) {
var17 = NEW_standard__NativeArray(3l, &type_standard__NativeArray__standard__String);
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "/* DEBUG: ";
var21 = standard___standard__NativeString___to_s_with_length(var20, 10l);
var19 = var21;
varonce18 = var19;
}
((struct instance_standard__NativeArray*)var17)->values[0]=var19;
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = " */";
var25 = standard___standard__NativeString___to_s_with_length(var24, 3l);
var23 = var25;
varonce22 = var23;
}
((struct instance_standard__NativeArray*)var17)->values[2]=var23;
} else {
var17 = varonce16;
varonce16 = NULL;
}
((struct instance_standard__NativeArray*)var17)->values[1]=var_message;
{
var26 = ((val*(*)(val* self))(var17->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var17); /* native_to_s on <var17:NativeArray[String]>*/
}
varonce16 = var17;
{
nit___nit__AbstractCompilerVisitor___add(self, var26); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1748);
fatal_exit(1);
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
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : String */;
val* var11 /* : String */;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#c_name_cache (self) on <self:AbstractRuntimeFunction> */
var3 = self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___c_name_cache].val; /* _c_name_cache on <self:AbstractRuntimeFunction> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_res = var1;
if (var_res == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable String> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable String(String)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var = var_res;
goto RET_LABEL;
} else {
}
{
{ /* Inline separate_compiler#SeparateRuntimeFunction#build_c_name (self) on <self:AbstractRuntimeFunction> */
var11 = self->attrs[COLOR_nit__separate_compiler__SeparateRuntimeFunction___build_c_name].val; /* _build_c_name on <self:AbstractRuntimeFunction> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _build_c_name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__separate_compiler, 2176);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_res = var9;
{
{ /* Inline abstract_compiler#AbstractRuntimeFunction#c_name_cache= (self,var_res) on <self:AbstractRuntimeFunction> */
self->attrs[COLOR_nit__abstract_compiler__AbstractRuntimeFunction___c_name_cache].val = var_res; /* _c_name_cache on <self:AbstractRuntimeFunction> */
RET_LABEL12:(void)0;
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
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__AbstractRuntimeFunction___standard__kernel__Object__init]))(self); /* init on <self:AbstractRuntimeFunction>*/
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1781);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((short int(*)(val* self))(var->class->vft[COLOR_nit__model__MType__need_anchor]))(var); /* need_anchor on <var:MType>*/
}
var4 = !var3;
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1796);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (self) on <self:RuntimeVariable> */
var7 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:RuntimeVariable> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((short int(*)(val* self))(var5->class->vft[COLOR_nit__model__MType__need_anchor]))(var5); /* need_anchor on <var5:MType>*/
}
var9 = !var8;
if (unlikely(!var9)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1797);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1781);
fatal_exit(1);
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
val* var6 /* : FlatString */;
val* var_exact_str /* var exact_str: nullable Object */;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : NativeString */;
val* var10 /* : FlatString */;
val* var11 /* : MType */;
val* var13 /* : MType */;
val* var14 /* : MType */;
val* var16 /* : MType */;
short int var17 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
val* var23 /* : NativeArray[String] */;
static val* varonce22;
val* var24 /* : MType */;
val* var26 /* : MType */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var_type_str /* var type_str: nullable Object */;
val* var30 /* : NativeArray[String] */;
static val* varonce29;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
val* var34 /* : FlatString */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
val* var38 /* : FlatString */;
val* var39 /* : MType */;
val* var41 /* : MType */;
val* var42 /* : String */;
val* var43 /* : MType */;
val* var45 /* : MType */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var49 /* : NativeArray[String] */;
static val* varonce48;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : NativeString */;
val* var53 /* : FlatString */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : NativeString */;
val* var57 /* : FlatString */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
val* var61 /* : FlatString */;
val* var62 /* : String */;
val* var64 /* : String */;
val* var65 /* : String */;
{
{ /* Inline abstract_compiler#RuntimeVariable#is_exact (self) on <self:RuntimeVariable> */
var3 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___is_exact].s; /* _is_exact on <self:RuntimeVariable> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = " exact";
var6 = standard___standard__NativeString___to_s_with_length(var5, 6l);
var4 = var6;
varonce = var4;
}
var_exact_str = var4;
} else {
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "";
var10 = standard___standard__NativeString___to_s_with_length(var9, 0l);
var8 = var10;
varonce7 = var8;
}
var_exact_str = var8;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (self) on <self:RuntimeVariable> */
var13 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (self) on <self:RuntimeVariable> */
var16 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:RuntimeVariable> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var11,var14) on <var11:MType> */
var_other = var14;
{
{ /* Inline kernel#Object#is_same_instance (var11,var_other) on <var11:MType> */
var21 = var11 == var_other;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
if (var17){
if (unlikely(varonce22==NULL)) {
var23 = NEW_standard__NativeArray(2l, &type_standard__NativeArray__standard__String);
} else {
var23 = varonce22;
varonce22 = NULL;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (self) on <self:RuntimeVariable> */
var26 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = ((val*(*)(val* self))(var24->class->vft[COLOR_standard__string__Object__to_s]))(var24); /* to_s on <var24:MType>*/
}
((struct instance_standard__NativeArray*)var23)->values[0]=var27;
((struct instance_standard__NativeArray*)var23)->values[1]=var_exact_str;
{
var28 = ((val*(*)(val* self))(var23->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce22 = var23;
var_type_str = var28;
} else {
if (unlikely(varonce29==NULL)) {
var30 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "(";
var34 = standard___standard__NativeString___to_s_with_length(var33, 1l);
var32 = var34;
varonce31 = var32;
}
((struct instance_standard__NativeArray*)var30)->values[1]=var32;
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = ")";
var38 = standard___standard__NativeString___to_s_with_length(var37, 1l);
var36 = var38;
varonce35 = var36;
}
((struct instance_standard__NativeArray*)var30)->values[4]=var36;
} else {
var30 = varonce29;
varonce29 = NULL;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (self) on <self:RuntimeVariable> */
var41 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <self:RuntimeVariable> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = ((val*(*)(val* self))(var39->class->vft[COLOR_standard__string__Object__to_s]))(var39); /* to_s on <var39:MType>*/
}
((struct instance_standard__NativeArray*)var30)->values[0]=var42;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (self) on <self:RuntimeVariable> */
var45 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <self:RuntimeVariable> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1787);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = ((val*(*)(val* self))(var43->class->vft[COLOR_standard__string__Object__to_s]))(var43); /* to_s on <var43:MType>*/
}
((struct instance_standard__NativeArray*)var30)->values[2]=var46;
((struct instance_standard__NativeArray*)var30)->values[3]=var_exact_str;
{
var47 = ((val*(*)(val* self))(var30->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var30); /* native_to_s on <var30:NativeArray[String]>*/
}
varonce29 = var30;
var_type_str = var47;
}
if (unlikely(varonce48==NULL)) {
var49 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "<";
var53 = standard___standard__NativeString___to_s_with_length(var52, 1l);
var51 = var53;
varonce50 = var51;
}
((struct instance_standard__NativeArray*)var49)->values[0]=var51;
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = ":";
var57 = standard___standard__NativeString___to_s_with_length(var56, 1l);
var55 = var57;
varonce54 = var55;
}
((struct instance_standard__NativeArray*)var49)->values[2]=var55;
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = ">";
var61 = standard___standard__NativeString___to_s_with_length(var60, 1l);
var59 = var61;
varonce58 = var59;
}
((struct instance_standard__NativeArray*)var49)->values[4]=var59;
} else {
var49 = varonce48;
varonce48 = NULL;
}
{
{ /* Inline abstract_compiler#RuntimeVariable#name (self) on <self:RuntimeVariable> */
var64 = self->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___name].val; /* _name on <self:RuntimeVariable> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1781);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
((struct instance_standard__NativeArray*)var49)->values[1]=var62;
((struct instance_standard__NativeArray*)var49)->values[3]=var_type_str;
{
var65 = ((val*(*)(val* self))(var49->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var49); /* native_to_s on <var49:NativeArray[String]>*/
}
varonce48 = var49;
var = var65;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1825);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1828);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1832);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1835);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1844);
fatal_exit(1);
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
((void(*)(val* self))(self->class->vft[COLOR_nit___nit__StaticFrame___standard__kernel__Object__init]))(self); /* init on <self:StaticFrame>*/
}
RET_LABEL:;
}
/* method abstract_compiler#MType#ctype for (self: MType): String */
val* nit__abstract_compiler___MType___ctype(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "val*";
var3 = standard___standard__NativeString___to_s_with_length(var2, 4l);
var1 = var3;
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
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "val*";
var3 = standard___standard__NativeString___to_s_with_length(var2, 4l);
var1 = var3;
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
val* var3 /* : FlatString */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "val";
var3 = standard___standard__NativeString___to_s_with_length(var2, 3l);
var1 = var3;
varonce = var1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MType#is_c_primitive for (self: MType): Bool */
short int nit__abstract_compiler___MType___is_c_primitive(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#ctype for (self: MClassType): String */
val* nit__abstract_compiler___MClassType___MType__ctype(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : MClass */;
val* var7 /* : MClass */;
val* var8 /* : String */;
val* var10 /* : String */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : NativeString */;
val* var13 /* : FlatString */;
short int var14 /* : Bool */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
val* var18 /* : FlatString */;
val* var19 /* : MClass */;
val* var21 /* : MClass */;
val* var22 /* : String */;
val* var24 /* : String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
val* var28 /* : FlatString */;
short int var29 /* : Bool */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
val* var33 /* : FlatString */;
val* var34 /* : MClass */;
val* var36 /* : MClass */;
val* var37 /* : String */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
val* var43 /* : FlatString */;
short int var44 /* : Bool */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
val* var48 /* : FlatString */;
val* var49 /* : MClass */;
val* var51 /* : MClass */;
val* var52 /* : String */;
val* var54 /* : String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : NativeString */;
val* var58 /* : FlatString */;
short int var59 /* : Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
val* var63 /* : FlatString */;
val* var64 /* : MClass */;
val* var66 /* : MClass */;
val* var67 /* : String */;
val* var69 /* : String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : FlatString */;
short int var74 /* : Bool */;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : NativeString */;
val* var78 /* : FlatString */;
val* var79 /* : MClass */;
val* var81 /* : MClass */;
val* var82 /* : String */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
val* var88 /* : FlatString */;
short int var89 /* : Bool */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : NativeString */;
val* var93 /* : FlatString */;
val* var94 /* : MClass */;
val* var96 /* : MClass */;
val* var97 /* : String */;
val* var99 /* : String */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
val* var103 /* : FlatString */;
short int var104 /* : Bool */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
val* var108 /* : FlatString */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
val* var112 /* : FlatString */;
var1 = self->attrs[COLOR_nit__abstract_compiler__MClassType___ctype].val != NULL; /* _ctype on <self:MClassType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__abstract_compiler__MClassType___ctype].val; /* _ctype on <self:MClassType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ctype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1870);
fatal_exit(1);
}
} else {
{
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var7 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MClass#name (var5) on <var5:MClass> */
var10 = var5->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var5:MClass> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "Int";
var13 = standard___standard__NativeString___to_s_with_length(var12, 3l);
var11 = var13;
varonce = var11;
}
{
var14 = ((short int(*)(val* self, val* p0))(var8->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var8, var11); /* == on <var8:String>*/
}
if (var14){
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "long";
var18 = standard___standard__NativeString___to_s_with_length(var17, 4l);
var16 = var18;
varonce15 = var16;
}
var3 = var16;
goto RET_LABEL4;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var21 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model#MClass#name (var19) on <var19:MClass> */
var24 = var19->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var19:MClass> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "Bool";
var28 = standard___standard__NativeString___to_s_with_length(var27, 4l);
var26 = var28;
varonce25 = var26;
}
{
var29 = ((short int(*)(val* self, val* p0))(var22->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var22, var26); /* == on <var22:String>*/
}
if (var29){
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "short int";
var33 = standard___standard__NativeString___to_s_with_length(var32, 9l);
var31 = var33;
varonce30 = var31;
}
var3 = var31;
goto RET_LABEL4;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var36 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "Char";
var43 = standard___standard__NativeString___to_s_with_length(var42, 4l);
var41 = var43;
varonce40 = var41;
}
{
var44 = ((short int(*)(val* self, val* p0))(var37->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var37, var41); /* == on <var37:String>*/
}
if (var44){
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "uint32_t";
var48 = standard___standard__NativeString___to_s_with_length(var47, 8l);
var46 = var48;
varonce45 = var46;
}
var3 = var46;
goto RET_LABEL4;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var51 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline model#MClass#name (var49) on <var49:MClass> */
var54 = var49->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var49:MClass> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "Float";
var58 = standard___standard__NativeString___to_s_with_length(var57, 5l);
var56 = var58;
varonce55 = var56;
}
{
var59 = ((short int(*)(val* self, val* p0))(var52->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var52, var56); /* == on <var52:String>*/
}
if (var59){
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "double";
var63 = standard___standard__NativeString___to_s_with_length(var62, 6l);
var61 = var63;
varonce60 = var61;
}
var3 = var61;
goto RET_LABEL4;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var66 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
{ /* Inline model#MClass#name (var64) on <var64:MClass> */
var69 = var64->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var64:MClass> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "Byte";
var73 = standard___standard__NativeString___to_s_with_length(var72, 4l);
var71 = var73;
varonce70 = var71;
}
{
var74 = ((short int(*)(val* self, val* p0))(var67->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var67, var71); /* == on <var67:String>*/
}
if (var74){
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "unsigned char";
var78 = standard___standard__NativeString___to_s_with_length(var77, 13l);
var76 = var78;
varonce75 = var76;
}
var3 = var76;
goto RET_LABEL4;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var81 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline model#MClass#name (var79) on <var79:MClass> */
var84 = var79->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var79:MClass> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "NativeString";
var88 = standard___standard__NativeString___to_s_with_length(var87, 12l);
var86 = var88;
varonce85 = var86;
}
{
var89 = ((short int(*)(val* self, val* p0))(var82->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var82, var86); /* == on <var82:String>*/
}
if (var89){
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "char*";
var93 = standard___standard__NativeString___to_s_with_length(var92, 5l);
var91 = var93;
varonce90 = var91;
}
var3 = var91;
goto RET_LABEL4;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var96 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline model#MClass#name (var94) on <var94:MClass> */
var99 = var94->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var94:MClass> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "NativeArray";
var103 = standard___standard__NativeString___to_s_with_length(var102, 11l);
var101 = var103;
varonce100 = var101;
}
{
var104 = ((short int(*)(val* self, val* p0))(var97->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var97, var101); /* == on <var97:String>*/
}
if (var104){
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "val*";
var108 = standard___standard__NativeString___to_s_with_length(var107, 4l);
var106 = var108;
varonce105 = var106;
}
var3 = var106;
goto RET_LABEL4;
} else {
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = "val*";
var112 = standard___standard__NativeString___to_s_with_length(var111, 4l);
var110 = var112;
varonce109 = var110;
}
var3 = var110;
goto RET_LABEL4;
}
}
}
}
}
}
}
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__abstract_compiler__MClassType___ctype].val = var3; /* _ctype on <self:MClassType> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MClassType#is_c_primitive for (self: MClassType): Bool */
short int nit__abstract_compiler___MClassType___MType__is_c_primitive(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var5 /* : String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
var1 = self->attrs[COLOR_nit__abstract_compiler__MClassType__lazy_32d_is_c_primitive].s; /* lazy _is_c_primitive on <self:MClassType> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nit__abstract_compiler__MClassType___is_c_primitive].s; /* _is_c_primitive on <self:MClassType> */
} else {
{
{
var5 = nit__abstract_compiler___MClassType___MType__ctype(self);
}
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "val*";
var8 = standard___standard__NativeString___to_s_with_length(var7, 4l);
var6 = var8;
varonce = var6;
}
{
{ /* Inline kernel#Object#!= (var5,var6) on <var5:String> */
var_other = var6;
{
var11 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var5, var_other); /* == on <var5:String>*/
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var3 = var9;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nit__abstract_compiler__MClassType___is_c_primitive].s = var3; /* _is_c_primitive on <self:MClassType> */
var2 = var3;
self->attrs[COLOR_nit__abstract_compiler__MClassType__lazy_32d_is_c_primitive].s = 1; /* lazy _is_c_primitive on <self:MClassType> */
}
var = var2;
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
val* var7 /* : Sys */;
val* var8 /* : MClassKind */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var17 /* : String */;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 436);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var7 = glob_sys;
{
var8 = nit__model___standard__Sys___extern_kind(var7);
}
{
{ /* Inline kernel#Object#== (var4,var8) on <var4:MClassKind> */
var_other = var8;
{
{ /* Inline kernel#Object#is_same_instance (var4,var_other) on <var4:MClassKind> */
var13 = var4 == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "void*";
var16 = standard___standard__NativeString___to_s_with_length(var15, 5l);
var14 = var16;
varonce = var14;
}
var = var14;
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
val* var9 /* : FlatString */;
short int var10 /* : Bool */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
val* var14 /* : FlatString */;
val* var15 /* : MClass */;
val* var17 /* : MClass */;
val* var18 /* : String */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : NativeString */;
val* var24 /* : FlatString */;
short int var25 /* : Bool */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : NativeString */;
val* var29 /* : FlatString */;
val* var30 /* : MClass */;
val* var32 /* : MClass */;
val* var33 /* : String */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : NativeString */;
val* var39 /* : FlatString */;
short int var40 /* : Bool */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : NativeString */;
val* var44 /* : FlatString */;
val* var45 /* : MClass */;
val* var47 /* : MClass */;
val* var48 /* : String */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
val* var54 /* : FlatString */;
short int var55 /* : Bool */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : NativeString */;
val* var59 /* : FlatString */;
val* var60 /* : MClass */;
val* var62 /* : MClass */;
val* var63 /* : String */;
val* var65 /* : String */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : FlatString */;
short int var70 /* : Bool */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
val* var74 /* : FlatString */;
val* var75 /* : MClass */;
val* var77 /* : MClass */;
val* var78 /* : String */;
val* var80 /* : String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : NativeString */;
val* var84 /* : FlatString */;
short int var85 /* : Bool */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : NativeString */;
val* var89 /* : FlatString */;
val* var90 /* : MClass */;
val* var92 /* : MClass */;
val* var93 /* : String */;
val* var95 /* : String */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : NativeString */;
val* var99 /* : FlatString */;
short int var100 /* : Bool */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : NativeString */;
val* var104 /* : FlatString */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : NativeString */;
val* var108 /* : FlatString */;
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var3 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "Int";
var9 = standard___standard__NativeString___to_s_with_length(var8, 3l);
var7 = var9;
varonce = var7;
}
{
var10 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var4, var7); /* == on <var4:String>*/
}
if (var10){
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "l";
var14 = standard___standard__NativeString___to_s_with_length(var13, 1l);
var12 = var14;
varonce11 = var12;
}
var = var12;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var17 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MClass#name (var15) on <var15:MClass> */
var20 = var15->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var15:MClass> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "Bool";
var24 = standard___standard__NativeString___to_s_with_length(var23, 4l);
var22 = var24;
varonce21 = var22;
}
{
var25 = ((short int(*)(val* self, val* p0))(var18->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var18, var22); /* == on <var18:String>*/
}
if (var25){
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "s";
var29 = standard___standard__NativeString___to_s_with_length(var28, 1l);
var27 = var29;
varonce26 = var27;
}
var = var27;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var32 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
{ /* Inline model#MClass#name (var30) on <var30:MClass> */
var35 = var30->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var30:MClass> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "Char";
var39 = standard___standard__NativeString___to_s_with_length(var38, 4l);
var37 = var39;
varonce36 = var37;
}
{
var40 = ((short int(*)(val* self, val* p0))(var33->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var33, var37); /* == on <var33:String>*/
}
if (var40){
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "c";
var44 = standard___standard__NativeString___to_s_with_length(var43, 1l);
var42 = var44;
varonce41 = var42;
}
var = var42;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var47 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline model#MClass#name (var45) on <var45:MClass> */
var50 = var45->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var45:MClass> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "Float";
var54 = standard___standard__NativeString___to_s_with_length(var53, 5l);
var52 = var54;
varonce51 = var52;
}
{
var55 = ((short int(*)(val* self, val* p0))(var48->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var48, var52); /* == on <var48:String>*/
}
if (var55){
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "d";
var59 = standard___standard__NativeString___to_s_with_length(var58, 1l);
var57 = var59;
varonce56 = var57;
}
var = var57;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var62 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline model#MClass#name (var60) on <var60:MClass> */
var65 = var60->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var60:MClass> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "Byte";
var69 = standard___standard__NativeString___to_s_with_length(var68, 4l);
var67 = var69;
varonce66 = var67;
}
{
var70 = ((short int(*)(val* self, val* p0))(var63->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var63, var67); /* == on <var63:String>*/
}
if (var70){
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "b";
var74 = standard___standard__NativeString___to_s_with_length(var73, 1l);
var72 = var74;
varonce71 = var72;
}
var = var72;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var77 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline model#MClass#name (var75) on <var75:MClass> */
var80 = var75->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var75:MClass> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "NativeString";
var84 = standard___standard__NativeString___to_s_with_length(var83, 12l);
var82 = var84;
varonce81 = var82;
}
{
var85 = ((short int(*)(val* self, val* p0))(var78->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var78, var82); /* == on <var78:String>*/
}
if (var85){
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "str";
var89 = standard___standard__NativeString___to_s_with_length(var88, 3l);
var87 = var89;
varonce86 = var87;
}
var = var87;
goto RET_LABEL;
} else {
{
{ /* Inline model#MClassType#mclass (self) on <self:MClassType> */
var92 = self->attrs[COLOR_nit__model__MClassType___mclass].val; /* _mclass on <self:MClassType> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1138);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline model#MClass#name (var90) on <var90:MClass> */
var95 = var90->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var90:MClass> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = "NativeArray";
var99 = standard___standard__NativeString___to_s_with_length(var98, 11l);
var97 = var99;
varonce96 = var97;
}
{
var100 = ((short int(*)(val* self, val* p0))(var93->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var93, var97); /* == on <var93:String>*/
}
if (var100){
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = "val";
var104 = standard___standard__NativeString___to_s_with_length(var103, 3l);
var102 = var104;
varonce101 = var102;
}
var = var102;
goto RET_LABEL;
} else {
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = "val";
var108 = standard___standard__NativeString___to_s_with_length(var107, 3l);
var106 = var108;
varonce105 = var106;
}
var = var106;
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
val* var5 /* : AbstractCompiler */;
val* var7 /* : AbstractCompiler */;
val* var8 /* : ModelBuilder */;
val* var10 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var11 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
int cltype17;
int idtype18;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1929);
fatal_exit(1);
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
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var7 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var5) on <var5:AbstractCompiler> */
var10 = var5->attrs[COLOR_nit__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var5:AbstractCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_modelbuilder = var8;
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
var15 = ((short int(*)(val* self))(var_node->class->vft[COLOR_nit__abstract_compiler__APropdef__can_inline]))(var_node); /* can_inline on <var_node:nullable ANode(APropdef)>*/
}
var = var15;
goto RET_LABEL;
} else {
/* <var_node:nullable ANode> isa AClassdef */
cltype17 = type_nit__AClassdef.color;
idtype18 = type_nit__AClassdef.id;
if(var_node == NULL) {
var16 = 0;
} else {
if(cltype17 >= var_node->type->table_size) {
var16 = 0;
} else {
var16 = var_node->type->type_table[cltype17] == idtype18;
}
}
if (var16){
var = 1;
goto RET_LABEL;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1941);
fatal_exit(1);
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
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var16 /* : String */;
val* var_cn /* var cn: String */;
val* var18 /* : NativeArray[String] */;
static val* varonce;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
val* var22 /* : FlatString */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : NativeString */;
val* var26 /* : FlatString */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
val* var30 /* : FlatString */;
val* var31 /* : MProperty */;
val* var33 /* : MProperty */;
val* var34 /* : String */;
val* var36 /* : String */;
val* var37 /* : String */;
val* var38 /* : String */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
val* var42 /* : nullable ANode */;
val* var44 /* : nullable ANode */;
val* var_oldnode /* var oldnode: nullable ANode */;
short int var47 /* : Bool */;
int cltype48;
int idtype49;
val* var50 /* : nullable ANode */;
val* var52 /* : nullable ANode */;
val* var_oldnode53 /* var oldnode: nullable ANode */;
short int var56 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : RuntimeVariable */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1945);
fatal_exit(1);
}
var_v = p0;
var_arguments = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var4 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
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
{
{ /* Inline model#MMethodDef#is_abstract (self) on <self:MMethodDef> */
var14 = self->attrs[COLOR_nit__model__MMethodDef___is_abstract].s; /* _is_abstract on <self:MMethodDef> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
if (var12){
{
var15 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var16 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var15); /* class_name_string on <var_v:AbstractCompilerVisitor>*/
}
var_cn = var16;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_node) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_node; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL17:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var18 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "PRINT_ERROR(\"Runtime error: Abstract method `%s` called on `%s`\", \"";
var22 = standard___standard__NativeString___to_s_with_length(var21, 67l);
var20 = var22;
varonce19 = var20;
}
((struct instance_standard__NativeArray*)var18)->values[0]=var20;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "\", ";
var26 = standard___standard__NativeString___to_s_with_length(var25, 3l);
var24 = var26;
varonce23 = var24;
}
((struct instance_standard__NativeArray*)var18)->values[2]=var24;
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = ");";
var30 = standard___standard__NativeString___to_s_with_length(var29, 2l);
var28 = var30;
varonce27 = var28;
}
((struct instance_standard__NativeArray*)var18)->values[4]=var28;
} else {
var18 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MMethodDef> */
var33 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MMethodDef> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var31) on <var31:MProperty(MMethod)> */
var36 = var31->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var31:MProperty(MMethod)> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = standard___standard__Text___escape_to_c(var34);
}
((struct instance_standard__NativeArray*)var18)->values[1]=var37;
((struct instance_standard__NativeArray*)var18)->values[3]=var_cn;
{
var38 = ((val*(*)(val* self))(var18->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce = var18;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var38); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
nit___nit__AbstractCompilerVisitor___add_raw_abort(var_v); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_raw_abort on <var_v:AbstractCompilerVisitor>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
/* <var_node:nullable ANode> isa APropdef */
cltype40 = type_nit__APropdef.color;
idtype41 = type_nit__APropdef.id;
if(var_node == NULL) {
var39 = 0;
} else {
if(cltype40 >= var_node->type->table_size) {
var39 = 0;
} else {
var39 = var_node->type->type_table[cltype40] == idtype41;
}
}
if (var39){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (var_v) on <var_v:AbstractCompilerVisitor> */
var44 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <var_v:AbstractCompilerVisitor> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
var_oldnode = var42;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_node) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_node; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL45:(void)0;
}
}
{
nit__abstract_compiler___MMethodDef___compile_parameter_check(self, var_v, var_arguments); /* Direct call abstract_compiler#MMethodDef#compile_parameter_check on <self:MMethodDef>*/
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_node->class->vft[COLOR_nit__abstract_compiler__APropdef__compile_to_c]))(var_node, var_v, self, var_arguments); /* compile_to_c on <var_node:nullable ANode(APropdef)>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_oldnode) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_oldnode; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL46:(void)0;
}
}
} else {
/* <var_node:nullable ANode> isa AClassdef */
cltype48 = type_nit__AClassdef.color;
idtype49 = type_nit__AClassdef.id;
if(var_node == NULL) {
var47 = 0;
} else {
if(cltype48 >= var_node->type->table_size) {
var47 = 0;
} else {
var47 = var_node->type->type_table[cltype48] == idtype49;
}
}
if (var47){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (var_v) on <var_v:AbstractCompilerVisitor> */
var52 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <var_v:AbstractCompilerVisitor> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
var_oldnode53 = var50;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_node) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_node; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL54:(void)0;
}
}
{
nit__abstract_compiler___MMethodDef___compile_parameter_check(self, var_v, var_arguments); /* Direct call abstract_compiler#MMethodDef#compile_parameter_check on <self:MMethodDef>*/
}
{
nit__abstract_compiler___AClassdef___compile_to_c(var_node, var_v, self, var_arguments); /* Direct call abstract_compiler#AClassdef#compile_to_c on <var_node:nullable ANode(AClassdef)>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node= (var_v,var_oldnode53) on <var_v:AbstractCompilerVisitor> */
var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___current_node].val = var_oldnode53; /* _current_node on <var_v:AbstractCompilerVisitor> */
RET_LABEL55:(void)0;
}
}
} else {
if (var_val == NULL) {
var56 = 0; /* is null */
} else {
var56 = 1; /* arg is null and recv is not */
}
if (0) {
var57 = ((short int(*)(val* self, val* p0))((((long)var_val&3)?class_info[((long)var_val&3)]:var_val->class)->vft[COLOR_standard__kernel__Object___33d_61d]))(var_val, ((val*)NULL)); /* != on <var_val:nullable Object>*/
var56 = var57;
}
if (var56){
{
var58 = nit___nit__AbstractCompilerVisitor___value_instance(var_v, var_val);
}
{
nit___nit__AbstractCompilerVisitor___ret(var_v, var58); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1975);
fatal_exit(1);
}
}
}
var = ((val*)NULL);
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
long var_i /* var i: Int */;
val* var17 /* : nullable MSignature */;
val* var19 /* : nullable MSignature */;
long var20 /* : Int */;
long var_ /* var : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
val* var28 /* : nullable MSignature */;
val* var30 /* : nullable MSignature */;
long var31 /* : Int */;
long var33 /* : Int */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
val* var37 /* : MProperty */;
val* var39 /* : MProperty */;
val* var40 /* : MPropDef */;
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
val* var65 /* : NativeArray[String] */;
static val* varonce;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : NativeString */;
val* var69 /* : FlatString */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
val* var73 /* : FlatString */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : NativeString */;
val* var77 /* : FlatString */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : NativeString */;
val* var81 /* : FlatString */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : NativeString */;
val* var85 /* : FlatString */;
val* var86 /* : String */;
val* var87 /* : nullable MSignature */;
val* var89 /* : nullable MSignature */;
val* var90 /* : Array[MParameter] */;
val* var92 /* : Array[MParameter] */;
val* var93 /* : nullable Object */;
val* var94 /* : String */;
val* var96 /* : String */;
long var97 /* : Int */;
short int var99 /* : Bool */;
int cltype100;
int idtype101;
const char* var_class_name102;
long var103 /* : Int */;
val* var104 /* : nullable Object */;
val* var105 /* : String */;
val* var106 /* : String */;
val* var107 /* : String */;
long var108 /* : Int */;
short int var110 /* : Bool */;
int cltype111;
int idtype112;
const char* var_class_name113;
long var114 /* : Int */;
val* var115 /* : nullable Object */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : NativeString */;
val* var119 /* : FlatString */;
long var120 /* : Int */;
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1980);
fatal_exit(1);
}
var_v = p0;
var_arguments = p1;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var3 = var_v->attrs[COLOR_nit__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1102);
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 522);
fatal_exit(1);
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
fatal_exit(1);
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
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 48);
fatal_exit(1);
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
var16 = (short int)((long)(var13)>>2);
if (var16){
goto RET_LABEL;
} else {
}
var_i = 0l;
{
{ /* Inline model#MMethodDef#msignature (self) on <self:MMethodDef> */
var19 = self->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (var17 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1985);
fatal_exit(1);
} else {
var20 = nit___nit__MSignature___arity(var17);
}
var_ = var20;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var23 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var27 = var_i < var_;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
{
{ /* Inline model#MMethodDef#msignature (self) on <self:MMethodDef> */
var30 = self->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (var28 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1987);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#vararg_rank (var28) on <var28:nullable MSignature> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1808);
fatal_exit(1);
}
var33 = var28->attrs[COLOR_nit__model__MSignature___vararg_rank].l; /* _vararg_rank on <var28:nullable MSignature> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var31,var_i) on <var31:Int> */
var36 = var31 == var_i;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (self) on <self:MMethodDef> */
var39 = self->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <self:MMethodDef> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var37) on <var37:MProperty(MMethod)> */
var42 = var37->attrs[COLOR_nit__model__MProperty___intro].val; /* _intro on <var37:MProperty(MMethod)> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1968);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var40) on <var40:MPropDef(MMethodDef)> */
var45 = var40->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var40:MPropDef(MMethodDef)> */
var43 = var45;
RET_LABEL44:(void)0;
}
}
if (var43 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1990);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var43) on <var43:nullable MSignature> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var48 = var43->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var43:nullable MSignature> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var46, var_i);
}
{
{ /* Inline model#MParameter#mtype (var49) on <var49:nullable Object(MParameter)> */
var52 = var49->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var49:nullable Object(MParameter)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
var_origmtype = var50;
{
var53 = ((short int(*)(val* self))(var_origmtype->class->vft[COLOR_nit__model__MType__need_anchor]))(var_origmtype); /* need_anchor on <var_origmtype:MType>*/
}
var54 = !var53;
if (var54){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MMethodDef#msignature (self) on <self:MMethodDef> */
var57 = self->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (var55 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1994);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var55) on <var55:nullable MSignature> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var60 = var55->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var55:nullable MSignature> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var58, var_i);
}
{
{ /* Inline model#MParameter#mtype (var61) on <var61:nullable Object(MParameter)> */
var64 = var61->attrs[COLOR_nit__model__MParameter___mtype].val; /* _mtype on <var61:nullable Object(MParameter)> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1879);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_mtype = var62;
if (unlikely(varonce==NULL)) {
var65 = NEW_standard__NativeArray(9l, &type_standard__NativeArray__standard__String);
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "/* Covariant cast for argument ";
var69 = standard___standard__NativeString___to_s_with_length(var68, 31l);
var67 = var69;
varonce66 = var67;
}
((struct instance_standard__NativeArray*)var65)->values[0]=var67;
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = " (";
var73 = standard___standard__NativeString___to_s_with_length(var72, 2l);
var71 = var73;
varonce70 = var71;
}
((struct instance_standard__NativeArray*)var65)->values[2]=var71;
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = ") ";
var77 = standard___standard__NativeString___to_s_with_length(var76, 2l);
var75 = var77;
varonce74 = var75;
}
((struct instance_standard__NativeArray*)var65)->values[4]=var75;
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = " isa ";
var81 = standard___standard__NativeString___to_s_with_length(var80, 5l);
var79 = var81;
varonce78 = var79;
}
((struct instance_standard__NativeArray*)var65)->values[6]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = " */";
var85 = standard___standard__NativeString___to_s_with_length(var84, 3l);
var83 = var85;
varonce82 = var83;
}
((struct instance_standard__NativeArray*)var65)->values[8]=var83;
} else {
var65 = varonce;
varonce = NULL;
}
var86 = standard__string___Int___Object__to_s(var_i);
((struct instance_standard__NativeArray*)var65)->values[1]=var86;
{
{ /* Inline model#MMethodDef#msignature (self) on <self:MMethodDef> */
var89 = self->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <self:MMethodDef> */
var87 = var89;
RET_LABEL88:(void)0;
}
}
if (var87 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1998);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var87) on <var87:nullable MSignature> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var92 = var87->attrs[COLOR_nit__model__MSignature___mparameters].val; /* _mparameters on <var87:nullable MSignature> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1756);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
var93 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var90, var_i);
}
{
{ /* Inline model#MParameter#name (var93) on <var93:nullable Object(MParameter)> */
var96 = var93->attrs[COLOR_nit__model__MParameter___name].val; /* _name on <var93:nullable Object(MParameter)> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1876);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
((struct instance_standard__NativeArray*)var65)->values[3]=var94;
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var99 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var99)) {
var_class_name102 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name102);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var103 = var_i + 1l;
var97 = var103;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
{
var104 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var97);
}
{
var105 = nit___nit__RuntimeVariable___standard__string__Object__inspect(var104);
}
((struct instance_standard__NativeArray*)var65)->values[5]=var105;
{
var106 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_standard__string__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_standard__NativeArray*)var65)->values[7]=var106;
{
var107 = ((val*(*)(val* self))(var65->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var65); /* native_to_s on <var65:NativeArray[String]>*/
}
varonce = var65;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var107); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var110 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var110)) {
var_class_name113 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name113);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var114 = var_i + 1l;
var108 = var114;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
{
var115 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var108);
}
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = "covariance";
var119 = standard___standard__NativeString___to_s_with_length(var118, 10l);
var117 = var119;
varonce116 = var117;
}
{
nit___nit__AbstractCompilerVisitor___add_cast(var_v, var115, var_mtype, var117); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_cast on <var_v:AbstractCompilerVisitor>*/
}
BREAK_label: (void)0;
{
var120 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var120;
} else {
goto BREAK_label121;
}
}
BREAK_label121: (void)0;
RET_LABEL:;
}
/* method abstract_compiler#APropdef#compile_to_c for (self: APropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nit__abstract_compiler___APropdef___compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : NativeString */;
val* var4 /* : FlatString */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : NativeString */;
val* var8 /* : FlatString */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : NativeString */;
val* var12 /* : FlatString */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
val* var16 /* : FlatString */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : Location */;
val* var21 /* : Location */;
val* var22 /* : String */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
val* var27 /* : FlatString */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
if (unlikely(varonce==NULL)) {
var = NEW_standard__NativeArray(7l, &type_standard__NativeArray__standard__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "PRINT_ERROR(\"NOT YET IMPLEMENTED ";
var4 = standard___standard__NativeString___to_s_with_length(var3, 33l);
var2 = var4;
varonce1 = var2;
}
((struct instance_standard__NativeArray*)var)->values[0]=var2;
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = " ";
var8 = standard___standard__NativeString___to_s_with_length(var7, 1l);
var6 = var8;
varonce5 = var6;
}
((struct instance_standard__NativeArray*)var)->values[2]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = " at ";
var12 = standard___standard__NativeString___to_s_with_length(var11, 4l);
var10 = var12;
varonce9 = var10;
}
((struct instance_standard__NativeArray*)var)->values[4]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "\\n\");";
var16 = standard___standard__NativeString___to_s_with_length(var15, 5l);
var14 = var16;
varonce13 = var14;
}
((struct instance_standard__NativeArray*)var)->values[6]=var14;
} else {
var = varonce;
varonce = NULL;
}
{
var17 = standard__string___Object___class_name(self);
}
((struct instance_standard__NativeArray*)var)->values[1]=var17;
{
var18 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_standard__string__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_standard__NativeArray*)var)->values[3]=var18;
{
{ /* Inline parser_nodes#ANode#location (self) on <self:APropdef> */
var21 = self->attrs[COLOR_nit__parser_nodes__ANode___location].val; /* _location on <self:APropdef> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 24);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nit___nit__Location___standard__string__Object__to_s(var19);
}
((struct instance_standard__NativeArray*)var)->values[5]=var22;
{
var23 = ((val*(*)(val* self))(var->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "Not yet implemented";
var27 = standard___standard__NativeString___to_s_with_length(var26, 19l);
var25 = var27;
varonce24 = var25;
}
{
nit___nit__ANode___debug(self, var25); /* Direct call parser_nodes#ANode#debug on <self:APropdef>*/
}
RET_LABEL:;
}
/* method abstract_compiler#APropdef#can_inline for (self: APropdef): Bool */
short int nit__abstract_compiler___APropdef___can_inline(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AMethPropdef#compile_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]) */
void nit__abstract_compiler___AMethPropdef___APropdef__compile_to_c(val* self, val* p0, val* p1, val* p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var /* : nullable Array[CallSite] */;
val* var2 /* : nullable Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: nullable Array[CallSite] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var9 /* : nullable Object */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var_10 /* var : Array[CallSite] */;
val* var11 /* : ArrayIterator[nullable Object] */;
val* var_12 /* var : ArrayIterator[CallSite] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: CallSite */;
val* var15 /* : MMethod */;
val* var17 /* : MMethod */;
val* var18 /* : MProperty */;
val* var20 /* : MProperty */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
long var_i /* var i: Int */;
val* var25 /* : MSignature */;
val* var27 /* : MSignature */;
long var28 /* : Int */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var32 /* : Int */;
long var_33 /* var : Int */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
const char* var_class_name39;
short int var40 /* : Bool */;
val* var41 /* : nullable Object */;
long var42 /* : Int */;
val* var43 /* : MMethod */;
val* var45 /* : MMethod */;
val* var46 /* : MProperty */;
val* var48 /* : MProperty */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : nullable RuntimeVariable */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
val* var58 /* : nullable Object */;
val* var59 /* : MType */;
val* var61 /* : MType */;
short int var62 /* : Bool */;
int cltype63;
int idtype64;
const char* var_class_name65;
val* var66 /* : nullable RuntimeVariable */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
val* var74 /* : MProperty */;
val* var76 /* : MProperty */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
val* var82 /* : nullable AExpr */;
val* var84 /* : nullable AExpr */;
val* var_n_block /* var n_block: nullable AExpr */;
short int var85 /* : Bool */;
short int var86 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
long var_i90 /* var i: Int */;
val* var91 /* : nullable MSignature */;
val* var93 /* : nullable MSignature */;
long var94 /* : Int */;
long var_95 /* var : Int */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
const char* var_class_name101;
short int var102 /* : Bool */;
val* var103 /* : nullable ASignature */;
val* var105 /* : nullable ASignature */;
val* var106 /* : ANodes[AParam] */;
val* var108 /* : ANodes[AParam] */;
val* var109 /* : ANode */;
val* var110 /* : nullable Variable */;
val* var112 /* : nullable Variable */;
val* var_variable /* var variable: Variable */;
val* var113 /* : RuntimeVariable */;
long var114 /* : Int */;
short int var116 /* : Bool */;
int cltype117;
int idtype118;
const char* var_class_name119;
long var120 /* : Int */;
val* var121 /* : nullable Object */;
long var122 /* : Int */;
val* var124 /* : nullable Object */;
val* var125 /* : String */;
val* var_cn /* var cn: String */;
val* var126 /* : NativeArray[String] */;
static val* varonce;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : NativeString */;
val* var130 /* : FlatString */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
val* var134 /* : FlatString */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : NativeString */;
val* var138 /* : FlatString */;
val* var139 /* : MProperty */;
val* var141 /* : MProperty */;
val* var142 /* : String */;
val* var144 /* : String */;
val* var145 /* : String */;
val* var146 /* : String */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_inits (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_auto_super_inits = var;
if (var_auto_super_inits == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_auto_super_inits,((val*)NULL)) on <var_auto_super_inits:nullable Array[CallSite]> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_auto_super_inits->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_auto_super_inits, var_other); /* == on <var_auto_super_inits:nullable Array[CallSite](Array[CallSite])>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
var8 = NEW_standard__Array(&type_standard__Array__nit__RuntimeVariable);
{
standard___standard__Array___with_capacity(var8, 1l); /* Direct call array#Array#with_capacity on <var8:Array[RuntimeVariable]>*/
}
var_ = var8;
{
var9 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
standard___standard__AbstractArray___standard__abstract_collection__Sequence__push(var_, var9); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
var_args = var_;
var_10 = var_auto_super_inits;
{
var11 = standard___standard__AbstractArrayRead___standard__abstract_collection__Collection__iterator(var_10);
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
var_auto_super_init = var14;
{
{ /* Inline typing#CallSite#mproperty (var_auto_super_init) on <var_auto_super_init:CallSite> */
var17 = var_auto_super_init->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_auto_super_init:CallSite> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 624);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var20 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var15,var18) on <var15:MMethod> */
var_other = var18;
{
var23 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var15, var_other); /* == on <var15:MMethod>*/
}
var24 = !var23;
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2024);
fatal_exit(1);
}
{
standard___standard__AbstractArray___standard__abstract_collection__RemovableCollection__clear(var_args); /* Direct call array#AbstractArray#clear on <var_args:Array[RuntimeVariable]>*/
}
var_i = 0l;
{
{ /* Inline typing#CallSite#msignature (var_auto_super_init) on <var_auto_super_init:CallSite> */
var27 = var_auto_super_init->attrs[COLOR_nit__typing__CallSite___msignature].val; /* _msignature on <var_auto_super_init:CallSite> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _msignature");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 631);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = nit___nit__MSignature___arity(var25);
}
{
{ /* Inline kernel#Int#+ (var28,1l) on <var28:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var32 = var28 + 1l;
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_33 = var29;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_33) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_33:Int> isa OTHER */
/* <var_33:Int> isa OTHER */
var36 = 1; /* easy <var_33:Int> isa OTHER*/
if (unlikely(!var36)) {
var_class_name39 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name39);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var40 = var_i < var_33;
var34 = var40;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
{
var41 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var_i);
}
{
standard___standard__Array___standard__abstract_collection__SimpleCollection__add(var_args, var41); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
{
var42 = standard___standard__Int___Discrete__successor(var_i, 1l);
}
var_i = var42;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline typing#CallSite#mproperty (var_auto_super_init) on <var_auto_super_init:CallSite> */
var45 = var_auto_super_init->attrs[COLOR_nit__typing__CallSite___mproperty].val; /* _mproperty on <var_auto_super_init:CallSite> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__typing, 624);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var48 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var43,var46) on <var43:MMethod> */
var_other = var46;
{
var51 = ((short int(*)(val* self, val* p0))(var43->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var43, var_other); /* == on <var43:MMethod>*/
}
var52 = !var51;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
if (unlikely(!var49)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2029);
fatal_exit(1);
}
{
var53 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__compile_callsite]))(var_v, var_auto_super_init, var_args); /* compile_callsite on <var_v:AbstractCompilerVisitor>*/
}
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__next(var_12); /* Direct call array#ArrayIterator#next on <var_12:ArrayIterator[CallSite]>*/
}
} else {
goto BREAK_label54;
}
}
BREAK_label54: (void)0;
{
standard__array___standard__array__ArrayIterator___standard__abstract_collection__Iterator__finish(var_12); /* Direct call array#ArrayIterator#finish on <var_12:ArrayIterator[CallSite]>*/
}
} else {
}
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_call (self) on <self:AMethPropdef> */
var57 = self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_call].s; /* _auto_super_call on <self:AMethPropdef> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (var55){
{
var58 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var58) on <var58:nullable Object(RuntimeVariable)> */
var61 = var58->attrs[COLOR_nit__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var58:nullable Object(RuntimeVariable)> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 1784);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
/* <var59:MType> isa MClassType */
cltype63 = type_nit__MClassType.color;
idtype64 = type_nit__MClassType.id;
if(cltype63 >= var59->type->table_size) {
var62 = 0;
} else {
var62 = var59->type->type_table[cltype63] == idtype64;
}
if (unlikely(!var62)) {
var_class_name65 = var59 == NULL ? "null" : var59->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name65);
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2034);
fatal_exit(1);
}
{
var66 = nit___nit__SeparateCompilerVisitor___nit__abstract_compiler__AbstractCompilerVisitor__supercall(var_v, var_mpropdef, var59, var_arguments);
}
} else {
}
{
{ /* Inline model#MMethodDef#is_intern (var_mpropdef) on <var_mpropdef:MMethodDef> */
var69 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___is_intern].s; /* _is_intern on <var_mpropdef:MMethodDef> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
if (var67){
{
var70 = nit__abstract_compiler___AMethPropdef___compile_intern_to_c(self, var_v, var_mpropdef, var_arguments);
}
if (var70){
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline model#MMethodDef#is_extern (var_mpropdef) on <var_mpropdef:MMethodDef> */
var73 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___is_extern].s; /* _is_extern on <var_mpropdef:MMethodDef> */
var71 = var73;
RET_LABEL72:(void)0;
}
}
if (var71){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var76 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var74) on <var74:MProperty(MMethod)> */
var79 = var74->attrs[COLOR_nit__model__MMethod___is_init].s; /* _is_init on <var74:MProperty(MMethod)> */
var77 = var79;
RET_LABEL78:(void)0;
}
}
if (var77){
{
var80 = nit__light___AMethPropdef___compile_externinit_to_c(self, var_v, var_mpropdef, var_arguments);
}
if (var80){
goto RET_LABEL;
} else {
}
} else {
{
var81 = nit__light___AMethPropdef___compile_externmeth_to_c(self, var_v, var_mpropdef, var_arguments);
}
if (var81){
goto RET_LABEL;
} else {
}
}
} else {
}
}
{
{ /* Inline parser_nodes#AMethPropdef#n_block (self) on <self:AMethPropdef> */
var84 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var82 = var84;
RET_LABEL83:(void)0;
}
}
var_n_block = var82;
if (var_n_block == NULL) {
var85 = 0; /* is null */
} else {
var85 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_block,((val*)NULL)) on <var_n_block:nullable AExpr> */
var_other = ((val*)NULL);
{
var88 = ((short int(*)(val* self, val* p0))(var_n_block->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var_n_block, var_other); /* == on <var_n_block:nullable AExpr(AExpr)>*/
}
var89 = !var88;
var86 = var89;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
var85 = var86;
}
if (var85){
var_i90 = 0l;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var93 = var_mpropdef->attrs[COLOR_nit__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
if (var91 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2051);
fatal_exit(1);
} else {
var94 = nit___nit__MSignature___arity(var91);
}
var_95 = var94;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i90,var_95) on <var_i90:Int> */
/* Covariant cast for argument 0 (i) <var_95:Int> isa OTHER */
/* <var_95:Int> isa OTHER */
var98 = 1; /* easy <var_95:Int> isa OTHER*/
if (unlikely(!var98)) {
var_class_name101 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 534);
fatal_exit(1);
}
var102 = var_i90 < var_95;
var96 = var102;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
if (var96){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var105 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
if (var103 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2052);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var103) on <var103:nullable ASignature> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var108 = var103->attrs[COLOR_nit__parser_nodes__ASignature___n_params].val; /* _n_params on <var103:nullable ASignature> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1693);
fatal_exit(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
var109 = nit___nit__ANodes___standard__abstract_collection__SequenceRead___91d_93d(var106, var_i90);
}
{
{ /* Inline scope#AParam#variable (var109) on <var109:ANode(AParam)> */
var112 = var109->attrs[COLOR_nit__scope__AParam___variable].val; /* _variable on <var109:ANode(AParam)> */
var110 = var112;
RET_LABEL111:(void)0;
}
}
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2052);
fatal_exit(1);
}
var_variable = var110;
{
var113 = nit___nit__AbstractCompilerVisitor___variable(var_v, var_variable);
}
{
{ /* Inline kernel#Int#+ (var_i90,1l) on <var_i90:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var116 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var116)) {
var_class_name119 = type_standard__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name119);
PRINT_ERROR(" (%s:%d)\n", FILE_standard__kernel, 537);
fatal_exit(1);
}
var120 = var_i90 + 1l;
var114 = var120;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
}
{
var121 = standard___standard__Array___standard__abstract_collection__SequenceRead___91d_93d(var_arguments, var114);
}
{
nit___nit__AbstractCompilerVisitor___assign(var_v, var113, var121); /* Direct call abstract_compiler#AbstractCompilerVisitor#assign on <var_v:AbstractCompilerVisitor>*/
}
{
var122 = standard___standard__Int___Discrete__successor(var_i90, 1l);
}
var_i90 = var122;
} else {
goto BREAK_label123;
}
}
BREAK_label123: (void)0;
{
nit___nit__AbstractCompilerVisitor___stmt(var_v, var_n_block); /* Direct call abstract_compiler#AbstractCompilerVisitor#stmt on <var_v:AbstractCompilerVisitor>*/
}
goto RET_LABEL;
} else {
}
{
var124 = standard___standard__SequenceRead___Collection__first(var_arguments);
}
{
var125 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nit__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var124); /* class_name_string on <var_v:AbstractCompilerVisitor>*/
}
var_cn = var125;
if (unlikely(varonce==NULL)) {
var126 = NEW_standard__NativeArray(5l, &type_standard__NativeArray__standard__String);
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "PRINT_ERROR(\"Runtime error: uncompiled method `%s` called on `%s`. NOT YET IMPLEMENTED\", \"";
var130 = standard___standard__NativeString___to_s_with_length(var129, 90l);
var128 = var130;
varonce127 = var128;
}
((struct instance_standard__NativeArray*)var126)->values[0]=var128;
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "\", ";
var134 = standard___standard__NativeString___to_s_with_length(var133, 3l);
var132 = var134;
varonce131 = var132;
}
((struct instance_standard__NativeArray*)var126)->values[2]=var132;
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = ");";
var138 = standard___standard__NativeString___to_s_with_length(var137, 2l);
var136 = var138;
varonce135 = var136;
}
((struct instance_standard__NativeArray*)var126)->values[4]=var136;
} else {
var126 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var141 = var_mpropdef->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var141 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var139) on <var139:MProperty(MMethod)> */
var144 = var139->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var139:MProperty(MMethod)> */
if (unlikely(var144 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var142 = var144;
RET_LABEL143:(void)0;
}
}
{
var145 = standard___standard__Text___escape_to_c(var142);
}
((struct instance_standard__NativeArray*)var126)->values[1]=var145;
((struct instance_standard__NativeArray*)var126)->values[3]=var_cn;
{
var146 = ((val*(*)(val* self))(var126->class->vft[COLOR_standard__string__NativeArray__native_to_s]))(var126); /* native_to_s on <var126:NativeArray[String]>*/
}
varonce = var126;
{
nit___nit__AbstractCompilerVisitor___add(var_v, var146); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
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
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable AExpr */;
val* var11 /* : nullable AExpr */;
val* var_nblock /* var nblock: nullable AExpr */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other15 /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable MPropDef */;
val* var23 /* : nullable MPropDef */;
val* var24 /* : MProperty */;
val* var26 /* : MProperty */;
val* var27 /* : String */;
val* var29 /* : String */;
static val* varonce;
val* var30 /* : String */;
char* var31 /* : NativeString */;
val* var32 /* : FlatString */;
short int var33 /* : Bool */;
short int var_ /* var : Bool */;
val* var34 /* : nullable MPropDef */;
val* var36 /* : nullable MPropDef */;
val* var37 /* : MProperty */;
val* var39 /* : MProperty */;
val* var40 /* : String */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : NativeString */;
val* var46 /* : FlatString */;
short int var47 /* : Bool */;
short int var_48 /* var : Bool */;
val* var49 /* : nullable MPropDef */;
val* var51 /* : nullable MPropDef */;
val* var52 /* : MClassDef */;
val* var54 /* : MClassDef */;
val* var55 /* : MClass */;
val* var57 /* : MClass */;
val* var58 /* : String */;
val* var60 /* : String */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : NativeString */;
val* var64 /* : FlatString */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
int cltype;
int idtype;
short int var_68 /* var : Bool */;
val* var69 /* : ANodes[AExpr] */;
val* var71 /* : ANodes[AExpr] */;
long var72 /* : Int */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_inits (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_nit__auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <self:AMethPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1 == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,((val*)NULL)) on <var1:nullable Array[CallSite]> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable Array[CallSite](Array[CallSite])>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var = 0;
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_block (self) on <self:AMethPropdef> */
var11 = self->attrs[COLOR_nit__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_nblock = var9;
if (var_nblock == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_nblock,((val*)NULL)) on <var_nblock:nullable AExpr> */
var_other15 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_nblock,var_other15) on <var_nblock:nullable AExpr(AExpr)> */
var18 = var_nblock == var_other15;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var23 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (var21 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2070);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var21) on <var21:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var26 = var21->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var21:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var24) on <var24:MProperty(MMethod)> */
var29 = var24->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var24:MProperty(MMethod)> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (likely(varonce!=NULL)) {
var30 = varonce;
} else {
var31 = "==";
var32 = standard___standard__NativeString___to_s_with_length(var31, 2l);
var30 = var32;
varonce = var30;
}
{
var33 = ((short int(*)(val* self, val* p0))(var27->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var27, var30); /* == on <var27:String>*/
}
var_ = var33;
if (var33){
var20 = var_;
} else {
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var36 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2070);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mproperty (var34) on <var34:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var39 = var34->attrs[COLOR_nit__model__MPropDef___mproperty].val; /* _mproperty on <var34:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2212);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var37) on <var37:MProperty(MMethod)> */
var42 = var37->attrs[COLOR_nit__model__MProperty___name].val; /* _name on <var37:MProperty(MMethod)> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 1933);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "!=";
var46 = standard___standard__NativeString___to_s_with_length(var45, 2l);
var44 = var46;
varonce43 = var44;
}
{
var47 = ((short int(*)(val* self, val* p0))(var40->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var40, var44); /* == on <var40:String>*/
}
var20 = var47;
}
var_48 = var20;
if (var20){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var51 = self->attrs[COLOR_nit__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
if (var49 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__abstract_compiler, 2070);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var49) on <var49:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var54 = var49->attrs[COLOR_nit__model__MPropDef___mclassdef].val; /* _mclassdef on <var49:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 2209);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var52) on <var52:MClassDef> */
var57 = var52->attrs[COLOR_nit__model__MClassDef___mclass].val; /* _mclass on <var52:MClassDef> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 553);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline model#MClass#name (var55) on <var55:MClass> */
var60 = var55->attrs[COLOR_nit__model__MClass___name].val; /* _name on <var55:MClass> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__model, 362);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "Object";
var64 = standard___standard__NativeString___to_s_with_length(var63, 6l);
var62 = var64;
varonce61 = var62;
}
{
var65 = ((short int(*)(val* self, val* p0))(var58->class->vft[COLOR_standard__kernel__Object___61d_61d]))(var58, var62); /* == on <var58:String>*/
}
var19 = var65;
} else {
var19 = var_48;
}
if (var19){
var = 1;
goto RET_LABEL;
} else {
}
/* <var_nblock:nullable AExpr(AExpr)> isa ABlockExpr */
cltype = type_nit__ABlockExpr.color;
idtype = type_nit__ABlockExpr.id;
if(cltype >= var_nblock->type->table_size) {
var67 = 0;
} else {
var67 = var_nblock->type->type_table[cltype] == idtype;
}
var_68 = var67;
if (var67){
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (var_nblock) on <var_nblock:nullable AExpr(ABlockExpr)> */
var71 = var_nblock->attrs[COLOR_nit__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <var_nblock:nullable AExpr(ABlockExpr)> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nit__parser_nodes, 1758);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
var72 = nit___nit__ANodes___standard__abstract_collection__Collection__length(var69);
}
{
{ /* Inline kernel#Int#== (var72,0l) on <var72:Int> */
var75 = var72 == 0l;
var73 = var75;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var66 = var73;
} else {
var66 = var_68;
}
if (var66){
var = 1;
goto RET_LABEL;
} else {
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
