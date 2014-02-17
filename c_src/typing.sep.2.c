#include "typing.sep.0.h"
/* method typing#ANewExpr#accept_typing for (self: ANewExpr, TypeVisitor) */
void typing__ANewExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AType */;
val* var1 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
int cltype7;
int idtype8;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : NativeString */;
long var11 /* : Int */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : NativeString */;
long var16 /* : Int */;
val* var17 /* : String */;
val* var18 /* : Array[Object] */;
long var19 /* : Int */;
val* var20 /* : NativeArray[Object] */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : Array[Object] */;
long var33 /* : Int */;
val* var34 /* : NativeArray[Object] */;
val* var35 /* : String */;
val* var36 /* : MClass */;
val* var37 /* : MClassKind */;
val* var38 /* : MClassKind */;
short int var39 /* : Bool */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : NativeString */;
long var43 /* : Int */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : NativeString */;
long var48 /* : Int */;
val* var49 /* : String */;
val* var50 /* : Array[Object] */;
long var51 /* : Int */;
val* var52 /* : NativeArray[Object] */;
val* var53 /* : String */;
val* var54 /* : MClass */;
val* var55 /* : MClassKind */;
val* var56 /* : MClassKind */;
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
val* var72 /* : nullable TId */;
val* var_nid /* var nid: nullable TId */;
val* var73 /* : null */;
short int var74 /* : Bool */;
val* var75 /* : String */;
val* var_name /* var name: String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : NativeString */;
long var79 /* : Int */;
val* var80 /* : String */;
short int var81 /* : Bool */;
val* var82 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
val* var83 /* : null */;
short int var84 /* : Bool */;
val* var85 /* : MMethod */;
val* var86 /* : MClass */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
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
val* var99 /* : Array[Object] */;
long var100 /* : Int */;
val* var101 /* : NativeArray[Object] */;
val* var102 /* : String */;
val* var103 /* : AExprs */;
val* var104 /* : Array[AExpr] */;
val* var_args /* var args: Array[AExpr] */;
short int var105 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANewExpr__n_type]))(self) /* n_type on <self:ANewExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__resolve_mtype]))(var_v, var) /* resolve_mtype on <var_v:TypeVisitor>*/;
var_recvtype = var1;
var2 = NULL;
if (var_recvtype == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var_recvtype) /* mtype= on <self:ANewExpr>*/;
/* <var_recvtype:nullable MType(MType)> isa MClassType */
cltype = type_model__MClassType.color;
idtype = type_model__MClassType.id;
if(cltype >= var_recvtype->type->table_size) {
var4 = 0;
} else {
var4 = var_recvtype->type->type_table[cltype] == idtype;
}
var5 = !var4;
if (var5){
/* <var_recvtype:nullable MType(MType)> isa MNullableType */
cltype7 = type_model__MNullableType.color;
idtype8 = type_model__MNullableType.id;
if(cltype7 >= var_recvtype->type->table_size) {
var6 = 0;
} else {
var6 = var_recvtype->type->type_table[cltype7] == idtype8;
}
if (var6){
if (varonce) {
var9 = varonce;
} else {
var10 = "Type error: cannot instantiate the nullable type ";
var11 = 49;
var12 = string__NativeString__to_s_with_length(var10, var11);
var9 = var12;
varonce = var9;
}
if (varonce13) {
var14 = varonce13;
} else {
var15 = ".";
var16 = 1;
var17 = string__NativeString__to_s_with_length(var15, var16);
var14 = var17;
varonce13 = var14;
}
var18 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var18 = array_instance Array[Object] */
var19 = 3;
var20 = NEW_array__NativeArray(var19, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var20)->values[0] = (val*) var9;
((struct instance_array__NativeArray*)var20)->values[1] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var20)->values[2] = (val*) var14;
((void (*)(val*, val*, long))(var18->class->vft[COLOR_array__Array__with_native]))(var18, var20, var19) /* with_native on <var18:Array[Object]>*/;
}
var21 = ((val* (*)(val*))(var18->class->vft[COLOR_string__Object__to_s]))(var18) /* to_s on <var18:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var21) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
if (varonce22) {
var23 = varonce22;
} else {
var24 = "Type error: cannot instantiate the formal type ";
var25 = 47;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = ".";
var30 = 1;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
var32 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var32 = array_instance Array[Object] */
var33 = 3;
var34 = NEW_array__NativeArray(var33, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var34)->values[0] = (val*) var23;
((struct instance_array__NativeArray*)var34)->values[1] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var34)->values[2] = (val*) var28;
((void (*)(val*, val*, long))(var32->class->vft[COLOR_array__Array__with_native]))(var32, var34, var33) /* with_native on <var32:Array[Object]>*/;
}
var35 = ((val* (*)(val*))(var32->class->vft[COLOR_string__Object__to_s]))(var32) /* to_s on <var32:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var35) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
}
} else {
var36 = ((val* (*)(val*))(var_recvtype->class->vft[COLOR_model__MClassType__mclass]))(var_recvtype) /* mclass on <var_recvtype:nullable MType(MClassType)>*/;
var37 = ((val* (*)(val*))(var36->class->vft[COLOR_model__MClass__kind]))(var36) /* kind on <var36:MClass>*/;
var38 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__abstract_kind]))(self) /* abstract_kind on <self:ANewExpr>*/;
var39 = ((short int (*)(val*, val*))(var37->class->vft[COLOR_kernel__Object___61d_61d]))(var37, var38) /* == on <var37:MClassKind>*/;
if (var39){
if (varonce40) {
var41 = varonce40;
} else {
var42 = "Cannot instantiate abstract class ";
var43 = 34;
var44 = string__NativeString__to_s_with_length(var42, var43);
var41 = var44;
varonce40 = var41;
}
if (varonce45) {
var46 = varonce45;
} else {
var47 = ".";
var48 = 1;
var49 = string__NativeString__to_s_with_length(var47, var48);
var46 = var49;
varonce45 = var46;
}
var50 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var50 = array_instance Array[Object] */
var51 = 3;
var52 = NEW_array__NativeArray(var51, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var52)->values[0] = (val*) var41;
((struct instance_array__NativeArray*)var52)->values[1] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var52)->values[2] = (val*) var46;
((void (*)(val*, val*, long))(var50->class->vft[COLOR_array__Array__with_native]))(var50, var52, var51) /* with_native on <var50:Array[Object]>*/;
}
var53 = ((val* (*)(val*))(var50->class->vft[COLOR_string__Object__to_s]))(var50) /* to_s on <var50:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var53) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
var54 = ((val* (*)(val*))(var_recvtype->class->vft[COLOR_model__MClassType__mclass]))(var_recvtype) /* mclass on <var_recvtype:nullable MType(MClassType)>*/;
var55 = ((val* (*)(val*))(var54->class->vft[COLOR_model__MClass__kind]))(var54) /* kind on <var54:MClass>*/;
var56 = ((val* (*)(val*))(self->class->vft[COLOR_model__Object__interface_kind]))(self) /* interface_kind on <self:ANewExpr>*/;
var57 = ((short int (*)(val*, val*))(var55->class->vft[COLOR_kernel__Object___61d_61d]))(var55, var56) /* == on <var55:MClassKind>*/;
if (var57){
if (varonce58) {
var59 = varonce58;
} else {
var60 = "Cannot instantiate interface ";
var61 = 29;
var62 = string__NativeString__to_s_with_length(var60, var61);
var59 = var62;
varonce58 = var59;
}
if (varonce63) {
var64 = varonce63;
} else {
var65 = ".";
var66 = 1;
var67 = string__NativeString__to_s_with_length(var65, var66);
var64 = var67;
varonce63 = var64;
}
var68 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var68 = array_instance Array[Object] */
var69 = 3;
var70 = NEW_array__NativeArray(var69, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var70)->values[0] = (val*) var59;
((struct instance_array__NativeArray*)var70)->values[1] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var70)->values[2] = (val*) var64;
((void (*)(val*, val*, long))(var68->class->vft[COLOR_array__Array__with_native]))(var68, var70, var69) /* with_native on <var68:Array[Object]>*/;
}
var71 = ((val* (*)(val*))(var68->class->vft[COLOR_string__Object__to_s]))(var68) /* to_s on <var68:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var71) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
}
}
var72 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANewExpr__n_id]))(self) /* n_id on <self:ANewExpr>*/;
var_nid = var72;
var73 = NULL;
if (var_nid == NULL) {
var74 = 0; /* is null */
} else {
var74 = 1; /* arg is null and recv is not */
}
if (var74){
var75 = ((val* (*)(val*))(var_nid->class->vft[COLOR_parser_nodes__Token__text]))(var_nid) /* text on <var_nid:nullable TId(TId)>*/;
var_name = var75;
} else {
if (varonce76) {
var77 = varonce76;
} else {
var78 = "init";
var79 = 4;
var80 = string__NativeString__to_s_with_length(var78, var79);
var77 = var80;
varonce76 = var77;
}
var_name = var77;
}
var81 = 0;
var82 = ((val* (*)(val*, val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__get_method]))(var_v, self, var_recvtype, var_name, var81) /* get_method on <var_v:TypeVisitor>*/;
var_callsite = var82;
var83 = NULL;
if (var_callsite == NULL) {
var84 = 1; /* is null */
} else {
var84 = 0; /* arg is null but recv is not */
}
if (var84){
goto RET_LABEL;
} else {
}
((void (*)(val*, val*))(self->class->vft[COLOR_typing__ANewExpr__callsite_61d]))(self, var_callsite) /* callsite= on <self:ANewExpr>*/;
var85 = ((val* (*)(val*))(var_callsite->class->vft[COLOR_typing__CallSite__mproperty]))(var_callsite) /* mproperty on <var_callsite:nullable CallSite(CallSite)>*/;
var86 = ((val* (*)(val*))(var_recvtype->class->vft[COLOR_model__MClassType__mclass]))(var_recvtype) /* mclass on <var_recvtype:nullable MType(MClassType)>*/;
var87 = ((short int (*)(val*, val*))(var85->class->vft[COLOR_model__MMethod__is_init_for]))(var85, var86) /* is_init_for on <var85:MMethod>*/;
var88 = !var87;
if (var88){
if (varonce89) {
var90 = varonce89;
} else {
var91 = "Error: ";
var92 = 7;
var93 = string__NativeString__to_s_with_length(var91, var92);
var90 = var93;
varonce89 = var90;
}
if (varonce94) {
var95 = varonce94;
} else {
var96 = " is not a constructor.";
var97 = 22;
var98 = string__NativeString__to_s_with_length(var96, var97);
var95 = var98;
varonce94 = var95;
}
var99 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var99 = array_instance Array[Object] */
var100 = 3;
var101 = NEW_array__NativeArray(var100, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var101)->values[0] = (val*) var90;
((struct instance_array__NativeArray*)var101)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var101)->values[2] = (val*) var95;
((void (*)(val*, val*, long))(var99->class->vft[COLOR_array__Array__with_native]))(var99, var101, var100) /* with_native on <var99:Array[Object]>*/;
}
var102 = ((val* (*)(val*))(var99->class->vft[COLOR_string__Object__to_s]))(var99) /* to_s on <var99:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var102) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var103 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ANewExpr__n_args]))(self) /* n_args on <self:ANewExpr>*/;
var104 = ((val* (*)(val*))(var103->class->vft[COLOR_typing__AExprs__to_a]))(var103) /* to_a on <var103:AExprs>*/;
var_args = var104;
var105 = ((short int (*)(val*, val*, val*))(var_callsite->class->vft[COLOR_typing__CallSite__check_signature]))(var_callsite, var_v, var_args) /* check_signature on <var_callsite:nullable CallSite(CallSite)>*/;
var105;
RET_LABEL:;
}
/* method typing#ANewExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ANewExpr__accept_typing(val* self, val* p0) {
typing__ANewExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AAttrFormExpr#mproperty for (self: AAttrFormExpr): nullable MAttribute */
val* typing__AAttrFormExpr__mproperty(val* self) {
val* var /* : nullable MAttribute */;
val* var1 /* : nullable MAttribute */;
var1 = self->attrs[COLOR_typing__AAttrFormExpr___64dmproperty].val; /* @mproperty on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#mproperty for (self: Object): nullable MAttribute */
val* VIRTUAL_typing__AAttrFormExpr__mproperty(val* self) {
val* var /* : nullable MAttribute */;
val* var1 /* : nullable MAttribute */;
var1 = typing__AAttrFormExpr__mproperty(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#mproperty= for (self: AAttrFormExpr, nullable MAttribute) */
void typing__AAttrFormExpr__mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AAttrFormExpr___64dmproperty].val = p0; /* @mproperty on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method typing#AAttrFormExpr#mproperty= for (self: Object, nullable MAttribute) */
void VIRTUAL_typing__AAttrFormExpr__mproperty_61d(val* self, val* p0) {
typing__AAttrFormExpr__mproperty_61d(self, p0);
RET_LABEL:;
}
/* method typing#AAttrFormExpr#attr_type for (self: AAttrFormExpr): nullable MType */
val* typing__AAttrFormExpr__attr_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_typing__AAttrFormExpr___64dattr_type].val; /* @attr_type on <self:AAttrFormExpr> */
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#attr_type for (self: Object): nullable MType */
val* VIRTUAL_typing__AAttrFormExpr__attr_type(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = typing__AAttrFormExpr__attr_type(self);
var = var1;
RET_LABEL:;
return var;
}
/* method typing#AAttrFormExpr#attr_type= for (self: AAttrFormExpr, nullable MType) */
void typing__AAttrFormExpr__attr_type_61d(val* self, val* p0) {
self->attrs[COLOR_typing__AAttrFormExpr___64dattr_type].val = p0; /* @attr_type on <self:AAttrFormExpr> */
RET_LABEL:;
}
/* method typing#AAttrFormExpr#attr_type= for (self: Object, nullable MType) */
void VIRTUAL_typing__AAttrFormExpr__attr_type_61d(val* self, val* p0) {
typing__AAttrFormExpr__attr_type_61d(self, p0);
RET_LABEL:;
}
/* method typing#AAttrFormExpr#resolve_property for (self: AAttrFormExpr, TypeVisitor) */
void typing__AAttrFormExpr__resolve_property(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_recvtype /* var recvtype: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : TAttrid */;
val* var5 /* : String */;
val* var_name /* var name: String */;
short int var6 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : NativeString */;
long var9 /* : Int */;
val* var10 /* : String */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : NativeString */;
long var14 /* : Int */;
val* var15 /* : String */;
val* var16 /* : Array[Object] */;
long var17 /* : Int */;
val* var18 /* : NativeArray[Object] */;
val* var19 /* : String */;
val* var20 /* : MType */;
val* var_unsafe_type /* var unsafe_type: MType */;
val* var21 /* : nullable MProperty */;
val* var_mproperty /* var mproperty: nullable MProperty */;
val* var22 /* : null */;
short int var23 /* : Bool */;
val* var24 /* : ModelBuilder */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : NativeString */;
long var28 /* : Int */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : NativeString */;
long var33 /* : Int */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : NativeString */;
long var38 /* : Int */;
val* var39 /* : String */;
val* var40 /* : Array[Object] */;
long var41 /* : Int */;
val* var42 /* : NativeArray[Object] */;
val* var43 /* : String */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
val* var47 /* : MModule */;
val* var48 /* : Array[MPropDef] */;
val* var_mpropdefs /* var mpropdefs: Array[MAttributeDef] */;
long var49 /* : Int */;
long var50 /* : Int */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : nullable Object */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
val* var55 /* : nullable MType */;
val* var_attr_type /* var attr_type: MType */;
val* var56 /* : AExpr */;
short int var57 /* : Bool */;
int cltype58;
int idtype59;
val* var60 /* : MType */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__n_expr]))(self) /* n_expr on <self:AAttrFormExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var) /* visit_expr on <var_v:TypeVisitor>*/;
var_recvtype = var1;
var2 = NULL;
if (var_recvtype == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__n_id]))(self) /* n_id on <self:AAttrFormExpr>*/;
var5 = ((val* (*)(val*))(var4->class->vft[COLOR_parser_nodes__Token__text]))(var4) /* text on <var4:TAttrid>*/;
var_name = var5;
/* <var_recvtype:nullable MType(MType)> isa MNullType */
cltype = type_model__MNullType.color;
idtype = type_model__MNullType.id;
if(cltype >= var_recvtype->type->table_size) {
var6 = 0;
} else {
var6 = var_recvtype->type->type_table[cltype] == idtype;
}
if (var6){
if (varonce) {
var7 = varonce;
} else {
var8 = "Error: Attribute \'";
var9 = 18;
var10 = string__NativeString__to_s_with_length(var8, var9);
var7 = var10;
varonce = var7;
}
if (varonce11) {
var12 = varonce11;
} else {
var13 = "\' access on \'null\'.";
var14 = 19;
var15 = string__NativeString__to_s_with_length(var13, var14);
var12 = var15;
varonce11 = var12;
}
var16 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var16 = array_instance Array[Object] */
var17 = 3;
var18 = NEW_array__NativeArray(var17, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var18)->values[0] = (val*) var7;
((struct instance_array__NativeArray*)var18)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var18)->values[2] = (val*) var12;
((void (*)(val*, val*, long))(var16->class->vft[COLOR_array__Array__with_native]))(var16, var18, var17) /* with_native on <var16:Array[Object]>*/;
}
var19 = ((val* (*)(val*))(var16->class->vft[COLOR_string__Object__to_s]))(var16) /* to_s on <var16:Array[Object]>*/;
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var19) /* error on <var_v:TypeVisitor>*/;
goto RET_LABEL;
} else {
}
var20 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__anchor_to]))(var_v, var_recvtype) /* anchor_to on <var_v:TypeVisitor>*/;
var_unsafe_type = var20;
var21 = ((val* (*)(val*, val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__try_get_mproperty_by_name2]))(var_v, self, var_unsafe_type, var_name) /* try_get_mproperty_by_name2 on <var_v:TypeVisitor>*/;
var_mproperty = var21;
var22 = NULL;
if (var_mproperty == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (var23){
var24 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(var_v) /* modelbuilder on <var_v:TypeVisitor>*/;
if (varonce25) {
var26 = varonce25;
} else {
var27 = "Error: Attribute ";
var28 = 17;
var29 = string__NativeString__to_s_with_length(var27, var28);
var26 = var29;
varonce25 = var26;
}
if (varonce30) {
var31 = varonce30;
} else {
var32 = " doesn\'t exists in ";
var33 = 19;
var34 = string__NativeString__to_s_with_length(var32, var33);
var31 = var34;
varonce30 = var31;
}
if (varonce35) {
var36 = varonce35;
} else {
var37 = ".";
var38 = 1;
var39 = string__NativeString__to_s_with_length(var37, var38);
var36 = var39;
varonce35 = var36;
}
var40 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var40 = array_instance Array[Object] */
var41 = 5;
var42 = NEW_array__NativeArray(var41, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var42)->values[0] = (val*) var26;
((struct instance_array__NativeArray*)var42)->values[1] = (val*) var_name;
((struct instance_array__NativeArray*)var42)->values[2] = (val*) var31;
((struct instance_array__NativeArray*)var42)->values[3] = (val*) var_recvtype;
((struct instance_array__NativeArray*)var42)->values[4] = (val*) var36;
((void (*)(val*, val*, long))(var40->class->vft[COLOR_array__Array__with_native]))(var40, var42, var41) /* with_native on <var40:Array[Object]>*/;
}
var43 = ((val* (*)(val*))(var40->class->vft[COLOR_string__Object__to_s]))(var40) /* to_s on <var40:Array[Object]>*/;
((void (*)(val*, val*, val*))(var24->class->vft[COLOR_modelbuilder__ModelBuilder__error]))(var24, self, var43) /* error on <var24:ModelBuilder>*/;
goto RET_LABEL;
} else {
}
/* <var_mproperty:nullable MProperty(MProperty)> isa MAttribute */
cltype45 = type_model__MAttribute.color;
idtype46 = type_model__MAttribute.id;
if(cltype45 >= var_mproperty->type->table_size) {
var44 = 0;
} else {
var44 = var_mproperty->type->type_table[cltype45] == idtype46;
}
if (!var44) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 1589);
show_backtrace(1);
}
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AAttrFormExpr__mproperty_61d]))(self, var_mproperty) /* mproperty= on <self:AAttrFormExpr>*/;
var47 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__mmodule]))(var_v) /* mmodule on <var_v:TypeVisitor>*/;
var48 = ((val* (*)(val*, val*, val*))(var_mproperty->class->vft[COLOR_model__MProperty__lookup_definitions]))(var_mproperty, var47, var_unsafe_type) /* lookup_definitions on <var_mproperty:nullable MProperty(MAttribute)>*/;
var_mpropdefs = var48;
var49 = ((long (*)(val*))(var_mpropdefs->class->vft[COLOR_abstract_collection__Collection__length]))(var_mpropdefs) /* length on <var_mpropdefs:Array[MAttributeDef]>*/;
var50 = 1;
{ /* Inline kernel#Int#== (var49,var50) */
var53 = var49 == var50;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
if (!var51) {
fprintf(stderr, "Runtime error: %s", "Assert failed");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 1593);
show_backtrace(1);
}
var54 = ((val* (*)(val*))(var_mpropdefs->class->vft[COLOR_abstract_collection__Collection__first]))(var_mpropdefs) /* first on <var_mpropdefs:Array[MAttributeDef]>*/;
var_mpropdef = var54;
var55 = ((val* (*)(val*))(var_mpropdef->class->vft[COLOR_model__MAttributeDef__static_mtype]))(var_mpropdef) /* static_mtype on <var_mpropdef:MAttributeDef>*/;
if (var55 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 1595);
show_backtrace(1);
}
var_attr_type = var55;
var56 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__n_expr]))(self) /* n_expr on <self:AAttrFormExpr>*/;
/* <var56:AExpr> isa ASelfExpr */
cltype58 = type_parser_nodes__ASelfExpr.color;
idtype59 = type_parser_nodes__ASelfExpr.id;
if(cltype58 >= var56->type->table_size) {
var57 = 0;
} else {
var57 = var56->type->type_table[cltype58] == idtype59;
}
var60 = ((val* (*)(val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__resolve_for]))(var_v, var_attr_type, var_recvtype, var57) /* resolve_for on <var_v:TypeVisitor>*/;
var_attr_type = var60;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AAttrFormExpr__attr_type_61d]))(self, var_attr_type) /* attr_type= on <self:AAttrFormExpr>*/;
RET_LABEL:;
}
/* method typing#AAttrFormExpr#resolve_property for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAttrFormExpr__resolve_property(val* self, val* p0) {
typing__AAttrFormExpr__resolve_property(self, p0);
RET_LABEL:;
}
/* method typing#AAttrExpr#accept_typing for (self: AAttrExpr, TypeVisitor) */
void typing__AAttrExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AAttrFormExpr__resolve_property]))(self, var_v) /* resolve_property on <self:AAttrExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AAttrFormExpr__attr_type]))(self) /* attr_type on <self:AAttrExpr>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var) /* mtype= on <self:AAttrExpr>*/;
RET_LABEL:;
}
/* method typing#AAttrExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAttrExpr__accept_typing(val* self, val* p0) {
typing__AAttrExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AAttrAssignExpr#accept_typing for (self: AAttrAssignExpr, TypeVisitor) */
void typing__AAttrAssignExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : AExpr */;
val* var2 /* : nullable MType */;
short int var3 /* : Bool */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AAttrFormExpr__resolve_property]))(self, var_v) /* resolve_property on <self:AAttrAssignExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AAttrFormExpr__attr_type]))(self) /* attr_type on <self:AAttrAssignExpr>*/;
var_mtype = var;
var1 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAssignFormExpr__n_value]))(self) /* n_value on <self:AAttrAssignExpr>*/;
var2 = ((val* (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr_subtype]))(var_v, var1, var_mtype) /* visit_expr_subtype on <var_v:TypeVisitor>*/;
var2;
var3 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var3) /* is_typed= on <self:AAttrAssignExpr>*/;
RET_LABEL:;
}
/* method typing#AAttrAssignExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAttrAssignExpr__accept_typing(val* self, val* p0) {
typing__AAttrAssignExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AAttrReassignExpr#accept_typing for (self: AAttrReassignExpr, TypeVisitor) */
void typing__AAttrReassignExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : nullable MType */;
short int var4 /* : Bool */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AAttrFormExpr__resolve_property]))(self, var_v) /* resolve_property on <self:AAttrReassignExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AAttrFormExpr__attr_type]))(self) /* attr_type on <self:AAttrReassignExpr>*/;
var_mtype = var;
var1 = NULL;
if (var_mtype == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
goto RET_LABEL;
} else {
}
var3 = ((val* (*)(val*, val*, val*, val*))(self->class->vft[COLOR_typing__AReassignFormExpr__resolve_reassignment]))(self, var_v, var_mtype, var_mtype) /* resolve_reassignment on <self:AAttrReassignExpr>*/;
var3;
var4 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var4) /* is_typed= on <self:AAttrReassignExpr>*/;
RET_LABEL:;
}
/* method typing#AAttrReassignExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AAttrReassignExpr__accept_typing(val* self, val* p0) {
typing__AAttrReassignExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#AIssetAttrExpr#accept_typing for (self: AIssetAttrExpr, TypeVisitor) */
void typing__AIssetAttrExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
val* var1 /* : null */;
short int var2 /* : Bool */;
val* var3 /* : AExpr */;
val* var4 /* : nullable MType */;
val* var_recvtype /* var recvtype: MType */;
short int var5 /* : Bool */;
val* var6 /* : MType */;
val* var_bound /* var bound: MType */;
short int var7 /* : Bool */;
int cltype;
int idtype;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : NativeString */;
long var10 /* : Int */;
val* var11 /* : String */;
val* var12 /* : nullable MType */;
var_v = p0;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AAttrFormExpr__resolve_property]))(self, var_v) /* resolve_property on <self:AIssetAttrExpr>*/;
var = ((val* (*)(val*))(self->class->vft[COLOR_typing__AAttrFormExpr__attr_type]))(self) /* attr_type on <self:AIssetAttrExpr>*/;
var_mtype = var;
var1 = NULL;
if (var_mtype == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (var2){
goto RET_LABEL;
} else {
}
var3 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__AAttrFormExpr__n_expr]))(self) /* n_expr on <self:AIssetAttrExpr>*/;
var4 = ((val* (*)(val*))(var3->class->vft[COLOR_typing__AExpr__mtype]))(var3) /* mtype on <var3:AExpr>*/;
if (var4 == NULL) {
fprintf(stderr, "Runtime error: %s", "Cast failed");
fprintf(stderr, " (%s:%d)\n", "src/typing.nit", 1641);
show_backtrace(1);
}
var_recvtype = var4;
var5 = 0;
var6 = ((val* (*)(val*, val*, val*, short int))(var_v->class->vft[COLOR_typing__TypeVisitor__resolve_for]))(var_v, var_mtype, var_recvtype, var5) /* resolve_for on <var_v:TypeVisitor>*/;
var_bound = var6;
/* <var_bound:MType> isa MNullableType */
cltype = type_model__MNullableType.color;
idtype = type_model__MNullableType.id;
if(cltype >= var_bound->type->table_size) {
var7 = 0;
} else {
var7 = var_bound->type->type_table[cltype] == idtype;
}
if (var7){
if (varonce) {
var8 = varonce;
} else {
var9 = "Error: isset on a nullable attribute.";
var10 = 37;
var11 = string__NativeString__to_s_with_length(var9, var10);
var8 = var11;
varonce = var8;
}
((void (*)(val*, val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__error]))(var_v, self, var8) /* error on <var_v:TypeVisitor>*/;
} else {
}
var12 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__type_bool]))(var_v, self) /* type_bool on <var_v:TypeVisitor>*/;
((void (*)(val*, val*))(self->class->vft[COLOR_typing__AExpr__mtype_61d]))(self, var12) /* mtype= on <self:AIssetAttrExpr>*/;
RET_LABEL:;
}
/* method typing#AIssetAttrExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__AIssetAttrExpr__accept_typing(val* self, val* p0) {
typing__AIssetAttrExpr__accept_typing(self, p0);
RET_LABEL:;
}
/* method typing#ADebugTypeExpr#accept_typing for (self: ADebugTypeExpr, TypeVisitor) */
void typing__ADebugTypeExpr__accept_typing(val* self, val* p0) {
val* var_v /* var v: TypeVisitor */;
val* var /* : AExpr */;
val* var1 /* : nullable MType */;
val* var_expr /* var expr: nullable MType */;
val* var2 /* : null */;
short int var3 /* : Bool */;
val* var4 /* : MType */;
val* var_unsafe /* var unsafe: MType */;
val* var5 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var6 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var7 /* : Bool */;
val* var8 /* : null */;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
short int var10 /* : Bool */;
val* var11 /* : MType */;
val* var_umtype /* var umtype: MType */;
val* var12 /* : ModelBuilder */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : NativeString */;
long var15 /* : Int */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : NativeString */;
long var20 /* : Int */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : NativeString */;
long var25 /* : Int */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : NativeString */;
long var30 /* : Int */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : NativeString */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var37 /* : Array[Object] */;
long var38 /* : Int */;
val* var39 /* : NativeArray[Object] */;
val* var40 /* : String */;
short int var41 /* : Bool */;
var_v = p0;
var = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ADebugTypeExpr__n_expr]))(self) /* n_expr on <self:ADebugTypeExpr>*/;
var1 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__visit_expr]))(var_v, var) /* visit_expr on <var_v:TypeVisitor>*/;
var_expr = var1;
var2 = NULL;
if (var_expr == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (var3){
goto RET_LABEL;
} else {
}
var4 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__anchor_to]))(var_v, var_expr) /* anchor_to on <var_v:TypeVisitor>*/;
var_unsafe = var4;
var5 = ((val* (*)(val*))(self->class->vft[COLOR_parser_nodes__ADebugTypeExpr__n_type]))(self) /* n_type on <self:ADebugTypeExpr>*/;
var_ntype = var5;
var6 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__resolve_mtype]))(var_v, var_ntype) /* resolve_mtype on <var_v:TypeVisitor>*/;
var_mtype = var6;
var8 = NULL;
if (var_mtype == NULL) {
var9 = 0; /* is null */
} else {
var9 = 1; /* arg is null and recv is not */
}
var_ = var9;
if (var9){
var10 = ((short int (*)(val*, val*))(var_mtype->class->vft[COLOR_kernel__Object___33d_61d]))(var_mtype, var_expr) /* != on <var_mtype:nullable MType(MType)>*/;
var7 = var10;
} else {
var7 = var_;
}
if (var7){
var11 = ((val* (*)(val*, val*))(var_v->class->vft[COLOR_typing__TypeVisitor__anchor_to]))(var_v, var_mtype) /* anchor_to on <var_v:TypeVisitor>*/;
var_umtype = var11;
var12 = ((val* (*)(val*))(var_v->class->vft[COLOR_typing__TypeVisitor__modelbuilder]))(var_v) /* modelbuilder on <var_v:TypeVisitor>*/;
if (varonce) {
var13 = varonce;
} else {
var14 = "Found type ";
var15 = 11;
var16 = string__NativeString__to_s_with_length(var14, var15);
var13 = var16;
varonce = var13;
}
if (varonce17) {
var18 = varonce17;
} else {
var19 = " (-> ";
var20 = 5;
var21 = string__NativeString__to_s_with_length(var19, var20);
var18 = var21;
varonce17 = var18;
}
if (varonce22) {
var23 = varonce22;
} else {
var24 = "), expected ";
var25 = 12;
var26 = string__NativeString__to_s_with_length(var24, var25);
var23 = var26;
varonce22 = var23;
}
if (varonce27) {
var28 = varonce27;
} else {
var29 = " (-> ";
var30 = 5;
var31 = string__NativeString__to_s_with_length(var29, var30);
var28 = var31;
varonce27 = var28;
}
if (varonce32) {
var33 = varonce32;
} else {
var34 = ")";
var35 = 1;
var36 = string__NativeString__to_s_with_length(var34, var35);
var33 = var36;
varonce32 = var33;
}
var37 = NEW_array__Array(&type_array__Arraykernel__Object);
{ /* var37 = array_instance Array[Object] */
var38 = 9;
var39 = NEW_array__NativeArray(var38, &type_array__NativeArraykernel__Object);
((struct instance_array__NativeArray*)var39)->values[0] = (val*) var13;
((struct instance_array__NativeArray*)var39)->values[1] = (val*) var_expr;
((struct instance_array__NativeArray*)var39)->values[2] = (val*) var18;
((struct instance_array__NativeArray*)var39)->values[3] = (val*) var_unsafe;
((struct instance_array__NativeArray*)var39)->values[4] = (val*) var23;
((struct instance_array__NativeArray*)var39)->values[5] = (val*) var_mtype;
((struct instance_array__NativeArray*)var39)->values[6] = (val*) var28;
((struct instance_array__NativeArray*)var39)->values[7] = (val*) var_umtype;
((struct instance_array__NativeArray*)var39)->values[8] = (val*) var33;
((void (*)(val*, val*, long))(var37->class->vft[COLOR_array__Array__with_native]))(var37, var39, var38) /* with_native on <var37:Array[Object]>*/;
}
var40 = ((val* (*)(val*))(var37->class->vft[COLOR_string__Object__to_s]))(var37) /* to_s on <var37:Array[Object]>*/;
((void (*)(val*, val*, val*))(var12->class->vft[COLOR_modelbuilder__ModelBuilder__warning]))(var12, self, var40) /* warning on <var12:ModelBuilder>*/;
} else {
}
var41 = 1;
((void (*)(val*, short int))(self->class->vft[COLOR_typing__AExpr__is_typed_61d]))(self, var41) /* is_typed= on <self:ADebugTypeExpr>*/;
RET_LABEL:;
}
/* method typing#ADebugTypeExpr#accept_typing for (self: Object, TypeVisitor) */
void VIRTUAL_typing__ADebugTypeExpr__accept_typing(val* self, val* p0) {
typing__ADebugTypeExpr__accept_typing(self, p0);
RET_LABEL:;
}
