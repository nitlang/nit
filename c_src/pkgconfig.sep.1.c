#include "pkgconfig.sep.0.h"
/* method pkgconfig#ToolContext#pkgconfig_phase for (self: ToolContext): Phase */
val* pkgconfig__ToolContext__pkgconfig_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_pkgconfig__ToolContext___64dpkgconfig_phase].val; /* @pkgconfig_phase on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @pkgconfig_phase");
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/pkgconfig.nit", 24);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method pkgconfig#ToolContext#pkgconfig_phase for (self: Object): Phase */
val* VIRTUAL_pkgconfig__ToolContext__pkgconfig_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = pkgconfig__ToolContext__pkgconfig_phase(self);
var = var1;
RET_LABEL:;
return var;
}
/* method pkgconfig#ToolContext#pkgconfig_phase= for (self: ToolContext, Phase) */
void pkgconfig__ToolContext__pkgconfig_phase_61d(val* self, val* p0) {
self->attrs[COLOR_pkgconfig__ToolContext___64dpkgconfig_phase].val = p0; /* @pkgconfig_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method pkgconfig#ToolContext#pkgconfig_phase= for (self: Object, Phase) */
void VIRTUAL_pkgconfig__ToolContext__pkgconfig_phase_61d(val* self, val* p0) {
pkgconfig__ToolContext__pkgconfig_phase_61d(self, p0);
RET_LABEL:;
}
/* method pkgconfig#PkgconfigPhase#process_annotated_node for (self: PkgconfigPhase, ANode, AAnnotation) */
void pkgconfig__PkgconfigPhase__process_annotated_node(val* self, val* p0, val* p1) {
val* var_nmoduledecl /* var nmoduledecl: ANode */;
val* var_nat /* var nat: AAnnotation */;
val* var /* : AAtid */;
val* var1 /* : Token */;
val* var2 /* : String */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : NativeString */;
long var5 /* : Int */;
val* var6 /* : String */;
short int var7 /* : Bool */;
val* var8 /* : ToolContext */;
val* var9 /* : ModelBuilder */;
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
short int var10 /* : Bool */;
int cltype;
int idtype;
short int var11 /* : Bool */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : ANodes[AAtArg] */;
val* var_args /* var args: ANodes[AAtArg] */;
short int var18 /* : Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
val* var24 /* : Array[String] */;
val* var_pkgs /* var pkgs: Array[String] */;
val* var25 /* : Iterator[nullable Object] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_arg /* var arg: AAtArg */;
short int var28 /* : Bool */;
int cltype29;
int idtype30;
short int var31 /* : Bool */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var37 /* : AExpr */;
val* var_expr /* var expr: AExpr */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
short int var41 /* : Bool */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var_pkg /* var pkg: String */;
long var48 /* : Int */;
long var49 /* : Int */;
long var50 /* : Int */;
long var51 /* : Int */;
long var53 /* : Int */;
val* var54 /* : String */;
val* var55 /* : nullable ANode */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const char* var_class_name;
val* var_nmodule /* var nmodule: AModule */;
val* var59 /* : IProcess */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : NativeString */;
long var63 /* : Int */;
val* var64 /* : String */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : String */;
val* var70 /* : Array[String] */;
long var71 /* : Int */;
val* var72 /* : NativeArray[String] */;
val* var_proc_which /* var proc_which: IProcess */;
long var73 /* : Int */;
long var_status /* var status: Int */;
long var74 /* : Int */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : NativeString */;
long var82 /* : Int */;
val* var83 /* : String */;
val* var84 /* : Iterator[nullable Object] */;
short int var85 /* : Bool */;
val* var86 /* : nullable Object */;
val* var_pkg87 /* var pkg: String */;
val* var88 /* : Process */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : NativeString */;
long var92 /* : Int */;
val* var93 /* : String */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : String */;
val* var99 /* : Array[String] */;
long var100 /* : Int */;
val* var101 /* : NativeArray[String] */;
val* var_proc_exist /* var proc_exist: Process */;
long var102 /* : Int */;
long var103 /* : Int */;
short int var104 /* : Bool */;
short int var106 /* : Bool */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : NativeString */;
long var110 /* : Int */;
val* var111 /* : String */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : String */;
val* var117 /* : Array[Object] */;
long var118 /* : Int */;
val* var119 /* : NativeArray[Object] */;
val* var120 /* : String */;
long var121 /* : Int */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
short int var125 /* : Bool */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : NativeString */;
long var129 /* : Int */;
val* var130 /* : String */;
val* var131 /* : IProcess */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : NativeString */;
long var135 /* : Int */;
val* var136 /* : String */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : NativeString */;
long var140 /* : Int */;
val* var141 /* : String */;
val* var142 /* : Array[String] */;
long var143 /* : Int */;
val* var144 /* : NativeArray[String] */;
val* var_proc /* var proc: IProcess */;
val* var145 /* : String */;
val* var_compiler_opts /* var compiler_opts: String */;
val* var146 /* : String */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
long var150 /* : Int */;
val* var151 /* : String */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : NativeString */;
long var155 /* : Int */;
val* var156 /* : String */;
static val* varonce157;
val* var158 /* : String */;
char* var159 /* : NativeString */;
long var160 /* : Int */;
val* var161 /* : String */;
val* var162 /* : String */;
val* var163 /* : Array[Object] */;
long var164 /* : Int */;
val* var165 /* : NativeArray[Object] */;
val* var166 /* : String */;
val* var167 /* : IProcess */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : NativeString */;
long var171 /* : Int */;
val* var172 /* : String */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : NativeString */;
long var176 /* : Int */;
val* var177 /* : String */;
val* var178 /* : Array[String] */;
long var179 /* : Int */;
val* var180 /* : NativeArray[String] */;
val* var181 /* : String */;
val* var_linker_opts /* var linker_opts: String */;
val* var182 /* : String */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : NativeString */;
long var186 /* : Int */;
val* var187 /* : String */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
long var191 /* : Int */;
val* var192 /* : String */;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : NativeString */;
long var196 /* : Int */;
val* var197 /* : String */;
val* var198 /* : String */;
val* var199 /* : Array[Object] */;
long var200 /* : Int */;
val* var201 /* : NativeArray[Object] */;
val* var202 /* : String */;
var_nmoduledecl = p0;
var_nat = p1;
var = ((val* (*)(val*))(var_nat->class->vft[COLOR_parser_nodes__AAnnotation__n_atid]))(var_nat) /* n_atid on <var_nat:AAnnotation>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_parser_nodes__AAtid__n_id]))(var) /* n_id on <var:AAtid>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_parser_nodes__Token__text]))(var1) /* text on <var1:Token>*/;
if (varonce) {
var3 = varonce;
} else {
var4 = "pkgconfig";
var5 = 9;
var6 = string__NativeString__to_s_with_length(var4, var5);
var3 = var6;
varonce = var3;
}
var7 = ((short int (*)(val*, val*))(var2->class->vft[COLOR_kernel__Object___33d_61d]))(var2, var3) /* != on <var2:String>*/;
if (var7){
goto RET_LABEL;
} else {
}
var8 = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:PkgconfigPhase>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var8) /* modelbuilder on <var8:ToolContext>*/;
var_modelbuilder = var9;
/* <var_nmoduledecl:ANode> isa AModuledecl */
cltype = type_parser_nodes__AModuledecl.color;
idtype = type_parser_nodes__AModuledecl.id;
if(cltype >= var_nmoduledecl->type->table_size) {
var10 = 0;
} else {
var10 = var_nmoduledecl->type->type_table[cltype] == idtype;
}
var11 = !var10;
if (var11){
if (varonce12) {
var13 = varonce12;
} else {
var14 = "Syntax error: only the declaration of modules may use \"pkgconfig\".";
var15 = 66;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce12 = var13;
}
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_nat, var13) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var17 = ((val* (*)(val*))(var_nat->class->vft[COLOR_parser_nodes__AAnnotation__n_args]))(var_nat) /* n_args on <var_nat:AAnnotation>*/;
var_args = var17;
var18 = ((short int (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_args) /* is_empty on <var_args:ANodes[AAtArg]>*/;
if (var18){
if (varonce19) {
var20 = varonce19;
} else {
var21 = "Syntax error: \"pkgconfig\" expects at least one argument.";
var22 = 56;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_nat, var20) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var24 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var24->class->vft[COLOR_array__Array__init]))(var24) /* init on <var24:Array[String]>*/;
var_pkgs = var24;
var25 = ((val* (*)(val*))(var_args->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_args) /* iterator on <var_args:ANodes[AAtArg]>*/;
for(;;) {
var26 = ((short int (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var25) /* is_ok on <var25:Iterator[nullable Object]>*/;
if(!var26) break;
var27 = ((val* (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__item]))(var25) /* item on <var25:Iterator[nullable Object]>*/;
var_arg = var27;
/* <var_arg:AAtArg> isa AExprAtArg */
cltype29 = type_parser_nodes__AExprAtArg.color;
idtype30 = type_parser_nodes__AExprAtArg.id;
if(cltype29 >= var_arg->type->table_size) {
var28 = 0;
} else {
var28 = var_arg->type->type_table[cltype29] == idtype30;
}
var31 = !var28;
if (var31){
if (varonce32) {
var33 = varonce32;
} else {
var34 = "Syntax error: \"pkgconfig\" expects its arguments to be the name of the package as String literals.";
var35 = 97;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_nat, var33) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var37 = ((val* (*)(val*))(var_arg->class->vft[COLOR_parser_nodes__AExprAtArg__n_expr]))(var_arg) /* n_expr on <var_arg:AAtArg(AExprAtArg)>*/;
var_expr = var37;
/* <var_expr:AExpr> isa AStringFormExpr */
cltype39 = type_parser_nodes__AStringFormExpr.color;
idtype40 = type_parser_nodes__AStringFormExpr.id;
if(cltype39 >= var_expr->type->table_size) {
var38 = 0;
} else {
var38 = var_expr->type->type_table[cltype39] == idtype40;
}
var41 = !var38;
if (var41){
if (varonce42) {
var43 = varonce42;
} else {
var44 = "Syntax error: \"pkgconfig\" expects its arguments to be the name of the package as String literals.";
var45 = 97;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_nat, var43) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var47 = ((val* (*)(val*))(var_expr->class->vft[COLOR_modelize_property__Prod__collect_text]))(var_expr) /* collect_text on <var_expr:AExpr(AStringFormExpr)>*/;
var_pkg = var47;
var48 = 1;
var49 = ((long (*)(val*))(var_pkg->class->vft[COLOR_abstract_collection__Collection__length]))(var_pkg) /* length on <var_pkg:String>*/;
var50 = 2;
{ /* Inline kernel#Int#- (var49,var50) */
var53 = var49 - var50;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
var54 = ((val* (*)(val*, long, long))(var_pkg->class->vft[COLOR_string__AbstractString__substring]))(var_pkg, var48, var51) /* substring on <var_pkg:String>*/;
var_pkg = var54;
((void (*)(val*, val*))(var_pkgs->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_pkgs, var_pkg) /* add on <var_pkgs:Array[String]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var25->class->vft[COLOR_abstract_collection__Iterator__next]))(var25) /* next on <var25:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var55 = ((val* (*)(val*))(var_nmoduledecl->class->vft[COLOR_parser_nodes__ANode__parent]))(var_nmoduledecl) /* parent on <var_nmoduledecl:ANode(AModuledecl)>*/;
/* <var55:nullable ANode> isa AModule */
cltype57 = type_parser_nodes__AModule.color;
idtype58 = type_parser_nodes__AModule.id;
if(var55 == NULL) {
var56 = 0;
} else {
if(cltype57 >= var55->type->table_size) {
var56 = 0;
} else {
var56 = var55->type->type_table[cltype57] == idtype58;
}
}
if (!var56) {
var_class_name = var55 == NULL ? "null" : var55->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/common_ffi/pkgconfig.nit", 69);
show_backtrace(1);
}
var_nmodule = var55;
var59 = NEW_exec__IProcess(&type_exec__IProcess);
if (varonce60) {
var61 = varonce60;
} else {
var62 = "which";
var63 = 5;
var64 = string__NativeString__to_s_with_length(var62, var63);
var61 = var64;
varonce60 = var61;
}
if (varonce65) {
var66 = varonce65;
} else {
var67 = "pkg-config";
var68 = 10;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
var70 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var70 = array_instance Array[String] */
var71 = 1;
var72 = NEW_array__NativeArray(var71, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var72)->values[0] = (val*) var66;
((void (*)(val*, val*, long))(var70->class->vft[COLOR_array__Array__with_native]))(var70, var72, var71) /* with_native on <var70:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var59->class->vft[COLOR_exec__IProcess__init]))(var59, var61, var70) /* init on <var59:IProcess>*/;
var_proc_which = var59;
((void (*)(val*))(var_proc_which->class->vft[COLOR_exec__Process__wait]))(var_proc_which) /* wait on <var_proc_which:IProcess>*/;
var73 = ((long (*)(val*))(var_proc_which->class->vft[COLOR_exec__Process__status]))(var_proc_which) /* status on <var_proc_which:IProcess>*/;
var_status = var73;
var74 = 0;
{ /* Inline kernel#Int#!= (var_status,var74) */
var77 = var_status == var74;
var78 = !var77;
var75 = var78;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
if (var75){
if (varonce79) {
var80 = varonce79;
} else {
var81 = "Error: program pkg-config not found, make sure it is installed.";
var82 = 63;
var83 = string__NativeString__to_s_with_length(var81, var82);
var80 = var83;
varonce79 = var80;
}
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_nat, var80) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var84 = ((val* (*)(val*))(var_pkgs->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_pkgs) /* iterator on <var_pkgs:Array[String]>*/;
for(;;) {
var85 = ((short int (*)(val*))(var84->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var84) /* is_ok on <var84:Iterator[nullable Object]>*/;
if(!var85) break;
var86 = ((val* (*)(val*))(var84->class->vft[COLOR_abstract_collection__Iterator__item]))(var84) /* item on <var84:Iterator[nullable Object]>*/;
var_pkg87 = var86;
var88 = NEW_exec__Process(&type_exec__Process);
if (varonce89) {
var90 = varonce89;
} else {
var91 = "pkg-config";
var92 = 10;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
if (varonce94) {
var95 = varonce94;
} else {
var96 = "--exists";
var97 = 8;
var98 = string__NativeString__to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
var99 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var99 = array_instance Array[String] */
var100 = 2;
var101 = NEW_array__NativeArray(var100, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var101)->values[0] = (val*) var95;
((struct instance_array__NativeArray*)var101)->values[1] = (val*) var_pkg87;
((void (*)(val*, val*, long))(var99->class->vft[COLOR_array__Array__with_native]))(var99, var101, var100) /* with_native on <var99:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var88->class->vft[COLOR_exec__Process__init]))(var88, var90, var99) /* init on <var88:Process>*/;
var_proc_exist = var88;
((void (*)(val*))(var_proc_exist->class->vft[COLOR_exec__Process__wait]))(var_proc_exist) /* wait on <var_proc_exist:Process>*/;
var102 = ((long (*)(val*))(var_proc_exist->class->vft[COLOR_exec__Process__status]))(var_proc_exist) /* status on <var_proc_exist:Process>*/;
var_status = var102;
var103 = 1;
{ /* Inline kernel#Int#== (var_status,var103) */
var106 = var_status == var103;
var104 = var106;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
if (var104){
if (varonce107) {
var108 = varonce107;
} else {
var109 = "Error: package \"";
var110 = 16;
var111 = string__NativeString__to_s_with_length(var109, var110);
var108 = var111;
varonce107 = var108;
}
if (varonce112) {
var113 = varonce112;
} else {
var114 = "\" unknown by pkg-config, make sure the development package is be installed.";
var115 = 75;
var116 = string__NativeString__to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
var117 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var117 = array_instance Array[Object] */
var118 = 3;
var119 = NEW_array__NativeArray(var118, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var119)->values[0] = (val*) var108;
((struct instance_array__NativeArray*)var119)->values[1] = (val*) var_pkg87;
((struct instance_array__NativeArray*)var119)->values[2] = (val*) var113;
((void (*)(val*, val*, long))(var117->class->vft[COLOR_array__Array__with_native]))(var117, var119, var118) /* with_native on <var117:Array[Object]>*/;
}
var120 = ((val* (*)(val*))(var117->class->vft[COLOR_string__Object__to_s]))(var117) /* to_s on <var117:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_nat, var120) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
var121 = 0;
{ /* Inline kernel#Int#!= (var_status,var121) */
var124 = var_status == var121;
var125 = !var124;
var122 = var125;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
if (var122){
if (varonce126) {
var127 = varonce126;
} else {
var128 = "Error: something went wrong calling pkg-config, make sure it is correctly installed.";
var129 = 84;
var130 = string__NativeString__to_s_with_length(var128, var129);
var127 = var130;
varonce126 = var127;
}
((void (*)(val*, val*, val*))(var_modelbuilder->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var_modelbuilder, var_nat, var127) /* error on <var_modelbuilder:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
}
var131 = NEW_exec__IProcess(&type_exec__IProcess);
if (varonce132) {
var133 = varonce132;
} else {
var134 = "pkg-config";
var135 = 10;
var136 = string__NativeString__to_s_with_length(var134, var135);
var133 = var136;
varonce132 = var133;
}
if (varonce137) {
var138 = varonce137;
} else {
var139 = "--cflags";
var140 = 8;
var141 = string__NativeString__to_s_with_length(var139, var140);
var138 = var141;
varonce137 = var138;
}
var142 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var142 = array_instance Array[String] */
var143 = 2;
var144 = NEW_array__NativeArray(var143, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var144)->values[0] = (val*) var138;
((struct instance_array__NativeArray*)var144)->values[1] = (val*) var_pkg87;
((void (*)(val*, val*, long))(var142->class->vft[COLOR_array__Array__with_native]))(var142, var144, var143) /* with_native on <var142:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var131->class->vft[COLOR_exec__IProcess__init]))(var131, var133, var142) /* init on <var131:IProcess>*/;
var_proc = var131;
var145 = ((val* (*)(val*))(var_proc->class->vft[COLOR_stream__IStream__read_all]))(var_proc) /* read_all on <var_proc:IProcess>*/;
var_compiler_opts = var145;
var146 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_c__AModule__c_compiler_options]))(var_nmodule) /* c_compiler_options on <var_nmodule:AModule>*/;
if (varonce147) {
var148 = varonce147;
} else {
var149 = " ";
var150 = 1;
var151 = string__NativeString__to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
if (varonce152) {
var153 = varonce152;
} else {
var154 = "\n";
var155 = 1;
var156 = string__NativeString__to_s_with_length(var154, var155);
var153 = var156;
varonce152 = var153;
}
if (varonce157) {
var158 = varonce157;
} else {
var159 = " ";
var160 = 1;
var161 = string__NativeString__to_s_with_length(var159, var160);
var158 = var161;
varonce157 = var158;
}
var162 = ((val* (*)(val*, val*, val*))(var_compiler_opts->class->vft[COLOR_string_search__String__replace]))(var_compiler_opts, var153, var158) /* replace on <var_compiler_opts:String>*/;
var163 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var163 = array_instance Array[Object] */
var164 = 3;
var165 = NEW_array__NativeArray(var164, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var165)->values[0] = (val*) var146;
((struct instance_array__NativeArray*)var165)->values[1] = (val*) var148;
((struct instance_array__NativeArray*)var165)->values[2] = (val*) var162;
((void (*)(val*, val*, long))(var163->class->vft[COLOR_array__Array__with_native]))(var163, var165, var164) /* with_native on <var163:Array[Object]>*/;
}
var166 = ((val* (*)(val*))(var163->class->vft[COLOR_string__Object__to_s]))(var163) /* to_s on <var163:Array[Object]>*/;
((void (*)(val*, val*))(var_nmodule->class->vft[COLOR_c__AModule__c_compiler_options_61d]))(var_nmodule, var166) /* c_compiler_options= on <var_nmodule:AModule>*/;
var167 = NEW_exec__IProcess(&type_exec__IProcess);
if (varonce168) {
var169 = varonce168;
} else {
var170 = "pkg-config";
var171 = 10;
var172 = string__NativeString__to_s_with_length(var170, var171);
var169 = var172;
varonce168 = var169;
}
if (varonce173) {
var174 = varonce173;
} else {
var175 = "--libs";
var176 = 6;
var177 = string__NativeString__to_s_with_length(var175, var176);
var174 = var177;
varonce173 = var174;
}
var178 = NEW_array__Array(&type_array__Arraystring__String);
{ /* var178 = array_instance Array[String] */
var179 = 2;
var180 = NEW_array__NativeArray(var179, &type_array__NativeArraystring__String);
((struct instance_array__NativeArray*)var180)->values[0] = (val*) var174;
((struct instance_array__NativeArray*)var180)->values[1] = (val*) var_pkg87;
((void (*)(val*, val*, long))(var178->class->vft[COLOR_array__Array__with_native]))(var178, var180, var179) /* with_native on <var178:Array[String]>*/;
}
((void (*)(val*, val*, val*))(var167->class->vft[COLOR_exec__IProcess__init]))(var167, var169, var178) /* init on <var167:IProcess>*/;
var_proc = var167;
var181 = ((val* (*)(val*))(var_proc->class->vft[COLOR_stream__IStream__read_all]))(var_proc) /* read_all on <var_proc:IProcess>*/;
var_linker_opts = var181;
var182 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_c__AModule__c_linker_options]))(var_nmodule) /* c_linker_options on <var_nmodule:AModule>*/;
if (varonce183) {
var184 = varonce183;
} else {
var185 = " ";
var186 = 1;
var187 = string__NativeString__to_s_with_length(var185, var186);
var184 = var187;
varonce183 = var184;
}
if (varonce188) {
var189 = varonce188;
} else {
var190 = "\n";
var191 = 1;
var192 = string__NativeString__to_s_with_length(var190, var191);
var189 = var192;
varonce188 = var189;
}
if (varonce193) {
var194 = varonce193;
} else {
var195 = " ";
var196 = 1;
var197 = string__NativeString__to_s_with_length(var195, var196);
var194 = var197;
varonce193 = var194;
}
var198 = ((val* (*)(val*, val*, val*))(var_linker_opts->class->vft[COLOR_string_search__String__replace]))(var_linker_opts, var189, var194) /* replace on <var_linker_opts:String>*/;
var199 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var199 = array_instance Array[Object] */
var200 = 3;
var201 = NEW_array__NativeArray(var200, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var201)->values[0] = (val*) var182;
((struct instance_array__NativeArray*)var201)->values[1] = (val*) var184;
((struct instance_array__NativeArray*)var201)->values[2] = (val*) var198;
((void (*)(val*, val*, long))(var199->class->vft[COLOR_array__Array__with_native]))(var199, var201, var200) /* with_native on <var199:Array[Object]>*/;
}
var202 = ((val* (*)(val*))(var199->class->vft[COLOR_string__Object__to_s]))(var199) /* to_s on <var199:Array[Object]>*/;
((void (*)(val*, val*))(var_nmodule->class->vft[COLOR_c__AModule__c_linker_options_61d]))(var_nmodule, var202) /* c_linker_options= on <var_nmodule:AModule>*/;
CONTINUE_label203: (void)0;
((void (*)(val*))(var84->class->vft[COLOR_abstract_collection__Iterator__next]))(var84) /* next on <var84:Iterator[nullable Object]>*/;
}
BREAK_label203: (void)0;
RET_LABEL:;
}
/* method pkgconfig#PkgconfigPhase#process_annotated_node for (self: Object, ANode, AAnnotation) */
void VIRTUAL_pkgconfig__PkgconfigPhase__process_annotated_node(val* self, val* p0, val* p1) {
pkgconfig__PkgconfigPhase__process_annotated_node(self, p0, p1);
RET_LABEL:;
}
