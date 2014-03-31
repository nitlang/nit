#include "modelize_class.sep.0.h"
/* method modelize_class#ToolContext#modelize_class_phase for (self: ToolContext): Phase */
val* modelize_class__ToolContext__modelize_class_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = self->attrs[COLOR_modelize_class__ToolContext___64dmodelize_class_phase].val; /* @modelize_class_phase on <self:ToolContext> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @modelize_class_phase");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 23);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#ToolContext#modelize_class_phase for (self: Object): Phase */
val* VIRTUAL_modelize_class__ToolContext__modelize_class_phase(val* self) {
val* var /* : Phase */;
val* var1 /* : Phase */;
var1 = modelize_class__ToolContext__modelize_class_phase(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#ToolContext#modelize_class_phase= for (self: ToolContext, Phase) */
void modelize_class__ToolContext__modelize_class_phase_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_class__ToolContext___64dmodelize_class_phase].val = p0; /* @modelize_class_phase on <self:ToolContext> */
RET_LABEL:;
}
/* method modelize_class#ToolContext#modelize_class_phase= for (self: Object, Phase) */
void VIRTUAL_modelize_class__ToolContext__modelize_class_phase_61d(val* self, val* p0) {
modelize_class__ToolContext__modelize_class_phase_61d(self, p0);
RET_LABEL:;
}
/* method modelize_class#ModelizeClassPhase#process_nmodule for (self: ModelizeClassPhase, AModule) */
void modelize_class__ModelizeClassPhase__process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ToolContext */;
val* var1 /* : ModelBuilder */;
var_nmodule = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_phase__Phase__toolcontext]))(self) /* toolcontext on <self:ModelizeClassPhase>*/;
var1 = ((val* (*)(val*))(var->class->vft[COLOR_modelbuilder__ToolContext__modelbuilder]))(var) /* modelbuilder on <var:ToolContext>*/;
((void (*)(val*, val*))(var1->class->vft[COLOR_modelize_class__ModelBuilder__build_classes]))(var1, var_nmodule) /* build_classes on <var1:ModelBuilder>*/;
RET_LABEL:;
}
/* method modelize_class#ModelizeClassPhase#process_nmodule for (self: Object, AModule) */
void VIRTUAL_modelize_class__ModelizeClassPhase__process_nmodule(val* self, val* p0) {
modelize_class__ModelizeClassPhase__process_nmodule(self, p0);
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_a_mclass for (self: ModelBuilder, AModule, AClassdef) */
void modelize_class__ModelBuilder__build_a_mclass(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
long var1 /* : Int */;
long var_arity /* var arity: Int */;
short int var2 /* : Bool */;
int cltype;
int idtype;
val* var3 /* : nullable TClassid */;
val* var4 /* : String */;
val* var_name /* var name: String */;
val* var5 /* : AClasskind */;
val* var_nkind /* var nkind: nullable AClasskind */;
val* var6 /* : MClassKind */;
val* var_mkind /* var mkind: MClassKind */;
val* var7 /* : AVisibility */;
val* var_nvisibility /* var nvisibility: nullable AVisibility */;
val* var8 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: nullable MVisibility */;
val* var9 /* : ANodes[AFormaldef] */;
long var10 /* : Int */;
val* var11 /* : MVisibility */;
short int var12 /* : Bool */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
val* var17 /* : MVisibility */;
short int var18 /* : Bool */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
short int var24 /* : Bool */;
int cltype25;
int idtype26;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : null */;
val* var33 /* : MClassKind */;
val* var34 /* : null */;
val* var35 /* : MVisibility */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : String */;
val* var44 /* : null */;
val* var45 /* : MClassKind */;
val* var46 /* : null */;
val* var47 /* : MVisibility */;
val* var48 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var49 /* : null */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
short int var_ /* var : Bool */;
val* var55 /* : nullable TKwredef */;
val* var56 /* : null */;
short int var57 /* : Bool */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : NativeString */;
long var61 /* : Int */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : NativeString */;
long var66 /* : Int */;
val* var67 /* : String */;
val* var68 /* : Array[Object] */;
long var69 /* : Int */;
val* var70 /* : NativeArray[Object] */;
val* var71 /* : String */;
val* var72 /* : MClass */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
short int var_77 /* var : Bool */;
val* var78 /* : Map[MClass, AClassdef] */;
short int var79 /* : Bool */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : NativeString */;
long var83 /* : Int */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : NativeString */;
long var88 /* : Int */;
val* var89 /* : String */;
val* var90 /* : Map[MClass, AClassdef] */;
val* var91 /* : nullable Object */;
val* var92 /* : Location */;
long var93 /* : Int */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : NativeString */;
long var97 /* : Int */;
val* var98 /* : String */;
val* var99 /* : Array[Object] */;
long var100 /* : Int */;
val* var101 /* : NativeArray[Object] */;
val* var102 /* : Object */;
val* var103 /* : String */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
short int var_108 /* var : Bool */;
val* var109 /* : nullable TKwredef */;
val* var110 /* : null */;
short int var111 /* : Bool */;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : NativeString */;
long var115 /* : Int */;
val* var116 /* : String */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : NativeString */;
long var120 /* : Int */;
val* var121 /* : String */;
val* var122 /* : Array[Object] */;
long var123 /* : Int */;
val* var124 /* : NativeArray[Object] */;
val* var125 /* : String */;
long var126 /* : Int */;
short int var127 /* : Bool */;
short int var129 /* : Bool */;
short int var130 /* : Bool */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : NativeString */;
long var134 /* : Int */;
val* var135 /* : String */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : NativeString */;
long var139 /* : Int */;
val* var140 /* : String */;
long var141 /* : Int */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : NativeString */;
long var145 /* : Int */;
val* var146 /* : String */;
val* var147 /* : Array[Object] */;
long var148 /* : Int */;
val* var149 /* : NativeArray[Object] */;
val* var150 /* : Object */;
val* var151 /* : Object */;
val* var152 /* : String */;
short int var153 /* : Bool */;
short int var154 /* : Bool */;
val* var155 /* : null */;
short int var156 /* : Bool */;
short int var_157 /* var : Bool */;
val* var158 /* : MClassKind */;
short int var159 /* : Bool */;
short int var_160 /* var : Bool */;
val* var161 /* : MClassKind */;
short int var162 /* : Bool */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : NativeString */;
long var166 /* : Int */;
val* var167 /* : String */;
val* var168 /* : MClassKind */;
static val* varonce169;
val* var170 /* : String */;
char* var171 /* : NativeString */;
long var172 /* : Int */;
val* var173 /* : String */;
val* var174 /* : Array[Object] */;
long var175 /* : Int */;
val* var176 /* : NativeArray[Object] */;
val* var177 /* : String */;
short int var178 /* : Bool */;
short int var179 /* : Bool */;
val* var180 /* : null */;
short int var181 /* : Bool */;
short int var_182 /* var : Bool */;
val* var183 /* : MVisibility */;
short int var184 /* : Bool */;
short int var_185 /* var : Bool */;
val* var186 /* : MVisibility */;
short int var187 /* : Bool */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : NativeString */;
long var191 /* : Int */;
val* var192 /* : String */;
val* var193 /* : MVisibility */;
static val* varonce194;
val* var195 /* : String */;
char* var196 /* : NativeString */;
long var197 /* : Int */;
val* var198 /* : String */;
val* var199 /* : Array[Object] */;
long var200 /* : Int */;
val* var201 /* : NativeArray[Object] */;
val* var202 /* : String */;
val* var203 /* : Map[MClass, AClassdef] */;
var_nmodule = p0;
var_nclassdef = p1;
var = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_nmodule) /* mmodule on <var_nmodule:AModule>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 39);
show_backtrace(1);
}
var_mmodule = var;
var1 = 0;
var_arity = var1;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_parser_nodes__AStdClassdef.color;
idtype = type_parser_nodes__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var2 = 0;
} else {
var2 = var_nclassdef->type->type_table[cltype] == idtype;
}
if (var2){
var3 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_id]))(var_nclassdef) /* n_id on <var_nclassdef:AClassdef(AStdClassdef)>*/;
if (var3 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 48);
show_backtrace(1);
} else {
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_parser_nodes__Token__text]))(var3) /* text on <var3:nullable TClassid>*/;
}
var_name = var4;
var5 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_classkind]))(var_nclassdef) /* n_classkind on <var_nclassdef:AClassdef(AStdClassdef)>*/;
var_nkind = var5;
var6 = ((val* (*)(val*))(var_nkind->class->vft[COLOR_modelize_class__AClasskind__mkind]))(var_nkind) /* mkind on <var_nkind:nullable AClasskind(AClasskind)>*/;
var_mkind = var6;
var7 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_visibility]))(var_nclassdef) /* n_visibility on <var_nclassdef:AClassdef(AStdClassdef)>*/;
var_nvisibility = var7;
var8 = ((val* (*)(val*))(var_nvisibility->class->vft[COLOR_modelbuilder__AVisibility__mvisibility]))(var_nvisibility) /* mvisibility on <var_nvisibility:nullable AVisibility(AVisibility)>*/;
var_mvisibility = var8;
var9 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_formaldefs]))(var_nclassdef) /* n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)>*/;
var10 = ((long (*)(val*))(var9->class->vft[COLOR_abstract_collection__Collection__length]))(var9) /* length on <var9:ANodes[AFormaldef]>*/;
var_arity = var10;
var11 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__protected_visibility]))(self) /* protected_visibility on <self:ModelBuilder>*/;
var12 = ((short int (*)(val*, val*))(var_mvisibility->class->vft[COLOR_kernel__Object___61d_61d]))(var_mvisibility, var11) /* == on <var_mvisibility:nullable MVisibility(MVisibility)>*/;
if (var12){
if (varonce) {
var13 = varonce;
} else {
var14 = "Error: only properties can be protected.";
var15 = 40;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_nvisibility, var13) /* error on <self:ModelBuilder>*/;
goto RET_LABEL;
} else {
var17 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__intrude_visibility]))(self) /* intrude_visibility on <self:ModelBuilder>*/;
var18 = ((short int (*)(val*, val*))(var_mvisibility->class->vft[COLOR_kernel__Object___61d_61d]))(var_mvisibility, var17) /* == on <var_mvisibility:nullable MVisibility(MVisibility)>*/;
if (var18){
if (varonce19) {
var20 = varonce19;
} else {
var21 = "Error: intrude is not a legal visibility for classes.";
var22 = 53;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce19 = var20;
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_nvisibility, var20) /* error on <self:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
}
} else {
/* <var_nclassdef:AClassdef> isa ATopClassdef */
cltype25 = type_parser_nodes__ATopClassdef.color;
idtype26 = type_parser_nodes__ATopClassdef.id;
if(cltype25 >= var_nclassdef->type->table_size) {
var24 = 0;
} else {
var24 = var_nclassdef->type->type_table[cltype25] == idtype26;
}
if (var24){
if (varonce27) {
var28 = varonce27;
} else {
var29 = "Object";
var30 = 6;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var_name = var28;
var32 = NULL;
var_nkind = var32;
var33 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__interface_kind]))(self) /* interface_kind on <self:ModelBuilder>*/;
var_mkind = var33;
var34 = NULL;
var_nvisibility = var34;
var35 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__public_visibility]))(self) /* public_visibility on <self:ModelBuilder>*/;
var_mvisibility = var35;
} else {
/* <var_nclassdef:AClassdef> isa AMainClassdef */
cltype37 = type_parser_nodes__AMainClassdef.color;
idtype38 = type_parser_nodes__AMainClassdef.id;
if(cltype37 >= var_nclassdef->type->table_size) {
var36 = 0;
} else {
var36 = var_nclassdef->type->type_table[cltype37] == idtype38;
}
if (var36){
if (varonce39) {
var40 = varonce39;
} else {
var41 = "Sys";
var42 = 3;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce39 = var40;
}
var_name = var40;
var44 = NULL;
var_nkind = var44;
var45 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__concrete_kind]))(self) /* concrete_kind on <self:ModelBuilder>*/;
var_mkind = var45;
var46 = NULL;
var_nvisibility = var46;
var47 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__public_visibility]))(self) /* public_visibility on <self:ModelBuilder>*/;
var_mvisibility = var47;
} else {
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 74);
show_backtrace(1);
}
}
}
var48 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mclass_by_name]))(self, var_nclassdef, var_mmodule, var_name) /* try_get_mclass_by_name on <self:ModelBuilder>*/;
var_mclass = var48;
var49 = NULL;
if (var_mclass == NULL) {
var50 = 1; /* is null */
} else {
var50 = 0; /* arg is null but recv is not */
}
if (var50){
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype53 = type_parser_nodes__AStdClassdef.color;
idtype54 = type_parser_nodes__AStdClassdef.id;
if(cltype53 >= var_nclassdef->type->table_size) {
var52 = 0;
} else {
var52 = var_nclassdef->type->type_table[cltype53] == idtype54;
}
var_ = var52;
if (var52){
var55 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_kwredef]))(var_nclassdef) /* n_kwredef on <var_nclassdef:AClassdef(AStdClassdef)>*/;
var56 = NULL;
if (var55 == NULL) {
var57 = 0; /* is null */
} else {
var57 = 1; /* arg is null and recv is not */
}
var51 = var57;
} else {
var51 = var_;
}
if (var51){
if (varonce58) {
var59 = varonce58;
} else {
var60 = "Redef error: No imported class ";
var61 = 31;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
if (varonce63) {
var64 = varonce63;
} else {
var65 = " to refine.";
var66 = 11;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
var68 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var68 = array_instance Array[Object] */
var69 = 3;
var70 = NEW_array__NativeArray(var69, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var70)->values[0] = (val*) var59;
((struct instance_array__NativeArray*)var70)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var70)->values[2] = (val*) var64;
((void (*)(val*, val*, long))(var68->class->vft[COLOR_array__Array__with_native]))(var68, var70, var69) /* with_native on <var68:Array[Object]>*/;
}
var71 = ((val* (*)(val*))(var68->class->vft[COLOR_string__Object__to_s]))(var68) /* to_s on <var68:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_nclassdef, var71) /* error on <self:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var72 = NEW_model__MClass(&type_model__MClass);
((void (*)(val*, val*, val*, long, val*, val*))(var72->class->vft[COLOR_model__MClass__init]))(var72, var_mmodule, var_name, var_arity, var_mkind, var_mvisibility) /* init on <var72:MClass>*/;
var_mclass = var72;
} else {
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype75 = type_parser_nodes__AStdClassdef.color;
idtype76 = type_parser_nodes__AStdClassdef.id;
if(cltype75 >= var_nclassdef->type->table_size) {
var74 = 0;
} else {
var74 = var_nclassdef->type->type_table[cltype75] == idtype76;
}
var_77 = var74;
if (var74){
var78 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_modelize_class__AModule__mclass2nclassdef]))(var_nmodule) /* mclass2nclassdef on <var_nmodule:AModule>*/;
var79 = ((short int (*)(val*, val*))(var78->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var78, var_mclass) /* has_key on <var78:Map[MClass, AClassdef]>*/;
var73 = var79;
} else {
var73 = var_77;
}
if (var73){
if (varonce80) {
var81 = varonce80;
} else {
var82 = "Error: A class ";
var83 = 15;
var84 = string__NativeString__to_s_with_length(var82, var83);
var81 = var84;
varonce80 = var81;
}
if (varonce85) {
var86 = varonce85;
} else {
var87 = " is already defined at line ";
var88 = 28;
var89 = string__NativeString__to_s_with_length(var87, var88);
var86 = var89;
varonce85 = var86;
}
var90 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_modelize_class__AModule__mclass2nclassdef]))(var_nmodule) /* mclass2nclassdef on <var_nmodule:AModule>*/;
var91 = ((val* (*)(val*, val*))(var90->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var90, var_mclass) /* [] on <var90:Map[MClass, AClassdef]>*/;
var92 = ((val* (*)(val*))(var91->class->vft[COLOR_parser_nodes__ANode__location]))(var91) /* location on <var91:nullable Object(AClassdef)>*/;
var93 = ((long (*)(val*))(var92->class->vft[COLOR_location__Location__line_start]))(var92) /* line_start on <var92:Location>*/;
if (varonce94) {
var95 = varonce94;
} else {
var96 = ".";
var97 = 1;
var98 = string__NativeString__to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
var99 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var99 = array_instance Array[Object] */
var100 = 5;
var101 = NEW_array__NativeArray(var100, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var101)->values[0] = (val*) var81;
((struct instance_array__NativeArray*)var101)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var101)->values[2] = (val*) var86;
var102 = BOX_kernel__Int(var93); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var101)->values[3] = (val*) var102;
((struct instance_array__NativeArray*)var101)->values[4] = (val*) var95;
((void (*)(val*, val*, long))(var99->class->vft[COLOR_array__Array__with_native]))(var99, var101, var100) /* with_native on <var99:Array[Object]>*/;
}
var103 = ((val* (*)(val*))(var99->class->vft[COLOR_string__Object__to_s]))(var99) /* to_s on <var99:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_nclassdef, var103) /* error on <self:ModelBuilder>*/;
goto RET_LABEL;
} else {
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype106 = type_parser_nodes__AStdClassdef.color;
idtype107 = type_parser_nodes__AStdClassdef.id;
if(cltype106 >= var_nclassdef->type->table_size) {
var105 = 0;
} else {
var105 = var_nclassdef->type->type_table[cltype106] == idtype107;
}
var_108 = var105;
if (var105){
var109 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_kwredef]))(var_nclassdef) /* n_kwredef on <var_nclassdef:AClassdef(AStdClassdef)>*/;
var110 = NULL;
if (var109 == NULL) {
var111 = 1; /* is null */
} else {
var111 = 0; /* arg is null but recv is not */
}
var104 = var111;
} else {
var104 = var_108;
}
if (var104){
if (varonce112) {
var113 = varonce112;
} else {
var114 = "Redef error: ";
var115 = 13;
var116 = string__NativeString__to_s_with_length(var114, var115);
var113 = var116;
varonce112 = var113;
}
if (varonce117) {
var118 = varonce117;
} else {
var119 = " is an imported class. Add the redef keyword to refine it.";
var120 = 58;
var121 = string__NativeString__to_s_with_length(var119, var120);
var118 = var121;
varonce117 = var118;
}
var122 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var122 = array_instance Array[Object] */
var123 = 3;
var124 = NEW_array__NativeArray(var123, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var124)->values[0] = (val*) var113;
((struct instance_array__NativeArray*)var124)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var124)->values[2] = (val*) var118;
((void (*)(val*, val*, long))(var122->class->vft[COLOR_array__Array__with_native]))(var122, var124, var123) /* with_native on <var122:Array[Object]>*/;
}
var125 = ((val* (*)(val*))(var122->class->vft[COLOR_string__Object__to_s]))(var122) /* to_s on <var122:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_nclassdef, var125) /* error on <self:ModelBuilder>*/;
goto RET_LABEL;
} else {
var126 = ((long (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__arity]))(var_mclass) /* arity on <var_mclass:nullable MClass(MClass)>*/;
{ /* Inline kernel#Int#!= (var126,var_arity) */
var129 = var126 == var_arity;
var130 = !var129;
var127 = var130;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
if (var127){
if (varonce131) {
var132 = varonce131;
} else {
var133 = "Redef error: Formal parameter arity missmatch; got ";
var134 = 51;
var135 = string__NativeString__to_s_with_length(var133, var134);
var132 = var135;
varonce131 = var132;
}
if (varonce136) {
var137 = varonce136;
} else {
var138 = ", expected ";
var139 = 11;
var140 = string__NativeString__to_s_with_length(var138, var139);
var137 = var140;
varonce136 = var137;
}
var141 = ((long (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__arity]))(var_mclass) /* arity on <var_mclass:nullable MClass(MClass)>*/;
if (varonce142) {
var143 = varonce142;
} else {
var144 = ".";
var145 = 1;
var146 = string__NativeString__to_s_with_length(var144, var145);
var143 = var146;
varonce142 = var143;
}
var147 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var147 = array_instance Array[Object] */
var148 = 5;
var149 = NEW_array__NativeArray(var148, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var149)->values[0] = (val*) var132;
var150 = BOX_kernel__Int(var_arity); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var149)->values[1] = (val*) var150;
((struct instance_array__NativeArray*)var149)->values[2] = (val*) var137;
var151 = BOX_kernel__Int(var141); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var149)->values[3] = (val*) var151;
((struct instance_array__NativeArray*)var149)->values[4] = (val*) var143;
((void (*)(val*, val*, long))(var147->class->vft[COLOR_array__Array__with_native]))(var147, var149, var148) /* with_native on <var147:Array[Object]>*/;
}
var152 = ((val* (*)(val*))(var147->class->vft[COLOR_string__Object__to_s]))(var147) /* to_s on <var147:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_nclassdef, var152) /* error on <self:ModelBuilder>*/;
goto RET_LABEL;
} else {
var155 = NULL;
if (var_nkind == NULL) {
var156 = 0; /* is null */
} else {
var156 = 1; /* arg is null and recv is not */
}
var_157 = var156;
if (var156){
var158 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__concrete_kind]))(self) /* concrete_kind on <self:ModelBuilder>*/;
var159 = ((short int (*)(val*, val*))(var_mkind->class->vft[COLOR_kernel__Object___33d_61d]))(var_mkind, var158) /* != on <var_mkind:MClassKind>*/;
var154 = var159;
} else {
var154 = var_157;
}
var_160 = var154;
if (var154){
var161 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__kind]))(var_mclass) /* kind on <var_mclass:nullable MClass(MClass)>*/;
var162 = ((short int (*)(val*, val*))(var161->class->vft[COLOR_kernel__Object___33d_61d]))(var161, var_mkind) /* != on <var161:MClassKind>*/;
var153 = var162;
} else {
var153 = var_160;
}
if (var153){
if (varonce163) {
var164 = varonce163;
} else {
var165 = "Error: refinement changed the kind from a ";
var166 = 42;
var167 = string__NativeString__to_s_with_length(var165, var166);
var164 = var167;
varonce163 = var164;
}
var168 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__kind]))(var_mclass) /* kind on <var_mclass:nullable MClass(MClass)>*/;
if (varonce169) {
var170 = varonce169;
} else {
var171 = " to a ";
var172 = 6;
var173 = string__NativeString__to_s_with_length(var171, var172);
var170 = var173;
varonce169 = var170;
}
var174 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var174 = array_instance Array[Object] */
var175 = 4;
var176 = NEW_array__NativeArray(var175, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var176)->values[0] = (val*) var164;
((struct instance_array__NativeArray*)var176)->values[1] = (val*) var168;
((struct instance_array__NativeArray*)var176)->values[2] = (val*) var170;
((struct instance_array__NativeArray*)var176)->values[3] = (val*) var_mkind;
((void (*)(val*, val*, long))(var174->class->vft[COLOR_array__Array__with_native]))(var174, var176, var175) /* with_native on <var174:Array[Object]>*/;
}
var177 = ((val* (*)(val*))(var174->class->vft[COLOR_string__Object__to_s]))(var174) /* to_s on <var174:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_nkind, var177) /* error on <self:ModelBuilder>*/;
} else {
var180 = NULL;
if (var_nvisibility == NULL) {
var181 = 0; /* is null */
} else {
var181 = 1; /* arg is null and recv is not */
}
var_182 = var181;
if (var181){
var183 = ((val* (*)(val*))(self->class->vft[COLOR_model_base__Object__public_visibility]))(self) /* public_visibility on <self:ModelBuilder>*/;
var184 = ((short int (*)(val*, val*))(var_mvisibility->class->vft[COLOR_kernel__Object___33d_61d]))(var_mvisibility, var183) /* != on <var_mvisibility:nullable MVisibility(MVisibility)>*/;
var179 = var184;
} else {
var179 = var_182;
}
var_185 = var179;
if (var179){
var186 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__visibility]))(var_mclass) /* visibility on <var_mclass:nullable MClass(MClass)>*/;
var187 = ((short int (*)(val*, val*))(var186->class->vft[COLOR_kernel__Object___33d_61d]))(var186, var_mvisibility) /* != on <var186:MVisibility>*/;
var178 = var187;
} else {
var178 = var_185;
}
if (var178){
if (varonce188) {
var189 = varonce188;
} else {
var190 = "Error: refinement changed the visibility from a ";
var191 = 48;
var192 = string__NativeString__to_s_with_length(var190, var191);
var189 = var192;
varonce188 = var189;
}
var193 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__visibility]))(var_mclass) /* visibility on <var_mclass:nullable MClass(MClass)>*/;
if (varonce194) {
var195 = varonce194;
} else {
var196 = " to a ";
var197 = 6;
var198 = string__NativeString__to_s_with_length(var196, var197);
var195 = var198;
varonce194 = var195;
}
var199 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var199 = array_instance Array[Object] */
var200 = 4;
var201 = NEW_array__NativeArray(var200, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var201)->values[0] = (val*) var189;
((struct instance_array__NativeArray*)var201)->values[1] = (val*) var193;
((struct instance_array__NativeArray*)var201)->values[2] = (val*) var195;
((struct instance_array__NativeArray*)var201)->values[3] = (val*) var_mvisibility;
((void (*)(val*, val*, long))(var199->class->vft[COLOR_array__Array__with_native]))(var199, var201, var200) /* with_native on <var199:Array[Object]>*/;
}
var202 = ((val* (*)(val*))(var199->class->vft[COLOR_string__Object__to_s]))(var199) /* to_s on <var199:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_nvisibility, var202) /* error on <self:ModelBuilder>*/;
} else {
}
}
}
}
}
}
((void (*)(val*, val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclass_61d]))(var_nclassdef, var_mclass) /* mclass= on <var_nclassdef:AClassdef>*/;
var203 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_modelize_class__AModule__mclass2nclassdef]))(var_nmodule) /* mclass2nclassdef on <var_nmodule:AModule>*/;
((void (*)(val*, val*, val*))(var203->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var203, var_mclass, var_nclassdef) /* []= on <var203:Map[MClass, AClassdef]>*/;
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_a_mclass for (self: Object, AModule, AClassdef) */
void VIRTUAL_modelize_class__ModelBuilder__build_a_mclass(val* self, val* p0, val* p1) {
modelize_class__ModelBuilder__build_a_mclass(self, p0, p1);
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_a_mclassdef for (self: ModelBuilder, AModule, AClassdef) */
void modelize_class__ModelBuilder__build_a_mclassdef(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
val* var6 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var7 /* : null */;
short int var8 /* : Bool */;
val* var9 /* : Array[String] */;
val* var_names /* var names: Array[String] */;
val* var10 /* : Array[MType] */;
val* var_bounds /* var bounds: Array[MType] */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
long var13 /* : Int */;
long var14 /* : Int */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
int cltype18;
int idtype19;
const char* var_class_name;
short int var20 /* : Bool */;
val* var21 /* : Range[Int] */;
long var22 /* : Int */;
long var23 /* : Int */;
val* var24 /* : Discrete */;
val* var25 /* : Discrete */;
val* var26 /* : Iterator[nullable Object] */;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
long var_i /* var i: Int */;
long var29 /* : Int */;
val* var30 /* : ANodes[AFormaldef] */;
val* var31 /* : nullable Object */;
val* var_nfd /* var nfd: AFormaldef */;
val* var32 /* : TClassid */;
val* var33 /* : String */;
val* var_ptname /* var ptname: String */;
short int var34 /* : Bool */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : Array[Object] */;
long var46 /* : Int */;
val* var47 /* : NativeArray[Object] */;
val* var48 /* : String */;
val* var49 /* : Iterator[nullable Object] */;
short int var50 /* : Bool */;
val* var51 /* : nullable Object */;
char var_c /* var c: Char */;
char var52 /* : Char */;
short int var53 /* : Bool */;
char var54 /* : Char */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
const char* var_class_name60;
short int var61 /* : Bool */;
short int var_62 /* var : Bool */;
char var63 /* : Char */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name69;
short int var70 /* : Bool */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : NativeString */;
long var74 /* : Int */;
val* var75 /* : String */;
val* var76 /* : Array[Object] */;
long var77 /* : Int */;
val* var78 /* : NativeArray[Object] */;
val* var79 /* : String */;
val* var80 /* : MClassType */;
val* var81 /* : Array[MType] */;
val* var82 /* : nullable Object */;
short int var83 /* : Bool */;
int cltype84;
int idtype85;
const char* var_class_name86;
val* var88 /* : Range[Int] */;
long var89 /* : Int */;
long var90 /* : Int */;
val* var91 /* : Discrete */;
val* var92 /* : Discrete */;
val* var93 /* : Iterator[nullable Object] */;
short int var94 /* : Bool */;
val* var95 /* : nullable Object */;
long var_i96 /* var i: Int */;
long var97 /* : Int */;
val* var98 /* : ANodes[AFormaldef] */;
val* var99 /* : nullable Object */;
val* var_nfd100 /* var nfd: AFormaldef */;
val* var101 /* : nullable AType */;
val* var_nfdt /* var nfdt: nullable AType */;
val* var102 /* : null */;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
val* var105 /* : nullable MType */;
val* var_bound /* var bound: nullable MType */;
val* var106 /* : null */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : NativeString */;
long var112 /* : Int */;
val* var113 /* : String */;
val* var114 /* : nullable Object */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : NativeString */;
long var118 /* : Int */;
val* var119 /* : String */;
val* var120 /* : Array[Object] */;
long var121 /* : Int */;
val* var122 /* : NativeArray[Object] */;
val* var123 /* : String */;
val* var124 /* : Array[MClassDef] */;
short int var125 /* : Bool */;
val* var126 /* : MClassType */;
val* var127 /* : MType */;
val* var_bound128 /* var bound: MType */;
val* var129 /* : MClassDef */;
val* var130 /* : MClassType */;
val* var131 /* : Array[MType] */;
val* var132 /* : nullable Object */;
val* var_bound133 /* var bound: MType */;
val* var135 /* : MClassType */;
val* var_bound_mtype /* var bound_mtype: MClassType */;
val* var136 /* : MClassDef */;
val* var137 /* : Location */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var138 /* : HashMap[MClassDef, AClassdef] */;
short int var139 /* : Bool */;
val* var140 /* : ToolContext */;
static val* varonce141;
val* var142 /* : String */;
char* var143 /* : NativeString */;
long var144 /* : Int */;
val* var145 /* : String */;
val* var146 /* : MClassKind */;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : NativeString */;
long var150 /* : Int */;
val* var151 /* : String */;
val* var152 /* : String */;
val* var153 /* : Array[Object] */;
long var154 /* : Int */;
val* var155 /* : NativeArray[Object] */;
val* var156 /* : String */;
long var157 /* : Int */;
val* var158 /* : ToolContext */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : NativeString */;
long var162 /* : Int */;
val* var163 /* : String */;
val* var164 /* : MClassKind */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
long var168 /* : Int */;
val* var169 /* : String */;
val* var170 /* : String */;
val* var171 /* : Array[Object] */;
long var172 /* : Int */;
val* var173 /* : NativeArray[Object] */;
val* var174 /* : String */;
long var175 /* : Int */;
var_nmodule = p0;
var_nclassdef = p1;
var = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_nmodule) /* mmodule on <var_nmodule:AModule>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 106);
show_backtrace(1);
}
var_mmodule = var;
if (varonce) {
var1 = varonce;
} else {
var2 = "Object";
var3 = 6;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mclass_by_name]))(self, var_nmodule, var_mmodule, var1) /* try_get_mclass_by_name on <self:ModelBuilder>*/;
var_objectclass = var5;
var6 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclass]))(var_nclassdef) /* mclass on <var_nclassdef:AClassdef>*/;
var_mclass = var6;
var7 = NULL;
if (var_mclass == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (var8){
goto RET_LABEL;
} else {
}
var9 = NEW_array__Array(&type_array__Arraystring__String);
((void (*)(val*))(var9->class->vft[COLOR_array__Array__init]))(var9) /* init on <var9:Array[String]>*/;
var_names = var9;
var10 = NEW_array__Array(&type_array__Arraymodel__MType);
((void (*)(val*))(var10->class->vft[COLOR_array__Array__init]))(var10) /* init on <var10:Array[MType]>*/;
var_bounds = var10;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_parser_nodes__AStdClassdef.color;
idtype = type_parser_nodes__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var12 = 0;
} else {
var12 = var_nclassdef->type->type_table[cltype] == idtype;
}
var_ = var12;
if (var12){
var13 = ((long (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__arity]))(var_mclass) /* arity on <var_mclass:nullable MClass(MClass)>*/;
var14 = 0;
{ /* Inline kernel#Int#> (var13,var14) */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (!var17) {
var_class_name = type_kernel__Int.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 263);
show_backtrace(1);
}
var20 = var13 > var14;
var15 = var20;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var11 = var15;
} else {
var11 = var_;
}
if (var11){
var21 = NEW_range__Range(&type_range__Rangekernel__Int);
var22 = 0;
var23 = ((long (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__arity]))(var_mclass) /* arity on <var_mclass:nullable MClass(MClass)>*/;
var24 = BOX_kernel__Int(var22); /* autobox from Int to Discrete */
var25 = BOX_kernel__Int(var23); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var21->class->vft[COLOR_range__Range__without_last]))(var21, var24, var25) /* without_last on <var21:Range[Int]>*/;
var26 = ((val* (*)(val*))(var21->class->vft[COLOR_abstract_collection__Collection__iterator]))(var21) /* iterator on <var21:Range[Int]>*/;
for(;;) {
var27 = ((short int (*)(val*))(var26->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var26) /* is_ok on <var26:Iterator[nullable Object]>*/;
if(!var27) break;
var28 = ((val* (*)(val*))(var26->class->vft[COLOR_abstract_collection__Iterator__item]))(var26) /* item on <var26:Iterator[nullable Object]>*/;
var29 = ((struct instance_kernel__Int*)var28)->value; /* autounbox from nullable Object to Int */;
var_i = var29;
var30 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_formaldefs]))(var_nclassdef) /* n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)>*/;
var31 = ((val* (*)(val*, long))(var30->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var30, var_i) /* [] on <var30:ANodes[AFormaldef]>*/;
var_nfd = var31;
var32 = ((val* (*)(val*))(var_nfd->class->vft[COLOR_parser_nodes__AFormaldef__n_id]))(var_nfd) /* n_id on <var_nfd:AFormaldef>*/;
var33 = ((val* (*)(val*))(var32->class->vft[COLOR_parser_nodes__Token__text]))(var32) /* text on <var32:TClassid>*/;
var_ptname = var33;
var34 = ((short int (*)(val*, val*))(var_names->class->vft[COLOR_abstract_collection__Collection__has]))(var_names, var_ptname) /* has on <var_names:Array[String]>*/;
if (var34){
if (varonce35) {
var36 = varonce35;
} else {
var37 = "Error: A formal parameter type `";
var38 = 32;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
if (varonce40) {
var41 = varonce40;
} else {
var42 = "\' already exists";
var43 = 16;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
var45 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var45 = array_instance Array[Object] */
var46 = 3;
var47 = NEW_array__NativeArray(var46, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var47)->values[0] = (val*) var36;
((struct instance_array__NativeArray*)var47)->values[1] = (val*) var_ptname;
((struct instance_array__NativeArray*)var47)->values[2] = (val*) var41;
((void (*)(val*, val*, long))(var45->class->vft[COLOR_array__Array__with_native]))(var45, var47, var46) /* with_native on <var45:Array[Object]>*/;
}
var48 = ((val* (*)(val*))(var45->class->vft[COLOR_string__Object__to_s]))(var45) /* to_s on <var45:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_nfd, var48) /* error on <self:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
var49 = ((val* (*)(val*))(var_ptname->class->vft[COLOR_abstract_collection__Collection__iterator]))(var_ptname) /* iterator on <var_ptname:String>*/;
for(;;) {
var50 = ((short int (*)(val*))(var49->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var49) /* is_ok on <var49:Iterator[nullable Object]>*/;
if(!var50) break;
var51 = ((val* (*)(val*))(var49->class->vft[COLOR_abstract_collection__Iterator__item]))(var49) /* item on <var49:Iterator[nullable Object]>*/;
var52 = ((struct instance_kernel__Char*)var51)->value; /* autounbox from nullable Object to Char */;
var_c = var52;
var54 = 'a';
{ /* Inline kernel#Char#>= (var_c,var54) */
/* Covariant cast for argument 0 (i) <var54:Char> isa OTHER */
/* <var54:Char> isa OTHER */
var57 = 1; /* easy <var54:Char> isa OTHER*/
if (!var57) {
var_class_name60 = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name60);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 438);
show_backtrace(1);
}
var61 = var_c >= var54;
var55 = var61;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var_62 = var55;
if (var55){
var63 = 'z';
{ /* Inline kernel#Char#<= (var_c,var63) */
/* Covariant cast for argument 0 (i) <var63:Char> isa OTHER */
/* <var63:Char> isa OTHER */
var66 = 1; /* easy <var63:Char> isa OTHER*/
if (!var66) {
var_class_name69 = type_kernel__Char.name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
fprintf(stderr, " (%s:%d)\n", "lib/standard/kernel.nit", 436);
show_backtrace(1);
}
var70 = var_c <= var63;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var53 = var64;
} else {
var53 = var_62;
}
if (var53){
if (varonce71) {
var72 = varonce71;
} else {
var73 = "Warning: lowercase in the formal parameter type ";
var74 = 48;
var75 = string__NativeString__to_s_with_length(var73, var74);
var72 = var75;
varonce71 = var72;
}
var76 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 2;
var78 = NEW_array__NativeArray(var77, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var78)->values[0] = (val*) var72;
((struct instance_array__NativeArray*)var78)->values[1] = (val*) var_ptname;
((void (*)(val*, val*, long))(var76->class->vft[COLOR_array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
}
var79 = ((val* (*)(val*))(var76->class->vft[COLOR_string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__warning]))(self, var_nfd, var79) /* warning on <self:ModelBuilder>*/;
goto BREAK_label;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var49->class->vft[COLOR_abstract_collection__Iterator__next]))(var49) /* next on <var49:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
((void (*)(val*, val*))(var_names->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_names, var_ptname) /* add on <var_names:Array[String]>*/;
var80 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__mclass_type]))(var_mclass) /* mclass_type on <var_mclass:nullable MClass(MClass)>*/;
var81 = ((val* (*)(val*))(var80->class->vft[COLOR_model__MClassType__arguments]))(var80) /* arguments on <var80:MClassType>*/;
var82 = ((val* (*)(val*, long))(var81->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var81, var_i) /* [] on <var81:Array[MType]>*/;
/* <var82:nullable Object(MType)> isa MParameterType */
cltype84 = type_model__MParameterType.color;
idtype85 = type_model__MParameterType.id;
if(cltype84 >= var82->type->table_size) {
var83 = 0;
} else {
var83 = var82->type->type_table[cltype84] == idtype85;
}
if (!var83) {
var_class_name86 = var82 == NULL ? "null" : var82->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "MParameterType", var_class_name86);
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 128);
show_backtrace(1);
}
((void (*)(val*, val*))(var_nfd->class->vft[COLOR_modelize_class__AFormaldef__mtype_61d]))(var_nfd, var82) /* mtype= on <var_nfd:AFormaldef>*/;
CONTINUE_label87: (void)0;
((void (*)(val*))(var26->class->vft[COLOR_abstract_collection__Iterator__next]))(var26) /* next on <var26:Iterator[nullable Object]>*/;
}
BREAK_label87: (void)0;
var88 = NEW_range__Range(&type_range__Rangekernel__Int);
var89 = 0;
var90 = ((long (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__arity]))(var_mclass) /* arity on <var_mclass:nullable MClass(MClass)>*/;
var91 = BOX_kernel__Int(var89); /* autobox from Int to Discrete */
var92 = BOX_kernel__Int(var90); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var88->class->vft[COLOR_range__Range__without_last]))(var88, var91, var92) /* without_last on <var88:Range[Int]>*/;
var93 = ((val* (*)(val*))(var88->class->vft[COLOR_abstract_collection__Collection__iterator]))(var88) /* iterator on <var88:Range[Int]>*/;
for(;;) {
var94 = ((short int (*)(val*))(var93->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var93) /* is_ok on <var93:Iterator[nullable Object]>*/;
if(!var94) break;
var95 = ((val* (*)(val*))(var93->class->vft[COLOR_abstract_collection__Iterator__item]))(var93) /* item on <var93:Iterator[nullable Object]>*/;
var97 = ((struct instance_kernel__Int*)var95)->value; /* autounbox from nullable Object to Int */;
var_i96 = var97;
var98 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_formaldefs]))(var_nclassdef) /* n_formaldefs on <var_nclassdef:AClassdef(AStdClassdef)>*/;
var99 = ((val* (*)(val*, long))(var98->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var98, var_i96) /* [] on <var98:ANodes[AFormaldef]>*/;
var_nfd100 = var99;
var101 = ((val* (*)(val*))(var_nfd100->class->vft[COLOR_parser_nodes__AFormaldef__n_type]))(var_nfd100) /* n_type on <var_nfd100:AFormaldef>*/;
var_nfdt = var101;
var102 = NULL;
if (var_nfdt == NULL) {
var103 = 0; /* is null */
} else {
var103 = 1; /* arg is null and recv is not */
}
if (var103){
var104 = 0;
var105 = ((val* (*)(val*, val*, val*, short int))(self->class->vft[COLOR_modelize_class__ModelBuilder__resolve_mtype_unchecked]))(self, var_nclassdef, var_nfdt, var104) /* resolve_mtype_unchecked on <self:ModelBuilder>*/;
var_bound = var105;
var106 = NULL;
if (var_bound == NULL) {
var107 = 1; /* is null */
} else {
var107 = 0; /* arg is null but recv is not */
}
if (var107){
goto RET_LABEL;
} else {
}
var108 = ((short int (*)(val*))(var_bound->class->vft[COLOR_model__MType__need_anchor]))(var_bound) /* need_anchor on <var_bound:nullable MType(MType)>*/;
if (var108){
if (varonce109) {
var110 = varonce109;
} else {
var111 = "Error: Formal parameter type `";
var112 = 30;
var113 = string__NativeString__to_s_with_length(var111, var112);
var110 = var113;
varonce109 = var110;
}
var114 = ((val* (*)(val*, long))(var_names->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var_names, var_i96) /* [] on <var_names:Array[String]>*/;
if (varonce115) {
var116 = varonce115;
} else {
var117 = "\' bounded with a formal parameter type";
var118 = 38;
var119 = string__NativeString__to_s_with_length(var117, var118);
var116 = var119;
varonce115 = var116;
}
var120 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var120 = array_instance Array[Object] */
var121 = 3;
var122 = NEW_array__NativeArray(var121, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var122)->values[0] = (val*) var110;
((struct instance_array__NativeArray*)var122)->values[1] = (val*) var114;
((struct instance_array__NativeArray*)var122)->values[2] = (val*) var116;
((void (*)(val*, val*, long))(var120->class->vft[COLOR_array__Array__with_native]))(var120, var122, var121) /* with_native on <var120:Array[Object]>*/;
}
var123 = ((val* (*)(val*))(var120->class->vft[COLOR_string__Object__to_s]))(var120) /* to_s on <var120:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_nfd100, var123) /* error on <self:ModelBuilder>*/;
} else {
((void (*)(val*, val*))(var_bounds->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_bounds, var_bound) /* add on <var_bounds:Array[MType]>*/;
((void (*)(val*, val*))(var_nfd100->class->vft[COLOR_modelize_class__AFormaldef__bound_61d]))(var_nfd100, var_bound) /* bound= on <var_nfd100:AFormaldef>*/;
}
} else {
var124 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__mclassdefs]))(var_mclass) /* mclassdefs on <var_mclass:nullable MClass(MClass)>*/;
var125 = ((short int (*)(val*))(var124->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var124) /* is_empty on <var124:Array[MClassDef]>*/;
if (var125){
if (var_objectclass == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 147);
show_backtrace(1);
} else {
var126 = ((val* (*)(val*))(var_objectclass->class->vft[COLOR_model__MClass__mclass_type]))(var_objectclass) /* mclass_type on <var_objectclass:nullable MClass>*/;
}
var127 = ((val* (*)(val*))(var126->class->vft[COLOR_model__MType__as_nullable]))(var126) /* as_nullable on <var126:MClassType>*/;
var_bound128 = var127;
((void (*)(val*, val*))(var_bounds->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_bounds, var_bound128) /* add on <var_bounds:Array[MType]>*/;
((void (*)(val*, val*))(var_nfd100->class->vft[COLOR_modelize_class__AFormaldef__bound_61d]))(var_nfd100, var_bound128) /* bound= on <var_nfd100:AFormaldef>*/;
} else {
var129 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__intro]))(var_mclass) /* intro on <var_mclass:nullable MClass(MClass)>*/;
var130 = ((val* (*)(val*))(var129->class->vft[COLOR_model__MClassDef__bound_mtype]))(var129) /* bound_mtype on <var129:MClassDef>*/;
var131 = ((val* (*)(val*))(var130->class->vft[COLOR_model__MClassType__arguments]))(var130) /* arguments on <var130:MClassType>*/;
var132 = ((val* (*)(val*, long))(var131->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var131, var_i96) /* [] on <var131:Array[MType]>*/;
var_bound133 = var132;
((void (*)(val*, val*))(var_bounds->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_bounds, var_bound133) /* add on <var_bounds:Array[MType]>*/;
((void (*)(val*, val*))(var_nfd100->class->vft[COLOR_modelize_class__AFormaldef__bound_61d]))(var_nfd100, var_bound133) /* bound= on <var_nfd100:AFormaldef>*/;
}
}
CONTINUE_label134: (void)0;
((void (*)(val*))(var93->class->vft[COLOR_abstract_collection__Iterator__next]))(var93) /* next on <var93:Iterator[nullable Object]>*/;
}
BREAK_label134: (void)0;
} else {
}
var135 = ((val* (*)(val*, val*))(var_mclass->class->vft[COLOR_model__MClass__get_mtype]))(var_mclass, var_bounds) /* get_mtype on <var_mclass:nullable MClass(MClass)>*/;
var_bound_mtype = var135;
var136 = NEW_model__MClassDef(&type_model__MClassDef);
var137 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__ANode__location]))(var_nclassdef) /* location on <var_nclassdef:AClassdef>*/;
((void (*)(val*, val*, val*, val*, val*))(var136->class->vft[COLOR_model__MClassDef__init]))(var136, var_mmodule, var_bound_mtype, var137, var_names) /* init on <var136:MClassDef>*/;
var_mclassdef = var136;
((void (*)(val*, val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef_61d]))(var_nclassdef, var_mclassdef) /* mclassdef= on <var_nclassdef:AClassdef>*/;
var138 = ((val* (*)(val*))(self->class->vft[COLOR_modelize_class__ModelBuilder__mclassdef2nclassdef]))(self) /* mclassdef2nclassdef on <self:ModelBuilder>*/;
((void (*)(val*, val*, val*))(var138->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var138, var_mclassdef, var_nclassdef) /* []= on <var138:HashMap[MClassDef, AClassdef]>*/;
var139 = ((short int (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__is_intro]))(var_mclassdef) /* is_intro on <var_mclassdef:MClassDef>*/;
if (var139){
var140 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce141) {
var142 = varonce141;
} else {
var143 = " introduces new ";
var144 = 16;
var145 = string__NativeString__to_s_with_length(var143, var144);
var142 = var145;
varonce141 = var142;
}
var146 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__kind]))(var_mclass) /* kind on <var_mclass:nullable MClass(MClass)>*/;
if (varonce147) {
var148 = varonce147;
} else {
var149 = " ";
var150 = 1;
var151 = string__NativeString__to_s_with_length(var149, var150);
var148 = var151;
varonce147 = var148;
}
var152 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__full_name]))(var_mclass) /* full_name on <var_mclass:nullable MClass(MClass)>*/;
var153 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var153 = array_instance Array[Object] */
var154 = 5;
var155 = NEW_array__NativeArray(var154, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var155)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var155)->values[1] = (val*) var142;
((struct instance_array__NativeArray*)var155)->values[2] = (val*) var146;
((struct instance_array__NativeArray*)var155)->values[3] = (val*) var148;
((struct instance_array__NativeArray*)var155)->values[4] = (val*) var152;
((void (*)(val*, val*, long))(var153->class->vft[COLOR_array__Array__with_native]))(var153, var155, var154) /* with_native on <var153:Array[Object]>*/;
}
var156 = ((val* (*)(val*))(var153->class->vft[COLOR_string__Object__to_s]))(var153) /* to_s on <var153:Array[Object]>*/;
var157 = 3;
((void (*)(val*, val*, long))(var140->class->vft[COLOR_toolcontext__ToolContext__info]))(var140, var156, var157) /* info on <var140:ToolContext>*/;
} else {
var158 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce159) {
var160 = varonce159;
} else {
var161 = " refine ";
var162 = 8;
var163 = string__NativeString__to_s_with_length(var161, var162);
var160 = var163;
varonce159 = var160;
}
var164 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__kind]))(var_mclass) /* kind on <var_mclass:nullable MClass(MClass)>*/;
if (varonce165) {
var166 = varonce165;
} else {
var167 = " ";
var168 = 1;
var169 = string__NativeString__to_s_with_length(var167, var168);
var166 = var169;
varonce165 = var166;
}
var170 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__full_name]))(var_mclass) /* full_name on <var_mclass:nullable MClass(MClass)>*/;
var171 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var171 = array_instance Array[Object] */
var172 = 5;
var173 = NEW_array__NativeArray(var172, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var173)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var173)->values[1] = (val*) var160;
((struct instance_array__NativeArray*)var173)->values[2] = (val*) var164;
((struct instance_array__NativeArray*)var173)->values[3] = (val*) var166;
((struct instance_array__NativeArray*)var173)->values[4] = (val*) var170;
((void (*)(val*, val*, long))(var171->class->vft[COLOR_array__Array__with_native]))(var171, var173, var172) /* with_native on <var171:Array[Object]>*/;
}
var174 = ((val* (*)(val*))(var171->class->vft[COLOR_string__Object__to_s]))(var171) /* to_s on <var171:Array[Object]>*/;
var175 = 3;
((void (*)(val*, val*, long))(var158->class->vft[COLOR_toolcontext__ToolContext__info]))(var158, var174, var175) /* info on <var158:ToolContext>*/;
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_a_mclassdef for (self: Object, AModule, AClassdef) */
void VIRTUAL_modelize_class__ModelBuilder__build_a_mclassdef(val* self, val* p0, val* p1) {
modelize_class__ModelBuilder__build_a_mclassdef(self, p0, p1);
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#collect_a_mclassdef_inheritance for (self: ModelBuilder, AModule, AClassdef) */
void modelize_class__ModelBuilder__collect_a_mclassdef_inheritance(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
val* var11 /* : nullable MClass */;
val* var_pointerclass /* var pointerclass: nullable MClass */;
val* var12 /* : nullable MClass */;
val* var_mclass /* var mclass: MClass */;
val* var13 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
short int var14 /* : Bool */;
short int var_specobject /* var specobject: Bool */;
val* var15 /* : Array[MClassType] */;
val* var_supertypes /* var supertypes: Array[MClassType] */;
short int var16 /* : Bool */;
int cltype;
int idtype;
val* var17 /* : ANodes[ASuperclass] */;
val* var18 /* : Iterator[nullable Object] */;
short int var19 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_nsc /* var nsc: ASuperclass */;
short int var21 /* : Bool */;
val* var22 /* : AType */;
val* var_ntype /* var ntype: AType */;
short int var23 /* : Bool */;
val* var24 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var25 /* : null */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
int cltype28;
int idtype29;
short int var30 /* : Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : NativeString */;
long var34 /* : Int */;
val* var35 /* : String */;
short int var36 /* : Bool */;
short int var_ /* var : Bool */;
short int var37 /* : Bool */;
val* var38 /* : MClassKind */;
val* var39 /* : MClassKind */;
short int var40 /* : Bool */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : NativeString */;
long var45 /* : Int */;
val* var46 /* : String */;
short int var47 /* : Bool */;
val* var48 /* : MClassType */;
val* var49 /* : MClassType */;
short int var50 /* : Bool */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : NativeString */;
long var55 /* : Int */;
val* var56 /* : String */;
short int var57 /* : Bool */;
short int var_58 /* var : Bool */;
val* var59 /* : null */;
short int var60 /* : Bool */;
val* var61 /* : MClassType */;
short int var62 /* : Bool */;
short int var63 /* : Bool */;
val* var64 /* : ToolContext */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : NativeString */;
long var68 /* : Int */;
val* var69 /* : String */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : NativeString */;
long var73 /* : Int */;
val* var74 /* : String */;
val* var75 /* : String */;
val* var76 /* : Array[Object] */;
long var77 /* : Int */;
val* var78 /* : NativeArray[Object] */;
val* var79 /* : String */;
long var80 /* : Int */;
var_nmodule = p0;
var_nclassdef = p1;
var = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_nmodule) /* mmodule on <var_nmodule:AModule>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 174);
show_backtrace(1);
}
var_mmodule = var;
if (varonce) {
var1 = varonce;
} else {
var2 = "Object";
var3 = 6;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mclass_by_name]))(self, var_nmodule, var_mmodule, var1) /* try_get_mclass_by_name on <self:ModelBuilder>*/;
var_objectclass = var5;
if (varonce6) {
var7 = varonce6;
} else {
var8 = "Pointer";
var9 = 7;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce6 = var7;
}
var11 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mclass_by_name]))(self, var_nmodule, var_mmodule, var7) /* try_get_mclass_by_name on <self:ModelBuilder>*/;
var_pointerclass = var11;
var12 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclass]))(var_nclassdef) /* mclass on <var_nclassdef:AClassdef>*/;
if (var12 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 177);
show_backtrace(1);
}
var_mclass = var12;
var13 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var13 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 178);
show_backtrace(1);
}
var_mclassdef = var13;
var14 = 1;
var_specobject = var14;
var15 = NEW_array__Array(&type_array__Arraymodel__MClassType);
((void (*)(val*))(var15->class->vft[COLOR_array__Array__init]))(var15) /* init on <var15:Array[MClassType]>*/;
var_supertypes = var15;
/* <var_nclassdef:AClassdef> isa AStdClassdef */
cltype = type_parser_nodes__AStdClassdef.color;
idtype = type_parser_nodes__AStdClassdef.id;
if(cltype >= var_nclassdef->type->table_size) {
var16 = 0;
} else {
var16 = var_nclassdef->type->type_table[cltype] == idtype;
}
if (var16){
var17 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__AStdClassdef__n_superclasses]))(var_nclassdef) /* n_superclasses on <var_nclassdef:AClassdef(AStdClassdef)>*/;
var18 = ((val* (*)(val*))(var17->class->vft[COLOR_abstract_collection__Collection__iterator]))(var17) /* iterator on <var17:ANodes[ASuperclass]>*/;
for(;;) {
var19 = ((short int (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var18) /* is_ok on <var18:Iterator[nullable Object]>*/;
if(!var19) break;
var20 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__item]))(var18) /* item on <var18:Iterator[nullable Object]>*/;
var_nsc = var20;
var21 = 0;
var_specobject = var21;
var22 = ((val* (*)(val*))(var_nsc->class->vft[COLOR_parser_nodes__ASuperclass__n_type]))(var_nsc) /* n_type on <var_nsc:ASuperclass>*/;
var_ntype = var22;
var23 = 0;
var24 = ((val* (*)(val*, val*, val*, short int))(self->class->vft[COLOR_modelize_class__ModelBuilder__resolve_mtype_unchecked]))(self, var_nclassdef, var_ntype, var23) /* resolve_mtype_unchecked on <self:ModelBuilder>*/;
var_mtype = var24;
var25 = NULL;
if (var_mtype == NULL) {
var26 = 1; /* is null */
} else {
var26 = 0; /* arg is null but recv is not */
}
if (var26){
goto CONTINUE_label;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MClassType */
cltype28 = type_model__MClassType.color;
idtype29 = type_model__MClassType.id;
if(cltype28 >= var_mtype->type->table_size) {
var27 = 0;
} else {
var27 = var_mtype->type->type_table[cltype28] == idtype29;
}
var30 = !var27;
if (var30){
if (varonce31) {
var32 = varonce31;
} else {
var33 = "Error: supertypes cannot be a formal type";
var34 = 41;
var35 = string__NativeString__to_s_with_length(var33, var34);
var32 = var35;
varonce31 = var32;
}
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_ntype, var32) /* error on <self:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(var_supertypes->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_supertypes, var_mtype) /* add on <var_supertypes:Array[MClassType]>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var18->class->vft[COLOR_abstract_collection__Iterator__next]))(var18) /* next on <var18:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
} else {
}
var_ = var_specobject;
if (var_specobject){
var37 = ((short int (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__is_intro]))(var_mclassdef) /* is_intro on <var_mclassdef:MClassDef>*/;
var36 = var37;
} else {
var36 = var_;
}
if (var36){
var38 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__kind]))(var_mclass) /* kind on <var_mclass:MClass>*/;
var39 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__extern_kind]))(self) /* extern_kind on <self:ModelBuilder>*/;
var40 = ((short int (*)(val*, val*))(var38->class->vft[COLOR_kernel__Object___61d_61d]))(var38, var39) /* == on <var38:MClassKind>*/;
if (var40){
var41 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__name]))(var_mclass) /* name on <var_mclass:MClass>*/;
if (varonce42) {
var43 = varonce42;
} else {
var44 = "Pointer";
var45 = 7;
var46 = string__NativeString__to_s_with_length(var44, var45);
var43 = var46;
varonce42 = var43;
}
var47 = ((short int (*)(val*, val*))(var41->class->vft[COLOR_kernel__Object___61d_61d]))(var41, var43) /* == on <var41:String>*/;
if (var47){
if (var_objectclass == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 199);
show_backtrace(1);
} else {
var48 = ((val* (*)(val*))(var_objectclass->class->vft[COLOR_model__MClass__mclass_type]))(var_objectclass) /* mclass_type on <var_objectclass:nullable MClass>*/;
}
((void (*)(val*, val*))(var_supertypes->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_supertypes, var48) /* add on <var_supertypes:Array[MClassType]>*/;
} else {
if (var_pointerclass == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 201);
show_backtrace(1);
} else {
var49 = ((val* (*)(val*))(var_pointerclass->class->vft[COLOR_model__MClass__mclass_type]))(var_pointerclass) /* mclass_type on <var_pointerclass:nullable MClass>*/;
}
((void (*)(val*, val*))(var_supertypes->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_supertypes, var49) /* add on <var_supertypes:Array[MClassType]>*/;
}
} else {
var51 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__name]))(var_mclass) /* name on <var_mclass:MClass>*/;
if (varonce52) {
var53 = varonce52;
} else {
var54 = "Object";
var55 = 6;
var56 = string__NativeString__to_s_with_length(var54, var55);
var53 = var56;
varonce52 = var53;
}
var57 = ((short int (*)(val*, val*))(var51->class->vft[COLOR_kernel__Object___33d_61d]))(var51, var53) /* != on <var51:String>*/;
var_58 = var57;
if (var57){
var59 = NULL;
if (var_objectclass == NULL) {
var60 = 0; /* is null */
} else {
var60 = 1; /* arg is null and recv is not */
}
var50 = var60;
} else {
var50 = var_58;
}
if (var50){
var61 = ((val* (*)(val*))(var_objectclass->class->vft[COLOR_model__MClass__mclass_type]))(var_objectclass) /* mclass_type on <var_objectclass:nullable MClass(MClass)>*/;
((void (*)(val*, val*))(var_supertypes->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_supertypes, var61) /* add on <var_supertypes:Array[MClassType]>*/;
} else {
}
}
} else {
}
((void (*)(val*, val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__set_supertypes]))(var_mclassdef, var_supertypes) /* set_supertypes on <var_mclassdef:MClassDef>*/;
var62 = ((short int (*)(val*))(var_supertypes->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var_supertypes) /* is_empty on <var_supertypes:Array[MClassType]>*/;
var63 = !var62;
if (var63){
var64 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
if (varonce65) {
var66 = varonce65;
} else {
var67 = " new super-types: ";
var68 = 18;
var69 = string__NativeString__to_s_with_length(var67, var68);
var66 = var69;
varonce65 = var66;
}
if (varonce70) {
var71 = varonce70;
} else {
var72 = ", ";
var73 = 2;
var74 = string__NativeString__to_s_with_length(var72, var73);
var71 = var74;
varonce70 = var71;
}
var75 = ((val* (*)(val*, val*))(var_supertypes->class->vft[COLOR_string__Collection__join]))(var_supertypes, var71) /* join on <var_supertypes:Array[MClassType]>*/;
var76 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var76 = array_instance Array[Object] */
var77 = 3;
var78 = NEW_array__NativeArray(var77, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var78)->values[0] = (val*) var_mclassdef;
((struct instance_array__NativeArray*)var78)->values[1] = (val*) var66;
((struct instance_array__NativeArray*)var78)->values[2] = (val*) var75;
((void (*)(val*, val*, long))(var76->class->vft[COLOR_array__Array__with_native]))(var76, var78, var77) /* with_native on <var76:Array[Object]>*/;
}
var79 = ((val* (*)(val*))(var76->class->vft[COLOR_string__Object__to_s]))(var76) /* to_s on <var76:Array[Object]>*/;
var80 = 3;
((void (*)(val*, val*, long))(var64->class->vft[COLOR_toolcontext__ToolContext__info]))(var64, var79, var80) /* info on <var64:ToolContext>*/;
} else {
}
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#collect_a_mclassdef_inheritance for (self: Object, AModule, AClassdef) */
void VIRTUAL_modelize_class__ModelBuilder__collect_a_mclassdef_inheritance(val* self, val* p0, val* p1) {
modelize_class__ModelBuilder__collect_a_mclassdef_inheritance(self, p0, p1);
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#check_supertypes for (self: ModelBuilder, AModule, AClassdef) */
void modelize_class__ModelBuilder__check_supertypes(val* self, val* p0, val* p1) {
val* var_nmodule /* var nmodule: AModule */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : NativeString */;
long var3 /* : Int */;
val* var4 /* : String */;
val* var5 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
val* var6 /* : nullable MClass */;
val* var_mclass /* var mclass: MClass */;
val* var7 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var8 /* : Array[MClassType] */;
val* var9 /* : Iterator[nullable Object] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_s /* var s: MClassType */;
val* var12 /* : MClassType */;
val* var13 /* : MClassType */;
short int var14 /* : Bool */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : NativeString */;
long var18 /* : Int */;
val* var19 /* : String */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : NativeString */;
long var23 /* : Int */;
val* var24 /* : String */;
val* var25 /* : Array[Object] */;
long var26 /* : Int */;
val* var27 /* : NativeArray[Object] */;
val* var28 /* : String */;
var_nmodule = p0;
var_nclassdef = p1;
var = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_nmodule) /* mmodule on <var_nmodule:AModule>*/;
if (var == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 215);
show_backtrace(1);
}
var_mmodule = var;
if (varonce) {
var1 = varonce;
} else {
var2 = "Object";
var3 = 6;
var4 = string__NativeString__to_s_with_length(var2, var3);
var1 = var4;
varonce = var1;
}
var5 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mclass_by_name]))(self, var_nmodule, var_mmodule, var1) /* try_get_mclass_by_name on <self:ModelBuilder>*/;
var_objectclass = var5;
var6 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclass]))(var_nclassdef) /* mclass on <var_nclassdef:AClassdef>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 217);
show_backtrace(1);
}
var_mclass = var6;
var7 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
if (var7 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 218);
show_backtrace(1);
}
var_mclassdef = var7;
var8 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__supertypes]))(var_mclassdef) /* supertypes on <var_mclassdef:MClassDef>*/;
var9 = ((val* (*)(val*))(var8->class->vft[COLOR_abstract_collection__Collection__iterator]))(var8) /* iterator on <var8:Array[MClassType]>*/;
for(;;) {
var10 = ((short int (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var9) /* is_ok on <var9:Iterator[nullable Object]>*/;
if(!var10) break;
var11 = ((val* (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__item]))(var9) /* item on <var9:Iterator[nullable Object]>*/;
var_s = var11;
var12 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_mclassdef) /* bound_mtype on <var_mclassdef:MClassDef>*/;
var13 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_mclassdef) /* bound_mtype on <var_mclassdef:MClassDef>*/;
var14 = ((short int (*)(val*, val*, val*, val*))(var_s->class->vft[COLOR_model__MType__is_subtype]))(var_s, var_mmodule, var12, var13) /* is_subtype on <var_s:MClassType>*/;
if (var14){
if (varonce15) {
var16 = varonce15;
} else {
var17 = "Error: Inheritance loop for class ";
var18 = 34;
var19 = string__NativeString__to_s_with_length(var17, var18);
var16 = var19;
varonce15 = var16;
}
if (varonce20) {
var21 = varonce20;
} else {
var22 = " with type ";
var23 = 11;
var24 = string__NativeString__to_s_with_length(var22, var23);
var21 = var24;
varonce20 = var21;
}
var25 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var25 = array_instance Array[Object] */
var26 = 4;
var27 = NEW_array__NativeArray(var26, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var27)->values[0] = (val*) var16;
((struct instance_array__NativeArray*)var27)->values[1] = (val*) var_mclass;
((struct instance_array__NativeArray*)var27)->values[2] = (val*) var21;
((struct instance_array__NativeArray*)var27)->values[3] = (val*) var_s;
((void (*)(val*, val*, long))(var25->class->vft[COLOR_array__Array__with_native]))(var25, var27, var26) /* with_native on <var25:Array[Object]>*/;
}
var28 = ((val* (*)(val*))(var25->class->vft[COLOR_string__Object__to_s]))(var25) /* to_s on <var25:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_nclassdef, var28) /* error on <self:ModelBuilder>*/;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var9->class->vft[COLOR_abstract_collection__Iterator__next]))(var9) /* next on <var9:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#check_supertypes for (self: Object, AModule, AClassdef) */
void VIRTUAL_modelize_class__ModelBuilder__check_supertypes(val* self, val* p0, val* p1) {
modelize_class__ModelBuilder__check_supertypes(self, p0, p1);
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_classes for (self: ModelBuilder, AModule) */
void modelize_class__ModelBuilder__build_classes(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
val* var /* : ToolContext */;
long var1 /* : Int */;
long var_errcount /* var errcount: Int */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var5 /* : POSetElement[MModule] */;
val* var6 /* : Collection[Object] */;
val* var7 /* : Iterator[nullable Object] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_imp /* var imp: MModule */;
val* var10 /* : HashMap[MModule, AModule] */;
val* var11 /* : nullable Object */;
val* var12 /* : ToolContext */;
long var13 /* : Int */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : ANodes[AClassdef] */;
val* var19 /* : Iterator[nullable Object] */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var23 /* : ToolContext */;
long var24 /* : Int */;
short int var25 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : ANodes[AClassdef] */;
val* var30 /* : Iterator[nullable Object] */;
short int var31 /* : Bool */;
val* var32 /* : nullable Object */;
val* var_nclassdef33 /* var nclassdef: AClassdef */;
val* var35 /* : ToolContext */;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : ANodes[AClassdef] */;
val* var42 /* : Iterator[nullable Object] */;
short int var43 /* : Bool */;
val* var44 /* : nullable Object */;
val* var_nclassdef45 /* var nclassdef: AClassdef */;
val* var47 /* : ToolContext */;
long var48 /* : Int */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var53 /* : ANodes[AClassdef] */;
val* var54 /* : Iterator[nullable Object] */;
short int var55 /* : Bool */;
val* var56 /* : nullable Object */;
val* var_nclassdef57 /* var nclassdef: AClassdef */;
val* var58 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var60 /* : ToolContext */;
long var61 /* : Int */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
val* var66 /* : ANodes[AClassdef] */;
val* var67 /* : Iterator[nullable Object] */;
short int var68 /* : Bool */;
val* var69 /* : nullable Object */;
val* var_nclassdef70 /* var nclassdef: AClassdef */;
val* var72 /* : ToolContext */;
long var73 /* : Int */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
val* var78 /* : ANodes[AClassdef] */;
val* var79 /* : Iterator[nullable Object] */;
short int var80 /* : Bool */;
val* var81 /* : nullable Object */;
val* var_nclassdef82 /* var nclassdef: AClassdef */;
short int var83 /* : Bool */;
int cltype;
int idtype;
val* var84 /* : ANodes[AFormaldef] */;
val* var85 /* : Iterator[nullable Object] */;
short int var86 /* : Bool */;
val* var87 /* : nullable Object */;
val* var_nfd /* var nfd: AFormaldef */;
val* var88 /* : nullable AType */;
val* var_nfdt /* var nfdt: nullable AType */;
short int var89 /* : Bool */;
val* var90 /* : null */;
short int var91 /* : Bool */;
short int var_ /* var : Bool */;
val* var92 /* : nullable MType */;
val* var93 /* : null */;
short int var94 /* : Bool */;
val* var95 /* : nullable MType */;
val* var_bound /* var bound: nullable MType */;
val* var96 /* : null */;
short int var97 /* : Bool */;
val* var99 /* : ANodes[ASuperclass] */;
val* var100 /* : Iterator[nullable Object] */;
short int var101 /* : Bool */;
val* var102 /* : nullable Object */;
val* var_nsc /* var nsc: ASuperclass */;
val* var103 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var104 /* : nullable MType */;
val* var105 /* : null */;
short int var106 /* : Bool */;
val* var107 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var108 /* : null */;
short int var109 /* : Bool */;
val* var112 /* : ToolContext */;
long var113 /* : Int */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
short int var117 /* : Bool */;
val* var118 /* : ANodes[AClassdef] */;
val* var119 /* : Iterator[nullable Object] */;
short int var120 /* : Bool */;
val* var121 /* : nullable Object */;
val* var_nclassdef122 /* var nclassdef: AClassdef */;
val* var123 /* : nullable MClassDef */;
val* var_mclassdef124 /* var mclassdef: MClassDef */;
val* var125 /* : HashMap[MClass, MClassType] */;
val* var_superclasses /* var superclasses: HashMap[MClass, MClassType] */;
val* var126 /* : nullable POSetElement[MClassDef] */;
val* var127 /* : Collection[Object] */;
val* var128 /* : Iterator[nullable Object] */;
short int var129 /* : Bool */;
val* var130 /* : nullable Object */;
val* var_scd /* var scd: MClassDef */;
val* var131 /* : Array[MClassType] */;
val* var132 /* : Iterator[nullable Object] */;
short int var133 /* : Bool */;
val* var134 /* : nullable Object */;
val* var_st /* var st: MClassType */;
val* var135 /* : MClass */;
short int var136 /* : Bool */;
short int var137 /* : Bool */;
val* var138 /* : MClass */;
val* var139 /* : MClass */;
val* var140 /* : nullable Object */;
short int var141 /* : Bool */;
val* var142 /* : MClass */;
val* var143 /* : nullable Object */;
val* var144 /* : MClass */;
val* var145 /* : MClassType */;
val* var146 /* : MClassType */;
short int var147 /* : Bool */;
val* var148 /* : MType */;
val* var_st1 /* var st1: MClassType */;
val* var149 /* : MClass */;
val* var150 /* : MClassType */;
val* var151 /* : MClassType */;
short int var152 /* : Bool */;
val* var153 /* : MType */;
val* var_st2 /* var st2: MClassType */;
short int var154 /* : Bool */;
static val* varonce;
val* var155 /* : String */;
char* var156 /* : NativeString */;
long var157 /* : Int */;
val* var158 /* : String */;
val* var159 /* : MClass */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : NativeString */;
long var163 /* : Int */;
val* var164 /* : String */;
static val* varonce165;
val* var166 /* : String */;
char* var167 /* : NativeString */;
long var168 /* : Int */;
val* var169 /* : String */;
val* var170 /* : Array[Object] */;
long var171 /* : Int */;
val* var172 /* : NativeArray[Object] */;
val* var173 /* : String */;
val* var177 /* : ToolContext */;
long var178 /* : Int */;
short int var179 /* : Bool */;
short int var181 /* : Bool */;
short int var182 /* : Bool */;
val* var183 /* : ANodes[AClassdef] */;
val* var184 /* : Iterator[nullable Object] */;
short int var185 /* : Bool */;
val* var186 /* : nullable Object */;
val* var_nclassdef187 /* var nclassdef: AClassdef */;
short int var188 /* : Bool */;
int cltype189;
int idtype190;
short int var191 /* : Bool */;
val* var193 /* : nullable MClassDef */;
val* var_mclassdef194 /* var mclassdef: MClassDef */;
val* var195 /* : Array[MClass] */;
val* var_parents /* var parents: Array[MClass] */;
val* var196 /* : nullable POSetElement[MClassDef] */;
val* var197 /* : Collection[Object] */;
val* var198 /* : Iterator[nullable Object] */;
short int var199 /* : Bool */;
val* var200 /* : nullable Object */;
val* var_sup /* var sup: MClassDef */;
val* var201 /* : MClass */;
val* var203 /* : ArrayMap[MClass, AType] */;
val* var_seen_parents /* var seen_parents: ArrayMap[MClass, AType] */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : NativeString */;
long var207 /* : Int */;
val* var208 /* : String */;
val* var209 /* : nullable MClass */;
val* var_objectclass /* var objectclass: nullable MClass */;
val* var210 /* : ANodes[ASuperclass] */;
val* var211 /* : Iterator[nullable Object] */;
short int var212 /* : Bool */;
val* var213 /* : nullable Object */;
val* var_nsc214 /* var nsc: ASuperclass */;
val* var215 /* : AType */;
val* var_ntype216 /* var ntype: AType */;
val* var217 /* : nullable MType */;
val* var_mtype218 /* var mtype: nullable MType */;
val* var219 /* : null */;
short int var220 /* : Bool */;
short int var222 /* : Bool */;
int cltype223;
int idtype224;
val* var225 /* : MClass */;
val* var_sc /* var sc: MClass */;
short int var226 /* : Bool */;
short int var227 /* : Bool */;
short int var228 /* : Bool */;
short int var_229 /* var : Bool */;
short int var230 /* : Bool */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : NativeString */;
long var234 /* : Int */;
val* var235 /* : String */;
static val* varonce236;
val* var237 /* : String */;
char* var238 /* : NativeString */;
long var239 /* : Int */;
val* var240 /* : String */;
val* var241 /* : MClass */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : NativeString */;
long var245 /* : Int */;
val* var246 /* : String */;
val* var247 /* : Array[Object] */;
long var248 /* : Int */;
val* var249 /* : NativeArray[Object] */;
val* var250 /* : String */;
short int var251 /* : Bool */;
short int var252 /* : Bool */;
static val* varonce253;
val* var254 /* : String */;
char* var255 /* : NativeString */;
long var256 /* : Int */;
val* var257 /* : String */;
static val* varonce258;
val* var259 /* : String */;
char* var260 /* : NativeString */;
long var261 /* : Int */;
val* var262 /* : String */;
val* var263 /* : MClass */;
static val* varonce264;
val* var265 /* : String */;
char* var266 /* : NativeString */;
long var267 /* : Int */;
val* var268 /* : String */;
val* var269 /* : Array[Object] */;
long var270 /* : Int */;
val* var271 /* : NativeArray[Object] */;
val* var272 /* : String */;
var_nmodule = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var1 = ((long (*)(val*))(var->class->vft[COLOR_toolcontext__ToolContext__error_count]))(var) /* error_count on <var:ToolContext>*/;
var_errcount = var1;
var2 = ((short int (*)(val*))(var_nmodule->class->vft[COLOR_modelize_class__AModule__build_classes_is_done]))(var_nmodule) /* build_classes_is_done on <var_nmodule:AModule>*/;
if (var2){
goto RET_LABEL;
} else {
}
var3 = 1;
((void (*)(val*, short int))(var_nmodule->class->vft[COLOR_modelize_class__AModule__build_classes_is_done_61d]))(var_nmodule, var3) /* build_classes_is_done= on <var_nmodule:AModule>*/;
var4 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var_nmodule) /* mmodule on <var_nmodule:AModule>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 235);
show_backtrace(1);
}
var_mmodule = var4;
var5 = ((val* (*)(val*))(var_mmodule->class->vft[COLOR_mmodule__MModule__in_importation]))(var_mmodule) /* in_importation on <var_mmodule:MModule>*/;
var6 = ((val* (*)(val*))(var5->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var5) /* direct_greaters on <var5:POSetElement[MModule]>*/;
var7 = ((val* (*)(val*))(var6->class->vft[COLOR_abstract_collection__Collection__iterator]))(var6) /* iterator on <var6:Collection[Object](Collection[MModule])>*/;
for(;;) {
var8 = ((short int (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var7) /* is_ok on <var7:Iterator[nullable Object]>*/;
if(!var8) break;
var9 = ((val* (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__item]))(var7) /* item on <var7:Iterator[nullable Object]>*/;
var_imp = var9;
var10 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__mmodule2nmodule]))(self) /* mmodule2nmodule on <self:ModelBuilder>*/;
var11 = ((val* (*)(val*, val*))(var10->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var10, var_imp) /* [] on <var10:HashMap[MModule, AModule]>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_modelize_class__ModelBuilder__build_classes]))(self, var11) /* build_classes on <self:ModelBuilder>*/;
CONTINUE_label: (void)0;
((void (*)(val*))(var7->class->vft[COLOR_abstract_collection__Iterator__next]))(var7) /* next on <var7:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
var12 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var13 = ((long (*)(val*))(var12->class->vft[COLOR_toolcontext__ToolContext__error_count]))(var12) /* error_count on <var12:ToolContext>*/;
{ /* Inline kernel#Int#!= (var_errcount,var13) */
var16 = var_errcount == var13;
var17 = !var16;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
if (var14){
goto RET_LABEL;
} else {
}
var18 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var_nmodule) /* n_classdefs on <var_nmodule:AModule>*/;
var19 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_collection__Collection__iterator]))(var18) /* iterator on <var18:ANodes[AClassdef]>*/;
for(;;) {
var20 = ((short int (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var19) /* is_ok on <var19:Iterator[nullable Object]>*/;
if(!var20) break;
var21 = ((val* (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__item]))(var19) /* item on <var19:Iterator[nullable Object]>*/;
var_nclassdef = var21;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelize_class__ModelBuilder__build_a_mclass]))(self, var_nmodule, var_nclassdef) /* build_a_mclass on <self:ModelBuilder>*/;
CONTINUE_label22: (void)0;
((void (*)(val*))(var19->class->vft[COLOR_abstract_collection__Iterator__next]))(var19) /* next on <var19:Iterator[nullable Object]>*/;
}
BREAK_label22: (void)0;
var23 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var24 = ((long (*)(val*))(var23->class->vft[COLOR_toolcontext__ToolContext__error_count]))(var23) /* error_count on <var23:ToolContext>*/;
{ /* Inline kernel#Int#!= (var_errcount,var24) */
var27 = var_errcount == var24;
var28 = !var27;
var25 = var28;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
if (var25){
goto RET_LABEL;
} else {
}
var29 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var_nmodule) /* n_classdefs on <var_nmodule:AModule>*/;
var30 = ((val* (*)(val*))(var29->class->vft[COLOR_abstract_collection__Collection__iterator]))(var29) /* iterator on <var29:ANodes[AClassdef]>*/;
for(;;) {
var31 = ((short int (*)(val*))(var30->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var30) /* is_ok on <var30:Iterator[nullable Object]>*/;
if(!var31) break;
var32 = ((val* (*)(val*))(var30->class->vft[COLOR_abstract_collection__Iterator__item]))(var30) /* item on <var30:Iterator[nullable Object]>*/;
var_nclassdef33 = var32;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelize_class__ModelBuilder__build_a_mclassdef]))(self, var_nmodule, var_nclassdef33) /* build_a_mclassdef on <self:ModelBuilder>*/;
CONTINUE_label34: (void)0;
((void (*)(val*))(var30->class->vft[COLOR_abstract_collection__Iterator__next]))(var30) /* next on <var30:Iterator[nullable Object]>*/;
}
BREAK_label34: (void)0;
var35 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var36 = ((long (*)(val*))(var35->class->vft[COLOR_toolcontext__ToolContext__error_count]))(var35) /* error_count on <var35:ToolContext>*/;
{ /* Inline kernel#Int#!= (var_errcount,var36) */
var39 = var_errcount == var36;
var40 = !var39;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
if (var37){
goto RET_LABEL;
} else {
}
var41 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var_nmodule) /* n_classdefs on <var_nmodule:AModule>*/;
var42 = ((val* (*)(val*))(var41->class->vft[COLOR_abstract_collection__Collection__iterator]))(var41) /* iterator on <var41:ANodes[AClassdef]>*/;
for(;;) {
var43 = ((short int (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var42) /* is_ok on <var42:Iterator[nullable Object]>*/;
if(!var43) break;
var44 = ((val* (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__item]))(var42) /* item on <var42:Iterator[nullable Object]>*/;
var_nclassdef45 = var44;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelize_class__ModelBuilder__collect_a_mclassdef_inheritance]))(self, var_nmodule, var_nclassdef45) /* collect_a_mclassdef_inheritance on <self:ModelBuilder>*/;
CONTINUE_label46: (void)0;
((void (*)(val*))(var42->class->vft[COLOR_abstract_collection__Iterator__next]))(var42) /* next on <var42:Iterator[nullable Object]>*/;
}
BREAK_label46: (void)0;
var47 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var48 = ((long (*)(val*))(var47->class->vft[COLOR_toolcontext__ToolContext__error_count]))(var47) /* error_count on <var47:ToolContext>*/;
{ /* Inline kernel#Int#!= (var_errcount,var48) */
var51 = var_errcount == var48;
var52 = !var51;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
if (var49){
goto RET_LABEL;
} else {
}
var53 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var_nmodule) /* n_classdefs on <var_nmodule:AModule>*/;
var54 = ((val* (*)(val*))(var53->class->vft[COLOR_abstract_collection__Collection__iterator]))(var53) /* iterator on <var53:ANodes[AClassdef]>*/;
for(;;) {
var55 = ((short int (*)(val*))(var54->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var54) /* is_ok on <var54:Iterator[nullable Object]>*/;
if(!var55) break;
var56 = ((val* (*)(val*))(var54->class->vft[COLOR_abstract_collection__Iterator__item]))(var54) /* item on <var54:Iterator[nullable Object]>*/;
var_nclassdef57 = var56;
var58 = ((val* (*)(val*))(var_nclassdef57->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef57) /* mclassdef on <var_nclassdef57:AClassdef>*/;
if (var58 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 266);
show_backtrace(1);
}
var_mclassdef = var58;
((void (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__add_in_hierarchy]))(var_mclassdef) /* add_in_hierarchy on <var_mclassdef:MClassDef>*/;
CONTINUE_label59: (void)0;
((void (*)(val*))(var54->class->vft[COLOR_abstract_collection__Iterator__next]))(var54) /* next on <var54:Iterator[nullable Object]>*/;
}
BREAK_label59: (void)0;
var60 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var61 = ((long (*)(val*))(var60->class->vft[COLOR_toolcontext__ToolContext__error_count]))(var60) /* error_count on <var60:ToolContext>*/;
{ /* Inline kernel#Int#!= (var_errcount,var61) */
var64 = var_errcount == var61;
var65 = !var64;
var62 = var65;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
if (var62){
goto RET_LABEL;
} else {
}
var66 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var_nmodule) /* n_classdefs on <var_nmodule:AModule>*/;
var67 = ((val* (*)(val*))(var66->class->vft[COLOR_abstract_collection__Collection__iterator]))(var66) /* iterator on <var66:ANodes[AClassdef]>*/;
for(;;) {
var68 = ((short int (*)(val*))(var67->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var67) /* is_ok on <var67:Iterator[nullable Object]>*/;
if(!var68) break;
var69 = ((val* (*)(val*))(var67->class->vft[COLOR_abstract_collection__Iterator__item]))(var67) /* item on <var67:Iterator[nullable Object]>*/;
var_nclassdef70 = var69;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelize_class__ModelBuilder__check_supertypes]))(self, var_nmodule, var_nclassdef70) /* check_supertypes on <self:ModelBuilder>*/;
CONTINUE_label71: (void)0;
((void (*)(val*))(var67->class->vft[COLOR_abstract_collection__Iterator__next]))(var67) /* next on <var67:Iterator[nullable Object]>*/;
}
BREAK_label71: (void)0;
var72 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var73 = ((long (*)(val*))(var72->class->vft[COLOR_toolcontext__ToolContext__error_count]))(var72) /* error_count on <var72:ToolContext>*/;
{ /* Inline kernel#Int#!= (var_errcount,var73) */
var76 = var_errcount == var73;
var77 = !var76;
var74 = var77;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
if (var74){
goto RET_LABEL;
} else {
}
var78 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var_nmodule) /* n_classdefs on <var_nmodule:AModule>*/;
var79 = ((val* (*)(val*))(var78->class->vft[COLOR_abstract_collection__Collection__iterator]))(var78) /* iterator on <var78:ANodes[AClassdef]>*/;
for(;;) {
var80 = ((short int (*)(val*))(var79->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var79) /* is_ok on <var79:Iterator[nullable Object]>*/;
if(!var80) break;
var81 = ((val* (*)(val*))(var79->class->vft[COLOR_abstract_collection__Iterator__item]))(var79) /* item on <var79:Iterator[nullable Object]>*/;
var_nclassdef82 = var81;
/* <var_nclassdef82:AClassdef> isa AStdClassdef */
cltype = type_parser_nodes__AStdClassdef.color;
idtype = type_parser_nodes__AStdClassdef.id;
if(cltype >= var_nclassdef82->type->table_size) {
var83 = 0;
} else {
var83 = var_nclassdef82->type->type_table[cltype] == idtype;
}
if (var83){
var84 = ((val* (*)(val*))(var_nclassdef82->class->vft[COLOR_parser_nodes__AStdClassdef__n_formaldefs]))(var_nclassdef82) /* n_formaldefs on <var_nclassdef82:AClassdef(AStdClassdef)>*/;
var85 = ((val* (*)(val*))(var84->class->vft[COLOR_abstract_collection__Collection__iterator]))(var84) /* iterator on <var84:ANodes[AFormaldef]>*/;
for(;;) {
var86 = ((short int (*)(val*))(var85->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var85) /* is_ok on <var85:Iterator[nullable Object]>*/;
if(!var86) break;
var87 = ((val* (*)(val*))(var85->class->vft[COLOR_abstract_collection__Iterator__item]))(var85) /* item on <var85:Iterator[nullable Object]>*/;
var_nfd = var87;
var88 = ((val* (*)(val*))(var_nfd->class->vft[COLOR_parser_nodes__AFormaldef__n_type]))(var_nfd) /* n_type on <var_nfd:AFormaldef>*/;
var_nfdt = var88;
var90 = NULL;
if (var_nfdt == NULL) {
var91 = 0; /* is null */
} else {
var91 = 1; /* arg is null and recv is not */
}
var_ = var91;
if (var91){
var92 = ((val* (*)(val*))(var_nfdt->class->vft[COLOR_modelize_class__AType__mtype]))(var_nfdt) /* mtype on <var_nfdt:nullable AType(AType)>*/;
var93 = NULL;
if (var92 == NULL) {
var94 = 0; /* is null */
} else {
var94 = 1; /* arg is null and recv is not */
}
var89 = var94;
} else {
var89 = var_;
}
if (var89){
var95 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_modelize_class__ModelBuilder__resolve_mtype]))(self, var_nclassdef82, var_nfdt) /* resolve_mtype on <self:ModelBuilder>*/;
var_bound = var95;
var96 = NULL;
if (var_bound == NULL) {
var97 = 1; /* is null */
} else {
var97 = 0; /* arg is null but recv is not */
}
if (var97){
goto RET_LABEL;
} else {
}
} else {
}
CONTINUE_label98: (void)0;
((void (*)(val*))(var85->class->vft[COLOR_abstract_collection__Iterator__next]))(var85) /* next on <var85:Iterator[nullable Object]>*/;
}
BREAK_label98: (void)0;
var99 = ((val* (*)(val*))(var_nclassdef82->class->vft[COLOR_parser_nodes__AStdClassdef__n_superclasses]))(var_nclassdef82) /* n_superclasses on <var_nclassdef82:AClassdef(AStdClassdef)>*/;
var100 = ((val* (*)(val*))(var99->class->vft[COLOR_abstract_collection__Collection__iterator]))(var99) /* iterator on <var99:ANodes[ASuperclass]>*/;
for(;;) {
var101 = ((short int (*)(val*))(var100->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var100) /* is_ok on <var100:Iterator[nullable Object]>*/;
if(!var101) break;
var102 = ((val* (*)(val*))(var100->class->vft[COLOR_abstract_collection__Iterator__item]))(var100) /* item on <var100:Iterator[nullable Object]>*/;
var_nsc = var102;
var103 = ((val* (*)(val*))(var_nsc->class->vft[COLOR_parser_nodes__ASuperclass__n_type]))(var_nsc) /* n_type on <var_nsc:ASuperclass>*/;
var_ntype = var103;
var104 = ((val* (*)(val*))(var_ntype->class->vft[COLOR_modelize_class__AType__mtype]))(var_ntype) /* mtype on <var_ntype:AType>*/;
var105 = NULL;
if (var104 == NULL) {
var106 = 0; /* is null */
} else {
var106 = 1; /* arg is null and recv is not */
}
if (var106){
var107 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_modelize_class__ModelBuilder__resolve_mtype]))(self, var_nclassdef82, var_ntype) /* resolve_mtype on <self:ModelBuilder>*/;
var_mtype = var107;
var108 = NULL;
if (var_mtype == NULL) {
var109 = 1; /* is null */
} else {
var109 = 0; /* arg is null but recv is not */
}
if (var109){
goto RET_LABEL;
} else {
}
} else {
}
CONTINUE_label110: (void)0;
((void (*)(val*))(var100->class->vft[COLOR_abstract_collection__Iterator__next]))(var100) /* next on <var100:Iterator[nullable Object]>*/;
}
BREAK_label110: (void)0;
} else {
}
CONTINUE_label111: (void)0;
((void (*)(val*))(var79->class->vft[COLOR_abstract_collection__Iterator__next]))(var79) /* next on <var79:Iterator[nullable Object]>*/;
}
BREAK_label111: (void)0;
var112 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var113 = ((long (*)(val*))(var112->class->vft[COLOR_toolcontext__ToolContext__error_count]))(var112) /* error_count on <var112:ToolContext>*/;
{ /* Inline kernel#Int#!= (var_errcount,var113) */
var116 = var_errcount == var113;
var117 = !var116;
var114 = var117;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
if (var114){
goto RET_LABEL;
} else {
}
var118 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var_nmodule) /* n_classdefs on <var_nmodule:AModule>*/;
var119 = ((val* (*)(val*))(var118->class->vft[COLOR_abstract_collection__Collection__iterator]))(var118) /* iterator on <var118:ANodes[AClassdef]>*/;
for(;;) {
var120 = ((short int (*)(val*))(var119->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var119) /* is_ok on <var119:Iterator[nullable Object]>*/;
if(!var120) break;
var121 = ((val* (*)(val*))(var119->class->vft[COLOR_abstract_collection__Iterator__item]))(var119) /* item on <var119:Iterator[nullable Object]>*/;
var_nclassdef122 = var121;
var123 = ((val* (*)(val*))(var_nclassdef122->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef122) /* mclassdef on <var_nclassdef122:AClassdef>*/;
if (var123 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 305);
show_backtrace(1);
}
var_mclassdef124 = var123;
var125 = NEW_hash_collection__HashMap(&type_hash_collection__HashMapmodel__MClassmodel__MClassType);
((void (*)(val*))(var125->class->vft[COLOR_hash_collection__HashMap__init]))(var125) /* init on <var125:HashMap[MClass, MClassType]>*/;
var_superclasses = var125;
var126 = ((val* (*)(val*))(var_mclassdef124->class->vft[COLOR_model__MClassDef__in_hierarchy]))(var_mclassdef124) /* in_hierarchy on <var_mclassdef124:MClassDef>*/;
if (var126 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 307);
show_backtrace(1);
} else {
var127 = ((val* (*)(val*))(var126->class->vft[COLOR_poset__POSetElement__greaters]))(var126) /* greaters on <var126:nullable POSetElement[MClassDef]>*/;
}
var128 = ((val* (*)(val*))(var127->class->vft[COLOR_abstract_collection__Collection__iterator]))(var127) /* iterator on <var127:Collection[Object](Collection[MClassDef])>*/;
for(;;) {
var129 = ((short int (*)(val*))(var128->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var128) /* is_ok on <var128:Iterator[nullable Object]>*/;
if(!var129) break;
var130 = ((val* (*)(val*))(var128->class->vft[COLOR_abstract_collection__Iterator__item]))(var128) /* item on <var128:Iterator[nullable Object]>*/;
var_scd = var130;
var131 = ((val* (*)(val*))(var_scd->class->vft[COLOR_model__MClassDef__supertypes]))(var_scd) /* supertypes on <var_scd:MClassDef>*/;
var132 = ((val* (*)(val*))(var131->class->vft[COLOR_abstract_collection__Collection__iterator]))(var131) /* iterator on <var131:Array[MClassType]>*/;
for(;;) {
var133 = ((short int (*)(val*))(var132->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var132) /* is_ok on <var132:Iterator[nullable Object]>*/;
if(!var133) break;
var134 = ((val* (*)(val*))(var132->class->vft[COLOR_abstract_collection__Iterator__item]))(var132) /* item on <var132:Iterator[nullable Object]>*/;
var_st = var134;
var135 = ((val* (*)(val*))(var_st->class->vft[COLOR_model__MClassType__mclass]))(var_st) /* mclass on <var_st:MClassType>*/;
var136 = ((short int (*)(val*, val*))(var_superclasses->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var_superclasses, var135) /* has_key on <var_superclasses:HashMap[MClass, MClassType]>*/;
var137 = !var136;
if (var137){
var138 = ((val* (*)(val*))(var_st->class->vft[COLOR_model__MClassType__mclass]))(var_st) /* mclass on <var_st:MClassType>*/;
((void (*)(val*, val*, val*))(var_superclasses->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_superclasses, var138, var_st) /* []= on <var_superclasses:HashMap[MClass, MClassType]>*/;
} else {
var139 = ((val* (*)(val*))(var_st->class->vft[COLOR_model__MClassType__mclass]))(var_st) /* mclass on <var_st:MClassType>*/;
var140 = ((val* (*)(val*, val*))(var_superclasses->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_superclasses, var139) /* [] on <var_superclasses:HashMap[MClass, MClassType]>*/;
var141 = ((short int (*)(val*, val*))(var140->class->vft[COLOR_kernel__Object___33d_61d]))(var140, var_st) /* != on <var140:nullable Object(MClassType)>*/;
if (var141){
var142 = ((val* (*)(val*))(var_st->class->vft[COLOR_model__MClassType__mclass]))(var_st) /* mclass on <var_st:MClassType>*/;
var143 = ((val* (*)(val*, val*))(var_superclasses->class->vft[COLOR_abstract_collection__MapRead___91d_93d]))(var_superclasses, var142) /* [] on <var_superclasses:HashMap[MClass, MClassType]>*/;
var144 = ((val* (*)(val*))(var_mclassdef124->class->vft[COLOR_model__MClassDef__mclass]))(var_mclassdef124) /* mclass on <var_mclassdef124:MClassDef>*/;
var145 = ((val* (*)(val*))(var144->class->vft[COLOR_model__MClass__mclass_type]))(var144) /* mclass_type on <var144:MClass>*/;
var146 = ((val* (*)(val*))(var_mclassdef124->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_mclassdef124) /* bound_mtype on <var_mclassdef124:MClassDef>*/;
var147 = 0;
var148 = ((val* (*)(val*, val*, val*, val*, short int))(var143->class->vft[COLOR_model__MType__resolve_for]))(var143, var145, var146, var_mmodule, var147) /* resolve_for on <var143:nullable Object(MClassType)>*/;
var_st1 = var148;
var149 = ((val* (*)(val*))(var_mclassdef124->class->vft[COLOR_model__MClassDef__mclass]))(var_mclassdef124) /* mclass on <var_mclassdef124:MClassDef>*/;
var150 = ((val* (*)(val*))(var149->class->vft[COLOR_model__MClass__mclass_type]))(var149) /* mclass_type on <var149:MClass>*/;
var151 = ((val* (*)(val*))(var_mclassdef124->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_mclassdef124) /* bound_mtype on <var_mclassdef124:MClassDef>*/;
var152 = 0;
var153 = ((val* (*)(val*, val*, val*, val*, short int))(var_st->class->vft[COLOR_model__MType__resolve_for]))(var_st, var150, var151, var_mmodule, var152) /* resolve_for on <var_st:MClassType>*/;
var_st2 = var153;
var154 = ((short int (*)(val*, val*))(var_st1->class->vft[COLOR_kernel__Object___33d_61d]))(var_st1, var_st2) /* != on <var_st1:MClassType>*/;
if (var154){
if (varonce) {
var155 = varonce;
} else {
var156 = "Error: Incompatibles ancestors for ";
var157 = 35;
var158 = string__NativeString__to_s_with_length(var156, var157);
var155 = var158;
varonce = var155;
}
var159 = ((val* (*)(val*))(var_mclassdef124->class->vft[COLOR_model__MClassDef__mclass]))(var_mclassdef124) /* mclass on <var_mclassdef124:MClassDef>*/;
if (varonce160) {
var161 = varonce160;
} else {
var162 = ": ";
var163 = 2;
var164 = string__NativeString__to_s_with_length(var162, var163);
var161 = var164;
varonce160 = var161;
}
if (varonce165) {
var166 = varonce165;
} else {
var167 = ", ";
var168 = 2;
var169 = string__NativeString__to_s_with_length(var167, var168);
var166 = var169;
varonce165 = var166;
}
var170 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var170 = array_instance Array[Object] */
var171 = 6;
var172 = NEW_array__NativeArray(var171, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var172)->values[0] = (val*) var155;
((struct instance_array__NativeArray*)var172)->values[1] = (val*) var159;
((struct instance_array__NativeArray*)var172)->values[2] = (val*) var161;
((struct instance_array__NativeArray*)var172)->values[3] = (val*) var_st1;
((struct instance_array__NativeArray*)var172)->values[4] = (val*) var166;
((struct instance_array__NativeArray*)var172)->values[5] = (val*) var_st2;
((void (*)(val*, val*, long))(var170->class->vft[COLOR_array__Array__with_native]))(var170, var172, var171) /* with_native on <var170:Array[Object]>*/;
}
var173 = ((val* (*)(val*))(var170->class->vft[COLOR_string__Object__to_s]))(var170) /* to_s on <var170:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_nclassdef122, var173) /* error on <self:ModelBuilder>*/;
} else {
}
} else {
}
}
CONTINUE_label174: (void)0;
((void (*)(val*))(var132->class->vft[COLOR_abstract_collection__Iterator__next]))(var132) /* next on <var132:Iterator[nullable Object]>*/;
}
BREAK_label174: (void)0;
CONTINUE_label175: (void)0;
((void (*)(val*))(var128->class->vft[COLOR_abstract_collection__Iterator__next]))(var128) /* next on <var128:Iterator[nullable Object]>*/;
}
BREAK_label175: (void)0;
CONTINUE_label176: (void)0;
((void (*)(val*))(var119->class->vft[COLOR_abstract_collection__Iterator__next]))(var119) /* next on <var119:Iterator[nullable Object]>*/;
}
BREAK_label176: (void)0;
var177 = ((val* (*)(val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__toolcontext]))(self) /* toolcontext on <self:ModelBuilder>*/;
var178 = ((long (*)(val*))(var177->class->vft[COLOR_toolcontext__ToolContext__error_count]))(var177) /* error_count on <var177:ToolContext>*/;
{ /* Inline kernel#Int#!= (var_errcount,var178) */
var181 = var_errcount == var178;
var182 = !var181;
var179 = var182;
goto RET_LABEL180;
RET_LABEL180:(void)0;
}
if (var179){
goto RET_LABEL;
} else {
}
var183 = ((val* (*)(val*))(var_nmodule->class->vft[COLOR_parser_nodes__AModule__n_classdefs]))(var_nmodule) /* n_classdefs on <var_nmodule:AModule>*/;
var184 = ((val* (*)(val*))(var183->class->vft[COLOR_abstract_collection__Collection__iterator]))(var183) /* iterator on <var183:ANodes[AClassdef]>*/;
for(;;) {
var185 = ((short int (*)(val*))(var184->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var184) /* is_ok on <var184:Iterator[nullable Object]>*/;
if(!var185) break;
var186 = ((val* (*)(val*))(var184->class->vft[COLOR_abstract_collection__Iterator__item]))(var184) /* item on <var184:Iterator[nullable Object]>*/;
var_nclassdef187 = var186;
/* <var_nclassdef187:AClassdef> isa AStdClassdef */
cltype189 = type_parser_nodes__AStdClassdef.color;
idtype190 = type_parser_nodes__AStdClassdef.id;
if(cltype189 >= var_nclassdef187->type->table_size) {
var188 = 0;
} else {
var188 = var_nclassdef187->type->type_table[cltype189] == idtype190;
}
var191 = !var188;
if (var191){
goto CONTINUE_label192;
} else {
}
var193 = ((val* (*)(val*))(var_nclassdef187->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef187) /* mclassdef on <var_nclassdef187:AClassdef(AStdClassdef)>*/;
if (var193 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 329);
show_backtrace(1);
}
var_mclassdef194 = var193;
var195 = NEW_array__Array(&type_array__Arraymodel__MClass);
((void (*)(val*))(var195->class->vft[COLOR_array__Array__init]))(var195) /* init on <var195:Array[MClass]>*/;
var_parents = var195;
var196 = ((val* (*)(val*))(var_mclassdef194->class->vft[COLOR_model__MClassDef__in_hierarchy]))(var_mclassdef194) /* in_hierarchy on <var_mclassdef194:MClassDef>*/;
if (var196 == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 334);
show_backtrace(1);
} else {
var197 = ((val* (*)(val*))(var196->class->vft[COLOR_poset__POSetElement__direct_greaters]))(var196) /* direct_greaters on <var196:nullable POSetElement[MClassDef]>*/;
}
var198 = ((val* (*)(val*))(var197->class->vft[COLOR_abstract_collection__Collection__iterator]))(var197) /* iterator on <var197:Collection[Object](Collection[MClassDef])>*/;
for(;;) {
var199 = ((short int (*)(val*))(var198->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var198) /* is_ok on <var198:Iterator[nullable Object]>*/;
if(!var199) break;
var200 = ((val* (*)(val*))(var198->class->vft[COLOR_abstract_collection__Iterator__item]))(var198) /* item on <var198:Iterator[nullable Object]>*/;
var_sup = var200;
var201 = ((val* (*)(val*))(var_sup->class->vft[COLOR_model__MClassDef__mclass]))(var_sup) /* mclass on <var_sup:MClassDef>*/;
((void (*)(val*, val*))(var_parents->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_parents, var201) /* add on <var_parents:Array[MClass]>*/;
CONTINUE_label202: (void)0;
((void (*)(val*))(var198->class->vft[COLOR_abstract_collection__Iterator__next]))(var198) /* next on <var198:Iterator[nullable Object]>*/;
}
BREAK_label202: (void)0;
var203 = NEW_array__ArrayMap(&type_array__ArrayMapmodel__MClassparser_nodes__AType);
((void (*)(val*))(var203->class->vft[COLOR_array__ArrayMap__init]))(var203) /* init on <var203:ArrayMap[MClass, AType]>*/;
var_seen_parents = var203;
if (varonce204) {
var205 = varonce204;
} else {
var206 = "Object";
var207 = 6;
var208 = string__NativeString__to_s_with_length(var206, var207);
var205 = var208;
varonce204 = var205;
}
var209 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mclass_by_name]))(self, var_nmodule, var_mmodule, var205) /* try_get_mclass_by_name on <self:ModelBuilder>*/;
var_objectclass = var209;
var210 = ((val* (*)(val*))(var_nclassdef187->class->vft[COLOR_parser_nodes__AStdClassdef__n_superclasses]))(var_nclassdef187) /* n_superclasses on <var_nclassdef187:AClassdef(AStdClassdef)>*/;
var211 = ((val* (*)(val*))(var210->class->vft[COLOR_abstract_collection__Collection__iterator]))(var210) /* iterator on <var210:ANodes[ASuperclass]>*/;
for(;;) {
var212 = ((short int (*)(val*))(var211->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var211) /* is_ok on <var211:Iterator[nullable Object]>*/;
if(!var212) break;
var213 = ((val* (*)(val*))(var211->class->vft[COLOR_abstract_collection__Iterator__item]))(var211) /* item on <var211:Iterator[nullable Object]>*/;
var_nsc214 = var213;
var215 = ((val* (*)(val*))(var_nsc214->class->vft[COLOR_parser_nodes__ASuperclass__n_type]))(var_nsc214) /* n_type on <var_nsc214:ASuperclass>*/;
var_ntype216 = var215;
var217 = ((val* (*)(val*))(var_ntype216->class->vft[COLOR_modelize_class__AType__mtype]))(var_ntype216) /* mtype on <var_ntype216:AType>*/;
var_mtype218 = var217;
var219 = NULL;
if (var_mtype218 == NULL) {
var220 = 1; /* is null */
} else {
var220 = 0; /* arg is null but recv is not */
}
if (var220){
goto CONTINUE_label221;
} else {
}
/* <var_mtype218:nullable MType(MType)> isa MClassType */
cltype223 = type_model__MClassType.color;
idtype224 = type_model__MClassType.id;
if(cltype223 >= var_mtype218->type->table_size) {
var222 = 0;
} else {
var222 = var_mtype218->type->type_table[cltype223] == idtype224;
}
if (!var222) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 349);
show_backtrace(1);
}
var225 = ((val* (*)(val*))(var_mtype218->class->vft[COLOR_model__MClassType__mclass]))(var_mtype218) /* mclass on <var_mtype218:nullable MType(MClassType)>*/;
var_sc = var225;
var227 = ((short int (*)(val*, val*))(var_parents->class->vft[COLOR_abstract_collection__Collection__has]))(var_parents, var_sc) /* has on <var_parents:Array[MClass]>*/;
var228 = !var227;
var_229 = var228;
if (var228){
var226 = var_229;
} else {
var230 = ((short int (*)(val*, val*))(var_sc->class->vft[COLOR_kernel__Object___61d_61d]))(var_sc, var_objectclass) /* == on <var_sc:MClass>*/;
var226 = var230;
}
if (var226){
if (varonce231) {
var232 = varonce231;
} else {
var233 = "Warning: superfluous super-class ";
var234 = 33;
var235 = string__NativeString__to_s_with_length(var233, var234);
var232 = var235;
varonce231 = var232;
}
if (varonce236) {
var237 = varonce236;
} else {
var238 = " in class ";
var239 = 10;
var240 = string__NativeString__to_s_with_length(var238, var239);
var237 = var240;
varonce236 = var237;
}
var241 = ((val* (*)(val*))(var_mclassdef194->class->vft[COLOR_model__MClassDef__mclass]))(var_mclassdef194) /* mclass on <var_mclassdef194:MClassDef>*/;
if (varonce242) {
var243 = varonce242;
} else {
var244 = ".";
var245 = 1;
var246 = string__NativeString__to_s_with_length(var244, var245);
var243 = var246;
varonce242 = var243;
}
var247 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var247 = array_instance Array[Object] */
var248 = 5;
var249 = NEW_array__NativeArray(var248, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var249)->values[0] = (val*) var232;
((struct instance_array__NativeArray*)var249)->values[1] = (val*) var_mtype218;
((struct instance_array__NativeArray*)var249)->values[2] = (val*) var237;
((struct instance_array__NativeArray*)var249)->values[3] = (val*) var241;
((struct instance_array__NativeArray*)var249)->values[4] = (val*) var243;
((void (*)(val*, val*, long))(var247->class->vft[COLOR_array__Array__with_native]))(var247, var249, var248) /* with_native on <var247:Array[Object]>*/;
}
var250 = ((val* (*)(val*))(var247->class->vft[COLOR_string__Object__to_s]))(var247) /* to_s on <var247:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__warning]))(self, var_ntype216, var250) /* warning on <self:ModelBuilder>*/;
} else {
var251 = ((short int (*)(val*, val*))(var_seen_parents->class->vft[COLOR_abstract_collection__MapRead__has_key]))(var_seen_parents, var_sc) /* has_key on <var_seen_parents:ArrayMap[MClass, AType]>*/;
var252 = !var251;
if (var252){
((void (*)(val*, val*, val*))(var_seen_parents->class->vft[COLOR_abstract_collection__Map___91d_93d_61d]))(var_seen_parents, var_sc, var_ntype216) /* []= on <var_seen_parents:ArrayMap[MClass, AType]>*/;
} else {
if (varonce253) {
var254 = varonce253;
} else {
var255 = "Warning: duplicated super-class ";
var256 = 32;
var257 = string__NativeString__to_s_with_length(var255, var256);
var254 = var257;
varonce253 = var254;
}
if (varonce258) {
var259 = varonce258;
} else {
var260 = " in class ";
var261 = 10;
var262 = string__NativeString__to_s_with_length(var260, var261);
var259 = var262;
varonce258 = var259;
}
var263 = ((val* (*)(val*))(var_mclassdef194->class->vft[COLOR_model__MClassDef__mclass]))(var_mclassdef194) /* mclass on <var_mclassdef194:MClassDef>*/;
if (varonce264) {
var265 = varonce264;
} else {
var266 = ".";
var267 = 1;
var268 = string__NativeString__to_s_with_length(var266, var267);
var265 = var268;
varonce264 = var265;
}
var269 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var269 = array_instance Array[Object] */
var270 = 5;
var271 = NEW_array__NativeArray(var270, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var271)->values[0] = (val*) var254;
((struct instance_array__NativeArray*)var271)->values[1] = (val*) var_mtype218;
((struct instance_array__NativeArray*)var271)->values[2] = (val*) var259;
((struct instance_array__NativeArray*)var271)->values[3] = (val*) var263;
((struct instance_array__NativeArray*)var271)->values[4] = (val*) var265;
((void (*)(val*, val*, long))(var269->class->vft[COLOR_array__Array__with_native]))(var269, var271, var270) /* with_native on <var269:Array[Object]>*/;
}
var272 = ((val* (*)(val*))(var269->class->vft[COLOR_string__Object__to_s]))(var269) /* to_s on <var269:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__warning]))(self, var_ntype216, var272) /* warning on <self:ModelBuilder>*/;
}
}
CONTINUE_label221: (void)0;
((void (*)(val*))(var211->class->vft[COLOR_abstract_collection__Iterator__next]))(var211) /* next on <var211:Iterator[nullable Object]>*/;
}
BREAK_label221: (void)0;
CONTINUE_label192: (void)0;
((void (*)(val*))(var184->class->vft[COLOR_abstract_collection__Iterator__next]))(var184) /* next on <var184:Iterator[nullable Object]>*/;
}
BREAK_label192: (void)0;
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#build_classes for (self: Object, AModule) */
void VIRTUAL_modelize_class__ModelBuilder__build_classes(val* self, val* p0) {
modelize_class__ModelBuilder__build_classes(self, p0);
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#mclassdef2nclassdef for (self: ModelBuilder): HashMap[MClassDef, AClassdef] */
val* modelize_class__ModelBuilder__mclassdef2nclassdef(val* self) {
val* var /* : HashMap[MClassDef, AClassdef] */;
val* var1 /* : HashMap[MClassDef, AClassdef] */;
var1 = self->attrs[COLOR_modelize_class__ModelBuilder___64dmclassdef2nclassdef].val; /* @mclassdef2nclassdef on <self:ModelBuilder> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclassdef2nclassdef");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 362);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelBuilder#mclassdef2nclassdef for (self: Object): HashMap[MClassDef, AClassdef] */
val* VIRTUAL_modelize_class__ModelBuilder__mclassdef2nclassdef(val* self) {
val* var /* : HashMap[MClassDef, AClassdef] */;
val* var1 /* : HashMap[MClassDef, AClassdef] */;
var1 = modelize_class__ModelBuilder__mclassdef2nclassdef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelBuilder#mclassdef2nclassdef= for (self: ModelBuilder, HashMap[MClassDef, AClassdef]) */
void modelize_class__ModelBuilder__mclassdef2nclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_class__ModelBuilder___64dmclassdef2nclassdef].val = p0; /* @mclassdef2nclassdef on <self:ModelBuilder> */
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#mclassdef2nclassdef= for (self: Object, HashMap[MClassDef, AClassdef]) */
void VIRTUAL_modelize_class__ModelBuilder__mclassdef2nclassdef_61d(val* self, val* p0) {
modelize_class__ModelBuilder__mclassdef2nclassdef_61d(self, p0);
RET_LABEL:;
}
/* method modelize_class#ModelBuilder#resolve_mtype_unchecked for (self: ModelBuilder, AClassdef, AType, Bool): nullable MType */
val* modelize_class__ModelBuilder__resolve_mtype_unchecked(val* self, val* p0, val* p1, short int p2) {
val* var /* : nullable MType */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var_ntype /* var ntype: AType */;
short int var_with_virtual /* var with_virtual: Bool */;
val* var1 /* : TClassid */;
val* var2 /* : String */;
val* var_name /* var name: String */;
val* var3 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
val* var4 /* : nullable ANode */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var6 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
val* var10 /* : nullable MProperty */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
val* var_prop /* var prop: nullable MVirtualTypeProp */;
val* var15 /* : null */;
short int var16 /* : Bool */;
val* var17 /* : ANodes[AType] */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : NativeString */;
long var22 /* : Int */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : NativeString */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : Array[Object] */;
long var30 /* : Int */;
val* var31 /* : NativeArray[Object] */;
val* var32 /* : String */;
val* var33 /* : MVirtualType */;
val* var_res /* var res: MType */;
val* var34 /* : nullable TKwnullable */;
val* var35 /* : null */;
short int var36 /* : Bool */;
val* var37 /* : MType */;
short int var38 /* : Bool */;
val* var39 /* : null */;
short int var40 /* : Bool */;
short int var_ /* var : Bool */;
val* var41 /* : Array[String] */;
short int var42 /* : Bool */;
val* var43 /* : ANodes[AType] */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : NativeString */;
long var49 /* : Int */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : NativeString */;
long var54 /* : Int */;
val* var55 /* : String */;
val* var56 /* : Array[Object] */;
long var57 /* : Int */;
val* var58 /* : NativeArray[Object] */;
val* var59 /* : String */;
val* var60 /* : Range[Int] */;
long var61 /* : Int */;
val* var62 /* : Array[String] */;
long var63 /* : Int */;
val* var64 /* : Discrete */;
val* var65 /* : Discrete */;
val* var66 /* : Iterator[nullable Object] */;
short int var67 /* : Bool */;
val* var68 /* : nullable Object */;
long var_i /* var i: Int */;
long var69 /* : Int */;
val* var70 /* : Array[String] */;
val* var71 /* : nullable Object */;
short int var72 /* : Bool */;
val* var73 /* : MClass */;
val* var74 /* : MClassType */;
val* var75 /* : Array[MType] */;
val* var76 /* : nullable Object */;
val* var77 /* : nullable TKwnullable */;
val* var78 /* : null */;
short int var79 /* : Bool */;
val* var80 /* : MType */;
val* var81 /* : nullable MClass */;
val* var_mclass /* var mclass: nullable MClass */;
val* var82 /* : null */;
short int var83 /* : Bool */;
val* var84 /* : ANodes[AType] */;
long var85 /* : Int */;
long var_arity /* var arity: Int */;
long var86 /* : Int */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
long var91 /* : Int */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : NativeString */;
long var98 /* : Int */;
val* var99 /* : String */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : NativeString */;
long var103 /* : Int */;
val* var104 /* : String */;
val* var105 /* : Array[Object] */;
long var106 /* : Int */;
val* var107 /* : NativeArray[Object] */;
val* var108 /* : String */;
long var109 /* : Int */;
long var110 /* : Int */;
short int var111 /* : Bool */;
short int var113 /* : Bool */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : NativeString */;
long var117 /* : Int */;
val* var118 /* : String */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : NativeString */;
long var122 /* : Int */;
val* var123 /* : String */;
val* var124 /* : Array[Object] */;
long var125 /* : Int */;
val* var126 /* : NativeArray[Object] */;
val* var127 /* : String */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : NativeString */;
long var131 /* : Int */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : NativeString */;
long var136 /* : Int */;
val* var137 /* : String */;
long var138 /* : Int */;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : NativeString */;
long var142 /* : Int */;
val* var143 /* : String */;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : NativeString */;
long var147 /* : Int */;
val* var148 /* : String */;
val* var149 /* : Array[Object] */;
long var150 /* : Int */;
val* var151 /* : NativeArray[Object] */;
val* var152 /* : Object */;
val* var153 /* : Object */;
val* var154 /* : String */;
val* var155 /* : null */;
long var156 /* : Int */;
short int var157 /* : Bool */;
short int var159 /* : Bool */;
val* var160 /* : MClassType */;
val* var161 /* : nullable TKwnullable */;
val* var162 /* : null */;
short int var163 /* : Bool */;
val* var164 /* : MType */;
val* var165 /* : Array[MType] */;
val* var_mtypes /* var mtypes: Array[MType] */;
val* var166 /* : ANodes[AType] */;
val* var167 /* : Iterator[nullable Object] */;
short int var168 /* : Bool */;
val* var169 /* : nullable Object */;
val* var_nt /* var nt: AType */;
val* var170 /* : nullable MType */;
val* var_mt /* var mt: nullable MType */;
val* var171 /* : null */;
short int var172 /* : Bool */;
val* var173 /* : null */;
val* var175 /* : MClassType */;
val* var176 /* : nullable TKwnullable */;
val* var177 /* : null */;
short int var178 /* : Bool */;
val* var179 /* : MType */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : NativeString */;
long var183 /* : Int */;
val* var184 /* : String */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : NativeString */;
long var188 /* : Int */;
val* var189 /* : String */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : NativeString */;
long var193 /* : Int */;
val* var194 /* : String */;
val* var195 /* : Array[Object] */;
long var196 /* : Int */;
val* var197 /* : NativeArray[Object] */;
val* var198 /* : String */;
val* var199 /* : null */;
var_nclassdef = p0;
var_ntype = p1;
var_with_virtual = p2;
var1 = ((val* (*)(val*))(var_ntype->class->vft[COLOR_parser_nodes__AType__n_id]))(var_ntype) /* n_id on <var_ntype:AType>*/;
var2 = ((val* (*)(val*))(var1->class->vft[COLOR_parser_nodes__Token__text]))(var1) /* text on <var1:TClassid>*/;
var_name = var2;
var3 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
var_mclassdef = var3;
var4 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__ANode__parent]))(var_nclassdef) /* parent on <var_nclassdef:AClassdef>*/;
/* <var4:nullable ANode> isa AModule */
cltype = type_parser_nodes__AModule.color;
idtype = type_parser_nodes__AModule.id;
if(var4 == NULL) {
var5 = 0;
} else {
if(cltype >= var4->type->table_size) {
var5 = 0;
} else {
var5 = var4->type->type_table[cltype] == idtype;
}
}
if (!var5) {
var_class_name = var4 == NULL ? "null" : var4->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 375);
show_backtrace(1);
}
var6 = ((val* (*)(val*))(var4->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var4) /* mmodule on <var4:nullable ANode(AModule)>*/;
if (var6 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 375);
show_backtrace(1);
}
var_mmodule = var6;
var8 = NULL;
if (var_mclassdef == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
if (!var9) {
var7 = 0;
} else {
var7 = var_with_virtual;
}
if (var7){
var10 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mproperty_by_name]))(self, var_ntype, var_mclassdef, var_name) /* try_get_mproperty_by_name on <self:ModelBuilder>*/;
/* <var10:nullable MProperty> isa nullable MVirtualTypeProp */
cltype12 = type_nullable_model__MVirtualTypeProp.color;
idtype13 = type_nullable_model__MVirtualTypeProp.id;
if(var10 == NULL) {
var11 = 1;
} else {
if(cltype12 >= var10->type->table_size) {
var11 = 0;
} else {
var11 = var10->type->type_table[cltype12] == idtype13;
}
}
if (!var11) {
var_class_name14 = var10 == NULL ? "null" : var10->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MVirtualTypeProp", var_class_name14);
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 380);
show_backtrace(1);
}
var_prop = var10;
var15 = NULL;
if (var_prop == NULL) {
var16 = 0; /* is null */
} else {
var16 = 1; /* arg is null and recv is not */
}
if (var16){
var17 = ((val* (*)(val*))(var_ntype->class->vft[COLOR_parser_nodes__AType__n_types]))(var_ntype) /* n_types on <var_ntype:AType>*/;
var18 = ((short int (*)(val*))(var17->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var17) /* is_empty on <var17:ANodes[AType]>*/;
var19 = !var18;
if (var19){
if (varonce) {
var20 = varonce;
} else {
var21 = "Type error: formal type ";
var22 = 24;
var23 = string__NativeString__to_s_with_length(var21, var22);
var20 = var23;
varonce = var20;
}
if (varonce24) {
var25 = varonce24;
} else {
var26 = " cannot have formal parameters.";
var27 = 31;
var28 = string__NativeString__to_s_with_length(var26, var27);
var25 = var28;
varonce24 = var25;
}
var29 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var29 = array_instance Array[Object] */
var30 = 3;
var31 = NEW_array__NativeArray(var30, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var31)->values[0] = (val*) var20;
((struct instance_array__NativeArray*)var31)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var31)->values[2] = (val*) var25;
((void (*)(val*, val*, long))(var29->class->vft[COLOR_array__Array__with_native]))(var29, var31, var30) /* with_native on <var29:Array[Object]>*/;
}
var32 = ((val* (*)(val*))(var29->class->vft[COLOR_string__Object__to_s]))(var29) /* to_s on <var29:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_ntype, var32) /* error on <self:ModelBuilder>*/;
} else {
}
var33 = ((val* (*)(val*))(var_prop->class->vft[COLOR_model__MVirtualTypeProp__mvirtualtype]))(var_prop) /* mvirtualtype on <var_prop:nullable MVirtualTypeProp(MVirtualTypeProp)>*/;
var_res = var33;
var34 = ((val* (*)(val*))(var_ntype->class->vft[COLOR_parser_nodes__AType__n_kwnullable]))(var_ntype) /* n_kwnullable on <var_ntype:AType>*/;
var35 = NULL;
if (var34 == NULL) {
var36 = 0; /* is null */
} else {
var36 = 1; /* arg is null and recv is not */
}
if (var36){
var37 = ((val* (*)(val*))(var_res->class->vft[COLOR_model__MType__as_nullable]))(var_res) /* as_nullable on <var_res:MType(MVirtualType)>*/;
var_res = var37;
} else {
}
((void (*)(val*, val*))(var_ntype->class->vft[COLOR_modelize_class__AType__mtype_61d]))(var_ntype, var_res) /* mtype= on <var_ntype:AType>*/;
var = var_res;
goto RET_LABEL;
} else {
}
} else {
}
var39 = NULL;
if (var_mclassdef == NULL) {
var40 = 0; /* is null */
} else {
var40 = 1; /* arg is null and recv is not */
}
var_ = var40;
if (var40){
var41 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__parameter_names]))(var_mclassdef) /* parameter_names on <var_mclassdef:nullable MClassDef(MClassDef)>*/;
var42 = ((short int (*)(val*, val*))(var41->class->vft[COLOR_abstract_collection__Collection__has]))(var41, var_name) /* has on <var41:Array[String]>*/;
var38 = var42;
} else {
var38 = var_;
}
if (var38){
var43 = ((val* (*)(val*))(var_ntype->class->vft[COLOR_parser_nodes__AType__n_types]))(var_ntype) /* n_types on <var_ntype:AType>*/;
var44 = ((short int (*)(val*))(var43->class->vft[COLOR_abstract_collection__Collection__is_empty]))(var43) /* is_empty on <var43:ANodes[AType]>*/;
var45 = !var44;
if (var45){
if (varonce46) {
var47 = varonce46;
} else {
var48 = "Type error: formal type ";
var49 = 24;
var50 = string__NativeString__to_s_with_length(var48, var49);
var47 = var50;
varonce46 = var47;
}
if (varonce51) {
var52 = varonce51;
} else {
var53 = " cannot have formal parameters.";
var54 = 31;
var55 = string__NativeString__to_s_with_length(var53, var54);
var52 = var55;
varonce51 = var52;
}
var56 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var56 = array_instance Array[Object] */
var57 = 3;
var58 = NEW_array__NativeArray(var57, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var58)->values[0] = (val*) var47;
((struct instance_array__NativeArray*)var58)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var58)->values[2] = (val*) var52;
((void (*)(val*, val*, long))(var56->class->vft[COLOR_array__Array__with_native]))(var56, var58, var57) /* with_native on <var56:Array[Object]>*/;
}
var59 = ((val* (*)(val*))(var56->class->vft[COLOR_string__Object__to_s]))(var56) /* to_s on <var56:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_ntype, var59) /* error on <self:ModelBuilder>*/;
} else {
}
var60 = NEW_range__Range(&type_range__Rangekernel__Int);
var61 = 0;
var62 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__parameter_names]))(var_mclassdef) /* parameter_names on <var_mclassdef:nullable MClassDef(MClassDef)>*/;
var63 = ((long (*)(val*))(var62->class->vft[COLOR_abstract_collection__Collection__length]))(var62) /* length on <var62:Array[String]>*/;
var64 = BOX_kernel__Int(var61); /* autobox from Int to Discrete */
var65 = BOX_kernel__Int(var63); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var60->class->vft[COLOR_range__Range__without_last]))(var60, var64, var65) /* without_last on <var60:Range[Int]>*/;
var66 = ((val* (*)(val*))(var60->class->vft[COLOR_abstract_collection__Collection__iterator]))(var60) /* iterator on <var60:Range[Int]>*/;
for(;;) {
var67 = ((short int (*)(val*))(var66->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var66) /* is_ok on <var66:Iterator[nullable Object]>*/;
if(!var67) break;
var68 = ((val* (*)(val*))(var66->class->vft[COLOR_abstract_collection__Iterator__item]))(var66) /* item on <var66:Iterator[nullable Object]>*/;
var69 = ((struct instance_kernel__Int*)var68)->value; /* autounbox from nullable Object to Int */;
var_i = var69;
var70 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__parameter_names]))(var_mclassdef) /* parameter_names on <var_mclassdef:nullable MClassDef(MClassDef)>*/;
var71 = ((val* (*)(val*, long))(var70->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var70, var_i) /* [] on <var70:Array[String]>*/;
var72 = ((short int (*)(val*, val*))(var71->class->vft[COLOR_kernel__Object___61d_61d]))(var71, var_name) /* == on <var71:nullable Object(String)>*/;
if (var72){
var73 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__mclass]))(var_mclassdef) /* mclass on <var_mclassdef:nullable MClassDef(MClassDef)>*/;
var74 = ((val* (*)(val*))(var73->class->vft[COLOR_model__MClass__mclass_type]))(var73) /* mclass_type on <var73:MClass>*/;
var75 = ((val* (*)(val*))(var74->class->vft[COLOR_model__MClassType__arguments]))(var74) /* arguments on <var74:MClassType>*/;
var76 = ((val* (*)(val*, long))(var75->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var75, var_i) /* [] on <var75:Array[MType]>*/;
var_res = var76;
var77 = ((val* (*)(val*))(var_ntype->class->vft[COLOR_parser_nodes__AType__n_kwnullable]))(var_ntype) /* n_kwnullable on <var_ntype:AType>*/;
var78 = NULL;
if (var77 == NULL) {
var79 = 0; /* is null */
} else {
var79 = 1; /* arg is null and recv is not */
}
if (var79){
var80 = ((val* (*)(val*))(var_res->class->vft[COLOR_model__MType__as_nullable]))(var_res) /* as_nullable on <var_res:MType>*/;
var_res = var80;
} else {
}
((void (*)(val*, val*))(var_ntype->class->vft[COLOR_modelize_class__AType__mtype_61d]))(var_ntype, var_res) /* mtype= on <var_ntype:AType>*/;
var = var_res;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var66->class->vft[COLOR_abstract_collection__Iterator__next]))(var66) /* next on <var66:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
fprintf(stderr, "Runtime error: %s", "Aborted");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 405);
show_backtrace(1);
} else {
}
var81 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__try_get_mclass_by_name]))(self, var_ntype, var_mmodule, var_name) /* try_get_mclass_by_name on <self:ModelBuilder>*/;
var_mclass = var81;
var82 = NULL;
if (var_mclass == NULL) {
var83 = 0; /* is null */
} else {
var83 = 1; /* arg is null and recv is not */
}
if (var83){
var84 = ((val* (*)(val*))(var_ntype->class->vft[COLOR_parser_nodes__AType__n_types]))(var_ntype) /* n_types on <var_ntype:AType>*/;
var85 = ((long (*)(val*))(var84->class->vft[COLOR_abstract_collection__Collection__length]))(var84) /* length on <var84:ANodes[AType]>*/;
var_arity = var85;
var86 = ((long (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__arity]))(var_mclass) /* arity on <var_mclass:nullable MClass(MClass)>*/;
{ /* Inline kernel#Int#!= (var_arity,var86) */
var89 = var_arity == var86;
var90 = !var89;
var87 = var90;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
if (var87){
var91 = 0;
{ /* Inline kernel#Int#== (var_arity,var91) */
var94 = var_arity == var91;
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
if (var92){
if (varonce95) {
var96 = varonce95;
} else {
var97 = "Type error: \'";
var98 = 13;
var99 = string__NativeString__to_s_with_length(var97, var98);
var96 = var99;
varonce95 = var96;
}
if (varonce100) {
var101 = varonce100;
} else {
var102 = "\' is a generic class.";
var103 = 21;
var104 = string__NativeString__to_s_with_length(var102, var103);
var101 = var104;
varonce100 = var101;
}
var105 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var105 = array_instance Array[Object] */
var106 = 3;
var107 = NEW_array__NativeArray(var106, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var107)->values[0] = (val*) var96;
((struct instance_array__NativeArray*)var107)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var107)->values[2] = (val*) var101;
((void (*)(val*, val*, long))(var105->class->vft[COLOR_array__Array__with_native]))(var105, var107, var106) /* with_native on <var105:Array[Object]>*/;
}
var108 = ((val* (*)(val*))(var105->class->vft[COLOR_string__Object__to_s]))(var105) /* to_s on <var105:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_ntype, var108) /* error on <self:ModelBuilder>*/;
} else {
var109 = ((long (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__arity]))(var_mclass) /* arity on <var_mclass:nullable MClass(MClass)>*/;
var110 = 0;
{ /* Inline kernel#Int#== (var109,var110) */
var113 = var109 == var110;
var111 = var113;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
if (var111){
if (varonce114) {
var115 = varonce114;
} else {
var116 = "Type error: \'";
var117 = 13;
var118 = string__NativeString__to_s_with_length(var116, var117);
var115 = var118;
varonce114 = var115;
}
if (varonce119) {
var120 = varonce119;
} else {
var121 = "\' is not a generic class.";
var122 = 25;
var123 = string__NativeString__to_s_with_length(var121, var122);
var120 = var123;
varonce119 = var120;
}
var124 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var124 = array_instance Array[Object] */
var125 = 3;
var126 = NEW_array__NativeArray(var125, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var126)->values[0] = (val*) var115;
((struct instance_array__NativeArray*)var126)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var126)->values[2] = (val*) var120;
((void (*)(val*, val*, long))(var124->class->vft[COLOR_array__Array__with_native]))(var124, var126, var125) /* with_native on <var124:Array[Object]>*/;
}
var127 = ((val* (*)(val*))(var124->class->vft[COLOR_string__Object__to_s]))(var124) /* to_s on <var124:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_ntype, var127) /* error on <self:ModelBuilder>*/;
} else {
if (varonce128) {
var129 = varonce128;
} else {
var130 = "Type error: \'";
var131 = 13;
var132 = string__NativeString__to_s_with_length(var130, var131);
var129 = var132;
varonce128 = var129;
}
if (varonce133) {
var134 = varonce133;
} else {
var135 = "\' has ";
var136 = 6;
var137 = string__NativeString__to_s_with_length(var135, var136);
var134 = var137;
varonce133 = var134;
}
var138 = ((long (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__arity]))(var_mclass) /* arity on <var_mclass:nullable MClass(MClass)>*/;
if (varonce139) {
var140 = varonce139;
} else {
var141 = " parameters (";
var142 = 13;
var143 = string__NativeString__to_s_with_length(var141, var142);
var140 = var143;
varonce139 = var140;
}
if (varonce144) {
var145 = varonce144;
} else {
var146 = " are provided).";
var147 = 15;
var148 = string__NativeString__to_s_with_length(var146, var147);
var145 = var148;
varonce144 = var145;
}
var149 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var149 = array_instance Array[Object] */
var150 = 7;
var151 = NEW_array__NativeArray(var150, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var151)->values[0] = (val*) var129;
((struct instance_array__NativeArray*)var151)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var151)->values[2] = (val*) var134;
var152 = BOX_kernel__Int(var138); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var151)->values[3] = (val*) var152;
((struct instance_array__NativeArray*)var151)->values[4] = (val*) var140;
var153 = BOX_kernel__Int(var_arity); /* autobox from Int to Object */
((struct instance_array__NativeArray*)var151)->values[5] = (val*) var153;
((struct instance_array__NativeArray*)var151)->values[6] = (val*) var145;
((void (*)(val*, val*, long))(var149->class->vft[COLOR_array__Array__with_native]))(var149, var151, var150) /* with_native on <var149:Array[Object]>*/;
}
var154 = ((val* (*)(val*))(var149->class->vft[COLOR_string__Object__to_s]))(var149) /* to_s on <var149:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_ntype, var154) /* error on <self:ModelBuilder>*/;
}
}
var155 = NULL;
var = var155;
goto RET_LABEL;
} else {
}
var156 = 0;
{ /* Inline kernel#Int#== (var_arity,var156) */
var159 = var_arity == var156;
var157 = var159;
goto RET_LABEL158;
RET_LABEL158:(void)0;
}
if (var157){
var160 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__mclass_type]))(var_mclass) /* mclass_type on <var_mclass:nullable MClass(MClass)>*/;
var_res = var160;
var161 = ((val* (*)(val*))(var_ntype->class->vft[COLOR_parser_nodes__AType__n_kwnullable]))(var_ntype) /* n_kwnullable on <var_ntype:AType>*/;
var162 = NULL;
if (var161 == NULL) {
var163 = 0; /* is null */
} else {
var163 = 1; /* arg is null and recv is not */
}
if (var163){
var164 = ((val* (*)(val*))(var_res->class->vft[COLOR_model__MType__as_nullable]))(var_res) /* as_nullable on <var_res:MType(MClassType)>*/;
var_res = var164;
} else {
}
((void (*)(val*, val*))(var_ntype->class->vft[COLOR_modelize_class__AType__mtype_61d]))(var_ntype, var_res) /* mtype= on <var_ntype:AType>*/;
var = var_res;
goto RET_LABEL;
} else {
var165 = NEW_array__Array(&type_array__Arraymodel__MType);
((void (*)(val*))(var165->class->vft[COLOR_array__Array__init]))(var165) /* init on <var165:Array[MType]>*/;
var_mtypes = var165;
var166 = ((val* (*)(val*))(var_ntype->class->vft[COLOR_parser_nodes__AType__n_types]))(var_ntype) /* n_types on <var_ntype:AType>*/;
var167 = ((val* (*)(val*))(var166->class->vft[COLOR_abstract_collection__Collection__iterator]))(var166) /* iterator on <var166:ANodes[AType]>*/;
for(;;) {
var168 = ((short int (*)(val*))(var167->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var167) /* is_ok on <var167:Iterator[nullable Object]>*/;
if(!var168) break;
var169 = ((val* (*)(val*))(var167->class->vft[COLOR_abstract_collection__Iterator__item]))(var167) /* item on <var167:Iterator[nullable Object]>*/;
var_nt = var169;
var170 = ((val* (*)(val*, val*, val*, short int))(self->class->vft[COLOR_modelize_class__ModelBuilder__resolve_mtype_unchecked]))(self, var_nclassdef, var_nt, var_with_virtual) /* resolve_mtype_unchecked on <self:ModelBuilder>*/;
var_mt = var170;
var171 = NULL;
if (var_mt == NULL) {
var172 = 1; /* is null */
} else {
var172 = 0; /* arg is null but recv is not */
}
if (var172){
var173 = NULL;
var = var173;
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(var_mtypes->class->vft[COLOR_abstract_collection__SimpleCollection__add]))(var_mtypes, var_mt) /* add on <var_mtypes:Array[MType]>*/;
CONTINUE_label174: (void)0;
((void (*)(val*))(var167->class->vft[COLOR_abstract_collection__Iterator__next]))(var167) /* next on <var167:Iterator[nullable Object]>*/;
}
BREAK_label174: (void)0;
var175 = ((val* (*)(val*, val*))(var_mclass->class->vft[COLOR_model__MClass__get_mtype]))(var_mclass, var_mtypes) /* get_mtype on <var_mclass:nullable MClass(MClass)>*/;
var_res = var175;
var176 = ((val* (*)(val*))(var_ntype->class->vft[COLOR_parser_nodes__AType__n_kwnullable]))(var_ntype) /* n_kwnullable on <var_ntype:AType>*/;
var177 = NULL;
if (var176 == NULL) {
var178 = 0; /* is null */
} else {
var178 = 1; /* arg is null and recv is not */
}
if (var178){
var179 = ((val* (*)(val*))(var_res->class->vft[COLOR_model__MType__as_nullable]))(var_res) /* as_nullable on <var_res:MType(MClassType)>*/;
var_res = var179;
} else {
}
((void (*)(val*, val*))(var_ntype->class->vft[COLOR_modelize_class__AType__mtype_61d]))(var_ntype, var_res) /* mtype= on <var_ntype:AType>*/;
var = var_res;
goto RET_LABEL;
}
} else {
}
if (varonce180) {
var181 = varonce180;
} else {
var182 = "Type error: class ";
var183 = 18;
var184 = string__NativeString__to_s_with_length(var182, var183);
var181 = var184;
varonce180 = var181;
}
if (varonce185) {
var186 = varonce185;
} else {
var187 = " not found in module ";
var188 = 21;
var189 = string__NativeString__to_s_with_length(var187, var188);
var186 = var189;
varonce185 = var186;
}
if (varonce190) {
var191 = varonce190;
} else {
var192 = ".";
var193 = 1;
var194 = string__NativeString__to_s_with_length(var192, var193);
var191 = var194;
varonce190 = var191;
}
var195 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var195 = array_instance Array[Object] */
var196 = 5;
var197 = NEW_array__NativeArray(var196, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var197)->values[0] = (val*) var181;
((struct instance_array__NativeArray*)var197)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var197)->values[2] = (val*) var186;
((struct instance_array__NativeArray*)var197)->values[3] = (val*) var_mmodule;
((struct instance_array__NativeArray*)var197)->values[4] = (val*) var191;
((void (*)(val*, val*, long))(var195->class->vft[COLOR_array__Array__with_native]))(var195, var197, var196) /* with_native on <var195:Array[Object]>*/;
}
var198 = ((val* (*)(val*))(var195->class->vft[COLOR_string__Object__to_s]))(var195) /* to_s on <var195:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_ntype, var198) /* error on <self:ModelBuilder>*/;
var199 = NULL;
var = var199;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelBuilder#resolve_mtype_unchecked for (self: Object, AClassdef, AType, Bool): nullable MType */
val* VIRTUAL_modelize_class__ModelBuilder__resolve_mtype_unchecked(val* self, val* p0, val* p1, short int p2) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = modelize_class__ModelBuilder__resolve_mtype_unchecked(self, p0, p1, p2);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelBuilder#resolve_mtype for (self: ModelBuilder, AClassdef, AType): nullable MType */
val* modelize_class__ModelBuilder__resolve_mtype(val* self, val* p0, val* p1) {
val* var /* : nullable MType */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var_ntype /* var ntype: AType */;
val* var1 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable MType */;
val* var6 /* : null */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
val* var11 /* : nullable ANode */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name;
val* var15 /* : nullable MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var16 /* : nullable MClassDef */;
val* var_mclassdef /* var mclassdef: nullable MClassDef */;
val* var17 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
val* var18 /* : Range[Int] */;
long var19 /* : Int */;
long var20 /* : Int */;
val* var21 /* : Discrete */;
val* var22 /* : Discrete */;
val* var23 /* : Iterator[nullable Object] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
long var_i /* var i: Int */;
long var26 /* : Int */;
val* var27 /* : MClassDef */;
val* var28 /* : MClassType */;
val* var29 /* : Array[MType] */;
val* var30 /* : nullable Object */;
val* var_bound /* var bound: MType */;
val* var31 /* : ANodes[AType] */;
val* var32 /* : nullable Object */;
val* var_nt /* var nt: AType */;
val* var33 /* : nullable MType */;
val* var_mt /* var mt: nullable MType */;
val* var34 /* : null */;
short int var35 /* : Bool */;
val* var36 /* : null */;
val* var37 /* : MClassType */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
static val* varonce;
val* var40 /* : String */;
char* var41 /* : NativeString */;
long var42 /* : Int */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : NativeString */;
long var47 /* : Int */;
val* var48 /* : String */;
val* var49 /* : Array[Object] */;
long var50 /* : Int */;
val* var51 /* : NativeArray[Object] */;
val* var52 /* : String */;
val* var53 /* : null */;
short int var54 /* : Bool */;
var_nclassdef = p0;
var_ntype = p1;
var1 = ((val* (*)(val*))(var_ntype->class->vft[COLOR_modelize_class__AType__mtype]))(var_ntype) /* mtype on <var_ntype:AType>*/;
var_mtype = var1;
var2 = NULL;
if (var_mtype == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
var4 = 1;
var5 = ((val* (*)(val*, val*, val*, short int))(self->class->vft[COLOR_modelize_class__ModelBuilder__resolve_mtype_unchecked]))(self, var_nclassdef, var_ntype, var4) /* resolve_mtype_unchecked on <self:ModelBuilder>*/;
var_mtype = var5;
} else {
}
var6 = NULL;
if (var_mtype == NULL) {
var7 = 1; /* is null */
} else {
var7 = 0; /* arg is null but recv is not */
}
if (var7){
var8 = NULL;
var = var8;
goto RET_LABEL;
} else {
}
var9 = ((short int (*)(val*))(var_ntype->class->vft[COLOR_modelize_class__AType__checked_mtype]))(var_ntype) /* checked_mtype on <var_ntype:AType>*/;
if (var9){
var = var_mtype;
goto RET_LABEL;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MGenericType */
cltype = type_model__MGenericType.color;
idtype = type_model__MGenericType.id;
if(cltype >= var_mtype->type->table_size) {
var10 = 0;
} else {
var10 = var_mtype->type->type_table[cltype] == idtype;
}
if (var10){
var11 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_parser_nodes__ANode__parent]))(var_nclassdef) /* parent on <var_nclassdef:AClassdef>*/;
/* <var11:nullable ANode> isa AModule */
cltype13 = type_parser_nodes__AModule.color;
idtype14 = type_parser_nodes__AModule.id;
if(var11 == NULL) {
var12 = 0;
} else {
if(cltype13 >= var11->type->table_size) {
var12 = 0;
} else {
var12 = var11->type->type_table[cltype13] == idtype14;
}
}
if (!var12) {
var_class_name = var11 == NULL ? "null" : var11->type->name;
fprintf(stderr, "Runtime error: Cast failed. Expected `%s`, got `%s`", "AModule", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 459);
show_backtrace(1);
}
var15 = ((val* (*)(val*))(var11->class->vft[COLOR_modelbuilder__AModule__mmodule]))(var11) /* mmodule on <var11:nullable ANode(AModule)>*/;
if (var15 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 459);
show_backtrace(1);
}
var_mmodule = var15;
var16 = ((val* (*)(val*))(var_nclassdef->class->vft[COLOR_modelize_class__AClassdef__mclassdef]))(var_nclassdef) /* mclassdef on <var_nclassdef:AClassdef>*/;
var_mclassdef = var16;
var17 = ((val* (*)(val*))(var_mtype->class->vft[COLOR_model__MClassType__mclass]))(var_mtype) /* mclass on <var_mtype:nullable MType(MGenericType)>*/;
var_mclass = var17;
var18 = NEW_range__Range(&type_range__Rangekernel__Int);
var19 = 0;
var20 = ((long (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__arity]))(var_mclass) /* arity on <var_mclass:MClass>*/;
var21 = BOX_kernel__Int(var19); /* autobox from Int to Discrete */
var22 = BOX_kernel__Int(var20); /* autobox from Int to Discrete */
((void (*)(val*, val*, val*))(var18->class->vft[COLOR_range__Range__without_last]))(var18, var21, var22) /* without_last on <var18:Range[Int]>*/;
var23 = ((val* (*)(val*))(var18->class->vft[COLOR_abstract_collection__Collection__iterator]))(var18) /* iterator on <var18:Range[Int]>*/;
for(;;) {
var24 = ((short int (*)(val*))(var23->class->vft[COLOR_abstract_collection__Iterator__is_ok]))(var23) /* is_ok on <var23:Iterator[nullable Object]>*/;
if(!var24) break;
var25 = ((val* (*)(val*))(var23->class->vft[COLOR_abstract_collection__Iterator__item]))(var23) /* item on <var23:Iterator[nullable Object]>*/;
var26 = ((struct instance_kernel__Int*)var25)->value; /* autounbox from nullable Object to Int */;
var_i = var26;
var27 = ((val* (*)(val*))(var_mclass->class->vft[COLOR_model__MClass__intro]))(var_mclass) /* intro on <var_mclass:MClass>*/;
var28 = ((val* (*)(val*))(var27->class->vft[COLOR_model__MClassDef__bound_mtype]))(var27) /* bound_mtype on <var27:MClassDef>*/;
var29 = ((val* (*)(val*))(var28->class->vft[COLOR_model__MClassType__arguments]))(var28) /* arguments on <var28:MClassType>*/;
var30 = ((val* (*)(val*, long))(var29->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var29, var_i) /* [] on <var29:Array[MType]>*/;
var_bound = var30;
var31 = ((val* (*)(val*))(var_ntype->class->vft[COLOR_parser_nodes__AType__n_types]))(var_ntype) /* n_types on <var_ntype:AType>*/;
var32 = ((val* (*)(val*, long))(var31->class->vft[COLOR_abstract_collection__SequenceRead___91d_93d]))(var31, var_i) /* [] on <var31:ANodes[AType]>*/;
var_nt = var32;
var33 = ((val* (*)(val*, val*, val*))(self->class->vft[COLOR_modelize_class__ModelBuilder__resolve_mtype]))(self, var_nclassdef, var_nt) /* resolve_mtype on <self:ModelBuilder>*/;
var_mt = var33;
var34 = NULL;
if (var_mt == NULL) {
var35 = 1; /* is null */
} else {
var35 = 0; /* arg is null but recv is not */
}
if (var35){
var36 = NULL;
var = var36;
goto RET_LABEL;
} else {
}
if (var_mclassdef == NULL) {
fprintf(stderr, "Runtime error: %s", "Reciever is null");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 467);
show_backtrace(1);
} else {
var37 = ((val* (*)(val*))(var_mclassdef->class->vft[COLOR_model__MClassDef__bound_mtype]))(var_mclassdef) /* bound_mtype on <var_mclassdef:nullable MClassDef>*/;
}
var38 = ((short int (*)(val*, val*, val*, val*))(var_mt->class->vft[COLOR_model__MType__is_subtype]))(var_mt, var_mmodule, var37, var_bound) /* is_subtype on <var_mt:nullable MType(MType)>*/;
var39 = !var38;
if (var39){
if (varonce) {
var40 = varonce;
} else {
var41 = "Type error: expected ";
var42 = 21;
var43 = string__NativeString__to_s_with_length(var41, var42);
var40 = var43;
varonce = var40;
}
if (varonce44) {
var45 = varonce44;
} else {
var46 = ", got ";
var47 = 6;
var48 = string__NativeString__to_s_with_length(var46, var47);
var45 = var48;
varonce44 = var45;
}
var49 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var49 = array_instance Array[Object] */
var50 = 4;
var51 = NEW_array__NativeArray(var50, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var51)->values[0] = (val*) var40;
((struct instance_array__NativeArray*)var51)->values[1] = (val*) var_bound;
((struct instance_array__NativeArray*)var51)->values[2] = (val*) var45;
((struct instance_array__NativeArray*)var51)->values[3] = (val*) var_mt;
((void (*)(val*, val*, long))(var49->class->vft[COLOR_array__Array__with_native]))(var49, var51, var50) /* with_native on <var49:Array[Object]>*/;
}
var52 = ((val* (*)(val*))(var49->class->vft[COLOR_string__Object__to_s]))(var49) /* to_s on <var49:Array[Object]>*/;
((void (*)(val*, val*, val*))(self->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(self, var_nt, var52) /* error on <self:ModelBuilder>*/;
var53 = NULL;
var = var53;
goto RET_LABEL;
} else {
}
CONTINUE_label: (void)0;
((void (*)(val*))(var23->class->vft[COLOR_abstract_collection__Iterator__next]))(var23) /* next on <var23:Iterator[nullable Object]>*/;
}
BREAK_label: (void)0;
} else {
}
var54 = 1;
((void (*)(val*, short int))(var_ntype->class->vft[COLOR_modelize_class__AType__checked_mtype_61d]))(var_ntype, var54) /* checked_mtype= on <var_ntype:AType>*/;
var = var_mtype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#ModelBuilder#resolve_mtype for (self: Object, AClassdef, AType): nullable MType */
val* VIRTUAL_modelize_class__ModelBuilder__resolve_mtype(val* self, val* p0, val* p1) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = modelize_class__ModelBuilder__resolve_mtype(self, p0, p1);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AModule#build_classes_is_done for (self: AModule): Bool */
short int modelize_class__AModule__build_classes_is_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_modelize_class__AModule___64dbuild_classes_is_done].s; /* @build_classes_is_done on <self:AModule> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AModule#build_classes_is_done for (self: Object): Bool */
short int VIRTUAL_modelize_class__AModule__build_classes_is_done(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = modelize_class__AModule__build_classes_is_done(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AModule#build_classes_is_done= for (self: AModule, Bool) */
void modelize_class__AModule__build_classes_is_done_61d(val* self, short int p0) {
self->attrs[COLOR_modelize_class__AModule___64dbuild_classes_is_done].s = p0; /* @build_classes_is_done on <self:AModule> */
RET_LABEL:;
}
/* method modelize_class#AModule#build_classes_is_done= for (self: Object, Bool) */
void VIRTUAL_modelize_class__AModule__build_classes_is_done_61d(val* self, short int p0) {
modelize_class__AModule__build_classes_is_done_61d(self, p0);
RET_LABEL:;
}
/* method modelize_class#AModule#mclass2nclassdef for (self: AModule): Map[MClass, AClassdef] */
val* modelize_class__AModule__mclass2nclassdef(val* self) {
val* var /* : Map[MClass, AClassdef] */;
val* var1 /* : Map[MClass, AClassdef] */;
var1 = self->attrs[COLOR_modelize_class__AModule___64dmclass2nclassdef].val; /* @mclass2nclassdef on <self:AModule> */
if (var1 == NULL) {
fprintf(stderr, "Runtime error: %s", "Uninitialized attribute @mclass2nclassdef");
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 482);
show_backtrace(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AModule#mclass2nclassdef for (self: Object): Map[MClass, AClassdef] */
val* VIRTUAL_modelize_class__AModule__mclass2nclassdef(val* self) {
val* var /* : Map[MClass, AClassdef] */;
val* var1 /* : Map[MClass, AClassdef] */;
var1 = modelize_class__AModule__mclass2nclassdef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AModule#mclass2nclassdef= for (self: AModule, Map[MClass, AClassdef]) */
void modelize_class__AModule__mclass2nclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_class__AModule___64dmclass2nclassdef].val = p0; /* @mclass2nclassdef on <self:AModule> */
RET_LABEL:;
}
/* method modelize_class#AModule#mclass2nclassdef= for (self: Object, Map[MClass, AClassdef]) */
void VIRTUAL_modelize_class__AModule__mclass2nclassdef_61d(val* self, val* p0) {
modelize_class__AModule__mclass2nclassdef_61d(self, p0);
RET_LABEL:;
}
/* method modelize_class#AClassdef#mclass for (self: AClassdef): nullable MClass */
val* modelize_class__AClassdef__mclass(val* self) {
val* var /* : nullable MClass */;
val* var1 /* : nullable MClass */;
var1 = self->attrs[COLOR_modelize_class__AClassdef___64dmclass].val; /* @mclass on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclass for (self: Object): nullable MClass */
val* VIRTUAL_modelize_class__AClassdef__mclass(val* self) {
val* var /* : nullable MClass */;
val* var1 /* : nullable MClass */;
var1 = modelize_class__AClassdef__mclass(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclass= for (self: AClassdef, nullable MClass) */
void modelize_class__AClassdef__mclass_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_class__AClassdef___64dmclass].val = p0; /* @mclass on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_class#AClassdef#mclass= for (self: Object, nullable MClass) */
void VIRTUAL_modelize_class__AClassdef__mclass_61d(val* self, val* p0) {
modelize_class__AClassdef__mclass_61d(self, p0);
RET_LABEL:;
}
/* method modelize_class#AClassdef#mclassdef for (self: AClassdef): nullable MClassDef */
val* modelize_class__AClassdef__mclassdef(val* self) {
val* var /* : nullable MClassDef */;
val* var1 /* : nullable MClassDef */;
var1 = self->attrs[COLOR_modelize_class__AClassdef___64dmclassdef].val; /* @mclassdef on <self:AClassdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclassdef for (self: Object): nullable MClassDef */
val* VIRTUAL_modelize_class__AClassdef__mclassdef(val* self) {
val* var /* : nullable MClassDef */;
val* var1 /* : nullable MClassDef */;
var1 = modelize_class__AClassdef__mclassdef(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AClassdef#mclassdef= for (self: AClassdef, nullable MClassDef) */
void modelize_class__AClassdef__mclassdef_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_class__AClassdef___64dmclassdef].val = p0; /* @mclassdef on <self:AClassdef> */
RET_LABEL:;
}
/* method modelize_class#AClassdef#mclassdef= for (self: Object, nullable MClassDef) */
void VIRTUAL_modelize_class__AClassdef__mclassdef_61d(val* self, val* p0) {
modelize_class__AClassdef__mclassdef_61d(self, p0);
RET_LABEL:;
}
/* method modelize_class#AClasskind#mkind for (self: AClasskind): MClassKind */
val* modelize_class__AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
fprintf(stderr, "Runtime error: Abstract method `%s` called on `%s`", "mkind", var_class_name);
fprintf(stderr, " (%s:%d)\n", "src/modelize_class.nit", 495);
show_backtrace(1);
RET_LABEL:;
return var;
}
/* method modelize_class#AClasskind#mkind for (self: Object): MClassKind */
val* VIRTUAL_modelize_class__AClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = modelize_class__AClasskind__mkind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AConcreteClasskind#mkind for (self: AConcreteClasskind): MClassKind */
val* modelize_class__AConcreteClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__concrete_kind]))(self) /* concrete_kind on <self:AConcreteClasskind>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AConcreteClasskind#mkind for (self: Object): MClassKind */
val* VIRTUAL_modelize_class__AConcreteClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = modelize_class__AConcreteClasskind__mkind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AAbstractClasskind#mkind for (self: AAbstractClasskind): MClassKind */
val* modelize_class__AAbstractClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__abstract_kind]))(self) /* abstract_kind on <self:AAbstractClasskind>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AAbstractClasskind#mkind for (self: Object): MClassKind */
val* VIRTUAL_modelize_class__AAbstractClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = modelize_class__AAbstractClasskind__mkind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AInterfaceClasskind#mkind for (self: AInterfaceClasskind): MClassKind */
val* modelize_class__AInterfaceClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__interface_kind]))(self) /* interface_kind on <self:AInterfaceClasskind>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AInterfaceClasskind#mkind for (self: Object): MClassKind */
val* VIRTUAL_modelize_class__AInterfaceClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = modelize_class__AInterfaceClasskind__mkind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AEnumClasskind#mkind for (self: AEnumClasskind): MClassKind */
val* modelize_class__AEnumClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__enum_kind]))(self) /* enum_kind on <self:AEnumClasskind>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AEnumClasskind#mkind for (self: Object): MClassKind */
val* VIRTUAL_modelize_class__AEnumClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = modelize_class__AEnumClasskind__mkind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AExternClasskind#mkind for (self: AExternClasskind): MClassKind */
val* modelize_class__AExternClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__extern_kind]))(self) /* extern_kind on <self:AExternClasskind>*/;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_class#AExternClasskind#mkind for (self: Object): MClassKind */
val* VIRTUAL_modelize_class__AExternClasskind__mkind(val* self) {
val* var /* : MClassKind */;
val* var1 /* : MClassKind */;
var1 = modelize_class__AExternClasskind__mkind(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AFormaldef#mtype for (self: AFormaldef): nullable MParameterType */
val* modelize_class__AFormaldef__mtype(val* self) {
val* var /* : nullable MParameterType */;
val* var1 /* : nullable MParameterType */;
var1 = self->attrs[COLOR_modelize_class__AFormaldef___64dmtype].val; /* @mtype on <self:AFormaldef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AFormaldef#mtype for (self: Object): nullable MParameterType */
val* VIRTUAL_modelize_class__AFormaldef__mtype(val* self) {
val* var /* : nullable MParameterType */;
val* var1 /* : nullable MParameterType */;
var1 = modelize_class__AFormaldef__mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AFormaldef#mtype= for (self: AFormaldef, nullable MParameterType) */
void modelize_class__AFormaldef__mtype_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_class__AFormaldef___64dmtype].val = p0; /* @mtype on <self:AFormaldef> */
RET_LABEL:;
}
/* method modelize_class#AFormaldef#mtype= for (self: Object, nullable MParameterType) */
void VIRTUAL_modelize_class__AFormaldef__mtype_61d(val* self, val* p0) {
modelize_class__AFormaldef__mtype_61d(self, p0);
RET_LABEL:;
}
/* method modelize_class#AFormaldef#bound for (self: AFormaldef): nullable MType */
val* modelize_class__AFormaldef__bound(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_modelize_class__AFormaldef___64dbound].val; /* @bound on <self:AFormaldef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AFormaldef#bound for (self: Object): nullable MType */
val* VIRTUAL_modelize_class__AFormaldef__bound(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = modelize_class__AFormaldef__bound(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AFormaldef#bound= for (self: AFormaldef, nullable MType) */
void modelize_class__AFormaldef__bound_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_class__AFormaldef___64dbound].val = p0; /* @bound on <self:AFormaldef> */
RET_LABEL:;
}
/* method modelize_class#AFormaldef#bound= for (self: Object, nullable MType) */
void VIRTUAL_modelize_class__AFormaldef__bound_61d(val* self, val* p0) {
modelize_class__AFormaldef__bound_61d(self, p0);
RET_LABEL:;
}
/* method modelize_class#AType#mtype for (self: AType): nullable MType */
val* modelize_class__AType__mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_modelize_class__AType___64dmtype].val; /* @mtype on <self:AType> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AType#mtype for (self: Object): nullable MType */
val* VIRTUAL_modelize_class__AType__mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = modelize_class__AType__mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AType#mtype= for (self: AType, nullable MType) */
void modelize_class__AType__mtype_61d(val* self, val* p0) {
self->attrs[COLOR_modelize_class__AType___64dmtype].val = p0; /* @mtype on <self:AType> */
RET_LABEL:;
}
/* method modelize_class#AType#mtype= for (self: Object, nullable MType) */
void VIRTUAL_modelize_class__AType__mtype_61d(val* self, val* p0) {
modelize_class__AType__mtype_61d(self, p0);
RET_LABEL:;
}
/* method modelize_class#AType#checked_mtype for (self: AType): Bool */
short int modelize_class__AType__checked_mtype(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_modelize_class__AType___64dchecked_mtype].s; /* @checked_mtype on <self:AType> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AType#checked_mtype for (self: Object): Bool */
short int VIRTUAL_modelize_class__AType__checked_mtype(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = modelize_class__AType__checked_mtype(self);
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_class#AType#checked_mtype= for (self: AType, Bool) */
void modelize_class__AType__checked_mtype_61d(val* self, short int p0) {
self->attrs[COLOR_modelize_class__AType___64dchecked_mtype].s = p0; /* @checked_mtype on <self:AType> */
RET_LABEL:;
}
/* method modelize_class#AType#checked_mtype= for (self: Object, Bool) */
void VIRTUAL_modelize_class__AType__checked_mtype_61d(val* self, short int p0) {
modelize_class__AType__checked_mtype_61d(self, p0);
RET_LABEL:;
}
